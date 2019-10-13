#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 259
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  aux_sym_run_token1 = 1,
  aux_sym_run_token2 = 2,
  aux_sym_run_token3 = 3,
  aux_sym_run_token4 = 4,
  aux_sym_maintainer_token1 = 5,
  aux_sym_expose_token1 = 6,
  anon_sym_DQUOTE = 7,
  anon_sym_COLON = 8,
  anon_sym_DASH = 9,
  aux_sym__port_part_token1 = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_SLASH = 12,
  aux_sym_port_protocol_token1 = 13,
  aux_sym_port_protocol_token2 = 14,
  aux_sym_from_token1 = 15,
  anon_sym_AT = 16,
  anon_sym_sha256_COLON = 17,
  aux_sym_from_token2 = 18,
  aux_sym__repository_start_token1 = 19,
  aux_sym__repository_start_token2 = 20,
  aux_sym__repository_start_token3 = 21,
  aux_sym__repository_start_token4 = 22,
  aux_sym__repository_start_token5 = 23,
  aux_sym__repository_start_token6 = 24,
  aux_sym__repository_start_token7 = 25,
  aux_sym__repository_start_token8 = 26,
  aux_sym__repository_start_token9 = 27,
  aux_sym__repository_start_token10 = 28,
  aux_sym__repository_start_token11 = 29,
  aux_sym__repository_start_token12 = 30,
  aux_sym__repository_start_token13 = 31,
  aux_sym__repository_start_token14 = 32,
  aux_sym__repository_start_token15 = 33,
  aux_sym__repository_start_token16 = 34,
  aux_sym__repository_start_token17 = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  sym__docker_variable = 38,
  anon_sym_COLON_DASH = 39,
  aux_sym_variable_default_value_token1 = 40,
  anon_sym_COLON_PLUS = 41,
  sym_template_expr_curly_braces = 42,
  sym_template_expr_percent_signs = 43,
  aux_sym_template_expr_less_than_equals_token1 = 44,
  aux_sym_template_expr_less_than_equals_token2 = 45,
  aux_sym_template_expr_less_than_equals_token3 = 46,
  sym_comment = 47,
  sym_line_continuation = 48,
  sym_dockerfile = 49,
  sym__directive = 50,
  sym_run = 51,
  sym_maintainer = 52,
  sym_expose = 53,
  sym__port_spec = 54,
  sym_mapped_port = 55,
  sym_mapped_no_lhs = 56,
  sym__port = 57,
  sym_port = 58,
  sym_port_range = 59,
  sym__port_part = 60,
  sym_port_protocol = 61,
  sym_from = 62,
  sym_repository = 63,
  sym__repository_start = 64,
  sym__repository_continued = 65,
  sym_image = 66,
  sym_tag = 67,
  sym_digest = 68,
  sym_as_name = 69,
  sym_docker_variable = 70,
  sym_variable_default_value = 71,
  sym_variable_this_or_null = 72,
  sym_template_expr_less_than_equals = 73,
  aux_sym_dockerfile_repeat1 = 74,
  aux_sym_run_repeat1 = 75,
  aux_sym_expose_repeat1 = 76,
  aux_sym_repository_repeat1 = 77,
  aux_sym__repository_start_repeat1 = 78,
  aux_sym__repository_start_repeat2 = 79,
  aux_sym__repository_start_repeat3 = 80,
  aux_sym__repository_start_repeat4 = 81,
  aux_sym_template_expr_less_than_equals_repeat1 = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_run_token1] = "run_token1",
  [aux_sym_run_token2] = "run_token2",
  [aux_sym_run_token3] = "run_token3",
  [aux_sym_run_token4] = "run_token4",
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
  [anon_sym_AT] = "@",
  [anon_sym_sha256_COLON] = "sha256:",
  [aux_sym_from_token2] = "from_token2",
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
  [aux_sym__repository_start_token17] = "_repository_start_token17",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__docker_variable] = "_docker_variable",
  [anon_sym_COLON_DASH] = ":-",
  [aux_sym_variable_default_value_token1] = "variable_default_value_token1",
  [anon_sym_COLON_PLUS] = ":+",
  [sym_template_expr_curly_braces] = "template_expr_curly_braces",
  [sym_template_expr_percent_signs] = "template_expr_percent_signs",
  [aux_sym_template_expr_less_than_equals_token1] = "template_expr_less_than_equals_token1",
  [aux_sym_template_expr_less_than_equals_token2] = "template_expr_less_than_equals_token2",
  [aux_sym_template_expr_less_than_equals_token3] = "template_expr_less_than_equals_token3",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [sym_dockerfile] = "dockerfile",
  [sym__directive] = "_directive",
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
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_run_repeat1] = "run_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_template_expr_less_than_equals_repeat1] = "template_expr_less_than_equals_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_run_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_token4] = {
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
  [aux_sym__repository_start_token17] = {
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
  [sym_dockerfile] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
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
  [sym_template_expr_less_than_equals] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dockerfile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_repeat1] = {
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
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(43);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(208);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(208);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(192);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(164);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(164);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(240);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(238);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(257);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(254);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '' &&
          lookahead != '') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '{') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(246);
      END_STATE();
    case 37:
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == '-') ADVANCE(247);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '5') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(236);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(236);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(235);
      END_STATE();
    case 49:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(240);
      END_STATE();
    case 50:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(238);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 71:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(261);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          (lookahead < '' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_run_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_run_token4);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '6') ADVANCE(122);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(141);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(128);
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
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(161);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(233);
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
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(21);
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
          lookahead != '}') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(184);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(49);
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
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(193);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == '{') ADVANCE(225);
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
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '%') ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__repository_start_token17);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(216);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(219);
      END_STATE();
    case 246:
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
          lookahead != '}') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
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
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 35},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 31},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 26},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 26},
  [161] = {.lex_state = 26},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 26},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 26},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 26},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 28},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 31},
  [204] = {.lex_state = 28},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 28},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 31},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 31},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 27},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 31},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 31},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 29},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 30},
  [233] = {.lex_state = 29},
  [234] = {.lex_state = 31},
  [235] = {.lex_state = 28},
  [236] = {.lex_state = 29},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 31},
  [241] = {.lex_state = 31},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 30},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 31},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 31},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 31},
  [253] = {.lex_state = 31},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 29},
  [256] = {.lex_state = 28},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 36},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_run_token1] = ACTIONS(1),
    [aux_sym_run_token4] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_sha256_COLON] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [aux_sym__repository_start_token5] = ACTIONS(1),
    [aux_sym__repository_start_token6] = ACTIONS(1),
    [aux_sym__repository_start_token9] = ACTIONS(1),
    [aux_sym__repository_start_token10] = ACTIONS(1),
    [aux_sym__repository_start_token13] = ACTIONS(1),
    [aux_sym__repository_start_token17] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [1] = {
    [sym_dockerfile] = STATE(244),
    [sym__directive] = STATE(153),
    [sym_run] = STATE(153),
    [sym_maintainer] = STATE(153),
    [sym_expose] = STATE(153),
    [sym_from] = STATE(153),
    [aux_sym_dockerfile_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_run_token1] = ACTIONS(7),
    [aux_sym_maintainer_token1] = ACTIONS(9),
    [aux_sym_expose_token1] = ACTIONS(11),
    [aux_sym_from_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [2] = {
    [sym__port_spec] = STATE(2),
    [sym_mapped_port] = STATE(2),
    [sym__port] = STATE(118),
    [sym_port] = STATE(118),
    [sym_port_range] = STATE(118),
    [sym__port_part] = STATE(73),
    [aux_sym_expose_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_run_token1] = ACTIONS(15),
    [aux_sym_maintainer_token1] = ACTIONS(15),
    [aux_sym_expose_token1] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym__port_part_token1] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [3] = {
    [sym__port_spec] = STATE(2),
    [sym_mapped_port] = STATE(2),
    [sym__port] = STATE(118),
    [sym_port] = STATE(118),
    [sym_port_range] = STATE(118),
    [sym__port_part] = STATE(73),
    [aux_sym_expose_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(26),
    [aux_sym_run_token1] = ACTIONS(26),
    [aux_sym_maintainer_token1] = ACTIONS(26),
    [aux_sym_expose_token1] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [aux_sym_from_token1] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_run_token1] = ACTIONS(36),
    [aux_sym_maintainer_token1] = ACTIONS(36),
    [aux_sym_expose_token1] = ACTIONS(36),
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_SLASH] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(36),
    [anon_sym_AT] = ACTIONS(34),
    [aux_sym_from_token2] = ACTIONS(36),
    [aux_sym__repository_start_token4] = ACTIONS(36),
    [aux_sym__repository_start_token5] = ACTIONS(38),
    [aux_sym__repository_start_token8] = ACTIONS(38),
    [aux_sym__repository_start_token17] = ACTIONS(34),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [5] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token4] = ACTIONS(49),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [aux_sym__repository_start_token17] = ACTIONS(47),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [6] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_run_token1] = ACTIONS(55),
    [aux_sym_maintainer_token1] = ACTIONS(55),
    [aux_sym_expose_token1] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(53),
    [aux_sym_from_token1] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(53),
    [aux_sym_from_token2] = ACTIONS(55),
    [aux_sym__repository_start_token4] = ACTIONS(55),
    [aux_sym__repository_start_token13] = ACTIONS(57),
    [aux_sym__repository_start_token16] = ACTIONS(57),
    [aux_sym__repository_start_token17] = ACTIONS(53),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [7] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_run_token1] = ACTIONS(62),
    [aux_sym_maintainer_token1] = ACTIONS(62),
    [aux_sym_expose_token1] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(60),
    [aux_sym_from_token2] = ACTIONS(62),
    [aux_sym__repository_start_token3] = ACTIONS(64),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token17] = ACTIONS(60),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [8] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_run_token1] = ACTIONS(69),
    [aux_sym_maintainer_token1] = ACTIONS(69),
    [aux_sym_expose_token1] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym_from_token1] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(67),
    [aux_sym_from_token2] = ACTIONS(69),
    [aux_sym__repository_start_token4] = ACTIONS(69),
    [aux_sym__repository_start_token9] = ACTIONS(71),
    [aux_sym__repository_start_token12] = ACTIONS(71),
    [aux_sym__repository_start_token17] = ACTIONS(67),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [9] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_run_token1] = ACTIONS(76),
    [aux_sym_maintainer_token1] = ACTIONS(76),
    [aux_sym_expose_token1] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(80),
    [aux_sym_from_token1] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(74),
    [aux_sym_from_token2] = ACTIONS(76),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(82),
    [aux_sym__repository_start_token17] = ACTIONS(80),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [10] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(49),
    [aux_sym__repository_start_token17] = ACTIONS(47),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(86),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(88),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(90),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [aux_sym__repository_start_token17] = ACTIONS(88),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [12] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(86),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(88),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(90),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [aux_sym__repository_start_token17] = ACTIONS(88),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [13] = {
    [aux_sym__repository_start_repeat3] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token4] = ACTIONS(49),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [aux_sym__repository_start_token17] = ACTIONS(47),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(86),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(88),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(90),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [aux_sym__repository_start_token17] = ACTIONS(88),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token4] = ACTIONS(49),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [aux_sym__repository_start_token17] = ACTIONS(47),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_run_token1] = ACTIONS(62),
    [aux_sym_maintainer_token1] = ACTIONS(62),
    [aux_sym_expose_token1] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(60),
    [aux_sym_from_token2] = ACTIONS(62),
    [aux_sym__repository_start_token3] = ACTIONS(60),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token17] = ACTIONS(60),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_maintainer_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(96),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(98),
    [aux_sym__repository_start_token5] = ACTIONS(96),
    [aux_sym__repository_start_token8] = ACTIONS(96),
    [aux_sym__repository_start_token17] = ACTIONS(96),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token9] = ACTIONS(100),
    [aux_sym__repository_start_token12] = ACTIONS(100),
    [aux_sym__repository_start_token17] = ACTIONS(100),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_run_token1] = ACTIONS(106),
    [aux_sym_maintainer_token1] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(104),
    [aux_sym_from_token2] = ACTIONS(106),
    [aux_sym__repository_start_token4] = ACTIONS(106),
    [aux_sym__repository_start_token13] = ACTIONS(104),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [aux_sym__repository_start_token17] = ACTIONS(104),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(110),
    [aux_sym_maintainer_token1] = ACTIONS(110),
    [aux_sym_expose_token1] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [aux_sym_from_token1] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(108),
    [aux_sym_from_token2] = ACTIONS(110),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(110),
    [aux_sym__repository_start_token17] = ACTIONS(108),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(114),
    [aux_sym_maintainer_token1] = ACTIONS(114),
    [aux_sym_expose_token1] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [aux_sym_from_token1] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(112),
    [aux_sym_from_token2] = ACTIONS(114),
    [aux_sym__repository_start_token3] = ACTIONS(112),
    [aux_sym__repository_start_token4] = ACTIONS(114),
    [aux_sym__repository_start_token17] = ACTIONS(112),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(118),
    [aux_sym_maintainer_token1] = ACTIONS(118),
    [aux_sym_expose_token1] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(116),
    [aux_sym_from_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(116),
    [aux_sym__repository_start_token4] = ACTIONS(118),
    [aux_sym__repository_start_token17] = ACTIONS(116),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [23] = {
    [aux_sym__repository_start_repeat4] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(43),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token4] = ACTIONS(120),
    [aux_sym__repository_start_token13] = ACTIONS(122),
    [aux_sym__repository_start_token16] = ACTIONS(122),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [24] = {
    [aux_sym__repository_start_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_run_token1] = ACTIONS(36),
    [aux_sym_maintainer_token1] = ACTIONS(36),
    [aux_sym_expose_token1] = ACTIONS(36),
    [anon_sym_COLON] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(36),
    [anon_sym_AT] = ACTIONS(34),
    [aux_sym_from_token2] = ACTIONS(36),
    [aux_sym__repository_start_token4] = ACTIONS(36),
    [aux_sym__repository_start_token5] = ACTIONS(124),
    [aux_sym__repository_start_token8] = ACTIONS(124),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [25] = {
    [aux_sym__repository_start_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_run_token1] = ACTIONS(62),
    [aux_sym_maintainer_token1] = ACTIONS(62),
    [aux_sym_expose_token1] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [aux_sym_from_token1] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(60),
    [aux_sym_from_token2] = ACTIONS(62),
    [aux_sym__repository_start_token3] = ACTIONS(127),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [26] = {
    [sym__port_spec] = STATE(3),
    [sym_mapped_port] = STATE(3),
    [sym_mapped_no_lhs] = STATE(154),
    [sym__port] = STATE(118),
    [sym_port] = STATE(118),
    [sym_port_range] = STATE(118),
    [sym__port_part] = STATE(73),
    [aux_sym_expose_repeat1] = STATE(3),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(130),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [sym_repository] = STATE(82),
    [sym__repository_start] = STATE(60),
    [sym_image] = STATE(122),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(132),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_run_token1] = ACTIONS(76),
    [aux_sym_maintainer_token1] = ACTIONS(76),
    [aux_sym_expose_token1] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(74),
    [aux_sym_from_token2] = ACTIONS(76),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token4] = ACTIONS(144),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [29] = {
    [aux_sym__repository_start_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token4] = ACTIONS(120),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [30] = {
    [aux_sym__repository_start_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(43),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token4] = ACTIONS(120),
    [aux_sym__repository_start_token5] = ACTIONS(146),
    [aux_sym__repository_start_token8] = ACTIONS(146),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [31] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(45),
    [aux_sym_maintainer_token1] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(43),
    [aux_sym_from_token1] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(45),
    [aux_sym__repository_start_token4] = ACTIONS(120),
    [aux_sym__repository_start_token9] = ACTIONS(148),
    [aux_sym__repository_start_token12] = ACTIONS(148),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [32] = {
    [aux_sym__repository_start_repeat4] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(86),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(84),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(150),
    [aux_sym__repository_start_token13] = ACTIONS(122),
    [aux_sym__repository_start_token16] = ACTIONS(122),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(86),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(84),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(150),
    [aux_sym__repository_start_token9] = ACTIONS(148),
    [aux_sym__repository_start_token12] = ACTIONS(148),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [34] = {
    [aux_sym__repository_start_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(86),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(84),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(150),
    [aux_sym__repository_start_token5] = ACTIONS(146),
    [aux_sym__repository_start_token8] = ACTIONS(146),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [35] = {
    [aux_sym__repository_start_repeat4] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_run_token1] = ACTIONS(55),
    [aux_sym_maintainer_token1] = ACTIONS(55),
    [aux_sym_expose_token1] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(53),
    [aux_sym_from_token1] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(53),
    [aux_sym_from_token2] = ACTIONS(55),
    [aux_sym__repository_start_token4] = ACTIONS(55),
    [aux_sym__repository_start_token13] = ACTIONS(152),
    [aux_sym__repository_start_token16] = ACTIONS(152),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [36] = {
    [sym_port_protocol] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_run_token1] = ACTIONS(155),
    [aux_sym_maintainer_token1] = ACTIONS(155),
    [aux_sym_expose_token1] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [aux_sym__port_part_token1] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat3] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_run_token1] = ACTIONS(69),
    [aux_sym_maintainer_token1] = ACTIONS(69),
    [aux_sym_expose_token1] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(67),
    [aux_sym_from_token1] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(67),
    [aux_sym_from_token2] = ACTIONS(69),
    [aux_sym__repository_start_token4] = ACTIONS(69),
    [aux_sym__repository_start_token9] = ACTIONS(159),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [38] = {
    [sym_port_protocol] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [aux_sym__port_part_token1] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(166),
    [aux_sym_maintainer_token1] = ACTIONS(166),
    [aux_sym_expose_token1] = ACTIONS(166),
    [aux_sym_from_token1] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(164),
    [aux_sym_from_token2] = ACTIONS(166),
    [aux_sym__repository_start_token4] = ACTIONS(168),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [40] = {
    [sym__directive] = STATE(153),
    [sym_run] = STATE(153),
    [sym_maintainer] = STATE(153),
    [sym_expose] = STATE(153),
    [sym_from] = STATE(153),
    [aux_sym_dockerfile_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_run_token1] = ACTIONS(7),
    [aux_sym_maintainer_token1] = ACTIONS(9),
    [aux_sym_expose_token1] = ACTIONS(11),
    [aux_sym_from_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(114),
    [aux_sym_maintainer_token1] = ACTIONS(114),
    [aux_sym_expose_token1] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym_from_token1] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(112),
    [aux_sym_from_token2] = ACTIONS(114),
    [aux_sym__repository_start_token3] = ACTIONS(112),
    [aux_sym__repository_start_token4] = ACTIONS(114),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [42] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(166),
    [aux_sym_maintainer_token1] = ACTIONS(166),
    [aux_sym_expose_token1] = ACTIONS(166),
    [aux_sym_from_token1] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(164),
    [aux_sym_from_token2] = ACTIONS(166),
    [aux_sym__repository_start_token4] = ACTIONS(168),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_run_token1] = ACTIONS(62),
    [aux_sym_maintainer_token1] = ACTIONS(62),
    [aux_sym_expose_token1] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(60),
    [aux_sym_from_token2] = ACTIONS(62),
    [aux_sym__repository_start_token3] = ACTIONS(60),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(108),
    [aux_sym_maintainer_token1] = ACTIONS(108),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [aux_sym__port_part_token1] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [aux_sym_from_token1] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(166),
    [aux_sym_maintainer_token1] = ACTIONS(166),
    [aux_sym_expose_token1] = ACTIONS(166),
    [aux_sym_from_token1] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(164),
    [aux_sym_from_token2] = ACTIONS(166),
    [aux_sym__repository_start_token4] = ACTIONS(168),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [46] = {
    [sym__repository_continued] = STATE(46),
    [aux_sym_repository_repeat1] = STATE(46),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [aux_sym__repository_start_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(172),
    [aux_sym__repository_start_token5] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [aux_sym__repository_start_token9] = ACTIONS(181),
    [aux_sym__repository_start_token11] = ACTIONS(181),
    [aux_sym__repository_start_token13] = ACTIONS(184),
    [aux_sym__repository_start_token15] = ACTIONS(184),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_maintainer_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [aux_sym_from_token1] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [48] = {
    [sym_digest] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_sha256_COLON] = ACTIONS(189),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_maintainer_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(96),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(98),
    [aux_sym__repository_start_token5] = ACTIONS(96),
    [aux_sym__repository_start_token8] = ACTIONS(96),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token9] = ACTIONS(100),
    [aux_sym__repository_start_token12] = ACTIONS(100),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [51] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_sha256_COLON] = ACTIONS(199),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [aux_sym__port_part_token1] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [53] = {
    [aux_sym__repository_start_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(203),
    [aux_sym_maintainer_token1] = ACTIONS(203),
    [aux_sym_expose_token1] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(201),
    [aux_sym_from_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(205),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [54] = {
    [sym_digest] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_sha256_COLON] = ACTIONS(207),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [55] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(213),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_run_token1] = ACTIONS(106),
    [aux_sym_maintainer_token1] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(104),
    [aux_sym_from_token2] = ACTIONS(106),
    [aux_sym__repository_start_token4] = ACTIONS(106),
    [aux_sym__repository_start_token13] = ACTIONS(104),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(118),
    [aux_sym_maintainer_token1] = ACTIONS(118),
    [aux_sym_expose_token1] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(116),
    [aux_sym_from_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(116),
    [aux_sym__repository_start_token4] = ACTIONS(118),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [58] = {
    [sym__directive] = STATE(153),
    [sym_run] = STATE(153),
    [sym_maintainer] = STATE(153),
    [sym_expose] = STATE(153),
    [sym_from] = STATE(153),
    [aux_sym_dockerfile_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(220),
    [aux_sym_expose_token1] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
    [sym__repository_continued] = STATE(46),
    [aux_sym_repository_repeat1] = STATE(46),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym__repository_start_token1] = ACTIONS(232),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token5] = ACTIONS(235),
    [aux_sym__repository_start_token7] = ACTIONS(235),
    [aux_sym__repository_start_token9] = ACTIONS(238),
    [aux_sym__repository_start_token11] = ACTIONS(238),
    [aux_sym__repository_start_token13] = ACTIONS(241),
    [aux_sym__repository_start_token15] = ACTIONS(241),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [60] = {
    [sym__repository_continued] = STATE(59),
    [aux_sym_repository_repeat1] = STATE(59),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [aux_sym__repository_start_token1] = ACTIONS(247),
    [aux_sym__repository_start_token2] = ACTIONS(244),
    [aux_sym__repository_start_token5] = ACTIONS(250),
    [aux_sym__repository_start_token7] = ACTIONS(250),
    [aux_sym__repository_start_token9] = ACTIONS(253),
    [aux_sym__repository_start_token11] = ACTIONS(253),
    [aux_sym__repository_start_token13] = ACTIONS(256),
    [aux_sym__repository_start_token15] = ACTIONS(256),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [61] = {
    [sym_digest] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_sha256_COLON] = ACTIONS(259),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(110),
    [aux_sym_maintainer_token1] = ACTIONS(110),
    [aux_sym_expose_token1] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [aux_sym_from_token1] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(108),
    [aux_sym_from_token2] = ACTIONS(110),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(110),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [63] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(213),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [64] = {
    [aux_sym__repository_start_repeat2] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(213),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [65] = {
    [aux_sym__repository_start_repeat4] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(213),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [66] = {
    [aux_sym__repository_start_repeat4] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_from_token2] = ACTIONS(263),
    [aux_sym__repository_start_token4] = ACTIONS(265),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [67] = {
    [sym_as_name] = STATE(167),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [68] = {
    [sym_digest] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [aux_sym__port_part_token1] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(84),
    [aux_sym_maintainer_token1] = ACTIONS(84),
    [aux_sym_expose_token1] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(88),
    [aux_sym_from_token1] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(84),
    [aux_sym__repository_start_token17] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(279),
    [aux_sym__port_part_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_from_token2] = ACTIONS(263),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(265),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [aux_sym__port_part_token1] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_run_token1] = ACTIONS(285),
    [aux_sym_maintainer_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [aux_sym__port_part_token1] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_from_token2] = ACTIONS(287),
    [aux_sym__repository_start_token17] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(43),
    [aux_sym_maintainer_token1] = ACTIONS(43),
    [aux_sym_expose_token1] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(43),
    [aux_sym__repository_start_token17] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [aux_sym__repository_start_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_from_token2] = ACTIONS(263),
    [aux_sym__repository_start_token4] = ACTIONS(265),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [78] = {
    [sym_as_name] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [79] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [aux_sym__repository_start_token1] = ACTIONS(295),
    [aux_sym__repository_start_token2] = ACTIONS(293),
    [aux_sym__repository_start_token5] = ACTIONS(297),
    [aux_sym__repository_start_token7] = ACTIONS(297),
    [aux_sym__repository_start_token9] = ACTIONS(299),
    [aux_sym__repository_start_token11] = ACTIONS(299),
    [aux_sym__repository_start_token13] = ACTIONS(301),
    [aux_sym__repository_start_token15] = ACTIONS(301),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [80] = {
    [aux_sym__repository_start_repeat3] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_from_token2] = ACTIONS(263),
    [aux_sym__repository_start_token4] = ACTIONS(265),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [81] = {
    [aux_sym__repository_start_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(305),
    [aux_sym_from_token2] = ACTIONS(305),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(307),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [82] = {
    [sym_image] = STATE(129),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [aux_sym__repository_start_token1] = ACTIONS(311),
    [aux_sym__repository_start_token2] = ACTIONS(309),
    [aux_sym__repository_start_token5] = ACTIONS(313),
    [aux_sym__repository_start_token7] = ACTIONS(313),
    [aux_sym__repository_start_token9] = ACTIONS(315),
    [aux_sym__repository_start_token11] = ACTIONS(315),
    [aux_sym__repository_start_token13] = ACTIONS(317),
    [aux_sym__repository_start_token15] = ACTIONS(317),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [83] = {
    [sym_as_name] = STATE(149),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [84] = {
    [sym_as_name] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [85] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [86] = {
    [sym_tag] = STATE(132),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [aux_sym__repository_start_token1] = ACTIONS(295),
    [aux_sym__repository_start_token2] = ACTIONS(293),
    [aux_sym__repository_start_token5] = ACTIONS(297),
    [aux_sym__repository_start_token7] = ACTIONS(297),
    [aux_sym__repository_start_token9] = ACTIONS(299),
    [aux_sym__repository_start_token11] = ACTIONS(299),
    [aux_sym__repository_start_token13] = ACTIONS(301),
    [aux_sym__repository_start_token15] = ACTIONS(301),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [87] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_from_token2] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(323),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [88] = {
    [sym_as_name] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [89] = {
    [sym_digest] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [90] = {
    [sym_digest] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token5] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token13] = ACTIONS(197),
    [aux_sym__repository_start_token15] = ACTIONS(197),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [91] = {
    [sym_as_name] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [aux_sym__port_part_token1] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
    [sym_as_name] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(267),
    [aux_sym__repository_start_token5] = ACTIONS(271),
    [aux_sym__repository_start_token7] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(273),
    [aux_sym__repository_start_token11] = ACTIONS(273),
    [aux_sym__repository_start_token13] = ACTIONS(275),
    [aux_sym__repository_start_token15] = ACTIONS(275),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [94] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_from_token2] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(323),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_run_token1] = ACTIONS(325),
    [aux_sym_maintainer_token1] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [aux_sym_from_token2] = ACTIONS(325),
    [aux_sym__repository_start_token17] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_from_token2] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(323),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [97] = {
    [anon_sym_DOLLAR] = ACTIONS(331),
    [aux_sym__repository_start_token1] = ACTIONS(333),
    [aux_sym__repository_start_token2] = ACTIONS(331),
    [aux_sym__repository_start_token5] = ACTIONS(331),
    [aux_sym__repository_start_token7] = ACTIONS(331),
    [aux_sym__repository_start_token9] = ACTIONS(331),
    [aux_sym__repository_start_token11] = ACTIONS(331),
    [aux_sym__repository_start_token13] = ACTIONS(331),
    [aux_sym__repository_start_token15] = ACTIONS(331),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [98] = {
    [aux_sym__repository_start_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(337),
    [aux_sym_maintainer_token1] = ACTIONS(337),
    [aux_sym_expose_token1] = ACTIONS(337),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(337),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(339),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [99] = {
    [anon_sym_DOLLAR] = ACTIONS(341),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token2] = ACTIONS(341),
    [aux_sym__repository_start_token5] = ACTIONS(341),
    [aux_sym__repository_start_token7] = ACTIONS(341),
    [aux_sym__repository_start_token9] = ACTIONS(341),
    [aux_sym__repository_start_token11] = ACTIONS(341),
    [aux_sym__repository_start_token13] = ACTIONS(341),
    [aux_sym__repository_start_token15] = ACTIONS(341),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [100] = {
    [sym__port_spec] = STATE(222),
    [sym_mapped_port] = STATE(222),
    [sym__port] = STATE(118),
    [sym_port] = STATE(199),
    [sym_port_range] = STATE(199),
    [sym__port_part] = STATE(73),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_DOLLAR] = ACTIONS(347),
    [aux_sym__repository_start_token1] = ACTIONS(349),
    [aux_sym__repository_start_token2] = ACTIONS(347),
    [aux_sym__repository_start_token5] = ACTIONS(347),
    [aux_sym__repository_start_token7] = ACTIONS(347),
    [aux_sym__repository_start_token9] = ACTIONS(347),
    [aux_sym__repository_start_token11] = ACTIONS(347),
    [aux_sym__repository_start_token13] = ACTIONS(347),
    [aux_sym__repository_start_token15] = ACTIONS(347),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_run_token1] = ACTIONS(351),
    [aux_sym_maintainer_token1] = ACTIONS(351),
    [aux_sym_expose_token1] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [aux_sym__port_part_token1] = ACTIONS(351),
    [anon_sym_DOLLAR] = ACTIONS(351),
    [aux_sym_from_token1] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [anon_sym_DOLLAR] = ACTIONS(353),
    [aux_sym__repository_start_token1] = ACTIONS(355),
    [aux_sym__repository_start_token2] = ACTIONS(353),
    [aux_sym__repository_start_token5] = ACTIONS(353),
    [aux_sym__repository_start_token7] = ACTIONS(353),
    [aux_sym__repository_start_token9] = ACTIONS(353),
    [aux_sym__repository_start_token11] = ACTIONS(353),
    [aux_sym__repository_start_token13] = ACTIONS(353),
    [aux_sym__repository_start_token15] = ACTIONS(353),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [104] = {
    [anon_sym_DOLLAR] = ACTIONS(357),
    [aux_sym__repository_start_token1] = ACTIONS(359),
    [aux_sym__repository_start_token2] = ACTIONS(357),
    [aux_sym__repository_start_token5] = ACTIONS(357),
    [aux_sym__repository_start_token7] = ACTIONS(357),
    [aux_sym__repository_start_token9] = ACTIONS(357),
    [aux_sym__repository_start_token11] = ACTIONS(357),
    [aux_sym__repository_start_token13] = ACTIONS(357),
    [aux_sym__repository_start_token15] = ACTIONS(357),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [105] = {
    [anon_sym_DOLLAR] = ACTIONS(361),
    [aux_sym__repository_start_token1] = ACTIONS(363),
    [aux_sym__repository_start_token2] = ACTIONS(361),
    [aux_sym__repository_start_token5] = ACTIONS(361),
    [aux_sym__repository_start_token7] = ACTIONS(361),
    [aux_sym__repository_start_token9] = ACTIONS(361),
    [aux_sym__repository_start_token11] = ACTIONS(361),
    [aux_sym__repository_start_token13] = ACTIONS(361),
    [aux_sym__repository_start_token15] = ACTIONS(361),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [106] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_maintainer_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym__repository_start_token4] = ACTIONS(369),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [107] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_maintainer_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym__repository_start_token4] = ACTIONS(369),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [108] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_maintainer_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym__repository_start_token4] = ACTIONS(369),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [109] = {
    [aux_sym__repository_start_repeat4] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [110] = {
    [anon_sym_DOLLAR] = ACTIONS(377),
    [aux_sym__repository_start_token1] = ACTIONS(379),
    [aux_sym__repository_start_token2] = ACTIONS(377),
    [aux_sym__repository_start_token5] = ACTIONS(377),
    [aux_sym__repository_start_token7] = ACTIONS(377),
    [aux_sym__repository_start_token9] = ACTIONS(377),
    [aux_sym__repository_start_token11] = ACTIONS(377),
    [aux_sym__repository_start_token13] = ACTIONS(377),
    [aux_sym__repository_start_token15] = ACTIONS(377),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [111] = {
    [aux_sym__repository_start_repeat3] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [112] = {
    [aux_sym__repository_start_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [113] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [114] = {
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym__repository_start_token1] = ACTIONS(383),
    [aux_sym__repository_start_token2] = ACTIONS(381),
    [aux_sym__repository_start_token5] = ACTIONS(381),
    [aux_sym__repository_start_token7] = ACTIONS(381),
    [aux_sym__repository_start_token9] = ACTIONS(381),
    [aux_sym__repository_start_token11] = ACTIONS(381),
    [aux_sym__repository_start_token13] = ACTIONS(381),
    [aux_sym__repository_start_token15] = ACTIONS(381),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [115] = {
    [anon_sym_DOLLAR] = ACTIONS(385),
    [aux_sym__repository_start_token1] = ACTIONS(387),
    [aux_sym__repository_start_token2] = ACTIONS(385),
    [aux_sym__repository_start_token5] = ACTIONS(385),
    [aux_sym__repository_start_token7] = ACTIONS(385),
    [aux_sym__repository_start_token9] = ACTIONS(385),
    [aux_sym__repository_start_token11] = ACTIONS(385),
    [aux_sym__repository_start_token13] = ACTIONS(385),
    [aux_sym__repository_start_token15] = ACTIONS(385),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [116] = {
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym__repository_start_token1] = ACTIONS(391),
    [aux_sym__repository_start_token2] = ACTIONS(389),
    [aux_sym__repository_start_token5] = ACTIONS(389),
    [aux_sym__repository_start_token7] = ACTIONS(389),
    [aux_sym__repository_start_token9] = ACTIONS(389),
    [aux_sym__repository_start_token11] = ACTIONS(389),
    [aux_sym__repository_start_token13] = ACTIONS(389),
    [aux_sym__repository_start_token15] = ACTIONS(389),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [aux_sym__port_part_token1] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [aux_sym_run_token1] = ACTIONS(395),
    [aux_sym_maintainer_token1] = ACTIONS(395),
    [aux_sym_expose_token1] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(397),
    [aux_sym__port_part_token1] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [aux_sym_from_token1] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_run_token1] = ACTIONS(43),
    [aux_sym_maintainer_token1] = ACTIONS(43),
    [aux_sym_expose_token1] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [aux_sym_from_token1] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
    [aux_sym_from_token2] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_from_token2] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(84),
    [aux_sym_maintainer_token1] = ACTIONS(84),
    [aux_sym_expose_token1] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [aux_sym_from_token1] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [aux_sym_from_token2] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [aux_sym_run_token1] = ACTIONS(399),
    [aux_sym_maintainer_token1] = ACTIONS(399),
    [aux_sym_expose_token1] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
    [aux_sym_from_token1] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(403),
    [aux_sym_from_token2] = ACTIONS(405),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [123] = {
    [aux_sym_run_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_run_token3] = ACTIONS(411),
    [aux_sym_run_token4] = ACTIONS(411),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [sym_line_continuation] = ACTIONS(41),
  },
  [124] = {
    [aux_sym_run_repeat1] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_run_token1] = ACTIONS(416),
    [aux_sym_run_token3] = ACTIONS(418),
    [aux_sym_run_token4] = ACTIONS(418),
    [aux_sym_maintainer_token1] = ACTIONS(416),
    [aux_sym_expose_token1] = ACTIONS(416),
    [aux_sym_from_token1] = ACTIONS(416),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [125] = {
    [aux_sym_run_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(420),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_run_token3] = ACTIONS(424),
    [aux_sym_run_token4] = ACTIONS(424),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [sym_comment] = ACTIONS(426),
    [sym_line_continuation] = ACTIONS(41),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_run_token1] = ACTIONS(428),
    [aux_sym_maintainer_token1] = ACTIONS(428),
    [aux_sym_expose_token1] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [aux_sym__port_part_token1] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_from_token1] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [aux_sym_run_token1] = ACTIONS(430),
    [aux_sym_maintainer_token1] = ACTIONS(430),
    [aux_sym_expose_token1] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(430),
    [aux_sym__port_part_token1] = ACTIONS(430),
    [anon_sym_DOLLAR] = ACTIONS(430),
    [aux_sym_from_token1] = ACTIONS(430),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [128] = {
    [aux_sym_run_repeat1] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_run_token3] = ACTIONS(432),
    [aux_sym_run_token4] = ACTIONS(432),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [aux_sym_from_token1] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(439),
    [aux_sym_from_token2] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_run_token1] = ACTIONS(325),
    [aux_sym_maintainer_token1] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [aux_sym_from_token1] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [aux_sym_from_token2] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_run_token1] = ACTIONS(443),
    [aux_sym_maintainer_token1] = ACTIONS(443),
    [aux_sym_expose_token1] = ACTIONS(443),
    [aux_sym_from_token1] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [aux_sym_from_token2] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(447),
    [aux_sym_from_token2] = ACTIONS(449),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [133] = {
    [sym__port] = STATE(163),
    [sym_port] = STATE(163),
    [sym_port_range] = STATE(163),
    [sym__port_part] = STATE(73),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(164),
    [aux_sym_maintainer_token1] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [aux_sym_from_token1] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [aux_sym_from_token2] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [135] = {
    [sym__port] = STATE(126),
    [sym_port] = STATE(126),
    [sym_port_range] = STATE(126),
    [sym__port_part] = STATE(73),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_run_token1] = ACTIONS(451),
    [aux_sym_maintainer_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(453),
    [aux_sym_from_token2] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [aux_sym_run_token1] = ACTIONS(457),
    [aux_sym_maintainer_token1] = ACTIONS(457),
    [aux_sym_expose_token1] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [aux_sym_from_token2] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_run_token1] = ACTIONS(459),
    [aux_sym_maintainer_token1] = ACTIONS(459),
    [aux_sym_expose_token1] = ACTIONS(459),
    [aux_sym_from_token1] = ACTIONS(459),
    [aux_sym_from_token2] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_run_token1] = ACTIONS(451),
    [aux_sym_maintainer_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [aux_sym_from_token2] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [aux_sym_from_token2] = ACTIONS(449),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(319),
    [aux_sym_maintainer_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [aux_sym_from_token2] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [aux_sym_from_token1] = ACTIONS(261),
    [aux_sym_from_token2] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_maintainer_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [aux_sym_from_token2] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [aux_sym_from_token2] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_run_token1] = ACTIONS(469),
    [aux_sym_maintainer_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [aux_sym_from_token2] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_run_token1] = ACTIONS(471),
    [aux_sym_maintainer_token1] = ACTIONS(471),
    [aux_sym_expose_token1] = ACTIONS(471),
    [aux_sym_from_token1] = ACTIONS(471),
    [aux_sym_from_token2] = ACTIONS(473),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_maintainer_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_run_token1] = ACTIONS(475),
    [aux_sym_maintainer_token1] = ACTIONS(475),
    [aux_sym_expose_token1] = ACTIONS(475),
    [aux_sym_from_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [150] = {
    [sym_template_expr_less_than_equals] = STATE(251),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [151] = {
    [sym_variable_default_value] = STATE(253),
    [sym_variable_this_or_null] = STATE(253),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_COLON_DASH] = ACTIONS(483),
    [anon_sym_COLON_PLUS] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [152] = {
    [sym_variable_default_value] = STATE(248),
    [sym_variable_this_or_null] = STATE(248),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_COLON_DASH] = ACTIONS(483),
    [anon_sym_COLON_PLUS] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_run_token1] = ACTIONS(489),
    [aux_sym_maintainer_token1] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [aux_sym_run_token1] = ACTIONS(26),
    [aux_sym_maintainer_token1] = ACTIONS(26),
    [aux_sym_expose_token1] = ACTIONS(26),
    [aux_sym_from_token1] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [155] = {
    [sym_template_expr_less_than_equals] = STATE(211),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_run_token1] = ACTIONS(491),
    [aux_sym_maintainer_token1] = ACTIONS(491),
    [aux_sym_expose_token1] = ACTIONS(491),
    [aux_sym_from_token1] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [157] = {
    [sym_template_expr_less_than_equals] = STATE(246),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_run_token1] = ACTIONS(451),
    [aux_sym_maintainer_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_run_token1] = ACTIONS(493),
    [aux_sym_maintainer_token1] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [160] = {
    [sym_template_expr_less_than_equals] = STATE(207),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [161] = {
    [sym_template_expr_less_than_equals] = STATE(226),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [162] = {
    [sym_port] = STATE(243),
    [sym_port_range] = STATE(243),
    [sym__port_part] = STATE(73),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_run_token1] = ACTIONS(495),
    [aux_sym_maintainer_token1] = ACTIONS(495),
    [aux_sym_expose_token1] = ACTIONS(495),
    [aux_sym_from_token1] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(365),
    [aux_sym_maintainer_token1] = ACTIONS(365),
    [aux_sym_expose_token1] = ACTIONS(365),
    [aux_sym_from_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [aux_sym_run_token1] = ACTIONS(497),
    [aux_sym_maintainer_token1] = ACTIONS(497),
    [aux_sym_expose_token1] = ACTIONS(497),
    [aux_sym_from_token1] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [166] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(176),
    [aux_sym__repository_start_token14] = ACTIONS(499),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(501),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(503),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(503),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_run_token1] = ACTIONS(459),
    [aux_sym_maintainer_token1] = ACTIONS(459),
    [aux_sym_expose_token1] = ACTIONS(459),
    [aux_sym_from_token1] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [168] = {
    [sym_template_expr_less_than_equals] = STATE(201),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [170] = {
    [sym_template_expr_less_than_equals] = STATE(239),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [172] = {
    [aux_sym__repository_start_repeat1] = STATE(174),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(505),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(507),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [173] = {
    [sym_template_expr_less_than_equals] = STATE(208),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(166),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(477),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(479),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [174] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token3] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_run_token1] = ACTIONS(513),
    [aux_sym_maintainer_token1] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [176] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(176),
    [aux_sym__repository_start_token14] = ACTIONS(515),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(517),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(520),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(520),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [177] = {
    [aux_sym__repository_start_repeat2] = STATE(178),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [178] = {
    [aux_sym__repository_start_repeat2] = STATE(4),
    [anon_sym_SLASH] = ACTIONS(523),
    [aux_sym__repository_start_token4] = ACTIONS(525),
    [aux_sym__repository_start_token5] = ACTIONS(92),
    [aux_sym__repository_start_token8] = ACTIONS(92),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [179] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [anon_sym_SLASH] = ACTIONS(523),
    [aux_sym__repository_start_token4] = ACTIONS(525),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [180] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [anon_sym_SLASH] = ACTIONS(523),
    [aux_sym__repository_start_token4] = ACTIONS(525),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_run_token1] = ACTIONS(471),
    [aux_sym_maintainer_token1] = ACTIONS(471),
    [aux_sym_expose_token1] = ACTIONS(471),
    [aux_sym_from_token1] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [182] = {
    [aux_sym__repository_start_repeat3] = STATE(179),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [aux_sym__repository_start_token9] = ACTIONS(94),
    [aux_sym__repository_start_token12] = ACTIONS(94),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [183] = {
    [aux_sym__repository_start_repeat4] = STATE(180),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [aux_sym__repository_start_token13] = ACTIONS(51),
    [aux_sym__repository_start_token16] = ACTIONS(51),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [184] = {
    [sym_variable_default_value] = STATE(240),
    [sym_variable_this_or_null] = STATE(240),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_COLON_DASH] = ACTIONS(483),
    [anon_sym_COLON_PLUS] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [185] = {
    [sym__port_part] = STATE(117),
    [aux_sym__port_part_token1] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [186] = {
    [sym_docker_variable] = STATE(16),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym__docker_variable] = ACTIONS(531),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [187] = {
    [sym_docker_variable] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(533),
    [sym__docker_variable] = ACTIONS(535),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [188] = {
    [sym_docker_variable] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym__docker_variable] = ACTIONS(531),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [189] = {
    [aux_sym_run_repeat1] = STATE(124),
    [aux_sym_run_token3] = ACTIONS(537),
    [aux_sym_run_token4] = ACTIONS(537),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [190] = {
    [aux_sym_run_repeat1] = STATE(125),
    [aux_sym_run_token3] = ACTIONS(539),
    [aux_sym_run_token4] = ACTIONS(539),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [191] = {
    [sym_docker_variable] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(541),
    [sym__docker_variable] = ACTIONS(543),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [192] = {
    [sym_docker_variable] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym__docker_variable] = ACTIONS(531),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [193] = {
    [sym_docker_variable] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(541),
    [sym__docker_variable] = ACTIONS(543),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [194] = {
    [anon_sym_DOLLAR] = ACTIONS(545),
    [aux_sym_port_protocol_token1] = ACTIONS(547),
    [aux_sym_port_protocol_token2] = ACTIONS(547),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [195] = {
    [sym_docker_variable] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym__docker_variable] = ACTIONS(531),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [196] = {
    [sym_docker_variable] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym__docker_variable] = ACTIONS(531),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [197] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(533),
    [sym__docker_variable] = ACTIONS(535),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [198] = {
    [sym_docker_variable] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym__docker_variable] = ACTIONS(531),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [199] = {
    [anon_sym_DQUOTE] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(552),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [200] = {
    [sym_template_expr_percent_signs] = ACTIONS(554),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [201] = {
    [aux_sym__repository_start_token14] = ACTIONS(556),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [202] = {
    [anon_sym_SLASH] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [203] = {
    [aux_sym__repository_start_token10] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [204] = {
    [sym_template_expr_percent_signs] = ACTIONS(560),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [205] = {
    [sym_template_expr_curly_braces] = ACTIONS(562),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [206] = {
    [sym_template_expr_percent_signs] = ACTIONS(564),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [207] = {
    [aux_sym__repository_start_token14] = ACTIONS(566),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [208] = {
    [aux_sym__repository_start_token14] = ACTIONS(568),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [209] = {
    [aux_sym__repository_start_token10] = ACTIONS(570),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [210] = {
    [anon_sym_SLASH] = ACTIONS(572),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [211] = {
    [aux_sym__repository_start_token14] = ACTIONS(574),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [212] = {
    [aux_sym__repository_start_token10] = ACTIONS(576),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [213] = {
    [aux_sym__repository_start_token6] = ACTIONS(578),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [214] = {
    [aux_sym__repository_start_token6] = ACTIONS(580),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [215] = {
    [sym_template_expr_curly_braces] = ACTIONS(582),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [216] = {
    [sym__docker_variable] = ACTIONS(584),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [217] = {
    [sym_template_expr_curly_braces] = ACTIONS(586),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [218] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(588),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [219] = {
    [sym_template_expr_percent_signs] = ACTIONS(590),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [220] = {
    [sym_template_expr_curly_braces] = ACTIONS(592),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [221] = {
    [sym_template_expr_percent_signs] = ACTIONS(594),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [222] = {
    [anon_sym_DQUOTE] = ACTIONS(596),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(598),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(600),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [anon_sym_RBRACE] = ACTIONS(602),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [aux_sym__repository_start_token14] = ACTIONS(604),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [aux_sym__repository_start_token10] = ACTIONS(606),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [aux_sym__repository_start_token6] = ACTIONS(608),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_SLASH] = ACTIONS(610),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_template_expr_curly_braces] = ACTIONS(612),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [231] = {
    [sym_template_expr_percent_signs] = ACTIONS(614),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [232] = {
    [aux_sym_run_token2] = ACTIONS(616),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [233] = {
    [sym_template_expr_curly_braces] = ACTIONS(618),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [234] = {
    [aux_sym__repository_start_token10] = ACTIONS(620),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_template_expr_percent_signs] = ACTIONS(622),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [236] = {
    [sym_template_expr_curly_braces] = ACTIONS(624),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [237] = {
    [aux_sym__repository_start_token6] = ACTIONS(626),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [aux_sym__repository_start_token6] = ACTIONS(628),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [aux_sym__repository_start_token14] = ACTIONS(630),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [anon_sym_RBRACE] = ACTIONS(632),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [aux_sym__repository_start_token6] = ACTIONS(636),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [anon_sym_DQUOTE] = ACTIONS(638),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [aux_sym_run_token2] = ACTIONS(642),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [246] = {
    [aux_sym__repository_start_token14] = ACTIONS(644),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [anon_sym_SLASH] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [anon_sym_RBRACE] = ACTIONS(646),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [aux_sym__repository_start_token6] = ACTIONS(648),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [aux_sym__repository_start_token10] = ACTIONS(650),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [aux_sym__repository_start_token14] = ACTIONS(652),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [aux_sym__repository_start_token10] = ACTIONS(654),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [anon_sym_RBRACE] = ACTIONS(656),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym__docker_variable] = ACTIONS(658),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [255] = {
    [sym_template_expr_curly_braces] = ACTIONS(660),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [256] = {
    [sym_template_expr_percent_signs] = ACTIONS(662),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
  [257] = {
    [aux_sym__repository_start_token6] = ACTIONS(664),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [258] = {
    [sym__docker_variable] = ACTIONS(666),
    [sym_comment] = ACTIONS(41),
    [sym_line_continuation] = ACTIONS(41),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(232),
  [9] = {.count = 1, .reusable = true}, SHIFT(245),
  [11] = {.count = 1, .reusable = true}, SHIFT(26),
  [13] = {.count = 1, .reusable = true}, SHIFT(27),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(100),
  [20] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(36),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(191),
  [26] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [28] = {.count = 1, .reusable = true}, SHIFT(100),
  [30] = {.count = 1, .reusable = true}, SHIFT(36),
  [32] = {.count = 1, .reusable = true}, SHIFT(191),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [36] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(233),
  [41] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [47] = {.count = 1, .reusable = true}, SHIFT(116),
  [49] = {.count = 1, .reusable = false}, SHIFT(70),
  [51] = {.count = 1, .reusable = true}, SHIFT(160),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(160),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [62] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(186),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(231),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [78] = {.count = 1, .reusable = true}, SHIFT(186),
  [80] = {.count = 1, .reusable = true}, SHIFT(114),
  [82] = {.count = 1, .reusable = false}, SHIFT(76),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [88] = {.count = 1, .reusable = true}, SHIFT(99),
  [90] = {.count = 1, .reusable = false}, SHIFT(95),
  [92] = {.count = 1, .reusable = true}, SHIFT(233),
  [94] = {.count = 1, .reusable = true}, SHIFT(231),
  [96] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [106] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [120] = {.count = 1, .reusable = false}, SHIFT(121),
  [122] = {.count = 1, .reusable = true}, SHIFT(150),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(255),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(187),
  [130] = {.count = 1, .reusable = true}, SHIFT(133),
  [132] = {.count = 1, .reusable = true}, SHIFT(192),
  [134] = {.count = 1, .reusable = false}, SHIFT(75),
  [136] = {.count = 1, .reusable = true}, SHIFT(236),
  [138] = {.count = 1, .reusable = true}, SHIFT(235),
  [140] = {.count = 1, .reusable = true}, SHIFT(155),
  [142] = {.count = 1, .reusable = true}, SHIFT(187),
  [144] = {.count = 1, .reusable = false}, SHIFT(119),
  [146] = {.count = 1, .reusable = true}, SHIFT(255),
  [148] = {.count = 1, .reusable = true}, SHIFT(256),
  [150] = {.count = 1, .reusable = false}, SHIFT(130),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(150),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(194),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(256),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [168] = {.count = 1, .reusable = false}, SHIFT(131),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(196),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(229),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(220),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(221),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(173),
  [187] = {.count = 1, .reusable = true}, SHIFT(188),
  [189] = {.count = 1, .reusable = true}, SHIFT(85),
  [191] = {.count = 1, .reusable = false}, SHIFT(145),
  [193] = {.count = 1, .reusable = true}, SHIFT(230),
  [195] = {.count = 1, .reusable = true}, SHIFT(206),
  [197] = {.count = 1, .reusable = true}, SHIFT(168),
  [199] = {.count = 1, .reusable = true}, SHIFT(68),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [205] = {.count = 1, .reusable = false}, SHIFT(136),
  [207] = {.count = 1, .reusable = true}, SHIFT(89),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [213] = {.count = 1, .reusable = false}, SHIFT(134),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(232),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(245),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(26),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(27),
  [229] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(196),
  [232] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(229),
  [235] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(220),
  [238] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(221),
  [241] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(173),
  [244] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(196),
  [247] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(229),
  [250] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(220),
  [253] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(221),
  [256] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(173),
  [259] = {.count = 1, .reusable = true}, SHIFT(90),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [265] = {.count = 1, .reusable = false}, SHIFT(142),
  [267] = {.count = 1, .reusable = true}, SHIFT(195),
  [269] = {.count = 1, .reusable = false}, SHIFT(165),
  [271] = {.count = 1, .reusable = true}, SHIFT(215),
  [273] = {.count = 1, .reusable = true}, SHIFT(200),
  [275] = {.count = 1, .reusable = true}, SHIFT(161),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(185),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [291] = {.count = 1, .reusable = true}, SHIFT(101),
  [293] = {.count = 1, .reusable = true}, SHIFT(198),
  [295] = {.count = 1, .reusable = false}, SHIFT(138),
  [297] = {.count = 1, .reusable = true}, SHIFT(217),
  [299] = {.count = 1, .reusable = true}, SHIFT(219),
  [301] = {.count = 1, .reusable = true}, SHIFT(157),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [307] = {.count = 1, .reusable = false}, SHIFT(143),
  [309] = {.count = 1, .reusable = true}, SHIFT(197),
  [311] = {.count = 1, .reusable = false}, SHIFT(120),
  [313] = {.count = 1, .reusable = true}, SHIFT(205),
  [315] = {.count = 1, .reusable = true}, SHIFT(204),
  [317] = {.count = 1, .reusable = true}, SHIFT(170),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [323] = {.count = 1, .reusable = false}, SHIFT(146),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [329] = {.count = 1, .reusable = true}, SHIFT(105),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [339] = {.count = 1, .reusable = false}, SHIFT(171),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [345] = {.count = 1, .reusable = true}, SHIFT(162),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [369] = {.count = 1, .reusable = false}, SHIFT(159),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [375] = {.count = 1, .reusable = false}, SHIFT(164),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [397] = {.count = 1, .reusable = true}, SHIFT(135),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [401] = {.count = 1, .reusable = true}, SHIFT(79),
  [403] = {.count = 1, .reusable = true}, SHIFT(61),
  [405] = {.count = 1, .reusable = true}, SHIFT(78),
  [407] = {.count = 1, .reusable = true}, REDUCE(aux_sym_run_repeat1, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(aux_sym_run_repeat1, 2),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_run_repeat1, 2), SHIFT_REPEAT(123),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_run, 3),
  [418] = {.count = 1, .reusable = true}, SHIFT(128),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [424] = {.count = 1, .reusable = true}, SHIFT(123),
  [426] = {.count = 1, .reusable = false}, SHIFT(175),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [430] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_run_repeat1, 2), SHIFT_REPEAT(128),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [437] = {.count = 1, .reusable = true}, SHIFT(86),
  [439] = {.count = 1, .reusable = true}, SHIFT(48),
  [441] = {.count = 1, .reusable = true}, SHIFT(88),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [447] = {.count = 1, .reusable = true}, SHIFT(54),
  [449] = {.count = 1, .reusable = true}, SHIFT(67),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [453] = {.count = 1, .reusable = true}, SHIFT(51),
  [455] = {.count = 1, .reusable = true}, SHIFT(93),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [461] = {.count = 1, .reusable = true}, SHIFT(84),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [465] = {.count = 1, .reusable = true}, SHIFT(83),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [473] = {.count = 1, .reusable = true}, SHIFT(91),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [477] = {.count = 1, .reusable = true}, SHIFT(166),
  [479] = {.count = 1, .reusable = false}, SHIFT(166),
  [481] = {.count = 1, .reusable = true}, SHIFT(62),
  [483] = {.count = 1, .reusable = true}, SHIFT(223),
  [485] = {.count = 1, .reusable = true}, SHIFT(218),
  [487] = {.count = 1, .reusable = true}, SHIFT(20),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [501] = {.count = 1, .reusable = true}, SHIFT(176),
  [503] = {.count = 1, .reusable = false}, SHIFT(176),
  [505] = {.count = 1, .reusable = true}, SHIFT(104),
  [507] = {.count = 1, .reusable = false}, SHIFT(202),
  [509] = {.count = 1, .reusable = true}, SHIFT(115),
  [511] = {.count = 1, .reusable = false}, SHIFT(247),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [515] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(176),
  [520] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(176),
  [523] = {.count = 1, .reusable = true}, SHIFT(97),
  [525] = {.count = 1, .reusable = false}, SHIFT(210),
  [527] = {.count = 1, .reusable = true}, SHIFT(44),
  [529] = {.count = 1, .reusable = true}, SHIFT(254),
  [531] = {.count = 1, .reusable = true}, SHIFT(22),
  [533] = {.count = 1, .reusable = true}, SHIFT(258),
  [535] = {.count = 1, .reusable = true}, SHIFT(57),
  [537] = {.count = 1, .reusable = true}, SHIFT(124),
  [539] = {.count = 1, .reusable = true}, SHIFT(125),
  [541] = {.count = 1, .reusable = true}, SHIFT(216),
  [543] = {.count = 1, .reusable = true}, SHIFT(52),
  [545] = {.count = 1, .reusable = true}, SHIFT(193),
  [547] = {.count = 1, .reusable = true}, SHIFT(69),
  [549] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(102),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [554] = {.count = 1, .reusable = true}, SHIFT(227),
  [556] = {.count = 1, .reusable = true}, SHIFT(66),
  [558] = {.count = 1, .reusable = true}, SHIFT(182),
  [560] = {.count = 1, .reusable = true}, SHIFT(241),
  [562] = {.count = 1, .reusable = true}, SHIFT(242),
  [564] = {.count = 1, .reusable = true}, SHIFT(234),
  [566] = {.count = 1, .reusable = true}, SHIFT(19),
  [568] = {.count = 1, .reusable = true}, SHIFT(183),
  [570] = {.count = 1, .reusable = true}, SHIFT(18),
  [572] = {.count = 1, .reusable = true}, SHIFT(110),
  [574] = {.count = 1, .reusable = true}, SHIFT(5),
  [576] = {.count = 1, .reusable = true}, SHIFT(13),
  [578] = {.count = 1, .reusable = true}, SHIFT(15),
  [580] = {.count = 1, .reusable = true}, SHIFT(17),
  [582] = {.count = 1, .reusable = true}, SHIFT(228),
  [584] = {.count = 1, .reusable = true}, SHIFT(184),
  [586] = {.count = 1, .reusable = true}, SHIFT(257),
  [588] = {.count = 1, .reusable = true}, SHIFT(224),
  [590] = {.count = 1, .reusable = true}, SHIFT(252),
  [592] = {.count = 1, .reusable = true}, SHIFT(237),
  [594] = {.count = 1, .reusable = true}, SHIFT(203),
  [596] = {.count = 1, .reusable = true}, SHIFT(127),
  [598] = {.count = 1, .reusable = true}, SHIFT(225),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [604] = {.count = 1, .reusable = true}, SHIFT(109),
  [606] = {.count = 1, .reusable = true}, SHIFT(111),
  [608] = {.count = 1, .reusable = true}, SHIFT(112),
  [610] = {.count = 1, .reusable = true}, SHIFT(103),
  [612] = {.count = 1, .reusable = true}, SHIFT(238),
  [614] = {.count = 1, .reusable = true}, SHIFT(209),
  [616] = {.count = 1, .reusable = true}, SHIFT(189),
  [618] = {.count = 1, .reusable = true}, SHIFT(214),
  [620] = {.count = 1, .reusable = true}, SHIFT(80),
  [622] = {.count = 1, .reusable = true}, SHIFT(212),
  [624] = {.count = 1, .reusable = true}, SHIFT(213),
  [626] = {.count = 1, .reusable = true}, SHIFT(177),
  [628] = {.count = 1, .reusable = true}, SHIFT(77),
  [630] = {.count = 1, .reusable = true}, SHIFT(23),
  [632] = {.count = 1, .reusable = true}, SHIFT(47),
  [634] = {.count = 1, .reusable = true}, SHIFT(31),
  [636] = {.count = 1, .reusable = true}, SHIFT(30),
  [638] = {.count = 1, .reusable = true}, SHIFT(102),
  [640] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [642] = {.count = 1, .reusable = true}, SHIFT(190),
  [644] = {.count = 1, .reusable = true}, SHIFT(65),
  [646] = {.count = 1, .reusable = true}, SHIFT(21),
  [648] = {.count = 1, .reusable = true}, SHIFT(49),
  [650] = {.count = 1, .reusable = true}, SHIFT(50),
  [652] = {.count = 1, .reusable = true}, SHIFT(56),
  [654] = {.count = 1, .reusable = true}, SHIFT(55),
  [656] = {.count = 1, .reusable = true}, SHIFT(41),
  [658] = {.count = 1, .reusable = true}, SHIFT(152),
  [660] = {.count = 1, .reusable = true}, SHIFT(249),
  [662] = {.count = 1, .reusable = true}, SHIFT(250),
  [664] = {.count = 1, .reusable = true}, SHIFT(64),
  [666] = {.count = 1, .reusable = true}, SHIFT(151),
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
