
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
    [ $.json_array ],
    [ $.env_pair_eq ],
    [ $.label_pair_eq ],
    [ $.env_value ]
  ],

  externals: $ => [
    $._directive_start,
    $.escape_directive,
    $.line_continuation,
    $._template_expr_at_symbols_start_ex,
    $._digest_start_ex,
    $._json_array_start,
    $._anything_ex,
    $._malformed_empty_directive
  ],

  rules: {
    // ############### TOP LEVEL ############################################ /
    dockerfile: $ => seq(
      optional(choice(
        $.escape_directive,
        seq($._blank_line, $.escape_directive)
      )),
      repeat($._directive),
    ),

    _directive: $ => choice(
      alias($._d_add, $.directive),
      alias($._d_arg, $.directive),
      alias($._d_cmd, $.directive),
      alias($._d_copy, $.directive),
      alias($._d_entrypoint, $.directive),
      alias($._d_env, $.directive),
      alias($._d_expose, $.directive),
      alias($._d_from, $.directive),
      alias($._d_healthcheck, $.directive),
      alias($._d_label, $.directive),
      alias($._d_maintainer, $.directive),
      alias($._d_onbuild, $.directive),
      alias($._d_run, $.directive),
      alias($._d_shell, $.directive),
      alias($._d_stopsignal, $.directive),
      alias($._d_user, $.directive),
      alias($._d_volume, $.directive),
      alias($._d_workdir, $.directive),
      $.malformed_empty_directive,
      $._blank_line,
    ),

    malformed_empty_directive: $ => $._malformed_empty_directive,

    // ############### DIRECTIVES ########################################### /
    _d_add: $ => directive($, 'ADD', $.add),
    add: $ => choice(
      $._paths, $.json_array
    ),

    _d_arg: $ => directive($, 'ARG', $.arg),
    arg: $ => seq(
      optional(token.immediate(/"/)),
      $.arg_name, optional(choice(
        seq('=', $.arg_default),
        seq(/ |\t/, alias($.arg_default, $.arg_malformed_default))
      )),
      optional(token.immediate(prec(-10, /"/)))
    ),

    _d_cmd: $ => directive($, 'CMD', $.cmd),
    cmd: $ => $._anything_or_json_array,

    _d_copy: $ => directive($, 'COPY', $.copy),
    copy: $ => seq(
      repeat(choice(
        $._chown,
        $._from_layer
      )),
      choice(
        $._paths,
        $.json_array
      )
    ),

    _d_entrypoint: $ => directive($, 'ENTRYPOINT', $.entrypoint),
    entrypoint: $ => $._anything_or_json_array,

    _d_env: $ => directive($, 'ENV', $.env),
    env: $ => $._env_pairs,

    _d_expose: $ => directive($, 'EXPOSE', $.expose),
    expose: $ => choice(
      $.mapped_no_lhs,
      repeat1(
        maybe_double_quoted($._port_spec)
      )
    ),

    _d_from: $ => directive($, 'FROM', $.from),
    from: $ => seq(
      optional(seq(
        '--platform=',
        $.platform
      )),
      optional($.repository),
      $.image,
      optional(seq(
        ':', $.tag, optional(seq(':', $.malformed_tag_with_colons))
      )),
      optional(seq(
        $._digest_start_ex, $.digest
      )),
      optional(seq(
        $._space_no_newline, any_casing('AS'), $._space_no_newline, $.as_name,
        optional(seq($._space_no_newline, $.malformed_as_name_with_spaces))
      )),
      optional($._space_no_newline)
    ),

    _d_healthcheck: $ => directive($, 'HEALTHCHECK', $.healthcheck),
    healthcheck: $ => choice(
      $.hc_none,
      seq(
        repeat($._hc_options),
        $._hc_command
      ),
      $.hc_malformed
    ),

    _d_label: $ => directive($, 'LABEL', $.label),
    label: $ => $._labels,

    _d_maintainer: $ => directive($, 'MAINTAINER', $.maintainer),
    maintainer: $ => $._anything,

    _d_onbuild: $ => directive($, 'ONBUILD', $.onbuild),
    onbuild: $ => choice(
      seq(any_casing('ADD'), $._space_no_newline, $.add),
      seq(any_casing('ARG'), $._space_no_newline, $.arg),
      seq(any_casing('CMD'), $._space_no_newline, $.cmd),
      seq(any_casing('COPY'), $._space_no_newline, $.copy),
      seq(any_casing('ENTRYPOINT'), $._space_no_newline, $.entrypoint),
      seq(any_casing('ENV'), $._space_no_newline, $.env),
      seq(any_casing('EXPOSE'), $._space_no_newline, $.expose),
      seq(any_casing('HEALTHCHECK'), $._space_no_newline, $.healthcheck),
      seq(any_casing('LABEL'), $._space_no_newline, $.label),
      seq(any_casing('RUN'), $._space_no_newline, $.run),
      seq(any_casing('SHELL'), $._space_no_newline, $.shell),
      seq(any_casing('STOPSIGNAL'), $._space_no_newline, $.stopsignal),
      seq(any_casing('USER'), $._space_no_newline, $.user),
      seq(any_casing('VOLUME'), $._space_no_newline, $.volume),
      seq(any_casing('WORKDIR'), $._space_no_newline, $.workdir)
    ),

    _d_run: $ => directive($, 'RUN', $.run),
    run: $ => $._anything_or_json_array,
    
    _d_shell: $ => directive($, 'SHELL', $.shell),
    shell: $ => $._anything_or_json_array,

    _d_stopsignal: $ => directive($, 'STOPSIGNAL', $.stopsignal),
    stopsignal: $ => choice(
      $.signal_name, $.signal_num
    ),

    _d_user: $ => directive($, 'USER', $.user),
    user: $ => choice(
      maybe_double_quoted(seq($.user_name, optional(seq(':', $.user_group)))),
      maybe_double_quoted(seq($.user_id, optional(seq(':', $.user_group_id))))
    ),

    _d_volume: $ => directive($, 'VOLUME', $.volume),
    volume: $ => choice(
      $._paths,
      $.json_array
    ),

    _d_workdir: $ => directive($, 'WORKDIR', $.workdir),
    workdir: $ => $.path,

    // ############### PLUMBING FOR 'ADD' ################################### /

    // ############### PLUMBING FOR 'ARG' ################################### /
    arg_name: $ => maybe_var_or_template_interpolation(
      $, /[a-zA-Z_0-9][a-zA-Z_\-0-9]*/
    ),
    arg_default: $ => repeat1(
      choice(
        /'([^\n'\\]|\\[^\s])*'/,
        prec.right(maybe_var_interpolation($, /([^\n\\\$]|\\[^\s]|\$+[ "']|\$\$)*/))
      )
    ),

    // ############### PLUMBING FOR 'CMD' ################################### /
    // ############### PLUMBING FOR 'COPY' ################################## /
    _chown: $ => seq(
      token.immediate(prec(2, '--chown=')),
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

    chown: $ => $.user,

    // ############### PLUMBING FOR 'ENTRYPOINT' ############################ /
    // ############### PLUMBING FOR 'ENV' ################################### /
    _env_pairs: $ => choice(
      $.env_key,
      $.env_pair,
      seq(
        alias($.env_pair_eq, $.env_pair),
        repeat(seq(
          choice(
            $._space_no_newline,
            $.line_continuation
          ),
          repeat(choice($.comment, $._space_no_newline)),
          alias($.env_pair_eq, $.env_pair)
        )),
        optional($._space_no_newline)
      )
    ),

    env_pair_eq: $ => seq(
      optional($._space_no_newline),
      choice(
        seq(
          $.env_key,
          token.immediate('='),
          optional($.env_value)
        ),
        seq(
          token.immediate(prec(-10, '"')),
          $.env_key,
          token.immediate('='),
          optional($.env_value),
          token.immediate(prec(-10, '"'))
        )
      )
    ),
    env_pair: $ => seq(
      $.env_key,
      choice($._space_no_newline, $.line_continuation),
      $.env_value
    ),

    env_key: $ => choice(
      seq('$', $.docker_variable),
      token.immediate(/"[^\n"=]*"/),
      seq(
        token.immediate(/([^\s"\\`=$:#]|:[^\s"\\`=$\-+])+/),
        optional($.variable_default_value),
        optional(/:+/)
      )
    ),

    env_value: $ => repeat1(choice(
      repeat1(prec.right(maybe_var_interpolation(
        $, /(\$\$|[^\s\\$"']|\\( |\t)*[^\s])+/, (r) => token.immediate(r)
      ))),
      seq(
        token.immediate('"'),
        repeat(prec.right(maybe_var_interpolation(
          $, /(\$\$|[^\n\r"\\$]|\\[^\n\r])+/, (r) => token.immediate(prec(1, r))
        ))),
        optional('$'),
        token.immediate('"')
      ),
      seq(
        token.immediate("'"),
        repeat(prec.right(
          token.immediate(/([^\n\r'\\]|\\'|\\[^\n\r])+/)
        )),
        token.immediate(/'+/)
      ),
      $.line_continuation
    )),

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
      optional(/\/+/),
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
    malformed_tag_with_colons: $ => prec(-1, maybe_var_interpolation(
      $, /[^\$\s\/@\{\}%<>=\?]+/, (r) => token.immediate(prec(-1, r))
    )),
    digest: $ => maybe_var_or_template_interpolation($, /[^\$\s\/@\{\}%<>=\?]+/),
    as_name: $ => maybe_var_or_template_interpolation($, FROM_PART_REGEX),
    malformed_as_name_with_spaces: $ => prec.right(repeat1(choice($._space_no_newline, FROM_PART_REGEX))),

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
      $.malformed_label_just_quoted_value,
      $.label_pair,
      alias($.label_pair_no_value, $.label_pair),
      seq(
        alias($.label_pair_eq, $.label_pair),
        repeat(seq(
          choice(
            $._space_no_newline,
            $.line_continuation
          ),
          repeat(choice($.comment, $._space_no_newline)),
          alias($.label_pair_eq, $.label_pair))
        ),
        optional($._space_no_newline)
      )
    ),

    malformed_label_just_quoted_value: $ => prec(-1, /"[^\\\n"]+"\r?\n/),
    
    label_pair_eq: $ => seq(
      optional($._space_no_newline),
      optional(token.immediate(prec(-10, '"'))),
      $.label_key,
      token.immediate('='),
      alias($.env_value, $.label_value),
      optional(token.immediate(prec(-10, '"')))
    ),
    label_pair_no_value: $ => seq(
      optional(token.immediate(prec(-10, '"'))),
      $.label_key,
      token.immediate('='),
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
      $, /[^$\s:'"{}]*/
    )),
    user_group: $ => maybe_double_quoted(maybe_var_or_template_interpolation(
      $, /[^$\s:'"{}]*/
    )),
    user_id: $ => token.immediate(/\d+/),
    user_group_id: $ => token.immediate(/\d+/),

    // ############### PLUMBING FOR 'VOLUME' ################################ /
    // ############### PLUMBING FOR 'WORKDIR' ############################### /


    // ############### MISC. UTILITIES ###################################### /
    path: $ => repeat1(prec.right(choice(
      seq(
        maybe_var_interpolation(
          $, /([^"\s\$\\]|\\+[^\s]|\$\/|\$\$)+/, (r) => token.immediate(r)
        ),
        optional(token.immediate('$')),
        optional(token.immediate(prec(-1, '\\')))
      ),
      seq(
        token.immediate('"'),
        repeat1(prec.right(maybe_var_interpolation(
          $, /([^"\n\$]|\$\$)+/
        ))),
        token.immediate('"')
      ),
      token.immediate(/'([^\\'\n]|\\[^\n])+'/)
    ))),

    _paths: $ => seq(
      $.path,
      repeat(seq(choice($._space_no_newline, $.line_continuation), $.path))
    ),
    
    _anything: $ => repeat1($._anything_ex),

    // ############### DOCKER VARIABLE HANDLING ############################# /
    docker_variable: $ => choice(
      $._docker_variable,
      seq(
        token.immediate('{'),
        $._docker_variable,
        optional(choice(
          $.variable_default_value,
          $.variable_this_or_null,
          $.variable_substring_expansion
        )),
        token.immediate('}')
      ),
      $.bash_subshell_expression
    ),

    bash_subshell_expression: $ => seq(
      token.immediate('('),
      /[^\n\)]*/,
      token.immediate(')')
    ),

    variable_default_value: $ => seq(
      token.immediate(':-'),
      maybe_var_interpolation($, /[^$\}\{\n]*/)
    ),

    variable_this_or_null: $ => seq(
      token.immediate(':+'),
      maybe_var_interpolation($, /[^$\}\{\n]*/)
    ),

    variable_substring_expansion: $ => seq(
      token.immediate(':'),
      maybe_var_interpolation($, /[^$\}\{\n]*/)
    ),

    _docker_variable: $ => token.immediate(
      /('[^$'\n\\]*'|[^\(\-\/\}\{\$"'\s:=\\]\(?|[^\(\-\/\}\{\$"\s:=\\][-+][^\(\-\/\}\{\$"\s:=\\])+/
    ),

    // ############### OUT-OF-DOCKER TEMPLATING ############################# /
    template_expr_at_symbols: $ => /[^@\n]+/,
    template_expr_curly_braces: $ => /[^\}\n]+/,
    template_expr_percent_signs: $ => /[^%\n]+/,
    template_expr_less_than: $ => repeat1(
      choice(/[^%>\?%\n]+/, /\?[^>]/, /%[^>]/)
    ),


    // ############### VARIOUS SPACING ###################################### /
    _space: $ => token(prec(-11, /\s/)),
    _blank_line: $ => /[ \t\f\r\v\xA0\u1680\u180e\u2000-\u200a\u202f\u205f\u3000]*\n/,
    _space_no_newline: $ => /[\t\f\r\v ]+/,
    comment: $ => /#[^\n]*([\t\f\r\v ]*\n)*/,
    inline_comment: $ => token.immediate(/[\t\f\r\v ]+#[^\n]*\r?\n/),
    // line_continuation: $ => token(prec(-1, /\\+\s*\n/)),

    // ############### MODIFIED JSON EXCERPT ################################ /
    
    // Disambiguation is hard for this when you have things like
    // RUN [ "$VAR" != " " ] && || ...
    _anything_or_json_array: $ => choice(
      $.json_array,
      $._anything
    ),

    json_array: $ => choice(
      seq(
        $._json_array_start,
        optional(seq(
          $.json_array_item, repeat(seq(",", $.json_array_item))
        )),
        optional(','), // Allow for trailing ,
        ']',
        optional($.json_array_extraneous_char)
      ),
      seq(
        $._json_array_start,
        repeat(seq($.json_array_item, ",")),
        $.json_array_item_missing_quote
      )
    ),

    json_array_extraneous_char: $ => token(prec(-15, /[^\s]/)),
    json_array_item_missing_quote: $ => choice(
      prec(-1, /"([^\\"\n\]]|\\[^\n\]])+\]+[ \v\t\r]*\n/),
      prec(-1, /'([^\\'\n\]]|\\[^\n\]])+\]+[ \v\t\r]*\n/)
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
      token.immediate(prec(1, /([^\\'\n]|\\[^\n])+/))
    ),

    _json_array_item_double: $ => repeat1(
      token.immediate(prec(1, /([^\\"\n]|\\[^\n])+/))
    ),

  }
});

// ############### UTILITY FUNCTIONS TO BUILD RULES ########################### /

function directive ($, name, body_rule) {
  const directive_rule = seq(
    $._directive_start,
    new RegExp(
      any_casing(name.toUpperCase()).source + /([\t\f\r\v ]+|\\[\t\f\r\v ]*(\r?\n)|`[\t\f\r\v ]*(\r?\n))/.source
    ),
    body_rule
  );

  NO_INLINE_COMMENTS = [
    "ARG",
    "CMD",
    "ENTRYPOINT",
    "ENV",
    "EXPOSE",
    "LABEL",
    "ONBUILD",
    "RUN"
  ];

  if (!NO_INLINE_COMMENTS.includes(name)) {
    return seq(directive_rule, optional($.inline_comment));
  } else {
    return directive_rule;
  }
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

function maybe_var_interpolation ($, regex, wrapper) {
  return choice(
    // (1) Just a match with no interpolation
    wrapper ? wrapper(regex) : regex,
    // (2) ${var}|something${var}(${var}|something${var})*something?
    seq(
      choice(
        seq('$', $.docker_variable),
        seq(
          wrapper ? wrapper(new RegExp(regex.source + '\\$')) : new RegExp(regex.source + '\\$'),
          $.docker_variable
        )
      ),
      repeat(choice(
        seq('$', $.docker_variable),
        seq(
          wrapper ? wrapper(new RegExp(regex.source + '\\$')) : token.immediate(new RegExp(regex.source + '\\$')),
          $.docker_variable
        )
      )),
      optional(wrapper ? wrapper(regex) : token.immediate(regex))
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
