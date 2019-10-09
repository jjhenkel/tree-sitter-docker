#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 248
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  aux_sym_expose_token1 = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_COLON = 3,
  anon_sym_DASH = 4,
  aux_sym__port_part_token1 = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_SLASH = 7,
  aux_sym_port_protocol_token1 = 8,
  aux_sym_port_protocol_token2 = 9,
  aux_sym_from_token1 = 10,
  anon_sym_AT = 11,
  anon_sym_sha256_COLON = 12,
  aux_sym_from_token2 = 13,
  aux_sym__repository_start_token1 = 14,
  aux_sym__repository_start_token2 = 15,
  aux_sym__repository_start_token3 = 16,
  aux_sym__repository_start_token4 = 17,
  aux_sym__repository_start_token5 = 18,
  aux_sym__repository_start_token6 = 19,
  aux_sym__repository_start_token7 = 20,
  aux_sym__repository_start_token8 = 21,
  aux_sym__repository_start_token9 = 22,
  aux_sym__repository_start_token10 = 23,
  aux_sym__repository_start_token11 = 24,
  aux_sym__repository_start_token12 = 25,
  aux_sym__repository_start_token13 = 26,
  aux_sym__repository_start_token14 = 27,
  aux_sym__repository_start_token15 = 28,
  aux_sym__repository_start_token16 = 29,
  aux_sym__repository_start_token17 = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  sym__docker_variable = 33,
  anon_sym_COLON_DASH = 34,
  aux_sym_variable_default_value_token1 = 35,
  sym_template_expr_curly_braces = 36,
  sym_template_expr_percent_signs = 37,
  aux_sym_template_expr_less_than_equals_token1 = 38,
  aux_sym_template_expr_less_than_equals_token2 = 39,
  aux_sym_template_expr_less_than_equals_token3 = 40,
  sym_comment = 41,
  sym_dockerfile = 42,
  sym__directive = 43,
  sym_expose = 44,
  sym__port_spec = 45,
  sym_mapped_port = 46,
  sym_mapped_no_lhs = 47,
  sym__port = 48,
  sym_port = 49,
  sym_port_range = 50,
  sym__port_part = 51,
  sym_port_protocol = 52,
  sym_from = 53,
  sym_repository = 54,
  sym__repository_start = 55,
  sym__repository_continued = 56,
  sym_image = 57,
  sym_tag = 58,
  sym_digest = 59,
  sym_as_name = 60,
  sym_docker_variable = 61,
  sym_variable_default_value = 62,
  sym_template_expr_less_than_equals = 63,
  aux_sym_dockerfile_repeat1 = 64,
  aux_sym_expose_repeat1 = 65,
  aux_sym_repository_repeat1 = 66,
  aux_sym__repository_start_repeat1 = 67,
  aux_sym__repository_start_repeat2 = 68,
  aux_sym__repository_start_repeat3 = 69,
  aux_sym__repository_start_repeat4 = 70,
  aux_sym_template_expr_less_than_equals_repeat1 = 71,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_template_expr_curly_braces] = "template_expr_curly_braces",
  [sym_template_expr_percent_signs] = "template_expr_percent_signs",
  [aux_sym_template_expr_less_than_equals_token1] = "template_expr_less_than_equals_token1",
  [aux_sym_template_expr_less_than_equals_token2] = "template_expr_less_than_equals_token2",
  [aux_sym_template_expr_less_than_equals_token3] = "template_expr_less_than_equals_token3",
  [sym_comment] = "comment",
  [sym_dockerfile] = "dockerfile",
  [sym__directive] = "_directive",
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
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
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
  [sym_dockerfile] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
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
  [sym_template_expr_less_than_equals] = {
    .visible = true,
    .named = true,
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
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 25:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 26:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 27:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 28:
      if (lookahead == 0) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(185);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(179);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(182);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\\') SKIP(66)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '6') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(161);
      END_STATE();
    case 51:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(164);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(186);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '5') ADVANCE(86);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '6') ADVANCE(87);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
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
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(99);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(94);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(114);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(108);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(109);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(159);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(188);
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
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(120);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(51);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      if (lookahead == '{') ADVANCE(151);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
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
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
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
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
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
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '%') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__repository_start_token17);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(142);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(145);
      END_STATE();
    case 172:
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
          lookahead != '}') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
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
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 38},
  [164] = {.lex_state = 33},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 33},
  [167] = {.lex_state = 38},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 38},
  [176] = {.lex_state = 38},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 38},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 38},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 38},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 38},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 33},
  [197] = {.lex_state = 38},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 31},
  [201] = {.lex_state = 32},
  [202] = {.lex_state = 30},
  [203] = {.lex_state = 33},
  [204] = {.lex_state = 31},
  [205] = {.lex_state = 32},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 31},
  [209] = {.lex_state = 32},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 31},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 32},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 33},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 33},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 32},
  [223] = {.lex_state = 33},
  [224] = {.lex_state = 32},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 31},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 33},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 33},
  [234] = {.lex_state = 33},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 33},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 33},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 33},
  [243] = {.lex_state = 38},
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 32},
  [246] = {.lex_state = 33},
  [247] = {.lex_state = 38},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
  },
  [1] = {
    [sym_dockerfile] = STATE(217),
    [sym__directive] = STATE(185),
    [sym_expose] = STATE(185),
    [sym_from] = STATE(185),
    [aux_sym_dockerfile_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_expose_token1] = ACTIONS(7),
    [aux_sym_from_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__port_spec] = STATE(3),
    [sym_mapped_port] = STATE(3),
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(94),
    [aux_sym_expose_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_expose_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [aux_sym_from_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__port_spec] = STATE(3),
    [sym_mapped_port] = STATE(3),
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(94),
    [aux_sym_expose_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_expose_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym__port_part_token1] = ACTIONS(24),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [aux_sym_from_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_from_token2] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(36),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [aux_sym__repository_start_token17] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [5] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(50),
    [anon_sym_SLASH] = ACTIONS(48),
    [aux_sym_from_token1] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(48),
    [aux_sym_from_token2] = ACTIONS(48),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(48),
    [aux_sym__repository_start_token17] = ACTIONS(46),
    [sym_comment] = ACTIONS(44),
  },
  [6] = {
    [aux_sym__repository_start_repeat4] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [aux_sym__repository_start_token17] = ACTIONS(64),
    [sym_comment] = ACTIONS(44),
  },
  [7] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_from_token2] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(36),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [aux_sym__repository_start_token17] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [8] = {
    [sym_repository] = STATE(44),
    [sym__repository_start] = STATE(21),
    [sym_image] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym__repository_start_token1] = ACTIONS(72),
    [aux_sym__repository_start_token2] = ACTIONS(70),
    [aux_sym__repository_start_token5] = ACTIONS(74),
    [aux_sym__repository_start_token7] = ACTIONS(74),
    [aux_sym__repository_start_token9] = ACTIONS(76),
    [aux_sym__repository_start_token11] = ACTIONS(76),
    [aux_sym__repository_start_token13] = ACTIONS(78),
    [aux_sym__repository_start_token15] = ACTIONS(78),
    [sym_comment] = ACTIONS(44),
  },
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_from_token2] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(36),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [aux_sym__repository_start_token17] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [10] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(86),
    [aux_sym__repository_start_token5] = ACTIONS(88),
    [aux_sym__repository_start_token8] = ACTIONS(91),
    [aux_sym__repository_start_token17] = ACTIONS(84),
    [sym_comment] = ACTIONS(44),
  },
  [11] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token4] = ACTIONS(96),
    [aux_sym__repository_start_token9] = ACTIONS(98),
    [aux_sym__repository_start_token12] = ACTIONS(101),
    [aux_sym__repository_start_token17] = ACTIONS(94),
    [sym_comment] = ACTIONS(44),
  },
  [12] = {
    [sym__port_spec] = STATE(2),
    [sym_mapped_port] = STATE(2),
    [sym_mapped_no_lhs] = STATE(179),
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(94),
    [aux_sym_expose_repeat1] = STATE(2),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(104),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [aux_sym_from_token1] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [aux_sym_from_token2] = ACTIONS(108),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(116),
    [aux_sym__repository_start_token17] = ACTIONS(118),
    [sym_comment] = ACTIONS(44),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [aux_sym__repository_start_token17] = ACTIONS(64),
    [sym_comment] = ACTIONS(44),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token4] = ACTIONS(122),
    [aux_sym__repository_start_token13] = ACTIONS(124),
    [aux_sym__repository_start_token16] = ACTIONS(127),
    [aux_sym__repository_start_token17] = ACTIONS(120),
    [sym_comment] = ACTIONS(44),
  },
  [16] = {
    [aux_sym__repository_start_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [aux_sym__repository_start_token17] = ACTIONS(64),
    [sym_comment] = ACTIONS(44),
  },
  [17] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(60),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(62),
    [aux_sym__repository_start_token17] = ACTIONS(64),
    [sym_comment] = ACTIONS(44),
  },
  [18] = {
    [sym_digest] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_sha256_COLON] = ACTIONS(132),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [aux_sym_from_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token4] = ACTIONS(144),
    [aux_sym__repository_start_token17] = ACTIONS(142),
    [sym_comment] = ACTIONS(44),
  },
  [20] = {
    [sym__repository_continued] = STATE(20),
    [aux_sym_repository_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [aux_sym__repository_start_token1] = ACTIONS(149),
    [aux_sym__repository_start_token2] = ACTIONS(146),
    [aux_sym__repository_start_token5] = ACTIONS(152),
    [aux_sym__repository_start_token7] = ACTIONS(152),
    [aux_sym__repository_start_token9] = ACTIONS(155),
    [aux_sym__repository_start_token11] = ACTIONS(155),
    [aux_sym__repository_start_token13] = ACTIONS(158),
    [aux_sym__repository_start_token15] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [21] = {
    [sym__repository_continued] = STATE(28),
    [aux_sym_repository_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [aux_sym__repository_start_token1] = ACTIONS(164),
    [aux_sym__repository_start_token2] = ACTIONS(161),
    [aux_sym__repository_start_token5] = ACTIONS(167),
    [aux_sym__repository_start_token7] = ACTIONS(167),
    [aux_sym__repository_start_token9] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [aux_sym__repository_start_token13] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [sym_comment] = ACTIONS(44),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [aux_sym_from_token2] = ACTIONS(178),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token17] = ACTIONS(176),
    [sym_comment] = ACTIONS(44),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_expose_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(182),
    [aux_sym_from_token2] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(182),
    [aux_sym__repository_start_token5] = ACTIONS(182),
    [aux_sym__repository_start_token8] = ACTIONS(180),
    [aux_sym__repository_start_token17] = ACTIONS(180),
    [sym_comment] = ACTIONS(44),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym_expose_token1] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [aux_sym_from_token1] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [aux_sym_from_token2] = ACTIONS(186),
    [aux_sym__repository_start_token4] = ACTIONS(186),
    [aux_sym__repository_start_token13] = ACTIONS(186),
    [aux_sym__repository_start_token16] = ACTIONS(184),
    [aux_sym__repository_start_token17] = ACTIONS(184),
    [sym_comment] = ACTIONS(44),
  },
  [25] = {
    [sym_digest] = STATE(160),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_sha256_COLON] = ACTIONS(188),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_expose_token1] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [aux_sym_from_token1] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [aux_sym_from_token2] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(192),
    [aux_sym__repository_start_token9] = ACTIONS(192),
    [aux_sym__repository_start_token12] = ACTIONS(190),
    [aux_sym__repository_start_token17] = ACTIONS(190),
    [sym_comment] = ACTIONS(44),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_expose_token1] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [aux_sym_from_token2] = ACTIONS(196),
    [aux_sym__repository_start_token3] = ACTIONS(194),
    [aux_sym__repository_start_token4] = ACTIONS(196),
    [aux_sym__repository_start_token17] = ACTIONS(194),
    [sym_comment] = ACTIONS(44),
  },
  [28] = {
    [sym__repository_continued] = STATE(20),
    [aux_sym_repository_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym__repository_start_token1] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(198),
    [aux_sym__repository_start_token5] = ACTIONS(204),
    [aux_sym__repository_start_token7] = ACTIONS(204),
    [aux_sym__repository_start_token9] = ACTIONS(207),
    [aux_sym__repository_start_token11] = ACTIONS(207),
    [aux_sym__repository_start_token13] = ACTIONS(210),
    [aux_sym__repository_start_token15] = ACTIONS(210),
    [sym_comment] = ACTIONS(44),
  },
  [29] = {
    [sym_digest] = STATE(154),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_sha256_COLON] = ACTIONS(213),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [30] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_sha256_COLON] = ACTIONS(215),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(48),
    [anon_sym_SLASH] = ACTIONS(48),
    [aux_sym_from_token1] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(48),
    [aux_sym_from_token2] = ACTIONS(48),
    [aux_sym__repository_start_token3] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(48),
    [aux_sym__repository_start_token17] = ACTIONS(46),
    [sym_comment] = ACTIONS(44),
  },
  [32] = {
    [aux_sym__repository_start_repeat3] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token4] = ACTIONS(217),
    [aux_sym__repository_start_token9] = ACTIONS(219),
    [aux_sym__repository_start_token12] = ACTIONS(221),
    [sym_comment] = ACTIONS(44),
  },
  [33] = {
    [sym_digest] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [34] = {
    [sym_port_protocol] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [aux_sym__port_part_token1] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(225),
    [aux_sym_from_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [36] = {
    [sym_as_name] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [37] = {
    [aux_sym__repository_start_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [aux_sym_from_token1] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [aux_sym_from_token2] = ACTIONS(108),
    [aux_sym__repository_start_token3] = ACTIONS(239),
    [aux_sym__repository_start_token4] = ACTIONS(241),
    [sym_comment] = ACTIONS(44),
  },
  [38] = {
    [aux_sym__repository_start_repeat2] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token4] = ACTIONS(217),
    [aux_sym__repository_start_token5] = ACTIONS(243),
    [aux_sym__repository_start_token8] = ACTIONS(245),
    [sym_comment] = ACTIONS(44),
  },
  [39] = {
    [aux_sym__repository_start_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token3] = ACTIONS(239),
    [aux_sym__repository_start_token4] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [40] = {
    [sym_as_name] = STATE(171),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [41] = {
    [sym_digest] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [42] = {
    [sym_as_name] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [43] = {
    [aux_sym__repository_start_repeat4] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [aux_sym_from_token2] = ACTIONS(58),
    [aux_sym__repository_start_token4] = ACTIONS(217),
    [aux_sym__repository_start_token13] = ACTIONS(247),
    [aux_sym__repository_start_token16] = ACTIONS(249),
    [sym_comment] = ACTIONS(44),
  },
  [44] = {
    [sym_image] = STATE(122),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [aux_sym__repository_start_token1] = ACTIONS(253),
    [aux_sym__repository_start_token2] = ACTIONS(251),
    [aux_sym__repository_start_token5] = ACTIONS(255),
    [aux_sym__repository_start_token7] = ACTIONS(255),
    [aux_sym__repository_start_token9] = ACTIONS(257),
    [aux_sym__repository_start_token11] = ACTIONS(257),
    [aux_sym__repository_start_token13] = ACTIONS(259),
    [aux_sym__repository_start_token15] = ACTIONS(259),
    [sym_comment] = ACTIONS(44),
  },
  [45] = {
    [sym_digest] = STATE(160),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [aux_sym__repository_start_token1] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(130),
    [aux_sym__repository_start_token5] = ACTIONS(136),
    [aux_sym__repository_start_token7] = ACTIONS(136),
    [aux_sym__repository_start_token9] = ACTIONS(138),
    [aux_sym__repository_start_token11] = ACTIONS(138),
    [aux_sym__repository_start_token13] = ACTIONS(140),
    [aux_sym__repository_start_token15] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [46] = {
    [sym_as_name] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [47] = {
    [sym_tag] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym__repository_start_token1] = ACTIONS(263),
    [aux_sym__repository_start_token2] = ACTIONS(261),
    [aux_sym__repository_start_token5] = ACTIONS(265),
    [aux_sym__repository_start_token7] = ACTIONS(265),
    [aux_sym__repository_start_token9] = ACTIONS(267),
    [aux_sym__repository_start_token11] = ACTIONS(267),
    [aux_sym__repository_start_token13] = ACTIONS(269),
    [aux_sym__repository_start_token15] = ACTIONS(269),
    [sym_comment] = ACTIONS(44),
  },
  [48] = {
    [aux_sym__repository_start_repeat4] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_from_token1] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_from_token2] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(271),
    [aux_sym__repository_start_token13] = ACTIONS(247),
    [aux_sym__repository_start_token16] = ACTIONS(249),
    [sym_comment] = ACTIONS(44),
  },
  [49] = {
    [aux_sym__repository_start_repeat3] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_from_token1] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_from_token2] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(271),
    [aux_sym__repository_start_token9] = ACTIONS(219),
    [aux_sym__repository_start_token12] = ACTIONS(221),
    [sym_comment] = ACTIONS(44),
  },
  [50] = {
    [aux_sym__repository_start_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_from_token1] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_from_token2] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(243),
    [aux_sym__repository_start_token8] = ACTIONS(245),
    [sym_comment] = ACTIONS(44),
  },
  [51] = {
    [aux_sym__repository_start_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [aux_sym_from_token1] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(48),
    [aux_sym_from_token2] = ACTIONS(48),
    [aux_sym__repository_start_token3] = ACTIONS(276),
    [aux_sym__repository_start_token4] = ACTIONS(48),
    [sym_comment] = ACTIONS(44),
  },
  [52] = {
    [aux_sym__repository_start_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_expose_token1] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [aux_sym_from_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [aux_sym_from_token2] = ACTIONS(86),
    [aux_sym__repository_start_token4] = ACTIONS(86),
    [aux_sym__repository_start_token5] = ACTIONS(279),
    [aux_sym__repository_start_token8] = ACTIONS(282),
    [sym_comment] = ACTIONS(44),
  },
  [53] = {
    [sym_tag] = STATE(132),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym__repository_start_token1] = ACTIONS(263),
    [aux_sym__repository_start_token2] = ACTIONS(261),
    [aux_sym__repository_start_token5] = ACTIONS(265),
    [aux_sym__repository_start_token7] = ACTIONS(265),
    [aux_sym__repository_start_token9] = ACTIONS(267),
    [aux_sym__repository_start_token11] = ACTIONS(267),
    [aux_sym__repository_start_token13] = ACTIONS(269),
    [aux_sym__repository_start_token15] = ACTIONS(269),
    [sym_comment] = ACTIONS(44),
  },
  [54] = {
    [aux_sym__repository_start_repeat3] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token4] = ACTIONS(96),
    [aux_sym__repository_start_token9] = ACTIONS(285),
    [aux_sym__repository_start_token12] = ACTIONS(288),
    [sym_comment] = ACTIONS(44),
  },
  [55] = {
    [sym_as_name] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [56] = {
    [aux_sym__repository_start_repeat4] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token4] = ACTIONS(122),
    [aux_sym__repository_start_token13] = ACTIONS(291),
    [aux_sym__repository_start_token16] = ACTIONS(294),
    [sym_comment] = ACTIONS(44),
  },
  [57] = {
    [sym_as_name] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [58] = {
    [sym_as_name] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token1] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(231),
    [aux_sym__repository_start_token7] = ACTIONS(231),
    [aux_sym__repository_start_token9] = ACTIONS(233),
    [aux_sym__repository_start_token11] = ACTIONS(233),
    [aux_sym__repository_start_token13] = ACTIONS(235),
    [aux_sym__repository_start_token15] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [59] = {
    [sym_port_protocol] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [aux_sym__port_part_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(225),
    [aux_sym_from_token1] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [aux_sym__repository_start_repeat2] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [aux_sym_from_token2] = ACTIONS(301),
    [aux_sym__repository_start_token4] = ACTIONS(303),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [61] = {
    [anon_sym_DOLLAR] = ACTIONS(305),
    [aux_sym__repository_start_token1] = ACTIONS(305),
    [aux_sym__repository_start_token2] = ACTIONS(305),
    [aux_sym__repository_start_token5] = ACTIONS(305),
    [aux_sym__repository_start_token7] = ACTIONS(305),
    [aux_sym__repository_start_token9] = ACTIONS(305),
    [aux_sym__repository_start_token11] = ACTIONS(305),
    [aux_sym__repository_start_token13] = ACTIONS(305),
    [aux_sym__repository_start_token15] = ACTIONS(305),
    [sym_comment] = ACTIONS(44),
  },
  [62] = {
    [anon_sym_DOLLAR] = ACTIONS(307),
    [aux_sym__repository_start_token1] = ACTIONS(307),
    [aux_sym__repository_start_token2] = ACTIONS(307),
    [aux_sym__repository_start_token5] = ACTIONS(307),
    [aux_sym__repository_start_token7] = ACTIONS(307),
    [aux_sym__repository_start_token9] = ACTIONS(307),
    [aux_sym__repository_start_token11] = ACTIONS(307),
    [aux_sym__repository_start_token13] = ACTIONS(307),
    [aux_sym__repository_start_token15] = ACTIONS(307),
    [sym_comment] = ACTIONS(44),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_expose_token1] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [aux_sym__port_part_token1] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [aux_sym_from_token1] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [aux_sym__repository_start_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [aux_sym_from_token2] = ACTIONS(311),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(313),
    [sym_comment] = ACTIONS(44),
  },
  [65] = {
    [anon_sym_DOLLAR] = ACTIONS(315),
    [aux_sym__repository_start_token1] = ACTIONS(315),
    [aux_sym__repository_start_token2] = ACTIONS(315),
    [aux_sym__repository_start_token5] = ACTIONS(315),
    [aux_sym__repository_start_token7] = ACTIONS(315),
    [aux_sym__repository_start_token9] = ACTIONS(315),
    [aux_sym__repository_start_token11] = ACTIONS(315),
    [aux_sym__repository_start_token13] = ACTIONS(315),
    [aux_sym__repository_start_token15] = ACTIONS(315),
    [sym_comment] = ACTIONS(44),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_expose_token1] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [aux_sym_from_token2] = ACTIONS(196),
    [aux_sym__repository_start_token3] = ACTIONS(194),
    [aux_sym__repository_start_token4] = ACTIONS(196),
    [sym_comment] = ACTIONS(44),
  },
  [67] = {
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym__repository_start_token1] = ACTIONS(317),
    [aux_sym__repository_start_token2] = ACTIONS(317),
    [aux_sym__repository_start_token5] = ACTIONS(317),
    [aux_sym__repository_start_token7] = ACTIONS(317),
    [aux_sym__repository_start_token9] = ACTIONS(317),
    [aux_sym__repository_start_token11] = ACTIONS(317),
    [aux_sym__repository_start_token13] = ACTIONS(317),
    [aux_sym__repository_start_token15] = ACTIONS(317),
    [sym_comment] = ACTIONS(44),
  },
  [68] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [aux_sym_from_token2] = ACTIONS(301),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(303),
    [sym_comment] = ACTIONS(44),
  },
  [69] = {
    [aux_sym__repository_start_repeat3] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [aux_sym_from_token2] = ACTIONS(301),
    [aux_sym__repository_start_token4] = ACTIONS(303),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [70] = {
    [aux_sym__repository_start_repeat4] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [aux_sym_from_token2] = ACTIONS(301),
    [aux_sym__repository_start_token4] = ACTIONS(303),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [71] = {
    [anon_sym_DOLLAR] = ACTIONS(319),
    [aux_sym__repository_start_token1] = ACTIONS(319),
    [aux_sym__repository_start_token2] = ACTIONS(319),
    [aux_sym__repository_start_token5] = ACTIONS(319),
    [aux_sym__repository_start_token7] = ACTIONS(319),
    [aux_sym__repository_start_token9] = ACTIONS(319),
    [aux_sym__repository_start_token11] = ACTIONS(319),
    [aux_sym__repository_start_token13] = ACTIONS(319),
    [aux_sym__repository_start_token15] = ACTIONS(319),
    [sym_comment] = ACTIONS(44),
  },
  [72] = {
    [anon_sym_DOLLAR] = ACTIONS(321),
    [aux_sym__repository_start_token1] = ACTIONS(321),
    [aux_sym__repository_start_token2] = ACTIONS(321),
    [aux_sym__repository_start_token5] = ACTIONS(321),
    [aux_sym__repository_start_token7] = ACTIONS(321),
    [aux_sym__repository_start_token9] = ACTIONS(321),
    [aux_sym__repository_start_token11] = ACTIONS(321),
    [aux_sym__repository_start_token13] = ACTIONS(321),
    [aux_sym__repository_start_token15] = ACTIONS(321),
    [sym_comment] = ACTIONS(44),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [aux_sym__port_part_token1] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_DOLLAR] = ACTIONS(323),
    [aux_sym__repository_start_token1] = ACTIONS(323),
    [aux_sym__repository_start_token2] = ACTIONS(323),
    [aux_sym__repository_start_token5] = ACTIONS(323),
    [aux_sym__repository_start_token7] = ACTIONS(323),
    [aux_sym__repository_start_token9] = ACTIONS(323),
    [aux_sym__repository_start_token11] = ACTIONS(323),
    [aux_sym__repository_start_token13] = ACTIONS(323),
    [aux_sym__repository_start_token15] = ACTIONS(323),
    [sym_comment] = ACTIONS(44),
  },
  [75] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [aux_sym_from_token2] = ACTIONS(327),
    [aux_sym__repository_start_token4] = ACTIONS(329),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [76] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [aux_sym_from_token2] = ACTIONS(327),
    [aux_sym__repository_start_token4] = ACTIONS(329),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [77] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [aux_sym_from_token2] = ACTIONS(327),
    [aux_sym__repository_start_token4] = ACTIONS(329),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [78] = {
    [anon_sym_DOLLAR] = ACTIONS(331),
    [aux_sym__repository_start_token1] = ACTIONS(331),
    [aux_sym__repository_start_token2] = ACTIONS(331),
    [aux_sym__repository_start_token5] = ACTIONS(331),
    [aux_sym__repository_start_token7] = ACTIONS(331),
    [aux_sym__repository_start_token9] = ACTIONS(331),
    [aux_sym__repository_start_token11] = ACTIONS(331),
    [aux_sym__repository_start_token13] = ACTIONS(331),
    [aux_sym__repository_start_token15] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(48),
    [aux_sym_from_token1] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(48),
    [aux_sym_from_token2] = ACTIONS(48),
    [aux_sym__repository_start_token3] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(48),
    [sym_comment] = ACTIONS(44),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_expose_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(182),
    [aux_sym_from_token2] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(182),
    [aux_sym__repository_start_token5] = ACTIONS(182),
    [aux_sym__repository_start_token8] = ACTIONS(180),
    [sym_comment] = ACTIONS(44),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_expose_token1] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [aux_sym_from_token1] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [aux_sym_from_token2] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(192),
    [aux_sym__repository_start_token9] = ACTIONS(192),
    [aux_sym__repository_start_token12] = ACTIONS(190),
    [sym_comment] = ACTIONS(44),
  },
  [82] = {
    [anon_sym_DOLLAR] = ACTIONS(333),
    [aux_sym__repository_start_token1] = ACTIONS(333),
    [aux_sym__repository_start_token2] = ACTIONS(333),
    [aux_sym__repository_start_token5] = ACTIONS(333),
    [aux_sym__repository_start_token7] = ACTIONS(333),
    [aux_sym__repository_start_token9] = ACTIONS(333),
    [aux_sym__repository_start_token11] = ACTIONS(333),
    [aux_sym__repository_start_token13] = ACTIONS(333),
    [aux_sym__repository_start_token15] = ACTIONS(333),
    [sym_comment] = ACTIONS(44),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym_expose_token1] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(186),
    [aux_sym_from_token1] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [aux_sym_from_token2] = ACTIONS(186),
    [aux_sym__repository_start_token4] = ACTIONS(186),
    [aux_sym__repository_start_token13] = ACTIONS(186),
    [aux_sym__repository_start_token16] = ACTIONS(184),
    [sym_comment] = ACTIONS(44),
  },
  [84] = {
    [anon_sym_DOLLAR] = ACTIONS(335),
    [aux_sym__repository_start_token1] = ACTIONS(335),
    [aux_sym__repository_start_token2] = ACTIONS(335),
    [aux_sym__repository_start_token5] = ACTIONS(335),
    [aux_sym__repository_start_token7] = ACTIONS(335),
    [aux_sym__repository_start_token9] = ACTIONS(335),
    [aux_sym__repository_start_token11] = ACTIONS(335),
    [aux_sym__repository_start_token13] = ACTIONS(335),
    [aux_sym__repository_start_token15] = ACTIONS(335),
    [sym_comment] = ACTIONS(44),
  },
  [85] = {
    [sym__port_spec] = STATE(214),
    [sym_mapped_port] = STATE(214),
    [sym__port] = STATE(107),
    [sym_port] = STATE(192),
    [sym_port_range] = STATE(192),
    [sym__port_part] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [aux_sym_from_token2] = ACTIONS(178),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [sym_comment] = ACTIONS(44),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [aux_sym_from_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token4] = ACTIONS(144),
    [sym_comment] = ACTIONS(44),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [aux_sym__port_part_token1] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_expose_token1] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [aux_sym__port_part_token1] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [aux_sym_from_token1] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [aux_sym__repository_start_repeat4] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym_from_token2] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(345),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_expose_token1] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [aux_sym__port_part_token1] = ACTIONS(347),
    [anon_sym_DOLLAR] = ACTIONS(347),
    [aux_sym_from_token1] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(64),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(56),
    [aux_sym_from_token2] = ACTIONS(56),
    [aux_sym__repository_start_token17] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [aux_sym_expose_token1] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(353),
    [aux_sym_from_token1] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
    [aux_sym_from_token2] = ACTIONS(349),
    [aux_sym__repository_start_token17] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(357),
    [aux_sym__port_part_token1] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
    [aux_sym_from_token2] = ACTIONS(359),
    [aux_sym__repository_start_token17] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [aux_sym__repository_start_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_expose_token1] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym_from_token2] = ACTIONS(367),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(369),
    [sym_comment] = ACTIONS(44),
  },
  [97] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym_from_token2] = ACTIONS(343),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(345),
    [sym_comment] = ACTIONS(44),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(42),
    [aux_sym_from_token1] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(30),
    [aux_sym_from_token2] = ACTIONS(30),
    [aux_sym__repository_start_token17] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__repository_start_repeat2] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym_from_token2] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(345),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [100] = {
    [aux_sym__repository_start_repeat3] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym_from_token2] = ACTIONS(343),
    [aux_sym__repository_start_token4] = ACTIONS(345),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [101] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym_from_token2] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [102] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym_from_token2] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [103] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym_from_token2] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(375),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [aux_sym__port_part_token1] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [aux_sym__port_part_token1] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [aux_sym__repository_start_repeat3] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym__repository_start_token4] = ACTIONS(383),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym_expose_token1] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(387),
    [aux_sym__port_part_token1] = ACTIONS(385),
    [anon_sym_DOLLAR] = ACTIONS(385),
    [aux_sym_from_token1] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [aux_sym__repository_start_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(391),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(393),
    [sym_comment] = ACTIONS(44),
  },
  [109] = {
    [aux_sym__repository_start_repeat2] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym__repository_start_token4] = ACTIONS(383),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [110] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(383),
    [sym_comment] = ACTIONS(44),
  },
  [111] = {
    [sym__directive] = STATE(185),
    [sym_expose] = STATE(185),
    [sym_from] = STATE(185),
    [aux_sym_dockerfile_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(395),
    [aux_sym_expose_token1] = ACTIONS(7),
    [aux_sym_from_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [aux_sym__repository_start_repeat4] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym__repository_start_token4] = ACTIONS(383),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [113] = {
    [sym__port] = STATE(124),
    [sym_port] = STATE(124),
    [sym_port_range] = STATE(124),
    [sym__port_part] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(399),
    [aux_sym_from_token1] = ACTIONS(399),
    [aux_sym__repository_start_token4] = ACTIONS(401),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [115] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(399),
    [aux_sym_from_token1] = ACTIONS(399),
    [aux_sym__repository_start_token4] = ACTIONS(401),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [116] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(399),
    [aux_sym_from_token1] = ACTIONS(399),
    [aux_sym__repository_start_token4] = ACTIONS(401),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [117] = {
    [sym__port] = STATE(181),
    [sym_port] = STATE(181),
    [sym_port_range] = STATE(181),
    [sym__port_part] = STATE(94),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [sym__directive] = STATE(185),
    [sym_expose] = STATE(185),
    [sym_from] = STATE(185),
    [aux_sym_dockerfile_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym_expose_token1] = ACTIONS(405),
    [aux_sym_from_token1] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [aux_sym__port_part_token1] = ACTIONS(411),
    [anon_sym_DOLLAR] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [aux_sym_expose_token1] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(413),
    [aux_sym__port_part_token1] = ACTIONS(413),
    [anon_sym_DOLLAR] = ACTIONS(413),
    [aux_sym_from_token1] = ACTIONS(413),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [aux_sym_expose_token1] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [aux_sym_from_token1] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
    [aux_sym_from_token2] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_expose_token1] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(419),
    [aux_sym_from_token2] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(425),
    [aux_sym_from_token1] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(427),
    [aux_sym_from_token2] = ACTIONS(429),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym_expose_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [aux_sym__port_part_token1] = ACTIONS(431),
    [anon_sym_DOLLAR] = ACTIONS(431),
    [aux_sym_from_token1] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_expose_token1] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(56),
    [aux_sym_from_token1] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(56),
    [aux_sym_from_token2] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [aux_sym_expose_token1] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym__port_part_token1] = ACTIONS(433),
    [anon_sym_DOLLAR] = ACTIONS(433),
    [aux_sym_from_token1] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_expose_token1] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(30),
    [aux_sym_from_token1] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(30),
    [aux_sym_from_token2] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [aux_sym_from_token1] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
    [aux_sym_from_token2] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [aux_sym__repository_start_repeat3] = STATE(11),
    [anon_sym_SLASH] = ACTIONS(435),
    [aux_sym__repository_start_token4] = ACTIONS(437),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [130] = {
    [aux_sym__repository_start_repeat3] = STATE(129),
    [anon_sym_SLASH] = ACTIONS(439),
    [aux_sym__repository_start_token4] = ACTIONS(441),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [131] = {
    [sym_template_expr_less_than_equals] = STATE(240),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(449),
    [aux_sym_from_token2] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(134),
    [aux_sym__repository_start_token14] = ACTIONS(453),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(455),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(457),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(457),
    [sym_comment] = ACTIONS(44),
  },
  [134] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(134),
    [aux_sym__repository_start_token14] = ACTIONS(459),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(461),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(464),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(464),
    [sym_comment] = ACTIONS(44),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(469),
    [aux_sym_from_token2] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [sym_template_expr_less_than_equals] = STATE(232),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(325),
    [aux_sym_from_token1] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [aux_sym_from_token2] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym_expose_token1] = ACTIONS(473),
    [aux_sym_from_token1] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(473),
    [aux_sym_from_token2] = ACTIONS(473),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [sym_template_expr_less_than_equals] = STATE(221),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [140] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(439),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(441),
    [sym_comment] = ACTIONS(44),
  },
  [141] = {
    [aux_sym__repository_start_repeat2] = STATE(144),
    [anon_sym_SLASH] = ACTIONS(439),
    [aux_sym__repository_start_token4] = ACTIONS(441),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [142] = {
    [aux_sym__repository_start_repeat1] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(475),
    [aux_sym__repository_start_token3] = ACTIONS(114),
    [aux_sym__repository_start_token4] = ACTIONS(477),
    [sym_comment] = ACTIONS(44),
  },
  [143] = {
    [aux_sym__repository_start_repeat4] = STATE(153),
    [anon_sym_SLASH] = ACTIONS(439),
    [aux_sym__repository_start_token4] = ACTIONS(441),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [144] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [anon_sym_SLASH] = ACTIONS(435),
    [aux_sym__repository_start_token4] = ACTIONS(437),
    [aux_sym__repository_start_token5] = ACTIONS(66),
    [aux_sym__repository_start_token8] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [145] = {
    [sym_template_expr_less_than_equals] = STATE(228),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [146] = {
    [sym_port] = STATE(216),
    [sym_port_range] = STATE(216),
    [sym__port_part] = STATE(94),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym_template_expr_less_than_equals] = STATE(193),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym_expose_token1] = ACTIONS(479),
    [aux_sym_from_token1] = ACTIONS(479),
    [anon_sym_AT] = ACTIONS(479),
    [aux_sym_from_token2] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [sym_template_expr_less_than_equals] = STATE(199),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [150] = {
    [sym_template_expr_less_than_equals] = STATE(195),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [151] = {
    [sym_template_expr_less_than_equals] = STATE(231),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(133),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(443),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(445),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(299),
    [aux_sym_from_token2] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [anon_sym_SLASH] = ACTIONS(435),
    [aux_sym__repository_start_token4] = ACTIONS(437),
    [aux_sym__repository_start_token13] = ACTIONS(38),
    [aux_sym__repository_start_token16] = ACTIONS(40),
    [sym_comment] = ACTIONS(44),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [aux_sym_from_token2] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_expose_token1] = ACTIONS(481),
    [aux_sym_from_token1] = ACTIONS(481),
    [aux_sym_from_token2] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_expose_token1] = ACTIONS(483),
    [aux_sym_from_token1] = ACTIONS(483),
    [aux_sym_from_token2] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(341),
    [aux_sym_from_token1] = ACTIONS(341),
    [aux_sym_from_token2] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [aux_sym_from_token2] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [aux_sym_from_token2] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [aux_sym_from_token2] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [aux_sym_from_token2] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [aux_sym_from_token2] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
  },
  [163] = {
    [sym_docker_variable] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym__docker_variable] = ACTIONS(499),
    [sym_comment] = ACTIONS(44),
  },
  [164] = {
    [sym_variable_default_value] = STATE(203),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_COLON_DASH] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_expose_token1] = ACTIONS(483),
    [aux_sym_from_token1] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
  },
  [166] = {
    [sym_variable_default_value] = STATE(242),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_COLON_DASH] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
  },
  [167] = {
    [sym_docker_variable] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(507),
    [sym__docker_variable] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym_expose_token1] = ACTIONS(511),
    [aux_sym_from_token1] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
  },
  [170] = {
    [sym_docker_variable] = STATE(105),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym__docker_variable] = ACTIONS(499),
    [sym_comment] = ACTIONS(44),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [aux_sym_expose_token1] = ACTIONS(515),
    [aux_sym_from_token1] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
  },
  [173] = {
    [sym_docker_variable] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(507),
    [sym__docker_variable] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(397),
    [aux_sym_from_token1] = ACTIONS(397),
    [sym_comment] = ACTIONS(3),
  },
  [175] = {
    [sym_docker_variable] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(507),
    [sym__docker_variable] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [176] = {
    [sym_docker_variable] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(517),
    [sym__docker_variable] = ACTIONS(519),
    [sym_comment] = ACTIONS(44),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(3),
  },
  [178] = {
    [sym_docker_variable] = STATE(142),
    [anon_sym_LBRACE] = ACTIONS(507),
    [sym__docker_variable] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_expose_token1] = ACTIONS(11),
    [aux_sym_from_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [180] = {
    [sym_docker_variable] = STATE(108),
    [anon_sym_LBRACE] = ACTIONS(507),
    [sym__docker_variable] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_expose_token1] = ACTIONS(521),
    [aux_sym_from_token1] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
  },
  [182] = {
    [anon_sym_DOLLAR] = ACTIONS(523),
    [aux_sym_port_protocol_token1] = ACTIONS(525),
    [aux_sym_port_protocol_token2] = ACTIONS(525),
    [sym_comment] = ACTIONS(3),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(379),
    [aux_sym_from_token1] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
  },
  [186] = {
    [sym_variable_default_value] = STATE(237),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_COLON_DASH] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
  },
  [187] = {
    [sym_docker_variable] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(507),
    [sym__docker_variable] = ACTIONS(509),
    [sym_comment] = ACTIONS(44),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
  },
  [190] = {
    [sym__port_part] = STATE(120),
    [aux_sym__port_part_token1] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [191] = {
    [sym_docker_variable] = STATE(79),
    [anon_sym_LBRACE] = ACTIONS(517),
    [sym__docker_variable] = ACTIONS(519),
    [sym_comment] = ACTIONS(44),
  },
  [192] = {
    [anon_sym_DQUOTE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(536),
    [sym_comment] = ACTIONS(3),
  },
  [193] = {
    [aux_sym__repository_start_token14] = ACTIONS(538),
    [sym_comment] = ACTIONS(3),
  },
  [194] = {
    [aux_sym__repository_start_token6] = ACTIONS(540),
    [sym_comment] = ACTIONS(3),
  },
  [195] = {
    [aux_sym__repository_start_token14] = ACTIONS(542),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [aux_sym__repository_start_token10] = ACTIONS(544),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [sym__docker_variable] = ACTIONS(546),
    [sym_comment] = ACTIONS(44),
  },
  [198] = {
    [anon_sym_SLASH] = ACTIONS(548),
    [sym_comment] = ACTIONS(3),
  },
  [199] = {
    [aux_sym__repository_start_token14] = ACTIONS(550),
    [sym_comment] = ACTIONS(3),
  },
  [200] = {
    [sym_template_expr_curly_braces] = ACTIONS(552),
    [sym_comment] = ACTIONS(44),
  },
  [201] = {
    [sym_template_expr_percent_signs] = ACTIONS(554),
    [sym_comment] = ACTIONS(44),
  },
  [202] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(556),
    [sym_comment] = ACTIONS(44),
  },
  [203] = {
    [anon_sym_RBRACE] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
  },
  [204] = {
    [sym_template_expr_curly_braces] = ACTIONS(560),
    [sym_comment] = ACTIONS(44),
  },
  [205] = {
    [sym_template_expr_percent_signs] = ACTIONS(562),
    [sym_comment] = ACTIONS(44),
  },
  [206] = {
    [sym_template_expr_curly_braces] = ACTIONS(564),
    [sym_comment] = ACTIONS(44),
  },
  [207] = {
    [sym_template_expr_percent_signs] = ACTIONS(566),
    [sym_comment] = ACTIONS(44),
  },
  [208] = {
    [sym_template_expr_curly_braces] = ACTIONS(568),
    [sym_comment] = ACTIONS(44),
  },
  [209] = {
    [sym_template_expr_percent_signs] = ACTIONS(570),
    [sym_comment] = ACTIONS(44),
  },
  [210] = {
    [anon_sym_SLASH] = ACTIONS(572),
    [sym_comment] = ACTIONS(3),
  },
  [211] = {
    [aux_sym__repository_start_token6] = ACTIONS(574),
    [sym_comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_SLASH] = ACTIONS(576),
    [sym_comment] = ACTIONS(3),
  },
  [213] = {
    [sym_template_expr_curly_braces] = ACTIONS(578),
    [sym_comment] = ACTIONS(44),
  },
  [214] = {
    [anon_sym_DQUOTE] = ACTIONS(580),
    [sym_comment] = ACTIONS(3),
  },
  [215] = {
    [sym_template_expr_percent_signs] = ACTIONS(582),
    [sym_comment] = ACTIONS(44),
  },
  [216] = {
    [anon_sym_DQUOTE] = ACTIONS(584),
    [sym_comment] = ACTIONS(3),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [sym_comment] = ACTIONS(3),
  },
  [218] = {
    [aux_sym__repository_start_token10] = ACTIONS(588),
    [sym_comment] = ACTIONS(3),
  },
  [219] = {
    [aux_sym__repository_start_token6] = ACTIONS(590),
    [sym_comment] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_RBRACE] = ACTIONS(592),
    [sym_comment] = ACTIONS(3),
  },
  [221] = {
    [aux_sym__repository_start_token14] = ACTIONS(594),
    [sym_comment] = ACTIONS(3),
  },
  [222] = {
    [sym_template_expr_percent_signs] = ACTIONS(596),
    [sym_comment] = ACTIONS(44),
  },
  [223] = {
    [aux_sym__repository_start_token10] = ACTIONS(598),
    [sym_comment] = ACTIONS(3),
  },
  [224] = {
    [sym_template_expr_percent_signs] = ACTIONS(600),
    [sym_comment] = ACTIONS(44),
  },
  [225] = {
    [sym_template_expr_curly_braces] = ACTIONS(602),
    [sym_comment] = ACTIONS(44),
  },
  [226] = {
    [sym_template_expr_curly_braces] = ACTIONS(604),
    [sym_comment] = ACTIONS(44),
  },
  [227] = {
    [aux_sym__repository_start_token6] = ACTIONS(606),
    [sym_comment] = ACTIONS(3),
  },
  [228] = {
    [aux_sym__repository_start_token14] = ACTIONS(608),
    [sym_comment] = ACTIONS(3),
  },
  [229] = {
    [aux_sym__repository_start_token10] = ACTIONS(610),
    [sym_comment] = ACTIONS(3),
  },
  [230] = {
    [aux_sym__repository_start_token6] = ACTIONS(612),
    [sym_comment] = ACTIONS(3),
  },
  [231] = {
    [aux_sym__repository_start_token14] = ACTIONS(614),
    [sym_comment] = ACTIONS(3),
  },
  [232] = {
    [aux_sym__repository_start_token14] = ACTIONS(616),
    [sym_comment] = ACTIONS(3),
  },
  [233] = {
    [aux_sym__repository_start_token10] = ACTIONS(618),
    [sym_comment] = ACTIONS(3),
  },
  [234] = {
    [aux_sym__repository_start_token10] = ACTIONS(620),
    [sym_comment] = ACTIONS(3),
  },
  [235] = {
    [aux_sym__repository_start_token6] = ACTIONS(622),
    [sym_comment] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_SLASH] = ACTIONS(624),
    [sym_comment] = ACTIONS(3),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(626),
    [sym_comment] = ACTIONS(3),
  },
  [238] = {
    [aux_sym__repository_start_token6] = ACTIONS(628),
    [sym_comment] = ACTIONS(3),
  },
  [239] = {
    [aux_sym__repository_start_token10] = ACTIONS(630),
    [sym_comment] = ACTIONS(3),
  },
  [240] = {
    [aux_sym__repository_start_token14] = ACTIONS(632),
    [sym_comment] = ACTIONS(3),
  },
  [241] = {
    [aux_sym__repository_start_token6] = ACTIONS(634),
    [sym_comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_RBRACE] = ACTIONS(636),
    [sym_comment] = ACTIONS(3),
  },
  [243] = {
    [sym__docker_variable] = ACTIONS(638),
    [sym_comment] = ACTIONS(44),
  },
  [244] = {
    [sym_template_expr_curly_braces] = ACTIONS(640),
    [sym_comment] = ACTIONS(44),
  },
  [245] = {
    [sym_template_expr_percent_signs] = ACTIONS(642),
    [sym_comment] = ACTIONS(44),
  },
  [246] = {
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [sym_comment] = ACTIONS(3),
  },
  [247] = {
    [sym__docker_variable] = ACTIONS(646),
    [sym_comment] = ACTIONS(44),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(12),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [13] = {.count = 1, .reusable = true}, SHIFT(85),
  [15] = {.count = 1, .reusable = true}, SHIFT(59),
  [17] = {.count = 1, .reusable = true}, SHIFT(163),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(85),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(59),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(163),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [32] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [34] = {.count = 1, .reusable = false}, SHIFT(62),
  [36] = {.count = 1, .reusable = false}, SHIFT(93),
  [38] = {.count = 1, .reusable = false}, SHIFT(147),
  [40] = {.count = 1, .reusable = true}, SHIFT(147),
  [42] = {.count = 1, .reusable = true}, SHIFT(62),
  [44] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [48] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(187),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(187),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [60] = {.count = 1, .reusable = false}, SHIFT(84),
  [62] = {.count = 1, .reusable = false}, SHIFT(98),
  [64] = {.count = 1, .reusable = true}, SHIFT(84),
  [66] = {.count = 1, .reusable = false}, SHIFT(204),
  [68] = {.count = 1, .reusable = true}, SHIFT(204),
  [70] = {.count = 1, .reusable = false}, SHIFT(173),
  [72] = {.count = 1, .reusable = false}, SHIFT(95),
  [74] = {.count = 1, .reusable = false}, SHIFT(225),
  [76] = {.count = 1, .reusable = false}, SHIFT(224),
  [78] = {.count = 1, .reusable = false}, SHIFT(150),
  [80] = {.count = 1, .reusable = false}, SHIFT(207),
  [82] = {.count = 1, .reusable = true}, SHIFT(207),
  [84] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [86] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(204),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(204),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [98] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(207),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(207),
  [104] = {.count = 1, .reusable = true}, SHIFT(117),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [110] = {.count = 1, .reusable = false}, SHIFT(187),
  [112] = {.count = 1, .reusable = false}, SHIFT(67),
  [114] = {.count = 1, .reusable = true}, SHIFT(187),
  [116] = {.count = 1, .reusable = false}, SHIFT(92),
  [118] = {.count = 1, .reusable = true}, SHIFT(67),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [122] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(147),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(147),
  [130] = {.count = 1, .reusable = false}, SHIFT(167),
  [132] = {.count = 1, .reusable = false}, SHIFT(33),
  [134] = {.count = 1, .reusable = false}, SHIFT(155),
  [136] = {.count = 1, .reusable = false}, SHIFT(206),
  [138] = {.count = 1, .reusable = false}, SHIFT(205),
  [140] = {.count = 1, .reusable = false}, SHIFT(145),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(178),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(212),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(213),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(215),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(136),
  [161] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(178),
  [164] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(212),
  [167] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(213),
  [170] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(215),
  [173] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(136),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [188] = {.count = 1, .reusable = false}, SHIFT(41),
  [190] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [198] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(178),
  [201] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(212),
  [204] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(213),
  [207] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(215),
  [210] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(136),
  [213] = {.count = 1, .reusable = false}, SHIFT(35),
  [215] = {.count = 1, .reusable = false}, SHIFT(45),
  [217] = {.count = 1, .reusable = false}, SHIFT(127),
  [219] = {.count = 1, .reusable = false}, SHIFT(245),
  [221] = {.count = 1, .reusable = true}, SHIFT(245),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(182),
  [227] = {.count = 1, .reusable = false}, SHIFT(180),
  [229] = {.count = 1, .reusable = false}, SHIFT(189),
  [231] = {.count = 1, .reusable = false}, SHIFT(200),
  [233] = {.count = 1, .reusable = false}, SHIFT(201),
  [235] = {.count = 1, .reusable = false}, SHIFT(139),
  [237] = {.count = 1, .reusable = false}, SHIFT(191),
  [239] = {.count = 1, .reusable = true}, SHIFT(191),
  [241] = {.count = 1, .reusable = false}, SHIFT(125),
  [243] = {.count = 1, .reusable = false}, SHIFT(244),
  [245] = {.count = 1, .reusable = true}, SHIFT(244),
  [247] = {.count = 1, .reusable = false}, SHIFT(131),
  [249] = {.count = 1, .reusable = true}, SHIFT(131),
  [251] = {.count = 1, .reusable = false}, SHIFT(176),
  [253] = {.count = 1, .reusable = false}, SHIFT(128),
  [255] = {.count = 1, .reusable = false}, SHIFT(208),
  [257] = {.count = 1, .reusable = false}, SHIFT(209),
  [259] = {.count = 1, .reusable = false}, SHIFT(149),
  [261] = {.count = 1, .reusable = false}, SHIFT(175),
  [263] = {.count = 1, .reusable = false}, SHIFT(148),
  [265] = {.count = 1, .reusable = false}, SHIFT(226),
  [267] = {.count = 1, .reusable = false}, SHIFT(222),
  [269] = {.count = 1, .reusable = false}, SHIFT(151),
  [271] = {.count = 1, .reusable = false}, SHIFT(121),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(191),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(191),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(244),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(244),
  [285] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(245),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(245),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(131),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(131),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [303] = {.count = 1, .reusable = false}, SHIFT(137),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [313] = {.count = 1, .reusable = false}, SHIFT(152),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [329] = {.count = 1, .reusable = false}, SHIFT(138),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [337] = {.count = 1, .reusable = true}, SHIFT(146),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [345] = {.count = 1, .reusable = false}, SHIFT(159),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [353] = {.count = 1, .reusable = true}, SHIFT(71),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [357] = {.count = 1, .reusable = true}, SHIFT(190),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [363] = {.count = 1, .reusable = true}, SHIFT(72),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [369] = {.count = 1, .reusable = false}, SHIFT(157),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [375] = {.count = 1, .reusable = false}, SHIFT(158),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [383] = {.count = 1, .reusable = false}, SHIFT(174),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(113),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [393] = {.count = 1, .reusable = false}, SHIFT(183),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [401] = {.count = 1, .reusable = false}, SHIFT(169),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(12),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(8),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [417] = {.count = 1, .reusable = true}, SHIFT(47),
  [419] = {.count = 1, .reusable = true}, SHIFT(30),
  [421] = {.count = 1, .reusable = true}, SHIFT(57),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [425] = {.count = 1, .reusable = true}, SHIFT(53),
  [427] = {.count = 1, .reusable = true}, SHIFT(29),
  [429] = {.count = 1, .reusable = true}, SHIFT(55),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [435] = {.count = 1, .reusable = false}, SHIFT(74),
  [437] = {.count = 1, .reusable = false}, SHIFT(198),
  [439] = {.count = 1, .reusable = false}, SHIFT(61),
  [441] = {.count = 1, .reusable = false}, SHIFT(210),
  [443] = {.count = 1, .reusable = true}, SHIFT(133),
  [445] = {.count = 1, .reusable = false}, SHIFT(133),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [449] = {.count = 1, .reusable = true}, SHIFT(25),
  [451] = {.count = 1, .reusable = true}, SHIFT(58),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [455] = {.count = 1, .reusable = true}, SHIFT(134),
  [457] = {.count = 1, .reusable = false}, SHIFT(134),
  [459] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(134),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(134),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [469] = {.count = 1, .reusable = true}, SHIFT(18),
  [471] = {.count = 1, .reusable = true}, SHIFT(46),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [475] = {.count = 1, .reusable = false}, SHIFT(65),
  [477] = {.count = 1, .reusable = false}, SHIFT(236),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [485] = {.count = 1, .reusable = true}, SHIFT(40),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [491] = {.count = 1, .reusable = true}, SHIFT(36),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [495] = {.count = 1, .reusable = true}, SHIFT(42),
  [497] = {.count = 1, .reusable = true}, SHIFT(197),
  [499] = {.count = 1, .reusable = true}, SHIFT(73),
  [501] = {.count = 1, .reusable = true}, SHIFT(88),
  [503] = {.count = 1, .reusable = true}, SHIFT(202),
  [505] = {.count = 1, .reusable = true}, SHIFT(87),
  [507] = {.count = 1, .reusable = true}, SHIFT(243),
  [509] = {.count = 1, .reusable = true}, SHIFT(22),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [517] = {.count = 1, .reusable = true}, SHIFT(247),
  [519] = {.count = 1, .reusable = true}, SHIFT(86),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [523] = {.count = 1, .reusable = true}, SHIFT(170),
  [525] = {.count = 1, .reusable = true}, SHIFT(91),
  [527] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [529] = {.count = 1, .reusable = true}, SHIFT(19),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [533] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(119),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [538] = {.count = 1, .reusable = true}, SHIFT(24),
  [540] = {.count = 1, .reusable = true}, SHIFT(16),
  [542] = {.count = 1, .reusable = true}, SHIFT(6),
  [544] = {.count = 1, .reusable = true}, SHIFT(14),
  [546] = {.count = 1, .reusable = true}, SHIFT(164),
  [548] = {.count = 1, .reusable = true}, SHIFT(78),
  [550] = {.count = 1, .reusable = true}, SHIFT(43),
  [552] = {.count = 1, .reusable = true}, SHIFT(227),
  [554] = {.count = 1, .reusable = true}, SHIFT(223),
  [556] = {.count = 1, .reusable = true}, SHIFT(220),
  [558] = {.count = 1, .reusable = true}, SHIFT(63),
  [560] = {.count = 1, .reusable = true}, SHIFT(219),
  [562] = {.count = 1, .reusable = true}, SHIFT(229),
  [564] = {.count = 1, .reusable = true}, SHIFT(230),
  [566] = {.count = 1, .reusable = true}, SHIFT(218),
  [568] = {.count = 1, .reusable = true}, SHIFT(241),
  [570] = {.count = 1, .reusable = true}, SHIFT(246),
  [572] = {.count = 1, .reusable = true}, SHIFT(74),
  [574] = {.count = 1, .reusable = true}, SHIFT(141),
  [576] = {.count = 1, .reusable = true}, SHIFT(82),
  [578] = {.count = 1, .reusable = true}, SHIFT(211),
  [580] = {.count = 1, .reusable = true}, SHIFT(126),
  [582] = {.count = 1, .reusable = true}, SHIFT(233),
  [584] = {.count = 1, .reusable = true}, SHIFT(119),
  [586] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [588] = {.count = 1, .reusable = true}, SHIFT(26),
  [590] = {.count = 1, .reusable = true}, SHIFT(23),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [594] = {.count = 1, .reusable = true}, SHIFT(112),
  [596] = {.count = 1, .reusable = true}, SHIFT(234),
  [598] = {.count = 1, .reusable = true}, SHIFT(106),
  [600] = {.count = 1, .reusable = true}, SHIFT(196),
  [602] = {.count = 1, .reusable = true}, SHIFT(194),
  [604] = {.count = 1, .reusable = true}, SHIFT(235),
  [606] = {.count = 1, .reusable = true}, SHIFT(109),
  [608] = {.count = 1, .reusable = true}, SHIFT(90),
  [610] = {.count = 1, .reusable = true}, SHIFT(100),
  [612] = {.count = 1, .reusable = true}, SHIFT(99),
  [614] = {.count = 1, .reusable = true}, SHIFT(70),
  [616] = {.count = 1, .reusable = true}, SHIFT(143),
  [618] = {.count = 1, .reusable = true}, SHIFT(130),
  [620] = {.count = 1, .reusable = true}, SHIFT(69),
  [622] = {.count = 1, .reusable = true}, SHIFT(60),
  [624] = {.count = 1, .reusable = true}, SHIFT(61),
  [626] = {.count = 1, .reusable = true}, SHIFT(27),
  [628] = {.count = 1, .reusable = true}, SHIFT(80),
  [630] = {.count = 1, .reusable = true}, SHIFT(81),
  [632] = {.count = 1, .reusable = true}, SHIFT(83),
  [634] = {.count = 1, .reusable = true}, SHIFT(38),
  [636] = {.count = 1, .reusable = true}, SHIFT(66),
  [638] = {.count = 1, .reusable = true}, SHIFT(186),
  [640] = {.count = 1, .reusable = true}, SHIFT(238),
  [642] = {.count = 1, .reusable = true}, SHIFT(239),
  [644] = {.count = 1, .reusable = true}, SHIFT(32),
  [646] = {.count = 1, .reusable = true}, SHIFT(166),
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
