module.exports = grammar({
  name: 'DOCKER',

  rules: {
    // Top-level
    // A docker file is a sequence of (possible zero) parser
    // directives and then an arbitrary number of comments/directives
    docker_file: $ => seq(
      repeat($.parser_directive),
      repeat(choice($.directive, $.comment))
    ),
    
    // Parser Directives (key=value)
    parser_directive: $ => seq(
      '#',
      / */,
      field('key', $._parser_directive_key),
      '=',
      field('value', $._parser_directive_value),
    ),
    _parser_directive_key: $ => token(
      /[a-zA-Z_][a-zA-Z0-9_]*/
    ),
    _parser_directive_value: $ => token(
      /[^\s]+/
    ),

    // Comments 
    comment: $ => seq(
      '#',
      /.*/
    ),

    // Many different directives we can use at any point in
    // the Dockerfile
    directive: $ => choice(
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
    directive_arg: $ => directive('ARG', /.*/),
    directive_cmd: $ => directive('CMD', $._maybe_json),
    directive_copy: $ => directive('COPY', $._maybe_json_to_list),
    directive_entrypoint: $ => directive('ENTRYPOINT', $._maybe_json),
    directive_env: $ => directive('ENV', /.*/),
    directive_expose: $ => directive('EXPOSE', $._strings_whitespace_delim),
    directive_from: $ => directive('FROM', $._strings_whitespace_delim),
    directive_healthcheck: $ => directive('HEALTHCHECK', /.*/),
    directive_label: $ => directive('LABEL', /.*/),
    directive_maintainer: $ => directive('MAINTAINER', $._just_string),
    directive_onbuild: $ => directive('ONBUILD', /.*/),
    directive_run: $ => directive('RUN', $._maybe_json),
    directive_shell: $ => directive('SHELL', $._maybe_json),
    directive_stopsignal: $ => directive('STOPSIGNAL', $._just_string),
    directive_user: $ => directive('USER', $._just_string),
    directive_volume: $ => directive('VOLUME', $._maybe_json_to_list),
    directive_workdir: $ => directive('WORKDIR', $._just_string),

    _maybe_json_to_list: $ => choice(
      $._json,
      $._strings_whitespace_delim 
    ),

    _maybe_json: $ => choice(
      $._json,
      token(prec(-1, /([^\\\n]\\\n|[^\\\n])+/))
    ),

    _json: $ => seq(
      "[", commanSep($._json_value), "]"
    ),
    _json_value: $ => choice(
      seq('"', '"'),
      seq('"', $._json_string_content, '"')
    ),
    _json_string_content: $ => repeat1(choice(
      token.immediate(/[^\\"\n]/),
      $._json_escape_sequence
    )),
    _json_escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|n|r|t|u)/
    )),

    _strings_whitespace_delim: $ => repeat1(
      seq(optional($._token_whitespace), token(/[^\s]+/))
    ),

    _just_string: $ => token(/^[\s]+/),

    _token_comment: $ => token(
      /#.*/
    ),

    _token_whitespace: $ => token(
      /[\t\v\f\r ]+/
    ),

  }
});

function commanSep (rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

function directive (token, rule) {
  return seq(
    new RegExp(token + '[\t\v\f\r ]*'), rule
  );
}
