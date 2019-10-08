let FROM_PART_REGEX = /[^\$\s\/"':@]+/;

module.exports = grammar({
  name: 'DOCKER',
  
  extras: $ => [
    $.comment,
    /\\?\s/,
  ],

  conflicts: $ => [ 
    [ $.repository ],
    [ $._port_spec_1 ]
  ],

  rules: {
    dockerfile: $ => seq(
      repeat1($._directives)
    ),

    _directives: $ => choice(
      $.expose,
      $.from
    ),

    from: $ => seq(
      any_case('FROM'),
      choice(
        $.image,
        seq($.image, ':', $.tag),
        seq($.repository, '/', $.image),
        seq($.repository, '/', $.image, ':', $.tag),
        
        seq($.image, '@', $.digest),
        seq($.image, ':', $.tag, '@', $.digest),
        seq($.repository, '/', $.image, '@', $.digest),
        seq($.repository, '/', $.image, ':', $.tag, '@', $.digest),

        seq($.image, any_case('AS'), $.as_name),
        seq($.image, ':', $.tag, any_case('AS'), $.as_name),
        seq($.repository, '/', $.image, any_case('AS'), $.as_name),
        seq($.repository, '/', $.image, ':', $.tag, any_case('AS'), $.as_name),
        
        seq($.image, '@', $.digest, any_case('AS'), $.as_name),
        seq($.image, ':', $.tag, '@', $.digest, any_case('AS'), $.as_name),
        seq($.repository, '/', $.image, '@', $.digest, any_case('AS'), $.as_name),
        seq($.repository, '/', $.image, ':', $.tag, '@', $.digest, any_case('AS'), $.as_name),
      ),
    ),

    repository: $ => maybe_double_quoted(
      seq(
        choice(FROM_PART_REGEX, $.docker_variable),
        repeat(
          choice(token.immediate(FROM_PART_REGEX), $.docker_variable)
        ),
        /(:\d+)?/,
        repeat(seq(
          '/',
          repeat1(
            choice(token.immediate(FROM_PART_REGEX), $.docker_variable)
          )
        ))
      )
    ),
    image: $ => maybe_double_quoted(
      string_interpolation(FROM_PART_REGEX, $.docker_variable)
    ),
    tag: $ => maybe_double_quoted(
      string_interpolation(FROM_PART_REGEX, $.docker_variable)
    ),
    digest: $ => string_interpolation(
      /[^\$\s\/"']+/, $.docker_variable
    ),
    as_name: $ => token(
      /[^\s\/"']+/
    ),

    expose: $ => seq(
      any_case('EXPOSE'),
      choice(
        repeat1(maybe_double_quoted($.port_spec)),
        maybe_double_quoted(seq(':', $.port_part))
      )
    ),

    port_spec: $ => seq(
      $._port_spec_1,
      optional(
        seq(':', $._port_spec_1)
      )
    ),

    _port_spec_1: $ => maybe_double_quoted(seq(
      $.port_part, optional(seq('-', $.port_part))
    )),

    port_part: $ => seq(
      choice(
        /\d+/,
        $.docker_variable
      ),
      optional($.port_protocol)
    ),

    port_protocol: $ => seq('/', choice(
      'udp', 'tcp', 'UDP', 'TCP', $.docker_variable
    )),

    docker_variable: $ => choice(
      seq('$', $._docker_variable),
      seq(
        '${',
        $._docker_variable,
        optional($.variable_default_value),
        '}'
      )
    ),

    _docker_variable: $ => token(/[^\/\}\{\$"\s:]+/),

    variable_default_value: $ => seq(
      ':-',
      /[^\}\{\$"\n]+/
    ),

    comment: $ => token(prec(-10, /#.*/)),

    _token_whitespace: $ => token(
      /[\t\v\f\r ]+/
    )

  }
});

function string_interpolation (regex, variable) {
  return seq(
    choice(regex, variable),
    repeat(
      choice(token.immediate(regex), variable)
    )
  );
}

function any_case (token) { 
  return new RegExp(token.split('').map(
    c => '(' + c + '|' + c.toLowerCase() + ')'
  ).join(''));
} 

function maybe_double_quoted (rule) { 
  return choice(seq('"', rule, '"'), rule);
}
