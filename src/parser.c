#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 253
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  aux_sym_run_token1 = 1,
  aux_sym_run_token2 = 2,
  aux_sym_run_token3 = 3,
  aux_sym_run_token4 = 4,
  aux_sym_run_token5 = 5,
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
  sym_dockerfile = 48,
  sym__directive = 49,
  sym_run = 50,
  sym_expose = 51,
  sym__port_spec = 52,
  sym_mapped_port = 53,
  sym_mapped_no_lhs = 54,
  sym__port = 55,
  sym_port = 56,
  sym_port_range = 57,
  sym__port_part = 58,
  sym_port_protocol = 59,
  sym_from = 60,
  sym_repository = 61,
  sym__repository_start = 62,
  sym__repository_continued = 63,
  sym_image = 64,
  sym_tag = 65,
  sym_digest = 66,
  sym_as_name = 67,
  sym_docker_variable = 68,
  sym_variable_default_value = 69,
  sym_variable_this_or_null = 70,
  sym_template_expr_less_than_equals = 71,
  aux_sym_dockerfile_repeat1 = 72,
  aux_sym_run_repeat1 = 73,
  aux_sym_expose_repeat1 = 74,
  aux_sym_repository_repeat1 = 75,
  aux_sym__repository_start_repeat1 = 76,
  aux_sym__repository_start_repeat2 = 77,
  aux_sym__repository_start_repeat3 = 78,
  aux_sym__repository_start_repeat4 = 79,
  aux_sym_template_expr_less_than_equals_repeat1 = 80,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_run_token1] = "run_token1",
  [aux_sym_run_token2] = "run_token2",
  [aux_sym_run_token3] = "run_token3",
  [aux_sym_run_token4] = "run_token4",
  [aux_sym_run_token5] = "run_token5",
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
  [sym_dockerfile] = "dockerfile",
  [sym__directive] = "_directive",
  [sym_run] = "run",
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
  [aux_sym_run_token5] = {
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
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(51);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(161);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(161);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(182);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 25:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 26:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 27:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 28:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(209);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(207);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(223);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(226);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(198);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '\\') SKIP(80)
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(198);
      if (lookahead == '\\') SKIP(80)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\\') SKIP(82)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 45:
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '5') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(205);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(205);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(205);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(204);
      END_STATE();
    case 57:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(209);
      END_STATE();
    case 58:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(207);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 62:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 63:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(84);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 83:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(230);
      END_STATE();
    case 84:
      if (lookahead != 0 &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R') ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == 'R' ||
          lookahead == '\\') ADVANCE(102);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == 'R' ||
          lookahead == '\\') ADVANCE(102);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_run_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != 'R' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_run_token3);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_run_token4);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_run_token5);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '6') ADVANCE(122);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == '{') ADVANCE(191);
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
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(191);
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
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(135);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(129);
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(202);
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(29);
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
          lookahead != '}') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(160);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(57);
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (lookahead == '{') ADVANCE(194);
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 179:
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
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 180:
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
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 181:
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
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 182:
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
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(186);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '%') ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__repository_start_token17);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(185);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(188);
      END_STATE();
    case 215:
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
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_comment);
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
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 42},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 43},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 43},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 43},
  [108] = {.lex_state = 43},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 33},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 33},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 33},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 33},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 33},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 33},
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
  [183] = {.lex_state = 44},
  [184] = {.lex_state = 44},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 44},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 44},
  [189] = {.lex_state = 44},
  [190] = {.lex_state = 44},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 44},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 44},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 37},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 37},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 39},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 39},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 39},
  [217] = {.lex_state = 44},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 37},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 37},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 37},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 37},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 35},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 35},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 44},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 37},
  [251] = {.lex_state = 37},
  [252] = {.lex_state = 44},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_run_token1] = ACTIONS(1),
    [aux_sym_run_token3] = ACTIONS(1),
    [aux_sym_run_token4] = ACTIONS(1),
    [aux_sym_run_token5] = ACTIONS(1),
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
    [sym_dockerfile] = STATE(239),
    [sym__directive] = STATE(173),
    [sym_run] = STATE(173),
    [sym_expose] = STATE(173),
    [sym_from] = STATE(173),
    [aux_sym_dockerfile_repeat1] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_run_token1] = ACTIONS(7),
    [aux_sym_expose_token1] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__port_spec] = STATE(3),
    [sym_mapped_port] = STATE(3),
    [sym__port] = STATE(113),
    [sym_port] = STATE(113),
    [sym_port_range] = STATE(113),
    [sym__port_part] = STATE(83),
    [aux_sym_expose_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_run_token1] = ACTIONS(13),
    [aux_sym_expose_token1] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_from_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__port_spec] = STATE(3),
    [sym_mapped_port] = STATE(3),
    [sym__port] = STATE(113),
    [sym_port] = STATE(113),
    [sym_port_range] = STATE(113),
    [sym__port_part] = STATE(83),
    [aux_sym_expose_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_run_token1] = ACTIONS(21),
    [aux_sym_expose_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym__port_part_token1] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [aux_sym_from_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__repository_start_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_run_token1] = ACTIONS(34),
    [aux_sym_expose_token1] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [anon_sym_SLASH] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [aux_sym_from_token2] = ACTIONS(34),
    [aux_sym__repository_start_token3] = ACTIONS(39),
    [aux_sym__repository_start_token4] = ACTIONS(34),
    [aux_sym__repository_start_token17] = ACTIONS(32),
    [sym_comment] = ACTIONS(42),
  },
  [5] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [anon_sym_SLASH] = ACTIONS(48),
    [aux_sym_from_token1] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_from_token2] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(50),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [aux_sym__repository_start_token17] = ACTIONS(56),
    [sym_comment] = ACTIONS(42),
  },
  [6] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [anon_sym_SLASH] = ACTIONS(48),
    [aux_sym_from_token1] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_from_token2] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(50),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [aux_sym__repository_start_token17] = ACTIONS(56),
    [sym_comment] = ACTIONS(42),
  },
  [7] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [anon_sym_SLASH] = ACTIONS(48),
    [aux_sym_from_token1] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_from_token2] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(50),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [aux_sym__repository_start_token17] = ACTIONS(56),
    [sym_comment] = ACTIONS(42),
  },
  [8] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_run_token1] = ACTIONS(68),
    [aux_sym_expose_token1] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [aux_sym_from_token1] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [aux_sym_from_token2] = ACTIONS(68),
    [aux_sym__repository_start_token4] = ACTIONS(68),
    [aux_sym__repository_start_token5] = ACTIONS(70),
    [aux_sym__repository_start_token8] = ACTIONS(73),
    [aux_sym__repository_start_token17] = ACTIONS(66),
    [sym_comment] = ACTIONS(42),
  },
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_run_token1] = ACTIONS(78),
    [aux_sym_expose_token1] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [aux_sym_from_token2] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(78),
    [aux_sym__repository_start_token9] = ACTIONS(80),
    [aux_sym__repository_start_token12] = ACTIONS(83),
    [aux_sym__repository_start_token17] = ACTIONS(76),
    [sym_comment] = ACTIONS(42),
  },
  [10] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym_run_token1] = ACTIONS(88),
    [aux_sym_expose_token1] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [aux_sym_from_token1] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [aux_sym_from_token2] = ACTIONS(88),
    [aux_sym__repository_start_token4] = ACTIONS(88),
    [aux_sym__repository_start_token13] = ACTIONS(90),
    [aux_sym__repository_start_token16] = ACTIONS(93),
    [aux_sym__repository_start_token17] = ACTIONS(86),
    [sym_comment] = ACTIONS(42),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [aux_sym__repository_start_token17] = ACTIONS(104),
    [sym_comment] = ACTIONS(42),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [aux_sym__repository_start_token17] = ACTIONS(104),
    [sym_comment] = ACTIONS(42),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [aux_sym__repository_start_token17] = ACTIONS(104),
    [sym_comment] = ACTIONS(42),
  },
  [14] = {
    [aux_sym__repository_start_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(102),
    [aux_sym__repository_start_token17] = ACTIONS(104),
    [sym_comment] = ACTIONS(42),
  },
  [15] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(114),
    [aux_sym_from_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
    [aux_sym_from_token2] = ACTIONS(112),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(116),
    [aux_sym__repository_start_token17] = ACTIONS(118),
    [sym_comment] = ACTIONS(42),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_run_token1] = ACTIONS(122),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token4] = ACTIONS(122),
    [aux_sym__repository_start_token9] = ACTIONS(122),
    [aux_sym__repository_start_token12] = ACTIONS(120),
    [aux_sym__repository_start_token17] = ACTIONS(120),
    [sym_comment] = ACTIONS(42),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_run_token1] = ACTIONS(34),
    [aux_sym_expose_token1] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [anon_sym_SLASH] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [aux_sym_from_token2] = ACTIONS(34),
    [aux_sym__repository_start_token3] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(34),
    [aux_sym__repository_start_token17] = ACTIONS(32),
    [sym_comment] = ACTIONS(42),
  },
  [18] = {
    [sym_repository] = STATE(69),
    [sym__repository_start] = STATE(30),
    [sym_image] = STATE(125),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym__repository_start_token1] = ACTIONS(126),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token5] = ACTIONS(128),
    [aux_sym__repository_start_token7] = ACTIONS(128),
    [aux_sym__repository_start_token9] = ACTIONS(130),
    [aux_sym__repository_start_token11] = ACTIONS(130),
    [aux_sym__repository_start_token13] = ACTIONS(132),
    [aux_sym__repository_start_token15] = ACTIONS(132),
    [sym_comment] = ACTIONS(42),
  },
  [19] = {
    [sym__port_spec] = STATE(2),
    [sym_mapped_port] = STATE(2),
    [sym_mapped_no_lhs] = STATE(175),
    [sym__port] = STATE(113),
    [sym_port] = STATE(113),
    [sym_port_range] = STATE(113),
    [sym__port_part] = STATE(83),
    [aux_sym_expose_repeat1] = STATE(2),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(134),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(138),
    [aux_sym_expose_token1] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [aux_sym_from_token1] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token4] = ACTIONS(138),
    [aux_sym__repository_start_token17] = ACTIONS(136),
    [sym_comment] = ACTIONS(42),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_from_token2] = ACTIONS(142),
    [aux_sym__repository_start_token3] = ACTIONS(140),
    [aux_sym__repository_start_token4] = ACTIONS(142),
    [aux_sym__repository_start_token17] = ACTIONS(140),
    [sym_comment] = ACTIONS(42),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(144),
    [aux_sym__repository_start_token4] = ACTIONS(146),
    [aux_sym__repository_start_token17] = ACTIONS(144),
    [sym_comment] = ACTIONS(42),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [aux_sym_run_token1] = ACTIONS(150),
    [aux_sym_expose_token1] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_from_token2] = ACTIONS(150),
    [aux_sym__repository_start_token4] = ACTIONS(150),
    [aux_sym__repository_start_token5] = ACTIONS(150),
    [aux_sym__repository_start_token8] = ACTIONS(148),
    [aux_sym__repository_start_token17] = ACTIONS(148),
    [sym_comment] = ACTIONS(42),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_from_token2] = ACTIONS(154),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token13] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(152),
    [aux_sym__repository_start_token17] = ACTIONS(152),
    [sym_comment] = ACTIONS(42),
  },
  [25] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [anon_sym_sha256_COLON] = ACTIONS(158),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [26] = {
    [sym__repository_continued] = STATE(35),
    [aux_sym_repository_repeat1] = STATE(35),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [aux_sym__repository_start_token1] = ACTIONS(171),
    [aux_sym__repository_start_token2] = ACTIONS(168),
    [aux_sym__repository_start_token5] = ACTIONS(174),
    [aux_sym__repository_start_token7] = ACTIONS(174),
    [aux_sym__repository_start_token9] = ACTIONS(177),
    [aux_sym__repository_start_token11] = ACTIONS(177),
    [aux_sym__repository_start_token13] = ACTIONS(180),
    [aux_sym__repository_start_token15] = ACTIONS(180),
    [sym_comment] = ACTIONS(42),
  },
  [27] = {
    [aux_sym__repository_start_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_run_token1] = ACTIONS(68),
    [aux_sym_expose_token1] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [aux_sym_from_token1] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [aux_sym_from_token2] = ACTIONS(68),
    [aux_sym__repository_start_token4] = ACTIONS(68),
    [aux_sym__repository_start_token5] = ACTIONS(183),
    [aux_sym__repository_start_token8] = ACTIONS(186),
    [sym_comment] = ACTIONS(42),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_run_token1] = ACTIONS(34),
    [aux_sym_expose_token1] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [aux_sym_from_token2] = ACTIONS(34),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [29] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [30] = {
    [sym__repository_continued] = STATE(26),
    [aux_sym_repository_repeat1] = STATE(26),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym__repository_start_token1] = ACTIONS(204),
    [aux_sym__repository_start_token2] = ACTIONS(201),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(207),
    [aux_sym__repository_start_token9] = ACTIONS(210),
    [aux_sym__repository_start_token11] = ACTIONS(210),
    [aux_sym__repository_start_token13] = ACTIONS(213),
    [aux_sym__repository_start_token15] = ACTIONS(213),
    [sym_comment] = ACTIONS(42),
  },
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token5] = ACTIONS(216),
    [aux_sym__repository_start_token8] = ACTIONS(218),
    [sym_comment] = ACTIONS(42),
  },
  [32] = {
    [aux_sym__repository_start_repeat3] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token9] = ACTIONS(220),
    [aux_sym__repository_start_token12] = ACTIONS(222),
    [sym_comment] = ACTIONS(42),
  },
  [33] = {
    [aux_sym__repository_start_repeat4] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(98),
    [aux_sym_expose_token1] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [aux_sym_from_token2] = ACTIONS(98),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token13] = ACTIONS(224),
    [aux_sym__repository_start_token16] = ACTIONS(226),
    [sym_comment] = ACTIONS(42),
  },
  [34] = {
    [sym_digest] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [anon_sym_sha256_COLON] = ACTIONS(228),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [35] = {
    [sym__repository_continued] = STATE(35),
    [aux_sym_repository_repeat1] = STATE(35),
    [anon_sym_DOLLAR] = ACTIONS(230),
    [aux_sym__repository_start_token1] = ACTIONS(233),
    [aux_sym__repository_start_token2] = ACTIONS(230),
    [aux_sym__repository_start_token5] = ACTIONS(236),
    [aux_sym__repository_start_token7] = ACTIONS(236),
    [aux_sym__repository_start_token9] = ACTIONS(239),
    [aux_sym__repository_start_token11] = ACTIONS(239),
    [aux_sym__repository_start_token13] = ACTIONS(242),
    [aux_sym__repository_start_token15] = ACTIONS(242),
    [sym_comment] = ACTIONS(42),
  },
  [36] = {
    [sym_port_protocol] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym_run_token1] = ACTIONS(245),
    [aux_sym_expose_token1] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [aux_sym__port_part_token1] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [aux_sym_from_token1] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [aux_sym_from_token1] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_from_token2] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(249),
    [aux_sym__repository_start_token5] = ACTIONS(216),
    [aux_sym__repository_start_token8] = ACTIONS(218),
    [sym_comment] = ACTIONS(42),
  },
  [38] = {
    [aux_sym__repository_start_repeat3] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [aux_sym_from_token1] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_from_token2] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(249),
    [aux_sym__repository_start_token9] = ACTIONS(220),
    [aux_sym__repository_start_token12] = ACTIONS(222),
    [sym_comment] = ACTIONS(42),
  },
  [39] = {
    [aux_sym__repository_start_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
    [aux_sym_from_token2] = ACTIONS(112),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token4] = ACTIONS(251),
    [sym_comment] = ACTIONS(42),
  },
  [40] = {
    [sym_port_protocol] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_run_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym__port_part_token1] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(247),
    [aux_sym_from_token1] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym__repository_start_repeat4] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(46),
    [aux_sym_expose_token1] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [aux_sym_from_token1] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_from_token2] = ACTIONS(46),
    [aux_sym__repository_start_token4] = ACTIONS(249),
    [aux_sym__repository_start_token13] = ACTIONS(224),
    [aux_sym__repository_start_token16] = ACTIONS(226),
    [sym_comment] = ACTIONS(42),
  },
  [42] = {
    [aux_sym__repository_start_repeat4] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym_run_token1] = ACTIONS(88),
    [aux_sym_expose_token1] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [aux_sym_from_token1] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [aux_sym_from_token2] = ACTIONS(88),
    [aux_sym__repository_start_token4] = ACTIONS(88),
    [aux_sym__repository_start_token13] = ACTIONS(255),
    [aux_sym__repository_start_token16] = ACTIONS(258),
    [sym_comment] = ACTIONS(42),
  },
  [43] = {
    [aux_sym__repository_start_repeat3] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_run_token1] = ACTIONS(78),
    [aux_sym_expose_token1] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [aux_sym_from_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [aux_sym_from_token2] = ACTIONS(78),
    [aux_sym__repository_start_token4] = ACTIONS(78),
    [aux_sym__repository_start_token9] = ACTIONS(261),
    [aux_sym__repository_start_token12] = ACTIONS(264),
    [sym_comment] = ACTIONS(42),
  },
  [44] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [anon_sym_sha256_COLON] = ACTIONS(267),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [45] = {
    [sym_digest] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [anon_sym_sha256_COLON] = ACTIONS(269),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [46] = {
    [sym_as_name] = STATE(176),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [47] = {
    [aux_sym__repository_start_repeat3] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [aux_sym_from_token2] = ACTIONS(283),
    [aux_sym__repository_start_token4] = ACTIONS(285),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [48] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [aux_sym_from_token2] = ACTIONS(289),
    [aux_sym__repository_start_token4] = ACTIONS(291),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(138),
    [aux_sym_expose_token1] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_from_token1] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token4] = ACTIONS(138),
    [sym_comment] = ACTIONS(42),
  },
  [50] = {
    [sym_as_name] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [51] = {
    [sym_digest] = STATE(146),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(144),
    [aux_sym__repository_start_token4] = ACTIONS(146),
    [sym_comment] = ACTIONS(42),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_run_token1] = ACTIONS(34),
    [aux_sym_expose_token1] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [aux_sym_from_token2] = ACTIONS(34),
    [aux_sym__repository_start_token3] = ACTIONS(32),
    [aux_sym__repository_start_token4] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [54] = {
    [sym_as_name] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [55] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [56] = {
    [sym_digest] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [57] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token5] = ACTIONS(162),
    [aux_sym__repository_start_token7] = ACTIONS(162),
    [aux_sym__repository_start_token9] = ACTIONS(164),
    [aux_sym__repository_start_token11] = ACTIONS(164),
    [aux_sym__repository_start_token13] = ACTIONS(166),
    [aux_sym__repository_start_token15] = ACTIONS(166),
    [sym_comment] = ACTIONS(42),
  },
  [58] = {
    [sym_tag] = STATE(131),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [aux_sym__repository_start_token1] = ACTIONS(295),
    [aux_sym__repository_start_token2] = ACTIONS(293),
    [aux_sym__repository_start_token5] = ACTIONS(297),
    [aux_sym__repository_start_token7] = ACTIONS(297),
    [aux_sym__repository_start_token9] = ACTIONS(299),
    [aux_sym__repository_start_token11] = ACTIONS(299),
    [aux_sym__repository_start_token13] = ACTIONS(301),
    [aux_sym__repository_start_token15] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [59] = {
    [sym_as_name] = STATE(171),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [60] = {
    [aux_sym__repository_start_repeat4] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [aux_sym_from_token2] = ACTIONS(283),
    [aux_sym__repository_start_token4] = ACTIONS(285),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_run_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [aux_sym__port_part_token1] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_from_token2] = ACTIONS(142),
    [aux_sym__repository_start_token3] = ACTIONS(140),
    [aux_sym__repository_start_token4] = ACTIONS(142),
    [sym_comment] = ACTIONS(42),
  },
  [63] = {
    [aux_sym__repository_start_repeat2] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [aux_sym_from_token2] = ACTIONS(283),
    [aux_sym__repository_start_token4] = ACTIONS(285),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [64] = {
    [aux_sym__repository_start_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [aux_sym_from_token2] = ACTIONS(305),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(307),
    [sym_comment] = ACTIONS(42),
  },
  [65] = {
    [aux_sym__repository_start_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [aux_sym_from_token2] = ACTIONS(283),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [66] = {
    [sym_as_name] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [aux_sym__port_part_token1] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_as_name] = STATE(180),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [69] = {
    [sym_image] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [aux_sym__repository_start_token1] = ACTIONS(311),
    [aux_sym__repository_start_token2] = ACTIONS(309),
    [aux_sym__repository_start_token5] = ACTIONS(313),
    [aux_sym__repository_start_token7] = ACTIONS(313),
    [aux_sym__repository_start_token9] = ACTIONS(315),
    [aux_sym__repository_start_token11] = ACTIONS(315),
    [aux_sym__repository_start_token13] = ACTIONS(317),
    [aux_sym__repository_start_token15] = ACTIONS(317),
    [sym_comment] = ACTIONS(42),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_from_token2] = ACTIONS(154),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token13] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(152),
    [sym_comment] = ACTIONS(42),
  },
  [71] = {
    [sym_as_name] = STATE(174),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym__repository_start_token1] = ACTIONS(273),
    [aux_sym__repository_start_token2] = ACTIONS(271),
    [aux_sym__repository_start_token5] = ACTIONS(275),
    [aux_sym__repository_start_token7] = ACTIONS(275),
    [aux_sym__repository_start_token9] = ACTIONS(277),
    [aux_sym__repository_start_token11] = ACTIONS(277),
    [aux_sym__repository_start_token13] = ACTIONS(279),
    [aux_sym__repository_start_token15] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [72] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [aux_sym_from_token2] = ACTIONS(289),
    [aux_sym__repository_start_token4] = ACTIONS(291),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [aux_sym__port_part_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_tag] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [aux_sym__repository_start_token1] = ACTIONS(295),
    [aux_sym__repository_start_token2] = ACTIONS(293),
    [aux_sym__repository_start_token5] = ACTIONS(297),
    [aux_sym__repository_start_token7] = ACTIONS(297),
    [aux_sym__repository_start_token9] = ACTIONS(299),
    [aux_sym__repository_start_token11] = ACTIONS(299),
    [aux_sym__repository_start_token13] = ACTIONS(301),
    [aux_sym__repository_start_token15] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [aux_sym_run_token1] = ACTIONS(150),
    [aux_sym_expose_token1] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_from_token2] = ACTIONS(150),
    [aux_sym__repository_start_token4] = ACTIONS(150),
    [aux_sym__repository_start_token5] = ACTIONS(150),
    [aux_sym__repository_start_token8] = ACTIONS(148),
    [sym_comment] = ACTIONS(42),
  },
  [76] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [aux_sym_from_token2] = ACTIONS(289),
    [aux_sym__repository_start_token4] = ACTIONS(291),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_run_token1] = ACTIONS(122),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token4] = ACTIONS(122),
    [aux_sym__repository_start_token9] = ACTIONS(122),
    [aux_sym__repository_start_token12] = ACTIONS(120),
    [sym_comment] = ACTIONS(42),
  },
  [78] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_from_token2] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(323),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [79] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_from_token2] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(323),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [80] = {
    [anon_sym_DOLLAR] = ACTIONS(325),
    [aux_sym__repository_start_token1] = ACTIONS(325),
    [aux_sym__repository_start_token2] = ACTIONS(325),
    [aux_sym__repository_start_token5] = ACTIONS(325),
    [aux_sym__repository_start_token7] = ACTIONS(325),
    [aux_sym__repository_start_token9] = ACTIONS(325),
    [aux_sym__repository_start_token11] = ACTIONS(325),
    [aux_sym__repository_start_token13] = ACTIONS(325),
    [aux_sym__repository_start_token15] = ACTIONS(325),
    [sym_comment] = ACTIONS(42),
  },
  [81] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_from_token2] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(323),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [82] = {
    [anon_sym_DOLLAR] = ACTIONS(327),
    [aux_sym__repository_start_token1] = ACTIONS(327),
    [aux_sym__repository_start_token2] = ACTIONS(327),
    [aux_sym__repository_start_token5] = ACTIONS(327),
    [aux_sym__repository_start_token7] = ACTIONS(327),
    [aux_sym__repository_start_token9] = ACTIONS(327),
    [aux_sym__repository_start_token11] = ACTIONS(327),
    [aux_sym__repository_start_token13] = ACTIONS(327),
    [aux_sym__repository_start_token15] = ACTIONS(327),
    [sym_comment] = ACTIONS(42),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym_run_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(331),
    [aux_sym__port_part_token1] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_run_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym__port_part_token1] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [anon_sym_DOLLAR] = ACTIONS(333),
    [aux_sym__repository_start_token1] = ACTIONS(333),
    [aux_sym__repository_start_token2] = ACTIONS(333),
    [aux_sym__repository_start_token5] = ACTIONS(333),
    [aux_sym__repository_start_token7] = ACTIONS(333),
    [aux_sym__repository_start_token9] = ACTIONS(333),
    [aux_sym__repository_start_token11] = ACTIONS(333),
    [aux_sym__repository_start_token13] = ACTIONS(333),
    [aux_sym__repository_start_token15] = ACTIONS(333),
    [sym_comment] = ACTIONS(42),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token17] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(339),
    [aux_sym_from_token1] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [aux_sym_from_token2] = ACTIONS(335),
    [aux_sym__repository_start_token17] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [anon_sym_DOLLAR] = ACTIONS(341),
    [aux_sym__repository_start_token1] = ACTIONS(341),
    [aux_sym__repository_start_token2] = ACTIONS(341),
    [aux_sym__repository_start_token5] = ACTIONS(341),
    [aux_sym__repository_start_token7] = ACTIONS(341),
    [aux_sym__repository_start_token9] = ACTIONS(341),
    [aux_sym__repository_start_token11] = ACTIONS(341),
    [aux_sym__repository_start_token13] = ACTIONS(341),
    [aux_sym__repository_start_token15] = ACTIONS(341),
    [sym_comment] = ACTIONS(42),
  },
  [89] = {
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym__repository_start_token1] = ACTIONS(343),
    [aux_sym__repository_start_token2] = ACTIONS(343),
    [aux_sym__repository_start_token5] = ACTIONS(343),
    [aux_sym__repository_start_token7] = ACTIONS(343),
    [aux_sym__repository_start_token9] = ACTIONS(343),
    [aux_sym__repository_start_token11] = ACTIONS(343),
    [aux_sym__repository_start_token13] = ACTIONS(343),
    [aux_sym__repository_start_token15] = ACTIONS(343),
    [sym_comment] = ACTIONS(42),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_run_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(349),
    [aux_sym_from_token1] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [aux_sym_from_token2] = ACTIONS(345),
    [aux_sym__repository_start_token17] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym__repository_start_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_run_token1] = ACTIONS(353),
    [aux_sym_expose_token1] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(353),
    [aux_sym_from_token2] = ACTIONS(353),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(355),
    [sym_comment] = ACTIONS(42),
  },
  [92] = {
    [anon_sym_DOLLAR] = ACTIONS(357),
    [aux_sym__repository_start_token1] = ACTIONS(357),
    [aux_sym__repository_start_token2] = ACTIONS(357),
    [aux_sym__repository_start_token5] = ACTIONS(357),
    [aux_sym__repository_start_token7] = ACTIONS(357),
    [aux_sym__repository_start_token9] = ACTIONS(357),
    [aux_sym__repository_start_token11] = ACTIONS(357),
    [aux_sym__repository_start_token13] = ACTIONS(357),
    [aux_sym__repository_start_token15] = ACTIONS(357),
    [sym_comment] = ACTIONS(42),
  },
  [93] = {
    [anon_sym_DOLLAR] = ACTIONS(359),
    [aux_sym__repository_start_token1] = ACTIONS(359),
    [aux_sym__repository_start_token2] = ACTIONS(359),
    [aux_sym__repository_start_token5] = ACTIONS(359),
    [aux_sym__repository_start_token7] = ACTIONS(359),
    [aux_sym__repository_start_token9] = ACTIONS(359),
    [aux_sym__repository_start_token11] = ACTIONS(359),
    [aux_sym__repository_start_token13] = ACTIONS(359),
    [aux_sym__repository_start_token15] = ACTIONS(359),
    [sym_comment] = ACTIONS(42),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_run_token1] = ACTIONS(361),
    [aux_sym_expose_token1] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(361),
    [aux_sym__port_part_token1] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [aux_sym_from_token1] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [anon_sym_DOLLAR] = ACTIONS(363),
    [aux_sym__repository_start_token1] = ACTIONS(363),
    [aux_sym__repository_start_token2] = ACTIONS(363),
    [aux_sym__repository_start_token5] = ACTIONS(363),
    [aux_sym__repository_start_token7] = ACTIONS(363),
    [aux_sym__repository_start_token9] = ACTIONS(363),
    [aux_sym__repository_start_token11] = ACTIONS(363),
    [aux_sym__repository_start_token13] = ACTIONS(363),
    [aux_sym__repository_start_token15] = ACTIONS(363),
    [sym_comment] = ACTIONS(42),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(365),
    [aux_sym_expose_token1] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [aux_sym__port_part_token1] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [aux_sym_from_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [aux_sym__repository_start_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_from_token2] = ACTIONS(369),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(371),
    [sym_comment] = ACTIONS(42),
  },
  [98] = {
    [aux_sym__repository_start_repeat2] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_from_token2] = ACTIONS(369),
    [aux_sym__repository_start_token4] = ACTIONS(371),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [99] = {
    [aux_sym_run_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym_run_token1] = ACTIONS(375),
    [aux_sym_run_token2] = ACTIONS(377),
    [aux_sym_run_token3] = ACTIONS(377),
    [aux_sym_run_token4] = ACTIONS(377),
    [aux_sym_run_token5] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(375),
    [aux_sym_from_token1] = ACTIONS(375),
    [sym_comment] = ACTIONS(42),
  },
  [100] = {
    [sym__directive] = STATE(173),
    [sym_run] = STATE(173),
    [sym_expose] = STATE(173),
    [sym_from] = STATE(173),
    [aux_sym_dockerfile_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(380),
    [aux_sym_run_token1] = ACTIONS(382),
    [aux_sym_expose_token1] = ACTIONS(385),
    [aux_sym_from_token1] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [aux_sym__repository_start_repeat3] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_from_token2] = ACTIONS(369),
    [aux_sym__repository_start_token4] = ACTIONS(371),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [102] = {
    [sym__port_spec] = STATE(227),
    [sym_mapped_port] = STATE(227),
    [sym__port] = STATE(113),
    [sym_port] = STATE(195),
    [sym_port_range] = STATE(195),
    [sym__port_part] = STATE(83),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [aux_sym_run_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(395),
    [aux_sym_run_token2] = ACTIONS(397),
    [aux_sym_run_token3] = ACTIONS(397),
    [aux_sym_run_token4] = ACTIONS(397),
    [aux_sym_run_token5] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(395),
    [aux_sym_from_token1] = ACTIONS(395),
    [sym_comment] = ACTIONS(42),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(44),
    [aux_sym_expose_token1] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(46),
    [anon_sym_SLASH] = ACTIONS(56),
    [aux_sym_from_token1] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(44),
    [aux_sym_from_token2] = ACTIONS(44),
    [aux_sym__repository_start_token17] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [sym__directive] = STATE(173),
    [sym_run] = STATE(173),
    [sym_expose] = STATE(173),
    [sym_from] = STATE(173),
    [aux_sym_dockerfile_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(399),
    [aux_sym_run_token1] = ACTIONS(7),
    [aux_sym_expose_token1] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [aux_sym__repository_start_repeat4] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_from_token2] = ACTIONS(369),
    [aux_sym__repository_start_token4] = ACTIONS(371),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [107] = {
    [anon_sym_DOLLAR] = ACTIONS(401),
    [aux_sym__repository_start_token1] = ACTIONS(401),
    [aux_sym__repository_start_token2] = ACTIONS(401),
    [aux_sym__repository_start_token5] = ACTIONS(401),
    [aux_sym__repository_start_token7] = ACTIONS(401),
    [aux_sym__repository_start_token9] = ACTIONS(401),
    [aux_sym__repository_start_token11] = ACTIONS(401),
    [aux_sym__repository_start_token13] = ACTIONS(401),
    [aux_sym__repository_start_token15] = ACTIONS(401),
    [sym_comment] = ACTIONS(42),
  },
  [108] = {
    [anon_sym_DOLLAR] = ACTIONS(403),
    [aux_sym__repository_start_token1] = ACTIONS(403),
    [aux_sym__repository_start_token2] = ACTIONS(403),
    [aux_sym__repository_start_token5] = ACTIONS(403),
    [aux_sym__repository_start_token7] = ACTIONS(403),
    [aux_sym__repository_start_token9] = ACTIONS(403),
    [aux_sym__repository_start_token11] = ACTIONS(403),
    [aux_sym__repository_start_token13] = ACTIONS(403),
    [aux_sym__repository_start_token15] = ACTIONS(403),
    [sym_comment] = ACTIONS(42),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym_run_token1] = ACTIONS(405),
    [aux_sym_expose_token1] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [aux_sym__port_part_token1] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [aux_sym_from_token1] = ACTIONS(405),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_run_token1] = ACTIONS(407),
    [aux_sym_expose_token1] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [aux_sym__port_part_token1] = ACTIONS(407),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [aux_sym_from_token1] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [aux_sym__repository_start_token4] = ACTIONS(413),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_run_token1] = ACTIONS(415),
    [aux_sym_expose_token1] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(415),
    [aux_sym__port_part_token1] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [aux_sym_from_token1] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_run_token1] = ACTIONS(417),
    [aux_sym_expose_token1] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(419),
    [aux_sym__port_part_token1] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [aux_sym__repository_start_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(425),
    [sym_comment] = ACTIONS(42),
  },
  [115] = {
    [aux_sym__repository_start_repeat2] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym__repository_start_token4] = ACTIONS(425),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [116] = {
    [aux_sym__repository_start_repeat3] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym__repository_start_token4] = ACTIONS(425),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [117] = {
    [aux_sym__repository_start_repeat4] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym__repository_start_token4] = ACTIONS(425),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [118] = {
    [aux_sym__repository_start_repeat1] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(429),
    [aux_sym_expose_token1] = ACTIONS(429),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(429),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [119] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [aux_sym__repository_start_token4] = ACTIONS(413),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [120] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [aux_sym__repository_start_token4] = ACTIONS(413),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [aux_sym_run_token1] = ACTIONS(433),
    [aux_sym_expose_token1] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym__port_part_token1] = ACTIONS(433),
    [anon_sym_DOLLAR] = ACTIONS(433),
    [aux_sym_from_token1] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_run_token1] = ACTIONS(44),
    [aux_sym_expose_token1] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(44),
    [aux_sym_from_token1] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(44),
    [aux_sym_from_token2] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [aux_sym__port_part_token1] = ACTIONS(435),
    [anon_sym_DOLLAR] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym__port] = STATE(179),
    [sym_port] = STATE(179),
    [sym_port_range] = STATE(179),
    [sym__port_part] = STATE(83),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [aux_sym_run_token1] = ACTIONS(437),
    [aux_sym_expose_token1] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [aux_sym_from_token1] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(441),
    [aux_sym_from_token2] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(449),
    [aux_sym_from_token2] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [aux_sym_from_token2] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [aux_sym_from_token2] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_run_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [aux_sym_from_token1] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [aux_sym_from_token2] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [sym__port] = STATE(121),
    [sym_port] = STATE(121),
    [sym_port_range] = STATE(121),
    [sym__port_part] = STATE(83),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(455),
    [aux_sym_from_token2] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_run_token1] = ACTIONS(459),
    [aux_sym_expose_token1] = ACTIONS(459),
    [aux_sym_from_token1] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
    [aux_sym_from_token2] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [aux_sym_from_token2] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [aux_sym_from_token2] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(465),
    [aux_sym_from_token2] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_from_token2] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [aux_sym_from_token2] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [sym_template_expr_less_than_equals] = STATE(238),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [139] = {
    [aux_sym__repository_start_repeat3] = STATE(162),
    [anon_sym_SLASH] = ACTIONS(473),
    [aux_sym__repository_start_token4] = ACTIONS(475),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [140] = {
    [aux_sym__repository_start_repeat4] = STATE(165),
    [anon_sym_SLASH] = ACTIONS(473),
    [aux_sym__repository_start_token4] = ACTIONS(475),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [141] = {
    [sym_variable_default_value] = STATE(234),
    [sym_variable_this_or_null] = STATE(234),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_COLON_DASH] = ACTIONS(479),
    [anon_sym_COLON_PLUS] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [sym_template_expr_less_than_equals] = STATE(245),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [aux_sym_from_token2] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
  },
  [144] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(168),
    [aux_sym__repository_start_token14] = ACTIONS(483),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(485),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(487),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(487),
    [sym_comment] = ACTIONS(42),
  },
  [145] = {
    [sym_template_expr_less_than_equals] = STATE(208),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_run_token1] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [aux_sym_from_token2] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_run_token1] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [aux_sym_from_token2] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [sym_template_expr_less_than_equals] = STATE(236),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [149] = {
    [sym_template_expr_less_than_equals] = STATE(199),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [aux_sym_run_token1] = ACTIONS(497),
    [aux_sym_expose_token1] = ACTIONS(497),
    [aux_sym_from_token1] = ACTIONS(497),
    [aux_sym_from_token2] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [aux_sym_from_token2] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [aux_sym__repository_start_repeat2] = STATE(161),
    [anon_sym_SLASH] = ACTIONS(473),
    [aux_sym__repository_start_token4] = ACTIONS(475),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [153] = {
    [aux_sym_run_repeat1] = STATE(103),
    [aux_sym_run_token2] = ACTIONS(501),
    [aux_sym_run_token3] = ACTIONS(501),
    [aux_sym_run_token4] = ACTIONS(501),
    [aux_sym_run_token5] = ACTIONS(501),
    [sym_comment] = ACTIONS(42),
  },
  [154] = {
    [sym_port] = STATE(226),
    [sym_port_range] = STATE(226),
    [sym__port_part] = STATE(83),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [aux_sym__repository_start_repeat1] = STATE(4),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(473),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(475),
    [sym_comment] = ACTIONS(42),
  },
  [156] = {
    [sym_template_expr_less_than_equals] = STATE(209),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym_from_token2] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_run_token1] = ACTIONS(503),
    [aux_sym_expose_token1] = ACTIONS(503),
    [aux_sym_from_token1] = ACTIONS(503),
    [aux_sym_from_token2] = ACTIONS(505),
    [sym_comment] = ACTIONS(3),
  },
  [159] = {
    [sym_template_expr_less_than_equals] = STATE(206),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [160] = {
    [sym_variable_default_value] = STATE(242),
    [sym_variable_this_or_null] = STATE(242),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_COLON_DASH] = ACTIONS(479),
    [anon_sym_COLON_PLUS] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
  },
  [161] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [aux_sym__repository_start_token5] = ACTIONS(52),
    [aux_sym__repository_start_token8] = ACTIONS(54),
    [sym_comment] = ACTIONS(42),
  },
  [162] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [aux_sym__repository_start_token9] = ACTIONS(58),
    [aux_sym__repository_start_token12] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [163] = {
    [aux_sym__repository_start_repeat1] = STATE(155),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(513),
    [aux_sym__repository_start_token3] = ACTIONS(108),
    [aux_sym__repository_start_token4] = ACTIONS(515),
    [sym_comment] = ACTIONS(42),
  },
  [164] = {
    [sym_template_expr_less_than_equals] = STATE(215),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(144),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(469),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(471),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [165] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
    [anon_sym_SLASH] = ACTIONS(509),
    [aux_sym__repository_start_token4] = ACTIONS(511),
    [aux_sym__repository_start_token13] = ACTIONS(62),
    [aux_sym__repository_start_token16] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [aux_sym_from_token2] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [167] = {
    [sym_variable_default_value] = STATE(247),
    [sym_variable_this_or_null] = STATE(247),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_COLON_DASH] = ACTIONS(479),
    [anon_sym_COLON_PLUS] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
  },
  [168] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(168),
    [aux_sym__repository_start_token14] = ACTIONS(519),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(521),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(524),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(524),
    [sym_comment] = ACTIONS(42),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_run_token1] = ACTIONS(503),
    [aux_sym_expose_token1] = ACTIONS(503),
    [aux_sym_from_token1] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_run_token1] = ACTIONS(421),
    [aux_sym_expose_token1] = ACTIONS(421),
    [aux_sym_from_token1] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_run_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_run_token1] = ACTIONS(13),
    [aux_sym_expose_token1] = ACTIONS(13),
    [aux_sym_from_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_run_token1] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_run_token1] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(3),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_run_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [sym_comment] = ACTIONS(3),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_run_token1] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [aux_sym_run_token1] = ACTIONS(533),
    [aux_sym_expose_token1] = ACTIONS(533),
    [aux_sym_from_token1] = ACTIONS(533),
    [sym_comment] = ACTIONS(3),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_run_token1] = ACTIONS(535),
    [aux_sym_expose_token1] = ACTIONS(535),
    [aux_sym_from_token1] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [aux_sym_run_token1] = ACTIONS(537),
    [aux_sym_expose_token1] = ACTIONS(537),
    [aux_sym_from_token1] = ACTIONS(537),
    [sym_comment] = ACTIONS(3),
  },
  [183] = {
    [sym_docker_variable] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(539),
    [sym__docker_variable] = ACTIONS(541),
    [sym_comment] = ACTIONS(42),
  },
  [184] = {
    [sym_docker_variable] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__docker_variable] = ACTIONS(545),
    [sym_comment] = ACTIONS(42),
  },
  [185] = {
    [anon_sym_DOLLAR] = ACTIONS(547),
    [aux_sym_port_protocol_token1] = ACTIONS(549),
    [aux_sym_port_protocol_token2] = ACTIONS(549),
    [sym_comment] = ACTIONS(3),
  },
  [186] = {
    [sym_docker_variable] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__docker_variable] = ACTIONS(545),
    [sym_comment] = ACTIONS(42),
  },
  [187] = {
    [sym_docker_variable] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__docker_variable] = ACTIONS(545),
    [sym_comment] = ACTIONS(42),
  },
  [188] = {
    [sym_docker_variable] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__docker_variable] = ACTIONS(545),
    [sym_comment] = ACTIONS(42),
  },
  [189] = {
    [sym_docker_variable] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(539),
    [sym__docker_variable] = ACTIONS(541),
    [sym_comment] = ACTIONS(42),
  },
  [190] = {
    [sym_docker_variable] = STATE(91),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__docker_variable] = ACTIONS(545),
    [sym_comment] = ACTIONS(42),
  },
  [191] = {
    [sym_docker_variable] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(551),
    [sym__docker_variable] = ACTIONS(553),
    [sym_comment] = ACTIONS(42),
  },
  [192] = {
    [sym_docker_variable] = STATE(163),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__docker_variable] = ACTIONS(545),
    [sym_comment] = ACTIONS(42),
  },
  [193] = {
    [sym__port_part] = STATE(112),
    [aux_sym__port_part_token1] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [194] = {
    [sym_docker_variable] = STATE(39),
    [anon_sym_LBRACE] = ACTIONS(551),
    [sym__docker_variable] = ACTIONS(553),
    [sym_comment] = ACTIONS(42),
  },
  [195] = {
    [anon_sym_DQUOTE] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [aux_sym__repository_start_token6] = ACTIONS(560),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [sym_template_expr_curly_braces] = ACTIONS(562),
    [sym_comment] = ACTIONS(42),
  },
  [198] = {
    [sym_template_expr_percent_signs] = ACTIONS(564),
    [sym_comment] = ACTIONS(42),
  },
  [199] = {
    [aux_sym__repository_start_token14] = ACTIONS(566),
    [sym_comment] = ACTIONS(3),
  },
  [200] = {
    [sym_template_expr_curly_braces] = ACTIONS(568),
    [sym_comment] = ACTIONS(42),
  },
  [201] = {
    [aux_sym__repository_start_token10] = ACTIONS(570),
    [sym_comment] = ACTIONS(3),
  },
  [202] = {
    [aux_sym__repository_start_token6] = ACTIONS(572),
    [sym_comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_SLASH] = ACTIONS(574),
    [sym_comment] = ACTIONS(3),
  },
  [204] = {
    [sym_template_expr_curly_braces] = ACTIONS(576),
    [sym_comment] = ACTIONS(42),
  },
  [205] = {
    [sym_template_expr_percent_signs] = ACTIONS(578),
    [sym_comment] = ACTIONS(42),
  },
  [206] = {
    [aux_sym__repository_start_token14] = ACTIONS(580),
    [sym_comment] = ACTIONS(3),
  },
  [207] = {
    [aux_sym__repository_start_token10] = ACTIONS(582),
    [sym_comment] = ACTIONS(3),
  },
  [208] = {
    [aux_sym__repository_start_token14] = ACTIONS(584),
    [sym_comment] = ACTIONS(3),
  },
  [209] = {
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(3),
  },
  [210] = {
    [aux_sym__repository_start_token10] = ACTIONS(588),
    [sym_comment] = ACTIONS(3),
  },
  [211] = {
    [aux_sym__repository_start_token10] = ACTIONS(590),
    [sym_comment] = ACTIONS(3),
  },
  [212] = {
    [aux_sym__repository_start_token10] = ACTIONS(592),
    [sym_comment] = ACTIONS(3),
  },
  [213] = {
    [aux_sym__repository_start_token6] = ACTIONS(594),
    [sym_comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_SLASH] = ACTIONS(596),
    [sym_comment] = ACTIONS(3),
  },
  [215] = {
    [aux_sym__repository_start_token14] = ACTIONS(598),
    [sym_comment] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_RBRACE] = ACTIONS(600),
    [sym_comment] = ACTIONS(3),
  },
  [217] = {
    [sym__docker_variable] = ACTIONS(602),
    [sym_comment] = ACTIONS(42),
  },
  [218] = {
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_SLASH] = ACTIONS(606),
    [sym_comment] = ACTIONS(3),
  },
  [220] = {
    [sym_template_expr_curly_braces] = ACTIONS(608),
    [sym_comment] = ACTIONS(42),
  },
  [221] = {
    [sym_template_expr_percent_signs] = ACTIONS(610),
    [sym_comment] = ACTIONS(42),
  },
  [222] = {
    [sym_template_expr_curly_braces] = ACTIONS(612),
    [sym_comment] = ACTIONS(42),
  },
  [223] = {
    [sym_template_expr_percent_signs] = ACTIONS(614),
    [sym_comment] = ACTIONS(42),
  },
  [224] = {
    [aux_sym__repository_start_token6] = ACTIONS(616),
    [sym_comment] = ACTIONS(3),
  },
  [225] = {
    [aux_sym__repository_start_token6] = ACTIONS(618),
    [sym_comment] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_DQUOTE] = ACTIONS(620),
    [sym_comment] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_DQUOTE] = ACTIONS(622),
    [sym_comment] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_SLASH] = ACTIONS(624),
    [sym_comment] = ACTIONS(3),
  },
  [229] = {
    [sym_template_expr_percent_signs] = ACTIONS(626),
    [sym_comment] = ACTIONS(42),
  },
  [230] = {
    [sym_template_expr_curly_braces] = ACTIONS(628),
    [sym_comment] = ACTIONS(42),
  },
  [231] = {
    [sym_template_expr_percent_signs] = ACTIONS(630),
    [sym_comment] = ACTIONS(42),
  },
  [232] = {
    [sym_template_expr_curly_braces] = ACTIONS(632),
    [sym_comment] = ACTIONS(42),
  },
  [233] = {
    [aux_sym__repository_start_token6] = ACTIONS(634),
    [sym_comment] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(636),
    [sym_comment] = ACTIONS(3),
  },
  [235] = {
    [aux_sym__repository_start_token10] = ACTIONS(638),
    [sym_comment] = ACTIONS(3),
  },
  [236] = {
    [aux_sym__repository_start_token14] = ACTIONS(640),
    [sym_comment] = ACTIONS(3),
  },
  [237] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(642),
    [sym_comment] = ACTIONS(42),
  },
  [238] = {
    [aux_sym__repository_start_token14] = ACTIONS(644),
    [sym_comment] = ACTIONS(3),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [sym_comment] = ACTIONS(3),
  },
  [240] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(648),
    [sym_comment] = ACTIONS(42),
  },
  [241] = {
    [aux_sym__repository_start_token6] = ACTIONS(650),
    [sym_comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_RBRACE] = ACTIONS(652),
    [sym_comment] = ACTIONS(3),
  },
  [243] = {
    [aux_sym__repository_start_token6] = ACTIONS(654),
    [sym_comment] = ACTIONS(3),
  },
  [244] = {
    [aux_sym__repository_start_token10] = ACTIONS(656),
    [sym_comment] = ACTIONS(3),
  },
  [245] = {
    [aux_sym__repository_start_token14] = ACTIONS(658),
    [sym_comment] = ACTIONS(3),
  },
  [246] = {
    [aux_sym__repository_start_token10] = ACTIONS(660),
    [sym_comment] = ACTIONS(3),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(662),
    [sym_comment] = ACTIONS(3),
  },
  [248] = {
    [sym__docker_variable] = ACTIONS(664),
    [sym_comment] = ACTIONS(42),
  },
  [249] = {
    [sym_template_expr_curly_braces] = ACTIONS(666),
    [sym_comment] = ACTIONS(42),
  },
  [250] = {
    [sym_template_expr_percent_signs] = ACTIONS(668),
    [sym_comment] = ACTIONS(42),
  },
  [251] = {
    [sym_template_expr_percent_signs] = ACTIONS(670),
    [sym_comment] = ACTIONS(42),
  },
  [252] = {
    [sym__docker_variable] = ACTIONS(672),
    [sym_comment] = ACTIONS(42),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(153),
  [9] = {.count = 1, .reusable = true}, SHIFT(19),
  [11] = {.count = 1, .reusable = true}, SHIFT(18),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [15] = {.count = 1, .reusable = true}, SHIFT(102),
  [17] = {.count = 1, .reusable = true}, SHIFT(36),
  [19] = {.count = 1, .reusable = true}, SHIFT(189),
  [21] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(102),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(36),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(189),
  [32] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [34] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [36] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(184),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(184),
  [42] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [48] = {.count = 1, .reusable = false}, SHIFT(88),
  [50] = {.count = 1, .reusable = false}, SHIFT(87),
  [52] = {.count = 1, .reusable = false}, SHIFT(230),
  [54] = {.count = 1, .reusable = true}, SHIFT(230),
  [56] = {.count = 1, .reusable = true}, SHIFT(88),
  [58] = {.count = 1, .reusable = false}, SHIFT(229),
  [60] = {.count = 1, .reusable = true}, SHIFT(229),
  [62] = {.count = 1, .reusable = false}, SHIFT(138),
  [64] = {.count = 1, .reusable = true}, SHIFT(138),
  [66] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [68] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(230),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(230),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [78] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(229),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(229),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [88] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(138),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(138),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [100] = {.count = 1, .reusable = false}, SHIFT(108),
  [102] = {.count = 1, .reusable = false}, SHIFT(104),
  [104] = {.count = 1, .reusable = true}, SHIFT(108),
  [106] = {.count = 1, .reusable = false}, SHIFT(184),
  [108] = {.count = 1, .reusable = true}, SHIFT(184),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [114] = {.count = 1, .reusable = false}, SHIFT(89),
  [116] = {.count = 1, .reusable = false}, SHIFT(86),
  [118] = {.count = 1, .reusable = true}, SHIFT(89),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [124] = {.count = 1, .reusable = false}, SHIFT(187),
  [126] = {.count = 1, .reusable = false}, SHIFT(90),
  [128] = {.count = 1, .reusable = false}, SHIFT(232),
  [130] = {.count = 1, .reusable = false}, SHIFT(231),
  [132] = {.count = 1, .reusable = false}, SHIFT(159),
  [134] = {.count = 1, .reusable = true}, SHIFT(124),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [150] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [152] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [156] = {.count = 1, .reusable = false}, SHIFT(190),
  [158] = {.count = 1, .reusable = false}, SHIFT(56),
  [160] = {.count = 1, .reusable = false}, SHIFT(150),
  [162] = {.count = 1, .reusable = false}, SHIFT(220),
  [164] = {.count = 1, .reusable = false}, SHIFT(221),
  [166] = {.count = 1, .reusable = false}, SHIFT(149),
  [168] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(192),
  [171] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(219),
  [174] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(222),
  [177] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(223),
  [180] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(156),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(249),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(249),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(191),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(191),
  [195] = {.count = 1, .reusable = false}, SHIFT(191),
  [197] = {.count = 1, .reusable = true}, SHIFT(191),
  [199] = {.count = 1, .reusable = false}, SHIFT(122),
  [201] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(192),
  [204] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(219),
  [207] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(222),
  [210] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(223),
  [213] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(156),
  [216] = {.count = 1, .reusable = false}, SHIFT(249),
  [218] = {.count = 1, .reusable = true}, SHIFT(249),
  [220] = {.count = 1, .reusable = false}, SHIFT(250),
  [222] = {.count = 1, .reusable = true}, SHIFT(250),
  [224] = {.count = 1, .reusable = false}, SHIFT(142),
  [226] = {.count = 1, .reusable = true}, SHIFT(142),
  [228] = {.count = 1, .reusable = false}, SHIFT(57),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(192),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(219),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(222),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(223),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(156),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [247] = {.count = 1, .reusable = true}, SHIFT(185),
  [249] = {.count = 1, .reusable = false}, SHIFT(128),
  [251] = {.count = 1, .reusable = false}, SHIFT(127),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(142),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(142),
  [261] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(250),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(250),
  [267] = {.count = 1, .reusable = false}, SHIFT(51),
  [269] = {.count = 1, .reusable = false}, SHIFT(55),
  [271] = {.count = 1, .reusable = false}, SHIFT(186),
  [273] = {.count = 1, .reusable = false}, SHIFT(182),
  [275] = {.count = 1, .reusable = false}, SHIFT(197),
  [277] = {.count = 1, .reusable = false}, SHIFT(251),
  [279] = {.count = 1, .reusable = false}, SHIFT(164),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [285] = {.count = 1, .reusable = false}, SHIFT(136),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [291] = {.count = 1, .reusable = false}, SHIFT(132),
  [293] = {.count = 1, .reusable = false}, SHIFT(188),
  [295] = {.count = 1, .reusable = false}, SHIFT(134),
  [297] = {.count = 1, .reusable = false}, SHIFT(204),
  [299] = {.count = 1, .reusable = false}, SHIFT(205),
  [301] = {.count = 1, .reusable = false}, SHIFT(145),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [307] = {.count = 1, .reusable = false}, SHIFT(133),
  [309] = {.count = 1, .reusable = false}, SHIFT(194),
  [311] = {.count = 1, .reusable = false}, SHIFT(129),
  [313] = {.count = 1, .reusable = false}, SHIFT(200),
  [315] = {.count = 1, .reusable = false}, SHIFT(198),
  [317] = {.count = 1, .reusable = false}, SHIFT(148),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [323] = {.count = 1, .reusable = false}, SHIFT(151),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [331] = {.count = 1, .reusable = true}, SHIFT(193),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [339] = {.count = 1, .reusable = true}, SHIFT(107),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [349] = {.count = 1, .reusable = true}, SHIFT(82),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [355] = {.count = 1, .reusable = false}, SHIFT(157),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [371] = {.count = 1, .reusable = false}, SHIFT(143),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_run_repeat1, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(aux_sym_run_repeat1, 2),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_run_repeat1, 2), SHIFT_REPEAT(99),
  [380] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(153),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(19),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(18),
  [391] = {.count = 1, .reusable = true}, SHIFT(154),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_run, 2),
  [397] = {.count = 1, .reusable = false}, SHIFT(99),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [413] = {.count = 1, .reusable = false}, SHIFT(178),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [419] = {.count = 1, .reusable = true}, SHIFT(130),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [425] = {.count = 1, .reusable = false}, SHIFT(172),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [431] = {.count = 1, .reusable = false}, SHIFT(170),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [439] = {.count = 1, .reusable = true}, SHIFT(58),
  [441] = {.count = 1, .reusable = true}, SHIFT(45),
  [443] = {.count = 1, .reusable = true}, SHIFT(59),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [447] = {.count = 1, .reusable = true}, SHIFT(74),
  [449] = {.count = 1, .reusable = true}, SHIFT(25),
  [451] = {.count = 1, .reusable = true}, SHIFT(71),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [455] = {.count = 1, .reusable = true}, SHIFT(34),
  [457] = {.count = 1, .reusable = true}, SHIFT(66),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [465] = {.count = 1, .reusable = true}, SHIFT(44),
  [467] = {.count = 1, .reusable = true}, SHIFT(46),
  [469] = {.count = 1, .reusable = true}, SHIFT(144),
  [471] = {.count = 1, .reusable = false}, SHIFT(144),
  [473] = {.count = 1, .reusable = false}, SHIFT(92),
  [475] = {.count = 1, .reusable = false}, SHIFT(228),
  [477] = {.count = 1, .reusable = true}, SHIFT(73),
  [479] = {.count = 1, .reusable = true}, SHIFT(240),
  [481] = {.count = 1, .reusable = true}, SHIFT(237),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [485] = {.count = 1, .reusable = true}, SHIFT(168),
  [487] = {.count = 1, .reusable = false}, SHIFT(168),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [491] = {.count = 1, .reusable = true}, SHIFT(54),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [495] = {.count = 1, .reusable = true}, SHIFT(68),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [501] = {.count = 1, .reusable = false}, SHIFT(103),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [505] = {.count = 1, .reusable = true}, SHIFT(50),
  [507] = {.count = 1, .reusable = true}, SHIFT(20),
  [509] = {.count = 1, .reusable = false}, SHIFT(80),
  [511] = {.count = 1, .reusable = false}, SHIFT(203),
  [513] = {.count = 1, .reusable = false}, SHIFT(95),
  [515] = {.count = 1, .reusable = false}, SHIFT(214),
  [517] = {.count = 1, .reusable = true}, SHIFT(49),
  [519] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(168),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(168),
  [527] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [539] = {.count = 1, .reusable = true}, SHIFT(217),
  [541] = {.count = 1, .reusable = true}, SHIFT(61),
  [543] = {.count = 1, .reusable = true}, SHIFT(248),
  [545] = {.count = 1, .reusable = true}, SHIFT(22),
  [547] = {.count = 1, .reusable = true}, SHIFT(183),
  [549] = {.count = 1, .reusable = true}, SHIFT(96),
  [551] = {.count = 1, .reusable = true}, SHIFT(252),
  [553] = {.count = 1, .reusable = true}, SHIFT(52),
  [555] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(110),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [560] = {.count = 1, .reusable = true}, SHIFT(13),
  [562] = {.count = 1, .reusable = true}, SHIFT(225),
  [564] = {.count = 1, .reusable = true}, SHIFT(235),
  [566] = {.count = 1, .reusable = true}, SHIFT(106),
  [568] = {.count = 1, .reusable = true}, SHIFT(233),
  [570] = {.count = 1, .reusable = true}, SHIFT(101),
  [572] = {.count = 1, .reusable = true}, SHIFT(98),
  [574] = {.count = 1, .reusable = true}, SHIFT(93),
  [576] = {.count = 1, .reusable = true}, SHIFT(213),
  [578] = {.count = 1, .reusable = true}, SHIFT(211),
  [580] = {.count = 1, .reusable = true}, SHIFT(11),
  [582] = {.count = 1, .reusable = true}, SHIFT(12),
  [584] = {.count = 1, .reusable = true}, SHIFT(60),
  [586] = {.count = 1, .reusable = true}, SHIFT(140),
  [588] = {.count = 1, .reusable = true}, SHIFT(139),
  [590] = {.count = 1, .reusable = true}, SHIFT(47),
  [592] = {.count = 1, .reusable = true}, SHIFT(116),
  [594] = {.count = 1, .reusable = true}, SHIFT(63),
  [596] = {.count = 1, .reusable = true}, SHIFT(92),
  [598] = {.count = 1, .reusable = true}, SHIFT(117),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [602] = {.count = 1, .reusable = true}, SHIFT(141),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [606] = {.count = 1, .reusable = true}, SHIFT(85),
  [608] = {.count = 1, .reusable = true}, SHIFT(202),
  [610] = {.count = 1, .reusable = true}, SHIFT(201),
  [612] = {.count = 1, .reusable = true}, SHIFT(241),
  [614] = {.count = 1, .reusable = true}, SHIFT(210),
  [616] = {.count = 1, .reusable = true}, SHIFT(23),
  [618] = {.count = 1, .reusable = true}, SHIFT(115),
  [620] = {.count = 1, .reusable = true}, SHIFT(110),
  [622] = {.count = 1, .reusable = true}, SHIFT(123),
  [624] = {.count = 1, .reusable = true}, SHIFT(80),
  [626] = {.count = 1, .reusable = true}, SHIFT(246),
  [628] = {.count = 1, .reusable = true}, SHIFT(224),
  [630] = {.count = 1, .reusable = true}, SHIFT(207),
  [632] = {.count = 1, .reusable = true}, SHIFT(196),
  [634] = {.count = 1, .reusable = true}, SHIFT(31),
  [636] = {.count = 1, .reusable = true}, SHIFT(67),
  [638] = {.count = 1, .reusable = true}, SHIFT(32),
  [640] = {.count = 1, .reusable = true}, SHIFT(33),
  [642] = {.count = 1, .reusable = true}, SHIFT(218),
  [644] = {.count = 1, .reusable = true}, SHIFT(24),
  [646] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [648] = {.count = 1, .reusable = true}, SHIFT(216),
  [650] = {.count = 1, .reusable = true}, SHIFT(152),
  [652] = {.count = 1, .reusable = true}, SHIFT(21),
  [654] = {.count = 1, .reusable = true}, SHIFT(75),
  [656] = {.count = 1, .reusable = true}, SHIFT(77),
  [658] = {.count = 1, .reusable = true}, SHIFT(70),
  [660] = {.count = 1, .reusable = true}, SHIFT(16),
  [662] = {.count = 1, .reusable = true}, SHIFT(62),
  [664] = {.count = 1, .reusable = true}, SHIFT(160),
  [666] = {.count = 1, .reusable = true}, SHIFT(243),
  [668] = {.count = 1, .reusable = true}, SHIFT(244),
  [670] = {.count = 1, .reusable = true}, SHIFT(212),
  [672] = {.count = 1, .reusable = true}, SHIFT(167),
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
