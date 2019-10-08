module.exports = grammar({
  name: 'DOCKER',
  rules: {
    // Top-level
    // A docker file is a sequence of (possible zero) parser
    // directives and then an arbitrary number of comments/directives
    docker_file: $ => seq(
      repeat($.parser_directive),
      repeat(choice(
        $._directive,
        $.comment,
        $.blank_line
      ))
    ),
    
    // Parser Directives (key=value)
    parser_directive: $ => seq(
      field('key', $._parser_directive_key),
      field('value', $._parser_directive_value),
    ),
    _parser_directive_key: $ => token(
      /# ?[a-zA-Z_][a-zA-Z0-9_]* ?=/
    ),
    _parser_directive_value: $ => token(
      /[^\s]+/
    ),

    // Comments 
    comment: $ => seq(
      '#',
      /.*\n?/
    ),

    // Many different directives we can use at any point in
    // the Dockerfile
    _directive: $ => choice(
      $.directive_add,
      $.directive_arg,
      $.directive_cmd,
      $.directive_copy,
      $.directive_entrypoint,
      $.directive_env,
      $.directive_expose,
      $.directive_from,
      $.directive_healthcheck,
      $.directive_label,
      $.directive_maintainer,
      $.directive_onbuild,
      $.directive_run,
      $.directive_shell,
      $.directive_stopsignal,
      $.directive_user,
      $.directive_volume,
      $.directive_workdir
    ),
    
    // DIRECTIVES:
    directive_add: $ => directive('ADD', $._maybe_json_to_list),
    directive_arg: $ => directive('ARG', /.*\n/),
    directive_cmd: $ => directive('CMD', $._maybe_json),
    directive_copy: $ => directive('COPY', $._maybe_json_to_list),
    directive_entrypoint: $ => directive('ENTRYPOINT', $._maybe_json),
    directive_env: $ => directive('ENV', $._name_value_pairs),
    directive_expose: $ => directive('EXPOSE', $._strings_whitespace_delim),
    directive_from: $ => directive('FROM', $._directive_from),
    directive_healthcheck: $ => directive('HEALTHCHECK', /([^\\\n]+|\\\n)+/),
    directive_label: $ => directive('LABEL', $._name_value_pairs),
    directive_maintainer: $ => directive('MAINTAINER', $._just_string),
    directive_onbuild: $ => directive('ONBUILD', /.*\n/),
    directive_run: $ => directive('RUN', $._maybe_json),
    directive_shell: $ => directive('SHELL', $._maybe_json),
    directive_stopsignal: $ => directive('STOPSIGNAL', $._just_string),
    directive_user: $ => directive('USER', $._just_string),
    directive_volume: $ => directive('VOLUME', $._maybe_json_to_list),
    directive_workdir: $ => directive('WORKDIR', $._just_string),

    // https://github.com/docker/distribution/blob/master/reference/regexp.go

    _from_name_component: $ => seq(
      /[a-z0-9]+/,
      repeat(seq(
        /[._]|__|[-]*/,
        /[a-z0-9]+/
      ))
    ),

    from_name: $ => seq(
      optional(
        /([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9-]*[a-zA-Z0-9])(\.|([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9-]*[a-zA-Z0-9]))*(:[0-9]+)?\//
      ),
      $._from_name_component,
      repeat(seq('/', $._from_name_component))
    ),

    from_tag: $ => token(
      /[\w][\w.-]*/
    ),

    from_digest: $ => seq(
      '@',
      /[A-Za-z][A-Za-z0-9]*(?:[-_+.][A-Za-z][A-Za-z0-9]*)*[:][A-Fa-f0-9]{32,}/
    ),

    from_as: $ => token(
      /[A-Za-z][A-Za-z0-9]*/
    ),

    _directive_from: $ => seq(
      $.from_name,
      optional(seq(':', $.from_tag)),
      optional(seq('@', $.from_digest)),
      optional(seq(
        optional($._token_whitespace),
        'AS',
        $._token_whitespace,
        $.from_as
      )),
      optional($._token_whitespace),
      /\n?/
    ),

    _name_value_pairs: $ => seq(
      optional($._token_whitespace),
      choice(
        $._key_space_value,
        seq(
          $._key_eq_value,
          repeat(seq(
            choice(
              seq(optional($._token_whitespace), $.line_continuation),
              seq(optional($._token_whitespace), $.line_continuation_with_extraneous_space),
              $._token_whitespace
            ),
            optional($._token_whitespace),
            $._key_eq_value
          )),
          optional(seq($._token_whitespace, $.line_continuation))
        )
      ),
      optional($._token_whitespace),
      /\n?/
    ),

    _key_eq_value: $ => seq(
      field('key', $.kv_key),
      '=',
      field('value', $.kv_value)
    ),

    _key_space_value: $ => seq(
      field('key', $.kv_key),
      /( |\t)(\\\n)?/,
      field('value', $._arbitrary_lines)
    ),

    kv_key: $ => /[^\s=\\]+/,
    kv_value: $ => choice(
      $.string_single_quoted,
      $.string_double_quoted,
      $.string_no_quotes
    ),

    string_no_quotes: $ => /([^"\s]|\\[\t\v\f\r ])*([^\s]|\\[\t\v\f\r ])*/,
    string_single_quoted: $ => /'([^']|\\')*'/,
    string_double_quoted: $ => seq(
      '"',
      repeat(
        token(
          prec(
            -1,
            /([^"\\`]|\\(.|\n))+/
          )
        )
      ),
      '"'
    ),

    _maybe_json_to_list: $ => seq(choice(
      $._json,
      $._strings_whitespace_delim,
    ), /\n?/),

    _maybe_json: $ => seq(choice(
      $._json,
      $._arbitrary_lines,
    ), /\n?/),

    // This is a little crazy but, essentially, we have
    // (possibly indented) lines and after each line we
    // could have some number of (good/bad) line continuations
    // following that, we could have some mix of blank lines / comments
    // (blank lines may have continuations/or they may not) and
    // then, finally, we could add another normal line and do
    // the whole thing on repeat
    _arbitrary_lines: $ => prec.right(seq(
      optional($.line_indent),
      $.simple_line, 
      repeat(seq(
        repeat1(seq(
          optional($.line_indent),
          choice(
            $.line_continuation,
            $.line_continuation_with_extraneous_space
          ),
          repeat(seq(
            choice(
              $.blank_line,
              $.comment_line
            ),
          )),
        )),
        optional($.line_indent),
        $.simple_line
      ))
    )),

    simple_line: $ => token(repeat1(choice(
      // Either we have a part of the line with no '\' or '\n'
      /[^\n\\]/,
      // Or we have a '\' eventually followed by a character other than '\n'
      /\\[^\n]*?[^\s\\]/
    ))),

    // Best case: we see exactly what we expect
    line_continuation: $ => token(
      /\\\n/
    ),

    // Or, alternatively, we see what looks like a continuation but has
    // extra spaces that (shouldn't?) be there
    line_continuation_with_extraneous_space: $ => token(
      /\\[\t\v\f\r ]+\n/
    ),

    // Grab comments in a structured way
    comment_line: $ => token(
      /[\t\v\f\r ]*#[^\n]*\n/
    ),

    // Also grab just blank lines since those can crop up too
    blank_line: $ => token(
      /[\t\v\f\r ]*\n/
    ),

    // Sometimes we have blank lines with a continuation
    blank_line_with_continuation: $ => token(
      /[\t\v\f\r ]*\\\n/
    ),

    // Finally, let's also extract (in a structured way) line 
    // indents if they are there
    line_indent: $ => token(
      /[\t\v\f\r ]*/
    ),

    // Embedded JSON ----------------------------------------------------------

    // We, unfortunately, also need to handle cases where
    // the directive is represented as JSON. This can get a bit
    // messy when we have valid directives with bash that looks
    // very close to json. Due to this, there's a bit of 
    // disambiguation going on here
    _json: $ => choice(
      // Empty array or just [ "" ]
      /\[[\t\v\f\r ]*\]/,
      /\[[\t\v\f\r ]*("[\t\v\f\r ]*")?[\t\v\f\r ]*\][\t\v\f\r ]*\n/,
      seq(
        /\[[\t\v\f\r ]*"/,
        optional(seq(
          $._json_value_no_first_quote,
          optional($._token_whitespace),
          repeat(seq(",", optional($._token_whitespace), $._json_value))
        )),
        /[\t\v\f\r ]*]/
      )
    ),

    _json_value: $ => choice(
      seq('"', '"'),
      seq('"', $._json_string_content, '"')
    ),
    _json_value_no_first_quote: $ => choice(
      '"',
      seq($._json_string_content, '"')
    ),

    _json_string_content: $ => repeat1(choice(
      token.immediate(/[^\\"\n]/),
      $._json_escape_sequence
    )),
    _json_escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|n|r|t|u)/
    )),

    // Embedded JSON ----------------------------------------------------------

    _strings_whitespace_delim: $ => seq(
      repeat1(seq(
        optional($._token_whitespace),
        $.whitespace_delim_value,
        repeat(seq(
          /\s*\\\n\s*/,
          choice(
            $.whitespace_delim_value,
            $.comment_line
          )
        ))
      )),
      optional($._token_whitespace),
      /\n?/
    ),

    whitespace_delim_value: $ => token(/[^\s]+/),

    _just_string: $ => seq(
      token(/[^\n]+/),
      /\n?/
    ),

    _token_whitespace: $ => token(
      /[\t\v\f\r ]+/
    ),

  }
});

function directive (token, rule) {
  let caseInsesitive = token.split('').map(
    c => '(' + c + '|' + c.toLowerCase() + ')'
  ).join('');

  return seq(
    new RegExp(caseInsesitive),
    rule
  );
}
