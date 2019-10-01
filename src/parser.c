#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 71
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_POUND = 1,
  aux_sym_parser_directive_token1 = 2,
  anon_sym_EQ = 3,
  sym__parser_directive_key = 4,
  aux_sym__parser_directive_value_token1 = 5,
  aux_sym_comment_token1 = 6,
  aux_sym_directive_add_token1 = 7,
  aux_sym_directive_arg_token1 = 8,
  aux_sym_directive_cmd_token1 = 9,
  aux_sym_directive_copy_token1 = 10,
  aux_sym_directive_entrypoint_token1 = 11,
  aux_sym_directive_env_token1 = 12,
  aux_sym_directive_expose_token1 = 13,
  aux_sym_directive_from_token1 = 14,
  aux_sym_directive_healthcheck_token1 = 15,
  aux_sym_directive_label_token1 = 16,
  aux_sym_directive_maintainer_token1 = 17,
  aux_sym_directive_maintainer_token2 = 18,
  aux_sym_directive_onbuild_token1 = 19,
  aux_sym_directive_run_token1 = 20,
  aux_sym_directive_shell_token1 = 21,
  aux_sym_directive_stopsignal_token1 = 22,
  aux_sym_directive_user_token1 = 23,
  aux_sym_directive_volume_token1 = 24,
  aux_sym_directive_workdir_token1 = 25,
  aux_sym__maybe_json_token1 = 26,
  anon_sym_LBRACK = 27,
  anon_sym_COMMA = 28,
  anon_sym_RBRACK = 29,
  anon_sym_DQUOTE = 30,
  aux_sym__json_string_content_token1 = 31,
  sym__json_escape_sequence = 32,
  sym__token_whitespace = 33,
  sym_docker_file = 34,
  sym_parser_directive = 35,
  sym__parser_directive_value = 36,
  sym_comment = 37,
  sym_directive = 38,
  sym_directive_add = 39,
  sym_directive_arg = 40,
  sym_directive_cmd = 41,
  sym_directive_copy = 42,
  sym_directive_entrypoint = 43,
  sym_directive_env = 44,
  sym_directive_expose = 45,
  sym_directive_from = 46,
  sym_directive_healthcheck = 47,
  sym_directive_label = 48,
  sym_directive_maintainer = 49,
  sym_directive_onbuild = 50,
  sym_directive_run = 51,
  sym_directive_shell = 52,
  sym_directive_stopsignal = 53,
  sym_directive_user = 54,
  sym_directive_volume = 55,
  sym_directive_workdir = 56,
  sym__maybe_json_to_list = 57,
  sym__maybe_json = 58,
  sym__json = 59,
  sym__json_value = 60,
  aux_sym__json_string_content = 61,
  aux_sym__strings_whitespace_delim = 62,
  aux_sym_docker_file_repeat1 = 63,
  aux_sym_docker_file_repeat2 = 64,
  aux_sym__json_repeat1 = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_parser_directive_token1] = "parser_directive_token1",
  [anon_sym_EQ] = "=",
  [sym__parser_directive_key] = "_parser_directive_key",
  [aux_sym__parser_directive_value_token1] = "_parser_directive_value_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_directive_add_token1] = "directive_add_token1",
  [aux_sym_directive_arg_token1] = "directive_arg_token1",
  [aux_sym_directive_cmd_token1] = "directive_cmd_token1",
  [aux_sym_directive_copy_token1] = "directive_copy_token1",
  [aux_sym_directive_entrypoint_token1] = "directive_entrypoint_token1",
  [aux_sym_directive_env_token1] = "directive_env_token1",
  [aux_sym_directive_expose_token1] = "directive_expose_token1",
  [aux_sym_directive_from_token1] = "directive_from_token1",
  [aux_sym_directive_healthcheck_token1] = "directive_healthcheck_token1",
  [aux_sym_directive_label_token1] = "directive_label_token1",
  [aux_sym_directive_maintainer_token1] = "directive_maintainer_token1",
  [aux_sym_directive_maintainer_token2] = "directive_maintainer_token2",
  [aux_sym_directive_onbuild_token1] = "directive_onbuild_token1",
  [aux_sym_directive_run_token1] = "directive_run_token1",
  [aux_sym_directive_shell_token1] = "directive_shell_token1",
  [aux_sym_directive_stopsignal_token1] = "directive_stopsignal_token1",
  [aux_sym_directive_user_token1] = "directive_user_token1",
  [aux_sym_directive_volume_token1] = "directive_volume_token1",
  [aux_sym_directive_workdir_token1] = "directive_workdir_token1",
  [aux_sym__maybe_json_token1] = "_maybe_json_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__json_string_content_token1] = "_json_string_content_token1",
  [sym__json_escape_sequence] = "_json_escape_sequence",
  [sym__token_whitespace] = "_token_whitespace",
  [sym_docker_file] = "docker_file",
  [sym_parser_directive] = "parser_directive",
  [sym__parser_directive_value] = "_parser_directive_value",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_directive_add] = "directive_add",
  [sym_directive_arg] = "directive_arg",
  [sym_directive_cmd] = "directive_cmd",
  [sym_directive_copy] = "directive_copy",
  [sym_directive_entrypoint] = "directive_entrypoint",
  [sym_directive_env] = "directive_env",
  [sym_directive_expose] = "directive_expose",
  [sym_directive_from] = "directive_from",
  [sym_directive_healthcheck] = "directive_healthcheck",
  [sym_directive_label] = "directive_label",
  [sym_directive_maintainer] = "directive_maintainer",
  [sym_directive_onbuild] = "directive_onbuild",
  [sym_directive_run] = "directive_run",
  [sym_directive_shell] = "directive_shell",
  [sym_directive_stopsignal] = "directive_stopsignal",
  [sym_directive_user] = "directive_user",
  [sym_directive_volume] = "directive_volume",
  [sym_directive_workdir] = "directive_workdir",
  [sym__maybe_json_to_list] = "_maybe_json_to_list",
  [sym__maybe_json] = "_maybe_json",
  [sym__json] = "_json",
  [sym__json_value] = "_json_value",
  [aux_sym__json_string_content] = "_json_string_content",
  [aux_sym__strings_whitespace_delim] = "_strings_whitespace_delim",
  [aux_sym_docker_file_repeat1] = "docker_file_repeat1",
  [aux_sym_docker_file_repeat2] = "docker_file_repeat2",
  [aux_sym__json_repeat1] = "_json_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parser_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__parser_directive_key] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__parser_directive_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_add_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_copy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_entrypoint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_env_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_expose_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_from_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_healthcheck_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_maintainer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_maintainer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_onbuild_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_run_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_shell_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_stopsignal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_user_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_volume_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_workdir_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__maybe_json_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__json_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__token_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_docker_file] = {
    .visible = true,
    .named = true,
  },
  [sym_parser_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__parser_directive_value] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_add] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_env] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_expose] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_from] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_healthcheck] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_label] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_maintainer] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_onbuild] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_run] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_stopsignal] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_user] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_volume] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_workdir] = {
    .visible = true,
    .named = true,
  },
  [sym__maybe_json_to_list] = {
    .visible = false,
    .named = true,
  },
  [sym__maybe_json] = {
    .visible = false,
    .named = true,
  },
  [sym__json] = {
    .visible = false,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__json_string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__strings_whitespace_delim] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_directive_key = 1,
  field_directive_value = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_directive_key] = "directive_key",
  [field_directive_value] = "directive_value",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive_key, 2},
    {field_directive_value, 4},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(93);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(93);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'C') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == 'M') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(175);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == 'U') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(152);
      if (lookahead == 'W') ADVANCE(154);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(93);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(93);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(11);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'V') ADVANCE(63);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(223);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '' ||
          lookahead == '') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(204);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(215);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(208);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'K') ADVANCE(210);
      END_STATE();
    case 45:
      if (lookahead == 'K') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(211);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(217);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(218);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(209);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'X') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(216);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'P') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(221);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == 'V') ADVANCE(207);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 86:
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 88:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'Y') ADVANCE(205);
      END_STATE();
    case 90:
      if (lookahead == 'Y') ADVANCE(72);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 92:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_parser_directive_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_parser_directive_token1);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__parser_directive_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'A') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'D') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'D') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'D') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'G') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'H') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'I') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'K') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'K') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'M') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'M') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'X') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'P') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'P') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'P') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'R') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'R') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'R') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'R') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'S') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead == 'V') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'U') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'Y') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == 'Y') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__parser_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_directive_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_directive_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_directive_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_directive_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_directive_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_directive_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_directive_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_directive_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_directive_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_directive_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_directive_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_directive_maintainer_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_directive_maintainer_token2);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_directive_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_directive_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_directive_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_directive_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_directive_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_directive_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_directive_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__maybe_json_token1);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__maybe_json_token1);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__maybe_json_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__json_string_content_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__json_escape_sequence);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__token_whitespace);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__token_whitespace);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 91},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 200},
  [58] = {.lex_state = 97},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 200},
  [61] = {.lex_state = 91},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 200},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 200},
  [69] = {.lex_state = 200},
  [70] = {.lex_state = 200},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__parser_directive_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_docker_file] = STATE(63),
    [sym_parser_directive] = STATE(2),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_directive_add] = STATE(22),
    [sym_directive_arg] = STATE(22),
    [sym_directive_cmd] = STATE(22),
    [sym_directive_copy] = STATE(22),
    [sym_directive_entrypoint] = STATE(22),
    [sym_directive_env] = STATE(22),
    [sym_directive_expose] = STATE(22),
    [sym_directive_from] = STATE(22),
    [sym_directive_healthcheck] = STATE(22),
    [sym_directive_label] = STATE(22),
    [sym_directive_maintainer] = STATE(22),
    [sym_directive_onbuild] = STATE(22),
    [sym_directive_run] = STATE(22),
    [sym_directive_shell] = STATE(22),
    [sym_directive_stopsignal] = STATE(22),
    [sym_directive_user] = STATE(22),
    [sym_directive_volume] = STATE(22),
    [sym_directive_workdir] = STATE(22),
    [aux_sym_docker_file_repeat1] = STATE(2),
    [aux_sym_docker_file_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_directive_add_token1] = ACTIONS(7),
    [aux_sym_directive_arg_token1] = ACTIONS(9),
    [aux_sym_directive_cmd_token1] = ACTIONS(11),
    [aux_sym_directive_copy_token1] = ACTIONS(13),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(15),
    [aux_sym_directive_env_token1] = ACTIONS(17),
    [aux_sym_directive_expose_token1] = ACTIONS(19),
    [aux_sym_directive_from_token1] = ACTIONS(21),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(23),
    [aux_sym_directive_label_token1] = ACTIONS(25),
    [aux_sym_directive_maintainer_token1] = ACTIONS(27),
    [aux_sym_directive_onbuild_token1] = ACTIONS(29),
    [aux_sym_directive_run_token1] = ACTIONS(31),
    [aux_sym_directive_shell_token1] = ACTIONS(33),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(35),
    [aux_sym_directive_user_token1] = ACTIONS(37),
    [aux_sym_directive_volume_token1] = ACTIONS(39),
    [aux_sym_directive_workdir_token1] = ACTIONS(41),
  },
  [2] = {
    [sym_parser_directive] = STATE(11),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_directive_add] = STATE(22),
    [sym_directive_arg] = STATE(22),
    [sym_directive_cmd] = STATE(22),
    [sym_directive_copy] = STATE(22),
    [sym_directive_entrypoint] = STATE(22),
    [sym_directive_env] = STATE(22),
    [sym_directive_expose] = STATE(22),
    [sym_directive_from] = STATE(22),
    [sym_directive_healthcheck] = STATE(22),
    [sym_directive_label] = STATE(22),
    [sym_directive_maintainer] = STATE(22),
    [sym_directive_onbuild] = STATE(22),
    [sym_directive_run] = STATE(22),
    [sym_directive_shell] = STATE(22),
    [sym_directive_stopsignal] = STATE(22),
    [sym_directive_user] = STATE(22),
    [sym_directive_volume] = STATE(22),
    [sym_directive_workdir] = STATE(22),
    [aux_sym_docker_file_repeat1] = STATE(11),
    [aux_sym_docker_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_directive_add_token1] = ACTIONS(7),
    [aux_sym_directive_arg_token1] = ACTIONS(9),
    [aux_sym_directive_cmd_token1] = ACTIONS(11),
    [aux_sym_directive_copy_token1] = ACTIONS(13),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(15),
    [aux_sym_directive_env_token1] = ACTIONS(17),
    [aux_sym_directive_expose_token1] = ACTIONS(19),
    [aux_sym_directive_from_token1] = ACTIONS(21),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(23),
    [aux_sym_directive_label_token1] = ACTIONS(25),
    [aux_sym_directive_maintainer_token1] = ACTIONS(27),
    [aux_sym_directive_onbuild_token1] = ACTIONS(29),
    [aux_sym_directive_run_token1] = ACTIONS(31),
    [aux_sym_directive_shell_token1] = ACTIONS(33),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(35),
    [aux_sym_directive_user_token1] = ACTIONS(37),
    [aux_sym_directive_volume_token1] = ACTIONS(39),
    [aux_sym_directive_workdir_token1] = ACTIONS(41),
  },
  [3] = {
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_directive_add] = STATE(22),
    [sym_directive_arg] = STATE(22),
    [sym_directive_cmd] = STATE(22),
    [sym_directive_copy] = STATE(22),
    [sym_directive_entrypoint] = STATE(22),
    [sym_directive_env] = STATE(22),
    [sym_directive_expose] = STATE(22),
    [sym_directive_from] = STATE(22),
    [sym_directive_healthcheck] = STATE(22),
    [sym_directive_label] = STATE(22),
    [sym_directive_maintainer] = STATE(22),
    [sym_directive_onbuild] = STATE(22),
    [sym_directive_run] = STATE(22),
    [sym_directive_shell] = STATE(22),
    [sym_directive_stopsignal] = STATE(22),
    [sym_directive_user] = STATE(22),
    [sym_directive_volume] = STATE(22),
    [sym_directive_workdir] = STATE(22),
    [aux_sym_docker_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [aux_sym_directive_add_token1] = ACTIONS(7),
    [aux_sym_directive_arg_token1] = ACTIONS(9),
    [aux_sym_directive_cmd_token1] = ACTIONS(11),
    [aux_sym_directive_copy_token1] = ACTIONS(13),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(15),
    [aux_sym_directive_env_token1] = ACTIONS(17),
    [aux_sym_directive_expose_token1] = ACTIONS(19),
    [aux_sym_directive_from_token1] = ACTIONS(21),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(23),
    [aux_sym_directive_label_token1] = ACTIONS(25),
    [aux_sym_directive_maintainer_token1] = ACTIONS(27),
    [aux_sym_directive_onbuild_token1] = ACTIONS(29),
    [aux_sym_directive_run_token1] = ACTIONS(31),
    [aux_sym_directive_shell_token1] = ACTIONS(33),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(35),
    [aux_sym_directive_user_token1] = ACTIONS(37),
    [aux_sym_directive_volume_token1] = ACTIONS(39),
    [aux_sym_directive_workdir_token1] = ACTIONS(41),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_directive_add] = STATE(22),
    [sym_directive_arg] = STATE(22),
    [sym_directive_cmd] = STATE(22),
    [sym_directive_copy] = STATE(22),
    [sym_directive_entrypoint] = STATE(22),
    [sym_directive_env] = STATE(22),
    [sym_directive_expose] = STATE(22),
    [sym_directive_from] = STATE(22),
    [sym_directive_healthcheck] = STATE(22),
    [sym_directive_label] = STATE(22),
    [sym_directive_maintainer] = STATE(22),
    [sym_directive_onbuild] = STATE(22),
    [sym_directive_run] = STATE(22),
    [sym_directive_shell] = STATE(22),
    [sym_directive_stopsignal] = STATE(22),
    [sym_directive_user] = STATE(22),
    [sym_directive_volume] = STATE(22),
    [sym_directive_workdir] = STATE(22),
    [aux_sym_docker_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(49),
    [aux_sym_directive_add_token1] = ACTIONS(52),
    [aux_sym_directive_arg_token1] = ACTIONS(55),
    [aux_sym_directive_cmd_token1] = ACTIONS(58),
    [aux_sym_directive_copy_token1] = ACTIONS(61),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(64),
    [aux_sym_directive_env_token1] = ACTIONS(67),
    [aux_sym_directive_expose_token1] = ACTIONS(70),
    [aux_sym_directive_from_token1] = ACTIONS(73),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(76),
    [aux_sym_directive_label_token1] = ACTIONS(79),
    [aux_sym_directive_maintainer_token1] = ACTIONS(82),
    [aux_sym_directive_onbuild_token1] = ACTIONS(85),
    [aux_sym_directive_run_token1] = ACTIONS(88),
    [aux_sym_directive_shell_token1] = ACTIONS(91),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(94),
    [aux_sym_directive_user_token1] = ACTIONS(97),
    [aux_sym_directive_volume_token1] = ACTIONS(100),
    [aux_sym_directive_workdir_token1] = ACTIONS(103),
  },
  [5] = {
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_directive_add] = STATE(22),
    [sym_directive_arg] = STATE(22),
    [sym_directive_cmd] = STATE(22),
    [sym_directive_copy] = STATE(22),
    [sym_directive_entrypoint] = STATE(22),
    [sym_directive_env] = STATE(22),
    [sym_directive_expose] = STATE(22),
    [sym_directive_from] = STATE(22),
    [sym_directive_healthcheck] = STATE(22),
    [sym_directive_label] = STATE(22),
    [sym_directive_maintainer] = STATE(22),
    [sym_directive_onbuild] = STATE(22),
    [sym_directive_run] = STATE(22),
    [sym_directive_shell] = STATE(22),
    [sym_directive_stopsignal] = STATE(22),
    [sym_directive_user] = STATE(22),
    [sym_directive_volume] = STATE(22),
    [sym_directive_workdir] = STATE(22),
    [aux_sym_docker_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(45),
    [aux_sym_directive_add_token1] = ACTIONS(7),
    [aux_sym_directive_arg_token1] = ACTIONS(9),
    [aux_sym_directive_cmd_token1] = ACTIONS(11),
    [aux_sym_directive_copy_token1] = ACTIONS(13),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(15),
    [aux_sym_directive_env_token1] = ACTIONS(17),
    [aux_sym_directive_expose_token1] = ACTIONS(19),
    [aux_sym_directive_from_token1] = ACTIONS(21),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(23),
    [aux_sym_directive_label_token1] = ACTIONS(25),
    [aux_sym_directive_maintainer_token1] = ACTIONS(27),
    [aux_sym_directive_onbuild_token1] = ACTIONS(29),
    [aux_sym_directive_run_token1] = ACTIONS(31),
    [aux_sym_directive_shell_token1] = ACTIONS(33),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(35),
    [aux_sym_directive_user_token1] = ACTIONS(37),
    [aux_sym_directive_volume_token1] = ACTIONS(39),
    [aux_sym_directive_workdir_token1] = ACTIONS(41),
  },
  [6] = {
    [aux_sym__strings_whitespace_delim] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(110),
    [aux_sym__parser_directive_value_token1] = ACTIONS(112),
    [aux_sym_directive_add_token1] = ACTIONS(110),
    [aux_sym_directive_arg_token1] = ACTIONS(110),
    [aux_sym_directive_cmd_token1] = ACTIONS(110),
    [aux_sym_directive_copy_token1] = ACTIONS(110),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(110),
    [aux_sym_directive_env_token1] = ACTIONS(110),
    [aux_sym_directive_expose_token1] = ACTIONS(110),
    [aux_sym_directive_from_token1] = ACTIONS(110),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(110),
    [aux_sym_directive_label_token1] = ACTIONS(110),
    [aux_sym_directive_maintainer_token1] = ACTIONS(110),
    [aux_sym_directive_onbuild_token1] = ACTIONS(110),
    [aux_sym_directive_run_token1] = ACTIONS(110),
    [aux_sym_directive_shell_token1] = ACTIONS(110),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(110),
    [aux_sym_directive_user_token1] = ACTIONS(110),
    [aux_sym_directive_volume_token1] = ACTIONS(110),
    [aux_sym_directive_workdir_token1] = ACTIONS(110),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [7] = {
    [aux_sym__strings_whitespace_delim] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(118),
    [aux_sym__parser_directive_value_token1] = ACTIONS(120),
    [aux_sym_directive_add_token1] = ACTIONS(118),
    [aux_sym_directive_arg_token1] = ACTIONS(118),
    [aux_sym_directive_cmd_token1] = ACTIONS(118),
    [aux_sym_directive_copy_token1] = ACTIONS(118),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(118),
    [aux_sym_directive_env_token1] = ACTIONS(118),
    [aux_sym_directive_expose_token1] = ACTIONS(118),
    [aux_sym_directive_from_token1] = ACTIONS(118),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(118),
    [aux_sym_directive_label_token1] = ACTIONS(118),
    [aux_sym_directive_maintainer_token1] = ACTIONS(118),
    [aux_sym_directive_onbuild_token1] = ACTIONS(118),
    [aux_sym_directive_run_token1] = ACTIONS(118),
    [aux_sym_directive_shell_token1] = ACTIONS(118),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(118),
    [aux_sym_directive_user_token1] = ACTIONS(118),
    [aux_sym_directive_volume_token1] = ACTIONS(118),
    [aux_sym_directive_workdir_token1] = ACTIONS(118),
    [sym__token_whitespace] = ACTIONS(123),
  },
  [8] = {
    [aux_sym__strings_whitespace_delim] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(128),
    [aux_sym__parser_directive_value_token1] = ACTIONS(112),
    [aux_sym_directive_add_token1] = ACTIONS(128),
    [aux_sym_directive_arg_token1] = ACTIONS(128),
    [aux_sym_directive_cmd_token1] = ACTIONS(128),
    [aux_sym_directive_copy_token1] = ACTIONS(128),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(128),
    [aux_sym_directive_env_token1] = ACTIONS(128),
    [aux_sym_directive_expose_token1] = ACTIONS(128),
    [aux_sym_directive_from_token1] = ACTIONS(128),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(128),
    [aux_sym_directive_label_token1] = ACTIONS(128),
    [aux_sym_directive_maintainer_token1] = ACTIONS(128),
    [aux_sym_directive_onbuild_token1] = ACTIONS(128),
    [aux_sym_directive_run_token1] = ACTIONS(128),
    [aux_sym_directive_shell_token1] = ACTIONS(128),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(128),
    [aux_sym_directive_user_token1] = ACTIONS(128),
    [aux_sym_directive_volume_token1] = ACTIONS(128),
    [aux_sym_directive_workdir_token1] = ACTIONS(128),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [9] = {
    [aux_sym__strings_whitespace_delim] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(132),
    [aux_sym__parser_directive_value_token1] = ACTIONS(112),
    [aux_sym_directive_add_token1] = ACTIONS(132),
    [aux_sym_directive_arg_token1] = ACTIONS(132),
    [aux_sym_directive_cmd_token1] = ACTIONS(132),
    [aux_sym_directive_copy_token1] = ACTIONS(132),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(132),
    [aux_sym_directive_env_token1] = ACTIONS(132),
    [aux_sym_directive_expose_token1] = ACTIONS(132),
    [aux_sym_directive_from_token1] = ACTIONS(132),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(132),
    [aux_sym_directive_label_token1] = ACTIONS(132),
    [aux_sym_directive_maintainer_token1] = ACTIONS(132),
    [aux_sym_directive_onbuild_token1] = ACTIONS(132),
    [aux_sym_directive_run_token1] = ACTIONS(132),
    [aux_sym_directive_shell_token1] = ACTIONS(132),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(132),
    [aux_sym_directive_user_token1] = ACTIONS(132),
    [aux_sym_directive_volume_token1] = ACTIONS(132),
    [aux_sym_directive_workdir_token1] = ACTIONS(132),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(118),
    [aux_sym__parser_directive_value_token1] = ACTIONS(118),
    [aux_sym_directive_add_token1] = ACTIONS(118),
    [aux_sym_directive_arg_token1] = ACTIONS(118),
    [aux_sym_directive_cmd_token1] = ACTIONS(118),
    [aux_sym_directive_copy_token1] = ACTIONS(118),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(118),
    [aux_sym_directive_env_token1] = ACTIONS(118),
    [aux_sym_directive_expose_token1] = ACTIONS(118),
    [aux_sym_directive_from_token1] = ACTIONS(118),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(118),
    [aux_sym_directive_label_token1] = ACTIONS(118),
    [aux_sym_directive_maintainer_token1] = ACTIONS(118),
    [aux_sym_directive_onbuild_token1] = ACTIONS(118),
    [aux_sym_directive_run_token1] = ACTIONS(118),
    [aux_sym_directive_shell_token1] = ACTIONS(118),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(118),
    [aux_sym_directive_user_token1] = ACTIONS(118),
    [aux_sym_directive_volume_token1] = ACTIONS(118),
    [aux_sym_directive_workdir_token1] = ACTIONS(118),
    [sym__token_whitespace] = ACTIONS(118),
  },
  [11] = {
    [sym_parser_directive] = STATE(11),
    [aux_sym_docker_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(136),
    [aux_sym_directive_add_token1] = ACTIONS(134),
    [aux_sym_directive_arg_token1] = ACTIONS(134),
    [aux_sym_directive_cmd_token1] = ACTIONS(134),
    [aux_sym_directive_copy_token1] = ACTIONS(134),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(134),
    [aux_sym_directive_env_token1] = ACTIONS(134),
    [aux_sym_directive_expose_token1] = ACTIONS(134),
    [aux_sym_directive_from_token1] = ACTIONS(134),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(134),
    [aux_sym_directive_label_token1] = ACTIONS(134),
    [aux_sym_directive_maintainer_token1] = ACTIONS(134),
    [aux_sym_directive_onbuild_token1] = ACTIONS(134),
    [aux_sym_directive_run_token1] = ACTIONS(134),
    [aux_sym_directive_shell_token1] = ACTIONS(134),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(134),
    [aux_sym_directive_user_token1] = ACTIONS(134),
    [aux_sym_directive_volume_token1] = ACTIONS(134),
    [aux_sym_directive_workdir_token1] = ACTIONS(134),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(139),
    [aux_sym_directive_add_token1] = ACTIONS(139),
    [aux_sym_directive_arg_token1] = ACTIONS(139),
    [aux_sym_directive_cmd_token1] = ACTIONS(139),
    [aux_sym_directive_copy_token1] = ACTIONS(139),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(139),
    [aux_sym_directive_env_token1] = ACTIONS(139),
    [aux_sym_directive_expose_token1] = ACTIONS(139),
    [aux_sym_directive_from_token1] = ACTIONS(139),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(139),
    [aux_sym_directive_label_token1] = ACTIONS(139),
    [aux_sym_directive_maintainer_token1] = ACTIONS(139),
    [aux_sym_directive_onbuild_token1] = ACTIONS(139),
    [aux_sym_directive_run_token1] = ACTIONS(139),
    [aux_sym_directive_shell_token1] = ACTIONS(139),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(139),
    [aux_sym_directive_user_token1] = ACTIONS(139),
    [aux_sym_directive_volume_token1] = ACTIONS(139),
    [aux_sym_directive_workdir_token1] = ACTIONS(139),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(141),
    [aux_sym_directive_add_token1] = ACTIONS(141),
    [aux_sym_directive_arg_token1] = ACTIONS(141),
    [aux_sym_directive_cmd_token1] = ACTIONS(141),
    [aux_sym_directive_copy_token1] = ACTIONS(141),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(141),
    [aux_sym_directive_env_token1] = ACTIONS(141),
    [aux_sym_directive_expose_token1] = ACTIONS(141),
    [aux_sym_directive_from_token1] = ACTIONS(141),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(141),
    [aux_sym_directive_label_token1] = ACTIONS(141),
    [aux_sym_directive_maintainer_token1] = ACTIONS(141),
    [aux_sym_directive_onbuild_token1] = ACTIONS(141),
    [aux_sym_directive_run_token1] = ACTIONS(141),
    [aux_sym_directive_shell_token1] = ACTIONS(141),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(141),
    [aux_sym_directive_user_token1] = ACTIONS(141),
    [aux_sym_directive_volume_token1] = ACTIONS(141),
    [aux_sym_directive_workdir_token1] = ACTIONS(141),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(143),
    [aux_sym_directive_add_token1] = ACTIONS(143),
    [aux_sym_directive_arg_token1] = ACTIONS(143),
    [aux_sym_directive_cmd_token1] = ACTIONS(143),
    [aux_sym_directive_copy_token1] = ACTIONS(143),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(143),
    [aux_sym_directive_env_token1] = ACTIONS(143),
    [aux_sym_directive_expose_token1] = ACTIONS(143),
    [aux_sym_directive_from_token1] = ACTIONS(143),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(143),
    [aux_sym_directive_label_token1] = ACTIONS(143),
    [aux_sym_directive_maintainer_token1] = ACTIONS(143),
    [aux_sym_directive_onbuild_token1] = ACTIONS(143),
    [aux_sym_directive_run_token1] = ACTIONS(143),
    [aux_sym_directive_shell_token1] = ACTIONS(143),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(143),
    [aux_sym_directive_user_token1] = ACTIONS(143),
    [aux_sym_directive_volume_token1] = ACTIONS(143),
    [aux_sym_directive_workdir_token1] = ACTIONS(143),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(145),
    [aux_sym_directive_add_token1] = ACTIONS(145),
    [aux_sym_directive_arg_token1] = ACTIONS(145),
    [aux_sym_directive_cmd_token1] = ACTIONS(145),
    [aux_sym_directive_copy_token1] = ACTIONS(145),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(145),
    [aux_sym_directive_env_token1] = ACTIONS(145),
    [aux_sym_directive_expose_token1] = ACTIONS(145),
    [aux_sym_directive_from_token1] = ACTIONS(145),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(145),
    [aux_sym_directive_label_token1] = ACTIONS(145),
    [aux_sym_directive_maintainer_token1] = ACTIONS(145),
    [aux_sym_directive_onbuild_token1] = ACTIONS(145),
    [aux_sym_directive_run_token1] = ACTIONS(145),
    [aux_sym_directive_shell_token1] = ACTIONS(145),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(145),
    [aux_sym_directive_user_token1] = ACTIONS(145),
    [aux_sym_directive_volume_token1] = ACTIONS(145),
    [aux_sym_directive_workdir_token1] = ACTIONS(145),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(147),
    [aux_sym_directive_add_token1] = ACTIONS(147),
    [aux_sym_directive_arg_token1] = ACTIONS(147),
    [aux_sym_directive_cmd_token1] = ACTIONS(147),
    [aux_sym_directive_copy_token1] = ACTIONS(147),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(147),
    [aux_sym_directive_env_token1] = ACTIONS(147),
    [aux_sym_directive_expose_token1] = ACTIONS(147),
    [aux_sym_directive_from_token1] = ACTIONS(147),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(147),
    [aux_sym_directive_label_token1] = ACTIONS(147),
    [aux_sym_directive_maintainer_token1] = ACTIONS(147),
    [aux_sym_directive_onbuild_token1] = ACTIONS(147),
    [aux_sym_directive_run_token1] = ACTIONS(147),
    [aux_sym_directive_shell_token1] = ACTIONS(147),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(147),
    [aux_sym_directive_user_token1] = ACTIONS(147),
    [aux_sym_directive_volume_token1] = ACTIONS(147),
    [aux_sym_directive_workdir_token1] = ACTIONS(147),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [aux_sym_directive_add_token1] = ACTIONS(149),
    [aux_sym_directive_arg_token1] = ACTIONS(149),
    [aux_sym_directive_cmd_token1] = ACTIONS(149),
    [aux_sym_directive_copy_token1] = ACTIONS(149),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(149),
    [aux_sym_directive_env_token1] = ACTIONS(149),
    [aux_sym_directive_expose_token1] = ACTIONS(149),
    [aux_sym_directive_from_token1] = ACTIONS(149),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(149),
    [aux_sym_directive_label_token1] = ACTIONS(149),
    [aux_sym_directive_maintainer_token1] = ACTIONS(149),
    [aux_sym_directive_onbuild_token1] = ACTIONS(149),
    [aux_sym_directive_run_token1] = ACTIONS(149),
    [aux_sym_directive_shell_token1] = ACTIONS(149),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(149),
    [aux_sym_directive_user_token1] = ACTIONS(149),
    [aux_sym_directive_volume_token1] = ACTIONS(149),
    [aux_sym_directive_workdir_token1] = ACTIONS(149),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(151),
    [aux_sym_directive_add_token1] = ACTIONS(151),
    [aux_sym_directive_arg_token1] = ACTIONS(151),
    [aux_sym_directive_cmd_token1] = ACTIONS(151),
    [aux_sym_directive_copy_token1] = ACTIONS(151),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(151),
    [aux_sym_directive_env_token1] = ACTIONS(151),
    [aux_sym_directive_expose_token1] = ACTIONS(151),
    [aux_sym_directive_from_token1] = ACTIONS(151),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(151),
    [aux_sym_directive_label_token1] = ACTIONS(151),
    [aux_sym_directive_maintainer_token1] = ACTIONS(151),
    [aux_sym_directive_onbuild_token1] = ACTIONS(151),
    [aux_sym_directive_run_token1] = ACTIONS(151),
    [aux_sym_directive_shell_token1] = ACTIONS(151),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(151),
    [aux_sym_directive_user_token1] = ACTIONS(151),
    [aux_sym_directive_volume_token1] = ACTIONS(151),
    [aux_sym_directive_workdir_token1] = ACTIONS(151),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(153),
    [aux_sym_directive_add_token1] = ACTIONS(153),
    [aux_sym_directive_arg_token1] = ACTIONS(153),
    [aux_sym_directive_cmd_token1] = ACTIONS(153),
    [aux_sym_directive_copy_token1] = ACTIONS(153),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(153),
    [aux_sym_directive_env_token1] = ACTIONS(153),
    [aux_sym_directive_expose_token1] = ACTIONS(153),
    [aux_sym_directive_from_token1] = ACTIONS(153),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(153),
    [aux_sym_directive_label_token1] = ACTIONS(153),
    [aux_sym_directive_maintainer_token1] = ACTIONS(153),
    [aux_sym_directive_onbuild_token1] = ACTIONS(153),
    [aux_sym_directive_run_token1] = ACTIONS(153),
    [aux_sym_directive_shell_token1] = ACTIONS(153),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(153),
    [aux_sym_directive_user_token1] = ACTIONS(153),
    [aux_sym_directive_volume_token1] = ACTIONS(153),
    [aux_sym_directive_workdir_token1] = ACTIONS(153),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(155),
    [aux_sym_directive_add_token1] = ACTIONS(155),
    [aux_sym_directive_arg_token1] = ACTIONS(155),
    [aux_sym_directive_cmd_token1] = ACTIONS(155),
    [aux_sym_directive_copy_token1] = ACTIONS(155),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(155),
    [aux_sym_directive_env_token1] = ACTIONS(155),
    [aux_sym_directive_expose_token1] = ACTIONS(155),
    [aux_sym_directive_from_token1] = ACTIONS(155),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(155),
    [aux_sym_directive_label_token1] = ACTIONS(155),
    [aux_sym_directive_maintainer_token1] = ACTIONS(155),
    [aux_sym_directive_onbuild_token1] = ACTIONS(155),
    [aux_sym_directive_run_token1] = ACTIONS(155),
    [aux_sym_directive_shell_token1] = ACTIONS(155),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(155),
    [aux_sym_directive_user_token1] = ACTIONS(155),
    [aux_sym_directive_volume_token1] = ACTIONS(155),
    [aux_sym_directive_workdir_token1] = ACTIONS(155),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(157),
    [aux_sym_directive_add_token1] = ACTIONS(157),
    [aux_sym_directive_arg_token1] = ACTIONS(157),
    [aux_sym_directive_cmd_token1] = ACTIONS(157),
    [aux_sym_directive_copy_token1] = ACTIONS(157),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(157),
    [aux_sym_directive_env_token1] = ACTIONS(157),
    [aux_sym_directive_expose_token1] = ACTIONS(157),
    [aux_sym_directive_from_token1] = ACTIONS(157),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(157),
    [aux_sym_directive_label_token1] = ACTIONS(157),
    [aux_sym_directive_maintainer_token1] = ACTIONS(157),
    [aux_sym_directive_onbuild_token1] = ACTIONS(157),
    [aux_sym_directive_run_token1] = ACTIONS(157),
    [aux_sym_directive_shell_token1] = ACTIONS(157),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(157),
    [aux_sym_directive_user_token1] = ACTIONS(157),
    [aux_sym_directive_volume_token1] = ACTIONS(157),
    [aux_sym_directive_workdir_token1] = ACTIONS(157),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(159),
    [aux_sym_directive_add_token1] = ACTIONS(159),
    [aux_sym_directive_arg_token1] = ACTIONS(159),
    [aux_sym_directive_cmd_token1] = ACTIONS(159),
    [aux_sym_directive_copy_token1] = ACTIONS(159),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(159),
    [aux_sym_directive_env_token1] = ACTIONS(159),
    [aux_sym_directive_expose_token1] = ACTIONS(159),
    [aux_sym_directive_from_token1] = ACTIONS(159),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(159),
    [aux_sym_directive_label_token1] = ACTIONS(159),
    [aux_sym_directive_maintainer_token1] = ACTIONS(159),
    [aux_sym_directive_onbuild_token1] = ACTIONS(159),
    [aux_sym_directive_run_token1] = ACTIONS(159),
    [aux_sym_directive_shell_token1] = ACTIONS(159),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(159),
    [aux_sym_directive_user_token1] = ACTIONS(159),
    [aux_sym_directive_volume_token1] = ACTIONS(159),
    [aux_sym_directive_workdir_token1] = ACTIONS(159),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [aux_sym_directive_add_token1] = ACTIONS(161),
    [aux_sym_directive_arg_token1] = ACTIONS(161),
    [aux_sym_directive_cmd_token1] = ACTIONS(161),
    [aux_sym_directive_copy_token1] = ACTIONS(161),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(161),
    [aux_sym_directive_env_token1] = ACTIONS(161),
    [aux_sym_directive_expose_token1] = ACTIONS(161),
    [aux_sym_directive_from_token1] = ACTIONS(161),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(161),
    [aux_sym_directive_label_token1] = ACTIONS(161),
    [aux_sym_directive_maintainer_token1] = ACTIONS(161),
    [aux_sym_directive_onbuild_token1] = ACTIONS(161),
    [aux_sym_directive_run_token1] = ACTIONS(161),
    [aux_sym_directive_shell_token1] = ACTIONS(161),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(161),
    [aux_sym_directive_user_token1] = ACTIONS(161),
    [aux_sym_directive_volume_token1] = ACTIONS(161),
    [aux_sym_directive_workdir_token1] = ACTIONS(161),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(163),
    [aux_sym_directive_add_token1] = ACTIONS(163),
    [aux_sym_directive_arg_token1] = ACTIONS(163),
    [aux_sym_directive_cmd_token1] = ACTIONS(163),
    [aux_sym_directive_copy_token1] = ACTIONS(163),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(163),
    [aux_sym_directive_env_token1] = ACTIONS(163),
    [aux_sym_directive_expose_token1] = ACTIONS(163),
    [aux_sym_directive_from_token1] = ACTIONS(163),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(163),
    [aux_sym_directive_label_token1] = ACTIONS(163),
    [aux_sym_directive_maintainer_token1] = ACTIONS(163),
    [aux_sym_directive_onbuild_token1] = ACTIONS(163),
    [aux_sym_directive_run_token1] = ACTIONS(163),
    [aux_sym_directive_shell_token1] = ACTIONS(163),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(163),
    [aux_sym_directive_user_token1] = ACTIONS(163),
    [aux_sym_directive_volume_token1] = ACTIONS(163),
    [aux_sym_directive_workdir_token1] = ACTIONS(163),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(165),
    [aux_sym_directive_add_token1] = ACTIONS(165),
    [aux_sym_directive_arg_token1] = ACTIONS(165),
    [aux_sym_directive_cmd_token1] = ACTIONS(165),
    [aux_sym_directive_copy_token1] = ACTIONS(165),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(165),
    [aux_sym_directive_env_token1] = ACTIONS(165),
    [aux_sym_directive_expose_token1] = ACTIONS(165),
    [aux_sym_directive_from_token1] = ACTIONS(165),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(165),
    [aux_sym_directive_label_token1] = ACTIONS(165),
    [aux_sym_directive_maintainer_token1] = ACTIONS(165),
    [aux_sym_directive_onbuild_token1] = ACTIONS(165),
    [aux_sym_directive_run_token1] = ACTIONS(165),
    [aux_sym_directive_shell_token1] = ACTIONS(165),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(165),
    [aux_sym_directive_user_token1] = ACTIONS(165),
    [aux_sym_directive_volume_token1] = ACTIONS(165),
    [aux_sym_directive_workdir_token1] = ACTIONS(165),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(167),
    [aux_sym_directive_add_token1] = ACTIONS(167),
    [aux_sym_directive_arg_token1] = ACTIONS(167),
    [aux_sym_directive_cmd_token1] = ACTIONS(167),
    [aux_sym_directive_copy_token1] = ACTIONS(167),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(167),
    [aux_sym_directive_env_token1] = ACTIONS(167),
    [aux_sym_directive_expose_token1] = ACTIONS(167),
    [aux_sym_directive_from_token1] = ACTIONS(167),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(167),
    [aux_sym_directive_label_token1] = ACTIONS(167),
    [aux_sym_directive_maintainer_token1] = ACTIONS(167),
    [aux_sym_directive_onbuild_token1] = ACTIONS(167),
    [aux_sym_directive_run_token1] = ACTIONS(167),
    [aux_sym_directive_shell_token1] = ACTIONS(167),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(167),
    [aux_sym_directive_user_token1] = ACTIONS(167),
    [aux_sym_directive_volume_token1] = ACTIONS(167),
    [aux_sym_directive_workdir_token1] = ACTIONS(167),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(169),
    [aux_sym_directive_add_token1] = ACTIONS(169),
    [aux_sym_directive_arg_token1] = ACTIONS(169),
    [aux_sym_directive_cmd_token1] = ACTIONS(169),
    [aux_sym_directive_copy_token1] = ACTIONS(169),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(169),
    [aux_sym_directive_env_token1] = ACTIONS(169),
    [aux_sym_directive_expose_token1] = ACTIONS(169),
    [aux_sym_directive_from_token1] = ACTIONS(169),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(169),
    [aux_sym_directive_label_token1] = ACTIONS(169),
    [aux_sym_directive_maintainer_token1] = ACTIONS(169),
    [aux_sym_directive_onbuild_token1] = ACTIONS(169),
    [aux_sym_directive_run_token1] = ACTIONS(169),
    [aux_sym_directive_shell_token1] = ACTIONS(169),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(169),
    [aux_sym_directive_user_token1] = ACTIONS(169),
    [aux_sym_directive_volume_token1] = ACTIONS(169),
    [aux_sym_directive_workdir_token1] = ACTIONS(169),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(171),
    [aux_sym_directive_add_token1] = ACTIONS(171),
    [aux_sym_directive_arg_token1] = ACTIONS(171),
    [aux_sym_directive_cmd_token1] = ACTIONS(171),
    [aux_sym_directive_copy_token1] = ACTIONS(171),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(171),
    [aux_sym_directive_env_token1] = ACTIONS(171),
    [aux_sym_directive_expose_token1] = ACTIONS(171),
    [aux_sym_directive_from_token1] = ACTIONS(171),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(171),
    [aux_sym_directive_label_token1] = ACTIONS(171),
    [aux_sym_directive_maintainer_token1] = ACTIONS(171),
    [aux_sym_directive_onbuild_token1] = ACTIONS(171),
    [aux_sym_directive_run_token1] = ACTIONS(171),
    [aux_sym_directive_shell_token1] = ACTIONS(171),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(171),
    [aux_sym_directive_user_token1] = ACTIONS(171),
    [aux_sym_directive_volume_token1] = ACTIONS(171),
    [aux_sym_directive_workdir_token1] = ACTIONS(171),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [aux_sym_directive_add_token1] = ACTIONS(173),
    [aux_sym_directive_arg_token1] = ACTIONS(173),
    [aux_sym_directive_cmd_token1] = ACTIONS(173),
    [aux_sym_directive_copy_token1] = ACTIONS(173),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(173),
    [aux_sym_directive_env_token1] = ACTIONS(173),
    [aux_sym_directive_expose_token1] = ACTIONS(173),
    [aux_sym_directive_from_token1] = ACTIONS(173),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(173),
    [aux_sym_directive_label_token1] = ACTIONS(173),
    [aux_sym_directive_maintainer_token1] = ACTIONS(173),
    [aux_sym_directive_onbuild_token1] = ACTIONS(173),
    [aux_sym_directive_run_token1] = ACTIONS(173),
    [aux_sym_directive_shell_token1] = ACTIONS(173),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(173),
    [aux_sym_directive_user_token1] = ACTIONS(173),
    [aux_sym_directive_volume_token1] = ACTIONS(173),
    [aux_sym_directive_workdir_token1] = ACTIONS(173),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(175),
    [aux_sym_directive_add_token1] = ACTIONS(175),
    [aux_sym_directive_arg_token1] = ACTIONS(175),
    [aux_sym_directive_cmd_token1] = ACTIONS(175),
    [aux_sym_directive_copy_token1] = ACTIONS(175),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(175),
    [aux_sym_directive_env_token1] = ACTIONS(175),
    [aux_sym_directive_expose_token1] = ACTIONS(175),
    [aux_sym_directive_from_token1] = ACTIONS(175),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(175),
    [aux_sym_directive_label_token1] = ACTIONS(175),
    [aux_sym_directive_maintainer_token1] = ACTIONS(175),
    [aux_sym_directive_onbuild_token1] = ACTIONS(175),
    [aux_sym_directive_run_token1] = ACTIONS(175),
    [aux_sym_directive_shell_token1] = ACTIONS(175),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(175),
    [aux_sym_directive_user_token1] = ACTIONS(175),
    [aux_sym_directive_volume_token1] = ACTIONS(175),
    [aux_sym_directive_workdir_token1] = ACTIONS(175),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [aux_sym_directive_add_token1] = ACTIONS(177),
    [aux_sym_directive_arg_token1] = ACTIONS(177),
    [aux_sym_directive_cmd_token1] = ACTIONS(177),
    [aux_sym_directive_copy_token1] = ACTIONS(177),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(177),
    [aux_sym_directive_env_token1] = ACTIONS(177),
    [aux_sym_directive_expose_token1] = ACTIONS(177),
    [aux_sym_directive_from_token1] = ACTIONS(177),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(177),
    [aux_sym_directive_label_token1] = ACTIONS(177),
    [aux_sym_directive_maintainer_token1] = ACTIONS(177),
    [aux_sym_directive_onbuild_token1] = ACTIONS(177),
    [aux_sym_directive_run_token1] = ACTIONS(177),
    [aux_sym_directive_shell_token1] = ACTIONS(177),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(177),
    [aux_sym_directive_user_token1] = ACTIONS(177),
    [aux_sym_directive_volume_token1] = ACTIONS(177),
    [aux_sym_directive_workdir_token1] = ACTIONS(177),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(179),
    [aux_sym_directive_add_token1] = ACTIONS(179),
    [aux_sym_directive_arg_token1] = ACTIONS(179),
    [aux_sym_directive_cmd_token1] = ACTIONS(179),
    [aux_sym_directive_copy_token1] = ACTIONS(179),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(179),
    [aux_sym_directive_env_token1] = ACTIONS(179),
    [aux_sym_directive_expose_token1] = ACTIONS(179),
    [aux_sym_directive_from_token1] = ACTIONS(179),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(179),
    [aux_sym_directive_label_token1] = ACTIONS(179),
    [aux_sym_directive_maintainer_token1] = ACTIONS(179),
    [aux_sym_directive_onbuild_token1] = ACTIONS(179),
    [aux_sym_directive_run_token1] = ACTIONS(179),
    [aux_sym_directive_shell_token1] = ACTIONS(179),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(179),
    [aux_sym_directive_user_token1] = ACTIONS(179),
    [aux_sym_directive_volume_token1] = ACTIONS(179),
    [aux_sym_directive_workdir_token1] = ACTIONS(179),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [aux_sym_directive_add_token1] = ACTIONS(181),
    [aux_sym_directive_arg_token1] = ACTIONS(181),
    [aux_sym_directive_cmd_token1] = ACTIONS(181),
    [aux_sym_directive_copy_token1] = ACTIONS(181),
    [aux_sym_directive_entrypoint_token1] = ACTIONS(181),
    [aux_sym_directive_env_token1] = ACTIONS(181),
    [aux_sym_directive_expose_token1] = ACTIONS(181),
    [aux_sym_directive_from_token1] = ACTIONS(181),
    [aux_sym_directive_healthcheck_token1] = ACTIONS(181),
    [aux_sym_directive_label_token1] = ACTIONS(181),
    [aux_sym_directive_maintainer_token1] = ACTIONS(181),
    [aux_sym_directive_onbuild_token1] = ACTIONS(181),
    [aux_sym_directive_run_token1] = ACTIONS(181),
    [aux_sym_directive_shell_token1] = ACTIONS(181),
    [aux_sym_directive_stopsignal_token1] = ACTIONS(181),
    [aux_sym_directive_user_token1] = ACTIONS(181),
    [aux_sym_directive_volume_token1] = ACTIONS(181),
    [aux_sym_directive_workdir_token1] = ACTIONS(181),
  },
  [34] = {
    [sym__maybe_json_to_list] = STATE(33),
    [sym__json] = STATE(33),
    [aux_sym__strings_whitespace_delim] = STATE(9),
    [aux_sym__parser_directive_value_token1] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [35] = {
    [sym__maybe_json_to_list] = STATE(29),
    [sym__json] = STATE(29),
    [aux_sym__strings_whitespace_delim] = STATE(9),
    [aux_sym__parser_directive_value_token1] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [36] = {
    [sym__maybe_json_to_list] = STATE(14),
    [sym__json] = STATE(14),
    [aux_sym__strings_whitespace_delim] = STATE(9),
    [aux_sym__parser_directive_value_token1] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [37] = {
    [sym__maybe_json] = STATE(12),
    [sym__json] = STATE(12),
    [aux_sym__maybe_json_token1] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(185),
  },
  [38] = {
    [aux_sym__json_string_content] = STATE(40),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [aux_sym__json_string_content_token1] = ACTIONS(191),
    [sym__json_escape_sequence] = ACTIONS(191),
  },
  [39] = {
    [sym__maybe_json] = STATE(18),
    [sym__json] = STATE(18),
    [aux_sym__maybe_json_token1] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(185),
  },
  [40] = {
    [aux_sym__json_string_content] = STATE(40),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [aux_sym__json_string_content_token1] = ACTIONS(197),
    [sym__json_escape_sequence] = ACTIONS(197),
  },
  [41] = {
    [sym__maybe_json] = STATE(30),
    [sym__json] = STATE(30),
    [aux_sym__maybe_json_token1] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(185),
  },
  [42] = {
    [aux_sym__json_string_content] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [aux_sym__json_string_content_token1] = ACTIONS(204),
    [sym__json_escape_sequence] = ACTIONS(204),
  },
  [43] = {
    [sym__maybe_json] = STATE(32),
    [sym__json] = STATE(32),
    [aux_sym__maybe_json_token1] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(185),
  },
  [44] = {
    [sym__json_value] = STATE(48),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
  },
  [45] = {
    [aux_sym__json_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(214),
  },
  [46] = {
    [aux_sym__strings_whitespace_delim] = STATE(6),
    [aux_sym__parser_directive_value_token1] = ACTIONS(216),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [47] = {
    [aux_sym__strings_whitespace_delim] = STATE(8),
    [aux_sym__parser_directive_value_token1] = ACTIONS(218),
    [sym__token_whitespace] = ACTIONS(114),
  },
  [48] = {
    [aux_sym__json_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(220),
  },
  [49] = {
    [aux_sym__json_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(225),
  },
  [50] = {
    [aux_sym_parser_directive_token1] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(229),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
  },
  [52] = {
    [sym__json_value] = STATE(55),
    [anon_sym_DQUOTE] = ACTIONS(210),
  },
  [53] = {
    [sym__parser_directive_value] = STATE(16),
    [aux_sym__parser_directive_value_token1] = ACTIONS(233),
  },
  [54] = {
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
  },
  [56] = {
    [aux_sym_directive_maintainer_token2] = ACTIONS(237),
  },
  [57] = {
    [aux_sym_comment_token1] = ACTIONS(239),
  },
  [58] = {
    [aux_sym_parser_directive_token1] = ACTIONS(241),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(243),
  },
  [60] = {
    [aux_sym_comment_token1] = ACTIONS(245),
  },
  [61] = {
    [aux_sym__parser_directive_value_token1] = ACTIONS(247),
  },
  [62] = {
    [sym__parser_directive_key] = ACTIONS(249),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(251),
  },
  [64] = {
    [aux_sym_directive_maintainer_token2] = ACTIONS(253),
  },
  [65] = {
    [aux_sym_directive_maintainer_token2] = ACTIONS(255),
  },
  [66] = {
    [aux_sym_comment_token1] = ACTIONS(257),
  },
  [67] = {
    [aux_sym_directive_maintainer_token2] = ACTIONS(259),
  },
  [68] = {
    [aux_sym_comment_token1] = ACTIONS(261),
  },
  [69] = {
    [aux_sym_comment_token1] = ACTIONS(263),
  },
  [70] = {
    [aux_sym_comment_token1] = ACTIONS(265),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_docker_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(50),
  [7] = {.count = 1, .reusable = true}, SHIFT(35),
  [9] = {.count = 1, .reusable = true}, SHIFT(60),
  [11] = {.count = 1, .reusable = true}, SHIFT(43),
  [13] = {.count = 1, .reusable = true}, SHIFT(34),
  [15] = {.count = 1, .reusable = true}, SHIFT(41),
  [17] = {.count = 1, .reusable = true}, SHIFT(70),
  [19] = {.count = 1, .reusable = true}, SHIFT(47),
  [21] = {.count = 1, .reusable = true}, SHIFT(46),
  [23] = {.count = 1, .reusable = true}, SHIFT(69),
  [25] = {.count = 1, .reusable = true}, SHIFT(68),
  [27] = {.count = 1, .reusable = true}, SHIFT(67),
  [29] = {.count = 1, .reusable = true}, SHIFT(66),
  [31] = {.count = 1, .reusable = true}, SHIFT(37),
  [33] = {.count = 1, .reusable = true}, SHIFT(39),
  [35] = {.count = 1, .reusable = true}, SHIFT(56),
  [37] = {.count = 1, .reusable = true}, SHIFT(65),
  [39] = {.count = 1, .reusable = true}, SHIFT(36),
  [41] = {.count = 1, .reusable = true}, SHIFT(64),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_docker_file, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(57),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(57),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(35),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(60),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(43),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(34),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(41),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(70),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(47),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(46),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(69),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(68),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(67),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(66),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(37),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(39),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(56),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(65),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(36),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat2, 2), SHIFT_REPEAT(64),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_docker_file, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_directive_from, 2),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_directive_from, 2),
  [112] = {.count = 1, .reusable = false}, SHIFT(7),
  [114] = {.count = 1, .reusable = false}, SHIFT(61),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym__strings_whitespace_delim, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(aux_sym__strings_whitespace_delim, 2),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym__strings_whitespace_delim, 2), SHIFT_REPEAT(7),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym__strings_whitespace_delim, 2), SHIFT_REPEAT(61),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_directive_expose, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_directive_expose, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym__maybe_json_to_list, 1),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_json_to_list, 1),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_docker_file_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_file_repeat1, 2), SHIFT_REPEAT(58),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_directive_run, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_directive_arg, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_directive_volume, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_directive_user, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_parser_directive, 5, .production_id = 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_directive_stopsignal, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_directive_shell, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__json, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__json, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_directive_onbuild, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_directive_env, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__json, 4),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_directive_maintainer, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_directive_label, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_directive_healthcheck, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_directive_add, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_directive_entrypoint, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_directive_workdir, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_directive_cmd, 2),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_directive_copy, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(9),
  [185] = {.count = 1, .reusable = false}, SHIFT(44),
  [187] = {.count = 1, .reusable = false}, SHIFT(12),
  [189] = {.count = 1, .reusable = false}, SHIFT(54),
  [191] = {.count = 1, .reusable = true}, SHIFT(40),
  [193] = {.count = 1, .reusable = false}, SHIFT(18),
  [195] = {.count = 1, .reusable = false}, REDUCE(aux_sym__json_string_content, 2),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string_content, 2), SHIFT_REPEAT(40),
  [200] = {.count = 1, .reusable = false}, SHIFT(30),
  [202] = {.count = 1, .reusable = false}, SHIFT(51),
  [204] = {.count = 1, .reusable = true}, SHIFT(38),
  [206] = {.count = 1, .reusable = false}, SHIFT(32),
  [208] = {.count = 1, .reusable = true}, SHIFT(19),
  [210] = {.count = 1, .reusable = true}, SHIFT(42),
  [212] = {.count = 1, .reusable = true}, SHIFT(52),
  [214] = {.count = 1, .reusable = true}, SHIFT(24),
  [216] = {.count = 1, .reusable = false}, SHIFT(6),
  [218] = {.count = 1, .reusable = false}, SHIFT(8),
  [220] = {.count = 1, .reusable = true}, SHIFT(20),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_repeat1, 2), SHIFT_REPEAT(52),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_repeat1, 2),
  [227] = {.count = 1, .reusable = false}, SHIFT(62),
  [229] = {.count = 1, .reusable = false}, SHIFT(26),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [233] = {.count = 1, .reusable = true}, SHIFT(16),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(17),
  [239] = {.count = 1, .reusable = true}, SHIFT(26),
  [241] = {.count = 1, .reusable = true}, SHIFT(62),
  [243] = {.count = 1, .reusable = true}, SHIFT(53),
  [245] = {.count = 1, .reusable = true}, SHIFT(13),
  [247] = {.count = 1, .reusable = true}, SHIFT(10),
  [249] = {.count = 1, .reusable = true}, SHIFT(59),
  [251] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [253] = {.count = 1, .reusable = true}, SHIFT(31),
  [255] = {.count = 1, .reusable = true}, SHIFT(15),
  [257] = {.count = 1, .reusable = true}, SHIFT(21),
  [259] = {.count = 1, .reusable = true}, SHIFT(25),
  [261] = {.count = 1, .reusable = true}, SHIFT(27),
  [263] = {.count = 1, .reusable = true}, SHIFT(28),
  [265] = {.count = 1, .reusable = true}, SHIFT(23),
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
