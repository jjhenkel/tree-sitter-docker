
const FROM_PART_REGEX = /[^\$\s\/:@\{\}%<>=\?]+/;

module.exports = grammar({
  name: 'DOCKER',
  
  extras: $ => [
    /\s/,
    $.comment,
    $.line_continuation
  ],

  conflicts: $ => [
    [ $.repository ],
    [ $.run ],
    [ $._port ]
  ],

  rules: {
    dockerfile: $ => seq(
      repeat(
        field('directives', $._directive)
      ),
    ),

    _directive: $ => choice(
      $.add,
      $.arg,
      $.cmd,
      $.copy,
      $.entrypoint,
      $.env,
      $.expose,
      $.from,
      $.healthcheck,
      $.label,
      $.maintainer,
      $.onbuild,
      $.run,
      $.shell,
      $.stopsignal,
      $.user,
      $.volume,
      $.workdir
    ),

    env: $ => seq(
      any_casing('ENV'),
      $._space_no_newline,
      $._anything
    ),

    label: $ => seq(
      any_casing('LABEL'),
      $._space_no_newline,
      $._anything
    ),

    onbuild: $ => seq(
      any_casing('ONBUILD'),
      $._space_no_newline,
      $._anything
    ),

    healthcheck: $ => seq(
      any_casing('HEALTHCHECK'),
      $._space_no_newline,
      $._anything
    ),

    arg: $ => seq(
      any_casing('ARG'),
      $._space_no_newline,
      seq(
        $.arg_name,
        optional(seq('=', $.arg_default))
      )
    ),

    arg_name: $ => /[a-zA-Z_][a-zA-Z_\-0-9]*/,
    arg_default: $ => /[^\n]+/,

    add: $ => seq(
      any_casing('ADD'),
      $._space_no_newline,
      choice(
        repeat1($.path),
        $.json_array
      )
    ),

    copy: $ => seq(
      any_casing('COPY'),
      $._space_no_newline,
      choice(
        repeat1($.path),
        $.json_array
      )
    ),

    stopsignal: $ => seq(
      any_casing('STOPSIGNAL'),
      $._space_no_newline,
      choice(
        $.signal_name, $.signal_num
      )
    ),

    signal_name: $ => seq(
      any_casing('SIG'),
      /[a-zA-Z0-9]+/
    ),

    signal_num: $ => /\d\d?\d?/,

    shell: $ => seq(
      any_casing('SHELL'),
      $._space_no_newline,
      $.json_array
    ),

    volume: $ => seq(
      any_casing('VOLUME'),
      $._space_no_newline,
      choice(
        repeat1($.path),
        $.json_array
      )
    ),

    path: $ => choice(
      /[^"\s][^"\s]*/,
      seq('"', /[^"\n]+/, '"')
    ),

    workdir: $ => seq(
      any_casing('WORKDIR'),
      $._space_no_newline,
      maybe_var_interpolation(/[^\n]+/, $)
    ),

    user: $ => seq(
      any_casing('USER'),
      $._space_no_newline,
      choice(
        seq($.user_name, optional(seq(':', $.user_group))),
        seq($.user_id, optional(seq(':', $.user_group_id))),
        seq('$', $.docker_variable)
      )
    ),

    user_name: $ => /[a-zA-Z][^\s:]*/,
    user_group: $ => /[a-zA-Z][^\s:]*/,
    user_id: $ => /\d+/,
    user_group_id: $ => /\d+/,

    cmd: $ => seq(
      any_casing('CMD'),
      $._space_no_newline,
      $._anything_or_json_array
    ),

    entrypoint: $ => seq(
      any_casing('ENTRYPOINT'),
      $._space_no_newline,
      $._anything_or_json_array
    ),

    run: $ => seq(
      any_casing('RUN'),
      $._space_no_newline,
      $._anything_or_json_array
    ),

    maintainer: $ => prec(1, seq(
      any_casing('MAINTAINER'),
      $._space_no_newline,
      $._anything,
      optional($.comment)
    )),

    expose: $ => seq(
      any_casing('EXPOSE'),
      choice(
        $.mapped_no_lhs,
        repeat1(
          maybe_double_quoted($._port_spec)
        )
      )
    ),

    _port_spec: $ => prec.left(choice(
      $._port,
      $.mapped_port
    )),

    mapped_port: $ => seq($._port, ':', $._port),
    mapped_no_lhs: $ => seq(':', $._port),

    _port: $ => maybe_double_quoted(choice(
      $.port, $.port_range
    )),

    port: $ => $._port_part,
    port_range: $ => seq($._port_part, '-', $._port_part),

    _port_part: $ => seq(
      choice(
        /\d+/, seq('$', $.docker_variable)
      ),
      optional($.port_protocol)
    ),

    port_protocol: $ => seq('/', choice(
      any_casing('UDP'),
      any_casing('TCP'),
      seq('$', $.docker_variable)
    )),

    from: $ => seq(
      any_casing('FROM'),
      optional(seq(
        '--platform=',
        $.platform
      )),
      optional($.repository),
      $.image,
      optional(seq(
        ':', $.tag
      )),
      optional(seq(
        '@', optional('sha256:'), $.digest
      )),
      optional(seq(
        any_casing('AS'), $.as_name
      ))
    ),
  
    platform: $ => choice(
      seq('$', $.docker_variable),
      FROM_PART_REGEX
    ),

    repository: $ => choice(
      $._repository_start,
      seq($._repository_start, repeat1($._repository_continued)),
    ),

    _repository_start: $ => seq(
      maybe_var_or_template_interpolation(FROM_PART_REGEX, $),
      choice(
        token.immediate(/:\d+\//),
        '/'
      )
    ),
    _repository_continued: $ => seq(
      maybe_var_or_template_interpolation(FROM_PART_REGEX, $),
      '/'
    ),

    image: $ => maybe_var_or_template_interpolation(FROM_PART_REGEX, $),
    tag: $ => maybe_var_or_template_interpolation(FROM_PART_REGEX, $),
    digest: $ => maybe_var_or_template_interpolation(FROM_PART_REGEX, $),
    as_name: $ => maybe_var_or_template_interpolation(FROM_PART_REGEX, $),

    docker_variable: $ => choice(
      $._docker_variable,
      seq(
        token.immediate('{'),
        $._docker_variable,
        optional(choice(
          $.variable_default_value,
          $.variable_this_or_null
        )),
        token.immediate('}')
      )
    ),

    _docker_variable: $ => token.immediate(/[^\/\}\{\$"\s:]+/),

    variable_default_value: $ => seq(
      token.immediate(':-'),
      token.immediate(/[^\}\{"\n]+/)
    ),

    variable_this_or_null: $ => seq(
      token.immediate(':+'),
      token.immediate(/[^\}\{"\n]+/)
    ),

    _anything: $ => repeat1(token.immediate(
      /([^\n\\#\[]|\[\s*[^\s"\]]|[^\s]#)([^\s]#|\\[^\s]|[^\n\\#])*/
    )),

    _json_prefix: $ => token.immediate(
      /\[( |\t|\\\n)*\"/
    ),

    json_array: $ => seq(
      $._json_prefix,
      optional(
        choice('"', seq($._json_string, '"'))
      ),
      repeat(seq(',', $._json_value)),
      ']'
    ),

    _anything_or_json_array: $ => choice(
      $.json_array,
      $._anything
    ),

    _space_no_newline: $ => /[\t\f\r\v ]+/,

    template_expr_curly_braces: $ => /[^\}\n]+/,
    template_expr_percent_signs: $ => /[^%\n]+/,
    template_expr_less_than_equals: $ => repeat1(
      choice(/[^%>\?%\n]+/, /\?[^>]/, /%[^>]/)
    ),

    comment: $ => token(prec(-10, /#[^\n]*\n*/)),
    line_continuation: $ => token(prec(-1, /\\\s*\n/)),

    // JSON excerpt
    _json_value: $ => choice(
      seq('"', '"'),
      seq('"', $._json_string, '"')
    ),

    _json_string: $ => repeat1(choice(
      token.immediate(/[^\\"\n]/),
      $._json_escape_sequence
    )),

    _json_escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/
    )),

  }
});

function any_casing (token) { 
  return new RegExp(token.split('').map(
    c => '(' + c + '|' + c.toLowerCase() + ')'
  ).join(''));
} 

function maybe_double_quoted (rule) { 
  return choice(
    seq('"', rule, '"'), rule
  );
}

function maybe_var_or_template_interpolation (regex, $) {
  return choice(
    maybe_var_interpolation(regex, $),
    // (3) {{var}}|something{{var}}({{var}}|something{{var}})*something?
    //     ^^ where these '{{' '}}' pairs are varied according to common template
    //     opening and closing pairs
    maybe_template_interpolation(
      regex, /\{(\}|\}\})?/, seq($.template_expr_curly_braces, /(\}|\}\})?\}/)
    ),
    maybe_template_interpolation(
      regex, /%%?/, seq($.template_expr_percent_signs, /%?%/)
    ),
    maybe_template_interpolation(
      regex, /<(%|\?)=?/, seq($.template_expr_less_than_equals, /(%|\?)>/)
    ),
  );
}

function maybe_var_interpolation (regex, $) {
  return choice(
    // (1) Just a match with no interpolation
    regex,
    // (2) ${var}|something${var}(${var}|something${var})*something?
    seq(
      choice(
        seq('$', $.docker_variable),
        seq(
          new RegExp(regex.source + '\\$'),
          $.docker_variable
        )
      ),
      repeat(choice(
        seq('$', $.docker_variable),
        seq(
          token.immediate(new RegExp(regex.source + '\\$')),
          $.docker_variable
        )
      )),
      optional(token.immediate(regex))
    )
  );
}

function maybe_template_interpolation (regex, opener, rule) {
  return seq(
    choice(
      seq(opener, rule),
      seq(
        new RegExp(regex.source + opener.source),
        rule
      )
    ),
    repeat(choice(
      seq(opener, rule),
      seq(
        token.immediate(
          new RegExp(regex.source + opener.source)
        ),
        rule
      )
    )),
    optional(token.immediate(regex))
  );
}
