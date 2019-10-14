#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 315
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  aux_sym_cmd_token1 = 1,
  aux_sym_entrypoint_token1 = 2,
  aux_sym_run_token1 = 3,
  aux_sym_maintainer_token1 = 4,
  aux_sym_expose_token1 = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_COLON = 7,
  anon_sym_DASH = 8,
  aux_sym__port_part_token1 = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_SLASH = 11,
  aux_sym_port_protocol_token1 = 12,
  aux_sym_port_protocol_token2 = 13,
  aux_sym_from_token1 = 14,
  anon_sym_DASH_DASHplatform_EQ = 15,
  anon_sym_AT = 16,
  anon_sym_sha256_COLON = 17,
  aux_sym_from_token2 = 18,
  aux_sym_platform_token1 = 19,
  aux_sym__repository_start_token1 = 20,
  aux_sym__repository_start_token2 = 21,
  aux_sym__repository_start_token3 = 22,
  aux_sym__repository_start_token4 = 23,
  aux_sym__repository_start_token5 = 24,
  aux_sym__repository_start_token6 = 25,
  aux_sym__repository_start_token7 = 26,
  aux_sym__repository_start_token8 = 27,
  aux_sym__repository_start_token9 = 28,
  aux_sym__repository_start_token10 = 29,
  aux_sym__repository_start_token11 = 30,
  aux_sym__repository_start_token12 = 31,
  aux_sym__repository_start_token13 = 32,
  aux_sym__repository_start_token14 = 33,
  aux_sym__repository_start_token15 = 34,
  aux_sym__repository_start_token16 = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  sym__docker_variable = 38,
  anon_sym_COLON_DASH = 39,
  aux_sym_variable_default_value_token1 = 40,
  anon_sym_COLON_PLUS = 41,
  aux_sym__anything_token1 = 42,
  aux_sym__anything_token2 = 43,
  sym__almost_json_prefix = 44,
  sym__json_prefix = 45,
  sym__not_json_prefix = 46,
  anon_sym_COMMA = 47,
  anon_sym_RBRACK = 48,
  sym__space_no_newline = 49,
  sym_template_expr_curly_braces = 50,
  sym_template_expr_percent_signs = 51,
  aux_sym_template_expr_less_than_equals_token1 = 52,
  aux_sym_template_expr_less_than_equals_token2 = 53,
  aux_sym_template_expr_less_than_equals_token3 = 54,
  sym_comment = 55,
  sym_line_continuation = 56,
  aux_sym__json_string_token1 = 57,
  sym__json_escape_sequence = 58,
  sym_dockerfile = 59,
  sym__directive = 60,
  sym_cmd = 61,
  sym_entrypoint = 62,
  sym_run = 63,
  sym_maintainer = 64,
  sym_expose = 65,
  sym__port_spec = 66,
  sym_mapped_port = 67,
  sym_mapped_no_lhs = 68,
  sym__port = 69,
  sym_port = 70,
  sym_port_range = 71,
  sym__port_part = 72,
  sym_port_protocol = 73,
  sym_from = 74,
  sym_platform = 75,
  sym_repository = 76,
  sym__repository_start = 77,
  sym__repository_continued = 78,
  sym_image = 79,
  sym_tag = 80,
  sym_digest = 81,
  sym_as_name = 82,
  sym_docker_variable = 83,
  sym_variable_default_value = 84,
  sym_variable_this_or_null = 85,
  aux_sym__anything = 86,
  sym_json_array = 87,
  sym__anything_or_json_array = 88,
  sym_template_expr_less_than_equals = 89,
  sym__json_value = 90,
  aux_sym__json_string = 91,
  aux_sym_dockerfile_repeat1 = 92,
  aux_sym_expose_repeat1 = 93,
  aux_sym_repository_repeat1 = 94,
  aux_sym__repository_start_repeat1 = 95,
  aux_sym__repository_start_repeat2 = 96,
  aux_sym__repository_start_repeat3 = 97,
  aux_sym__repository_start_repeat4 = 98,
  aux_sym_json_array_repeat1 = 99,
  aux_sym_template_expr_less_than_equals_repeat1 = 100,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_cmd_token1] = "cmd_token1",
  [aux_sym_entrypoint_token1] = "entrypoint_token1",
  [aux_sym_run_token1] = "run_token1",
  [aux_sym_maintainer_token1] = "maintainer_token1",
  [aux_sym_expose_token1] = "expose_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [aux_sym__port_part_token1] = "_port_part_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SLASH] = "/",
  [aux_sym_port_protocol_token1] = "port_protocol_token1",
  [aux_sym_port_protocol_token2] = "port_protocol_token2",
  [aux_sym_from_token1] = "from_token1",
  [anon_sym_DASH_DASHplatform_EQ] = "--platform=",
  [anon_sym_AT] = "@",
  [anon_sym_sha256_COLON] = "sha256:",
  [aux_sym_from_token2] = "from_token2",
  [aux_sym_platform_token1] = "platform_token1",
  [aux_sym__repository_start_token1] = "_repository_start_token1",
  [aux_sym__repository_start_token2] = "_repository_start_token2",
  [aux_sym__repository_start_token3] = "_repository_start_token3",
  [aux_sym__repository_start_token4] = "_repository_start_token4",
  [aux_sym__repository_start_token5] = "_repository_start_token5",
  [aux_sym__repository_start_token6] = "_repository_start_token6",
  [aux_sym__repository_start_token7] = "_repository_start_token7",
  [aux_sym__repository_start_token8] = "_repository_start_token8",
  [aux_sym__repository_start_token9] = "_repository_start_token9",
  [aux_sym__repository_start_token10] = "_repository_start_token10",
  [aux_sym__repository_start_token11] = "_repository_start_token11",
  [aux_sym__repository_start_token12] = "_repository_start_token12",
  [aux_sym__repository_start_token13] = "_repository_start_token13",
  [aux_sym__repository_start_token14] = "_repository_start_token14",
  [aux_sym__repository_start_token15] = "_repository_start_token15",
  [aux_sym__repository_start_token16] = "_repository_start_token16",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__docker_variable] = "_docker_variable",
  [anon_sym_COLON_DASH] = ":-",
  [aux_sym_variable_default_value_token1] = "variable_default_value_token1",
  [anon_sym_COLON_PLUS] = ":+",
  [aux_sym__anything_token1] = "_anything_token1",
  [aux_sym__anything_token2] = "_anything_token2",
  [sym__almost_json_prefix] = "_almost_json_prefix",
  [sym__json_prefix] = "_json_prefix",
  [sym__not_json_prefix] = "_not_json_prefix",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym__space_no_newline] = "_space_no_newline",
  [sym_template_expr_curly_braces] = "template_expr_curly_braces",
  [sym_template_expr_percent_signs] = "template_expr_percent_signs",
  [aux_sym_template_expr_less_than_equals_token1] = "template_expr_less_than_equals_token1",
  [aux_sym_template_expr_less_than_equals_token2] = "template_expr_less_than_equals_token2",
  [aux_sym_template_expr_less_than_equals_token3] = "template_expr_less_than_equals_token3",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [aux_sym__json_string_token1] = "_json_string_token1",
  [sym__json_escape_sequence] = "_json_escape_sequence",
  [sym_dockerfile] = "dockerfile",
  [sym__directive] = "_directive",
  [sym_cmd] = "cmd",
  [sym_entrypoint] = "entrypoint",
  [sym_run] = "run",
  [sym_maintainer] = "maintainer",
  [sym_expose] = "expose",
  [sym__port_spec] = "_port_spec",
  [sym_mapped_port] = "mapped_port",
  [sym_mapped_no_lhs] = "mapped_no_lhs",
  [sym__port] = "_port",
  [sym_port] = "port",
  [sym_port_range] = "port_range",
  [sym__port_part] = "_port_part",
  [sym_port_protocol] = "port_protocol",
  [sym_from] = "from",
  [sym_platform] = "platform",
  [sym_repository] = "repository",
  [sym__repository_start] = "_repository_start",
  [sym__repository_continued] = "_repository_continued",
  [sym_image] = "image",
  [sym_tag] = "tag",
  [sym_digest] = "digest",
  [sym_as_name] = "as_name",
  [sym_docker_variable] = "docker_variable",
  [sym_variable_default_value] = "variable_default_value",
  [sym_variable_this_or_null] = "variable_this_or_null",
  [aux_sym__anything] = "_anything",
  [sym_json_array] = "json_array",
  [sym__anything_or_json_array] = "_anything_or_json_array",
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [sym__json_value] = "_json_value",
  [aux_sym__json_string] = "_json_string",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_template_expr_less_than_equals_repeat1] = "template_expr_less_than_equals_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__port_part_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_protocol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_port_protocol_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASHplatform_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_platform_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__docker_variable] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_default_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__anything_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__anything_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__almost_json_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__json_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__not_json_prefix] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__space_no_newline] = {
    .visible = false,
    .named = true,
  },
  [sym_template_expr_curly_braces] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr_percent_signs] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_expr_less_than_equals_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_expr_less_than_equals_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_expr_less_than_equals_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__json_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_dockerfile] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_run] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer] = {
    .visible = true,
    .named = true,
  },
  [sym_expose] = {
    .visible = true,
    .named = true,
  },
  [sym__port_spec] = {
    .visible = false,
    .named = true,
  },
  [sym_mapped_port] = {
    .visible = true,
    .named = true,
  },
  [sym_mapped_no_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_port_range] = {
    .visible = true,
    .named = true,
  },
  [sym__port_part] = {
    .visible = false,
    .named = true,
  },
  [sym_port_protocol] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_platform] = {
    .visible = true,
    .named = true,
  },
  [sym_repository] = {
    .visible = true,
    .named = true,
  },
  [sym__repository_start] = {
    .visible = false,
    .named = true,
  },
  [sym__repository_continued] = {
    .visible = false,
    .named = true,
  },
  [sym_image] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_as_name] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_this_or_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__anything] = {
    .visible = false,
    .named = false,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym__anything_or_json_array] = {
    .visible = false,
    .named = true,
  },
  [sym_template_expr_less_than_equals] = {
    .visible = true,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__json_string] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dockerfile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repository_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_expr_less_than_equals_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_directives = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_directives] = "directives",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directives, 0},
  [1] =
    {field_directives, 0, .inherited = true},
  [2] =
    {field_directives, 0, .inherited = true},
    {field_directives, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == ',') ADVANCE(346);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == ',') ADVANCE(346);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(230);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(230);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(105);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(298);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(296);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == ',') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(358);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(308);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(355);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ',') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(53);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '%') ADVANCE(285);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == '{') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 46:
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '5') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(294);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(294);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(294);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 67:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(293);
      END_STATE();
    case 68:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(298);
      END_STATE();
    case 69:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(296);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 93:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(359);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '5') ADVANCE(129);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '6') ADVANCE(130);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(244);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(260);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(252);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(261);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(272);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(274);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(277);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__docker_variable);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__anything_token2);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__almost_json_prefix);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__json_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 42},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 43},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 43},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 42},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 42},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 42},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 42},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 42},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 42},
  [111] = {.lex_state = 42},
  [112] = {.lex_state = 42},
  [113] = {.lex_state = 42},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 42},
  [121] = {.lex_state = 42},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 42},
  [124] = {.lex_state = 42},
  [125] = {.lex_state = 42},
  [126] = {.lex_state = 42},
  [127] = {.lex_state = 42},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 42},
  [130] = {.lex_state = 42},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 42},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 42},
  [141] = {.lex_state = 42},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 42},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 42},
  [148] = {.lex_state = 42},
  [149] = {.lex_state = 42},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 42},
  [155] = {.lex_state = 42},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 30},
  [197] = {.lex_state = 30},
  [198] = {.lex_state = 30},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 30},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 30},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 30},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 30},
  [208] = {.lex_state = 40},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 31},
  [211] = {.lex_state = 40},
  [212] = {.lex_state = 30},
  [213] = {.lex_state = 30},
  [214] = {.lex_state = 31},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 30},
  [220] = {.lex_state = 31},
  [221] = {.lex_state = 33},
  [222] = {.lex_state = 33},
  [223] = {.lex_state = 33},
  [224] = {.lex_state = 33},
  [225] = {.lex_state = 44},
  [226] = {.lex_state = 45},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 45},
  [229] = {.lex_state = 45},
  [230] = {.lex_state = 45},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 45},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 45},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 45},
  [241] = {.lex_state = 45},
  [242] = {.lex_state = 45},
  [243] = {.lex_state = 45},
  [244] = {.lex_state = 45},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 34},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 45},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 40},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 34},
  [261] = {.lex_state = 35},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 40},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 40},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 35},
  [277] = {.lex_state = 40},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 36},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 34},
  [283] = {.lex_state = 35},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 40},
  [286] = {.lex_state = 32},
  [287] = {.lex_state = 32},
  [288] = {.lex_state = 34},
  [289] = {.lex_state = 34},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 34},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 35},
  [294] = {.lex_state = 34},
  [295] = {.lex_state = 35},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 40},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 40},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 40},
  [307] = {.lex_state = 40},
  [308] = {.lex_state = 40},
  [309] = {.lex_state = 45},
  [310] = {.lex_state = 35},
  [311] = {.lex_state = 34},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 45},
  [314] = {.lex_state = 45},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_cmd_token1] = ACTIONS(1),
    [aux_sym_entrypoint_token1] = ACTIONS(1),
    [aux_sym_run_token1] = ACTIONS(1),
    [aux_sym_maintainer_token1] = ACTIONS(1),
    [aux_sym_expose_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__port_part_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_port_protocol_token1] = ACTIONS(1),
    [aux_sym_port_protocol_token2] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_sha256_COLON] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [aux_sym__repository_start_token4] = ACTIONS(1),
    [aux_sym__repository_start_token5] = ACTIONS(1),
    [aux_sym__repository_start_token8] = ACTIONS(1),
    [aux_sym__repository_start_token9] = ACTIONS(1),
    [aux_sym__repository_start_token12] = ACTIONS(1),
    [aux_sym__repository_start_token16] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__anything_token2] = ACTIONS(1),
    [sym__almost_json_prefix] = ACTIONS(1),
    [sym__json_prefix] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(292),
    [sym__directive] = STATE(186),
    [sym_cmd] = STATE(186),
    [sym_entrypoint] = STATE(186),
    [sym_run] = STATE(186),
    [sym_maintainer] = STATE(186),
    [sym_expose] = STATE(186),
    [sym_from] = STATE(186),
    [aux_sym_dockerfile_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_cmd_token1] = ACTIONS(7),
    [aux_sym_entrypoint_token1] = ACTIONS(9),
    [aux_sym_run_token1] = ACTIONS(11),
    [aux_sym_maintainer_token1] = ACTIONS(13),
    [aux_sym_expose_token1] = ACTIONS(15),
    [aux_sym_from_token1] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [2] = {
    [sym__port_spec] = STATE(2),
    [sym_mapped_port] = STATE(2),
    [sym__port] = STATE(78),
    [sym_port] = STATE(78),
    [sym_port_range] = STATE(78),
    [sym__port_part] = STATE(58),
    [aux_sym_expose_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_cmd_token1] = ACTIONS(19),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_run_token1] = ACTIONS(19),
    [aux_sym_maintainer_token1] = ACTIONS(19),
    [aux_sym_expose_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym__port_part_token1] = ACTIONS(24),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [aux_sym_from_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [3] = {
    [sym__port_spec] = STATE(2),
    [sym_mapped_port] = STATE(2),
    [sym__port] = STATE(78),
    [sym_port] = STATE(78),
    [sym_port_range] = STATE(78),
    [sym__port_part] = STATE(58),
    [aux_sym_expose_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_cmd_token1] = ACTIONS(30),
    [aux_sym_entrypoint_token1] = ACTIONS(30),
    [aux_sym_run_token1] = ACTIONS(30),
    [aux_sym_maintainer_token1] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_from_token1] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_cmd_token1] = ACTIONS(40),
    [aux_sym_entrypoint_token1] = ACTIONS(40),
    [aux_sym_run_token1] = ACTIONS(40),
    [aux_sym_maintainer_token1] = ACTIONS(40),
    [aux_sym_expose_token1] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(38),
    [aux_sym_from_token1] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(38),
    [aux_sym_from_token2] = ACTIONS(40),
    [aux_sym__repository_start_token3] = ACTIONS(40),
    [aux_sym__repository_start_token4] = ACTIONS(42),
    [aux_sym__repository_start_token7] = ACTIONS(42),
    [aux_sym__repository_start_token16] = ACTIONS(38),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [5] = {
    [aux_sym__repository_start_repeat4] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_cmd_token1] = ACTIONS(49),
    [aux_sym_entrypoint_token1] = ACTIONS(49),
    [aux_sym_run_token1] = ACTIONS(49),
    [aux_sym_maintainer_token1] = ACTIONS(49),
    [aux_sym_expose_token1] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(47),
    [aux_sym_from_token2] = ACTIONS(49),
    [aux_sym__repository_start_token3] = ACTIONS(49),
    [aux_sym__repository_start_token12] = ACTIONS(51),
    [aux_sym__repository_start_token15] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(47),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [6] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_SLASH] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token3] = ACTIONS(60),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(58),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [7] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_SLASH] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token3] = ACTIONS(60),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [aux_sym__repository_start_token16] = ACTIONS(58),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [8] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_cmd_token1] = ACTIONS(68),
    [aux_sym_entrypoint_token1] = ACTIONS(68),
    [aux_sym_run_token1] = ACTIONS(68),
    [aux_sym_maintainer_token1] = ACTIONS(68),
    [aux_sym_expose_token1] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(72),
    [aux_sym_from_token1] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(66),
    [aux_sym_from_token2] = ACTIONS(68),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(74),
    [aux_sym__repository_start_token16] = ACTIONS(72),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [9] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_cmd_token1] = ACTIONS(78),
    [aux_sym_entrypoint_token1] = ACTIONS(78),
    [aux_sym_run_token1] = ACTIONS(78),
    [aux_sym_maintainer_token1] = ACTIONS(78),
    [aux_sym_expose_token1] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(76),
    [aux_sym_from_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(76),
    [aux_sym_from_token2] = ACTIONS(78),
    [aux_sym__repository_start_token2] = ACTIONS(80),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token16] = ACTIONS(76),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [10] = {
    [aux_sym__repository_start_repeat3] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_SLASH] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token3] = ACTIONS(60),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [aux_sym__repository_start_token16] = ACTIONS(58),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [11] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_cmd_token1] = ACTIONS(87),
    [aux_sym_entrypoint_token1] = ACTIONS(87),
    [aux_sym_run_token1] = ACTIONS(87),
    [aux_sym_maintainer_token1] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(85),
    [aux_sym_from_token1] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(85),
    [aux_sym_from_token2] = ACTIONS(87),
    [aux_sym__repository_start_token3] = ACTIONS(87),
    [aux_sym__repository_start_token8] = ACTIONS(89),
    [aux_sym__repository_start_token11] = ACTIONS(89),
    [aux_sym__repository_start_token16] = ACTIONS(85),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [12] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(60),
    [aux_sym__repository_start_token16] = ACTIONS(58),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [13] = {
    [aux_sym__repository_start_repeat4] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token3] = ACTIONS(98),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [aux_sym__repository_start_token16] = ACTIONS(96),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token3] = ACTIONS(98),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [aux_sym__repository_start_token16] = ACTIONS(96),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token3] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(96),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [16] = {
    [sym__directive] = STATE(186),
    [sym_cmd] = STATE(186),
    [sym_entrypoint] = STATE(186),
    [sym_run] = STATE(186),
    [sym_maintainer] = STATE(186),
    [sym_expose] = STATE(186),
    [sym_from] = STATE(186),
    [aux_sym_dockerfile_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_cmd_token1] = ACTIONS(7),
    [aux_sym_entrypoint_token1] = ACTIONS(9),
    [aux_sym_run_token1] = ACTIONS(11),
    [aux_sym_maintainer_token1] = ACTIONS(13),
    [aux_sym_expose_token1] = ACTIONS(15),
    [aux_sym_from_token1] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym_cmd_token1] = ACTIONS(104),
    [aux_sym_entrypoint_token1] = ACTIONS(104),
    [aux_sym_run_token1] = ACTIONS(104),
    [aux_sym_maintainer_token1] = ACTIONS(104),
    [aux_sym_expose_token1] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(102),
    [aux_sym_from_token1] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(102),
    [aux_sym_from_token2] = ACTIONS(104),
    [aux_sym__repository_start_token3] = ACTIONS(104),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token7] = ACTIONS(102),
    [aux_sym__repository_start_token16] = ACTIONS(102),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_cmd_token1] = ACTIONS(108),
    [aux_sym_entrypoint_token1] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(108),
    [aux_sym_maintainer_token1] = ACTIONS(108),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(106),
    [aux_sym_from_token2] = ACTIONS(108),
    [aux_sym__repository_start_token2] = ACTIONS(106),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token16] = ACTIONS(106),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_cmd_token1] = ACTIONS(112),
    [aux_sym_entrypoint_token1] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_maintainer_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(110),
    [aux_sym_from_token2] = ACTIONS(112),
    [aux_sym__repository_start_token2] = ACTIONS(110),
    [aux_sym__repository_start_token3] = ACTIONS(112),
    [aux_sym__repository_start_token16] = ACTIONS(110),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_cmd_token1] = ACTIONS(116),
    [aux_sym_entrypoint_token1] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [aux_sym_from_token1] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [aux_sym_from_token2] = ACTIONS(116),
    [aux_sym__repository_start_token2] = ACTIONS(114),
    [aux_sym__repository_start_token3] = ACTIONS(116),
    [aux_sym__repository_start_token16] = ACTIONS(114),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [aux_sym_cmd_token1] = ACTIONS(120),
    [aux_sym_entrypoint_token1] = ACTIONS(120),
    [aux_sym_run_token1] = ACTIONS(120),
    [aux_sym_maintainer_token1] = ACTIONS(120),
    [aux_sym_expose_token1] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(118),
    [aux_sym_from_token1] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(118),
    [aux_sym_from_token2] = ACTIONS(120),
    [aux_sym__repository_start_token3] = ACTIONS(120),
    [aux_sym__repository_start_token8] = ACTIONS(118),
    [aux_sym__repository_start_token11] = ACTIONS(118),
    [aux_sym__repository_start_token16] = ACTIONS(118),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_cmd_token1] = ACTIONS(124),
    [aux_sym_entrypoint_token1] = ACTIONS(124),
    [aux_sym_run_token1] = ACTIONS(124),
    [aux_sym_maintainer_token1] = ACTIONS(124),
    [aux_sym_expose_token1] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(122),
    [aux_sym_from_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(124),
    [aux_sym__repository_start_token12] = ACTIONS(122),
    [aux_sym__repository_start_token15] = ACTIONS(122),
    [aux_sym__repository_start_token16] = ACTIONS(122),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_cmd_token1] = ACTIONS(78),
    [aux_sym_entrypoint_token1] = ACTIONS(78),
    [aux_sym_run_token1] = ACTIONS(78),
    [aux_sym_maintainer_token1] = ACTIONS(78),
    [aux_sym_expose_token1] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [aux_sym_from_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(76),
    [aux_sym_from_token2] = ACTIONS(78),
    [aux_sym__repository_start_token2] = ACTIONS(76),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token16] = ACTIONS(76),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [24] = {
    [sym__directive] = STATE(186),
    [sym_cmd] = STATE(186),
    [sym_entrypoint] = STATE(186),
    [sym_run] = STATE(186),
    [sym_maintainer] = STATE(186),
    [sym_expose] = STATE(186),
    [sym_from] = STATE(186),
    [aux_sym_dockerfile_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(126),
    [aux_sym_cmd_token1] = ACTIONS(128),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(134),
    [aux_sym_maintainer_token1] = ACTIONS(137),
    [aux_sym_expose_token1] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [25] = {
    [aux_sym__repository_start_repeat4] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(54),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token12] = ACTIONS(148),
    [aux_sym__repository_start_token15] = ACTIONS(148),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [26] = {
    [aux_sym__repository_start_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_cmd_token1] = ACTIONS(78),
    [aux_sym_entrypoint_token1] = ACTIONS(78),
    [aux_sym_run_token1] = ACTIONS(78),
    [aux_sym_maintainer_token1] = ACTIONS(78),
    [aux_sym_expose_token1] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(76),
    [aux_sym_from_token2] = ACTIONS(78),
    [aux_sym__repository_start_token2] = ACTIONS(150),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [27] = {
    [sym_port_protocol] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [aux_sym__port_part_token1] = ACTIONS(153),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym_from_token1] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [aux_sym__repository_start_repeat4] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_cmd_token1] = ACTIONS(49),
    [aux_sym_entrypoint_token1] = ACTIONS(49),
    [aux_sym_run_token1] = ACTIONS(49),
    [aux_sym_maintainer_token1] = ACTIONS(49),
    [aux_sym_expose_token1] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(47),
    [aux_sym_from_token2] = ACTIONS(49),
    [aux_sym__repository_start_token3] = ACTIONS(49),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [29] = {
    [sym_port_protocol] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_run_token1] = ACTIONS(160),
    [aux_sym_maintainer_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [aux_sym__port_part_token1] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym_from_token1] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(92),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token3] = ACTIONS(162),
    [aux_sym__repository_start_token4] = ACTIONS(164),
    [aux_sym__repository_start_token7] = ACTIONS(164),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [31] = {
    [aux_sym__repository_start_repeat3] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(92),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token3] = ACTIONS(162),
    [aux_sym__repository_start_token8] = ACTIONS(166),
    [aux_sym__repository_start_token11] = ACTIONS(166),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [32] = {
    [aux_sym__repository_start_repeat3] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(54),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token8] = ACTIONS(166),
    [aux_sym__repository_start_token11] = ACTIONS(166),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [33] = {
    [aux_sym__repository_start_repeat4] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(92),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token3] = ACTIONS(162),
    [aux_sym__repository_start_token12] = ACTIONS(148),
    [aux_sym__repository_start_token15] = ACTIONS(148),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [34] = {
    [aux_sym__repository_start_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(54),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token4] = ACTIONS(164),
    [aux_sym__repository_start_token7] = ACTIONS(164),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [35] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_cmd_token1] = ACTIONS(68),
    [aux_sym_entrypoint_token1] = ACTIONS(68),
    [aux_sym_run_token1] = ACTIONS(68),
    [aux_sym_maintainer_token1] = ACTIONS(68),
    [aux_sym_expose_token1] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [aux_sym_from_token1] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(66),
    [aux_sym_from_token2] = ACTIONS(68),
    [aux_sym__repository_start_token2] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(170),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(56),
    [aux_sym_entrypoint_token1] = ACTIONS(56),
    [aux_sym_run_token1] = ACTIONS(56),
    [aux_sym_maintainer_token1] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token2] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [37] = {
    [aux_sym__repository_start_repeat3] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_cmd_token1] = ACTIONS(87),
    [aux_sym_entrypoint_token1] = ACTIONS(87),
    [aux_sym_run_token1] = ACTIONS(87),
    [aux_sym_maintainer_token1] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(85),
    [aux_sym_from_token1] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(85),
    [aux_sym_from_token2] = ACTIONS(87),
    [aux_sym__repository_start_token3] = ACTIONS(87),
    [aux_sym__repository_start_token8] = ACTIONS(172),
    [aux_sym__repository_start_token11] = ACTIONS(172),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [38] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_cmd_token1] = ACTIONS(40),
    [aux_sym_entrypoint_token1] = ACTIONS(40),
    [aux_sym_run_token1] = ACTIONS(40),
    [aux_sym_maintainer_token1] = ACTIONS(40),
    [aux_sym_expose_token1] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(38),
    [aux_sym_from_token1] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(38),
    [aux_sym_from_token2] = ACTIONS(40),
    [aux_sym__repository_start_token3] = ACTIONS(40),
    [aux_sym__repository_start_token4] = ACTIONS(175),
    [aux_sym__repository_start_token7] = ACTIONS(175),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_cmd_token1] = ACTIONS(110),
    [aux_sym_entrypoint_token1] = ACTIONS(110),
    [aux_sym_run_token1] = ACTIONS(110),
    [aux_sym_maintainer_token1] = ACTIONS(110),
    [aux_sym_expose_token1] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [aux_sym__port_part_token1] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [aux_sym_cmd_token1] = ACTIONS(120),
    [aux_sym_entrypoint_token1] = ACTIONS(120),
    [aux_sym_run_token1] = ACTIONS(120),
    [aux_sym_maintainer_token1] = ACTIONS(120),
    [aux_sym_expose_token1] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(118),
    [aux_sym_from_token1] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(118),
    [aux_sym_from_token2] = ACTIONS(120),
    [aux_sym__repository_start_token3] = ACTIONS(120),
    [aux_sym__repository_start_token8] = ACTIONS(118),
    [aux_sym__repository_start_token11] = ACTIONS(118),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_cmd_token1] = ACTIONS(108),
    [aux_sym_entrypoint_token1] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(108),
    [aux_sym_maintainer_token1] = ACTIONS(108),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(106),
    [aux_sym_from_token2] = ACTIONS(108),
    [aux_sym__repository_start_token2] = ACTIONS(106),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_cmd_token1] = ACTIONS(112),
    [aux_sym_entrypoint_token1] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_maintainer_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(110),
    [aux_sym_from_token2] = ACTIONS(112),
    [aux_sym__repository_start_token2] = ACTIONS(110),
    [aux_sym__repository_start_token3] = ACTIONS(112),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_cmd_token1] = ACTIONS(124),
    [aux_sym_entrypoint_token1] = ACTIONS(124),
    [aux_sym_run_token1] = ACTIONS(124),
    [aux_sym_maintainer_token1] = ACTIONS(124),
    [aux_sym_expose_token1] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(122),
    [aux_sym_from_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(124),
    [aux_sym__repository_start_token12] = ACTIONS(122),
    [aux_sym__repository_start_token15] = ACTIONS(122),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [44] = {
    [sym_repository] = STATE(101),
    [sym__repository_start] = STATE(79),
    [sym_image] = STATE(106),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(180),
    [aux_sym_platform_token1] = ACTIONS(182),
    [aux_sym__repository_start_token1] = ACTIONS(178),
    [aux_sym__repository_start_token4] = ACTIONS(184),
    [aux_sym__repository_start_token6] = ACTIONS(184),
    [aux_sym__repository_start_token8] = ACTIONS(186),
    [aux_sym__repository_start_token10] = ACTIONS(186),
    [aux_sym__repository_start_token12] = ACTIONS(188),
    [aux_sym__repository_start_token14] = ACTIONS(188),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_cmd_token1] = ACTIONS(106),
    [aux_sym_entrypoint_token1] = ACTIONS(106),
    [aux_sym_run_token1] = ACTIONS(106),
    [aux_sym_maintainer_token1] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym__port_part_token1] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym_cmd_token1] = ACTIONS(104),
    [aux_sym_entrypoint_token1] = ACTIONS(104),
    [aux_sym_run_token1] = ACTIONS(104),
    [aux_sym_maintainer_token1] = ACTIONS(104),
    [aux_sym_expose_token1] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_from_token1] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(102),
    [aux_sym_from_token2] = ACTIONS(104),
    [aux_sym__repository_start_token3] = ACTIONS(104),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token7] = ACTIONS(102),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_cmd_token1] = ACTIONS(78),
    [aux_sym_entrypoint_token1] = ACTIONS(78),
    [aux_sym_run_token1] = ACTIONS(78),
    [aux_sym_maintainer_token1] = ACTIONS(78),
    [aux_sym_expose_token1] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [aux_sym_from_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(76),
    [aux_sym_from_token2] = ACTIONS(78),
    [aux_sym__repository_start_token2] = ACTIONS(76),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [48] = {
    [aux_sym__repository_start_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_cmd_token1] = ACTIONS(192),
    [aux_sym_entrypoint_token1] = ACTIONS(192),
    [aux_sym_run_token1] = ACTIONS(192),
    [aux_sym_maintainer_token1] = ACTIONS(192),
    [aux_sym_expose_token1] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_from_token1] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(190),
    [aux_sym_from_token2] = ACTIONS(192),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(194),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_cmd_token1] = ACTIONS(114),
    [aux_sym_entrypoint_token1] = ACTIONS(114),
    [aux_sym_run_token1] = ACTIONS(114),
    [aux_sym_maintainer_token1] = ACTIONS(114),
    [aux_sym_expose_token1] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [aux_sym_from_token1] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__repository_start_repeat4] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_cmd_token1] = ACTIONS(198),
    [aux_sym_entrypoint_token1] = ACTIONS(198),
    [aux_sym_run_token1] = ACTIONS(198),
    [aux_sym_maintainer_token1] = ACTIONS(198),
    [aux_sym_expose_token1] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(196),
    [aux_sym_from_token2] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_cmd_token1] = ACTIONS(116),
    [aux_sym_entrypoint_token1] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [aux_sym_from_token1] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [aux_sym_from_token2] = ACTIONS(116),
    [aux_sym__repository_start_token2] = ACTIONS(114),
    [aux_sym__repository_start_token3] = ACTIONS(116),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [52] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_cmd_token1] = ACTIONS(198),
    [aux_sym_entrypoint_token1] = ACTIONS(198),
    [aux_sym_run_token1] = ACTIONS(198),
    [aux_sym_maintainer_token1] = ACTIONS(198),
    [aux_sym_expose_token1] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(196),
    [aux_sym_from_token2] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [53] = {
    [aux_sym__repository_start_repeat4] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [aux_sym_from_token1] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(204),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [54] = {
    [aux_sym__repository_start_repeat3] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [aux_sym_from_token1] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(204),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [55] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_cmd_token1] = ACTIONS(198),
    [aux_sym_entrypoint_token1] = ACTIONS(198),
    [aux_sym_run_token1] = ACTIONS(198),
    [aux_sym_maintainer_token1] = ACTIONS(198),
    [aux_sym_expose_token1] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(196),
    [aux_sym_from_token2] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [56] = {
    [aux_sym__repository_start_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [aux_sym_from_token1] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(204),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [57] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_from_token1] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(204),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_cmd_token1] = ACTIONS(208),
    [aux_sym_entrypoint_token1] = ACTIONS(208),
    [aux_sym_run_token1] = ACTIONS(208),
    [aux_sym_maintainer_token1] = ACTIONS(208),
    [aux_sym_expose_token1] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(210),
    [aux_sym__port_part_token1] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [aux_sym_from_token1] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(214),
    [aux_sym_entrypoint_token1] = ACTIONS(214),
    [aux_sym_run_token1] = ACTIONS(214),
    [aux_sym_maintainer_token1] = ACTIONS(214),
    [aux_sym_expose_token1] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_from_token1] = ACTIONS(214),
    [aux_sym_from_token2] = ACTIONS(214),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(216),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [60] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_cmd_token1] = ACTIONS(220),
    [aux_sym_entrypoint_token1] = ACTIONS(220),
    [aux_sym_run_token1] = ACTIONS(220),
    [aux_sym_maintainer_token1] = ACTIONS(220),
    [aux_sym_expose_token1] = ACTIONS(220),
    [aux_sym_from_token1] = ACTIONS(220),
    [aux_sym_from_token2] = ACTIONS(220),
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(54),
    [aux_sym_entrypoint_token1] = ACTIONS(54),
    [aux_sym_run_token1] = ACTIONS(54),
    [aux_sym_maintainer_token1] = ACTIONS(54),
    [aux_sym_expose_token1] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_SLASH] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(54),
    [aux_sym__repository_start_token16] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_cmd_token1] = ACTIONS(220),
    [aux_sym_entrypoint_token1] = ACTIONS(220),
    [aux_sym_run_token1] = ACTIONS(220),
    [aux_sym_maintainer_token1] = ACTIONS(220),
    [aux_sym_expose_token1] = ACTIONS(220),
    [aux_sym_from_token1] = ACTIONS(220),
    [aux_sym_from_token2] = ACTIONS(220),
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [63] = {
    [aux_sym__repository_start_repeat4] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_cmd_token1] = ACTIONS(220),
    [aux_sym_entrypoint_token1] = ACTIONS(220),
    [aux_sym_run_token1] = ACTIONS(220),
    [aux_sym_maintainer_token1] = ACTIONS(220),
    [aux_sym_expose_token1] = ACTIONS(220),
    [aux_sym_from_token1] = ACTIONS(220),
    [aux_sym_from_token2] = ACTIONS(220),
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_cmd_token1] = ACTIONS(224),
    [aux_sym_entrypoint_token1] = ACTIONS(224),
    [aux_sym_run_token1] = ACTIONS(224),
    [aux_sym_maintainer_token1] = ACTIONS(224),
    [aux_sym_expose_token1] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(228),
    [aux_sym_from_token1] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(224),
    [aux_sym__repository_start_token16] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [sym__port_spec] = STATE(3),
    [sym_mapped_port] = STATE(3),
    [sym_mapped_no_lhs] = STATE(194),
    [sym__port] = STATE(78),
    [sym_port] = STATE(78),
    [sym_port_range] = STATE(78),
    [sym__port_part] = STATE(58),
    [aux_sym_expose_repeat1] = STATE(3),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(230),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__repository_start_repeat2] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(214),
    [aux_sym_entrypoint_token1] = ACTIONS(214),
    [aux_sym_run_token1] = ACTIONS(214),
    [aux_sym_maintainer_token1] = ACTIONS(214),
    [aux_sym_expose_token1] = ACTIONS(214),
    [aux_sym_from_token1] = ACTIONS(214),
    [aux_sym_from_token2] = ACTIONS(214),
    [aux_sym__repository_start_token3] = ACTIONS(216),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [67] = {
    [sym_repository] = STATE(104),
    [sym__repository_start] = STATE(79),
    [sym_image] = STATE(105),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [aux_sym_platform_token1] = ACTIONS(182),
    [aux_sym__repository_start_token1] = ACTIONS(178),
    [aux_sym__repository_start_token4] = ACTIONS(184),
    [aux_sym__repository_start_token6] = ACTIONS(184),
    [aux_sym__repository_start_token8] = ACTIONS(186),
    [aux_sym__repository_start_token10] = ACTIONS(186),
    [aux_sym__repository_start_token12] = ACTIONS(188),
    [aux_sym__repository_start_token14] = ACTIONS(188),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [68] = {
    [aux_sym__repository_start_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(232),
    [aux_sym_cmd_token1] = ACTIONS(234),
    [aux_sym_entrypoint_token1] = ACTIONS(234),
    [aux_sym_run_token1] = ACTIONS(234),
    [aux_sym_maintainer_token1] = ACTIONS(234),
    [aux_sym_expose_token1] = ACTIONS(234),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_from_token1] = ACTIONS(234),
    [aux_sym_from_token2] = ACTIONS(234),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_cmd_token1] = ACTIONS(238),
    [aux_sym_entrypoint_token1] = ACTIONS(238),
    [aux_sym_run_token1] = ACTIONS(238),
    [aux_sym_maintainer_token1] = ACTIONS(238),
    [aux_sym_expose_token1] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [aux_sym__port_part_token1] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [aux_sym_from_token1] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [aux_sym_cmd_token1] = ACTIONS(240),
    [aux_sym_entrypoint_token1] = ACTIONS(240),
    [aux_sym_run_token1] = ACTIONS(240),
    [aux_sym_maintainer_token1] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [aux_sym__port_part_token1] = ACTIONS(240),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [aux_sym_from_token1] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_cmd_token1] = ACTIONS(242),
    [aux_sym_entrypoint_token1] = ACTIONS(242),
    [aux_sym_run_token1] = ACTIONS(242),
    [aux_sym_maintainer_token1] = ACTIONS(242),
    [aux_sym_expose_token1] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [aux_sym__port_part_token1] = ACTIONS(242),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [aux_sym_from_token1] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
    [aux_sym__repository_start_repeat4] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(214),
    [aux_sym_entrypoint_token1] = ACTIONS(214),
    [aux_sym_run_token1] = ACTIONS(214),
    [aux_sym_maintainer_token1] = ACTIONS(214),
    [aux_sym_expose_token1] = ACTIONS(214),
    [aux_sym_from_token1] = ACTIONS(214),
    [aux_sym_from_token2] = ACTIONS(214),
    [aux_sym__repository_start_token3] = ACTIONS(216),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [aux_sym_cmd_token1] = ACTIONS(244),
    [aux_sym_entrypoint_token1] = ACTIONS(244),
    [aux_sym_run_token1] = ACTIONS(244),
    [aux_sym_maintainer_token1] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(248),
    [aux_sym_from_token1] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [aux_sym__repository_start_token16] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(92),
    [aux_sym_entrypoint_token1] = ACTIONS(92),
    [aux_sym_run_token1] = ACTIONS(92),
    [aux_sym_maintainer_token1] = ACTIONS(92),
    [aux_sym_expose_token1] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(92),
    [aux_sym__repository_start_token16] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [aux_sym__port_part_token1] = ACTIONS(153),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_from_token1] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [aux_sym__repository_start_repeat3] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(214),
    [aux_sym_entrypoint_token1] = ACTIONS(214),
    [aux_sym_run_token1] = ACTIONS(214),
    [aux_sym_maintainer_token1] = ACTIONS(214),
    [aux_sym_expose_token1] = ACTIONS(214),
    [aux_sym_from_token1] = ACTIONS(214),
    [aux_sym_from_token2] = ACTIONS(214),
    [aux_sym__repository_start_token3] = ACTIONS(216),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [77] = {
    [aux_sym__repository_start_repeat1] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_cmd_token1] = ACTIONS(252),
    [aux_sym_entrypoint_token1] = ACTIONS(252),
    [aux_sym_run_token1] = ACTIONS(252),
    [aux_sym_maintainer_token1] = ACTIONS(252),
    [aux_sym_expose_token1] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_from_token1] = ACTIONS(252),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(254),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym_cmd_token1] = ACTIONS(256),
    [aux_sym_entrypoint_token1] = ACTIONS(256),
    [aux_sym_run_token1] = ACTIONS(256),
    [aux_sym_maintainer_token1] = ACTIONS(256),
    [aux_sym_expose_token1] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(258),
    [aux_sym__port_part_token1] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [aux_sym_from_token1] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [79] = {
    [sym__repository_continued] = STATE(85),
    [aux_sym_repository_repeat1] = STATE(85),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [aux_sym_platform_token1] = ACTIONS(263),
    [aux_sym__repository_start_token1] = ACTIONS(260),
    [aux_sym__repository_start_token4] = ACTIONS(266),
    [aux_sym__repository_start_token6] = ACTIONS(266),
    [aux_sym__repository_start_token8] = ACTIONS(269),
    [aux_sym__repository_start_token10] = ACTIONS(269),
    [aux_sym__repository_start_token12] = ACTIONS(272),
    [aux_sym__repository_start_token14] = ACTIONS(272),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [80] = {
    [sym_digest] = STATE(167),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_sha256_COLON] = ACTIONS(277),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [81] = {
    [sym_digest] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_sha256_COLON] = ACTIONS(287),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [82] = {
    [aux_sym__repository_start_repeat4] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [aux_sym__repository_start_token3] = ACTIONS(293),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [83] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_sha256_COLON] = ACTIONS(295),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [84] = {
    [sym_digest] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_sha256_COLON] = ACTIONS(297),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [85] = {
    [sym__repository_continued] = STATE(91),
    [aux_sym_repository_repeat1] = STATE(91),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [aux_sym_platform_token1] = ACTIONS(302),
    [aux_sym__repository_start_token1] = ACTIONS(299),
    [aux_sym__repository_start_token4] = ACTIONS(305),
    [aux_sym__repository_start_token6] = ACTIONS(305),
    [aux_sym__repository_start_token8] = ACTIONS(308),
    [aux_sym__repository_start_token10] = ACTIONS(308),
    [aux_sym__repository_start_token12] = ACTIONS(311),
    [aux_sym__repository_start_token14] = ACTIONS(311),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [aux_sym_cmd_token1] = ACTIONS(314),
    [aux_sym_entrypoint_token1] = ACTIONS(314),
    [aux_sym_run_token1] = ACTIONS(314),
    [aux_sym_maintainer_token1] = ACTIONS(314),
    [aux_sym_expose_token1] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(314),
    [aux_sym__port_part_token1] = ACTIONS(314),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [aux_sym_from_token1] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [88] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [aux_sym__repository_start_token3] = ACTIONS(293),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [89] = {
    [sym_digest] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_sha256_COLON] = ACTIONS(322),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [90] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [aux_sym__repository_start_token3] = ACTIONS(293),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [91] = {
    [sym__repository_continued] = STATE(91),
    [aux_sym_repository_repeat1] = STATE(91),
    [anon_sym_DOLLAR] = ACTIONS(324),
    [aux_sym_platform_token1] = ACTIONS(327),
    [aux_sym__repository_start_token1] = ACTIONS(324),
    [aux_sym__repository_start_token4] = ACTIONS(330),
    [aux_sym__repository_start_token6] = ACTIONS(330),
    [aux_sym__repository_start_token8] = ACTIONS(333),
    [aux_sym__repository_start_token10] = ACTIONS(333),
    [aux_sym__repository_start_token12] = ACTIONS(336),
    [aux_sym__repository_start_token14] = ACTIONS(336),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_cmd_token1] = ACTIONS(339),
    [aux_sym_entrypoint_token1] = ACTIONS(339),
    [aux_sym_run_token1] = ACTIONS(339),
    [aux_sym_maintainer_token1] = ACTIONS(339),
    [aux_sym_expose_token1] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [aux_sym__port_part_token1] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [aux_sym_from_token1] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
    [aux_sym__repository_start_repeat2] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [94] = {
    [aux_sym__repository_start_repeat3] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [95] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_sha256_COLON] = ACTIONS(341),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [96] = {
    [aux_sym__repository_start_repeat4] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [97] = {
    [sym_as_name] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [98] = {
    [sym_tag] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [aux_sym_platform_token1] = ACTIONS(355),
    [aux_sym__repository_start_token1] = ACTIONS(353),
    [aux_sym__repository_start_token4] = ACTIONS(357),
    [aux_sym__repository_start_token6] = ACTIONS(357),
    [aux_sym__repository_start_token8] = ACTIONS(359),
    [aux_sym__repository_start_token10] = ACTIONS(359),
    [aux_sym__repository_start_token12] = ACTIONS(361),
    [aux_sym__repository_start_token14] = ACTIONS(361),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [aux_sym_cmd_token1] = ACTIONS(244),
    [aux_sym_entrypoint_token1] = ACTIONS(244),
    [aux_sym_run_token1] = ACTIONS(244),
    [aux_sym_maintainer_token1] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [aux_sym_from_token1] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [aux_sym__port_part_token1] = ACTIONS(363),
    [anon_sym_DOLLAR] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [sym_image] = STATE(108),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [aux_sym_platform_token1] = ACTIONS(367),
    [aux_sym__repository_start_token1] = ACTIONS(365),
    [aux_sym__repository_start_token4] = ACTIONS(369),
    [aux_sym__repository_start_token6] = ACTIONS(369),
    [aux_sym__repository_start_token8] = ACTIONS(371),
    [aux_sym__repository_start_token10] = ACTIONS(371),
    [aux_sym__repository_start_token12] = ACTIONS(373),
    [aux_sym__repository_start_token14] = ACTIONS(373),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(92),
    [aux_sym_entrypoint_token1] = ACTIONS(92),
    [aux_sym_run_token1] = ACTIONS(92),
    [aux_sym_maintainer_token1] = ACTIONS(92),
    [aux_sym_expose_token1] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [aux_sym_from_token1] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym_from_token2] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [aux_sym__anything] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym_cmd_token1] = ACTIONS(377),
    [aux_sym_entrypoint_token1] = ACTIONS(377),
    [aux_sym_run_token1] = ACTIONS(377),
    [aux_sym_maintainer_token1] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [aux_sym__anything_token1] = ACTIONS(379),
    [aux_sym__anything_token2] = ACTIONS(379),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [104] = {
    [sym_image] = STATE(114),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [aux_sym_platform_token1] = ACTIONS(367),
    [aux_sym__repository_start_token1] = ACTIONS(365),
    [aux_sym__repository_start_token4] = ACTIONS(369),
    [aux_sym__repository_start_token6] = ACTIONS(369),
    [aux_sym__repository_start_token8] = ACTIONS(371),
    [aux_sym__repository_start_token10] = ACTIONS(371),
    [aux_sym__repository_start_token12] = ACTIONS(373),
    [aux_sym__repository_start_token14] = ACTIONS(373),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_cmd_token1] = ACTIONS(382),
    [aux_sym_entrypoint_token1] = ACTIONS(382),
    [aux_sym_run_token1] = ACTIONS(382),
    [aux_sym_maintainer_token1] = ACTIONS(382),
    [aux_sym_expose_token1] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(384),
    [aux_sym_from_token1] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(386),
    [aux_sym_from_token2] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym_cmd_token1] = ACTIONS(390),
    [aux_sym_entrypoint_token1] = ACTIONS(390),
    [aux_sym_run_token1] = ACTIONS(390),
    [aux_sym_maintainer_token1] = ACTIONS(390),
    [aux_sym_expose_token1] = ACTIONS(390),
    [anon_sym_COLON] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(394),
    [aux_sym_from_token2] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [sym_as_name] = STATE(178),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [aux_sym_cmd_token1] = ACTIONS(398),
    [aux_sym_entrypoint_token1] = ACTIONS(398),
    [aux_sym_run_token1] = ACTIONS(398),
    [aux_sym_maintainer_token1] = ACTIONS(398),
    [aux_sym_expose_token1] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(400),
    [aux_sym_from_token1] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(402),
    [aux_sym_from_token2] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
    [aux_sym__anything] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(408),
    [aux_sym_entrypoint_token1] = ACTIONS(408),
    [aux_sym_run_token1] = ACTIONS(408),
    [aux_sym_maintainer_token1] = ACTIONS(408),
    [aux_sym_expose_token1] = ACTIONS(408),
    [aux_sym_from_token1] = ACTIONS(408),
    [aux_sym__anything_token1] = ACTIONS(410),
    [aux_sym__anything_token2] = ACTIONS(410),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [110] = {
    [sym_tag] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [aux_sym_platform_token1] = ACTIONS(355),
    [aux_sym__repository_start_token1] = ACTIONS(353),
    [aux_sym__repository_start_token4] = ACTIONS(357),
    [aux_sym__repository_start_token6] = ACTIONS(357),
    [aux_sym__repository_start_token8] = ACTIONS(359),
    [aux_sym__repository_start_token10] = ACTIONS(359),
    [aux_sym__repository_start_token12] = ACTIONS(361),
    [aux_sym__repository_start_token14] = ACTIONS(361),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [111] = {
    [sym_as_name] = STATE(170),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [112] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [aux_sym_platform_token1] = ACTIONS(355),
    [aux_sym__repository_start_token1] = ACTIONS(353),
    [aux_sym__repository_start_token4] = ACTIONS(357),
    [aux_sym__repository_start_token6] = ACTIONS(357),
    [aux_sym__repository_start_token8] = ACTIONS(359),
    [aux_sym__repository_start_token10] = ACTIONS(359),
    [aux_sym__repository_start_token12] = ACTIONS(361),
    [aux_sym__repository_start_token14] = ACTIONS(361),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [113] = {
    [sym_tag] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [aux_sym_platform_token1] = ACTIONS(355),
    [aux_sym__repository_start_token1] = ACTIONS(353),
    [aux_sym__repository_start_token4] = ACTIONS(357),
    [aux_sym__repository_start_token6] = ACTIONS(357),
    [aux_sym__repository_start_token8] = ACTIONS(359),
    [aux_sym__repository_start_token10] = ACTIONS(359),
    [aux_sym__repository_start_token12] = ACTIONS(361),
    [aux_sym__repository_start_token14] = ACTIONS(361),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_cmd_token1] = ACTIONS(412),
    [aux_sym_entrypoint_token1] = ACTIONS(412),
    [aux_sym_run_token1] = ACTIONS(412),
    [aux_sym_maintainer_token1] = ACTIONS(412),
    [aux_sym_expose_token1] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(416),
    [aux_sym_from_token2] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
    [aux_sym__anything] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym_cmd_token1] = ACTIONS(377),
    [aux_sym_entrypoint_token1] = ACTIONS(377),
    [aux_sym_run_token1] = ACTIONS(377),
    [aux_sym_maintainer_token1] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [aux_sym__anything_token1] = ACTIONS(420),
    [aux_sym__anything_token2] = ACTIONS(420),
    [sym_comment] = ACTIONS(377),
    [sym_line_continuation] = ACTIONS(45),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(54),
    [aux_sym_entrypoint_token1] = ACTIONS(54),
    [aux_sym_run_token1] = ACTIONS(54),
    [aux_sym_maintainer_token1] = ACTIONS(54),
    [aux_sym_expose_token1] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [aux_sym_from_token1] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(54),
    [aux_sym_from_token2] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_cmd_token1] = ACTIONS(224),
    [aux_sym_entrypoint_token1] = ACTIONS(224),
    [aux_sym_run_token1] = ACTIONS(224),
    [aux_sym_maintainer_token1] = ACTIONS(224),
    [aux_sym_expose_token1] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [aux_sym_from_token1] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [aux_sym_cmd_token1] = ACTIONS(423),
    [aux_sym_entrypoint_token1] = ACTIONS(423),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_maintainer_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [aux_sym__port_part_token1] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
    [aux_sym__anything] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(425),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [aux_sym__anything_token1] = ACTIONS(429),
    [aux_sym__anything_token2] = ACTIONS(429),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [120] = {
    [sym_as_name] = STATE(171),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [121] = {
    [sym_as_name] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [122] = {
    [sym_digest] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [123] = {
    [sym_digest] = STATE(167),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [124] = {
    [sym_digest] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [125] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [126] = {
    [sym_digest] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [127] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_platform_token1] = ACTIONS(279),
    [aux_sym__repository_start_token1] = ACTIONS(275),
    [aux_sym__repository_start_token4] = ACTIONS(281),
    [aux_sym__repository_start_token6] = ACTIONS(281),
    [aux_sym__repository_start_token8] = ACTIONS(283),
    [aux_sym__repository_start_token10] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(285),
    [aux_sym__repository_start_token14] = ACTIONS(285),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [128] = {
    [aux_sym__anything] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym_cmd_token1] = ACTIONS(433),
    [aux_sym_entrypoint_token1] = ACTIONS(433),
    [aux_sym_run_token1] = ACTIONS(433),
    [aux_sym_maintainer_token1] = ACTIONS(433),
    [aux_sym_expose_token1] = ACTIONS(433),
    [aux_sym_from_token1] = ACTIONS(433),
    [aux_sym__anything_token1] = ACTIONS(435),
    [aux_sym__anything_token2] = ACTIONS(435),
    [sym_comment] = ACTIONS(437),
    [sym_line_continuation] = ACTIONS(45),
  },
  [129] = {
    [sym_as_name] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [130] = {
    [sym_as_name] = STATE(189),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [131] = {
    [sym_as_name] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [132] = {
    [sym_as_name] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_platform_token1] = ACTIONS(345),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token6] = ACTIONS(347),
    [aux_sym__repository_start_token8] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(351),
    [aux_sym__repository_start_token14] = ACTIONS(351),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [133] = {
    [sym__port_spec] = STATE(253),
    [sym_mapped_port] = STATE(253),
    [sym__port] = STATE(78),
    [sym_port] = STATE(251),
    [sym_port_range] = STATE(251),
    [sym__port_part] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_platform_token1] = ACTIONS(108),
    [aux_sym__repository_start_token1] = ACTIONS(106),
    [aux_sym__repository_start_token4] = ACTIONS(106),
    [aux_sym__repository_start_token6] = ACTIONS(106),
    [aux_sym__repository_start_token8] = ACTIONS(106),
    [aux_sym__repository_start_token10] = ACTIONS(106),
    [aux_sym__repository_start_token12] = ACTIONS(106),
    [aux_sym__repository_start_token14] = ACTIONS(106),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_cmd_token1] = ACTIONS(441),
    [aux_sym_entrypoint_token1] = ACTIONS(441),
    [aux_sym_run_token1] = ACTIONS(441),
    [aux_sym_maintainer_token1] = ACTIONS(441),
    [aux_sym_expose_token1] = ACTIONS(441),
    [aux_sym_from_token1] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [aux_sym_from_token2] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
    [anon_sym_DOLLAR] = ACTIONS(443),
    [aux_sym_platform_token1] = ACTIONS(445),
    [aux_sym__repository_start_token1] = ACTIONS(443),
    [aux_sym__repository_start_token4] = ACTIONS(443),
    [aux_sym__repository_start_token6] = ACTIONS(443),
    [aux_sym__repository_start_token8] = ACTIONS(443),
    [aux_sym__repository_start_token10] = ACTIONS(443),
    [aux_sym__repository_start_token12] = ACTIONS(443),
    [aux_sym__repository_start_token14] = ACTIONS(443),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_run_token1] = ACTIONS(447),
    [aux_sym_maintainer_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(449),
    [aux_sym_from_token2] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_cmd_token1] = ACTIONS(412),
    [aux_sym_entrypoint_token1] = ACTIONS(412),
    [aux_sym_run_token1] = ACTIONS(412),
    [aux_sym_maintainer_token1] = ACTIONS(412),
    [aux_sym_expose_token1] = ACTIONS(412),
    [aux_sym_from_token1] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(416),
    [aux_sym_from_token2] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_cmd_token1] = ACTIONS(382),
    [aux_sym_entrypoint_token1] = ACTIONS(382),
    [aux_sym_run_token1] = ACTIONS(382),
    [aux_sym_maintainer_token1] = ACTIONS(382),
    [aux_sym_expose_token1] = ACTIONS(382),
    [aux_sym_from_token1] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(386),
    [aux_sym_from_token2] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [140] = {
    [anon_sym_DOLLAR] = ACTIONS(453),
    [aux_sym_platform_token1] = ACTIONS(455),
    [aux_sym__repository_start_token1] = ACTIONS(453),
    [aux_sym__repository_start_token4] = ACTIONS(453),
    [aux_sym__repository_start_token6] = ACTIONS(453),
    [aux_sym__repository_start_token8] = ACTIONS(453),
    [aux_sym__repository_start_token10] = ACTIONS(453),
    [aux_sym__repository_start_token12] = ACTIONS(453),
    [aux_sym__repository_start_token14] = ACTIONS(453),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [141] = {
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_platform_token1] = ACTIONS(112),
    [aux_sym__repository_start_token1] = ACTIONS(110),
    [aux_sym__repository_start_token4] = ACTIONS(110),
    [aux_sym__repository_start_token6] = ACTIONS(110),
    [aux_sym__repository_start_token8] = ACTIONS(110),
    [aux_sym__repository_start_token10] = ACTIONS(110),
    [aux_sym__repository_start_token12] = ACTIONS(110),
    [aux_sym__repository_start_token14] = ACTIONS(110),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [aux_sym_cmd_token1] = ACTIONS(457),
    [aux_sym_entrypoint_token1] = ACTIONS(457),
    [aux_sym_run_token1] = ACTIONS(457),
    [aux_sym_maintainer_token1] = ACTIONS(457),
    [aux_sym_expose_token1] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [aux_sym_from_token2] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [143] = {
    [anon_sym_DOLLAR] = ACTIONS(459),
    [aux_sym_platform_token1] = ACTIONS(461),
    [aux_sym__repository_start_token1] = ACTIONS(459),
    [aux_sym__repository_start_token4] = ACTIONS(459),
    [aux_sym__repository_start_token6] = ACTIONS(459),
    [aux_sym__repository_start_token8] = ACTIONS(459),
    [aux_sym__repository_start_token10] = ACTIONS(459),
    [aux_sym__repository_start_token12] = ACTIONS(459),
    [aux_sym__repository_start_token14] = ACTIONS(459),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [144] = {
    [anon_sym_DOLLAR] = ACTIONS(463),
    [aux_sym_platform_token1] = ACTIONS(465),
    [aux_sym__repository_start_token1] = ACTIONS(463),
    [aux_sym__repository_start_token4] = ACTIONS(463),
    [aux_sym__repository_start_token6] = ACTIONS(463),
    [aux_sym__repository_start_token8] = ACTIONS(463),
    [aux_sym__repository_start_token10] = ACTIONS(463),
    [aux_sym__repository_start_token12] = ACTIONS(463),
    [aux_sym__repository_start_token14] = ACTIONS(463),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [aux_sym_cmd_token1] = ACTIONS(196),
    [aux_sym_entrypoint_token1] = ACTIONS(196),
    [aux_sym_run_token1] = ACTIONS(196),
    [aux_sym_maintainer_token1] = ACTIONS(196),
    [aux_sym_expose_token1] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [aux_sym_from_token2] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [146] = {
    [anon_sym_DOLLAR] = ACTIONS(114),
    [aux_sym_platform_token1] = ACTIONS(116),
    [aux_sym__repository_start_token1] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(114),
    [aux_sym__repository_start_token6] = ACTIONS(114),
    [aux_sym__repository_start_token8] = ACTIONS(114),
    [aux_sym__repository_start_token10] = ACTIONS(114),
    [aux_sym__repository_start_token12] = ACTIONS(114),
    [aux_sym__repository_start_token14] = ACTIONS(114),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [147] = {
    [anon_sym_DOLLAR] = ACTIONS(467),
    [aux_sym_platform_token1] = ACTIONS(469),
    [aux_sym__repository_start_token1] = ACTIONS(467),
    [aux_sym__repository_start_token4] = ACTIONS(467),
    [aux_sym__repository_start_token6] = ACTIONS(467),
    [aux_sym__repository_start_token8] = ACTIONS(467),
    [aux_sym__repository_start_token10] = ACTIONS(467),
    [aux_sym__repository_start_token12] = ACTIONS(467),
    [aux_sym__repository_start_token14] = ACTIONS(467),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [148] = {
    [anon_sym_DOLLAR] = ACTIONS(471),
    [aux_sym_platform_token1] = ACTIONS(473),
    [aux_sym__repository_start_token1] = ACTIONS(471),
    [aux_sym__repository_start_token4] = ACTIONS(471),
    [aux_sym__repository_start_token6] = ACTIONS(471),
    [aux_sym__repository_start_token8] = ACTIONS(471),
    [aux_sym__repository_start_token10] = ACTIONS(471),
    [aux_sym__repository_start_token12] = ACTIONS(471),
    [aux_sym__repository_start_token14] = ACTIONS(471),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [149] = {
    [anon_sym_DOLLAR] = ACTIONS(475),
    [aux_sym_platform_token1] = ACTIONS(477),
    [aux_sym__repository_start_token1] = ACTIONS(475),
    [aux_sym__repository_start_token4] = ACTIONS(475),
    [aux_sym__repository_start_token6] = ACTIONS(475),
    [aux_sym__repository_start_token8] = ACTIONS(475),
    [aux_sym__repository_start_token10] = ACTIONS(475),
    [aux_sym__repository_start_token12] = ACTIONS(475),
    [aux_sym__repository_start_token14] = ACTIONS(475),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [150] = {
    [anon_sym_DOLLAR] = ACTIONS(479),
    [aux_sym_platform_token1] = ACTIONS(481),
    [aux_sym__repository_start_token1] = ACTIONS(479),
    [aux_sym__repository_start_token4] = ACTIONS(479),
    [aux_sym__repository_start_token6] = ACTIONS(479),
    [aux_sym__repository_start_token8] = ACTIONS(479),
    [aux_sym__repository_start_token10] = ACTIONS(479),
    [aux_sym__repository_start_token12] = ACTIONS(479),
    [aux_sym__repository_start_token14] = ACTIONS(479),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [151] = {
    [anon_sym_DOLLAR] = ACTIONS(483),
    [aux_sym_platform_token1] = ACTIONS(485),
    [aux_sym__repository_start_token1] = ACTIONS(483),
    [aux_sym__repository_start_token4] = ACTIONS(483),
    [aux_sym__repository_start_token6] = ACTIONS(483),
    [aux_sym__repository_start_token8] = ACTIONS(483),
    [aux_sym__repository_start_token10] = ACTIONS(483),
    [aux_sym__repository_start_token12] = ACTIONS(483),
    [aux_sym__repository_start_token14] = ACTIONS(483),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(202),
    [aux_sym_entrypoint_token1] = ACTIONS(202),
    [aux_sym_run_token1] = ACTIONS(202),
    [aux_sym_maintainer_token1] = ACTIONS(202),
    [aux_sym_expose_token1] = ACTIONS(202),
    [aux_sym_from_token1] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [153] = {
    [anon_sym_DOLLAR] = ACTIONS(487),
    [aux_sym_platform_token1] = ACTIONS(489),
    [aux_sym__repository_start_token1] = ACTIONS(487),
    [aux_sym__repository_start_token4] = ACTIONS(487),
    [aux_sym__repository_start_token6] = ACTIONS(487),
    [aux_sym__repository_start_token8] = ACTIONS(487),
    [aux_sym__repository_start_token10] = ACTIONS(487),
    [aux_sym__repository_start_token12] = ACTIONS(487),
    [aux_sym__repository_start_token14] = ACTIONS(487),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [154] = {
    [anon_sym_DOLLAR] = ACTIONS(491),
    [aux_sym_platform_token1] = ACTIONS(493),
    [aux_sym__repository_start_token1] = ACTIONS(491),
    [aux_sym__repository_start_token4] = ACTIONS(491),
    [aux_sym__repository_start_token6] = ACTIONS(491),
    [aux_sym__repository_start_token8] = ACTIONS(491),
    [aux_sym__repository_start_token10] = ACTIONS(491),
    [aux_sym__repository_start_token12] = ACTIONS(491),
    [aux_sym__repository_start_token14] = ACTIONS(491),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [155] = {
    [anon_sym_DOLLAR] = ACTIONS(495),
    [aux_sym_platform_token1] = ACTIONS(497),
    [aux_sym__repository_start_token1] = ACTIONS(495),
    [aux_sym__repository_start_token4] = ACTIONS(495),
    [aux_sym__repository_start_token6] = ACTIONS(495),
    [aux_sym__repository_start_token8] = ACTIONS(495),
    [aux_sym__repository_start_token10] = ACTIONS(495),
    [aux_sym__repository_start_token12] = ACTIONS(495),
    [aux_sym__repository_start_token14] = ACTIONS(495),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(501),
    [aux_sym_from_token2] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_cmd_token1] = ACTIONS(412),
    [aux_sym_entrypoint_token1] = ACTIONS(412),
    [aux_sym_run_token1] = ACTIONS(412),
    [aux_sym_maintainer_token1] = ACTIONS(412),
    [aux_sym_expose_token1] = ACTIONS(412),
    [aux_sym_from_token1] = ACTIONS(412),
    [aux_sym_from_token2] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [aux_sym_cmd_token1] = ACTIONS(505),
    [aux_sym_entrypoint_token1] = ACTIONS(505),
    [aux_sym_run_token1] = ACTIONS(505),
    [aux_sym_maintainer_token1] = ACTIONS(505),
    [aux_sym_expose_token1] = ACTIONS(505),
    [aux_sym_from_token1] = ACTIONS(505),
    [aux_sym_from_token2] = ACTIONS(505),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_cmd_token1] = ACTIONS(218),
    [aux_sym_entrypoint_token1] = ACTIONS(218),
    [aux_sym_run_token1] = ACTIONS(218),
    [aux_sym_maintainer_token1] = ACTIONS(218),
    [aux_sym_expose_token1] = ACTIONS(218),
    [aux_sym_from_token1] = ACTIONS(218),
    [aux_sym_from_token2] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [aux_sym_cmd_token1] = ACTIONS(507),
    [aux_sym_entrypoint_token1] = ACTIONS(507),
    [aux_sym_run_token1] = ACTIONS(507),
    [aux_sym_maintainer_token1] = ACTIONS(507),
    [aux_sym_expose_token1] = ACTIONS(507),
    [aux_sym_from_token1] = ACTIONS(507),
    [aux_sym_from_token2] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_cmd_token1] = ACTIONS(509),
    [aux_sym_entrypoint_token1] = ACTIONS(509),
    [aux_sym_run_token1] = ACTIONS(509),
    [aux_sym_maintainer_token1] = ACTIONS(509),
    [aux_sym_expose_token1] = ACTIONS(509),
    [aux_sym_from_token1] = ACTIONS(509),
    [aux_sym_from_token2] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_cmd_token1] = ACTIONS(382),
    [aux_sym_entrypoint_token1] = ACTIONS(382),
    [aux_sym_run_token1] = ACTIONS(382),
    [aux_sym_maintainer_token1] = ACTIONS(382),
    [aux_sym_expose_token1] = ACTIONS(382),
    [aux_sym_from_token1] = ACTIONS(382),
    [aux_sym_from_token2] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_cmd_token1] = ACTIONS(513),
    [aux_sym_entrypoint_token1] = ACTIONS(513),
    [aux_sym_run_token1] = ACTIONS(513),
    [aux_sym_maintainer_token1] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [aux_sym_from_token2] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(212),
    [aux_sym_entrypoint_token1] = ACTIONS(212),
    [aux_sym_run_token1] = ACTIONS(212),
    [aux_sym_maintainer_token1] = ACTIONS(212),
    [aux_sym_expose_token1] = ACTIONS(212),
    [aux_sym_from_token1] = ACTIONS(212),
    [aux_sym_from_token2] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_run_token1] = ACTIONS(517),
    [aux_sym_maintainer_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [aux_sym_from_token2] = ACTIONS(519),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_run_token1] = ACTIONS(447),
    [aux_sym_maintainer_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [aux_sym_from_token2] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [aux_sym_from_token2] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_cmd_token1] = ACTIONS(521),
    [aux_sym_entrypoint_token1] = ACTIONS(521),
    [aux_sym_run_token1] = ACTIONS(521),
    [aux_sym_maintainer_token1] = ACTIONS(521),
    [aux_sym_expose_token1] = ACTIONS(521),
    [aux_sym_from_token1] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [aux_sym_cmd_token1] = ACTIONS(523),
    [aux_sym_entrypoint_token1] = ACTIONS(523),
    [aux_sym_run_token1] = ACTIONS(523),
    [aux_sym_maintainer_token1] = ACTIONS(523),
    [aux_sym_expose_token1] = ACTIONS(523),
    [aux_sym_from_token1] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_cmd_token1] = ACTIONS(412),
    [aux_sym_entrypoint_token1] = ACTIONS(412),
    [aux_sym_run_token1] = ACTIONS(412),
    [aux_sym_maintainer_token1] = ACTIONS(412),
    [aux_sym_expose_token1] = ACTIONS(412),
    [aux_sym_from_token1] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_cmd_token1] = ACTIONS(382),
    [aux_sym_entrypoint_token1] = ACTIONS(382),
    [aux_sym_run_token1] = ACTIONS(382),
    [aux_sym_maintainer_token1] = ACTIONS(382),
    [aux_sym_expose_token1] = ACTIONS(382),
    [aux_sym_from_token1] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [aux_sym_cmd_token1] = ACTIONS(525),
    [aux_sym_entrypoint_token1] = ACTIONS(525),
    [aux_sym_run_token1] = ACTIONS(525),
    [aux_sym_maintainer_token1] = ACTIONS(525),
    [aux_sym_expose_token1] = ACTIONS(525),
    [aux_sym_from_token1] = ACTIONS(525),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_cmd_token1] = ACTIONS(527),
    [aux_sym_entrypoint_token1] = ACTIONS(527),
    [aux_sym_run_token1] = ACTIONS(527),
    [aux_sym_maintainer_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_cmd_token1] = ACTIONS(529),
    [aux_sym_entrypoint_token1] = ACTIONS(529),
    [aux_sym_run_token1] = ACTIONS(529),
    [aux_sym_maintainer_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_cmd_token1] = ACTIONS(316),
    [aux_sym_entrypoint_token1] = ACTIONS(316),
    [aux_sym_run_token1] = ACTIONS(316),
    [aux_sym_maintainer_token1] = ACTIONS(316),
    [aux_sym_expose_token1] = ACTIONS(316),
    [aux_sym_from_token1] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_run_token1] = ACTIONS(517),
    [aux_sym_maintainer_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_run_token1] = ACTIONS(447),
    [aux_sym_maintainer_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [179] = {
    [sym__port] = STATE(100),
    [sym_port] = STATE(100),
    [sym_port_range] = STATE(100),
    [sym__port_part] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_cmd_token1] = ACTIONS(531),
    [aux_sym_entrypoint_token1] = ACTIONS(531),
    [aux_sym_run_token1] = ACTIONS(531),
    [aux_sym_maintainer_token1] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_cmd_token1] = ACTIONS(513),
    [aux_sym_entrypoint_token1] = ACTIONS(513),
    [aux_sym_run_token1] = ACTIONS(513),
    [aux_sym_maintainer_token1] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [182] = {
    [sym__port] = STATE(174),
    [sym_port] = STATE(174),
    [sym_port_range] = STATE(174),
    [sym__port_part] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [aux_sym_cmd_token1] = ACTIONS(533),
    [aux_sym_entrypoint_token1] = ACTIONS(533),
    [aux_sym_run_token1] = ACTIONS(533),
    [aux_sym_maintainer_token1] = ACTIONS(533),
    [aux_sym_expose_token1] = ACTIONS(533),
    [aux_sym_from_token1] = ACTIONS(533),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_cmd_token1] = ACTIONS(535),
    [aux_sym_entrypoint_token1] = ACTIONS(535),
    [aux_sym_run_token1] = ACTIONS(535),
    [aux_sym_maintainer_token1] = ACTIONS(535),
    [aux_sym_expose_token1] = ACTIONS(535),
    [aux_sym_from_token1] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [aux_sym_cmd_token1] = ACTIONS(537),
    [aux_sym_entrypoint_token1] = ACTIONS(537),
    [aux_sym_run_token1] = ACTIONS(537),
    [aux_sym_maintainer_token1] = ACTIONS(537),
    [aux_sym_expose_token1] = ACTIONS(537),
    [aux_sym_from_token1] = ACTIONS(537),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_cmd_token1] = ACTIONS(539),
    [aux_sym_entrypoint_token1] = ACTIONS(539),
    [aux_sym_run_token1] = ACTIONS(539),
    [aux_sym_maintainer_token1] = ACTIONS(539),
    [aux_sym_expose_token1] = ACTIONS(539),
    [aux_sym_from_token1] = ACTIONS(539),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [aux_sym_cmd_token1] = ACTIONS(541),
    [aux_sym_entrypoint_token1] = ACTIONS(541),
    [aux_sym_run_token1] = ACTIONS(541),
    [aux_sym_maintainer_token1] = ACTIONS(541),
    [aux_sym_expose_token1] = ACTIONS(541),
    [aux_sym_from_token1] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_cmd_token1] = ACTIONS(509),
    [aux_sym_entrypoint_token1] = ACTIONS(509),
    [aux_sym_run_token1] = ACTIONS(509),
    [aux_sym_maintainer_token1] = ACTIONS(509),
    [aux_sym_expose_token1] = ACTIONS(509),
    [aux_sym_from_token1] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_cmd_token1] = ACTIONS(543),
    [aux_sym_entrypoint_token1] = ACTIONS(543),
    [aux_sym_run_token1] = ACTIONS(543),
    [aux_sym_maintainer_token1] = ACTIONS(543),
    [aux_sym_expose_token1] = ACTIONS(543),
    [aux_sym_from_token1] = ACTIONS(543),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_run_token1] = ACTIONS(545),
    [aux_sym_maintainer_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [aux_sym_cmd_token1] = ACTIONS(547),
    [aux_sym_entrypoint_token1] = ACTIONS(547),
    [aux_sym_run_token1] = ACTIONS(547),
    [aux_sym_maintainer_token1] = ACTIONS(547),
    [aux_sym_expose_token1] = ACTIONS(547),
    [aux_sym_from_token1] = ACTIONS(547),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [193] = {
    [aux_sym__json_string] = STATE(221),
    [aux_sym_json_array_repeat1] = STATE(239),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(553),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
    [aux_sym__json_string_token1] = ACTIONS(555),
    [sym__json_escape_sequence] = ACTIONS(557),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_cmd_token1] = ACTIONS(30),
    [aux_sym_entrypoint_token1] = ACTIONS(30),
    [aux_sym_run_token1] = ACTIONS(30),
    [aux_sym_maintainer_token1] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(30),
    [aux_sym_from_token1] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [195] = {
    [aux_sym__repository_start_repeat2] = STATE(215),
    [anon_sym_SLASH] = ACTIONS(559),
    [aux_sym__repository_start_token3] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [196] = {
    [sym_template_expr_less_than_equals] = STATE(263),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [197] = {
    [sym_template_expr_less_than_equals] = STATE(269),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [198] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(198),
    [aux_sym__repository_start_token13] = ACTIONS(567),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(569),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(572),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(572),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [199] = {
    [aux_sym__repository_start_repeat4] = STATE(217),
    [anon_sym_SLASH] = ACTIONS(559),
    [aux_sym__repository_start_token3] = ACTIONS(561),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [200] = {
    [aux_sym__repository_start_repeat3] = STATE(216),
    [anon_sym_SLASH] = ACTIONS(559),
    [aux_sym__repository_start_token3] = ACTIONS(561),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [201] = {
    [sym_template_expr_less_than_equals] = STATE(304),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [202] = {
    [sym_variable_default_value] = STATE(285),
    [sym_variable_this_or_null] = STATE(285),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_COLON_DASH] = ACTIONS(577),
    [anon_sym_COLON_PLUS] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [203] = {
    [sym_template_expr_less_than_equals] = STATE(258),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [204] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(559),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(561),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [205] = {
    [sym_template_expr_less_than_equals] = STATE(307),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [206] = {
    [sym_variable_default_value] = STATE(308),
    [sym_variable_this_or_null] = STATE(308),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_COLON_DASH] = ACTIONS(577),
    [anon_sym_COLON_PLUS] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [207] = {
    [sym_template_expr_less_than_equals] = STATE(299),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [208] = {
    [sym_variable_default_value] = STATE(306),
    [sym_variable_this_or_null] = STATE(306),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_COLON_DASH] = ACTIONS(577),
    [anon_sym_COLON_PLUS] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [209] = {
    [aux_sym__repository_start_repeat1] = STATE(204),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(585),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token3] = ACTIONS(587),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [210] = {
    [sym_json_array] = STATE(190),
    [sym__anything_or_json_array] = STATE(190),
    [sym__almost_json_prefix] = ACTIONS(589),
    [sym__json_prefix] = ACTIONS(591),
    [sym__not_json_prefix] = ACTIONS(593),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [211] = {
    [sym_variable_default_value] = STATE(301),
    [sym_variable_this_or_null] = STATE(301),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_COLON_DASH] = ACTIONS(577),
    [anon_sym_COLON_PLUS] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [212] = {
    [sym_template_expr_less_than_equals] = STATE(277),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [213] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(198),
    [aux_sym__repository_start_token13] = ACTIONS(597),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(599),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(601),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(601),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [214] = {
    [sym_json_array] = STATE(192),
    [sym__anything_or_json_array] = STATE(192),
    [sym__almost_json_prefix] = ACTIONS(589),
    [sym__json_prefix] = ACTIONS(591),
    [sym__not_json_prefix] = ACTIONS(593),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [215] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [anon_sym_SLASH] = ACTIONS(603),
    [aux_sym__repository_start_token3] = ACTIONS(605),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token7] = ACTIONS(62),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [216] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [anon_sym_SLASH] = ACTIONS(603),
    [aux_sym__repository_start_token3] = ACTIONS(605),
    [aux_sym__repository_start_token8] = ACTIONS(83),
    [aux_sym__repository_start_token11] = ACTIONS(83),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [217] = {
    [aux_sym__repository_start_repeat4] = STATE(5),
    [anon_sym_SLASH] = ACTIONS(603),
    [aux_sym__repository_start_token3] = ACTIONS(605),
    [aux_sym__repository_start_token12] = ACTIONS(64),
    [aux_sym__repository_start_token15] = ACTIONS(64),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [218] = {
    [sym_port] = STATE(284),
    [sym_port_range] = STATE(284),
    [sym__port_part] = STATE(58),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [219] = {
    [sym_template_expr_less_than_equals] = STATE(273),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(213),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(563),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(565),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(565),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [220] = {
    [sym_json_array] = STATE(191),
    [sym__anything_or_json_array] = STATE(191),
    [sym__almost_json_prefix] = ACTIONS(589),
    [sym__json_prefix] = ACTIONS(591),
    [sym__not_json_prefix] = ACTIONS(593),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [221] = {
    [aux_sym__json_string] = STATE(224),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
    [aux_sym__json_string_token1] = ACTIONS(609),
    [sym__json_escape_sequence] = ACTIONS(609),
  },
  [222] = {
    [aux_sym__json_string] = STATE(223),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
    [aux_sym__json_string_token1] = ACTIONS(613),
    [sym__json_escape_sequence] = ACTIONS(613),
  },
  [223] = {
    [aux_sym__json_string] = STATE(224),
    [anon_sym_DQUOTE] = ACTIONS(615),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
    [aux_sym__json_string_token1] = ACTIONS(609),
    [sym__json_escape_sequence] = ACTIONS(609),
  },
  [224] = {
    [aux_sym__json_string] = STATE(224),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
    [aux_sym__json_string_token1] = ACTIONS(619),
    [sym__json_escape_sequence] = ACTIONS(619),
  },
  [225] = {
    [sym_platform] = STATE(67),
    [anon_sym_DOLLAR] = ACTIONS(622),
    [aux_sym_platform_token1] = ACTIONS(624),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [226] = {
    [sym_docker_variable] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(626),
    [sym__docker_variable] = ACTIONS(628),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [227] = {
    [aux_sym_json_array_repeat1] = STATE(233),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(632),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_docker_variable] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym__docker_variable] = ACTIONS(636),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [229] = {
    [sym_docker_variable] = STATE(209),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym__docker_variable] = ACTIONS(636),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [230] = {
    [sym_docker_variable] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(626),
    [sym__docker_variable] = ACTIONS(628),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [231] = {
    [aux_sym_json_array_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(641),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [aux_sym_json_array_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(632),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [aux_sym_json_array_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym__port_part] = STATE(92),
    [aux_sym__port_part_token1] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_docker_variable] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(645),
    [sym__docker_variable] = ACTIONS(647),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [236] = {
    [aux_sym__anything] = STATE(128),
    [aux_sym__anything_token1] = ACTIONS(649),
    [aux_sym__anything_token2] = ACTIONS(649),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [237] = {
    [sym_docker_variable] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym__docker_variable] = ACTIONS(636),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [238] = {
    [anon_sym_DOLLAR] = ACTIONS(651),
    [aux_sym_port_protocol_token1] = ACTIONS(653),
    [aux_sym_port_protocol_token2] = ACTIONS(653),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [aux_sym_json_array_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(655),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_docker_variable] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym__docker_variable] = ACTIONS(636),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [241] = {
    [sym_docker_variable] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym__docker_variable] = ACTIONS(636),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [242] = {
    [sym_docker_variable] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym__docker_variable] = ACTIONS(636),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [243] = {
    [sym_docker_variable] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(657),
    [sym__docker_variable] = ACTIONS(659),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [244] = {
    [sym_docker_variable] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(657),
    [sym__docker_variable] = ACTIONS(659),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [245] = {
    [aux_sym__anything] = STATE(119),
    [aux_sym__anything_token1] = ACTIONS(410),
    [aux_sym__anything_token2] = ACTIONS(410),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [246] = {
    [aux_sym_json_array_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(655),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym__json_value] = STATE(249),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [anon_sym_DQUOTE] = ACTIONS(667),
    [anon_sym_COLON] = ACTIONS(670),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_template_expr_percent_signs] = ACTIONS(672),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [253] = {
    [anon_sym_DQUOTE] = ACTIONS(674),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym__docker_variable] = ACTIONS(676),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [255] = {
    [aux_sym__repository_start_token9] = ACTIONS(678),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_SLASH] = ACTIONS(680),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
    [aux_sym__repository_start_token5] = ACTIONS(682),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [258] = {
    [aux_sym__repository_start_token13] = ACTIONS(684),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [anon_sym_SLASH] = ACTIONS(603),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
    [sym_template_expr_percent_signs] = ACTIONS(686),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [261] = {
    [sym_template_expr_curly_braces] = ACTIONS(688),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [262] = {
    [aux_sym__repository_start_token5] = ACTIONS(690),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [aux_sym__repository_start_token13] = ACTIONS(692),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [sym_template_expr_curly_braces] = ACTIONS(694),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [265] = {
    [aux_sym__repository_start_token9] = ACTIONS(696),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [aux_sym__repository_start_token5] = ACTIONS(698),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(702),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [aux_sym__repository_start_token13] = ACTIONS(704),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [aux_sym__repository_start_token9] = ACTIONS(706),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [aux_sym__repository_start_token5] = ACTIONS(708),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [anon_sym_SLASH] = ACTIONS(710),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [aux_sym__repository_start_token13] = ACTIONS(712),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [aux_sym__repository_start_token9] = ACTIONS(714),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [aux_sym__repository_start_token5] = ACTIONS(716),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [sym_template_expr_curly_braces] = ACTIONS(718),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [277] = {
    [aux_sym__repository_start_token13] = ACTIONS(720),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [aux_sym__repository_start_token9] = ACTIONS(722),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [279] = {
    [aux_sym__repository_start_token5] = ACTIONS(724),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [280] = {
    [sym__space_no_newline] = ACTIONS(726),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [281] = {
    [anon_sym_SLASH] = ACTIONS(559),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [282] = {
    [sym_template_expr_percent_signs] = ACTIONS(728),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [283] = {
    [sym_template_expr_curly_braces] = ACTIONS(730),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [284] = {
    [anon_sym_DQUOTE] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(734),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [286] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(736),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [287] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(738),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [288] = {
    [sym_template_expr_percent_signs] = ACTIONS(740),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [289] = {
    [sym_template_expr_percent_signs] = ACTIONS(742),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [290] = {
    [sym_template_expr_curly_braces] = ACTIONS(744),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [291] = {
    [sym_template_expr_percent_signs] = ACTIONS(746),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [sym_template_expr_curly_braces] = ACTIONS(750),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [294] = {
    [sym_template_expr_percent_signs] = ACTIONS(752),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [295] = {
    [sym_template_expr_curly_braces] = ACTIONS(754),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [296] = {
    [sym__space_no_newline] = ACTIONS(756),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [297] = {
    [sym__space_no_newline] = ACTIONS(758),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [298] = {
    [sym__space_no_newline] = ACTIONS(760),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [299] = {
    [aux_sym__repository_start_token13] = ACTIONS(762),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym__repository_start_token9] = ACTIONS(764),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_RBRACE] = ACTIONS(766),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [aux_sym__repository_start_token5] = ACTIONS(768),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [aux_sym__repository_start_token9] = ACTIONS(770),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [aux_sym__repository_start_token13] = ACTIONS(772),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [aux_sym__repository_start_token5] = ACTIONS(774),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [anon_sym_RBRACE] = ACTIONS(776),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym__repository_start_token13] = ACTIONS(778),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [anon_sym_RBRACE] = ACTIONS(780),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym__docker_variable] = ACTIONS(782),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [310] = {
    [sym_template_expr_curly_braces] = ACTIONS(784),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [311] = {
    [sym_template_expr_percent_signs] = ACTIONS(786),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [312] = {
    [aux_sym__repository_start_token9] = ACTIONS(788),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [sym__docker_variable] = ACTIONS(790),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
  [314] = {
    [sym__docker_variable] = ACTIONS(792),
    [sym_comment] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(45),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(280),
  [9] = {.count = 1, .reusable = true}, SHIFT(298),
  [11] = {.count = 1, .reusable = true}, SHIFT(297),
  [13] = {.count = 1, .reusable = true}, SHIFT(296),
  [15] = {.count = 1, .reusable = true}, SHIFT(65),
  [17] = {.count = 1, .reusable = true}, SHIFT(44),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(133),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(29),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(226),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [32] = {.count = 1, .reusable = true}, SHIFT(133),
  [34] = {.count = 1, .reusable = true}, SHIFT(29),
  [36] = {.count = 1, .reusable = true}, SHIFT(226),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [40] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(283),
  [45] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [49] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(196),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [58] = {.count = 1, .reusable = true}, SHIFT(148),
  [60] = {.count = 1, .reusable = false}, SHIFT(74),
  [62] = {.count = 1, .reusable = true}, SHIFT(283),
  [64] = {.count = 1, .reusable = true}, SHIFT(196),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [70] = {.count = 1, .reusable = true}, SHIFT(228),
  [72] = {.count = 1, .reusable = true}, SHIFT(155),
  [74] = {.count = 1, .reusable = false}, SHIFT(61),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [78] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(228),
  [83] = {.count = 1, .reusable = true}, SHIFT(282),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(282),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [96] = {.count = 1, .reusable = true}, SHIFT(140),
  [98] = {.count = 1, .reusable = false}, SHIFT(64),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [120] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(280),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(298),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(297),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(296),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(44),
  [146] = {.count = 1, .reusable = false}, SHIFT(102),
  [148] = {.count = 1, .reusable = true}, SHIFT(201),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(244),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(238),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(201),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [162] = {.count = 1, .reusable = false}, SHIFT(117),
  [164] = {.count = 1, .reusable = true}, SHIFT(310),
  [166] = {.count = 1, .reusable = true}, SHIFT(311),
  [168] = {.count = 1, .reusable = true}, SHIFT(244),
  [170] = {.count = 1, .reusable = false}, SHIFT(116),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(311),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(310),
  [178] = {.count = 1, .reusable = true}, SHIFT(241),
  [180] = {.count = 1, .reusable = true}, SHIFT(225),
  [182] = {.count = 1, .reusable = false}, SHIFT(73),
  [184] = {.count = 1, .reusable = true}, SHIFT(261),
  [186] = {.count = 1, .reusable = true}, SHIFT(260),
  [188] = {.count = 1, .reusable = true}, SHIFT(203),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [194] = {.count = 1, .reusable = false}, SHIFT(152),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [200] = {.count = 1, .reusable = false}, SHIFT(135),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [206] = {.count = 1, .reusable = false}, SHIFT(145),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [210] = {.count = 1, .reusable = true}, SHIFT(234),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [216] = {.count = 1, .reusable = false}, SHIFT(159),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [222] = {.count = 1, .reusable = false}, SHIFT(158),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [228] = {.count = 1, .reusable = true}, SHIFT(144),
  [230] = {.count = 1, .reusable = true}, SHIFT(182),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [236] = {.count = 1, .reusable = false}, SHIFT(164),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [248] = {.count = 1, .reusable = true}, SHIFT(147),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [254] = {.count = 1, .reusable = false}, SHIFT(176),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [258] = {.count = 1, .reusable = true}, SHIFT(179),
  [260] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(229),
  [263] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(272),
  [266] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(276),
  [269] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(288),
  [272] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(207),
  [275] = {.count = 1, .reusable = true}, SHIFT(240),
  [277] = {.count = 1, .reusable = true}, SHIFT(125),
  [279] = {.count = 1, .reusable = false}, SHIFT(160),
  [281] = {.count = 1, .reusable = true}, SHIFT(293),
  [283] = {.count = 1, .reusable = true}, SHIFT(291),
  [285] = {.count = 1, .reusable = true}, SHIFT(219),
  [287] = {.count = 1, .reusable = true}, SHIFT(126),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [293] = {.count = 1, .reusable = false}, SHIFT(184),
  [295] = {.count = 1, .reusable = true}, SHIFT(122),
  [297] = {.count = 1, .reusable = true}, SHIFT(124),
  [299] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(229),
  [302] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(272),
  [305] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(276),
  [308] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(288),
  [311] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(207),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [320] = {.count = 1, .reusable = false}, SHIFT(183),
  [322] = {.count = 1, .reusable = true}, SHIFT(123),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(229),
  [327] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(272),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(276),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(288),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(207),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [341] = {.count = 1, .reusable = true}, SHIFT(127),
  [343] = {.count = 1, .reusable = true}, SHIFT(237),
  [345] = {.count = 1, .reusable = false}, SHIFT(180),
  [347] = {.count = 1, .reusable = true}, SHIFT(290),
  [349] = {.count = 1, .reusable = true}, SHIFT(289),
  [351] = {.count = 1, .reusable = true}, SHIFT(197),
  [353] = {.count = 1, .reusable = true}, SHIFT(242),
  [355] = {.count = 1, .reusable = false}, SHIFT(142),
  [357] = {.count = 1, .reusable = true}, SHIFT(295),
  [359] = {.count = 1, .reusable = true}, SHIFT(294),
  [361] = {.count = 1, .reusable = true}, SHIFT(212),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [365] = {.count = 1, .reusable = true}, SHIFT(243),
  [367] = {.count = 1, .reusable = false}, SHIFT(99),
  [369] = {.count = 1, .reusable = true}, SHIFT(264),
  [371] = {.count = 1, .reusable = true}, SHIFT(252),
  [373] = {.count = 1, .reusable = true}, SHIFT(205),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [377] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(103),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [384] = {.count = 1, .reusable = true}, SHIFT(113),
  [386] = {.count = 1, .reusable = true}, SHIFT(80),
  [388] = {.count = 1, .reusable = true}, SHIFT(97),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [392] = {.count = 1, .reusable = true}, SHIFT(98),
  [394] = {.count = 1, .reusable = true}, SHIFT(84),
  [396] = {.count = 1, .reusable = true}, SHIFT(120),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(110),
  [402] = {.count = 1, .reusable = true}, SHIFT(89),
  [404] = {.count = 1, .reusable = true}, SHIFT(111),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [410] = {.count = 1, .reusable = true}, SHIFT(119),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [414] = {.count = 1, .reusable = true}, SHIFT(112),
  [416] = {.count = 1, .reusable = true}, SHIFT(95),
  [418] = {.count = 1, .reusable = true}, SHIFT(107),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(115),
  [423] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(103),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [435] = {.count = 1, .reusable = true}, SHIFT(115),
  [437] = {.count = 1, .reusable = false}, SHIFT(185),
  [439] = {.count = 1, .reusable = true}, SHIFT(218),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [449] = {.count = 1, .reusable = true}, SHIFT(81),
  [451] = {.count = 1, .reusable = true}, SHIFT(121),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [501] = {.count = 1, .reusable = true}, SHIFT(83),
  [503] = {.count = 1, .reusable = true}, SHIFT(130),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [511] = {.count = 1, .reusable = true}, SHIFT(129),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [515] = {.count = 1, .reusable = true}, SHIFT(131),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [519] = {.count = 1, .reusable = true}, SHIFT(132),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [537] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [549] = {.count = 1, .reusable = false}, SHIFT(246),
  [551] = {.count = 1, .reusable = false}, SHIFT(248),
  [553] = {.count = 1, .reusable = false}, SHIFT(188),
  [555] = {.count = 1, .reusable = false}, SHIFT(221),
  [557] = {.count = 1, .reusable = true}, SHIFT(221),
  [559] = {.count = 1, .reusable = true}, SHIFT(153),
  [561] = {.count = 1, .reusable = false}, SHIFT(259),
  [563] = {.count = 1, .reusable = true}, SHIFT(213),
  [565] = {.count = 1, .reusable = false}, SHIFT(213),
  [567] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(198),
  [572] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(198),
  [575] = {.count = 1, .reusable = true}, SHIFT(45),
  [577] = {.count = 1, .reusable = true}, SHIFT(287),
  [579] = {.count = 1, .reusable = true}, SHIFT(286),
  [581] = {.count = 1, .reusable = true}, SHIFT(41),
  [583] = {.count = 1, .reusable = true}, SHIFT(134),
  [585] = {.count = 1, .reusable = true}, SHIFT(150),
  [587] = {.count = 1, .reusable = false}, SHIFT(281),
  [589] = {.count = 1, .reusable = true}, SHIFT(245),
  [591] = {.count = 1, .reusable = true}, SHIFT(193),
  [593] = {.count = 1, .reusable = true}, SHIFT(109),
  [595] = {.count = 1, .reusable = true}, SHIFT(18),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [599] = {.count = 1, .reusable = true}, SHIFT(198),
  [601] = {.count = 1, .reusable = false}, SHIFT(198),
  [603] = {.count = 1, .reusable = true}, SHIFT(149),
  [605] = {.count = 1, .reusable = false}, SHIFT(256),
  [607] = {.count = 1, .reusable = false}, SHIFT(227),
  [609] = {.count = 1, .reusable = true}, SHIFT(224),
  [611] = {.count = 1, .reusable = false}, SHIFT(247),
  [613] = {.count = 1, .reusable = true}, SHIFT(223),
  [615] = {.count = 1, .reusable = false}, SHIFT(250),
  [617] = {.count = 1, .reusable = false}, REDUCE(aux_sym__json_string, 2),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(224),
  [622] = {.count = 1, .reusable = true}, SHIFT(235),
  [624] = {.count = 1, .reusable = true}, SHIFT(154),
  [626] = {.count = 1, .reusable = true}, SHIFT(254),
  [628] = {.count = 1, .reusable = true}, SHIFT(39),
  [630] = {.count = 1, .reusable = true}, SHIFT(248),
  [632] = {.count = 1, .reusable = true}, SHIFT(187),
  [634] = {.count = 1, .reusable = true}, SHIFT(309),
  [636] = {.count = 1, .reusable = true}, SHIFT(19),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(248),
  [641] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [643] = {.count = 1, .reusable = true}, SHIFT(168),
  [645] = {.count = 1, .reusable = true}, SHIFT(313),
  [647] = {.count = 1, .reusable = true}, SHIFT(141),
  [649] = {.count = 1, .reusable = true}, SHIFT(128),
  [651] = {.count = 1, .reusable = true}, SHIFT(230),
  [653] = {.count = 1, .reusable = true}, SHIFT(70),
  [655] = {.count = 1, .reusable = true}, SHIFT(169),
  [657] = {.count = 1, .reusable = true}, SHIFT(314),
  [659] = {.count = 1, .reusable = true}, SHIFT(42),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [663] = {.count = 1, .reusable = true}, SHIFT(222),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [667] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(86),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [672] = {.count = 1, .reusable = true}, SHIFT(312),
  [674] = {.count = 1, .reusable = true}, SHIFT(118),
  [676] = {.count = 1, .reusable = true}, SHIFT(202),
  [678] = {.count = 1, .reusable = true}, SHIFT(10),
  [680] = {.count = 1, .reusable = true}, SHIFT(136),
  [682] = {.count = 1, .reusable = true}, SHIFT(6),
  [684] = {.count = 1, .reusable = true}, SHIFT(7),
  [686] = {.count = 1, .reusable = true}, SHIFT(255),
  [688] = {.count = 1, .reusable = true}, SHIFT(257),
  [690] = {.count = 1, .reusable = true}, SHIFT(34),
  [692] = {.count = 1, .reusable = true}, SHIFT(22),
  [694] = {.count = 1, .reusable = true}, SHIFT(262),
  [696] = {.count = 1, .reusable = true}, SHIFT(21),
  [698] = {.count = 1, .reusable = true}, SHIFT(17),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [704] = {.count = 1, .reusable = true}, SHIFT(96),
  [706] = {.count = 1, .reusable = true}, SHIFT(94),
  [708] = {.count = 1, .reusable = true}, SHIFT(93),
  [710] = {.count = 1, .reusable = true}, SHIFT(151),
  [712] = {.count = 1, .reusable = true}, SHIFT(72),
  [714] = {.count = 1, .reusable = true}, SHIFT(76),
  [716] = {.count = 1, .reusable = true}, SHIFT(66),
  [718] = {.count = 1, .reusable = true}, SHIFT(305),
  [720] = {.count = 1, .reusable = true}, SHIFT(53),
  [722] = {.count = 1, .reusable = true}, SHIFT(54),
  [724] = {.count = 1, .reusable = true}, SHIFT(56),
  [726] = {.count = 1, .reusable = true}, SHIFT(214),
  [728] = {.count = 1, .reusable = true}, SHIFT(265),
  [730] = {.count = 1, .reusable = true}, SHIFT(266),
  [732] = {.count = 1, .reusable = true}, SHIFT(86),
  [734] = {.count = 1, .reusable = true}, SHIFT(49),
  [736] = {.count = 1, .reusable = true}, SHIFT(267),
  [738] = {.count = 1, .reusable = true}, SHIFT(268),
  [740] = {.count = 1, .reusable = true}, SHIFT(300),
  [742] = {.count = 1, .reusable = true}, SHIFT(270),
  [744] = {.count = 1, .reusable = true}, SHIFT(271),
  [746] = {.count = 1, .reusable = true}, SHIFT(274),
  [748] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [750] = {.count = 1, .reusable = true}, SHIFT(275),
  [752] = {.count = 1, .reusable = true}, SHIFT(278),
  [754] = {.count = 1, .reusable = true}, SHIFT(279),
  [756] = {.count = 1, .reusable = true}, SHIFT(236),
  [758] = {.count = 1, .reusable = true}, SHIFT(210),
  [760] = {.count = 1, .reusable = true}, SHIFT(220),
  [762] = {.count = 1, .reusable = true}, SHIFT(199),
  [764] = {.count = 1, .reusable = true}, SHIFT(200),
  [766] = {.count = 1, .reusable = true}, SHIFT(20),
  [768] = {.count = 1, .reusable = true}, SHIFT(46),
  [770] = {.count = 1, .reusable = true}, SHIFT(40),
  [772] = {.count = 1, .reusable = true}, SHIFT(43),
  [774] = {.count = 1, .reusable = true}, SHIFT(195),
  [776] = {.count = 1, .reusable = true}, SHIFT(146),
  [778] = {.count = 1, .reusable = true}, SHIFT(25),
  [780] = {.count = 1, .reusable = true}, SHIFT(51),
  [782] = {.count = 1, .reusable = true}, SHIFT(211),
  [784] = {.count = 1, .reusable = true}, SHIFT(302),
  [786] = {.count = 1, .reusable = true}, SHIFT(303),
  [788] = {.count = 1, .reusable = true}, SHIFT(32),
  [790] = {.count = 1, .reusable = true}, SHIFT(208),
  [792] = {.count = 1, .reusable = true}, SHIFT(206),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_DOCKER(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
