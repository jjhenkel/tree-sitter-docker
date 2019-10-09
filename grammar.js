
const FROM_PART_REGEX = /[^\$\s\/:@\{\}%<>=\?]+/;

module.exports = grammar({
  name: 'DOCKER',
  
  extras: $ => [
    $.comment,
    /\\?\s/, // Handle line continuation here
  ],

  conflicts: $ => [
    [ $.repository ]
  ],

  rules: {
    dockerfile: $ => seq(
      repeat(field('directives', $._directive)),
    ),

    _directive: $ => choice(
      $.from
    ),

    from: $ => seq(
      'FROM',
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
  
    repository: $ => choice(
      $._repository_start,
      seq($._repository_start, repeat1($._repository_continued)),
    ),

    _repository_start: $ => seq(
      might_have_var_interpolations(FROM_PART_REGEX, $),
      choice(
        token.immediate(/:\d+\//),
        '/'
      )
    ),
    _repository_continued: $ => seq(
      might_have_var_interpolations(FROM_PART_REGEX, $),
      '/'
    ),

    image: $ => might_have_var_interpolations(FROM_PART_REGEX, $),
    tag: $ => might_have_var_interpolations(FROM_PART_REGEX, $),
    digest: $ => might_have_var_interpolations(FROM_PART_REGEX, $),
    as_name: $ => might_have_var_interpolations(FROM_PART_REGEX, $),

    docker_variable: $ => choice(
      $._docker_variable,
      seq(
        token.immediate('{'),
        $._docker_variable,
        optional($.variable_default_value),
        token.immediate('}')
      )
    ),

    _docker_variable: $ => token.immediate(/[^\/\}\{\$"\s:]+/),

    variable_default_value: $ => seq(
      token.immediate(':-'),
      token.immediate(/[^\}\{\$"\n]+/)
    ),

    template_expr_curly_braces: $ => /[^\}\n]+/,
    template_expr_percent_signs: $ => /[^%\n]+/,
    template_expr_less_than_equals: $ => repeat1(
      choice(/[^%>\?%\n]+/, /\?[^>]/, /%[^>]/)
    ),

    comment: $ => token(prec(-10, /#.*/)),
  }
});

function any_casing (token) { 
  return new RegExp(token.split('').map(
    c => '(' + c + '|' + c.toLowerCase() + ')'
  ).join(''));
} 

function might_have_var_interpolations (regex, $) {
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
    ),
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
