#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 126
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  aux_sym_from_token1 = 1,
  anon_sym_COLON = 2,
  anon_sym_SLASH = 3,
  anon_sym_AT = 4,
  aux_sym_from_token2 = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_repository_token1 = 7,
  aux_sym_repository_token2 = 8,
  aux_sym_repository_token3 = 9,
  aux_sym_digest_token1 = 10,
  aux_sym_digest_token2 = 11,
  sym_as_name = 12,
  aux_sym_expose_token1 = 13,
  anon_sym_DASH = 14,
  aux_sym_port_part_token1 = 15,
  anon_sym_udp = 16,
  anon_sym_tcp = 17,
  anon_sym_UDP = 18,
  anon_sym_TCP = 19,
  anon_sym_DOLLAR = 20,
  anon_sym_DOLLAR_LBRACE = 21,
  anon_sym_RBRACE = 22,
  sym__docker_variable = 23,
  anon_sym_COLON_DASH = 24,
  aux_sym_variable_default_value_token1 = 25,
  sym_comment = 26,
  sym_dockerfile = 27,
  sym__directives = 28,
  sym_from = 29,
  sym_repository = 30,
  sym_image = 31,
  sym_tag = 32,
  sym_digest = 33,
  sym_expose = 34,
  sym_port_spec = 35,
  sym__port_spec_1 = 36,
  sym_port_part = 37,
  sym_port_protocol = 38,
  sym_docker_variable = 39,
  sym_variable_default_value = 40,
  aux_sym_dockerfile_repeat1 = 41,
  aux_sym_repository_repeat1 = 42,
  aux_sym_repository_repeat2 = 43,
  aux_sym_digest_repeat1 = 44,
  aux_sym_expose_repeat1 = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_from_token1] = "from_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_AT] = "@",
  [aux_sym_from_token2] = "from_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_repository_token1] = "repository_token1",
  [aux_sym_repository_token2] = "repository_token2",
  [aux_sym_repository_token3] = "repository_token3",
  [aux_sym_digest_token1] = "digest_token1",
  [aux_sym_digest_token2] = "digest_token2",
  [sym_as_name] = "as_name",
  [aux_sym_expose_token1] = "expose_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_port_part_token1] = "port_part_token1",
  [anon_sym_udp] = "udp",
  [anon_sym_tcp] = "tcp",
  [anon_sym_UDP] = "UDP",
  [anon_sym_TCP] = "TCP",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [sym__docker_variable] = "_docker_variable",
  [anon_sym_COLON_DASH] = ":-",
  [aux_sym_variable_default_value_token1] = "variable_default_value_token1",
  [sym_comment] = "comment",
  [sym_dockerfile] = "dockerfile",
  [sym__directives] = "_directives",
  [sym_from] = "from",
  [sym_repository] = "repository",
  [sym_image] = "image",
  [sym_tag] = "tag",
  [sym_digest] = "digest",
  [sym_expose] = "expose",
  [sym_port_spec] = "port_spec",
  [sym__port_spec_1] = "_port_spec_1",
  [sym_port_part] = "port_part",
  [sym_port_protocol] = "port_protocol",
  [sym_docker_variable] = "docker_variable",
  [sym_variable_default_value] = "variable_default_value",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym_repository_repeat2] = "repository_repeat2",
  [aux_sym_digest_repeat1] = "digest_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_from_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_repository_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repository_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repository_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digest_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_as_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expose_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_part_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UDP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_dockerfile] = {
    .visible = true,
    .named = true,
  },
  [sym__directives] = {
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
  [sym_expose] = {
    .visible = true,
    .named = true,
  },
  [sym_port_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__port_spec_1] = {
    .visible = false,
    .named = true,
  },
  [sym_port_part] = {
    .visible = true,
    .named = true,
  },
  [sym_port_protocol] = {
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
  [aux_sym_dockerfile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repository_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repository_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_repository_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_repository_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_repository_token3);
      if (lookahead == 0) ADVANCE(33);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_repository_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_digest_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_digest_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_as_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_UDP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_TCP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
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
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_expose_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_port_part_token1] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_UDP] = ACTIONS(1),
    [anon_sym_TCP] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_dockerfile] = STATE(102),
    [sym__directives] = STATE(43),
    [sym_from] = STATE(43),
    [sym_expose] = STATE(43),
    [aux_sym_dockerfile_repeat1] = STATE(43),
    [aux_sym_from_token1] = ACTIONS(5),
    [aux_sym_expose_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_docker_variable] = STATE(2),
    [aux_sym_repository_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_from_token2] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_repository_token2] = ACTIONS(13),
    [aux_sym_repository_token3] = ACTIONS(11),
    [aux_sym_expose_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(22),
  },
  [3] = {
    [sym_docker_variable] = STATE(3),
    [aux_sym_repository_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_from_token2] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_repository_token2] = ACTIONS(24),
    [aux_sym_expose_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(30),
    [sym_comment] = ACTIONS(22),
  },
  [4] = {
    [sym_port_spec] = STATE(5),
    [sym__port_spec_1] = STATE(30),
    [sym_port_part] = STATE(23),
    [sym_docker_variable] = STATE(9),
    [aux_sym_expose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_from_token1] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [aux_sym_expose_token1] = ACTIONS(33),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_port_spec] = STATE(5),
    [sym__port_spec_1] = STATE(30),
    [sym_port_part] = STATE(23),
    [sym_docker_variable] = STATE(9),
    [aux_sym_expose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_from_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [aux_sym_expose_token1] = ACTIONS(43),
    [aux_sym_port_part_token1] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_docker_variable] = STATE(2),
    [aux_sym_repository_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_from_token1] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_from_token2] = ACTIONS(59),
    [aux_sym_repository_token2] = ACTIONS(61),
    [aux_sym_repository_token3] = ACTIONS(63),
    [aux_sym_expose_token1] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(22),
  },
  [7] = {
    [sym_docker_variable] = STATE(6),
    [aux_sym_repository_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_from_token1] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [aux_sym_from_token2] = ACTIONS(71),
    [aux_sym_repository_token2] = ACTIONS(73),
    [aux_sym_repository_token3] = ACTIONS(75),
    [aux_sym_expose_token1] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(22),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_from_token1] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [aux_sym_from_token2] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [aux_sym_repository_token2] = ACTIONS(79),
    [aux_sym_repository_token3] = ACTIONS(79),
    [aux_sym_expose_token1] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(22),
  },
  [9] = {
    [sym_port_protocol] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_from_token1] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [aux_sym_expose_token1] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [aux_sym_port_part_token1] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_from_token1] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(89),
    [aux_sym_from_token2] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [aux_sym_repository_token2] = ACTIONS(89),
    [aux_sym_repository_token3] = ACTIONS(89),
    [aux_sym_expose_token1] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(22),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_from_token1] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [aux_sym_from_token2] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [aux_sym_repository_token2] = ACTIONS(93),
    [aux_sym_repository_token3] = ACTIONS(93),
    [aux_sym_expose_token1] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(22),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_from_token1] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [aux_sym_from_token2] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [aux_sym_repository_token2] = ACTIONS(91),
    [aux_sym_expose_token1] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(22),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_from_token1] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(89),
    [aux_sym_from_token2] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [aux_sym_repository_token2] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(22),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_from_token1] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [aux_sym_from_token2] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [aux_sym_repository_token2] = ACTIONS(77),
    [aux_sym_expose_token1] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(22),
  },
  [15] = {
    [sym_docker_variable] = STATE(3),
    [aux_sym_repository_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_from_token1] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_from_token2] = ACTIONS(59),
    [aux_sym_repository_token2] = ACTIONS(95),
    [aux_sym_expose_token1] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [16] = {
    [sym_docker_variable] = STATE(15),
    [aux_sym_repository_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_from_token1] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [aux_sym_from_token2] = ACTIONS(71),
    [aux_sym_repository_token2] = ACTIONS(101),
    [aux_sym_expose_token1] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [17] = {
    [sym_docker_variable] = STATE(21),
    [aux_sym_repository_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym_from_token1] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
    [aux_sym_from_token2] = ACTIONS(105),
    [aux_sym_repository_token2] = ACTIONS(107),
    [aux_sym_expose_token1] = ACTIONS(105),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_from_token1] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [aux_sym_port_part_token1] = ACTIONS(87),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_port_spec] = STATE(4),
    [sym__port_spec_1] = STATE(30),
    [sym_port_part] = STATE(23),
    [sym_docker_variable] = STATE(9),
    [aux_sym_expose_repeat1] = STATE(4),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_from_token1] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [aux_sym_expose_token1] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [aux_sym_port_part_token1] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_docker_variable] = STATE(3),
    [aux_sym_repository_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_from_token1] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [aux_sym_from_token2] = ACTIONS(115),
    [aux_sym_repository_token2] = ACTIONS(95),
    [aux_sym_expose_token1] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_from_token1] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [aux_sym_expose_token1] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [aux_sym_port_part_token1] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_from_token1] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [aux_sym_expose_token1] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [aux_sym_port_part_token1] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_docker_variable] = STATE(27),
    [aux_sym_digest_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(123),
    [aux_sym_from_token1] = ACTIONS(125),
    [aux_sym_from_token2] = ACTIONS(125),
    [aux_sym_digest_token2] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(22),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_expose_token1] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [aux_sym_port_part_token1] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_docker_variable] = STATE(26),
    [aux_sym_digest_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_from_token1] = ACTIONS(139),
    [aux_sym_from_token2] = ACTIONS(139),
    [aux_sym_digest_token2] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(22),
  },
  [27] = {
    [sym_docker_variable] = STATE(26),
    [aux_sym_digest_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(152),
    [aux_sym_from_token2] = ACTIONS(152),
    [aux_sym_digest_token2] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(152),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(22),
  },
  [28] = {
    [sym_port_spec] = STATE(103),
    [sym__port_spec_1] = STATE(30),
    [sym_port_part] = STATE(83),
    [sym_docker_variable] = STATE(9),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [aux_sym_port_part_token1] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_from_token1] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [aux_sym_port_part_token1] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_from_token1] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [aux_sym_expose_token1] = ACTIONS(170),
    [aux_sym_port_part_token1] = ACTIONS(170),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_port_part_token1] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_port_spec] = STATE(103),
    [sym__port_spec_1] = STATE(30),
    [sym_port_part] = STATE(83),
    [sym_docker_variable] = STATE(9),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_repository] = STATE(110),
    [sym_image] = STATE(50),
    [sym_docker_variable] = STATE(7),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [aux_sym_repository_token1] = ACTIONS(180),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(22),
  },
  [35] = {
    [sym__port_spec_1] = STATE(36),
    [sym_port_part] = STATE(23),
    [sym_docker_variable] = STATE(9),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_port_part_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_docker_variable] = STATE(25),
    [anon_sym_udp] = ACTIONS(186),
    [anon_sym_tcp] = ACTIONS(186),
    [anon_sym_UDP] = ACTIONS(186),
    [anon_sym_TCP] = ACTIONS(186),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_from_token1] = ACTIONS(93),
    [aux_sym_from_token2] = ACTIONS(93),
    [aux_sym_digest_token2] = ACTIONS(91),
    [aux_sym_expose_token1] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(22),
  },
  [39] = {
    [sym_docker_variable] = STATE(3),
    [aux_sym_repository_repeat1] = STATE(3),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_repository_token2] = ACTIONS(95),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_from_token1] = ACTIONS(89),
    [aux_sym_from_token2] = ACTIONS(89),
    [aux_sym_digest_token2] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(22),
  },
  [41] = {
    [sym_docker_variable] = STATE(2),
    [aux_sym_repository_repeat1] = STATE(2),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [aux_sym_repository_token2] = ACTIONS(61),
    [aux_sym_repository_token3] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(22),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_from_token1] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_expose_token1] = ACTIONS(194),
    [aux_sym_port_part_token1] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__directives] = STATE(45),
    [sym_from] = STATE(45),
    [sym_expose] = STATE(45),
    [aux_sym_dockerfile_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(5),
    [aux_sym_expose_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_docker_variable] = STATE(41),
    [aux_sym_repository_repeat1] = STATE(41),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [aux_sym_repository_token2] = ACTIONS(202),
    [aux_sym_repository_token3] = ACTIONS(204),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(22),
  },
  [45] = {
    [sym__directives] = STATE(45),
    [sym_from] = STATE(45),
    [sym_expose] = STATE(45),
    [aux_sym_dockerfile_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(206),
    [aux_sym_from_token1] = ACTIONS(208),
    [aux_sym_expose_token1] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_from_token1] = ACTIONS(79),
    [aux_sym_from_token2] = ACTIONS(79),
    [aux_sym_digest_token2] = ACTIONS(77),
    [aux_sym_expose_token1] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(22),
  },
  [47] = {
    [sym_docker_variable] = STATE(3),
    [aux_sym_repository_repeat1] = STATE(3),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_repository_token2] = ACTIONS(95),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [48] = {
    [sym_tag] = STATE(67),
    [sym_docker_variable] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_repository_token1] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [49] = {
    [sym_tag] = STATE(66),
    [sym_docker_variable] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_repository_token1] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [aux_sym_from_token1] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(226),
    [aux_sym_expose_token1] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_docker_variable] = STATE(47),
    [aux_sym_repository_repeat1] = STATE(47),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [aux_sym_repository_token2] = ACTIONS(230),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [52] = {
    [sym_docker_variable] = STATE(54),
    [aux_sym_repository_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [aux_sym_repository_token2] = ACTIONS(232),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_from_token1] = ACTIONS(234),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_docker_variable] = STATE(3),
    [aux_sym_repository_repeat1] = STATE(3),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [aux_sym_repository_token2] = ACTIONS(95),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_from_token1] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_AT] = ACTIONS(242),
    [aux_sym_from_token2] = ACTIONS(242),
    [aux_sym_expose_token1] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [aux_sym_from_token1] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_image] = STATE(53),
    [sym_docker_variable] = STATE(16),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [aux_sym_repository_token1] = ACTIONS(248),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [58] = {
    [sym_port_part] = STATE(97),
    [sym_docker_variable] = STATE(9),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_from_token1] = ACTIONS(250),
    [anon_sym_AT] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(250),
    [aux_sym_expose_token1] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_docker_variable] = STATE(39),
    [aux_sym_repository_repeat1] = STATE(39),
    [aux_sym_repository_token2] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [61] = {
    [sym_port_part] = STATE(94),
    [sym_docker_variable] = STATE(9),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_digest] = STATE(72),
    [sym_docker_variable] = STATE(24),
    [aux_sym_digest_token1] = ACTIONS(254),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(22),
  },
  [63] = {
    [sym_digest] = STATE(74),
    [sym_docker_variable] = STATE(24),
    [aux_sym_digest_token1] = ACTIONS(254),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(22),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym_from_token1] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(256),
    [aux_sym_from_token2] = ACTIONS(256),
    [aux_sym_expose_token1] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym_port_part] = STATE(32),
    [sym_docker_variable] = STATE(9),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(260),
    [aux_sym_from_token2] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_from_token1] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_port_part] = STATE(104),
    [sym_docker_variable] = STATE(9),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym_port_part] = STATE(105),
    [sym_docker_variable] = STATE(9),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_port_part] = STATE(92),
    [sym_docker_variable] = STATE(9),
    [aux_sym_port_part_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_digest] = STATE(75),
    [sym_docker_variable] = STATE(24),
    [aux_sym_digest_token1] = ACTIONS(254),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(22),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_from_token1] = ACTIONS(264),
    [aux_sym_from_token2] = ACTIONS(266),
    [aux_sym_expose_token1] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_docker_variable] = STATE(44),
    [aux_sym_repository_token1] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(22),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_from_token1] = ACTIONS(234),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [aux_sym_from_token2] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym_docker_variable] = STATE(51),
    [aux_sym_repository_token1] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [77] = {
    [sym_docker_variable] = STATE(52),
    [aux_sym_repository_token1] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(22),
  },
  [78] = {
    [aux_sym_repository_repeat2] = STATE(89),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_from_token1] = ACTIONS(264),
    [aux_sym_expose_token1] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym_variable_default_value] = STATE(122),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COLON_DASH] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_variable_default_value] = STATE(119),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_COLON_DASH] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [aux_sym_from_token1] = ACTIONS(284),
    [aux_sym_expose_token1] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_variable_default_value] = STATE(116),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_COLON_DASH] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_from_token1] = ACTIONS(234),
    [aux_sym_expose_token1] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [aux_sym_repository_repeat2] = STATE(89),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_variable_default_value] = STATE(109),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_COLON_DASH] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_from_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [aux_sym_repository_repeat2] = STATE(89),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [aux_sym_expose_token1] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_repository_repeat2] = STATE(86),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_from_token1] = ACTIONS(304),
    [aux_sym_expose_token1] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [aux_sym_repository_repeat2] = STATE(78),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [anon_sym_DQUOTE] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_repository_repeat2] = STATE(89),
    [anon_sym_SLASH] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [aux_sym_repository_repeat2] = STATE(99),
    [anon_sym_SLASH] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [97] = {
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [aux_sym_repository_repeat2] = STATE(95),
    [anon_sym_SLASH] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [aux_sym_repository_repeat2] = STATE(89),
    [anon_sym_SLASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_as_name] = ACTIONS(324),
    [sym_comment] = ACTIONS(22),
  },
  [101] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(326),
    [sym_comment] = ACTIONS(22),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [anon_sym_DQUOTE] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(336),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [anon_sym_SLASH] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [anon_sym_SLASH] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [anon_sym_RBRACE] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_SLASH] = ACTIONS(344),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [sym__docker_variable] = ACTIONS(346),
    [sym_comment] = ACTIONS(22),
  },
  [112] = {
    [sym__docker_variable] = ACTIONS(348),
    [sym_comment] = ACTIONS(22),
  },
  [113] = {
    [sym_as_name] = ACTIONS(350),
    [sym_comment] = ACTIONS(22),
  },
  [114] = {
    [sym__docker_variable] = ACTIONS(352),
    [sym_comment] = ACTIONS(22),
  },
  [115] = {
    [sym_as_name] = ACTIONS(354),
    [sym_comment] = ACTIONS(22),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym__docker_variable] = ACTIONS(358),
    [sym_comment] = ACTIONS(22),
  },
  [118] = {
    [anon_sym_SLASH] = ACTIONS(360),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [anon_sym_RBRACE] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [sym__docker_variable] = ACTIONS(364),
    [sym_comment] = ACTIONS(22),
  },
  [121] = {
    [sym_as_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(22),
  },
  [122] = {
    [anon_sym_RBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym__docker_variable] = ACTIONS(370),
    [sym_comment] = ACTIONS(22),
  },
  [124] = {
    [sym__docker_variable] = ACTIONS(372),
    [sym_comment] = ACTIONS(22),
  },
  [125] = {
    [sym__docker_variable] = ACTIONS(374),
    [sym_comment] = ACTIONS(22),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(34),
  [7] = {.count = 1, .reusable = true}, SHIFT(19),
  [9] = {.count = 1, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2),
  [11] = {.count = 1, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2),
  [13] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(112),
  [19] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(111),
  [22] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(117),
  [30] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(124),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(33),
  [37] = {.count = 1, .reusable = true}, SHIFT(9),
  [39] = {.count = 1, .reusable = false}, SHIFT(114),
  [41] = {.count = 1, .reusable = true}, SHIFT(123),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(33),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(114),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(123),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [61] = {.count = 1, .reusable = false}, SHIFT(2),
  [63] = {.count = 1, .reusable = false}, SHIFT(96),
  [65] = {.count = 1, .reusable = false}, SHIFT(112),
  [67] = {.count = 1, .reusable = false}, SHIFT(111),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [73] = {.count = 1, .reusable = false}, SHIFT(6),
  [75] = {.count = 1, .reusable = false}, SHIFT(98),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_port_part, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(37),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_port_part, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [95] = {.count = 1, .reusable = true}, SHIFT(3),
  [97] = {.count = 1, .reusable = false}, SHIFT(117),
  [99] = {.count = 1, .reusable = false}, SHIFT(124),
  [101] = {.count = 1, .reusable = true}, SHIFT(15),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(21),
  [109] = {.count = 1, .reusable = true}, SHIFT(70),
  [111] = {.count = 1, .reusable = true}, SHIFT(28),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec_1, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(65),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__port_spec_1, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(27),
  [129] = {.count = 1, .reusable = false}, SHIFT(120),
  [131] = {.count = 1, .reusable = false}, SHIFT(125),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_port_protocol, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_digest_repeat1, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym_digest_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_digest_repeat1, 2), SHIFT_REPEAT(26),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_digest_repeat1, 2), SHIFT_REPEAT(120),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_digest_repeat1, 2), SHIFT_REPEAT(125),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [154] = {.count = 1, .reusable = true}, SHIFT(26),
  [156] = {.count = 1, .reusable = true}, SHIFT(69),
  [158] = {.count = 1, .reusable = true}, SHIFT(61),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_port_part, 2),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_port_part, 2),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_port_spec, 1),
  [166] = {.count = 1, .reusable = true}, SHIFT(35),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_port_spec, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec_1, 5),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__port_spec_1, 5),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec_1, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym__port_spec_1, 3),
  [178] = {.count = 1, .reusable = false}, SHIFT(73),
  [180] = {.count = 1, .reusable = true}, SHIFT(7),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_port_spec, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_port_spec, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(25),
  [188] = {.count = 1, .reusable = false}, REDUCE(aux_sym_repository_repeat2, 2),
  [190] = {.count = 1, .reusable = false}, SHIFT(55),
  [192] = {.count = 1, .reusable = false}, SHIFT(91),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expose_repeat1, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1),
  [200] = {.count = 1, .reusable = false}, SHIFT(56),
  [202] = {.count = 1, .reusable = false}, SHIFT(41),
  [204] = {.count = 1, .reusable = false}, SHIFT(93),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2), SHIFT_REPEAT(34),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2), SHIFT_REPEAT(19),
  [214] = {.count = 1, .reusable = false}, SHIFT(59),
  [216] = {.count = 1, .reusable = false}, SHIFT(76),
  [218] = {.count = 1, .reusable = true}, SHIFT(17),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [222] = {.count = 1, .reusable = true}, SHIFT(48),
  [224] = {.count = 1, .reusable = true}, SHIFT(63),
  [226] = {.count = 1, .reusable = true}, SHIFT(113),
  [228] = {.count = 1, .reusable = false}, SHIFT(64),
  [230] = {.count = 1, .reusable = true}, SHIFT(47),
  [232] = {.count = 1, .reusable = true}, SHIFT(54),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [236] = {.count = 1, .reusable = true}, SHIFT(49),
  [238] = {.count = 1, .reusable = true}, SHIFT(71),
  [240] = {.count = 1, .reusable = true}, SHIFT(121),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [246] = {.count = 1, .reusable = false}, SHIFT(77),
  [248] = {.count = 1, .reusable = true}, SHIFT(16),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [252] = {.count = 1, .reusable = true}, SHIFT(39),
  [254] = {.count = 1, .reusable = true}, SHIFT(24),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [260] = {.count = 1, .reusable = true}, SHIFT(62),
  [262] = {.count = 1, .reusable = true}, SHIFT(115),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [266] = {.count = 1, .reusable = true}, SHIFT(100),
  [268] = {.count = 1, .reusable = true}, SHIFT(44),
  [270] = {.count = 1, .reusable = true}, SHIFT(51),
  [272] = {.count = 1, .reusable = true}, SHIFT(52),
  [274] = {.count = 1, .reusable = true}, SHIFT(60),
  [276] = {.count = 1, .reusable = true}, SHIFT(108),
  [278] = {.count = 1, .reusable = true}, SHIFT(40),
  [280] = {.count = 1, .reusable = true}, SHIFT(101),
  [282] = {.count = 1, .reusable = true}, SHIFT(13),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 5),
  [286] = {.count = 2, .reusable = true}, REDUCE(sym__port_spec_1, 1), SHIFT(32),
  [289] = {.count = 1, .reusable = true}, SHIFT(58),
  [291] = {.count = 1, .reusable = true}, SHIFT(18),
  [293] = {.count = 1, .reusable = true}, SHIFT(107),
  [295] = {.count = 1, .reusable = true}, SHIFT(10),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat2, 2), SHIFT_REPEAT(60),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym_repository_repeat2, 2),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [306] = {.count = 1, .reusable = true}, SHIFT(118),
  [308] = {.count = 1, .reusable = true}, SHIFT(32),
  [310] = {.count = 1, .reusable = true}, SHIFT(68),
  [312] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 3), SHIFT(60),
  [315] = {.count = 2, .reusable = true}, REDUCE(sym__port_spec_1, 3), SHIFT(31),
  [318] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(60),
  [321] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 4), SHIFT(60),
  [324] = {.count = 1, .reusable = true}, SHIFT(88),
  [326] = {.count = 1, .reusable = true}, SHIFT(106),
  [328] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [330] = {.count = 1, .reusable = true}, SHIFT(42),
  [332] = {.count = 1, .reusable = true}, SHIFT(31),
  [334] = {.count = 1, .reusable = true}, SHIFT(82),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_repository, 6),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_repository, 5),
  [342] = {.count = 1, .reusable = true}, SHIFT(11),
  [344] = {.count = 1, .reusable = true}, SHIFT(57),
  [346] = {.count = 1, .reusable = true}, SHIFT(87),
  [348] = {.count = 1, .reusable = true}, SHIFT(8),
  [350] = {.count = 1, .reusable = true}, SHIFT(85),
  [352] = {.count = 1, .reusable = true}, SHIFT(20),
  [354] = {.count = 1, .reusable = true}, SHIFT(79),
  [356] = {.count = 1, .reusable = true}, SHIFT(22),
  [358] = {.count = 1, .reusable = true}, SHIFT(14),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_repository, 4),
  [362] = {.count = 1, .reusable = true}, SHIFT(12),
  [364] = {.count = 1, .reusable = true}, SHIFT(46),
  [366] = {.count = 1, .reusable = true}, SHIFT(90),
  [368] = {.count = 1, .reusable = true}, SHIFT(38),
  [370] = {.count = 1, .reusable = true}, SHIFT(84),
  [372] = {.count = 1, .reusable = true}, SHIFT(81),
  [374] = {.count = 1, .reusable = true}, SHIFT(80),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
