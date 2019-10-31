
const FROM_PART_REGEX = /[^\$\s\/:@\{\}%<>=\?]+/;

module.exports = grammar({
  name: 'docker',
  
  extras: $ => [
    $.comment,
    $.line_continuation,
    $._space
  ],

  conflicts: $ => [
    [ $._port ],
    [ $.repository ],
    [ $.user_name ],
  ],

  externals: $ => [
    $.escape_directive,
    $.line_continuation,
    $._template_expr_at_symbols_start_ex,
    $._digest_start_ex,
    $._json_array_start,
    $._anything_ex,
  ],

  rules: {
    // ############### TOP LEVEL ############################################ /
    dockerfile: $ => seq(
      optional($.escape_directive),
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
      $.malformed_empty_directive,
      $._blank_line,
    ),

    malformed_empty_directive: $ => choice(
      new RegExp(any_casing('ADD').source + '\n'),
      new RegExp(any_casing('ARG').source + '\n'),
      new RegExp(any_casing('CMD').source + '\n'),
      new RegExp(any_casing('COPY').source + '\n'),
      new RegExp(any_casing('ENTRYPOINT').source + '\n'),
      new RegExp(any_casing('ENV').source + '\n'),
      new RegExp(any_casing('EXPOSE').source + '\n'),
      new RegExp(any_casing('FROM').source + '\n'),
      new RegExp(any_casing('HEALTHCHECK').source + '\n'),
      new RegExp(any_casing('LABEL').source + '\n'),
      new RegExp(any_casing('MAINTAINER').source + '\n'),
      new RegExp(any_casing('ONBUILD').source + '\n'),
      new RegExp(any_casing('RUN').source + '\n'),
      new RegExp(any_casing('SHELL').source + '\n'),
      new RegExp(any_casing('STOPSIGNAL').source + '\n'),
      new RegExp(any_casing('USER').source + '\n'),
      new RegExp(any_casing('VOLUME').source + '\n'),
      new RegExp(any_casing('WORKDIR').source + '\n'),
    ),

    // ############### DIRECTIVES ########################################### /
    add: $ => directive($, 'ADD', choice(
      $._paths, $.json_array
    )),

    arg: $ => directive($, 'ARG', seq(
      optional(token.immediate(/"/)),
      $.arg_name, optional(choice(
        seq('=', $.arg_default),
        seq(/ |\t/, alias($.arg_default, $.arg_malformed_default))
      )),
      optional(token.immediate(prec(-10, /"/)))
    )),

    cmd: $ => directive($, 'CMD', seq(
      $._anything_or_json_array
    )),

    copy: $ => directive($, 'COPY', seq(
      repeat(choice(
        $._chown,
        $._from_layer
      )),
      choice(
        $._paths,
        $.json_array
      )
    )),

    entrypoint: $ => directive($, 'ENTRYPOINT', seq(
      $._anything_or_json_array
    )),

    env: $ => directive($, 'ENV', seq(
      $._env_pairs
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
        $._digest_start_ex, $.digest
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
      ),
      $.hc_malformed
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
      maybe_double_quoted(seq($.user_name, optional(seq(':', $.user_group)))),
      maybe_double_quoted(seq($.user_id, optional(seq(':', $.user_group_id))))
    )),

    volume: $ => directive($, 'VOLUME', choice(
      $._paths,
      $.json_array
    )),

    workdir: $ => directive($, 'WORKDIR', seq(
      $.path
    )),

    // ############### PLUMBING FOR 'ADD' ################################### /

    // ############### PLUMBING FOR 'ARG' ################################### /
    arg_name: $ => /[a-zA-Z_0-9][a-zA-Z_\-0-9]*/,
    arg_default: $ => repeat1(
      choice(
        /'([^\n'\\]|\\[^\s])*'/,
        prec.right(maybe_var_interpolation($, /([^\n\\\$]|\\[^\s])*/))
      )
    ),

    // ############### PLUMBING FOR 'CMD' ################################### /
    // ############### PLUMBING FOR 'COPY' ################################## /
    _chown: $ => seq(
      token.immediate('--chown='),
      $.chown,
      $._space_no_newline
    ),

    _from_layer: $ => seq(
      token.immediate(prec(1, /\\?--from=/)),
      $.from_layer,
      $._space_no_newline
    ),

    from_layer: $ => maybe_var_or_template_interpolation(
      $,  /[^\$\s\{\}%<>=\?]+/
    ),

    chown: $ => choice(
      seq($.user_name, optional(seq(':', $.user_group))),
      seq($.user_id, optional(seq(':', $.user_group_id)))
    ),

    // ############### PLUMBING FOR 'ENTRYPOINT' ############################ /
    // ############### PLUMBING FOR 'ENV' ################################### /
    _env_pairs: $ => choice(
      $.env_key,
      $.env_pair,
      seq(
        alias($.env_pair_eq, $.env_pair),
        repeat(seq($._space_no_newline, alias($.env_pair_eq, $.env_pair))),
        optional($._space_no_newline)
      )
    ),

    env_pair_eq: $ => seq(
      optional(token.immediate(prec(-10, '"'))),
      $.env_key,
      token.immediate('='),
      optional($.env_value),
      optional(token.immediate(prec(-10, '"')))
    ),
    env_pair: $ => seq($.env_key, $._space_no_newline, alias($._anything, $.env_value)),

    env_key: $ => choice(
      seq('$', $.docker_variable),
      choice(
        token.immediate(/[^\s"\\`=$]*/),
        token.immediate(/"[^\n"=]*"/)
      )
    ),

    env_value: $ => token.immediate(
      /([^\s\\'"]|\\[^\s]|\\ |"([^\n\r"\\]|\\[ \t]*\r?\n|\\[^\n])*"|'([^\n\r']|\\'|\\[ \t]*\r?\n|\\[^\n])*')+/
    ),

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

    _port_part: $ => prec.right(seq(
      maybe_var_or_template_interpolation($, /\d+/),
      optional($.port_protocol)
    )),

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
    digest: $ => maybe_var_or_template_interpolation($, /[^\$\s\/@\{\}%<>=\?]+/),
    as_name: $ => maybe_var_or_template_interpolation($, FROM_PART_REGEX),

    // ############### PLUMBING FOR 'HEALTHCHECK' ########################### /
    hc_none: $ => any_casing('NONE'),

    _hc_interval: $ => seq(
      '--interval', '=', $.hc_interval
    ),
    hc_interval: $ => /[^\s]+/,

    _hc_timeout: $ => seq(
      '--timeout', '=', $.hc_timeout
    ),
    hc_timeout: $ => /\w+/,

    _hc_start_period: $ => seq(
      '--start-period', '=', $.hc_start_period
    ),
    hc_start_period: $ => /\w+/,

    _hc_retries: $ => seq(
      '--retries', '=', $.hc_retries
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
      optional(seq(
        $._space_no_newline,
        $.hc_command
      ))
    ),

    hc_command: $ => $._anything_or_json_array,

    hc_malformed: $ => token.immediate(prec(-10, /[^\n]+\n/)),

    // ############### PLUMBING FOR 'LABEL' ################################# /
    _labels: $ => choice(
      $.label_pair,
      seq(
        alias($.label_pair_eq, $.label_pair),
        repeat(seq($._space_no_newline, alias($.label_pair_eq, $.label_pair))),
        optional($._space_no_newline)
      )
    ),
    
    label_pair_eq: $ => seq(
      optional(token.immediate(prec(-10, '"'))),
      $.label_key,
      token.immediate('='),
      optional($.label_value),
      optional(token.immediate(prec(-10, '"')))
    ),
    label_pair: $ => seq($.label_key, $._space_no_newline, alias($._anything, $.label_value)),

    label_key: $ => choice(
      seq('$', $.docker_variable),
      choice(
        token.immediate(/[^\s"\\`=$]*/),
        token.immediate(/"[^\n"=]*"/)
      )
    ),

    label_value: $ => token.immediate(
      /([^\s\\'"]|\\[^\s]|\\ |"([^\n\r"\\]|\\[ \t]*\r?\n|\\[^\n])*"|'([^\n\r']|\\'|\\[ \t]*\r?\n|\\[^\n])*')+/
    ),


    // ############### PLUMBING FOR 'MAINTAINER' ############################ /
    // ############### PLUMBING FOR 'ONBUILD' ############################### /
    // ############### PLUMBING FOR 'RUN' ################################### /
    // ############### PLUMBING FOR 'SHELL' ################################# /

    // ############### PLUMBING FOR 'STOPSIGNAL' ############################ /
    signal_num: $ => /\d\d?\d?/,
    signal_name: $ => seq(
      /[a-zA-Z0-9]+(\+\d+)?/
    ),


    // ############### PLUMBING FOR 'USER' ################################## /
    user_name: $ => maybe_double_quoted(maybe_var_or_template_interpolation(
      $, /[a-zA-Z_][^\s:'"]*/
    )),
    user_group: $ => maybe_double_quoted(maybe_var_or_template_interpolation(
      $, /[a-zA-Z_][^\s:'"]*/
    )),
    user_id: $ => token.immediate(/\d+/),
    user_group_id: $ => token.immediate(/\d+/),

    // ############### PLUMBING FOR 'VOLUME' ################################ /
    // ############### PLUMBING FOR 'WORKDIR' ############################### /


    // ############### MISC. UTILITIES ###################################### /
    path: $ => prec.right(choice(
      maybe_var_interpolation($, (postfix) =>
        token.immediate(prec(-10, new RegExp(
          /([^"\s\\\$]|\\[^"\s\\\$])([^"\s\$]|\\")*/.source + postfix
        )))
      ),
      seq(
        '"',
        maybe_var_interpolation($, (postfix) => 
          token.immediate(prec(-10, new RegExp(/[^"\n\$]*/.source + postfix)))
        ),
        '"'
      ),
      seq(
        "'",
        maybe_var_interpolation($, (postfix) => 
          token.immediate(prec(-10, new RegExp(/[^'\n\$]*/.source + postfix)))
        ),
        "'"
      )
    )),

    _paths: $ => repeat1(seq($.path, optional($._space_no_newline))),
    
    _anything: $ => repeat1($._anything_ex),

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

    _docker_variable: $ => token.immediate(/[^\/\}\{\$"\s:=]+/),

    // ############### OUT-OF-DOCKER TEMPLATING ############################# /
    template_expr_at_symbols: $ => /[^@\n]+/,
    template_expr_curly_braces: $ => /[^\}\n]+/,
    template_expr_percent_signs: $ => /[^%\n]+/,
    template_expr_less_than: $ => repeat1(
      choice(/[^%>\?%\n]+/, /\?[^>]/, /%[^>]/)
    ),


    // ############### VARIOUS SPACING ###################################### /
    _space: $ => token(prec(-11, /\s/)),
    _blank_line: $ => /[\t\f\r\v ]*\n/,
    _space_no_newline: $ => /[\t\f\r\v ]+/,
    comment: $ => token(prec(-10, /#[^\n]*(\n|\r)*/)),
    // line_continuation: $ => token(prec(-1, /\\+\s*\n/)),

    // ############### MODIFIED JSON EXCERPT ################################ /
    
    // Disambiguation is hard for this when you have things like
    // RUN [ "$VAR" != " " ] && || ...
    _anything_or_json_array: $ => choice(
      $.json_array,
      $._anything
    ),

    json_array: $ => seq(
      $._json_array_start,
      optional(seq(
        $.json_array_item, repeat(seq(",", $.json_array_item))
      )),
      ']',
      optional(';')
    ),

    json_array_item: $ => choice(
      seq("'", "'"),
      seq('"', '"'),
      seq(
        "'", $._json_array_item_single, "'"
      ),
      seq(
        '"', $._json_array_item_double, '"'
      )
    ),

    _json_array_item_single: $ => repeat1(
      token.immediate(/(?:[^\\'\n]|\\[^\n])+/)
    ),

    _json_array_item_double: $ => repeat1(
      token.immediate(/(?:[^\\"\n]|\\[^\n])+/)
    ),

  }
});

// ############### UTILITY FUNCTIONS TO BUILD RULES ########################### /

function directive ($, name, body_rule) {
  return seq(
    new RegExp(
      any_casing(name.toUpperCase()).source + /[\t\f\r\v ]+/.source
    ),
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
    maybe_template_interpolation_2(
      regex, $._template_expr_at_symbols_start_ex, seq($.template_expr_at_symbols, /@?@?@/)
    ),
    maybe_template_interpolation(
      regex, /<(%?|\?)=?/, seq($.template_expr_less_than, /(%?|\?)>/)
    ),
  );
}

function maybe_var_interpolation ($, regex) {
  return choice(
    // (1) Just a match with no interpolation
    regex.source ? regex : regex(''),
    // (2) ${var}|something${var}(${var}|something${var})*something?
    seq(
      choice(
        seq('$', $.docker_variable),
        seq(
          regex.source ? new RegExp(regex.source + '\\$') : regex('\\$'),
          $.docker_variable
        )
      ),
      repeat(choice(
        seq('$', $.docker_variable),
        seq(
          regex.source ? token.immediate(new RegExp(regex.source + '\\$')) : regex('\\$'),
          $.docker_variable
        )
      )),
      optional(regex.source ? token.immediate(regex) : regex(''))
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

function maybe_template_interpolation_2 (regex, opener, rule) {
  return seq(
    choice(
      seq(opener, rule),
      seq(
        regex,
        opener,
        rule
      )
    ),
    repeat(choice(
      seq(opener, rule),
      seq(
        token.immediate(regex),
        opener,
        rule
      )
    )),
    optional(token.immediate(regex))
  );
}
