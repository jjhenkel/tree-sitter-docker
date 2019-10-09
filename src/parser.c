#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 235
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  anon_sym_FROM = 1,
  anon_sym_COLON = 2,
  anon_sym_AT = 3,
  anon_sym_sha256_COLON = 4,
  aux_sym_from_token1 = 5,
  aux_sym__repository_start_token1 = 6,
  anon_sym_DOLLAR = 7,
  aux_sym__repository_start_token2 = 8,
  aux_sym__repository_start_token3 = 9,
  aux_sym__repository_start_token4 = 10,
  aux_sym__repository_start_token5 = 11,
  aux_sym__repository_start_token6 = 12,
  aux_sym__repository_start_token7 = 13,
  aux_sym__repository_start_token8 = 14,
  aux_sym__repository_start_token9 = 15,
  aux_sym__repository_start_token10 = 16,
  aux_sym__repository_start_token11 = 17,
  aux_sym__repository_start_token12 = 18,
  aux_sym__repository_start_token13 = 19,
  aux_sym__repository_start_token14 = 20,
  aux_sym__repository_start_token15 = 21,
  aux_sym__repository_start_token16 = 22,
  aux_sym__repository_start_token17 = 23,
  anon_sym_SLASH = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  sym__docker_variable = 27,
  anon_sym_COLON_DASH = 28,
  aux_sym_variable_default_value_token1 = 29,
  sym_template_expr_curly_braces = 30,
  sym_template_expr_percent_signs = 31,
  aux_sym_template_expr_less_than_equals_token1 = 32,
  aux_sym_template_expr_less_than_equals_token2 = 33,
  aux_sym_template_expr_less_than_equals_token3 = 34,
  sym_comment = 35,
  sym_dockerfile = 36,
  sym__directive = 37,
  sym_from = 38,
  sym_repository = 39,
  sym__repository_start = 40,
  sym__repository_continued = 41,
  sym_image = 42,
  sym_tag = 43,
  sym_digest = 44,
  sym_as_name = 45,
  sym_docker_variable = 46,
  sym_variable_default_value = 47,
  sym_template_expr_less_than_equals = 48,
  aux_sym_dockerfile_repeat1 = 49,
  aux_sym_repository_repeat1 = 50,
  aux_sym__repository_start_repeat1 = 51,
  aux_sym__repository_start_repeat2 = 52,
  aux_sym__repository_start_repeat3 = 53,
  aux_sym__repository_start_repeat4 = 54,
  aux_sym_template_expr_less_than_equals_repeat1 = 55,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_FROM] = "FROM",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_sha256_COLON] = "sha256:",
  [aux_sym_from_token1] = "from_token1",
  [aux_sym__repository_start_token1] = "_repository_start_token1",
  [anon_sym_DOLLAR] = "$",
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
  [anon_sym_SLASH] = "/",
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
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [aux_sym_from_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repository_start_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
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
  [anon_sym_SLASH] = {
    .visible = true,
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
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(69);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '}') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(69);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(137);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 25:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 26:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 27:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 28:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 29:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 30:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 31:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 32:
      if (lookahead == 0) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(184);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(181);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') SKIP(82)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') SKIP(84)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '\\') SKIP(85)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') SKIP(83)
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\\') SKIP(86)
      if (lookahead == '}') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\\') SKIP(86)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(171);
      END_STATE();
    case 51:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '5') ADVANCE(53);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '6') ADVANCE(54);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(90);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(55);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == '5') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 70:
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(159);
      END_STATE();
    case 78:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(162);
      END_STATE();
    case 80:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 84:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 86:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(185);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '$') ADVANCE(112);
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
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '%') ADVANCE(157);
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '<') ADVANCE(78);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '{') ADVANCE(149);
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
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '5') ADVANCE(103);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '6') ADVANCE(104);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 109:
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
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(91);
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
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(113);
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
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(114);
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
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
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
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '$') ADVANCE(112);
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
          lookahead != '}') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(92);
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(118);
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(119);
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '%') ADVANCE(157);
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 123:
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
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(93);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(124);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(125);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '<') ADVANCE(78);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == '{') ADVANCE(149);
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
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == '{') ADVANCE(149);
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
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'R') ADVANCE(130);
      if (lookahead == '{') ADVANCE(149);
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
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '{') ADVANCE(149);
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
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '{') ADVANCE(149);
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
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 134:
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
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 135:
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
          lookahead != '}') ADVANCE(117);
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
          lookahead != '}') ADVANCE(132);
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
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '}') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '%') ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__repository_start_token17);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(140);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 171:
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
          lookahead != '}') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('=' <= lookahead && lookahead <= '@') ||
          lookahead == '}') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(162);
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
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 47},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 46},
  [106] = {.lex_state = 48},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 49},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 47},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 48},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 49},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 49},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 47},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 47},
  [142] = {.lex_state = 48},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 50},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 50},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 50},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 50},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 50},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 50},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 42},
  [161] = {.lex_state = 50},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 50},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 35},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 34},
  [199] = {.lex_state = 35},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 35},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 35},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 35},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 50},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 50},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 35},
  [230] = {.lex_state = 35},
  [231] = {.lex_state = 50},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 35},
  [234] = {.lex_state = 36},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_sha256_COLON] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym__repository_start_token3] = ACTIONS(1),
    [aux_sym__repository_start_token5] = ACTIONS(1),
    [aux_sym__repository_start_token6] = ACTIONS(1),
    [aux_sym__repository_start_token8] = ACTIONS(1),
    [aux_sym__repository_start_token9] = ACTIONS(1),
    [aux_sym__repository_start_token10] = ACTIONS(1),
    [aux_sym__repository_start_token12] = ACTIONS(1),
    [aux_sym__repository_start_token13] = ACTIONS(1),
    [aux_sym__repository_start_token16] = ACTIONS(1),
    [aux_sym__repository_start_token17] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_dockerfile] = STATE(186),
    [sym__directive] = STATE(169),
    [sym_from] = STATE(169),
    [aux_sym_dockerfile_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_FROM] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_repository] = STATE(36),
    [sym__repository_start] = STATE(12),
    [sym_image] = STATE(110),
    [aux_sym__repository_start_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [aux_sym__repository_start_token2] = ACTIONS(13),
    [aux_sym__repository_start_token5] = ACTIONS(15),
    [aux_sym__repository_start_token7] = ACTIONS(15),
    [aux_sym__repository_start_token9] = ACTIONS(17),
    [aux_sym__repository_start_token11] = ACTIONS(17),
    [aux_sym__repository_start_token13] = ACTIONS(19),
    [aux_sym__repository_start_token15] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__repository_start_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym__repository_start_token4] = ACTIONS(25),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [aux_sym__repository_start_token17] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_digest] = STATE(159),
    [anon_sym_sha256_COLON] = ACTIONS(35),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(55),
    [aux_sym__repository_start_token17] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_digest] = STATE(152),
    [anon_sym_sha256_COLON] = ACTIONS(61),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [aux_sym__repository_start_token4] = ACTIONS(55),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [aux_sym__repository_start_token17] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_digest] = STATE(157),
    [anon_sym_sha256_COLON] = ACTIONS(67),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym__repository_start_token4] = ACTIONS(25),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [aux_sym__repository_start_token17] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [aux_sym_from_token1] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [aux_sym__repository_start_token3] = ACTIONS(80),
    [aux_sym__repository_start_token4] = ACTIONS(75),
    [aux_sym__repository_start_token17] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__repository_continued] = STATE(17),
    [aux_sym_repository_repeat1] = STATE(17),
    [aux_sym__repository_start_token1] = ACTIONS(83),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [aux_sym__repository_start_token2] = ACTIONS(86),
    [aux_sym__repository_start_token5] = ACTIONS(89),
    [aux_sym__repository_start_token7] = ACTIONS(89),
    [aux_sym__repository_start_token9] = ACTIONS(92),
    [aux_sym__repository_start_token11] = ACTIONS(92),
    [aux_sym__repository_start_token13] = ACTIONS(95),
    [aux_sym__repository_start_token15] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__repository_continued] = STATE(11),
    [aux_sym_repository_repeat1] = STATE(11),
    [aux_sym__repository_start_token1] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(101),
    [aux_sym__repository_start_token2] = ACTIONS(101),
    [aux_sym__repository_start_token5] = ACTIONS(104),
    [aux_sym__repository_start_token7] = ACTIONS(104),
    [aux_sym__repository_start_token9] = ACTIONS(107),
    [aux_sym__repository_start_token11] = ACTIONS(107),
    [aux_sym__repository_start_token13] = ACTIONS(110),
    [aux_sym__repository_start_token15] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [aux_sym__repository_start_token4] = ACTIONS(55),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [aux_sym__repository_start_token17] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [aux_sym__repository_start_token4] = ACTIONS(55),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [aux_sym__repository_start_token17] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym__repository_start_token4] = ACTIONS(25),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [aux_sym__repository_start_token17] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_digest] = STATE(153),
    [anon_sym_sha256_COLON] = ACTIONS(113),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__repository_continued] = STATE(17),
    [aux_sym_repository_repeat1] = STATE(17),
    [aux_sym__repository_start_token1] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token5] = ACTIONS(121),
    [aux_sym__repository_start_token7] = ACTIONS(121),
    [aux_sym__repository_start_token9] = ACTIONS(124),
    [aux_sym__repository_start_token11] = ACTIONS(124),
    [aux_sym__repository_start_token13] = ACTIONS(127),
    [aux_sym__repository_start_token15] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_FROM] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [aux_sym_from_token1] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(134),
    [aux_sym__repository_start_token17] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [aux_sym__repository_start_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_FROM] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [aux_sym__repository_start_token4] = ACTIONS(142),
    [aux_sym__repository_start_token5] = ACTIONS(144),
    [aux_sym__repository_start_token8] = ACTIONS(147),
    [aux_sym__repository_start_token17] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [aux_sym__repository_start_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_FROM] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
    [aux_sym_from_token1] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(152),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token17] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [aux_sym__repository_start_repeat4] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_FROM] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [aux_sym__repository_start_token4] = ACTIONS(162),
    [aux_sym__repository_start_token13] = ACTIONS(164),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [aux_sym__repository_start_token17] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [aux_sym_from_token1] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(75),
    [aux_sym__repository_start_token3] = ACTIONS(73),
    [aux_sym__repository_start_token4] = ACTIONS(75),
    [aux_sym__repository_start_token17] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_digest] = STATE(149),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_FROM] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [aux_sym__repository_start_token4] = ACTIONS(172),
    [aux_sym__repository_start_token13] = ACTIONS(172),
    [aux_sym__repository_start_token16] = ACTIONS(170),
    [aux_sym__repository_start_token17] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_FROM] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [aux_sym__repository_start_token4] = ACTIONS(176),
    [aux_sym__repository_start_token9] = ACTIONS(176),
    [aux_sym__repository_start_token12] = ACTIONS(174),
    [aux_sym__repository_start_token17] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_digest] = STATE(152),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_FROM] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym_from_token1] = ACTIONS(180),
    [aux_sym__repository_start_token4] = ACTIONS(180),
    [aux_sym__repository_start_token5] = ACTIONS(180),
    [aux_sym__repository_start_token8] = ACTIONS(178),
    [aux_sym__repository_start_token17] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_as_name] = STATE(174),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_as_name] = STATE(172),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_as_name] = STATE(173),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_FROM] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [aux_sym_from_token1] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(194),
    [aux_sym__repository_start_token17] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_as_name] = STATE(170),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_FROM] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [aux_sym__repository_start_token4] = ACTIONS(198),
    [aux_sym__repository_start_token17] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_FROM] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token1] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token4] = ACTIONS(202),
    [aux_sym__repository_start_token17] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_tag] = STATE(131),
    [aux_sym__repository_start_token1] = ACTIONS(204),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [aux_sym__repository_start_token2] = ACTIONS(206),
    [aux_sym__repository_start_token5] = ACTIONS(208),
    [aux_sym__repository_start_token7] = ACTIONS(208),
    [aux_sym__repository_start_token9] = ACTIONS(210),
    [aux_sym__repository_start_token11] = ACTIONS(210),
    [aux_sym__repository_start_token13] = ACTIONS(212),
    [aux_sym__repository_start_token15] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_image] = STATE(130),
    [aux_sym__repository_start_token1] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [aux_sym__repository_start_token2] = ACTIONS(216),
    [aux_sym__repository_start_token5] = ACTIONS(218),
    [aux_sym__repository_start_token7] = ACTIONS(218),
    [aux_sym__repository_start_token9] = ACTIONS(220),
    [aux_sym__repository_start_token11] = ACTIONS(220),
    [aux_sym__repository_start_token13] = ACTIONS(222),
    [aux_sym__repository_start_token15] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_as_name] = STATE(167),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_as_name] = STATE(176),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_digest] = STATE(159),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_tag] = STATE(143),
    [aux_sym__repository_start_token1] = ACTIONS(204),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [aux_sym__repository_start_token2] = ACTIONS(206),
    [aux_sym__repository_start_token5] = ACTIONS(208),
    [aux_sym__repository_start_token7] = ACTIONS(208),
    [aux_sym__repository_start_token9] = ACTIONS(210),
    [aux_sym__repository_start_token11] = ACTIONS(210),
    [aux_sym__repository_start_token13] = ACTIONS(212),
    [aux_sym__repository_start_token15] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_digest] = STATE(153),
    [aux_sym__repository_start_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [aux_sym__repository_start_token2] = ACTIONS(39),
    [aux_sym__repository_start_token5] = ACTIONS(41),
    [aux_sym__repository_start_token7] = ACTIONS(41),
    [aux_sym__repository_start_token9] = ACTIONS(43),
    [aux_sym__repository_start_token11] = ACTIONS(43),
    [aux_sym__repository_start_token13] = ACTIONS(45),
    [aux_sym__repository_start_token15] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_as_name] = STATE(175),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token5] = ACTIONS(186),
    [aux_sym__repository_start_token7] = ACTIONS(186),
    [aux_sym__repository_start_token9] = ACTIONS(188),
    [aux_sym__repository_start_token11] = ACTIONS(188),
    [aux_sym__repository_start_token13] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [aux_sym__repository_start_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_FROM] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [aux_sym__repository_start_token4] = ACTIONS(142),
    [aux_sym__repository_start_token5] = ACTIONS(224),
    [aux_sym__repository_start_token8] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym__repository_start_repeat3] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym__repository_start_token4] = ACTIONS(230),
    [aux_sym__repository_start_token9] = ACTIONS(232),
    [aux_sym__repository_start_token12] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [aux_sym__repository_start_token1] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [aux_sym__repository_start_token2] = ACTIONS(236),
    [aux_sym__repository_start_token5] = ACTIONS(236),
    [aux_sym__repository_start_token7] = ACTIONS(236),
    [aux_sym__repository_start_token9] = ACTIONS(236),
    [aux_sym__repository_start_token11] = ACTIONS(236),
    [aux_sym__repository_start_token13] = ACTIONS(236),
    [aux_sym__repository_start_token15] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym__repository_start_repeat4] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [aux_sym__repository_start_token4] = ACTIONS(238),
    [aux_sym__repository_start_token13] = ACTIONS(240),
    [aux_sym__repository_start_token16] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [aux_sym__repository_start_repeat3] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [aux_sym__repository_start_token4] = ACTIONS(238),
    [aux_sym__repository_start_token9] = ACTIONS(232),
    [aux_sym__repository_start_token12] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [aux_sym__repository_start_token1] = ACTIONS(244),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [aux_sym__repository_start_token2] = ACTIONS(244),
    [aux_sym__repository_start_token5] = ACTIONS(244),
    [aux_sym__repository_start_token7] = ACTIONS(244),
    [aux_sym__repository_start_token9] = ACTIONS(244),
    [aux_sym__repository_start_token11] = ACTIONS(244),
    [aux_sym__repository_start_token13] = ACTIONS(244),
    [aux_sym__repository_start_token15] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [aux_sym__repository_start_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_FROM] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [aux_sym_from_token1] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(246),
    [aux_sym__repository_start_token3] = ACTIONS(248),
    [aux_sym__repository_start_token4] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__repository_start_repeat2] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [aux_sym__repository_start_token4] = ACTIONS(238),
    [aux_sym__repository_start_token5] = ACTIONS(252),
    [aux_sym__repository_start_token8] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [aux_sym__repository_start_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [aux_sym_from_token1] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(246),
    [aux_sym__repository_start_token3] = ACTIONS(248),
    [aux_sym__repository_start_token4] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [aux_sym__repository_start_token1] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [aux_sym__repository_start_token2] = ACTIONS(256),
    [aux_sym__repository_start_token5] = ACTIONS(256),
    [aux_sym__repository_start_token7] = ACTIONS(256),
    [aux_sym__repository_start_token9] = ACTIONS(256),
    [aux_sym__repository_start_token11] = ACTIONS(256),
    [aux_sym__repository_start_token13] = ACTIONS(256),
    [aux_sym__repository_start_token15] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [aux_sym__repository_start_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [aux_sym_from_token1] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(258),
    [aux_sym__repository_start_token3] = ACTIONS(261),
    [aux_sym__repository_start_token4] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [aux_sym__repository_start_token1] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [aux_sym__repository_start_token2] = ACTIONS(264),
    [aux_sym__repository_start_token5] = ACTIONS(264),
    [aux_sym__repository_start_token7] = ACTIONS(264),
    [aux_sym__repository_start_token9] = ACTIONS(264),
    [aux_sym__repository_start_token11] = ACTIONS(264),
    [aux_sym__repository_start_token13] = ACTIONS(264),
    [aux_sym__repository_start_token15] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [aux_sym__repository_start_token1] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [aux_sym__repository_start_token2] = ACTIONS(266),
    [aux_sym__repository_start_token5] = ACTIONS(266),
    [aux_sym__repository_start_token7] = ACTIONS(266),
    [aux_sym__repository_start_token9] = ACTIONS(266),
    [aux_sym__repository_start_token11] = ACTIONS(266),
    [aux_sym__repository_start_token13] = ACTIONS(266),
    [aux_sym__repository_start_token15] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [aux_sym__repository_start_token1] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [aux_sym__repository_start_token2] = ACTIONS(268),
    [aux_sym__repository_start_token5] = ACTIONS(268),
    [aux_sym__repository_start_token7] = ACTIONS(268),
    [aux_sym__repository_start_token9] = ACTIONS(268),
    [aux_sym__repository_start_token11] = ACTIONS(268),
    [aux_sym__repository_start_token13] = ACTIONS(268),
    [aux_sym__repository_start_token15] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [aux_sym__repository_start_token1] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [aux_sym__repository_start_token2] = ACTIONS(270),
    [aux_sym__repository_start_token5] = ACTIONS(270),
    [aux_sym__repository_start_token7] = ACTIONS(270),
    [aux_sym__repository_start_token9] = ACTIONS(270),
    [aux_sym__repository_start_token11] = ACTIONS(270),
    [aux_sym__repository_start_token13] = ACTIONS(270),
    [aux_sym__repository_start_token15] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [aux_sym__repository_start_token1] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(272),
    [aux_sym__repository_start_token2] = ACTIONS(272),
    [aux_sym__repository_start_token5] = ACTIONS(272),
    [aux_sym__repository_start_token7] = ACTIONS(272),
    [aux_sym__repository_start_token9] = ACTIONS(272),
    [aux_sym__repository_start_token11] = ACTIONS(272),
    [aux_sym__repository_start_token13] = ACTIONS(272),
    [aux_sym__repository_start_token15] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [aux_sym__repository_start_token1] = ACTIONS(274),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym__repository_start_token2] = ACTIONS(274),
    [aux_sym__repository_start_token5] = ACTIONS(274),
    [aux_sym__repository_start_token7] = ACTIONS(274),
    [aux_sym__repository_start_token9] = ACTIONS(274),
    [aux_sym__repository_start_token11] = ACTIONS(274),
    [aux_sym__repository_start_token13] = ACTIONS(274),
    [aux_sym__repository_start_token15] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [aux_sym__repository_start_repeat3] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_FROM] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
    [aux_sym_from_token1] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(152),
    [aux_sym__repository_start_token9] = ACTIONS(276),
    [aux_sym__repository_start_token12] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [aux_sym__repository_start_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym__repository_start_token4] = ACTIONS(230),
    [aux_sym__repository_start_token5] = ACTIONS(252),
    [aux_sym__repository_start_token8] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [aux_sym__repository_start_token1] = ACTIONS(282),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [aux_sym__repository_start_token2] = ACTIONS(282),
    [aux_sym__repository_start_token5] = ACTIONS(282),
    [aux_sym__repository_start_token7] = ACTIONS(282),
    [aux_sym__repository_start_token9] = ACTIONS(282),
    [aux_sym__repository_start_token11] = ACTIONS(282),
    [aux_sym__repository_start_token13] = ACTIONS(282),
    [aux_sym__repository_start_token15] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [aux_sym__repository_start_repeat4] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_FROM] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [aux_sym__repository_start_token4] = ACTIONS(162),
    [aux_sym__repository_start_token13] = ACTIONS(284),
    [aux_sym__repository_start_token16] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [aux_sym__repository_start_repeat4] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym__repository_start_token4] = ACTIONS(230),
    [aux_sym__repository_start_token13] = ACTIONS(240),
    [aux_sym__repository_start_token16] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_FROM] = ACTIONS(292),
    [anon_sym_AT] = ACTIONS(292),
    [aux_sym_from_token1] = ACTIONS(292),
    [aux_sym__repository_start_token4] = ACTIONS(294),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_FROM] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [aux_sym__repository_start_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_FROM] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [aux_sym_from_token1] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_FROM] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [aux_sym__repository_start_token4] = ACTIONS(176),
    [aux_sym__repository_start_token9] = ACTIONS(176),
    [aux_sym__repository_start_token12] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_FROM] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym_from_token1] = ACTIONS(180),
    [aux_sym__repository_start_token4] = ACTIONS(180),
    [aux_sym__repository_start_token5] = ACTIONS(180),
    [aux_sym__repository_start_token8] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [aux_sym__repository_start_repeat4] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_FROM] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token4] = ACTIONS(300),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym__repository_start_repeat3] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_FROM] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token4] = ACTIONS(300),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [aux_sym__repository_start_repeat2] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_FROM] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token4] = ACTIONS(300),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_FROM] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token1] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token4] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_FROM] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [aux_sym_from_token1] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [aux_sym__repository_start_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_FROM] = ACTIONS(292),
    [anon_sym_AT] = ACTIONS(292),
    [aux_sym_from_token1] = ACTIONS(292),
    [aux_sym__repository_start_token4] = ACTIONS(294),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_FROM] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [aux_sym__repository_start_token4] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [aux_sym__repository_start_repeat4] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_FROM] = ACTIONS(292),
    [anon_sym_AT] = ACTIONS(292),
    [aux_sym_from_token1] = ACTIONS(292),
    [aux_sym__repository_start_token4] = ACTIONS(294),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_FROM] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [aux_sym__repository_start_token4] = ACTIONS(172),
    [aux_sym__repository_start_token13] = ACTIONS(172),
    [aux_sym__repository_start_token16] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [aux_sym_from_token1] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(75),
    [aux_sym__repository_start_token3] = ACTIONS(73),
    [aux_sym__repository_start_token4] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [aux_sym__repository_start_repeat3] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_FROM] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [aux_sym__repository_start_token4] = ACTIONS(312),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_FROM] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [aux_sym__repository_start_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_FROM] = ACTIONS(316),
    [aux_sym_from_token1] = ACTIONS(316),
    [aux_sym__repository_start_token4] = ACTIONS(318),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_FROM] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_AT] = ACTIONS(320),
    [aux_sym_from_token1] = ACTIONS(320),
    [aux_sym__repository_start_token17] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(324),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_from_token1] = ACTIONS(21),
    [aux_sym__repository_start_token17] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [aux_sym__repository_start_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_FROM] = ACTIONS(316),
    [aux_sym_from_token1] = ACTIONS(316),
    [aux_sym__repository_start_token4] = ACTIONS(318),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [aux_sym__repository_start_repeat4] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_FROM] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [aux_sym__repository_start_token4] = ACTIONS(312),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__repository_start_repeat4] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_FROM] = ACTIONS(316),
    [aux_sym_from_token1] = ACTIONS(316),
    [aux_sym__repository_start_token4] = ACTIONS(318),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [aux_sym__repository_start_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_FROM] = ACTIONS(328),
    [aux_sym_from_token1] = ACTIONS(328),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_FROM] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_AT] = ACTIONS(332),
    [aux_sym_from_token1] = ACTIONS(332),
    [aux_sym__repository_start_token17] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(47),
    [aux_sym__repository_start_token17] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [aux_sym__repository_start_repeat2] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_FROM] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [aux_sym__repository_start_token4] = ACTIONS(312),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_FROM] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [aux_sym__repository_start_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_FROM] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [aux_sym__repository_start_token3] = ACTIONS(53),
    [aux_sym__repository_start_token4] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [aux_sym__repository_start_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_FROM] = ACTIONS(352),
    [aux_sym__repository_start_token4] = ACTIONS(354),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [aux_sym__repository_start_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_FROM] = ACTIONS(352),
    [aux_sym__repository_start_token4] = ACTIONS(354),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [aux_sym__repository_start_repeat3] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_FROM] = ACTIONS(340),
    [aux_sym__repository_start_token4] = ACTIONS(342),
    [aux_sym__repository_start_token9] = ACTIONS(27),
    [aux_sym__repository_start_token12] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [aux_sym__repository_start_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_FROM] = ACTIONS(340),
    [aux_sym__repository_start_token4] = ACTIONS(342),
    [aux_sym__repository_start_token5] = ACTIONS(69),
    [aux_sym__repository_start_token8] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [aux_sym__repository_start_repeat4] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_FROM] = ACTIONS(340),
    [aux_sym__repository_start_token4] = ACTIONS(342),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__repository_start_repeat4] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_FROM] = ACTIONS(352),
    [aux_sym__repository_start_token4] = ACTIONS(354),
    [aux_sym__repository_start_token13] = ACTIONS(63),
    [aux_sym__repository_start_token16] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_template_expr_less_than_equals] = STATE(207),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_FROM] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(320),
    [aux_sym_from_token1] = ACTIONS(320),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [sym_template_expr_less_than_equals] = STATE(205),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [aux_sym__repository_start_repeat1] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(360),
    [aux_sym__repository_start_token3] = ACTIONS(362),
    [aux_sym__repository_start_token4] = ACTIONS(364),
    [anon_sym_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [aux_sym__repository_start_repeat2] = STATE(118),
    [aux_sym__repository_start_token4] = ACTIONS(364),
    [aux_sym__repository_start_token5] = ACTIONS(368),
    [aux_sym__repository_start_token8] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [aux_sym__repository_start_repeat3] = STATE(116),
    [aux_sym__repository_start_token4] = ACTIONS(364),
    [aux_sym__repository_start_token9] = ACTIONS(372),
    [aux_sym__repository_start_token12] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [aux_sym__repository_start_repeat4] = STATE(107),
    [aux_sym__repository_start_token4] = ACTIONS(364),
    [aux_sym__repository_start_token13] = ACTIONS(376),
    [aux_sym__repository_start_token16] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [aux_sym__repository_start_repeat4] = STATE(123),
    [aux_sym__repository_start_token4] = ACTIONS(380),
    [aux_sym__repository_start_token13] = ACTIONS(376),
    [aux_sym__repository_start_token16] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym_template_expr_less_than_equals] = STATE(221),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [sym_template_expr_less_than_equals] = STATE(215),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_FROM] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(390),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [sym__directive] = STATE(169),
    [sym_from] = STATE(169),
    [aux_sym_dockerfile_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_FROM] = ACTIONS(394),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [sym__directive] = STATE(169),
    [sym_from] = STATE(169),
    [aux_sym_dockerfile_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_FROM] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(113),
    [aux_sym__repository_start_token14] = ACTIONS(399),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(401),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(404),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_FROM] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(47),
    [aux_sym_from_token1] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [sym_template_expr_less_than_equals] = STATE(226),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [aux_sym__repository_start_repeat3] = STATE(126),
    [aux_sym__repository_start_token4] = ACTIONS(380),
    [aux_sym__repository_start_token9] = ACTIONS(372),
    [aux_sym__repository_start_token12] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [aux_sym__repository_start_repeat1] = STATE(103),
    [anon_sym_DOLLAR] = ACTIONS(360),
    [aux_sym__repository_start_token3] = ACTIONS(362),
    [aux_sym__repository_start_token4] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [aux_sym__repository_start_repeat2] = STATE(128),
    [aux_sym__repository_start_token4] = ACTIONS(380),
    [aux_sym__repository_start_token5] = ACTIONS(368),
    [aux_sym__repository_start_token8] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(113),
    [aux_sym__repository_start_token14] = ACTIONS(411),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(413),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(415),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [sym_template_expr_less_than_equals] = STATE(185),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [aux_sym__repository_start_repeat1] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [aux_sym__repository_start_token3] = ACTIONS(420),
    [aux_sym__repository_start_token4] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_FROM] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_AT] = ACTIONS(332),
    [aux_sym_from_token1] = ACTIONS(332),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [aux_sym__repository_start_repeat4] = STATE(123),
    [aux_sym__repository_start_token4] = ACTIONS(162),
    [aux_sym__repository_start_token13] = ACTIONS(423),
    [aux_sym__repository_start_token16] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym_template_expr_less_than_equals] = STATE(188),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_from_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [aux_sym__repository_start_repeat3] = STATE(126),
    [aux_sym__repository_start_token4] = ACTIONS(152),
    [aux_sym__repository_start_token9] = ACTIONS(429),
    [aux_sym__repository_start_token12] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_template_expr_less_than_equals] = STATE(179),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [aux_sym__repository_start_repeat2] = STATE(128),
    [aux_sym__repository_start_token4] = ACTIONS(142),
    [aux_sym__repository_start_token5] = ACTIONS(435),
    [aux_sym__repository_start_token8] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [sym_template_expr_less_than_equals] = STATE(191),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(119),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(356),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(358),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_FROM] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_FROM] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_FROM] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(455),
    [aux_sym_from_token1] = ACTIONS(455),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_FROM] = ACTIONS(290),
    [anon_sym_AT] = ACTIONS(290),
    [aux_sym_from_token1] = ACTIONS(290),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_FROM] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
    [sym_comment] = ACTIONS(9),
  },
  [135] = {
    [aux_sym__repository_start_token4] = ACTIONS(180),
    [aux_sym__repository_start_token5] = ACTIONS(180),
    [aux_sym__repository_start_token8] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_FROM] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(296),
    [aux_sym_from_token1] = ACTIONS(296),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [aux_sym__repository_start_token4] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [aux_sym__repository_start_token4] = ACTIONS(176),
    [aux_sym__repository_start_token9] = ACTIONS(176),
    [aux_sym__repository_start_token12] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [140] = {
    [anon_sym_DOLLAR] = ACTIONS(202),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token4] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [141] = {
    [anon_sym_DOLLAR] = ACTIONS(75),
    [aux_sym__repository_start_token3] = ACTIONS(73),
    [aux_sym__repository_start_token4] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [aux_sym__repository_start_token4] = ACTIONS(172),
    [aux_sym__repository_start_token13] = ACTIONS(172),
    [aux_sym__repository_start_token16] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_FROM] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [sym_docker_variable] = STATE(141),
    [anon_sym_LBRACE] = ACTIONS(465),
    [sym__docker_variable] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_FROM] = ACTIONS(314),
    [aux_sym_from_token1] = ACTIONS(314),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [sym_variable_default_value] = STATE(197),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_COLON_DASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_FROM] = ACTIONS(308),
    [aux_sym_from_token1] = ACTIONS(308),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [sym_docker_variable] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym__docker_variable] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [anon_sym_FROM] = ACTIONS(477),
    [aux_sym_from_token1] = ACTIONS(479),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [sym_variable_default_value] = STATE(223),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_COLON_DASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(9),
  },
  [151] = {
    [sym_docker_variable] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(465),
    [sym__docker_variable] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_FROM] = ACTIONS(459),
    [aux_sym_from_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(9),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_FROM] = ACTIONS(483),
    [aux_sym_from_token1] = ACTIONS(485),
    [sym_comment] = ACTIONS(9),
  },
  [154] = {
    [sym_docker_variable] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym__docker_variable] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_FROM] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [sym_comment] = ACTIONS(9),
  },
  [156] = {
    [sym_docker_variable] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym__docker_variable] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_FROM] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(9),
  },
  [158] = {
    [sym_docker_variable] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(489),
    [sym__docker_variable] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_FROM] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(495),
    [sym_comment] = ACTIONS(9),
  },
  [160] = {
    [sym_variable_default_value] = STATE(218),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_COLON_DASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(9),
  },
  [161] = {
    [sym_docker_variable] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym__docker_variable] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_docker_variable] = STATE(93),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym__docker_variable] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
  },
  [163] = {
    [sym_docker_variable] = STATE(79),
    [anon_sym_LBRACE] = ACTIONS(489),
    [sym__docker_variable] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_FROM] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(9),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_FROM] = ACTIONS(501),
    [sym_comment] = ACTIONS(9),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_FROM] = ACTIONS(503),
    [sym_comment] = ACTIONS(9),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_FROM] = ACTIONS(449),
    [sym_comment] = ACTIONS(9),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_FROM] = ACTIONS(338),
    [sym_comment] = ACTIONS(9),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [anon_sym_FROM] = ACTIONS(505),
    [sym_comment] = ACTIONS(9),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_FROM] = ACTIONS(459),
    [sym_comment] = ACTIONS(9),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_FROM] = ACTIONS(350),
    [sym_comment] = ACTIONS(9),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_FROM] = ACTIONS(493),
    [sym_comment] = ACTIONS(9),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [anon_sym_FROM] = ACTIONS(477),
    [sym_comment] = ACTIONS(9),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_FROM] = ACTIONS(507),
    [sym_comment] = ACTIONS(9),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_FROM] = ACTIONS(509),
    [sym_comment] = ACTIONS(9),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_FROM] = ACTIONS(483),
    [sym_comment] = ACTIONS(9),
  },
  [177] = {
    [aux_sym__repository_start_token10] = ACTIONS(511),
    [sym_comment] = ACTIONS(9),
  },
  [178] = {
    [anon_sym_SLASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(9),
  },
  [179] = {
    [aux_sym__repository_start_token14] = ACTIONS(515),
    [sym_comment] = ACTIONS(9),
  },
  [180] = {
    [aux_sym__repository_start_token6] = ACTIONS(517),
    [sym_comment] = ACTIONS(9),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(9),
  },
  [182] = {
    [aux_sym__repository_start_token10] = ACTIONS(521),
    [sym_comment] = ACTIONS(9),
  },
  [183] = {
    [anon_sym_SLASH] = ACTIONS(523),
    [sym_comment] = ACTIONS(9),
  },
  [184] = {
    [aux_sym__repository_start_token10] = ACTIONS(525),
    [sym_comment] = ACTIONS(9),
  },
  [185] = {
    [aux_sym__repository_start_token14] = ACTIONS(527),
    [sym_comment] = ACTIONS(9),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_comment] = ACTIONS(9),
  },
  [187] = {
    [aux_sym__repository_start_token6] = ACTIONS(531),
    [sym_comment] = ACTIONS(9),
  },
  [188] = {
    [aux_sym__repository_start_token14] = ACTIONS(533),
    [sym_comment] = ACTIONS(9),
  },
  [189] = {
    [aux_sym__repository_start_token10] = ACTIONS(535),
    [sym_comment] = ACTIONS(9),
  },
  [190] = {
    [aux_sym__repository_start_token6] = ACTIONS(537),
    [sym_comment] = ACTIONS(9),
  },
  [191] = {
    [aux_sym__repository_start_token14] = ACTIONS(539),
    [sym_comment] = ACTIONS(9),
  },
  [192] = {
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [sym_comment] = ACTIONS(9),
  },
  [193] = {
    [aux_sym__repository_start_token6] = ACTIONS(543),
    [sym_comment] = ACTIONS(9),
  },
  [194] = {
    [anon_sym_SLASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(9),
  },
  [195] = {
    [sym_template_expr_percent_signs] = ACTIONS(547),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [sym_template_expr_curly_braces] = ACTIONS(549),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [anon_sym_RBRACE] = ACTIONS(551),
    [sym_comment] = ACTIONS(9),
  },
  [198] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(553),
    [sym_comment] = ACTIONS(3),
  },
  [199] = {
    [sym_template_expr_percent_signs] = ACTIONS(555),
    [sym_comment] = ACTIONS(3),
  },
  [200] = {
    [sym_template_expr_curly_braces] = ACTIONS(557),
    [sym_comment] = ACTIONS(3),
  },
  [201] = {
    [sym_template_expr_percent_signs] = ACTIONS(559),
    [sym_comment] = ACTIONS(3),
  },
  [202] = {
    [sym_template_expr_curly_braces] = ACTIONS(561),
    [sym_comment] = ACTIONS(3),
  },
  [203] = {
    [sym_template_expr_percent_signs] = ACTIONS(563),
    [sym_comment] = ACTIONS(3),
  },
  [204] = {
    [sym_template_expr_curly_braces] = ACTIONS(565),
    [sym_comment] = ACTIONS(3),
  },
  [205] = {
    [aux_sym__repository_start_token14] = ACTIONS(567),
    [sym_comment] = ACTIONS(9),
  },
  [206] = {
    [aux_sym__repository_start_token6] = ACTIONS(569),
    [sym_comment] = ACTIONS(9),
  },
  [207] = {
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(9),
  },
  [208] = {
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [sym_comment] = ACTIONS(9),
  },
  [209] = {
    [aux_sym__repository_start_token6] = ACTIONS(575),
    [sym_comment] = ACTIONS(9),
  },
  [210] = {
    [sym_template_expr_percent_signs] = ACTIONS(577),
    [sym_comment] = ACTIONS(3),
  },
  [211] = {
    [sym_template_expr_curly_braces] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_SLASH] = ACTIONS(581),
    [sym_comment] = ACTIONS(9),
  },
  [213] = {
    [sym_template_expr_percent_signs] = ACTIONS(583),
    [sym_comment] = ACTIONS(3),
  },
  [214] = {
    [sym_template_expr_curly_braces] = ACTIONS(585),
    [sym_comment] = ACTIONS(3),
  },
  [215] = {
    [aux_sym__repository_start_token14] = ACTIONS(587),
    [sym_comment] = ACTIONS(9),
  },
  [216] = {
    [aux_sym__repository_start_token10] = ACTIONS(589),
    [sym_comment] = ACTIONS(9),
  },
  [217] = {
    [aux_sym__repository_start_token6] = ACTIONS(591),
    [sym_comment] = ACTIONS(9),
  },
  [218] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(9),
  },
  [219] = {
    [aux_sym__repository_start_token6] = ACTIONS(595),
    [sym_comment] = ACTIONS(9),
  },
  [220] = {
    [aux_sym__repository_start_token10] = ACTIONS(597),
    [sym_comment] = ACTIONS(9),
  },
  [221] = {
    [aux_sym__repository_start_token14] = ACTIONS(599),
    [sym_comment] = ACTIONS(9),
  },
  [222] = {
    [sym__docker_variable] = ACTIONS(601),
    [sym_comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(603),
    [sym_comment] = ACTIONS(9),
  },
  [224] = {
    [aux_sym__repository_start_token6] = ACTIONS(605),
    [sym_comment] = ACTIONS(9),
  },
  [225] = {
    [aux_sym__repository_start_token10] = ACTIONS(607),
    [sym_comment] = ACTIONS(9),
  },
  [226] = {
    [aux_sym__repository_start_token14] = ACTIONS(609),
    [sym_comment] = ACTIONS(9),
  },
  [227] = {
    [sym__docker_variable] = ACTIONS(611),
    [sym_comment] = ACTIONS(3),
  },
  [228] = {
    [sym_template_expr_curly_braces] = ACTIONS(613),
    [sym_comment] = ACTIONS(3),
  },
  [229] = {
    [sym_template_expr_percent_signs] = ACTIONS(615),
    [sym_comment] = ACTIONS(3),
  },
  [230] = {
    [sym_template_expr_percent_signs] = ACTIONS(617),
    [sym_comment] = ACTIONS(3),
  },
  [231] = {
    [sym__docker_variable] = ACTIONS(619),
    [sym_comment] = ACTIONS(3),
  },
  [232] = {
    [sym_template_expr_curly_braces] = ACTIONS(621),
    [sym_comment] = ACTIONS(3),
  },
  [233] = {
    [sym_template_expr_percent_signs] = ACTIONS(623),
    [sym_comment] = ACTIONS(3),
  },
  [234] = {
    [sym_template_expr_curly_braces] = ACTIONS(625),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = false}, SHIFT(83),
  [13] = {.count = 1, .reusable = false}, SHIFT(148),
  [15] = {.count = 1, .reusable = false}, SHIFT(234),
  [17] = {.count = 1, .reusable = false}, SHIFT(230),
  [19] = {.count = 1, .reusable = false}, SHIFT(109),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [25] = {.count = 1, .reusable = false}, SHIFT(89),
  [27] = {.count = 1, .reusable = false}, SHIFT(195),
  [29] = {.count = 1, .reusable = true}, SHIFT(195),
  [31] = {.count = 1, .reusable = true}, SHIFT(58),
  [33] = {.count = 1, .reusable = false}, SHIFT(58),
  [35] = {.count = 1, .reusable = false}, SHIFT(23),
  [37] = {.count = 1, .reusable = false}, SHIFT(155),
  [39] = {.count = 1, .reusable = false}, SHIFT(156),
  [41] = {.count = 1, .reusable = false}, SHIFT(202),
  [43] = {.count = 1, .reusable = false}, SHIFT(201),
  [45] = {.count = 1, .reusable = false}, SHIFT(124),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [51] = {.count = 1, .reusable = false}, SHIFT(161),
  [53] = {.count = 1, .reusable = true}, SHIFT(161),
  [55] = {.count = 1, .reusable = false}, SHIFT(84),
  [57] = {.count = 1, .reusable = true}, SHIFT(52),
  [59] = {.count = 1, .reusable = false}, SHIFT(52),
  [61] = {.count = 1, .reusable = false}, SHIFT(41),
  [63] = {.count = 1, .reusable = false}, SHIFT(127),
  [65] = {.count = 1, .reusable = true}, SHIFT(127),
  [67] = {.count = 1, .reusable = false}, SHIFT(26),
  [69] = {.count = 1, .reusable = false}, SHIFT(196),
  [71] = {.count = 1, .reusable = true}, SHIFT(196),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(161),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(161),
  [83] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(212),
  [86] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(151),
  [89] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(211),
  [92] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(210),
  [95] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(102),
  [98] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(212),
  [101] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(151),
  [104] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(211),
  [107] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(210),
  [110] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(102),
  [113] = {.count = 1, .reusable = false}, SHIFT(39),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(212),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(151),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(211),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(210),
  [127] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(102),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [134] = {.count = 1, .reusable = false}, SHIFT(90),
  [136] = {.count = 1, .reusable = true}, SHIFT(48),
  [138] = {.count = 1, .reusable = false}, SHIFT(48),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(196),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(196),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [152] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [154] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(195),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(195),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [162] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(127),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(127),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [182] = {.count = 1, .reusable = false}, SHIFT(165),
  [184] = {.count = 1, .reusable = false}, SHIFT(162),
  [186] = {.count = 1, .reusable = false}, SHIFT(200),
  [188] = {.count = 1, .reusable = false}, SHIFT(199),
  [190] = {.count = 1, .reusable = false}, SHIFT(120),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [204] = {.count = 1, .reusable = false}, SHIFT(132),
  [206] = {.count = 1, .reusable = false}, SHIFT(154),
  [208] = {.count = 1, .reusable = false}, SHIFT(204),
  [210] = {.count = 1, .reusable = false}, SHIFT(203),
  [212] = {.count = 1, .reusable = false}, SHIFT(129),
  [214] = {.count = 1, .reusable = false}, SHIFT(101),
  [216] = {.count = 1, .reusable = false}, SHIFT(158),
  [218] = {.count = 1, .reusable = false}, SHIFT(214),
  [220] = {.count = 1, .reusable = false}, SHIFT(213),
  [222] = {.count = 1, .reusable = false}, SHIFT(100),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(228),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(228),
  [230] = {.count = 1, .reusable = false}, SHIFT(122),
  [232] = {.count = 1, .reusable = false}, SHIFT(229),
  [234] = {.count = 1, .reusable = true}, SHIFT(229),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [238] = {.count = 1, .reusable = false}, SHIFT(125),
  [240] = {.count = 1, .reusable = false}, SHIFT(108),
  [242] = {.count = 1, .reusable = true}, SHIFT(108),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [246] = {.count = 1, .reusable = false}, SHIFT(163),
  [248] = {.count = 1, .reusable = true}, SHIFT(163),
  [250] = {.count = 1, .reusable = false}, SHIFT(114),
  [252] = {.count = 1, .reusable = false}, SHIFT(228),
  [254] = {.count = 1, .reusable = true}, SHIFT(228),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(163),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(163),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(229),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(229),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(108),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(108),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [294] = {.count = 1, .reusable = false}, SHIFT(134),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [300] = {.count = 1, .reusable = false}, SHIFT(133),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [306] = {.count = 1, .reusable = false}, SHIFT(136),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [312] = {.count = 1, .reusable = false}, SHIFT(145),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [318] = {.count = 1, .reusable = false}, SHIFT(164),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [324] = {.count = 1, .reusable = true}, SHIFT(55),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [330] = {.count = 1, .reusable = false}, SHIFT(147),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [336] = {.count = 1, .reusable = true}, SHIFT(62),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [342] = {.count = 1, .reusable = false}, SHIFT(171),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [348] = {.count = 1, .reusable = false}, SHIFT(168),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [354] = {.count = 1, .reusable = false}, SHIFT(166),
  [356] = {.count = 1, .reusable = true}, SHIFT(119),
  [358] = {.count = 1, .reusable = false}, SHIFT(119),
  [360] = {.count = 1, .reusable = false}, SHIFT(144),
  [362] = {.count = 1, .reusable = true}, SHIFT(144),
  [364] = {.count = 1, .reusable = false}, SHIFT(183),
  [366] = {.count = 1, .reusable = false}, SHIFT(57),
  [368] = {.count = 1, .reusable = false}, SHIFT(232),
  [370] = {.count = 1, .reusable = true}, SHIFT(232),
  [372] = {.count = 1, .reusable = false}, SHIFT(233),
  [374] = {.count = 1, .reusable = true}, SHIFT(233),
  [376] = {.count = 1, .reusable = false}, SHIFT(115),
  [378] = {.count = 1, .reusable = true}, SHIFT(115),
  [380] = {.count = 1, .reusable = false}, SHIFT(178),
  [382] = {.count = 1, .reusable = false}, SHIFT(59),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [386] = {.count = 1, .reusable = true}, SHIFT(35),
  [388] = {.count = 1, .reusable = true}, SHIFT(8),
  [390] = {.count = 1, .reusable = true}, SHIFT(37),
  [392] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(113),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(113),
  [407] = {.count = 1, .reusable = false}, SHIFT(194),
  [409] = {.count = 1, .reusable = false}, SHIFT(45),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [413] = {.count = 1, .reusable = true}, SHIFT(113),
  [415] = {.count = 1, .reusable = false}, SHIFT(113),
  [417] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(144),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(144),
  [423] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(115),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(115),
  [429] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(233),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(233),
  [435] = {.count = 2, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(232),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(232),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [443] = {.count = 1, .reusable = true}, SHIFT(40),
  [445] = {.count = 1, .reusable = true}, SHIFT(6),
  [447] = {.count = 1, .reusable = true}, SHIFT(32),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [451] = {.count = 1, .reusable = true}, SHIFT(16),
  [453] = {.count = 1, .reusable = true}, SHIFT(38),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [461] = {.count = 1, .reusable = true}, SHIFT(4),
  [463] = {.count = 1, .reusable = true}, SHIFT(29),
  [465] = {.count = 1, .reusable = true}, SHIFT(231),
  [467] = {.count = 1, .reusable = true}, SHIFT(137),
  [469] = {.count = 1, .reusable = true}, SHIFT(34),
  [471] = {.count = 1, .reusable = true}, SHIFT(198),
  [473] = {.count = 1, .reusable = true}, SHIFT(222),
  [475] = {.count = 1, .reusable = true}, SHIFT(31),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [479] = {.count = 1, .reusable = true}, SHIFT(42),
  [481] = {.count = 1, .reusable = true}, SHIFT(140),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [485] = {.count = 1, .reusable = true}, SHIFT(30),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [489] = {.count = 1, .reusable = true}, SHIFT(227),
  [491] = {.count = 1, .reusable = true}, SHIFT(74),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [495] = {.count = 1, .reusable = true}, SHIFT(28),
  [497] = {.count = 1, .reusable = true}, SHIFT(73),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [505] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [511] = {.count = 1, .reusable = true}, SHIFT(105),
  [513] = {.count = 1, .reusable = true}, SHIFT(56),
  [515] = {.count = 1, .reusable = true}, SHIFT(24),
  [517] = {.count = 1, .reusable = true}, SHIFT(27),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [521] = {.count = 1, .reusable = true}, SHIFT(96),
  [523] = {.count = 1, .reusable = true}, SHIFT(59),
  [525] = {.count = 1, .reusable = true}, SHIFT(25),
  [527] = {.count = 1, .reusable = true}, SHIFT(98),
  [529] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [531] = {.count = 1, .reusable = true}, SHIFT(97),
  [533] = {.count = 1, .reusable = true}, SHIFT(86),
  [535] = {.count = 1, .reusable = true}, SHIFT(80),
  [537] = {.count = 1, .reusable = true}, SHIFT(91),
  [539] = {.count = 1, .reusable = true}, SHIFT(70),
  [541] = {.count = 1, .reusable = true}, SHIFT(71),
  [543] = {.count = 1, .reusable = true}, SHIFT(72),
  [545] = {.count = 1, .reusable = true}, SHIFT(57),
  [547] = {.count = 1, .reusable = true}, SHIFT(184),
  [549] = {.count = 1, .reusable = true}, SHIFT(180),
  [551] = {.count = 1, .reusable = true}, SHIFT(33),
  [553] = {.count = 1, .reusable = true}, SHIFT(181),
  [555] = {.count = 1, .reusable = true}, SHIFT(182),
  [557] = {.count = 1, .reusable = true}, SHIFT(187),
  [559] = {.count = 1, .reusable = true}, SHIFT(189),
  [561] = {.count = 1, .reusable = true}, SHIFT(190),
  [563] = {.count = 1, .reusable = true}, SHIFT(192),
  [565] = {.count = 1, .reusable = true}, SHIFT(193),
  [567] = {.count = 1, .reusable = true}, SHIFT(106),
  [569] = {.count = 1, .reusable = true}, SHIFT(104),
  [571] = {.count = 1, .reusable = true}, SHIFT(46),
  [573] = {.count = 1, .reusable = true}, SHIFT(47),
  [575] = {.count = 1, .reusable = true}, SHIFT(50),
  [577] = {.count = 1, .reusable = true}, SHIFT(177),
  [579] = {.count = 1, .reusable = true}, SHIFT(206),
  [581] = {.count = 1, .reusable = true}, SHIFT(54),
  [583] = {.count = 1, .reusable = true}, SHIFT(208),
  [585] = {.count = 1, .reusable = true}, SHIFT(209),
  [587] = {.count = 1, .reusable = true}, SHIFT(7),
  [589] = {.count = 1, .reusable = true}, SHIFT(14),
  [591] = {.count = 1, .reusable = true}, SHIFT(13),
  [593] = {.count = 1, .reusable = true}, SHIFT(76),
  [595] = {.count = 1, .reusable = true}, SHIFT(69),
  [597] = {.count = 1, .reusable = true}, SHIFT(68),
  [599] = {.count = 1, .reusable = true}, SHIFT(78),
  [601] = {.count = 1, .reusable = true}, SHIFT(146),
  [603] = {.count = 1, .reusable = true}, SHIFT(138),
  [605] = {.count = 1, .reusable = true}, SHIFT(135),
  [607] = {.count = 1, .reusable = true}, SHIFT(139),
  [609] = {.count = 1, .reusable = true}, SHIFT(142),
  [611] = {.count = 1, .reusable = true}, SHIFT(160),
  [613] = {.count = 1, .reusable = true}, SHIFT(219),
  [615] = {.count = 1, .reusable = true}, SHIFT(220),
  [617] = {.count = 1, .reusable = true}, SHIFT(216),
  [619] = {.count = 1, .reusable = true}, SHIFT(150),
  [621] = {.count = 1, .reusable = true}, SHIFT(224),
  [623] = {.count = 1, .reusable = true}, SHIFT(225),
  [625] = {.count = 1, .reusable = true}, SHIFT(217),
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
