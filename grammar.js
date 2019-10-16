
const FROM_PART_REGEX = /[^\$\s\/:@\{\}%<>=\?]+/;

module.exports = grammar({
  name: 'DOCKER',
  
  extras: $ => [
    $.comment,
    $.line_continuation,
    $._space,
  ],

  conflicts: $ => [
    [ $._port ],
    [ $.repository ],
    [ $.run ],
  ],

  rules: {
    // ############### TOP LEVEL ############################################ /
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
      $.workdir,
      $._blank_line
    ),

    // ############### DIRECTIVES ########################################### /
    add: $ => directive($, 'ADD', choice(
      $._paths, $.json_array
    )),

    arg: $ => directive($, 'ARG', seq(
      $.arg_name, optional(seq('=', $.arg_default))
    )),

    cmd: $ => directive($, 'CMD', seq(
      $._anything_or_json_array
    )),

    copy: $ => directive($, 'COPY', choice(
      $._paths, $.json_array
    )),

    entrypoint: $ => directive($, 'ENTRYPOINT', seq(
      $._anything_or_json_array
    )),

    env: $ => directive($, 'ENV', seq(
      $._anything
    )),

    expose: $ => directive($, 'EXPOSE', choice(
      $.mapped_no_lhs,
      repeat1(
        maybe_double_quoted($._port_spec)
      )
    )),

    from: $ => directive($, 'FROM', seq(
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
        $._space_no_newline, any_casing('AS'), $._space_no_newline, $.as_name
      ))
    )),

    healthcheck: $ => directive($, 'HEALTHCHECK', choice(
      $.hc_none,
      seq(
        repeat($._hc_options),
        $._hc_command
      )
    )),

    label: $ => directive($, 'LABEL', seq(
      $._labels
    )),

    maintainer: $ => directive($, 'MAINTAINER', seq(
      $._anything, optional($.comment)
    )),

    onbuild: $ => directive($, 'ONBUILD', choice(
      $.add,
      $.arg,
      $.cmd,
      $.copy,
      $.entrypoint,
      $.env,
      $.expose,
      $.healthcheck,
      $.label,
      $.run,
      $.shell,
      $.stopsignal,
      $.user,
      $.volume,
      $.workdir
    )),

    run: $ => directive($, 'RUN', seq(
      $._anything_or_json_array
    )),
    
    shell: $ => directive($, 'SHELL', seq(
      $.json_array
    )),

    stopsignal: $ => directive($, 'STOPSIGNAL', choice(
      $.signal_name, $.signal_num
    )),

    user: $ => directive($, 'USER', choice(
      seq($.user_name, optional(seq(':', $.user_group))),
      seq($.user_id, optional(seq(':', $.user_group_id))),
      seq('$', $.docker_variable)
    )),

    volume: $ => directive($, 'VOLUME', choice(
      $._paths, $.json_array
    )),

    workdir: $ => directive($, 'WORKDIR', seq(
      maybe_var_interpolation($, /[^\n]+/)
    )),

    // ############### PLUMBING FOR 'ADD' ################################### /

    // ############### PLUMBING FOR 'ARG' ################################### /
    arg_name: $ => /[a-zA-Z_][a-zA-Z_\-0-9]*/,
    arg_default: $ => /[^\n]+/,

    // ############### PLUMBING FOR 'CMD' ################################### /
    // ############### PLUMBING FOR 'COPY' ################################## /
    // ############### PLUMBING FOR 'ENTRYPOINT' ############################ /
    // ############### PLUMBING FOR 'ENV' ################################### /

    // ############### PLUMBING FOR 'EXPOSE' ################################ /
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

    // ############### PLUMBING FOR 'FROM' ################################## /
    platform: $ => choice(
      seq('$', $.docker_variable),
      FROM_PART_REGEX
    ),

    repository: $ => choice(
      $._repository_start,
      seq($._repository_start, repeat1($._repository_continued)),
    ),

    _repository_start: $ => seq(
      maybe_var_or_template_interpolation($, FROM_PART_REGEX),
      choice(
        token.immediate(/:\d+\//),
        '/'
      )
    ),
    _repository_continued: $ => seq(
      maybe_var_or_template_interpolation($, FROM_PART_REGEX),
      '/'
    ),

    image: $ => maybe_var_or_template_interpolation($, FROM_PART_REGEX),
    tag: $ => maybe_var_or_template_interpolation($, FROM_PART_REGEX),
    digest: $ => maybe_var_or_template_interpolation($, FROM_PART_REGEX),
    as_name: $ => maybe_var_or_template_interpolation($, FROM_PART_REGEX),

    // ############### PLUMBING FOR 'HEALTHCHECK' ########################### /
    hc_none: $ => any_casing('NONE'),

    _hc_interval: $ => seq(
      '--interval', '=', $.hc_interval
    ),
    hc_interval: $ => /\w+/,

    _hc_timeout: $ => seq(
      '--timeout', '=', $.hc_timeout
    ),
    hc_timeout: $ => /\w+/,

    _hc_start_period: $ => seq(
      '--start-period', '=', $.hc_start_period
    ),
    hc_start_period: $ => /\w+/,

    _hc_retries: $ => seq(
      '--retires', '=', $.hc_retries
    ),
    hc_retries: $ => /\d+/,

    _hc_options: $ => choice(
      $._hc_interval,
      $._hc_timeout,
      $._hc_start_period,
      $._hc_retries
    ),
    
    _hc_command: $ => seq(
      any_casing('CMD'),
      $._space_no_newline,
      $.hc_command
    ),

    hc_command: $ => $._anything_or_json_array,

    // ############### PLUMBING FOR 'LABEL' ################################# /
    _labels: $ => repeat1($.label_pair),

    label_pair: $ => seq($.label_key, /(=| |\t)/, $.label_value),

    label_key: $ =>
      token.immediate(/"?[a-zA-Z][a-zA-Z0-9_\-\.]*"?/),
    label_value: $ => choice(
      /""/,
      token.immediate(/([^\s\\\"]|\\[^\s\"])+/),
      seq('"', repeat1(token.immediate(/([^\n"]|\\")+/)), '"')
    ),

    // ############### PLUMBING FOR 'MAINTAINER' ############################ /
    // ############### PLUMBING FOR 'ONBUILD' ############################### /
    // ############### PLUMBING FOR 'RUN' ################################### /
    // ############### PLUMBING FOR 'SHELL' ################################# /

    // ############### PLUMBING FOR 'STOPSIGNAL' ############################ /
    signal_num: $ => /\d\d?\d?/,
    signal_name: $ => seq(
      any_casing('SIG'),
      /[a-zA-Z0-9]+/
    ),


    // ############### PLUMBING FOR 'USER' ################################## /
    user_name: $ => /[a-zA-Z][^\s:]*/,
    user_group: $ => /[a-zA-Z][^\s:]*/,
    user_id: $ => /\d+/,
    user_group_id: $ => /\d+/,

    // ############### PLUMBING FOR 'VOLUME' ################################ /
    // ############### PLUMBING FOR 'WORKDIR' ############################### /


    // ############### MISC. UTILITIES ###################################### /
    path: $ => token.immediate(
      /([^"\s\[\\][^"\s]*|"[^"\n]*")/
    ),

    _paths: $ => repeat1(seq($.path, optional($._space_no_newline))),
    
    _anything: $ => repeat1(token.immediate(
      /([^\n\\#\[]|\[\s*[^\s"\]]|[^\s]#)([^\s]#|\\[^\s]|[^\n\\#])*/
    )),

    // ############### DOCKER VARIABLE HANDLING ############################# /
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

    variable_default_value: $ => seq(
      token.immediate(':-'),
      token.immediate(/[^\}\{"\n]+/)
    ),

    variable_this_or_null: $ => seq(
      token.immediate(':+'),
      token.immediate(/[^\}\{"\n]+/)
    ),

    _docker_variable: $ => token.immediate(/[^\/\}\{\$"\s:]+/),

    // ############### OUT-OF-DOCKER TEMPLATING ############################# /
    template_expr_curly_braces: $ => /[^\}\n]+/,
    template_expr_percent_signs: $ => /[^%\n]+/,
    template_expr_less_than_equals: $ => repeat1(
      choice(/[^%>\?%\n]+/, /\?[^>]/, /%[^>]/)
    ),


    // ############### VARIOUS SPACING ###################################### /
    _space: $ => token(prec(-11, /\s/)),
    _blank_line: $ => /[\t\f\r\v ]*\n/,
    _space_no_newline: $ => /[\t\f\r\v ]+/,
    comment: $ => token(prec(-10, /#[^\n]*\n*/)),
    line_continuation: $ => token(prec(-1, /\\\s*\n/)),

    // ############### MODIFIED JSON EXCERPT ################################ /
    json_array: $ => seq(
      $._json_prefix,
      optional(
        choice('"', seq($._json_string, '"'))
      ),
      repeat(seq(',', $._json_value)),
      ']'
    ),

    _json_prefix: $ => token.immediate(
      /\[( |\t|\\\n)*\"/
    ),

    _anything_or_json_array: $ => choice(
      $.json_array,
      $._anything
    ),

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

// ############### UTILITY FUNCTIONS TO BUILD RULES ########################### /

function directive ($, name, body_rule) {
  return seq(
    any_casing(name.toUpperCase()),
    $._space_no_newline,
    body_rule
  );
}

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

function maybe_var_or_template_interpolation ($, regex) {
  return choice(
    maybe_var_interpolation($, regex),
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

function maybe_var_interpolation ($, regex) {
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
