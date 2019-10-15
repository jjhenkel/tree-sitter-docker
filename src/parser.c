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
#define STATE_COUNT 376
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  aux_sym_arg_token1 = 1,
  anon_sym_EQ = 2,
  sym_arg_name = 3,
  aux_sym_arg_default_token1 = 4,
  aux_sym_add_token1 = 5,
  aux_sym_copy_token1 = 6,
  aux_sym_stopsignal_token1 = 7,
  aux_sym_signal_name_token1 = 8,
  aux_sym_signal_name_token2 = 9,
  sym_signal_num = 10,
  aux_sym_shell_token1 = 11,
  aux_sym_volume_token1 = 12,
  aux_sym_path_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_path_token2 = 15,
  aux_sym_workdir_token1 = 16,
  anon_sym_DOLLAR = 17,
  aux_sym_workdir_token2 = 18,
  aux_sym_workdir_token3 = 19,
  aux_sym_workdir_token4 = 20,
  aux_sym_user_token1 = 21,
  anon_sym_COLON = 22,
  aux_sym_user_name_token1 = 23,
  aux_sym_user_id_token1 = 24,
  aux_sym_cmd_token1 = 25,
  aux_sym_entrypoint_token1 = 26,
  aux_sym_run_token1 = 27,
  aux_sym_maintainer_token1 = 28,
  aux_sym_expose_token1 = 29,
  anon_sym_DASH = 30,
  anon_sym_SLASH = 31,
  aux_sym_port_protocol_token1 = 32,
  aux_sym_port_protocol_token2 = 33,
  aux_sym_from_token1 = 34,
  anon_sym_DASH_DASHplatform_EQ = 35,
  anon_sym_AT = 36,
  anon_sym_sha256_COLON = 37,
  aux_sym_from_token2 = 38,
  aux_sym_platform_token1 = 39,
  aux_sym__repository_start_token1 = 40,
  aux_sym__repository_start_token2 = 41,
  aux_sym__repository_start_token3 = 42,
  aux_sym__repository_start_token4 = 43,
  aux_sym__repository_start_token5 = 44,
  aux_sym__repository_start_token6 = 45,
  aux_sym__repository_start_token7 = 46,
  aux_sym__repository_start_token8 = 47,
  aux_sym__repository_start_token9 = 48,
  aux_sym__repository_start_token10 = 49,
  aux_sym__repository_start_token11 = 50,
  aux_sym__repository_start_token12 = 51,
  aux_sym__repository_start_token13 = 52,
  aux_sym__repository_start_token14 = 53,
  aux_sym__repository_start_token15 = 54,
  aux_sym__repository_start_token16 = 55,
  anon_sym_LBRACE = 56,
  anon_sym_RBRACE = 57,
  sym__docker_variable = 58,
  anon_sym_COLON_DASH = 59,
  aux_sym_variable_default_value_token1 = 60,
  anon_sym_COLON_PLUS = 61,
  aux_sym__anything_token1 = 62,
  aux_sym__anything_token2 = 63,
  sym__almost_json_prefix = 64,
  sym__json_prefix = 65,
  sym__not_json_prefix = 66,
  anon_sym_COMMA = 67,
  anon_sym_RBRACK = 68,
  sym__space_no_newline = 69,
  sym_template_expr_curly_braces = 70,
  sym_template_expr_percent_signs = 71,
  aux_sym_template_expr_less_than_equals_token1 = 72,
  aux_sym_template_expr_less_than_equals_token2 = 73,
  aux_sym_template_expr_less_than_equals_token3 = 74,
  sym_comment = 75,
  sym_line_continuation = 76,
  aux_sym__json_string_token1 = 77,
  sym__json_escape_sequence = 78,
  sym_dockerfile = 79,
  sym__directive = 80,
  sym_arg = 81,
  sym_arg_default = 82,
  sym_add = 83,
  sym_copy = 84,
  sym_stopsignal = 85,
  sym_signal_name = 86,
  sym_shell = 87,
  sym_volume = 88,
  sym_path = 89,
  sym_workdir = 90,
  sym_user = 91,
  sym_user_name = 92,
  sym_user_group = 93,
  sym_user_id = 94,
  sym_user_group_id = 95,
  sym_cmd = 96,
  sym_entrypoint = 97,
  sym_run = 98,
  sym_maintainer = 99,
  sym_expose = 100,
  sym__port_spec = 101,
  sym_mapped_port = 102,
  sym_mapped_no_lhs = 103,
  sym__port = 104,
  sym_port = 105,
  sym_port_range = 106,
  sym__port_part = 107,
  sym_port_protocol = 108,
  sym_from = 109,
  sym_platform = 110,
  sym_repository = 111,
  sym__repository_start = 112,
  sym__repository_continued = 113,
  sym_image = 114,
  sym_tag = 115,
  sym_digest = 116,
  sym_as_name = 117,
  sym_docker_variable = 118,
  sym_variable_default_value = 119,
  sym_variable_this_or_null = 120,
  aux_sym__anything = 121,
  sym_json_array = 122,
  sym__anything_or_json_array = 123,
  sym_template_expr_less_than_equals = 124,
  sym__json_value = 125,
  aux_sym__json_string = 126,
  aux_sym_dockerfile_repeat1 = 127,
  aux_sym_add_repeat1 = 128,
  aux_sym_workdir_repeat1 = 129,
  aux_sym_expose_repeat1 = 130,
  aux_sym_repository_repeat1 = 131,
  aux_sym__repository_start_repeat1 = 132,
  aux_sym__repository_start_repeat2 = 133,
  aux_sym__repository_start_repeat3 = 134,
  aux_sym__repository_start_repeat4 = 135,
  aux_sym_json_array_repeat1 = 136,
  aux_sym_template_expr_less_than_equals_repeat1 = 137,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_arg_token1] = "arg_token1",
  [anon_sym_EQ] = "=",
  [sym_arg_name] = "arg_name",
  [aux_sym_arg_default_token1] = "arg_default_token1",
  [aux_sym_add_token1] = "add_token1",
  [aux_sym_copy_token1] = "copy_token1",
  [aux_sym_stopsignal_token1] = "stopsignal_token1",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [aux_sym_signal_name_token2] = "signal_name_token2",
  [sym_signal_num] = "signal_num",
  [aux_sym_shell_token1] = "shell_token1",
  [aux_sym_volume_token1] = "volume_token1",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_workdir_token1] = "workdir_token1",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_workdir_token2] = "workdir_token2",
  [aux_sym_workdir_token3] = "workdir_token3",
  [aux_sym_workdir_token4] = "workdir_token4",
  [aux_sym_user_token1] = "user_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_token1] = "user_name_token1",
  [aux_sym_user_id_token1] = "user_id_token1",
  [aux_sym_cmd_token1] = "cmd_token1",
  [aux_sym_entrypoint_token1] = "entrypoint_token1",
  [aux_sym_run_token1] = "run_token1",
  [aux_sym_maintainer_token1] = "maintainer_token1",
  [aux_sym_expose_token1] = "expose_token1",
  [anon_sym_DASH] = "-",
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
  [sym_arg] = "arg",
  [sym_arg_default] = "arg_default",
  [sym_add] = "add",
  [sym_copy] = "copy",
  [sym_stopsignal] = "stopsignal",
  [sym_signal_name] = "signal_name",
  [sym_shell] = "shell",
  [sym_volume] = "volume",
  [sym_path] = "path",
  [sym_workdir] = "workdir",
  [sym_user] = "user",
  [sym_user_name] = "user_name",
  [sym_user_group] = "user_group",
  [sym_user_id] = "user_id",
  [sym_user_group_id] = "user_group_id",
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
  [aux_sym_add_repeat1] = "add_repeat1",
  [aux_sym_workdir_repeat1] = "workdir_repeat1",
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
  [aux_sym_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_arg_default_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_name_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_signal_num] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_shell_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_workdir_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_id_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_DASH] = {
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
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_default] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_volume] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name] = {
    .visible = true,
    .named = true,
  },
  [sym_user_group] = {
    .visible = true,
    .named = true,
  },
  [sym_user_id] = {
    .visible = true,
    .named = true,
  },
  [sym_user_group_id] = {
    .visible = true,
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
  [aux_sym_add_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_repeat1] = {
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
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == ',') ADVANCE(725);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == 'S') ADVANCE(171);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(726);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '{') ADVANCE(656);
      if (lookahead == '}') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '$') ADVANCE(305);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(354);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(665);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(710);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(697);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == ',') ADVANCE(725);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == 'S') ADVANCE(171);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(726);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '}') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(287);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(274);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(642);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(642);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(528);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(562);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(549);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(528);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(562);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(549);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(573);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(618);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(603);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(572);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(573);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(618);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(603);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(572);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(449);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(451);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(436);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(449);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(451);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(436);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(491);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(493);
      if (lookahead == '\\') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 25:
      if (lookahead == 0) ADVANCE(146);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(491);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(493);
      if (lookahead == '\\') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(653);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(651);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(743);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == ',') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(742);
      if (lookahead != 0) ADVANCE(742);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(737);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '\\') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(662);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(742);
      if (lookahead != 0) ADVANCE(742);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(728);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '#') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(731);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '#') ADVANCE(734);
      if (lookahead == '\\') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(734);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '}') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(640);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(658);
      if (lookahead == '{') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(658);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 59:
      if (lookahead == '+') ADVANCE(663);
      if (lookahead == '-') ADVANCE(659);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(649);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(649);
      if (lookahead != 0) ADVANCE(738);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(649);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(721);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\\') ADVANCE(35);
      END_STATE();
    case 75:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(648);
      END_STATE();
    case 76:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(653);
      END_STATE();
    case 77:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(651);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 143:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 144:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(738);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '2') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '5') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '6') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(166);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(244);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_workdir_token3);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '$') ADVANCE(305);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(354);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(316);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '-') ADVANCE(399);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '2') ADVANCE(387);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '5') ADVANCE(388);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '6') ADVANCE(389);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(381);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(404);
      if (lookahead == '%') ADVANCE(644);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(402);
      END_STATE();
    case 403:
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
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(421);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(432);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(413);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(435);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(411);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(457);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(409);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(412);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(444);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(450);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(440);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(441);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(460);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(445);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(405);
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
          lookahead != '}') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(487);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(488);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(466);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(467);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(499);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(513);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(505);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(495);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(496);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(492);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(484);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(500);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(646);
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
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(27);
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
          lookahead != '}') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(543);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(524);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(522);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(521);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(523);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(555);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(569);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(561);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(551);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(552);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(534);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(519);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(542);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(540);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(571);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(556);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(599);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(580);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(578);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(576);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(611);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(625);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(617);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(607);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(608);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(626);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(572);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(612);
      if (lookahead == '{') ADVANCE(638);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(627);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(630);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(631);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(633);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(634);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(636);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(637);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(639);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(641);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(643);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(645);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(647);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(650);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(652);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(629);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 658:
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
          lookahead != '}') ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '\\') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(662);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(665);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(710);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(672);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(668);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__anything_token2);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__almost_json_prefix);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(731);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(734);
      if (lookahead == '\\') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(734);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(737);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__json_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 55},
  [177] = {.lex_state = 55},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 56},
  [180] = {.lex_state = 56},
  [181] = {.lex_state = 56},
  [182] = {.lex_state = 55},
  [183] = {.lex_state = 55},
  [184] = {.lex_state = 55},
  [185] = {.lex_state = 56},
  [186] = {.lex_state = 56},
  [187] = {.lex_state = 56},
  [188] = {.lex_state = 55},
  [189] = {.lex_state = 55},
  [190] = {.lex_state = 55},
  [191] = {.lex_state = 55},
  [192] = {.lex_state = 55},
  [193] = {.lex_state = 55},
  [194] = {.lex_state = 55},
  [195] = {.lex_state = 55},
  [196] = {.lex_state = 55},
  [197] = {.lex_state = 55},
  [198] = {.lex_state = 55},
  [199] = {.lex_state = 55},
  [200] = {.lex_state = 55},
  [201] = {.lex_state = 55},
  [202] = {.lex_state = 55},
  [203] = {.lex_state = 55},
  [204] = {.lex_state = 55},
  [205] = {.lex_state = 55},
  [206] = {.lex_state = 55},
  [207] = {.lex_state = 55},
  [208] = {.lex_state = 55},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 55},
  [211] = {.lex_state = 55},
  [212] = {.lex_state = 55},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 55},
  [215] = {.lex_state = 55},
  [216] = {.lex_state = 55},
  [217] = {.lex_state = 55},
  [218] = {.lex_state = 55},
  [219] = {.lex_state = 55},
  [220] = {.lex_state = 55},
  [221] = {.lex_state = 55},
  [222] = {.lex_state = 55},
  [223] = {.lex_state = 55},
  [224] = {.lex_state = 55},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 34},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 48},
  [229] = {.lex_state = 48},
  [230] = {.lex_state = 48},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 22},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 50},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 24},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 37},
  [243] = {.lex_state = 50},
  [244] = {.lex_state = 37},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 50},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 50},
  [252] = {.lex_state = 22},
  [253] = {.lex_state = 37},
  [254] = {.lex_state = 50},
  [255] = {.lex_state = 24},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 50},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 39},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 57},
  [265] = {.lex_state = 57},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 57},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 57},
  [272] = {.lex_state = 57},
  [273] = {.lex_state = 58},
  [274] = {.lex_state = 57},
  [275] = {.lex_state = 57},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 57},
  [280] = {.lex_state = 57},
  [281] = {.lex_state = 57},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 57},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 57},
  [287] = {.lex_state = 57},
  [288] = {.lex_state = 57},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 41},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 50},
  [299] = {.lex_state = 57},
  [300] = {.lex_state = 42},
  [301] = {.lex_state = 43},
  [302] = {.lex_state = 44},
  [303] = {.lex_state = 43},
  [304] = {.lex_state = 44},
  [305] = {.lex_state = 43},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 42},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 44},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 44},
  [320] = {.lex_state = 43},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 44},
  [324] = {.lex_state = 43},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 11},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 43},
  [333] = {.lex_state = 38},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 44},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 44},
  [341] = {.lex_state = 43},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 38},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 45},
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 53},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 42},
  [352] = {.lex_state = 42},
  [353] = {.lex_state = 42},
  [354] = {.lex_state = 42},
  [355] = {.lex_state = 42},
  [356] = {.lex_state = 42},
  [357] = {.lex_state = 42},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 11},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 54},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 42},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 42},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 57},
  [370] = {.lex_state = 43},
  [371] = {.lex_state = 44},
  [372] = {.lex_state = 42},
  [373] = {.lex_state = 57},
  [374] = {.lex_state = 57},
  [375] = {.lex_state = 57},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_arg_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_arg_name] = ACTIONS(1),
    [aux_sym_add_token1] = ACTIONS(1),
    [aux_sym_copy_token1] = ACTIONS(1),
    [aux_sym_stopsignal_token1] = ACTIONS(1),
    [aux_sym_signal_name_token1] = ACTIONS(1),
    [sym_signal_num] = ACTIONS(1),
    [aux_sym_shell_token1] = ACTIONS(1),
    [aux_sym_volume_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_workdir_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_user_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_user_id_token1] = ACTIONS(1),
    [aux_sym_cmd_token1] = ACTIONS(1),
    [aux_sym_entrypoint_token1] = ACTIONS(1),
    [aux_sym_run_token1] = ACTIONS(1),
    [aux_sym_maintainer_token1] = ACTIONS(1),
    [aux_sym_expose_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_port_protocol_token1] = ACTIONS(1),
    [aux_sym_port_protocol_token2] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_sha256_COLON] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [aux_sym__repository_start_token4] = ACTIONS(1),
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
    [sym_dockerfile] = STATE(350),
    [sym__directive] = STATE(161),
    [sym_arg] = STATE(161),
    [sym_add] = STATE(161),
    [sym_copy] = STATE(161),
    [sym_stopsignal] = STATE(161),
    [sym_shell] = STATE(161),
    [sym_volume] = STATE(161),
    [sym_workdir] = STATE(161),
    [sym_user] = STATE(161),
    [sym_cmd] = STATE(161),
    [sym_entrypoint] = STATE(161),
    [sym_run] = STATE(161),
    [sym_maintainer] = STATE(161),
    [sym_expose] = STATE(161),
    [sym_from] = STATE(161),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_arg_token1] = ACTIONS(7),
    [aux_sym_add_token1] = ACTIONS(9),
    [aux_sym_copy_token1] = ACTIONS(11),
    [aux_sym_stopsignal_token1] = ACTIONS(13),
    [aux_sym_shell_token1] = ACTIONS(15),
    [aux_sym_volume_token1] = ACTIONS(17),
    [aux_sym_workdir_token1] = ACTIONS(19),
    [aux_sym_user_token1] = ACTIONS(21),
    [aux_sym_cmd_token1] = ACTIONS(23),
    [aux_sym_entrypoint_token1] = ACTIONS(25),
    [aux_sym_run_token1] = ACTIONS(27),
    [aux_sym_maintainer_token1] = ACTIONS(29),
    [aux_sym_expose_token1] = ACTIONS(31),
    [aux_sym_from_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [2] = {
    [sym__directive] = STATE(161),
    [sym_arg] = STATE(161),
    [sym_add] = STATE(161),
    [sym_copy] = STATE(161),
    [sym_stopsignal] = STATE(161),
    [sym_shell] = STATE(161),
    [sym_volume] = STATE(161),
    [sym_workdir] = STATE(161),
    [sym_user] = STATE(161),
    [sym_cmd] = STATE(161),
    [sym_entrypoint] = STATE(161),
    [sym_run] = STATE(161),
    [sym_maintainer] = STATE(161),
    [sym_expose] = STATE(161),
    [sym_from] = STATE(161),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_arg_token1] = ACTIONS(37),
    [aux_sym_add_token1] = ACTIONS(40),
    [aux_sym_copy_token1] = ACTIONS(43),
    [aux_sym_stopsignal_token1] = ACTIONS(46),
    [aux_sym_shell_token1] = ACTIONS(49),
    [aux_sym_volume_token1] = ACTIONS(52),
    [aux_sym_workdir_token1] = ACTIONS(55),
    [aux_sym_user_token1] = ACTIONS(58),
    [aux_sym_cmd_token1] = ACTIONS(61),
    [aux_sym_entrypoint_token1] = ACTIONS(64),
    [aux_sym_run_token1] = ACTIONS(67),
    [aux_sym_maintainer_token1] = ACTIONS(70),
    [aux_sym_expose_token1] = ACTIONS(73),
    [aux_sym_from_token1] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [3] = {
    [sym__directive] = STATE(161),
    [sym_arg] = STATE(161),
    [sym_add] = STATE(161),
    [sym_copy] = STATE(161),
    [sym_stopsignal] = STATE(161),
    [sym_shell] = STATE(161),
    [sym_volume] = STATE(161),
    [sym_workdir] = STATE(161),
    [sym_user] = STATE(161),
    [sym_cmd] = STATE(161),
    [sym_entrypoint] = STATE(161),
    [sym_run] = STATE(161),
    [sym_maintainer] = STATE(161),
    [sym_expose] = STATE(161),
    [sym_from] = STATE(161),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_arg_token1] = ACTIONS(7),
    [aux_sym_add_token1] = ACTIONS(9),
    [aux_sym_copy_token1] = ACTIONS(11),
    [aux_sym_stopsignal_token1] = ACTIONS(13),
    [aux_sym_shell_token1] = ACTIONS(15),
    [aux_sym_volume_token1] = ACTIONS(17),
    [aux_sym_workdir_token1] = ACTIONS(19),
    [aux_sym_user_token1] = ACTIONS(21),
    [aux_sym_cmd_token1] = ACTIONS(23),
    [aux_sym_entrypoint_token1] = ACTIONS(25),
    [aux_sym_run_token1] = ACTIONS(27),
    [aux_sym_maintainer_token1] = ACTIONS(29),
    [aux_sym_expose_token1] = ACTIONS(31),
    [aux_sym_from_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [4] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(89),
    [sym_port] = STATE(89),
    [sym_port_range] = STATE(89),
    [sym__port_part] = STATE(72),
    [aux_sym_expose_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_arg_token1] = ACTIONS(81),
    [aux_sym_add_token1] = ACTIONS(81),
    [aux_sym_copy_token1] = ACTIONS(81),
    [aux_sym_stopsignal_token1] = ACTIONS(81),
    [aux_sym_shell_token1] = ACTIONS(81),
    [aux_sym_volume_token1] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [aux_sym_workdir_token1] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [aux_sym_user_token1] = ACTIONS(81),
    [aux_sym_user_id_token1] = ACTIONS(89),
    [aux_sym_cmd_token1] = ACTIONS(81),
    [aux_sym_entrypoint_token1] = ACTIONS(81),
    [aux_sym_run_token1] = ACTIONS(81),
    [aux_sym_maintainer_token1] = ACTIONS(81),
    [aux_sym_expose_token1] = ACTIONS(81),
    [aux_sym_from_token1] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [5] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(89),
    [sym_port] = STATE(89),
    [sym_port_range] = STATE(89),
    [sym__port_part] = STATE(72),
    [aux_sym_expose_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_arg_token1] = ACTIONS(92),
    [aux_sym_add_token1] = ACTIONS(92),
    [aux_sym_copy_token1] = ACTIONS(92),
    [aux_sym_stopsignal_token1] = ACTIONS(92),
    [aux_sym_shell_token1] = ACTIONS(92),
    [aux_sym_volume_token1] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [aux_sym_workdir_token1] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(92),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [aux_sym_cmd_token1] = ACTIONS(92),
    [aux_sym_entrypoint_token1] = ACTIONS(92),
    [aux_sym_run_token1] = ACTIONS(92),
    [aux_sym_maintainer_token1] = ACTIONS(92),
    [aux_sym_expose_token1] = ACTIONS(92),
    [aux_sym_from_token1] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(102),
    [aux_sym_add_token1] = ACTIONS(102),
    [aux_sym_copy_token1] = ACTIONS(102),
    [aux_sym_stopsignal_token1] = ACTIONS(102),
    [aux_sym_shell_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(102),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [aux_sym_user_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_cmd_token1] = ACTIONS(102),
    [aux_sym_entrypoint_token1] = ACTIONS(102),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token3] = ACTIONS(106),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [7] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(102),
    [aux_sym_add_token1] = ACTIONS(102),
    [aux_sym_copy_token1] = ACTIONS(102),
    [aux_sym_stopsignal_token1] = ACTIONS(102),
    [aux_sym_shell_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(102),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [aux_sym_user_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_cmd_token1] = ACTIONS(102),
    [aux_sym_entrypoint_token1] = ACTIONS(102),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token3] = ACTIONS(106),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [8] = {
    [aux_sym__repository_start_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_arg_token1] = ACTIONS(116),
    [aux_sym_add_token1] = ACTIONS(116),
    [aux_sym_copy_token1] = ACTIONS(116),
    [aux_sym_stopsignal_token1] = ACTIONS(116),
    [aux_sym_shell_token1] = ACTIONS(116),
    [aux_sym_volume_token1] = ACTIONS(116),
    [aux_sym_workdir_token1] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [aux_sym_cmd_token1] = ACTIONS(116),
    [aux_sym_entrypoint_token1] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(120),
    [aux_sym_from_token1] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [aux_sym_from_token2] = ACTIONS(116),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(122),
    [aux_sym__repository_start_token16] = ACTIONS(120),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [9] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_arg_token1] = ACTIONS(126),
    [aux_sym_add_token1] = ACTIONS(126),
    [aux_sym_copy_token1] = ACTIONS(126),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(124),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(126),
    [aux_sym__repository_start_token12] = ACTIONS(128),
    [aux_sym__repository_start_token15] = ACTIONS(128),
    [aux_sym__repository_start_token16] = ACTIONS(124),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [10] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(133),
    [aux_sym_copy_token1] = ACTIONS(133),
    [aux_sym_stopsignal_token1] = ACTIONS(133),
    [aux_sym_shell_token1] = ACTIONS(133),
    [aux_sym_volume_token1] = ACTIONS(133),
    [aux_sym_workdir_token1] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_user_token1] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [aux_sym_cmd_token1] = ACTIONS(133),
    [aux_sym_entrypoint_token1] = ACTIONS(133),
    [aux_sym_run_token1] = ACTIONS(133),
    [aux_sym_maintainer_token1] = ACTIONS(133),
    [aux_sym_expose_token1] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym_from_token1] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(131),
    [aux_sym_from_token2] = ACTIONS(133),
    [aux_sym__repository_start_token2] = ACTIONS(135),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [11] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(144),
    [aux_sym__repository_start_token16] = ACTIONS(142),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [12] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(148),
    [aux_sym_add_token1] = ACTIONS(148),
    [aux_sym_copy_token1] = ACTIONS(148),
    [aux_sym_stopsignal_token1] = ACTIONS(148),
    [aux_sym_shell_token1] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(148),
    [aux_sym_workdir_token1] = ACTIONS(148),
    [aux_sym_user_token1] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [aux_sym_cmd_token1] = ACTIONS(148),
    [aux_sym_entrypoint_token1] = ACTIONS(148),
    [aux_sym_run_token1] = ACTIONS(148),
    [aux_sym_maintainer_token1] = ACTIONS(148),
    [aux_sym_expose_token1] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(148),
    [aux_sym__repository_start_token4] = ACTIONS(150),
    [aux_sym__repository_start_token7] = ACTIONS(150),
    [aux_sym__repository_start_token16] = ACTIONS(146),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(144),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [aux_sym__repository_start_token16] = ACTIONS(142),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(144),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [aux_sym__repository_start_token16] = ACTIONS(142),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(144),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [aux_sym__repository_start_token16] = ACTIONS(142),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [16] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(102),
    [aux_sym_add_token1] = ACTIONS(102),
    [aux_sym_copy_token1] = ACTIONS(102),
    [aux_sym_stopsignal_token1] = ACTIONS(102),
    [aux_sym_shell_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(102),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [aux_sym_user_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_cmd_token1] = ACTIONS(102),
    [aux_sym_entrypoint_token1] = ACTIONS(102),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token3] = ACTIONS(106),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [17] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(155),
    [aux_sym_from_token2] = ACTIONS(157),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token8] = ACTIONS(159),
    [aux_sym__repository_start_token11] = ACTIONS(159),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(164),
    [aux_sym_add_token1] = ACTIONS(164),
    [aux_sym_copy_token1] = ACTIONS(164),
    [aux_sym_stopsignal_token1] = ACTIONS(164),
    [aux_sym_shell_token1] = ACTIONS(164),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_user_token1] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [aux_sym_cmd_token1] = ACTIONS(164),
    [aux_sym_entrypoint_token1] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(164),
    [aux_sym_maintainer_token1] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(162),
    [aux_sym_from_token2] = ACTIONS(164),
    [aux_sym__repository_start_token3] = ACTIONS(164),
    [aux_sym__repository_start_token12] = ACTIONS(162),
    [aux_sym__repository_start_token15] = ACTIONS(162),
    [aux_sym__repository_start_token16] = ACTIONS(162),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_arg_token1] = ACTIONS(168),
    [aux_sym_add_token1] = ACTIONS(168),
    [aux_sym_copy_token1] = ACTIONS(168),
    [aux_sym_stopsignal_token1] = ACTIONS(168),
    [aux_sym_shell_token1] = ACTIONS(168),
    [aux_sym_volume_token1] = ACTIONS(168),
    [aux_sym_workdir_token1] = ACTIONS(168),
    [aux_sym_user_token1] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [aux_sym_cmd_token1] = ACTIONS(168),
    [aux_sym_entrypoint_token1] = ACTIONS(168),
    [aux_sym_run_token1] = ACTIONS(168),
    [aux_sym_maintainer_token1] = ACTIONS(168),
    [aux_sym_expose_token1] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(166),
    [aux_sym_from_token1] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(166),
    [aux_sym_from_token2] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(168),
    [aux_sym__repository_start_token4] = ACTIONS(166),
    [aux_sym__repository_start_token7] = ACTIONS(166),
    [aux_sym__repository_start_token16] = ACTIONS(166),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(170),
    [aux_sym_user_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(170),
    [aux_sym_from_token2] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token16] = ACTIONS(170),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [aux_sym_cmd_token1] = ACTIONS(176),
    [aux_sym_entrypoint_token1] = ACTIONS(176),
    [aux_sym_run_token1] = ACTIONS(176),
    [aux_sym_maintainer_token1] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(174),
    [aux_sym_from_token2] = ACTIONS(176),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [aux_sym__repository_start_token16] = ACTIONS(174),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(180),
    [aux_sym_add_token1] = ACTIONS(180),
    [aux_sym_copy_token1] = ACTIONS(180),
    [aux_sym_stopsignal_token1] = ACTIONS(180),
    [aux_sym_shell_token1] = ACTIONS(180),
    [aux_sym_volume_token1] = ACTIONS(180),
    [aux_sym_workdir_token1] = ACTIONS(180),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [aux_sym_cmd_token1] = ACTIONS(180),
    [aux_sym_entrypoint_token1] = ACTIONS(180),
    [aux_sym_run_token1] = ACTIONS(180),
    [aux_sym_maintainer_token1] = ACTIONS(180),
    [aux_sym_expose_token1] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(178),
    [aux_sym_from_token2] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(178),
    [aux_sym__repository_start_token3] = ACTIONS(180),
    [aux_sym__repository_start_token16] = ACTIONS(178),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_arg_token1] = ACTIONS(184),
    [aux_sym_add_token1] = ACTIONS(184),
    [aux_sym_copy_token1] = ACTIONS(184),
    [aux_sym_stopsignal_token1] = ACTIONS(184),
    [aux_sym_shell_token1] = ACTIONS(184),
    [aux_sym_volume_token1] = ACTIONS(184),
    [aux_sym_workdir_token1] = ACTIONS(184),
    [aux_sym_user_token1] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(184),
    [aux_sym_cmd_token1] = ACTIONS(184),
    [aux_sym_entrypoint_token1] = ACTIONS(184),
    [aux_sym_run_token1] = ACTIONS(184),
    [aux_sym_maintainer_token1] = ACTIONS(184),
    [aux_sym_expose_token1] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(182),
    [aux_sym_from_token2] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(184),
    [aux_sym__repository_start_token8] = ACTIONS(182),
    [aux_sym__repository_start_token11] = ACTIONS(182),
    [aux_sym__repository_start_token16] = ACTIONS(182),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(133),
    [aux_sym_copy_token1] = ACTIONS(133),
    [aux_sym_stopsignal_token1] = ACTIONS(133),
    [aux_sym_shell_token1] = ACTIONS(133),
    [aux_sym_volume_token1] = ACTIONS(133),
    [aux_sym_workdir_token1] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [aux_sym_cmd_token1] = ACTIONS(133),
    [aux_sym_entrypoint_token1] = ACTIONS(133),
    [aux_sym_run_token1] = ACTIONS(133),
    [aux_sym_maintainer_token1] = ACTIONS(133),
    [aux_sym_expose_token1] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym_from_token1] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(131),
    [aux_sym_from_token2] = ACTIONS(133),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [25] = {
    [aux_sym__repository_start_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(102),
    [aux_sym_add_token1] = ACTIONS(102),
    [aux_sym_copy_token1] = ACTIONS(102),
    [aux_sym_stopsignal_token1] = ACTIONS(102),
    [aux_sym_shell_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(102),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [aux_sym_user_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(100),
    [aux_sym_cmd_token1] = ACTIONS(102),
    [aux_sym_entrypoint_token1] = ACTIONS(102),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token3] = ACTIONS(186),
    [aux_sym__repository_start_token4] = ACTIONS(188),
    [aux_sym__repository_start_token7] = ACTIONS(188),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [26] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(138),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token2] = ACTIONS(190),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [27] = {
    [aux_sym__repository_start_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(148),
    [aux_sym_add_token1] = ACTIONS(148),
    [aux_sym_copy_token1] = ACTIONS(148),
    [aux_sym_stopsignal_token1] = ACTIONS(148),
    [aux_sym_shell_token1] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(148),
    [aux_sym_workdir_token1] = ACTIONS(148),
    [aux_sym_user_token1] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(146),
    [aux_sym_cmd_token1] = ACTIONS(148),
    [aux_sym_entrypoint_token1] = ACTIONS(148),
    [aux_sym_run_token1] = ACTIONS(148),
    [aux_sym_maintainer_token1] = ACTIONS(148),
    [aux_sym_expose_token1] = ACTIONS(148),
    [aux_sym_from_token1] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(148),
    [aux_sym__repository_start_token4] = ACTIONS(194),
    [aux_sym__repository_start_token7] = ACTIONS(194),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_arg_token1] = ACTIONS(116),
    [aux_sym_add_token1] = ACTIONS(116),
    [aux_sym_copy_token1] = ACTIONS(116),
    [aux_sym_stopsignal_token1] = ACTIONS(116),
    [aux_sym_shell_token1] = ACTIONS(116),
    [aux_sym_volume_token1] = ACTIONS(116),
    [aux_sym_workdir_token1] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [aux_sym_user_token1] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(114),
    [aux_sym_cmd_token1] = ACTIONS(116),
    [aux_sym_entrypoint_token1] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [aux_sym_from_token2] = ACTIONS(116),
    [aux_sym__repository_start_token2] = ACTIONS(190),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [29] = {
    [aux_sym__repository_start_repeat3] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(102),
    [aux_sym_add_token1] = ACTIONS(102),
    [aux_sym_copy_token1] = ACTIONS(102),
    [aux_sym_stopsignal_token1] = ACTIONS(102),
    [aux_sym_shell_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(102),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [aux_sym_user_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(100),
    [aux_sym_cmd_token1] = ACTIONS(102),
    [aux_sym_entrypoint_token1] = ACTIONS(102),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token3] = ACTIONS(186),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [30] = {
    [aux_sym__repository_start_repeat4] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_arg_token1] = ACTIONS(126),
    [aux_sym_add_token1] = ACTIONS(126),
    [aux_sym_copy_token1] = ACTIONS(126),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(126),
    [aux_sym__repository_start_token12] = ACTIONS(201),
    [aux_sym__repository_start_token15] = ACTIONS(201),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [31] = {
    [aux_sym__repository_start_repeat4] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(102),
    [aux_sym_add_token1] = ACTIONS(102),
    [aux_sym_copy_token1] = ACTIONS(102),
    [aux_sym_stopsignal_token1] = ACTIONS(102),
    [aux_sym_shell_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(102),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [aux_sym_user_token1] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(100),
    [aux_sym_cmd_token1] = ACTIONS(102),
    [aux_sym_entrypoint_token1] = ACTIONS(102),
    [aux_sym_run_token1] = ACTIONS(102),
    [aux_sym_maintainer_token1] = ACTIONS(102),
    [aux_sym_expose_token1] = ACTIONS(102),
    [aux_sym_from_token1] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(102),
    [aux_sym__repository_start_token3] = ACTIONS(186),
    [aux_sym__repository_start_token12] = ACTIONS(204),
    [aux_sym__repository_start_token15] = ACTIONS(204),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [32] = {
    [aux_sym__repository_start_repeat3] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(155),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(155),
    [aux_sym_from_token2] = ACTIONS(157),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token8] = ACTIONS(206),
    [aux_sym__repository_start_token11] = ACTIONS(206),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [33] = {
    [aux_sym__repository_start_repeat4] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(138),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token12] = ACTIONS(204),
    [aux_sym__repository_start_token15] = ACTIONS(204),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [34] = {
    [sym_port_protocol] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [aux_sym_user_id_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(138),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(188),
    [aux_sym__repository_start_token7] = ACTIONS(188),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(133),
    [aux_sym_copy_token1] = ACTIONS(133),
    [aux_sym_stopsignal_token1] = ACTIONS(133),
    [aux_sym_shell_token1] = ACTIONS(133),
    [aux_sym_volume_token1] = ACTIONS(133),
    [aux_sym_workdir_token1] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [aux_sym_user_token1] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(133),
    [aux_sym_entrypoint_token1] = ACTIONS(133),
    [aux_sym_run_token1] = ACTIONS(133),
    [aux_sym_maintainer_token1] = ACTIONS(133),
    [aux_sym_expose_token1] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(131),
    [aux_sym_from_token2] = ACTIONS(133),
    [aux_sym__repository_start_token2] = ACTIONS(213),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [37] = {
    [aux_sym__repository_start_repeat3] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(140),
    [aux_sym_copy_token1] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(140),
    [aux_sym_shell_token1] = ACTIONS(140),
    [aux_sym_volume_token1] = ACTIONS(140),
    [aux_sym_workdir_token1] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(138),
    [aux_sym_cmd_token1] = ACTIONS(140),
    [aux_sym_entrypoint_token1] = ACTIONS(140),
    [aux_sym_run_token1] = ACTIONS(140),
    [aux_sym_maintainer_token1] = ACTIONS(140),
    [aux_sym_expose_token1] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [38] = {
    [sym_port_protocol] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym_arg_token1] = ACTIONS(216),
    [aux_sym_add_token1] = ACTIONS(216),
    [aux_sym_copy_token1] = ACTIONS(216),
    [aux_sym_stopsignal_token1] = ACTIONS(216),
    [aux_sym_shell_token1] = ACTIONS(216),
    [aux_sym_volume_token1] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_workdir_token1] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [aux_sym_user_token1] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [aux_sym_user_id_token1] = ACTIONS(216),
    [aux_sym_cmd_token1] = ACTIONS(216),
    [aux_sym_entrypoint_token1] = ACTIONS(216),
    [aux_sym_run_token1] = ACTIONS(216),
    [aux_sym_maintainer_token1] = ACTIONS(216),
    [aux_sym_expose_token1] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_arg_token1] = ACTIONS(220),
    [aux_sym_add_token1] = ACTIONS(220),
    [aux_sym_copy_token1] = ACTIONS(220),
    [aux_sym_stopsignal_token1] = ACTIONS(220),
    [aux_sym_shell_token1] = ACTIONS(220),
    [aux_sym_volume_token1] = ACTIONS(220),
    [aux_sym_workdir_token1] = ACTIONS(220),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(220),
    [aux_sym_cmd_token1] = ACTIONS(220),
    [aux_sym_entrypoint_token1] = ACTIONS(220),
    [aux_sym_run_token1] = ACTIONS(220),
    [aux_sym_maintainer_token1] = ACTIONS(220),
    [aux_sym_expose_token1] = ACTIONS(220),
    [aux_sym_from_token1] = ACTIONS(220),
    [anon_sym_AT] = ACTIONS(218),
    [aux_sym_from_token2] = ACTIONS(220),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [40] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_arg_token1] = ACTIONS(226),
    [aux_sym_add_token1] = ACTIONS(226),
    [aux_sym_copy_token1] = ACTIONS(226),
    [aux_sym_stopsignal_token1] = ACTIONS(226),
    [aux_sym_shell_token1] = ACTIONS(226),
    [aux_sym_volume_token1] = ACTIONS(226),
    [aux_sym_workdir_token1] = ACTIONS(226),
    [aux_sym_user_token1] = ACTIONS(226),
    [aux_sym_cmd_token1] = ACTIONS(226),
    [aux_sym_entrypoint_token1] = ACTIONS(226),
    [aux_sym_run_token1] = ACTIONS(226),
    [aux_sym_maintainer_token1] = ACTIONS(226),
    [aux_sym_expose_token1] = ACTIONS(226),
    [aux_sym_from_token1] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(226),
    [aux_sym__repository_start_token3] = ACTIONS(228),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(170),
    [aux_sym_user_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(170),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(170),
    [aux_sym_from_token2] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(180),
    [aux_sym_add_token1] = ACTIONS(180),
    [aux_sym_copy_token1] = ACTIONS(180),
    [aux_sym_stopsignal_token1] = ACTIONS(180),
    [aux_sym_shell_token1] = ACTIONS(180),
    [aux_sym_volume_token1] = ACTIONS(180),
    [aux_sym_workdir_token1] = ACTIONS(180),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(180),
    [aux_sym_entrypoint_token1] = ACTIONS(180),
    [aux_sym_run_token1] = ACTIONS(180),
    [aux_sym_maintainer_token1] = ACTIONS(180),
    [aux_sym_expose_token1] = ACTIONS(180),
    [aux_sym_from_token1] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(178),
    [aux_sym_from_token2] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(178),
    [aux_sym__repository_start_token3] = ACTIONS(180),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(133),
    [aux_sym_copy_token1] = ACTIONS(133),
    [aux_sym_stopsignal_token1] = ACTIONS(133),
    [aux_sym_shell_token1] = ACTIONS(133),
    [aux_sym_volume_token1] = ACTIONS(133),
    [aux_sym_workdir_token1] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(133),
    [aux_sym_entrypoint_token1] = ACTIONS(133),
    [aux_sym_run_token1] = ACTIONS(133),
    [aux_sym_maintainer_token1] = ACTIONS(133),
    [aux_sym_expose_token1] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(131),
    [aux_sym_from_token2] = ACTIONS(133),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [aux_sym_user_id_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(176),
    [aux_sym_entrypoint_token1] = ACTIONS(176),
    [aux_sym_run_token1] = ACTIONS(176),
    [aux_sym_maintainer_token1] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(174),
    [aux_sym_from_token2] = ACTIONS(176),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_arg_token1] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(170),
    [aux_sym_copy_token1] = ACTIONS(170),
    [aux_sym_stopsignal_token1] = ACTIONS(170),
    [aux_sym_shell_token1] = ACTIONS(170),
    [aux_sym_volume_token1] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [aux_sym_workdir_token1] = ACTIONS(170),
    [anon_sym_DOLLAR] = ACTIONS(170),
    [aux_sym_user_token1] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [aux_sym_user_id_token1] = ACTIONS(170),
    [aux_sym_cmd_token1] = ACTIONS(170),
    [aux_sym_entrypoint_token1] = ACTIONS(170),
    [aux_sym_run_token1] = ACTIONS(170),
    [aux_sym_maintainer_token1] = ACTIONS(170),
    [aux_sym_expose_token1] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym_from_token1] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_arg_token1] = ACTIONS(232),
    [aux_sym_add_token1] = ACTIONS(232),
    [aux_sym_copy_token1] = ACTIONS(232),
    [aux_sym_stopsignal_token1] = ACTIONS(232),
    [aux_sym_shell_token1] = ACTIONS(232),
    [aux_sym_volume_token1] = ACTIONS(232),
    [aux_sym_workdir_token1] = ACTIONS(232),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(232),
    [aux_sym_cmd_token1] = ACTIONS(232),
    [aux_sym_entrypoint_token1] = ACTIONS(232),
    [aux_sym_run_token1] = ACTIONS(232),
    [aux_sym_maintainer_token1] = ACTIONS(232),
    [aux_sym_expose_token1] = ACTIONS(232),
    [aux_sym_from_token1] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(230),
    [aux_sym_from_token2] = ACTIONS(232),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(234),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [48] = {
    [aux_sym__repository_start_repeat2] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_arg_token1] = ACTIONS(232),
    [aux_sym_add_token1] = ACTIONS(232),
    [aux_sym_copy_token1] = ACTIONS(232),
    [aux_sym_stopsignal_token1] = ACTIONS(232),
    [aux_sym_shell_token1] = ACTIONS(232),
    [aux_sym_volume_token1] = ACTIONS(232),
    [aux_sym_workdir_token1] = ACTIONS(232),
    [aux_sym_user_token1] = ACTIONS(232),
    [aux_sym_cmd_token1] = ACTIONS(232),
    [aux_sym_entrypoint_token1] = ACTIONS(232),
    [aux_sym_run_token1] = ACTIONS(232),
    [aux_sym_maintainer_token1] = ACTIONS(232),
    [aux_sym_expose_token1] = ACTIONS(232),
    [aux_sym_from_token1] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(230),
    [aux_sym_from_token2] = ACTIONS(232),
    [aux_sym__repository_start_token3] = ACTIONS(234),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [aux_sym_user_id_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_arg_token1] = ACTIONS(168),
    [aux_sym_add_token1] = ACTIONS(168),
    [aux_sym_copy_token1] = ACTIONS(168),
    [aux_sym_stopsignal_token1] = ACTIONS(168),
    [aux_sym_shell_token1] = ACTIONS(168),
    [aux_sym_volume_token1] = ACTIONS(168),
    [aux_sym_workdir_token1] = ACTIONS(168),
    [aux_sym_user_token1] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(166),
    [aux_sym_cmd_token1] = ACTIONS(168),
    [aux_sym_entrypoint_token1] = ACTIONS(168),
    [aux_sym_run_token1] = ACTIONS(168),
    [aux_sym_maintainer_token1] = ACTIONS(168),
    [aux_sym_expose_token1] = ACTIONS(168),
    [aux_sym_from_token1] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(166),
    [aux_sym_from_token2] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(168),
    [aux_sym__repository_start_token4] = ACTIONS(166),
    [aux_sym__repository_start_token7] = ACTIONS(166),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_arg_token1] = ACTIONS(184),
    [aux_sym_add_token1] = ACTIONS(184),
    [aux_sym_copy_token1] = ACTIONS(184),
    [aux_sym_stopsignal_token1] = ACTIONS(184),
    [aux_sym_shell_token1] = ACTIONS(184),
    [aux_sym_volume_token1] = ACTIONS(184),
    [aux_sym_workdir_token1] = ACTIONS(184),
    [aux_sym_user_token1] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(184),
    [aux_sym_entrypoint_token1] = ACTIONS(184),
    [aux_sym_run_token1] = ACTIONS(184),
    [aux_sym_maintainer_token1] = ACTIONS(184),
    [aux_sym_expose_token1] = ACTIONS(184),
    [aux_sym_from_token1] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(182),
    [aux_sym_from_token2] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(184),
    [aux_sym__repository_start_token8] = ACTIONS(182),
    [aux_sym__repository_start_token11] = ACTIONS(182),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(164),
    [aux_sym_add_token1] = ACTIONS(164),
    [aux_sym_copy_token1] = ACTIONS(164),
    [aux_sym_stopsignal_token1] = ACTIONS(164),
    [aux_sym_shell_token1] = ACTIONS(164),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_user_token1] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(164),
    [aux_sym_entrypoint_token1] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(164),
    [aux_sym_maintainer_token1] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [aux_sym_from_token1] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(162),
    [aux_sym_from_token2] = ACTIONS(164),
    [aux_sym__repository_start_token3] = ACTIONS(164),
    [aux_sym__repository_start_token12] = ACTIONS(162),
    [aux_sym__repository_start_token15] = ACTIONS(162),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [53] = {
    [aux_sym__repository_start_repeat3] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_arg_token1] = ACTIONS(232),
    [aux_sym_add_token1] = ACTIONS(232),
    [aux_sym_copy_token1] = ACTIONS(232),
    [aux_sym_stopsignal_token1] = ACTIONS(232),
    [aux_sym_shell_token1] = ACTIONS(232),
    [aux_sym_volume_token1] = ACTIONS(232),
    [aux_sym_workdir_token1] = ACTIONS(232),
    [aux_sym_user_token1] = ACTIONS(232),
    [aux_sym_cmd_token1] = ACTIONS(232),
    [aux_sym_entrypoint_token1] = ACTIONS(232),
    [aux_sym_run_token1] = ACTIONS(232),
    [aux_sym_maintainer_token1] = ACTIONS(232),
    [aux_sym_expose_token1] = ACTIONS(232),
    [aux_sym_from_token1] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(230),
    [aux_sym_from_token2] = ACTIONS(232),
    [aux_sym__repository_start_token3] = ACTIONS(234),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [54] = {
    [aux_sym__repository_start_repeat4] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_arg_token1] = ACTIONS(232),
    [aux_sym_add_token1] = ACTIONS(232),
    [aux_sym_copy_token1] = ACTIONS(232),
    [aux_sym_stopsignal_token1] = ACTIONS(232),
    [aux_sym_shell_token1] = ACTIONS(232),
    [aux_sym_volume_token1] = ACTIONS(232),
    [aux_sym_workdir_token1] = ACTIONS(232),
    [aux_sym_user_token1] = ACTIONS(232),
    [aux_sym_cmd_token1] = ACTIONS(232),
    [aux_sym_entrypoint_token1] = ACTIONS(232),
    [aux_sym_run_token1] = ACTIONS(232),
    [aux_sym_maintainer_token1] = ACTIONS(232),
    [aux_sym_expose_token1] = ACTIONS(232),
    [aux_sym_from_token1] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(230),
    [aux_sym_from_token2] = ACTIONS(232),
    [aux_sym__repository_start_token3] = ACTIONS(234),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [55] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_arg_token1] = ACTIONS(226),
    [aux_sym_add_token1] = ACTIONS(226),
    [aux_sym_copy_token1] = ACTIONS(226),
    [aux_sym_stopsignal_token1] = ACTIONS(226),
    [aux_sym_shell_token1] = ACTIONS(226),
    [aux_sym_volume_token1] = ACTIONS(226),
    [aux_sym_workdir_token1] = ACTIONS(226),
    [aux_sym_user_token1] = ACTIONS(226),
    [aux_sym_cmd_token1] = ACTIONS(226),
    [aux_sym_entrypoint_token1] = ACTIONS(226),
    [aux_sym_run_token1] = ACTIONS(226),
    [aux_sym_maintainer_token1] = ACTIONS(226),
    [aux_sym_expose_token1] = ACTIONS(226),
    [aux_sym_from_token1] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(226),
    [aux_sym__repository_start_token3] = ACTIONS(228),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [56] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_arg_token1] = ACTIONS(226),
    [aux_sym_add_token1] = ACTIONS(226),
    [aux_sym_copy_token1] = ACTIONS(226),
    [aux_sym_stopsignal_token1] = ACTIONS(226),
    [aux_sym_shell_token1] = ACTIONS(226),
    [aux_sym_volume_token1] = ACTIONS(226),
    [aux_sym_workdir_token1] = ACTIONS(226),
    [aux_sym_user_token1] = ACTIONS(226),
    [aux_sym_cmd_token1] = ACTIONS(226),
    [aux_sym_entrypoint_token1] = ACTIONS(226),
    [aux_sym_run_token1] = ACTIONS(226),
    [aux_sym_maintainer_token1] = ACTIONS(226),
    [aux_sym_expose_token1] = ACTIONS(226),
    [aux_sym_from_token1] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(226),
    [aux_sym__repository_start_token3] = ACTIONS(228),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [57] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_arg_token1] = ACTIONS(238),
    [aux_sym_add_token1] = ACTIONS(238),
    [aux_sym_copy_token1] = ACTIONS(238),
    [aux_sym_stopsignal_token1] = ACTIONS(238),
    [aux_sym_shell_token1] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(238),
    [aux_sym_workdir_token1] = ACTIONS(238),
    [aux_sym_user_token1] = ACTIONS(238),
    [aux_sym_cmd_token1] = ACTIONS(238),
    [aux_sym_entrypoint_token1] = ACTIONS(238),
    [aux_sym_run_token1] = ACTIONS(238),
    [aux_sym_maintainer_token1] = ACTIONS(238),
    [aux_sym_expose_token1] = ACTIONS(238),
    [aux_sym_from_token1] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(240),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [58] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_arg_token1] = ACTIONS(244),
    [aux_sym_add_token1] = ACTIONS(244),
    [aux_sym_copy_token1] = ACTIONS(244),
    [aux_sym_stopsignal_token1] = ACTIONS(244),
    [aux_sym_shell_token1] = ACTIONS(244),
    [aux_sym_volume_token1] = ACTIONS(244),
    [aux_sym_workdir_token1] = ACTIONS(244),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(244),
    [aux_sym_cmd_token1] = ACTIONS(244),
    [aux_sym_entrypoint_token1] = ACTIONS(244),
    [aux_sym_run_token1] = ACTIONS(244),
    [aux_sym_maintainer_token1] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [aux_sym_from_token1] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(246),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [59] = {
    [aux_sym__repository_start_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(248),
    [aux_sym_arg_token1] = ACTIONS(250),
    [aux_sym_add_token1] = ACTIONS(250),
    [aux_sym_copy_token1] = ACTIONS(250),
    [aux_sym_stopsignal_token1] = ACTIONS(250),
    [aux_sym_shell_token1] = ACTIONS(250),
    [aux_sym_volume_token1] = ACTIONS(250),
    [aux_sym_workdir_token1] = ACTIONS(250),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(250),
    [aux_sym_cmd_token1] = ACTIONS(250),
    [aux_sym_entrypoint_token1] = ACTIONS(250),
    [aux_sym_run_token1] = ACTIONS(250),
    [aux_sym_maintainer_token1] = ACTIONS(250),
    [aux_sym_expose_token1] = ACTIONS(250),
    [aux_sym_from_token1] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(250),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(252),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [60] = {
    [aux_sym__repository_start_repeat2] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_arg_token1] = ACTIONS(244),
    [aux_sym_add_token1] = ACTIONS(244),
    [aux_sym_copy_token1] = ACTIONS(244),
    [aux_sym_stopsignal_token1] = ACTIONS(244),
    [aux_sym_shell_token1] = ACTIONS(244),
    [aux_sym_volume_token1] = ACTIONS(244),
    [aux_sym_workdir_token1] = ACTIONS(244),
    [aux_sym_user_token1] = ACTIONS(244),
    [aux_sym_cmd_token1] = ACTIONS(244),
    [aux_sym_entrypoint_token1] = ACTIONS(244),
    [aux_sym_run_token1] = ACTIONS(244),
    [aux_sym_maintainer_token1] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [aux_sym_from_token1] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [aux_sym__repository_start_token3] = ACTIONS(246),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [61] = {
    [aux_sym__repository_start_repeat3] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_arg_token1] = ACTIONS(244),
    [aux_sym_add_token1] = ACTIONS(244),
    [aux_sym_copy_token1] = ACTIONS(244),
    [aux_sym_stopsignal_token1] = ACTIONS(244),
    [aux_sym_shell_token1] = ACTIONS(244),
    [aux_sym_volume_token1] = ACTIONS(244),
    [aux_sym_workdir_token1] = ACTIONS(244),
    [aux_sym_user_token1] = ACTIONS(244),
    [aux_sym_cmd_token1] = ACTIONS(244),
    [aux_sym_entrypoint_token1] = ACTIONS(244),
    [aux_sym_run_token1] = ACTIONS(244),
    [aux_sym_maintainer_token1] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [aux_sym_from_token1] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [aux_sym__repository_start_token3] = ACTIONS(246),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(138),
    [aux_sym_add_token1] = ACTIONS(138),
    [aux_sym_copy_token1] = ACTIONS(138),
    [aux_sym_stopsignal_token1] = ACTIONS(138),
    [aux_sym_shell_token1] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(138),
    [aux_sym_workdir_token1] = ACTIONS(138),
    [aux_sym_user_token1] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(138),
    [aux_sym_entrypoint_token1] = ACTIONS(138),
    [aux_sym_run_token1] = ACTIONS(138),
    [aux_sym_maintainer_token1] = ACTIONS(138),
    [aux_sym_expose_token1] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(138),
    [aux_sym__repository_start_token16] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [63] = {
    [aux_sym__repository_start_repeat4] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_arg_token1] = ACTIONS(244),
    [aux_sym_add_token1] = ACTIONS(244),
    [aux_sym_copy_token1] = ACTIONS(244),
    [aux_sym_stopsignal_token1] = ACTIONS(244),
    [aux_sym_shell_token1] = ACTIONS(244),
    [aux_sym_volume_token1] = ACTIONS(244),
    [aux_sym_workdir_token1] = ACTIONS(244),
    [aux_sym_user_token1] = ACTIONS(244),
    [aux_sym_cmd_token1] = ACTIONS(244),
    [aux_sym_entrypoint_token1] = ACTIONS(244),
    [aux_sym_run_token1] = ACTIONS(244),
    [aux_sym_maintainer_token1] = ACTIONS(244),
    [aux_sym_expose_token1] = ACTIONS(244),
    [aux_sym_from_token1] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(244),
    [aux_sym__repository_start_token3] = ACTIONS(246),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [aux_sym_arg_token1] = ACTIONS(254),
    [aux_sym_add_token1] = ACTIONS(254),
    [aux_sym_copy_token1] = ACTIONS(254),
    [aux_sym_stopsignal_token1] = ACTIONS(254),
    [aux_sym_shell_token1] = ACTIONS(254),
    [aux_sym_volume_token1] = ACTIONS(254),
    [aux_sym_workdir_token1] = ACTIONS(254),
    [aux_sym_user_token1] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(256),
    [aux_sym_cmd_token1] = ACTIONS(254),
    [aux_sym_entrypoint_token1] = ACTIONS(254),
    [aux_sym_run_token1] = ACTIONS(254),
    [aux_sym_maintainer_token1] = ACTIONS(254),
    [aux_sym_expose_token1] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(254),
    [aux_sym_from_token2] = ACTIONS(254),
    [aux_sym__repository_start_token16] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [aux_sym_arg_token1] = ACTIONS(260),
    [aux_sym_add_token1] = ACTIONS(260),
    [aux_sym_copy_token1] = ACTIONS(260),
    [aux_sym_stopsignal_token1] = ACTIONS(260),
    [aux_sym_shell_token1] = ACTIONS(260),
    [aux_sym_volume_token1] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [aux_sym_workdir_token1] = ACTIONS(260),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [aux_sym_user_token1] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(260),
    [aux_sym_user_id_token1] = ACTIONS(260),
    [aux_sym_cmd_token1] = ACTIONS(260),
    [aux_sym_entrypoint_token1] = ACTIONS(260),
    [aux_sym_run_token1] = ACTIONS(260),
    [aux_sym_maintainer_token1] = ACTIONS(260),
    [aux_sym_expose_token1] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [aux_sym_from_token1] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym_arg_token1] = ACTIONS(262),
    [aux_sym_add_token1] = ACTIONS(262),
    [aux_sym_copy_token1] = ACTIONS(262),
    [aux_sym_stopsignal_token1] = ACTIONS(262),
    [aux_sym_shell_token1] = ACTIONS(262),
    [aux_sym_volume_token1] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [aux_sym_workdir_token1] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [aux_sym_user_token1] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [aux_sym_user_id_token1] = ACTIONS(262),
    [aux_sym_cmd_token1] = ACTIONS(262),
    [aux_sym_entrypoint_token1] = ACTIONS(262),
    [aux_sym_run_token1] = ACTIONS(262),
    [aux_sym_maintainer_token1] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [aux_sym_from_token1] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym_arg_token1] = ACTIONS(216),
    [aux_sym_add_token1] = ACTIONS(216),
    [aux_sym_copy_token1] = ACTIONS(216),
    [aux_sym_stopsignal_token1] = ACTIONS(216),
    [aux_sym_shell_token1] = ACTIONS(216),
    [aux_sym_volume_token1] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_workdir_token1] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [aux_sym_user_token1] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [aux_sym_user_id_token1] = ACTIONS(216),
    [aux_sym_cmd_token1] = ACTIONS(216),
    [aux_sym_entrypoint_token1] = ACTIONS(216),
    [aux_sym_run_token1] = ACTIONS(216),
    [aux_sym_maintainer_token1] = ACTIONS(216),
    [aux_sym_expose_token1] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [aux_sym_from_token1] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [68] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_arg_token1] = ACTIONS(238),
    [aux_sym_add_token1] = ACTIONS(238),
    [aux_sym_copy_token1] = ACTIONS(238),
    [aux_sym_stopsignal_token1] = ACTIONS(238),
    [aux_sym_shell_token1] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(238),
    [aux_sym_workdir_token1] = ACTIONS(238),
    [aux_sym_user_token1] = ACTIONS(238),
    [aux_sym_cmd_token1] = ACTIONS(238),
    [aux_sym_entrypoint_token1] = ACTIONS(238),
    [aux_sym_run_token1] = ACTIONS(238),
    [aux_sym_maintainer_token1] = ACTIONS(238),
    [aux_sym_expose_token1] = ACTIONS(238),
    [aux_sym_from_token1] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(240),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [69] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_arg_token1] = ACTIONS(238),
    [aux_sym_add_token1] = ACTIONS(238),
    [aux_sym_copy_token1] = ACTIONS(238),
    [aux_sym_stopsignal_token1] = ACTIONS(238),
    [aux_sym_shell_token1] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(238),
    [aux_sym_workdir_token1] = ACTIONS(238),
    [aux_sym_user_token1] = ACTIONS(238),
    [aux_sym_cmd_token1] = ACTIONS(238),
    [aux_sym_entrypoint_token1] = ACTIONS(238),
    [aux_sym_run_token1] = ACTIONS(238),
    [aux_sym_maintainer_token1] = ACTIONS(238),
    [aux_sym_expose_token1] = ACTIONS(238),
    [aux_sym_from_token1] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(240),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_arg_token1] = ACTIONS(264),
    [aux_sym_add_token1] = ACTIONS(264),
    [aux_sym_copy_token1] = ACTIONS(264),
    [aux_sym_stopsignal_token1] = ACTIONS(264),
    [aux_sym_shell_token1] = ACTIONS(264),
    [aux_sym_volume_token1] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [aux_sym_workdir_token1] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [aux_sym_user_token1] = ACTIONS(264),
    [anon_sym_COLON] = ACTIONS(264),
    [aux_sym_user_id_token1] = ACTIONS(264),
    [aux_sym_cmd_token1] = ACTIONS(264),
    [aux_sym_entrypoint_token1] = ACTIONS(264),
    [aux_sym_run_token1] = ACTIONS(264),
    [aux_sym_maintainer_token1] = ACTIONS(264),
    [aux_sym_expose_token1] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [aux_sym_from_token1] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(100),
    [aux_sym_add_token1] = ACTIONS(100),
    [aux_sym_copy_token1] = ACTIONS(100),
    [aux_sym_stopsignal_token1] = ACTIONS(100),
    [aux_sym_shell_token1] = ACTIONS(100),
    [aux_sym_volume_token1] = ACTIONS(100),
    [aux_sym_workdir_token1] = ACTIONS(100),
    [aux_sym_user_token1] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(102),
    [aux_sym_cmd_token1] = ACTIONS(100),
    [aux_sym_entrypoint_token1] = ACTIONS(100),
    [aux_sym_run_token1] = ACTIONS(100),
    [aux_sym_maintainer_token1] = ACTIONS(100),
    [aux_sym_expose_token1] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(100),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [aux_sym_arg_token1] = ACTIONS(266),
    [aux_sym_add_token1] = ACTIONS(266),
    [aux_sym_copy_token1] = ACTIONS(266),
    [aux_sym_stopsignal_token1] = ACTIONS(266),
    [aux_sym_shell_token1] = ACTIONS(266),
    [aux_sym_volume_token1] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [aux_sym_workdir_token1] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [aux_sym_user_token1] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(266),
    [aux_sym_user_id_token1] = ACTIONS(266),
    [aux_sym_cmd_token1] = ACTIONS(266),
    [aux_sym_entrypoint_token1] = ACTIONS(266),
    [aux_sym_run_token1] = ACTIONS(266),
    [aux_sym_maintainer_token1] = ACTIONS(266),
    [aux_sym_expose_token1] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(268),
    [aux_sym_from_token1] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_arg_token1] = ACTIONS(270),
    [aux_sym_add_token1] = ACTIONS(270),
    [aux_sym_copy_token1] = ACTIONS(270),
    [aux_sym_stopsignal_token1] = ACTIONS(270),
    [aux_sym_shell_token1] = ACTIONS(270),
    [aux_sym_volume_token1] = ACTIONS(270),
    [aux_sym_workdir_token1] = ACTIONS(270),
    [aux_sym_user_token1] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(272),
    [aux_sym_cmd_token1] = ACTIONS(270),
    [aux_sym_entrypoint_token1] = ACTIONS(270),
    [aux_sym_run_token1] = ACTIONS(270),
    [aux_sym_maintainer_token1] = ACTIONS(270),
    [aux_sym_expose_token1] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(274),
    [aux_sym_from_token1] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [aux_sym_from_token2] = ACTIONS(270),
    [aux_sym__repository_start_token16] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_arg_token1] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(278),
    [aux_sym_copy_token1] = ACTIONS(278),
    [aux_sym_stopsignal_token1] = ACTIONS(278),
    [aux_sym_shell_token1] = ACTIONS(278),
    [aux_sym_volume_token1] = ACTIONS(278),
    [aux_sym_workdir_token1] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(278),
    [aux_sym_cmd_token1] = ACTIONS(278),
    [aux_sym_entrypoint_token1] = ACTIONS(278),
    [aux_sym_run_token1] = ACTIONS(278),
    [aux_sym_maintainer_token1] = ACTIONS(278),
    [aux_sym_expose_token1] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(278),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(280),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [75] = {
    [sym_path] = STATE(88),
    [aux_sym_add_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(282),
    [aux_sym_arg_token1] = ACTIONS(284),
    [aux_sym_add_token1] = ACTIONS(284),
    [aux_sym_copy_token1] = ACTIONS(284),
    [aux_sym_stopsignal_token1] = ACTIONS(284),
    [aux_sym_shell_token1] = ACTIONS(284),
    [aux_sym_volume_token1] = ACTIONS(284),
    [aux_sym_path_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [aux_sym_workdir_token1] = ACTIONS(284),
    [aux_sym_user_token1] = ACTIONS(284),
    [aux_sym_cmd_token1] = ACTIONS(284),
    [aux_sym_entrypoint_token1] = ACTIONS(284),
    [aux_sym_run_token1] = ACTIONS(284),
    [aux_sym_maintainer_token1] = ACTIONS(284),
    [aux_sym_expose_token1] = ACTIONS(284),
    [aux_sym_from_token1] = ACTIONS(284),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [aux_sym_arg_token1] = ACTIONS(290),
    [aux_sym_add_token1] = ACTIONS(290),
    [aux_sym_copy_token1] = ACTIONS(290),
    [aux_sym_stopsignal_token1] = ACTIONS(290),
    [aux_sym_shell_token1] = ACTIONS(290),
    [aux_sym_volume_token1] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [aux_sym_workdir_token1] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(290),
    [aux_sym_user_token1] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(290),
    [aux_sym_user_id_token1] = ACTIONS(290),
    [aux_sym_cmd_token1] = ACTIONS(290),
    [aux_sym_entrypoint_token1] = ACTIONS(290),
    [aux_sym_run_token1] = ACTIONS(290),
    [aux_sym_maintainer_token1] = ACTIONS(290),
    [aux_sym_expose_token1] = ACTIONS(290),
    [aux_sym_from_token1] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym_arg_token1] = ACTIONS(294),
    [aux_sym_add_token1] = ACTIONS(294),
    [aux_sym_copy_token1] = ACTIONS(294),
    [aux_sym_stopsignal_token1] = ACTIONS(294),
    [aux_sym_shell_token1] = ACTIONS(294),
    [aux_sym_volume_token1] = ACTIONS(294),
    [aux_sym_workdir_token1] = ACTIONS(294),
    [aux_sym_user_token1] = ACTIONS(294),
    [aux_sym_cmd_token1] = ACTIONS(294),
    [aux_sym_entrypoint_token1] = ACTIONS(294),
    [aux_sym_run_token1] = ACTIONS(294),
    [aux_sym_maintainer_token1] = ACTIONS(294),
    [aux_sym_expose_token1] = ACTIONS(294),
    [aux_sym_from_token1] = ACTIONS(294),
    [aux_sym__repository_start_token3] = ACTIONS(296),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [78] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym_arg_token1] = ACTIONS(294),
    [aux_sym_add_token1] = ACTIONS(294),
    [aux_sym_copy_token1] = ACTIONS(294),
    [aux_sym_stopsignal_token1] = ACTIONS(294),
    [aux_sym_shell_token1] = ACTIONS(294),
    [aux_sym_volume_token1] = ACTIONS(294),
    [aux_sym_workdir_token1] = ACTIONS(294),
    [aux_sym_user_token1] = ACTIONS(294),
    [aux_sym_cmd_token1] = ACTIONS(294),
    [aux_sym_entrypoint_token1] = ACTIONS(294),
    [aux_sym_run_token1] = ACTIONS(294),
    [aux_sym_maintainer_token1] = ACTIONS(294),
    [aux_sym_expose_token1] = ACTIONS(294),
    [aux_sym_from_token1] = ACTIONS(294),
    [aux_sym__repository_start_token3] = ACTIONS(296),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [79] = {
    [aux_sym__repository_start_repeat4] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_arg_token1] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(278),
    [aux_sym_copy_token1] = ACTIONS(278),
    [aux_sym_stopsignal_token1] = ACTIONS(278),
    [aux_sym_shell_token1] = ACTIONS(278),
    [aux_sym_volume_token1] = ACTIONS(278),
    [aux_sym_workdir_token1] = ACTIONS(278),
    [aux_sym_user_token1] = ACTIONS(278),
    [aux_sym_cmd_token1] = ACTIONS(278),
    [aux_sym_entrypoint_token1] = ACTIONS(278),
    [aux_sym_run_token1] = ACTIONS(278),
    [aux_sym_maintainer_token1] = ACTIONS(278),
    [aux_sym_expose_token1] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(278),
    [aux_sym__repository_start_token3] = ACTIONS(280),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [aux_sym_arg_token1] = ACTIONS(298),
    [aux_sym_add_token1] = ACTIONS(298),
    [aux_sym_copy_token1] = ACTIONS(298),
    [aux_sym_stopsignal_token1] = ACTIONS(298),
    [aux_sym_shell_token1] = ACTIONS(298),
    [aux_sym_volume_token1] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [aux_sym_workdir_token1] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [aux_sym_user_token1] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [aux_sym_user_id_token1] = ACTIONS(298),
    [aux_sym_cmd_token1] = ACTIONS(298),
    [aux_sym_entrypoint_token1] = ACTIONS(298),
    [aux_sym_run_token1] = ACTIONS(298),
    [aux_sym_maintainer_token1] = ACTIONS(298),
    [aux_sym_expose_token1] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [81] = {
    [aux_sym_workdir_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(300),
    [aux_sym_arg_token1] = ACTIONS(302),
    [aux_sym_add_token1] = ACTIONS(302),
    [aux_sym_copy_token1] = ACTIONS(302),
    [aux_sym_stopsignal_token1] = ACTIONS(302),
    [aux_sym_shell_token1] = ACTIONS(302),
    [aux_sym_volume_token1] = ACTIONS(302),
    [aux_sym_workdir_token1] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(304),
    [aux_sym_workdir_token3] = ACTIONS(304),
    [aux_sym_workdir_token4] = ACTIONS(302),
    [aux_sym_user_token1] = ACTIONS(302),
    [aux_sym_cmd_token1] = ACTIONS(302),
    [aux_sym_entrypoint_token1] = ACTIONS(302),
    [aux_sym_run_token1] = ACTIONS(302),
    [aux_sym_maintainer_token1] = ACTIONS(302),
    [aux_sym_expose_token1] = ACTIONS(302),
    [aux_sym_from_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [82] = {
    [aux_sym__repository_start_repeat3] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_arg_token1] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(278),
    [aux_sym_copy_token1] = ACTIONS(278),
    [aux_sym_stopsignal_token1] = ACTIONS(278),
    [aux_sym_shell_token1] = ACTIONS(278),
    [aux_sym_volume_token1] = ACTIONS(278),
    [aux_sym_workdir_token1] = ACTIONS(278),
    [aux_sym_user_token1] = ACTIONS(278),
    [aux_sym_cmd_token1] = ACTIONS(278),
    [aux_sym_entrypoint_token1] = ACTIONS(278),
    [aux_sym_run_token1] = ACTIONS(278),
    [aux_sym_maintainer_token1] = ACTIONS(278),
    [aux_sym_expose_token1] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(278),
    [aux_sym__repository_start_token3] = ACTIONS(280),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [83] = {
    [aux_sym__repository_start_repeat2] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_arg_token1] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(278),
    [aux_sym_copy_token1] = ACTIONS(278),
    [aux_sym_stopsignal_token1] = ACTIONS(278),
    [aux_sym_shell_token1] = ACTIONS(278),
    [aux_sym_volume_token1] = ACTIONS(278),
    [aux_sym_workdir_token1] = ACTIONS(278),
    [aux_sym_user_token1] = ACTIONS(278),
    [aux_sym_cmd_token1] = ACTIONS(278),
    [aux_sym_entrypoint_token1] = ACTIONS(278),
    [aux_sym_run_token1] = ACTIONS(278),
    [aux_sym_maintainer_token1] = ACTIONS(278),
    [aux_sym_expose_token1] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(278),
    [aux_sym__repository_start_token3] = ACTIONS(280),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [84] = {
    [aux_sym__repository_start_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_user_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(311),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [85] = {
    [aux_sym_workdir_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(313),
    [aux_sym_arg_token1] = ACTIONS(315),
    [aux_sym_add_token1] = ACTIONS(315),
    [aux_sym_copy_token1] = ACTIONS(315),
    [aux_sym_stopsignal_token1] = ACTIONS(315),
    [aux_sym_shell_token1] = ACTIONS(315),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym_workdir_token3] = ACTIONS(317),
    [aux_sym_workdir_token4] = ACTIONS(319),
    [aux_sym_user_token1] = ACTIONS(315),
    [aux_sym_cmd_token1] = ACTIONS(315),
    [aux_sym_entrypoint_token1] = ACTIONS(315),
    [aux_sym_run_token1] = ACTIONS(315),
    [aux_sym_maintainer_token1] = ACTIONS(315),
    [aux_sym_expose_token1] = ACTIONS(315),
    [aux_sym_from_token1] = ACTIONS(315),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [86] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym_arg_token1] = ACTIONS(294),
    [aux_sym_add_token1] = ACTIONS(294),
    [aux_sym_copy_token1] = ACTIONS(294),
    [aux_sym_stopsignal_token1] = ACTIONS(294),
    [aux_sym_shell_token1] = ACTIONS(294),
    [aux_sym_volume_token1] = ACTIONS(294),
    [aux_sym_workdir_token1] = ACTIONS(294),
    [aux_sym_user_token1] = ACTIONS(294),
    [aux_sym_cmd_token1] = ACTIONS(294),
    [aux_sym_entrypoint_token1] = ACTIONS(294),
    [aux_sym_run_token1] = ACTIONS(294),
    [aux_sym_maintainer_token1] = ACTIONS(294),
    [aux_sym_expose_token1] = ACTIONS(294),
    [aux_sym_from_token1] = ACTIONS(294),
    [aux_sym__repository_start_token3] = ACTIONS(296),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [87] = {
    [sym_path] = STATE(88),
    [aux_sym_add_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_stopsignal_token1] = ACTIONS(323),
    [aux_sym_shell_token1] = ACTIONS(323),
    [aux_sym_volume_token1] = ACTIONS(323),
    [aux_sym_path_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [aux_sym_workdir_token1] = ACTIONS(323),
    [aux_sym_user_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_run_token1] = ACTIONS(323),
    [aux_sym_maintainer_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [88] = {
    [sym_path] = STATE(88),
    [aux_sym_add_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_arg_token1] = ACTIONS(327),
    [aux_sym_add_token1] = ACTIONS(327),
    [aux_sym_copy_token1] = ACTIONS(327),
    [aux_sym_stopsignal_token1] = ACTIONS(327),
    [aux_sym_shell_token1] = ACTIONS(327),
    [aux_sym_volume_token1] = ACTIONS(327),
    [aux_sym_path_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [aux_sym_workdir_token1] = ACTIONS(327),
    [aux_sym_user_token1] = ACTIONS(327),
    [aux_sym_cmd_token1] = ACTIONS(327),
    [aux_sym_entrypoint_token1] = ACTIONS(327),
    [aux_sym_run_token1] = ACTIONS(327),
    [aux_sym_maintainer_token1] = ACTIONS(327),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_stopsignal_token1] = ACTIONS(335),
    [aux_sym_shell_token1] = ACTIONS(335),
    [aux_sym_volume_token1] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [aux_sym_user_token1] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [aux_sym_user_id_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_maintainer_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
    [aux_sym_workdir_repeat1] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_arg_token1] = ACTIONS(341),
    [aux_sym_add_token1] = ACTIONS(341),
    [aux_sym_copy_token1] = ACTIONS(341),
    [aux_sym_stopsignal_token1] = ACTIONS(341),
    [aux_sym_shell_token1] = ACTIONS(341),
    [aux_sym_volume_token1] = ACTIONS(341),
    [aux_sym_workdir_token1] = ACTIONS(341),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym_workdir_token3] = ACTIONS(317),
    [aux_sym_workdir_token4] = ACTIONS(343),
    [aux_sym_user_token1] = ACTIONS(341),
    [aux_sym_cmd_token1] = ACTIONS(341),
    [aux_sym_entrypoint_token1] = ACTIONS(341),
    [aux_sym_run_token1] = ACTIONS(341),
    [aux_sym_maintainer_token1] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(341),
    [aux_sym_from_token1] = ACTIONS(341),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [91] = {
    [sym_path] = STATE(88),
    [aux_sym_add_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_arg_token1] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(347),
    [aux_sym_copy_token1] = ACTIONS(347),
    [aux_sym_stopsignal_token1] = ACTIONS(347),
    [aux_sym_shell_token1] = ACTIONS(347),
    [aux_sym_volume_token1] = ACTIONS(347),
    [aux_sym_path_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [aux_sym_workdir_token1] = ACTIONS(347),
    [aux_sym_user_token1] = ACTIONS(347),
    [aux_sym_cmd_token1] = ACTIONS(347),
    [aux_sym_entrypoint_token1] = ACTIONS(347),
    [aux_sym_run_token1] = ACTIONS(347),
    [aux_sym_maintainer_token1] = ACTIONS(347),
    [aux_sym_expose_token1] = ACTIONS(347),
    [aux_sym_from_token1] = ACTIONS(347),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [92] = {
    [aux_sym__anything] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(349),
    [aux_sym_arg_token1] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(351),
    [aux_sym_copy_token1] = ACTIONS(351),
    [aux_sym_stopsignal_token1] = ACTIONS(351),
    [aux_sym_shell_token1] = ACTIONS(351),
    [aux_sym_volume_token1] = ACTIONS(351),
    [aux_sym_workdir_token1] = ACTIONS(351),
    [aux_sym_user_token1] = ACTIONS(351),
    [aux_sym_cmd_token1] = ACTIONS(351),
    [aux_sym_entrypoint_token1] = ACTIONS(351),
    [aux_sym_run_token1] = ACTIONS(351),
    [aux_sym_maintainer_token1] = ACTIONS(351),
    [aux_sym_expose_token1] = ACTIONS(351),
    [aux_sym_from_token1] = ACTIONS(351),
    [aux_sym__anything_token1] = ACTIONS(353),
    [aux_sym__anything_token2] = ACTIONS(353),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_arg_token1] = ACTIONS(138),
    [aux_sym_add_token1] = ACTIONS(138),
    [aux_sym_copy_token1] = ACTIONS(138),
    [aux_sym_stopsignal_token1] = ACTIONS(138),
    [aux_sym_shell_token1] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(138),
    [aux_sym_workdir_token1] = ACTIONS(138),
    [aux_sym_user_token1] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [aux_sym_cmd_token1] = ACTIONS(138),
    [aux_sym_entrypoint_token1] = ACTIONS(138),
    [aux_sym_run_token1] = ACTIONS(138),
    [aux_sym_maintainer_token1] = ACTIONS(138),
    [aux_sym_expose_token1] = ACTIONS(138),
    [aux_sym_from_token1] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_stopsignal_token1] = ACTIONS(355),
    [aux_sym_shell_token1] = ACTIONS(355),
    [aux_sym_volume_token1] = ACTIONS(355),
    [aux_sym_workdir_token1] = ACTIONS(355),
    [aux_sym_user_token1] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_run_token1] = ACTIONS(355),
    [aux_sym_maintainer_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(359),
    [aux_sym_from_token2] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [aux_sym_workdir_token3] = ACTIONS(176),
    [aux_sym_workdir_token4] = ACTIONS(176),
    [aux_sym_user_token1] = ACTIONS(176),
    [aux_sym_cmd_token1] = ACTIONS(176),
    [aux_sym_entrypoint_token1] = ACTIONS(176),
    [aux_sym_run_token1] = ACTIONS(176),
    [aux_sym_maintainer_token1] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [aux_sym_arg_token1] = ACTIONS(254),
    [aux_sym_add_token1] = ACTIONS(254),
    [aux_sym_copy_token1] = ACTIONS(254),
    [aux_sym_stopsignal_token1] = ACTIONS(254),
    [aux_sym_shell_token1] = ACTIONS(254),
    [aux_sym_volume_token1] = ACTIONS(254),
    [aux_sym_workdir_token1] = ACTIONS(254),
    [aux_sym_user_token1] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [aux_sym_cmd_token1] = ACTIONS(254),
    [aux_sym_entrypoint_token1] = ACTIONS(254),
    [aux_sym_run_token1] = ACTIONS(254),
    [aux_sym_maintainer_token1] = ACTIONS(254),
    [aux_sym_expose_token1] = ACTIONS(254),
    [aux_sym_from_token1] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(254),
    [aux_sym_from_token2] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(367),
    [aux_sym_from_token2] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_arg_token1] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(371),
    [aux_sym_copy_token1] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(375),
    [aux_sym_from_token2] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__anything] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym__anything_token1] = ACTIONS(383),
    [aux_sym__anything_token2] = ACTIONS(383),
    [sym_comment] = ACTIONS(381),
    [sym_line_continuation] = ACTIONS(110),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_arg_token1] = ACTIONS(270),
    [aux_sym_add_token1] = ACTIONS(270),
    [aux_sym_copy_token1] = ACTIONS(270),
    [aux_sym_stopsignal_token1] = ACTIONS(270),
    [aux_sym_shell_token1] = ACTIONS(270),
    [aux_sym_volume_token1] = ACTIONS(270),
    [aux_sym_workdir_token1] = ACTIONS(270),
    [aux_sym_user_token1] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(270),
    [aux_sym_cmd_token1] = ACTIONS(270),
    [aux_sym_entrypoint_token1] = ACTIONS(270),
    [aux_sym_run_token1] = ACTIONS(270),
    [aux_sym_maintainer_token1] = ACTIONS(270),
    [aux_sym_expose_token1] = ACTIONS(270),
    [aux_sym_from_token1] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [aux_sym_from_token2] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(180),
    [aux_sym_add_token1] = ACTIONS(180),
    [aux_sym_copy_token1] = ACTIONS(180),
    [aux_sym_stopsignal_token1] = ACTIONS(180),
    [aux_sym_shell_token1] = ACTIONS(180),
    [aux_sym_volume_token1] = ACTIONS(180),
    [aux_sym_workdir_token1] = ACTIONS(180),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_workdir_token3] = ACTIONS(180),
    [aux_sym_workdir_token4] = ACTIONS(180),
    [aux_sym_user_token1] = ACTIONS(180),
    [aux_sym_cmd_token1] = ACTIONS(180),
    [aux_sym_entrypoint_token1] = ACTIONS(180),
    [aux_sym_run_token1] = ACTIONS(180),
    [aux_sym_maintainer_token1] = ACTIONS(180),
    [aux_sym_expose_token1] = ACTIONS(180),
    [aux_sym_from_token1] = ACTIONS(180),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [aux_sym_workdir_token3] = ACTIONS(172),
    [aux_sym_workdir_token4] = ACTIONS(172),
    [aux_sym_user_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [aux_sym_arg_token1] = ACTIONS(386),
    [aux_sym_add_token1] = ACTIONS(386),
    [aux_sym_copy_token1] = ACTIONS(386),
    [aux_sym_stopsignal_token1] = ACTIONS(386),
    [aux_sym_shell_token1] = ACTIONS(386),
    [aux_sym_volume_token1] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [aux_sym_workdir_token1] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [aux_sym_user_token1] = ACTIONS(386),
    [aux_sym_user_id_token1] = ACTIONS(386),
    [aux_sym_cmd_token1] = ACTIONS(386),
    [aux_sym_entrypoint_token1] = ACTIONS(386),
    [aux_sym_run_token1] = ACTIONS(386),
    [aux_sym_maintainer_token1] = ACTIONS(386),
    [aux_sym_expose_token1] = ACTIONS(386),
    [aux_sym_from_token1] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_arg_token1] = ACTIONS(388),
    [aux_sym_add_token1] = ACTIONS(388),
    [aux_sym_copy_token1] = ACTIONS(388),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(390),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(392),
    [aux_sym_from_token2] = ACTIONS(394),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [aux_sym_arg_token1] = ACTIONS(302),
    [aux_sym_add_token1] = ACTIONS(302),
    [aux_sym_copy_token1] = ACTIONS(302),
    [aux_sym_stopsignal_token1] = ACTIONS(302),
    [aux_sym_shell_token1] = ACTIONS(302),
    [aux_sym_volume_token1] = ACTIONS(302),
    [aux_sym_workdir_token1] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [aux_sym_workdir_token3] = ACTIONS(302),
    [aux_sym_workdir_token4] = ACTIONS(302),
    [aux_sym_user_token1] = ACTIONS(302),
    [aux_sym_cmd_token1] = ACTIONS(302),
    [aux_sym_entrypoint_token1] = ACTIONS(302),
    [aux_sym_run_token1] = ACTIONS(302),
    [aux_sym_maintainer_token1] = ACTIONS(302),
    [aux_sym_expose_token1] = ACTIONS(302),
    [aux_sym_from_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [106] = {
    [aux_sym__anything] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(396),
    [aux_sym_arg_token1] = ACTIONS(398),
    [aux_sym_add_token1] = ACTIONS(398),
    [aux_sym_copy_token1] = ACTIONS(398),
    [aux_sym_stopsignal_token1] = ACTIONS(398),
    [aux_sym_shell_token1] = ACTIONS(398),
    [aux_sym_volume_token1] = ACTIONS(398),
    [aux_sym_workdir_token1] = ACTIONS(398),
    [aux_sym_user_token1] = ACTIONS(398),
    [aux_sym_cmd_token1] = ACTIONS(398),
    [aux_sym_entrypoint_token1] = ACTIONS(398),
    [aux_sym_run_token1] = ACTIONS(398),
    [aux_sym_maintainer_token1] = ACTIONS(398),
    [aux_sym_expose_token1] = ACTIONS(398),
    [aux_sym_from_token1] = ACTIONS(398),
    [aux_sym__anything_token1] = ACTIONS(400),
    [aux_sym__anything_token2] = ACTIONS(400),
    [sym_comment] = ACTIONS(402),
    [sym_line_continuation] = ACTIONS(110),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [aux_sym_arg_token1] = ACTIONS(404),
    [aux_sym_add_token1] = ACTIONS(404),
    [aux_sym_copy_token1] = ACTIONS(404),
    [aux_sym_stopsignal_token1] = ACTIONS(404),
    [aux_sym_shell_token1] = ACTIONS(404),
    [aux_sym_volume_token1] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [aux_sym_workdir_token1] = ACTIONS(404),
    [anon_sym_DOLLAR] = ACTIONS(404),
    [aux_sym_user_token1] = ACTIONS(404),
    [aux_sym_user_id_token1] = ACTIONS(404),
    [aux_sym_cmd_token1] = ACTIONS(404),
    [aux_sym_entrypoint_token1] = ACTIONS(404),
    [aux_sym_run_token1] = ACTIONS(404),
    [aux_sym_maintainer_token1] = ACTIONS(404),
    [aux_sym_expose_token1] = ACTIONS(404),
    [aux_sym_from_token1] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [aux_sym__anything] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym__anything_token1] = ACTIONS(406),
    [aux_sym__anything_token2] = ACTIONS(406),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [109] = {
    [aux_sym__anything] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(411),
    [aux_sym_add_token1] = ACTIONS(411),
    [aux_sym_copy_token1] = ACTIONS(411),
    [aux_sym_stopsignal_token1] = ACTIONS(411),
    [aux_sym_shell_token1] = ACTIONS(411),
    [aux_sym_volume_token1] = ACTIONS(411),
    [aux_sym_workdir_token1] = ACTIONS(411),
    [aux_sym_user_token1] = ACTIONS(411),
    [aux_sym_cmd_token1] = ACTIONS(411),
    [aux_sym_entrypoint_token1] = ACTIONS(411),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_maintainer_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [aux_sym__anything_token1] = ACTIONS(413),
    [aux_sym__anything_token2] = ACTIONS(413),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_arg_token1] = ACTIONS(100),
    [aux_sym_add_token1] = ACTIONS(100),
    [aux_sym_copy_token1] = ACTIONS(100),
    [aux_sym_stopsignal_token1] = ACTIONS(100),
    [aux_sym_shell_token1] = ACTIONS(100),
    [aux_sym_volume_token1] = ACTIONS(100),
    [aux_sym_workdir_token1] = ACTIONS(100),
    [aux_sym_user_token1] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [aux_sym_cmd_token1] = ACTIONS(100),
    [aux_sym_entrypoint_token1] = ACTIONS(100),
    [aux_sym_run_token1] = ACTIONS(100),
    [aux_sym_maintainer_token1] = ACTIONS(100),
    [aux_sym_expose_token1] = ACTIONS(100),
    [aux_sym_from_token1] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_from_token2] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_arg_token1] = ACTIONS(224),
    [aux_sym_add_token1] = ACTIONS(224),
    [aux_sym_copy_token1] = ACTIONS(224),
    [aux_sym_stopsignal_token1] = ACTIONS(224),
    [aux_sym_shell_token1] = ACTIONS(224),
    [aux_sym_volume_token1] = ACTIONS(224),
    [aux_sym_workdir_token1] = ACTIONS(224),
    [aux_sym_user_token1] = ACTIONS(224),
    [aux_sym_cmd_token1] = ACTIONS(224),
    [aux_sym_entrypoint_token1] = ACTIONS(224),
    [aux_sym_run_token1] = ACTIONS(224),
    [aux_sym_maintainer_token1] = ACTIONS(224),
    [aux_sym_expose_token1] = ACTIONS(224),
    [aux_sym_from_token1] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
    [aux_sym_from_token2] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_arg_token1] = ACTIONS(415),
    [aux_sym_add_token1] = ACTIONS(415),
    [aux_sym_copy_token1] = ACTIONS(415),
    [aux_sym_stopsignal_token1] = ACTIONS(415),
    [aux_sym_shell_token1] = ACTIONS(415),
    [aux_sym_volume_token1] = ACTIONS(415),
    [aux_sym_workdir_token1] = ACTIONS(415),
    [aux_sym_user_token1] = ACTIONS(415),
    [aux_sym_cmd_token1] = ACTIONS(415),
    [aux_sym_entrypoint_token1] = ACTIONS(415),
    [aux_sym_run_token1] = ACTIONS(415),
    [aux_sym_maintainer_token1] = ACTIONS(415),
    [aux_sym_expose_token1] = ACTIONS(415),
    [aux_sym_from_token1] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
    [aux_sym_from_token2] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_arg_token1] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(371),
    [aux_sym_copy_token1] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(375),
    [aux_sym_from_token2] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_arg_token1] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(417),
    [aux_sym_copy_token1] = ACTIONS(417),
    [aux_sym_stopsignal_token1] = ACTIONS(417),
    [aux_sym_shell_token1] = ACTIONS(417),
    [aux_sym_volume_token1] = ACTIONS(417),
    [aux_sym_workdir_token1] = ACTIONS(417),
    [aux_sym_user_token1] = ACTIONS(417),
    [aux_sym_cmd_token1] = ACTIONS(417),
    [aux_sym_entrypoint_token1] = ACTIONS(417),
    [aux_sym_run_token1] = ACTIONS(417),
    [aux_sym_maintainer_token1] = ACTIONS(417),
    [aux_sym_expose_token1] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(419),
    [aux_sym_from_token2] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [aux_sym_arg_token1] = ACTIONS(425),
    [aux_sym_add_token1] = ACTIONS(425),
    [aux_sym_copy_token1] = ACTIONS(425),
    [aux_sym_stopsignal_token1] = ACTIONS(425),
    [aux_sym_shell_token1] = ACTIONS(425),
    [aux_sym_volume_token1] = ACTIONS(425),
    [aux_sym_path_token1] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [aux_sym_workdir_token1] = ACTIONS(425),
    [aux_sym_user_token1] = ACTIONS(425),
    [aux_sym_cmd_token1] = ACTIONS(425),
    [aux_sym_entrypoint_token1] = ACTIONS(425),
    [aux_sym_run_token1] = ACTIONS(425),
    [aux_sym_maintainer_token1] = ACTIONS(425),
    [aux_sym_expose_token1] = ACTIONS(425),
    [aux_sym_from_token1] = ACTIONS(425),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_arg_token1] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(427),
    [aux_sym_copy_token1] = ACTIONS(427),
    [aux_sym_stopsignal_token1] = ACTIONS(427),
    [aux_sym_shell_token1] = ACTIONS(427),
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [aux_sym_user_token1] = ACTIONS(427),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(429),
    [aux_sym_from_token2] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_arg_token1] = ACTIONS(230),
    [aux_sym_add_token1] = ACTIONS(230),
    [aux_sym_copy_token1] = ACTIONS(230),
    [aux_sym_stopsignal_token1] = ACTIONS(230),
    [aux_sym_shell_token1] = ACTIONS(230),
    [aux_sym_volume_token1] = ACTIONS(230),
    [aux_sym_workdir_token1] = ACTIONS(230),
    [aux_sym_user_token1] = ACTIONS(230),
    [aux_sym_cmd_token1] = ACTIONS(230),
    [aux_sym_entrypoint_token1] = ACTIONS(230),
    [aux_sym_run_token1] = ACTIONS(230),
    [aux_sym_maintainer_token1] = ACTIONS(230),
    [aux_sym_expose_token1] = ACTIONS(230),
    [aux_sym_from_token1] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(230),
    [aux_sym_from_token2] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_stopsignal_token1] = ACTIONS(355),
    [aux_sym_shell_token1] = ACTIONS(355),
    [aux_sym_volume_token1] = ACTIONS(355),
    [aux_sym_workdir_token1] = ACTIONS(355),
    [aux_sym_user_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_run_token1] = ACTIONS(355),
    [aux_sym_maintainer_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(359),
    [aux_sym_from_token2] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_path_token1] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [aux_sym_arg_token1] = ACTIONS(437),
    [aux_sym_add_token1] = ACTIONS(437),
    [aux_sym_copy_token1] = ACTIONS(437),
    [aux_sym_stopsignal_token1] = ACTIONS(437),
    [aux_sym_shell_token1] = ACTIONS(437),
    [aux_sym_volume_token1] = ACTIONS(437),
    [aux_sym_workdir_token1] = ACTIONS(437),
    [aux_sym_user_token1] = ACTIONS(437),
    [aux_sym_cmd_token1] = ACTIONS(437),
    [aux_sym_entrypoint_token1] = ACTIONS(437),
    [aux_sym_run_token1] = ACTIONS(437),
    [aux_sym_maintainer_token1] = ACTIONS(437),
    [aux_sym_expose_token1] = ACTIONS(437),
    [aux_sym_from_token1] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [aux_sym_from_token2] = ACTIONS(437),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [aux_sym_arg_token1] = ACTIONS(439),
    [aux_sym_add_token1] = ACTIONS(439),
    [aux_sym_copy_token1] = ACTIONS(439),
    [aux_sym_stopsignal_token1] = ACTIONS(439),
    [aux_sym_shell_token1] = ACTIONS(439),
    [aux_sym_volume_token1] = ACTIONS(439),
    [aux_sym_workdir_token1] = ACTIONS(439),
    [aux_sym_user_token1] = ACTIONS(439),
    [aux_sym_cmd_token1] = ACTIONS(439),
    [aux_sym_entrypoint_token1] = ACTIONS(439),
    [aux_sym_run_token1] = ACTIONS(439),
    [aux_sym_maintainer_token1] = ACTIONS(439),
    [aux_sym_expose_token1] = ACTIONS(439),
    [aux_sym_from_token1] = ACTIONS(439),
    [aux_sym_from_token2] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_arg_token1] = ACTIONS(443),
    [aux_sym_add_token1] = ACTIONS(443),
    [aux_sym_copy_token1] = ACTIONS(443),
    [aux_sym_stopsignal_token1] = ACTIONS(443),
    [aux_sym_shell_token1] = ACTIONS(443),
    [aux_sym_volume_token1] = ACTIONS(443),
    [aux_sym_workdir_token1] = ACTIONS(443),
    [aux_sym_user_token1] = ACTIONS(443),
    [aux_sym_cmd_token1] = ACTIONS(443),
    [aux_sym_entrypoint_token1] = ACTIONS(443),
    [aux_sym_run_token1] = ACTIONS(443),
    [aux_sym_maintainer_token1] = ACTIONS(443),
    [aux_sym_expose_token1] = ACTIONS(443),
    [aux_sym_from_token1] = ACTIONS(443),
    [aux_sym_from_token2] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym_arg_token1] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(445),
    [aux_sym_copy_token1] = ACTIONS(445),
    [aux_sym_stopsignal_token1] = ACTIONS(445),
    [aux_sym_shell_token1] = ACTIONS(445),
    [aux_sym_volume_token1] = ACTIONS(445),
    [aux_sym_workdir_token1] = ACTIONS(445),
    [aux_sym_user_token1] = ACTIONS(445),
    [aux_sym_cmd_token1] = ACTIONS(445),
    [aux_sym_entrypoint_token1] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_arg_token1] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(371),
    [aux_sym_copy_token1] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [aux_sym_from_token2] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_stopsignal_token1] = ACTIONS(449),
    [aux_sym_shell_token1] = ACTIONS(449),
    [aux_sym_volume_token1] = ACTIONS(449),
    [aux_sym_workdir_token1] = ACTIONS(449),
    [aux_sym_user_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_run_token1] = ACTIONS(449),
    [aux_sym_maintainer_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_stopsignal_token1] = ACTIONS(355),
    [aux_sym_shell_token1] = ACTIONS(355),
    [aux_sym_volume_token1] = ACTIONS(355),
    [aux_sym_workdir_token1] = ACTIONS(355),
    [aux_sym_user_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_run_token1] = ACTIONS(355),
    [aux_sym_maintainer_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [aux_sym_from_token2] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_arg_token1] = ACTIONS(242),
    [aux_sym_add_token1] = ACTIONS(242),
    [aux_sym_copy_token1] = ACTIONS(242),
    [aux_sym_stopsignal_token1] = ACTIONS(242),
    [aux_sym_shell_token1] = ACTIONS(242),
    [aux_sym_volume_token1] = ACTIONS(242),
    [aux_sym_workdir_token1] = ACTIONS(242),
    [aux_sym_user_token1] = ACTIONS(242),
    [aux_sym_cmd_token1] = ACTIONS(242),
    [aux_sym_entrypoint_token1] = ACTIONS(242),
    [aux_sym_run_token1] = ACTIONS(242),
    [aux_sym_maintainer_token1] = ACTIONS(242),
    [aux_sym_expose_token1] = ACTIONS(242),
    [aux_sym_from_token1] = ACTIONS(242),
    [aux_sym_from_token2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_arg_token1] = ACTIONS(453),
    [aux_sym_add_token1] = ACTIONS(453),
    [aux_sym_copy_token1] = ACTIONS(453),
    [aux_sym_stopsignal_token1] = ACTIONS(453),
    [aux_sym_shell_token1] = ACTIONS(453),
    [aux_sym_volume_token1] = ACTIONS(453),
    [aux_sym_workdir_token1] = ACTIONS(453),
    [aux_sym_user_token1] = ACTIONS(453),
    [aux_sym_cmd_token1] = ACTIONS(453),
    [aux_sym_entrypoint_token1] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_maintainer_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [aux_sym_from_token2] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_stopsignal_token1] = ACTIONS(449),
    [aux_sym_shell_token1] = ACTIONS(449),
    [aux_sym_volume_token1] = ACTIONS(449),
    [aux_sym_workdir_token1] = ACTIONS(449),
    [aux_sym_user_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(457),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_run_token1] = ACTIONS(449),
    [aux_sym_maintainer_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_arg_token1] = ACTIONS(459),
    [aux_sym_add_token1] = ACTIONS(459),
    [aux_sym_copy_token1] = ACTIONS(459),
    [aux_sym_stopsignal_token1] = ACTIONS(459),
    [aux_sym_shell_token1] = ACTIONS(459),
    [aux_sym_volume_token1] = ACTIONS(459),
    [aux_sym_workdir_token1] = ACTIONS(459),
    [aux_sym_user_token1] = ACTIONS(459),
    [aux_sym_cmd_token1] = ACTIONS(459),
    [aux_sym_entrypoint_token1] = ACTIONS(459),
    [aux_sym_run_token1] = ACTIONS(459),
    [aux_sym_maintainer_token1] = ACTIONS(459),
    [aux_sym_expose_token1] = ACTIONS(459),
    [aux_sym_from_token1] = ACTIONS(459),
    [aux_sym_from_token2] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_arg_token1] = ACTIONS(461),
    [aux_sym_add_token1] = ACTIONS(461),
    [aux_sym_copy_token1] = ACTIONS(461),
    [aux_sym_stopsignal_token1] = ACTIONS(461),
    [aux_sym_shell_token1] = ACTIONS(461),
    [aux_sym_volume_token1] = ACTIONS(461),
    [aux_sym_workdir_token1] = ACTIONS(461),
    [aux_sym_user_token1] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [aux_sym_cmd_token1] = ACTIONS(461),
    [aux_sym_entrypoint_token1] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_maintainer_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_arg_token1] = ACTIONS(236),
    [aux_sym_add_token1] = ACTIONS(236),
    [aux_sym_copy_token1] = ACTIONS(236),
    [aux_sym_stopsignal_token1] = ACTIONS(236),
    [aux_sym_shell_token1] = ACTIONS(236),
    [aux_sym_volume_token1] = ACTIONS(236),
    [aux_sym_workdir_token1] = ACTIONS(236),
    [aux_sym_user_token1] = ACTIONS(236),
    [aux_sym_cmd_token1] = ACTIONS(236),
    [aux_sym_entrypoint_token1] = ACTIONS(236),
    [aux_sym_run_token1] = ACTIONS(236),
    [aux_sym_maintainer_token1] = ACTIONS(236),
    [aux_sym_expose_token1] = ACTIONS(236),
    [aux_sym_from_token1] = ACTIONS(236),
    [aux_sym_from_token2] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_arg_token1] = ACTIONS(463),
    [aux_sym_add_token1] = ACTIONS(463),
    [aux_sym_copy_token1] = ACTIONS(463),
    [aux_sym_stopsignal_token1] = ACTIONS(463),
    [aux_sym_shell_token1] = ACTIONS(463),
    [aux_sym_volume_token1] = ACTIONS(463),
    [aux_sym_workdir_token1] = ACTIONS(463),
    [aux_sym_user_token1] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(463),
    [aux_sym_cmd_token1] = ACTIONS(463),
    [aux_sym_entrypoint_token1] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_maintainer_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_arg_token1] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(427),
    [aux_sym_copy_token1] = ACTIONS(427),
    [aux_sym_stopsignal_token1] = ACTIONS(427),
    [aux_sym_shell_token1] = ACTIONS(427),
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [aux_sym_user_token1] = ACTIONS(427),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [aux_sym_from_token2] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_arg_token1] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(417),
    [aux_sym_copy_token1] = ACTIONS(417),
    [aux_sym_stopsignal_token1] = ACTIONS(417),
    [aux_sym_shell_token1] = ACTIONS(417),
    [aux_sym_volume_token1] = ACTIONS(417),
    [aux_sym_workdir_token1] = ACTIONS(417),
    [aux_sym_user_token1] = ACTIONS(417),
    [aux_sym_cmd_token1] = ACTIONS(417),
    [aux_sym_entrypoint_token1] = ACTIONS(417),
    [aux_sym_run_token1] = ACTIONS(417),
    [aux_sym_maintainer_token1] = ACTIONS(417),
    [aux_sym_expose_token1] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(417),
    [aux_sym_from_token2] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym_arg_token1] = ACTIONS(465),
    [aux_sym_add_token1] = ACTIONS(465),
    [aux_sym_copy_token1] = ACTIONS(465),
    [aux_sym_stopsignal_token1] = ACTIONS(465),
    [aux_sym_shell_token1] = ACTIONS(465),
    [aux_sym_volume_token1] = ACTIONS(465),
    [aux_sym_workdir_token1] = ACTIONS(465),
    [aux_sym_user_token1] = ACTIONS(465),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_run_token1] = ACTIONS(465),
    [aux_sym_maintainer_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
    [aux_sym_from_token2] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_arg_token1] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(427),
    [aux_sym_copy_token1] = ACTIONS(427),
    [aux_sym_stopsignal_token1] = ACTIONS(427),
    [aux_sym_shell_token1] = ACTIONS(427),
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [aux_sym_user_token1] = ACTIONS(427),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [aux_sym_arg_token1] = ACTIONS(282),
    [aux_sym_add_token1] = ACTIONS(282),
    [aux_sym_copy_token1] = ACTIONS(282),
    [aux_sym_stopsignal_token1] = ACTIONS(282),
    [aux_sym_shell_token1] = ACTIONS(282),
    [aux_sym_volume_token1] = ACTIONS(282),
    [aux_sym_workdir_token1] = ACTIONS(282),
    [aux_sym_user_token1] = ACTIONS(282),
    [aux_sym_cmd_token1] = ACTIONS(282),
    [aux_sym_entrypoint_token1] = ACTIONS(282),
    [aux_sym_run_token1] = ACTIONS(282),
    [aux_sym_maintainer_token1] = ACTIONS(282),
    [aux_sym_expose_token1] = ACTIONS(282),
    [aux_sym_from_token1] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_stopsignal_token1] = ACTIONS(469),
    [aux_sym_shell_token1] = ACTIONS(469),
    [aux_sym_volume_token1] = ACTIONS(469),
    [aux_sym_workdir_token1] = ACTIONS(469),
    [aux_sym_user_token1] = ACTIONS(469),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_run_token1] = ACTIONS(469),
    [aux_sym_maintainer_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_arg_token1] = ACTIONS(471),
    [aux_sym_add_token1] = ACTIONS(471),
    [aux_sym_copy_token1] = ACTIONS(471),
    [aux_sym_stopsignal_token1] = ACTIONS(471),
    [aux_sym_shell_token1] = ACTIONS(471),
    [aux_sym_volume_token1] = ACTIONS(471),
    [aux_sym_workdir_token1] = ACTIONS(471),
    [aux_sym_user_token1] = ACTIONS(471),
    [aux_sym_cmd_token1] = ACTIONS(471),
    [aux_sym_entrypoint_token1] = ACTIONS(471),
    [aux_sym_run_token1] = ACTIONS(471),
    [aux_sym_maintainer_token1] = ACTIONS(471),
    [aux_sym_expose_token1] = ACTIONS(471),
    [aux_sym_from_token1] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym_arg_token1] = ACTIONS(292),
    [aux_sym_add_token1] = ACTIONS(292),
    [aux_sym_copy_token1] = ACTIONS(292),
    [aux_sym_stopsignal_token1] = ACTIONS(292),
    [aux_sym_shell_token1] = ACTIONS(292),
    [aux_sym_volume_token1] = ACTIONS(292),
    [aux_sym_workdir_token1] = ACTIONS(292),
    [aux_sym_user_token1] = ACTIONS(292),
    [aux_sym_cmd_token1] = ACTIONS(292),
    [aux_sym_entrypoint_token1] = ACTIONS(292),
    [aux_sym_run_token1] = ACTIONS(292),
    [aux_sym_maintainer_token1] = ACTIONS(292),
    [aux_sym_expose_token1] = ACTIONS(292),
    [aux_sym_from_token1] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym_arg_token1] = ACTIONS(473),
    [aux_sym_add_token1] = ACTIONS(473),
    [aux_sym_copy_token1] = ACTIONS(473),
    [aux_sym_stopsignal_token1] = ACTIONS(473),
    [aux_sym_shell_token1] = ACTIONS(473),
    [aux_sym_volume_token1] = ACTIONS(473),
    [aux_sym_workdir_token1] = ACTIONS(473),
    [aux_sym_user_token1] = ACTIONS(473),
    [aux_sym_cmd_token1] = ACTIONS(473),
    [aux_sym_entrypoint_token1] = ACTIONS(473),
    [aux_sym_run_token1] = ACTIONS(473),
    [aux_sym_maintainer_token1] = ACTIONS(473),
    [aux_sym_expose_token1] = ACTIONS(473),
    [aux_sym_from_token1] = ACTIONS(473),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_arg_token1] = ACTIONS(475),
    [aux_sym_add_token1] = ACTIONS(475),
    [aux_sym_copy_token1] = ACTIONS(475),
    [aux_sym_stopsignal_token1] = ACTIONS(475),
    [aux_sym_shell_token1] = ACTIONS(475),
    [aux_sym_volume_token1] = ACTIONS(475),
    [aux_sym_workdir_token1] = ACTIONS(475),
    [aux_sym_user_token1] = ACTIONS(475),
    [aux_sym_cmd_token1] = ACTIONS(475),
    [aux_sym_entrypoint_token1] = ACTIONS(475),
    [aux_sym_run_token1] = ACTIONS(475),
    [aux_sym_maintainer_token1] = ACTIONS(475),
    [aux_sym_expose_token1] = ACTIONS(475),
    [aux_sym_from_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [aux_sym_arg_token1] = ACTIONS(477),
    [aux_sym_add_token1] = ACTIONS(477),
    [aux_sym_copy_token1] = ACTIONS(477),
    [aux_sym_stopsignal_token1] = ACTIONS(477),
    [aux_sym_shell_token1] = ACTIONS(477),
    [aux_sym_volume_token1] = ACTIONS(477),
    [aux_sym_workdir_token1] = ACTIONS(477),
    [aux_sym_user_token1] = ACTIONS(477),
    [aux_sym_cmd_token1] = ACTIONS(477),
    [aux_sym_entrypoint_token1] = ACTIONS(477),
    [aux_sym_run_token1] = ACTIONS(477),
    [aux_sym_maintainer_token1] = ACTIONS(477),
    [aux_sym_expose_token1] = ACTIONS(477),
    [aux_sym_from_token1] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_arg_token1] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(417),
    [aux_sym_copy_token1] = ACTIONS(417),
    [aux_sym_stopsignal_token1] = ACTIONS(417),
    [aux_sym_shell_token1] = ACTIONS(417),
    [aux_sym_volume_token1] = ACTIONS(417),
    [aux_sym_workdir_token1] = ACTIONS(417),
    [aux_sym_user_token1] = ACTIONS(417),
    [aux_sym_cmd_token1] = ACTIONS(417),
    [aux_sym_entrypoint_token1] = ACTIONS(417),
    [aux_sym_run_token1] = ACTIONS(417),
    [aux_sym_maintainer_token1] = ACTIONS(417),
    [aux_sym_expose_token1] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym_arg_token1] = ACTIONS(479),
    [aux_sym_add_token1] = ACTIONS(479),
    [aux_sym_copy_token1] = ACTIONS(479),
    [aux_sym_stopsignal_token1] = ACTIONS(479),
    [aux_sym_shell_token1] = ACTIONS(479),
    [aux_sym_volume_token1] = ACTIONS(479),
    [aux_sym_workdir_token1] = ACTIONS(479),
    [aux_sym_user_token1] = ACTIONS(479),
    [aux_sym_cmd_token1] = ACTIONS(479),
    [aux_sym_entrypoint_token1] = ACTIONS(479),
    [aux_sym_run_token1] = ACTIONS(479),
    [aux_sym_maintainer_token1] = ACTIONS(479),
    [aux_sym_expose_token1] = ACTIONS(479),
    [aux_sym_from_token1] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_arg_token1] = ACTIONS(481),
    [aux_sym_add_token1] = ACTIONS(481),
    [aux_sym_copy_token1] = ACTIONS(481),
    [aux_sym_stopsignal_token1] = ACTIONS(481),
    [aux_sym_shell_token1] = ACTIONS(481),
    [aux_sym_volume_token1] = ACTIONS(481),
    [aux_sym_workdir_token1] = ACTIONS(481),
    [aux_sym_user_token1] = ACTIONS(481),
    [aux_sym_cmd_token1] = ACTIONS(481),
    [aux_sym_entrypoint_token1] = ACTIONS(481),
    [aux_sym_run_token1] = ACTIONS(481),
    [aux_sym_maintainer_token1] = ACTIONS(481),
    [aux_sym_expose_token1] = ACTIONS(481),
    [aux_sym_from_token1] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_arg_token1] = ACTIONS(483),
    [aux_sym_add_token1] = ACTIONS(483),
    [aux_sym_copy_token1] = ACTIONS(483),
    [aux_sym_stopsignal_token1] = ACTIONS(483),
    [aux_sym_shell_token1] = ACTIONS(483),
    [aux_sym_volume_token1] = ACTIONS(483),
    [aux_sym_workdir_token1] = ACTIONS(483),
    [aux_sym_user_token1] = ACTIONS(483),
    [aux_sym_cmd_token1] = ACTIONS(483),
    [aux_sym_entrypoint_token1] = ACTIONS(483),
    [aux_sym_run_token1] = ACTIONS(483),
    [aux_sym_maintainer_token1] = ACTIONS(483),
    [aux_sym_expose_token1] = ACTIONS(483),
    [aux_sym_from_token1] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [aux_sym_arg_token1] = ACTIONS(485),
    [aux_sym_add_token1] = ACTIONS(485),
    [aux_sym_copy_token1] = ACTIONS(485),
    [aux_sym_stopsignal_token1] = ACTIONS(485),
    [aux_sym_shell_token1] = ACTIONS(485),
    [aux_sym_volume_token1] = ACTIONS(485),
    [aux_sym_workdir_token1] = ACTIONS(485),
    [aux_sym_user_token1] = ACTIONS(485),
    [aux_sym_cmd_token1] = ACTIONS(485),
    [aux_sym_entrypoint_token1] = ACTIONS(485),
    [aux_sym_run_token1] = ACTIONS(485),
    [aux_sym_maintainer_token1] = ACTIONS(485),
    [aux_sym_expose_token1] = ACTIONS(485),
    [aux_sym_from_token1] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_arg_token1] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(487),
    [aux_sym_copy_token1] = ACTIONS(487),
    [aux_sym_stopsignal_token1] = ACTIONS(487),
    [aux_sym_shell_token1] = ACTIONS(487),
    [aux_sym_volume_token1] = ACTIONS(487),
    [aux_sym_workdir_token1] = ACTIONS(487),
    [aux_sym_user_token1] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_run_token1] = ACTIONS(487),
    [aux_sym_maintainer_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_arg_token1] = ACTIONS(489),
    [aux_sym_add_token1] = ACTIONS(489),
    [aux_sym_copy_token1] = ACTIONS(489),
    [aux_sym_stopsignal_token1] = ACTIONS(489),
    [aux_sym_shell_token1] = ACTIONS(489),
    [aux_sym_volume_token1] = ACTIONS(489),
    [aux_sym_workdir_token1] = ACTIONS(489),
    [aux_sym_user_token1] = ACTIONS(489),
    [aux_sym_cmd_token1] = ACTIONS(489),
    [aux_sym_entrypoint_token1] = ACTIONS(489),
    [aux_sym_run_token1] = ACTIONS(489),
    [aux_sym_maintainer_token1] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_arg_token1] = ACTIONS(345),
    [aux_sym_add_token1] = ACTIONS(345),
    [aux_sym_copy_token1] = ACTIONS(345),
    [aux_sym_stopsignal_token1] = ACTIONS(345),
    [aux_sym_shell_token1] = ACTIONS(345),
    [aux_sym_volume_token1] = ACTIONS(345),
    [aux_sym_workdir_token1] = ACTIONS(345),
    [aux_sym_user_token1] = ACTIONS(345),
    [aux_sym_cmd_token1] = ACTIONS(345),
    [aux_sym_entrypoint_token1] = ACTIONS(345),
    [aux_sym_run_token1] = ACTIONS(345),
    [aux_sym_maintainer_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [aux_sym_from_token1] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_arg_token1] = ACTIONS(491),
    [aux_sym_add_token1] = ACTIONS(491),
    [aux_sym_copy_token1] = ACTIONS(491),
    [aux_sym_stopsignal_token1] = ACTIONS(491),
    [aux_sym_shell_token1] = ACTIONS(491),
    [aux_sym_volume_token1] = ACTIONS(491),
    [aux_sym_workdir_token1] = ACTIONS(491),
    [aux_sym_user_token1] = ACTIONS(491),
    [aux_sym_cmd_token1] = ACTIONS(491),
    [aux_sym_entrypoint_token1] = ACTIONS(491),
    [aux_sym_run_token1] = ACTIONS(491),
    [aux_sym_maintainer_token1] = ACTIONS(491),
    [aux_sym_expose_token1] = ACTIONS(491),
    [aux_sym_from_token1] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_arg_token1] = ACTIONS(493),
    [aux_sym_add_token1] = ACTIONS(493),
    [aux_sym_copy_token1] = ACTIONS(493),
    [aux_sym_stopsignal_token1] = ACTIONS(493),
    [aux_sym_shell_token1] = ACTIONS(493),
    [aux_sym_volume_token1] = ACTIONS(493),
    [aux_sym_workdir_token1] = ACTIONS(493),
    [aux_sym_user_token1] = ACTIONS(493),
    [aux_sym_cmd_token1] = ACTIONS(493),
    [aux_sym_entrypoint_token1] = ACTIONS(493),
    [aux_sym_run_token1] = ACTIONS(493),
    [aux_sym_maintainer_token1] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_arg_token1] = ACTIONS(495),
    [aux_sym_add_token1] = ACTIONS(495),
    [aux_sym_copy_token1] = ACTIONS(495),
    [aux_sym_stopsignal_token1] = ACTIONS(495),
    [aux_sym_shell_token1] = ACTIONS(495),
    [aux_sym_volume_token1] = ACTIONS(495),
    [aux_sym_workdir_token1] = ACTIONS(495),
    [aux_sym_user_token1] = ACTIONS(495),
    [aux_sym_cmd_token1] = ACTIONS(495),
    [aux_sym_entrypoint_token1] = ACTIONS(495),
    [aux_sym_run_token1] = ACTIONS(495),
    [aux_sym_maintainer_token1] = ACTIONS(495),
    [aux_sym_expose_token1] = ACTIONS(495),
    [aux_sym_from_token1] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_arg_token1] = ACTIONS(453),
    [aux_sym_add_token1] = ACTIONS(453),
    [aux_sym_copy_token1] = ACTIONS(453),
    [aux_sym_stopsignal_token1] = ACTIONS(453),
    [aux_sym_shell_token1] = ACTIONS(453),
    [aux_sym_volume_token1] = ACTIONS(453),
    [aux_sym_workdir_token1] = ACTIONS(453),
    [aux_sym_user_token1] = ACTIONS(453),
    [aux_sym_cmd_token1] = ACTIONS(453),
    [aux_sym_entrypoint_token1] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_maintainer_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [aux_sym_arg_token1] = ACTIONS(497),
    [aux_sym_add_token1] = ACTIONS(497),
    [aux_sym_copy_token1] = ACTIONS(497),
    [aux_sym_stopsignal_token1] = ACTIONS(497),
    [aux_sym_shell_token1] = ACTIONS(497),
    [aux_sym_volume_token1] = ACTIONS(497),
    [aux_sym_workdir_token1] = ACTIONS(497),
    [aux_sym_user_token1] = ACTIONS(497),
    [aux_sym_cmd_token1] = ACTIONS(497),
    [aux_sym_entrypoint_token1] = ACTIONS(497),
    [aux_sym_run_token1] = ACTIONS(497),
    [aux_sym_maintainer_token1] = ACTIONS(497),
    [aux_sym_expose_token1] = ACTIONS(497),
    [aux_sym_from_token1] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_arg_token1] = ACTIONS(499),
    [aux_sym_add_token1] = ACTIONS(499),
    [aux_sym_copy_token1] = ACTIONS(499),
    [aux_sym_stopsignal_token1] = ACTIONS(499),
    [aux_sym_shell_token1] = ACTIONS(499),
    [aux_sym_volume_token1] = ACTIONS(499),
    [aux_sym_workdir_token1] = ACTIONS(499),
    [aux_sym_user_token1] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_arg_token1] = ACTIONS(501),
    [aux_sym_add_token1] = ACTIONS(501),
    [aux_sym_copy_token1] = ACTIONS(501),
    [aux_sym_stopsignal_token1] = ACTIONS(501),
    [aux_sym_shell_token1] = ACTIONS(501),
    [aux_sym_volume_token1] = ACTIONS(501),
    [aux_sym_workdir_token1] = ACTIONS(501),
    [aux_sym_user_token1] = ACTIONS(501),
    [aux_sym_cmd_token1] = ACTIONS(501),
    [aux_sym_entrypoint_token1] = ACTIONS(501),
    [aux_sym_run_token1] = ACTIONS(501),
    [aux_sym_maintainer_token1] = ACTIONS(501),
    [aux_sym_expose_token1] = ACTIONS(501),
    [aux_sym_from_token1] = ACTIONS(501),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_arg_token1] = ACTIONS(503),
    [aux_sym_add_token1] = ACTIONS(503),
    [aux_sym_copy_token1] = ACTIONS(503),
    [aux_sym_stopsignal_token1] = ACTIONS(503),
    [aux_sym_shell_token1] = ACTIONS(503),
    [aux_sym_volume_token1] = ACTIONS(503),
    [aux_sym_workdir_token1] = ACTIONS(503),
    [aux_sym_user_token1] = ACTIONS(503),
    [aux_sym_cmd_token1] = ACTIONS(503),
    [aux_sym_entrypoint_token1] = ACTIONS(503),
    [aux_sym_run_token1] = ACTIONS(503),
    [aux_sym_maintainer_token1] = ACTIONS(503),
    [aux_sym_expose_token1] = ACTIONS(503),
    [aux_sym_from_token1] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [aux_sym_arg_token1] = ACTIONS(505),
    [aux_sym_add_token1] = ACTIONS(505),
    [aux_sym_copy_token1] = ACTIONS(505),
    [aux_sym_stopsignal_token1] = ACTIONS(505),
    [aux_sym_shell_token1] = ACTIONS(505),
    [aux_sym_volume_token1] = ACTIONS(505),
    [aux_sym_workdir_token1] = ACTIONS(505),
    [aux_sym_user_token1] = ACTIONS(505),
    [aux_sym_cmd_token1] = ACTIONS(505),
    [aux_sym_entrypoint_token1] = ACTIONS(505),
    [aux_sym_run_token1] = ACTIONS(505),
    [aux_sym_maintainer_token1] = ACTIONS(505),
    [aux_sym_expose_token1] = ACTIONS(505),
    [aux_sym_from_token1] = ACTIONS(505),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [aux_sym_arg_token1] = ACTIONS(507),
    [aux_sym_add_token1] = ACTIONS(507),
    [aux_sym_copy_token1] = ACTIONS(507),
    [aux_sym_stopsignal_token1] = ACTIONS(507),
    [aux_sym_shell_token1] = ACTIONS(507),
    [aux_sym_volume_token1] = ACTIONS(507),
    [aux_sym_workdir_token1] = ACTIONS(507),
    [aux_sym_user_token1] = ACTIONS(507),
    [aux_sym_cmd_token1] = ACTIONS(507),
    [aux_sym_entrypoint_token1] = ACTIONS(507),
    [aux_sym_run_token1] = ACTIONS(507),
    [aux_sym_maintainer_token1] = ACTIONS(507),
    [aux_sym_expose_token1] = ACTIONS(507),
    [aux_sym_from_token1] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_arg_token1] = ACTIONS(509),
    [aux_sym_add_token1] = ACTIONS(509),
    [aux_sym_copy_token1] = ACTIONS(509),
    [aux_sym_stopsignal_token1] = ACTIONS(509),
    [aux_sym_shell_token1] = ACTIONS(509),
    [aux_sym_volume_token1] = ACTIONS(509),
    [aux_sym_workdir_token1] = ACTIONS(509),
    [aux_sym_user_token1] = ACTIONS(509),
    [aux_sym_cmd_token1] = ACTIONS(509),
    [aux_sym_entrypoint_token1] = ACTIONS(509),
    [aux_sym_run_token1] = ACTIONS(509),
    [aux_sym_maintainer_token1] = ACTIONS(509),
    [aux_sym_expose_token1] = ACTIONS(509),
    [aux_sym_from_token1] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [aux_sym_arg_token1] = ACTIONS(439),
    [aux_sym_add_token1] = ACTIONS(439),
    [aux_sym_copy_token1] = ACTIONS(439),
    [aux_sym_stopsignal_token1] = ACTIONS(439),
    [aux_sym_shell_token1] = ACTIONS(439),
    [aux_sym_volume_token1] = ACTIONS(439),
    [aux_sym_workdir_token1] = ACTIONS(439),
    [aux_sym_user_token1] = ACTIONS(439),
    [aux_sym_cmd_token1] = ACTIONS(439),
    [aux_sym_entrypoint_token1] = ACTIONS(439),
    [aux_sym_run_token1] = ACTIONS(439),
    [aux_sym_maintainer_token1] = ACTIONS(439),
    [aux_sym_expose_token1] = ACTIONS(439),
    [aux_sym_from_token1] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_stopsignal_token1] = ACTIONS(355),
    [aux_sym_shell_token1] = ACTIONS(355),
    [aux_sym_volume_token1] = ACTIONS(355),
    [aux_sym_workdir_token1] = ACTIONS(355),
    [aux_sym_user_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_run_token1] = ACTIONS(355),
    [aux_sym_maintainer_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym_arg_token1] = ACTIONS(511),
    [aux_sym_add_token1] = ACTIONS(511),
    [aux_sym_copy_token1] = ACTIONS(511),
    [aux_sym_stopsignal_token1] = ACTIONS(511),
    [aux_sym_shell_token1] = ACTIONS(511),
    [aux_sym_volume_token1] = ACTIONS(511),
    [aux_sym_workdir_token1] = ACTIONS(511),
    [aux_sym_user_token1] = ACTIONS(511),
    [aux_sym_cmd_token1] = ACTIONS(511),
    [aux_sym_entrypoint_token1] = ACTIONS(511),
    [aux_sym_run_token1] = ACTIONS(511),
    [aux_sym_maintainer_token1] = ACTIONS(511),
    [aux_sym_expose_token1] = ACTIONS(511),
    [aux_sym_from_token1] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_arg_token1] = ACTIONS(92),
    [aux_sym_add_token1] = ACTIONS(92),
    [aux_sym_copy_token1] = ACTIONS(92),
    [aux_sym_stopsignal_token1] = ACTIONS(92),
    [aux_sym_shell_token1] = ACTIONS(92),
    [aux_sym_volume_token1] = ACTIONS(92),
    [aux_sym_workdir_token1] = ACTIONS(92),
    [aux_sym_user_token1] = ACTIONS(92),
    [aux_sym_cmd_token1] = ACTIONS(92),
    [aux_sym_entrypoint_token1] = ACTIONS(92),
    [aux_sym_run_token1] = ACTIONS(92),
    [aux_sym_maintainer_token1] = ACTIONS(92),
    [aux_sym_expose_token1] = ACTIONS(92),
    [aux_sym_from_token1] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_arg_token1] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(371),
    [aux_sym_copy_token1] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_arg_token1] = ACTIONS(513),
    [aux_sym_add_token1] = ACTIONS(513),
    [aux_sym_copy_token1] = ACTIONS(513),
    [aux_sym_stopsignal_token1] = ACTIONS(513),
    [aux_sym_shell_token1] = ACTIONS(513),
    [aux_sym_volume_token1] = ACTIONS(513),
    [aux_sym_workdir_token1] = ACTIONS(513),
    [aux_sym_user_token1] = ACTIONS(513),
    [aux_sym_cmd_token1] = ACTIONS(513),
    [aux_sym_entrypoint_token1] = ACTIONS(513),
    [aux_sym_run_token1] = ACTIONS(513),
    [aux_sym_maintainer_token1] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym_arg_token1] = ACTIONS(465),
    [aux_sym_add_token1] = ACTIONS(465),
    [aux_sym_copy_token1] = ACTIONS(465),
    [aux_sym_stopsignal_token1] = ACTIONS(465),
    [aux_sym_shell_token1] = ACTIONS(465),
    [aux_sym_volume_token1] = ACTIONS(465),
    [aux_sym_workdir_token1] = ACTIONS(465),
    [aux_sym_user_token1] = ACTIONS(465),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_run_token1] = ACTIONS(465),
    [aux_sym_maintainer_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [aux_sym_arg_token1] = ACTIONS(515),
    [aux_sym_add_token1] = ACTIONS(515),
    [aux_sym_copy_token1] = ACTIONS(515),
    [aux_sym_stopsignal_token1] = ACTIONS(515),
    [aux_sym_shell_token1] = ACTIONS(515),
    [aux_sym_volume_token1] = ACTIONS(515),
    [aux_sym_workdir_token1] = ACTIONS(515),
    [aux_sym_user_token1] = ACTIONS(515),
    [aux_sym_cmd_token1] = ACTIONS(515),
    [aux_sym_entrypoint_token1] = ACTIONS(515),
    [aux_sym_run_token1] = ACTIONS(515),
    [aux_sym_maintainer_token1] = ACTIONS(515),
    [aux_sym_expose_token1] = ACTIONS(515),
    [aux_sym_from_token1] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [aux_sym_arg_token1] = ACTIONS(313),
    [aux_sym_add_token1] = ACTIONS(313),
    [aux_sym_copy_token1] = ACTIONS(313),
    [aux_sym_stopsignal_token1] = ACTIONS(313),
    [aux_sym_shell_token1] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(313),
    [aux_sym_cmd_token1] = ACTIONS(313),
    [aux_sym_entrypoint_token1] = ACTIONS(313),
    [aux_sym_run_token1] = ACTIONS(313),
    [aux_sym_maintainer_token1] = ACTIONS(313),
    [aux_sym_expose_token1] = ACTIONS(313),
    [aux_sym_from_token1] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_arg_token1] = ACTIONS(517),
    [aux_sym_add_token1] = ACTIONS(517),
    [aux_sym_copy_token1] = ACTIONS(517),
    [aux_sym_stopsignal_token1] = ACTIONS(517),
    [aux_sym_shell_token1] = ACTIONS(517),
    [aux_sym_volume_token1] = ACTIONS(517),
    [aux_sym_workdir_token1] = ACTIONS(517),
    [aux_sym_user_token1] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_run_token1] = ACTIONS(517),
    [aux_sym_maintainer_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_arg_token1] = ACTIONS(276),
    [aux_sym_add_token1] = ACTIONS(276),
    [aux_sym_copy_token1] = ACTIONS(276),
    [aux_sym_stopsignal_token1] = ACTIONS(276),
    [aux_sym_shell_token1] = ACTIONS(276),
    [aux_sym_volume_token1] = ACTIONS(276),
    [aux_sym_workdir_token1] = ACTIONS(276),
    [aux_sym_user_token1] = ACTIONS(276),
    [aux_sym_cmd_token1] = ACTIONS(276),
    [aux_sym_entrypoint_token1] = ACTIONS(276),
    [aux_sym_run_token1] = ACTIONS(276),
    [aux_sym_maintainer_token1] = ACTIONS(276),
    [aux_sym_expose_token1] = ACTIONS(276),
    [aux_sym_from_token1] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [176] = {
    [sym_repository] = STATE(188),
    [sym__repository_start] = STATE(184),
    [sym_image] = STATE(97),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(521),
    [aux_sym_platform_token1] = ACTIONS(523),
    [aux_sym__repository_start_token1] = ACTIONS(519),
    [aux_sym__repository_start_token4] = ACTIONS(525),
    [aux_sym__repository_start_token6] = ACTIONS(525),
    [aux_sym__repository_start_token8] = ACTIONS(527),
    [aux_sym__repository_start_token10] = ACTIONS(527),
    [aux_sym__repository_start_token12] = ACTIONS(529),
    [aux_sym__repository_start_token14] = ACTIONS(529),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [177] = {
    [sym_repository] = STATE(193),
    [sym__repository_start] = STATE(184),
    [sym_image] = STATE(98),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [aux_sym_platform_token1] = ACTIONS(523),
    [aux_sym__repository_start_token1] = ACTIONS(519),
    [aux_sym__repository_start_token4] = ACTIONS(525),
    [aux_sym__repository_start_token6] = ACTIONS(525),
    [aux_sym__repository_start_token8] = ACTIONS(527),
    [aux_sym__repository_start_token10] = ACTIONS(527),
    [aux_sym__repository_start_token12] = ACTIONS(529),
    [aux_sym__repository_start_token14] = ACTIONS(529),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [178] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(168),
    [sym__port] = STATE(89),
    [sym_port] = STATE(89),
    [sym_port_range] = STATE(89),
    [sym__port_part] = STATE(72),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(531),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [179] = {
    [sym_digest] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_sha256_COLON] = ACTIONS(535),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [180] = {
    [sym_digest] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_sha256_COLON] = ACTIONS(545),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [181] = {
    [sym_digest] = STATE(136),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_sha256_COLON] = ACTIONS(547),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [182] = {
    [sym__repository_continued] = STATE(182),
    [aux_sym_repository_repeat1] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [aux_sym_platform_token1] = ACTIONS(552),
    [aux_sym__repository_start_token1] = ACTIONS(549),
    [aux_sym__repository_start_token4] = ACTIONS(555),
    [aux_sym__repository_start_token6] = ACTIONS(555),
    [aux_sym__repository_start_token8] = ACTIONS(558),
    [aux_sym__repository_start_token10] = ACTIONS(558),
    [aux_sym__repository_start_token12] = ACTIONS(561),
    [aux_sym__repository_start_token14] = ACTIONS(561),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [183] = {
    [sym__repository_continued] = STATE(182),
    [aux_sym_repository_repeat1] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(564),
    [aux_sym_platform_token1] = ACTIONS(567),
    [aux_sym__repository_start_token1] = ACTIONS(564),
    [aux_sym__repository_start_token4] = ACTIONS(570),
    [aux_sym__repository_start_token6] = ACTIONS(570),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(576),
    [aux_sym__repository_start_token14] = ACTIONS(576),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [184] = {
    [sym__repository_continued] = STATE(183),
    [aux_sym_repository_repeat1] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [aux_sym_platform_token1] = ACTIONS(582),
    [aux_sym__repository_start_token1] = ACTIONS(579),
    [aux_sym__repository_start_token4] = ACTIONS(585),
    [aux_sym__repository_start_token6] = ACTIONS(585),
    [aux_sym__repository_start_token8] = ACTIONS(588),
    [aux_sym__repository_start_token10] = ACTIONS(588),
    [aux_sym__repository_start_token12] = ACTIONS(591),
    [aux_sym__repository_start_token14] = ACTIONS(591),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [185] = {
    [sym_digest] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_sha256_COLON] = ACTIONS(594),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [186] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_sha256_COLON] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [187] = {
    [sym_digest] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_sha256_COLON] = ACTIONS(598),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [188] = {
    [sym_image] = STATE(104),
    [anon_sym_DOLLAR] = ACTIONS(600),
    [aux_sym_platform_token1] = ACTIONS(602),
    [aux_sym__repository_start_token1] = ACTIONS(600),
    [aux_sym__repository_start_token4] = ACTIONS(604),
    [aux_sym__repository_start_token6] = ACTIONS(604),
    [aux_sym__repository_start_token8] = ACTIONS(606),
    [aux_sym__repository_start_token10] = ACTIONS(606),
    [aux_sym__repository_start_token12] = ACTIONS(608),
    [aux_sym__repository_start_token14] = ACTIONS(608),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [189] = {
    [sym_as_name] = STATE(171),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [190] = {
    [sym_tag] = STATE(113),
    [anon_sym_DOLLAR] = ACTIONS(620),
    [aux_sym_platform_token1] = ACTIONS(622),
    [aux_sym__repository_start_token1] = ACTIONS(620),
    [aux_sym__repository_start_token4] = ACTIONS(624),
    [aux_sym__repository_start_token6] = ACTIONS(624),
    [aux_sym__repository_start_token8] = ACTIONS(626),
    [aux_sym__repository_start_token10] = ACTIONS(626),
    [aux_sym__repository_start_token12] = ACTIONS(628),
    [aux_sym__repository_start_token14] = ACTIONS(628),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [191] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [192] = {
    [sym_as_name] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [193] = {
    [sym_image] = STATE(94),
    [anon_sym_DOLLAR] = ACTIONS(600),
    [aux_sym_platform_token1] = ACTIONS(602),
    [aux_sym__repository_start_token1] = ACTIONS(600),
    [aux_sym__repository_start_token4] = ACTIONS(604),
    [aux_sym__repository_start_token6] = ACTIONS(604),
    [aux_sym__repository_start_token8] = ACTIONS(606),
    [aux_sym__repository_start_token10] = ACTIONS(606),
    [aux_sym__repository_start_token12] = ACTIONS(608),
    [aux_sym__repository_start_token14] = ACTIONS(608),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [194] = {
    [sym_as_name] = STATE(164),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [195] = {
    [sym_tag] = STATE(116),
    [anon_sym_DOLLAR] = ACTIONS(620),
    [aux_sym_platform_token1] = ACTIONS(622),
    [aux_sym__repository_start_token1] = ACTIONS(620),
    [aux_sym__repository_start_token4] = ACTIONS(624),
    [aux_sym__repository_start_token6] = ACTIONS(624),
    [aux_sym__repository_start_token8] = ACTIONS(626),
    [aux_sym__repository_start_token10] = ACTIONS(626),
    [aux_sym__repository_start_token12] = ACTIONS(628),
    [aux_sym__repository_start_token14] = ACTIONS(628),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [196] = {
    [sym_as_name] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [197] = {
    [sym_digest] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [198] = {
    [sym_digest] = STATE(136),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [199] = {
    [sym_tag] = STATE(118),
    [anon_sym_DOLLAR] = ACTIONS(620),
    [aux_sym_platform_token1] = ACTIONS(622),
    [aux_sym__repository_start_token1] = ACTIONS(620),
    [aux_sym__repository_start_token4] = ACTIONS(624),
    [aux_sym__repository_start_token6] = ACTIONS(624),
    [aux_sym__repository_start_token8] = ACTIONS(626),
    [aux_sym__repository_start_token10] = ACTIONS(626),
    [aux_sym__repository_start_token12] = ACTIONS(628),
    [aux_sym__repository_start_token14] = ACTIONS(628),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [200] = {
    [sym_as_name] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [201] = {
    [sym_as_name] = STATE(170),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [202] = {
    [sym_as_name] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [203] = {
    [sym_digest] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [204] = {
    [sym_digest] = STATE(128),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [205] = {
    [sym_tag] = STATE(114),
    [anon_sym_DOLLAR] = ACTIONS(620),
    [aux_sym_platform_token1] = ACTIONS(622),
    [aux_sym__repository_start_token1] = ACTIONS(620),
    [aux_sym__repository_start_token4] = ACTIONS(624),
    [aux_sym__repository_start_token6] = ACTIONS(624),
    [aux_sym__repository_start_token8] = ACTIONS(626),
    [aux_sym__repository_start_token10] = ACTIONS(626),
    [aux_sym__repository_start_token12] = ACTIONS(628),
    [aux_sym__repository_start_token14] = ACTIONS(628),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [206] = {
    [sym_as_name] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [207] = {
    [sym_as_name] = STATE(145),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(612),
    [aux_sym__repository_start_token1] = ACTIONS(610),
    [aux_sym__repository_start_token4] = ACTIONS(614),
    [aux_sym__repository_start_token6] = ACTIONS(614),
    [aux_sym__repository_start_token8] = ACTIONS(616),
    [aux_sym__repository_start_token10] = ACTIONS(616),
    [aux_sym__repository_start_token12] = ACTIONS(618),
    [aux_sym__repository_start_token14] = ACTIONS(618),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [208] = {
    [sym_digest] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(537),
    [aux_sym__repository_start_token1] = ACTIONS(533),
    [aux_sym__repository_start_token4] = ACTIONS(539),
    [aux_sym__repository_start_token6] = ACTIONS(539),
    [aux_sym__repository_start_token8] = ACTIONS(541),
    [aux_sym__repository_start_token10] = ACTIONS(541),
    [aux_sym__repository_start_token12] = ACTIONS(543),
    [aux_sym__repository_start_token14] = ACTIONS(543),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [209] = {
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_platform_token1] = ACTIONS(176),
    [aux_sym__repository_start_token1] = ACTIONS(174),
    [aux_sym__repository_start_token4] = ACTIONS(174),
    [aux_sym__repository_start_token6] = ACTIONS(174),
    [aux_sym__repository_start_token8] = ACTIONS(174),
    [aux_sym__repository_start_token10] = ACTIONS(174),
    [aux_sym__repository_start_token12] = ACTIONS(174),
    [aux_sym__repository_start_token14] = ACTIONS(174),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [210] = {
    [anon_sym_DOLLAR] = ACTIONS(630),
    [aux_sym_platform_token1] = ACTIONS(632),
    [aux_sym__repository_start_token1] = ACTIONS(630),
    [aux_sym__repository_start_token4] = ACTIONS(630),
    [aux_sym__repository_start_token6] = ACTIONS(630),
    [aux_sym__repository_start_token8] = ACTIONS(630),
    [aux_sym__repository_start_token10] = ACTIONS(630),
    [aux_sym__repository_start_token12] = ACTIONS(630),
    [aux_sym__repository_start_token14] = ACTIONS(630),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [211] = {
    [anon_sym_DOLLAR] = ACTIONS(170),
    [aux_sym_platform_token1] = ACTIONS(172),
    [aux_sym__repository_start_token1] = ACTIONS(170),
    [aux_sym__repository_start_token4] = ACTIONS(170),
    [aux_sym__repository_start_token6] = ACTIONS(170),
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token10] = ACTIONS(170),
    [aux_sym__repository_start_token12] = ACTIONS(170),
    [aux_sym__repository_start_token14] = ACTIONS(170),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [212] = {
    [anon_sym_DOLLAR] = ACTIONS(634),
    [aux_sym_platform_token1] = ACTIONS(636),
    [aux_sym__repository_start_token1] = ACTIONS(634),
    [aux_sym__repository_start_token4] = ACTIONS(634),
    [aux_sym__repository_start_token6] = ACTIONS(634),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(634),
    [aux_sym__repository_start_token14] = ACTIONS(634),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [213] = {
    [sym__port_spec] = STATE(334),
    [sym_mapped_port] = STATE(334),
    [sym__port] = STATE(89),
    [sym_port] = STATE(293),
    [sym_port_range] = STATE(293),
    [sym__port_part] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_DOLLAR] = ACTIONS(640),
    [aux_sym_platform_token1] = ACTIONS(642),
    [aux_sym__repository_start_token1] = ACTIONS(640),
    [aux_sym__repository_start_token4] = ACTIONS(640),
    [aux_sym__repository_start_token6] = ACTIONS(640),
    [aux_sym__repository_start_token8] = ACTIONS(640),
    [aux_sym__repository_start_token10] = ACTIONS(640),
    [aux_sym__repository_start_token12] = ACTIONS(640),
    [aux_sym__repository_start_token14] = ACTIONS(640),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [215] = {
    [anon_sym_DOLLAR] = ACTIONS(178),
    [aux_sym_platform_token1] = ACTIONS(180),
    [aux_sym__repository_start_token1] = ACTIONS(178),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token6] = ACTIONS(178),
    [aux_sym__repository_start_token8] = ACTIONS(178),
    [aux_sym__repository_start_token10] = ACTIONS(178),
    [aux_sym__repository_start_token12] = ACTIONS(178),
    [aux_sym__repository_start_token14] = ACTIONS(178),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [216] = {
    [anon_sym_DOLLAR] = ACTIONS(644),
    [aux_sym_platform_token1] = ACTIONS(646),
    [aux_sym__repository_start_token1] = ACTIONS(644),
    [aux_sym__repository_start_token4] = ACTIONS(644),
    [aux_sym__repository_start_token6] = ACTIONS(644),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(644),
    [aux_sym__repository_start_token14] = ACTIONS(644),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [217] = {
    [anon_sym_DOLLAR] = ACTIONS(648),
    [aux_sym_platform_token1] = ACTIONS(650),
    [aux_sym__repository_start_token1] = ACTIONS(648),
    [aux_sym__repository_start_token4] = ACTIONS(648),
    [aux_sym__repository_start_token6] = ACTIONS(648),
    [aux_sym__repository_start_token8] = ACTIONS(648),
    [aux_sym__repository_start_token10] = ACTIONS(648),
    [aux_sym__repository_start_token12] = ACTIONS(648),
    [aux_sym__repository_start_token14] = ACTIONS(648),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [218] = {
    [anon_sym_DOLLAR] = ACTIONS(652),
    [aux_sym_platform_token1] = ACTIONS(654),
    [aux_sym__repository_start_token1] = ACTIONS(652),
    [aux_sym__repository_start_token4] = ACTIONS(652),
    [aux_sym__repository_start_token6] = ACTIONS(652),
    [aux_sym__repository_start_token8] = ACTIONS(652),
    [aux_sym__repository_start_token10] = ACTIONS(652),
    [aux_sym__repository_start_token12] = ACTIONS(652),
    [aux_sym__repository_start_token14] = ACTIONS(652),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [219] = {
    [anon_sym_DOLLAR] = ACTIONS(656),
    [aux_sym_platform_token1] = ACTIONS(658),
    [aux_sym__repository_start_token1] = ACTIONS(656),
    [aux_sym__repository_start_token4] = ACTIONS(656),
    [aux_sym__repository_start_token6] = ACTIONS(656),
    [aux_sym__repository_start_token8] = ACTIONS(656),
    [aux_sym__repository_start_token10] = ACTIONS(656),
    [aux_sym__repository_start_token12] = ACTIONS(656),
    [aux_sym__repository_start_token14] = ACTIONS(656),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [220] = {
    [anon_sym_DOLLAR] = ACTIONS(660),
    [aux_sym_platform_token1] = ACTIONS(662),
    [aux_sym__repository_start_token1] = ACTIONS(660),
    [aux_sym__repository_start_token4] = ACTIONS(660),
    [aux_sym__repository_start_token6] = ACTIONS(660),
    [aux_sym__repository_start_token8] = ACTIONS(660),
    [aux_sym__repository_start_token10] = ACTIONS(660),
    [aux_sym__repository_start_token12] = ACTIONS(660),
    [aux_sym__repository_start_token14] = ACTIONS(660),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [221] = {
    [anon_sym_DOLLAR] = ACTIONS(664),
    [aux_sym_platform_token1] = ACTIONS(666),
    [aux_sym__repository_start_token1] = ACTIONS(664),
    [aux_sym__repository_start_token4] = ACTIONS(664),
    [aux_sym__repository_start_token6] = ACTIONS(664),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(664),
    [aux_sym__repository_start_token14] = ACTIONS(664),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [222] = {
    [anon_sym_DOLLAR] = ACTIONS(668),
    [aux_sym_platform_token1] = ACTIONS(670),
    [aux_sym__repository_start_token1] = ACTIONS(668),
    [aux_sym__repository_start_token4] = ACTIONS(668),
    [aux_sym__repository_start_token6] = ACTIONS(668),
    [aux_sym__repository_start_token8] = ACTIONS(668),
    [aux_sym__repository_start_token10] = ACTIONS(668),
    [aux_sym__repository_start_token12] = ACTIONS(668),
    [aux_sym__repository_start_token14] = ACTIONS(668),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [223] = {
    [anon_sym_DOLLAR] = ACTIONS(672),
    [aux_sym_platform_token1] = ACTIONS(674),
    [aux_sym__repository_start_token1] = ACTIONS(672),
    [aux_sym__repository_start_token4] = ACTIONS(672),
    [aux_sym__repository_start_token6] = ACTIONS(672),
    [aux_sym__repository_start_token8] = ACTIONS(672),
    [aux_sym__repository_start_token10] = ACTIONS(672),
    [aux_sym__repository_start_token12] = ACTIONS(672),
    [aux_sym__repository_start_token14] = ACTIONS(672),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [224] = {
    [anon_sym_DOLLAR] = ACTIONS(676),
    [aux_sym_platform_token1] = ACTIONS(678),
    [aux_sym__repository_start_token1] = ACTIONS(676),
    [aux_sym__repository_start_token4] = ACTIONS(676),
    [aux_sym__repository_start_token6] = ACTIONS(676),
    [aux_sym__repository_start_token8] = ACTIONS(676),
    [aux_sym__repository_start_token10] = ACTIONS(676),
    [aux_sym__repository_start_token12] = ACTIONS(676),
    [aux_sym__repository_start_token14] = ACTIONS(676),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [225] = {
    [sym__port] = STATE(158),
    [sym_port] = STATE(158),
    [sym_port_range] = STATE(158),
    [sym__port_part] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [aux_sym__json_string] = STATE(261),
    [aux_sym_json_array_repeat1] = STATE(283),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RBRACK] = ACTIONS(684),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
    [aux_sym__json_string_token1] = ACTIONS(686),
    [sym__json_escape_sequence] = ACTIONS(688),
  },
  [227] = {
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_path] = STATE(87),
    [sym_json_array] = STATE(165),
    [aux_sym_add_repeat1] = STATE(87),
    [aux_sym_path_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__json_prefix] = ACTIONS(690),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [229] = {
    [sym_path] = STATE(75),
    [sym_json_array] = STATE(138),
    [aux_sym_add_repeat1] = STATE(75),
    [aux_sym_path_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__json_prefix] = ACTIONS(690),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [230] = {
    [sym_path] = STATE(91),
    [sym_json_array] = STATE(152),
    [aux_sym_add_repeat1] = STATE(91),
    [aux_sym_path_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__json_prefix] = ACTIONS(690),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [231] = {
    [sym_template_expr_less_than_equals] = STATE(306),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [232] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(232),
    [aux_sym__repository_start_token13] = ACTIONS(696),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(698),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(701),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(701),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [233] = {
    [sym_template_expr_less_than_equals] = STATE(330),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [234] = {
    [sym_template_expr_less_than_equals] = STATE(343),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [235] = {
    [aux_sym__repository_start_repeat1] = STATE(252),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(704),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(706),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [236] = {
    [sym_template_expr_less_than_equals] = STATE(326),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [237] = {
    [sym_user_name] = STATE(125),
    [sym_user_id] = STATE(129),
    [anon_sym_DOLLAR] = ACTIONS(708),
    [aux_sym_user_name_token1] = ACTIONS(710),
    [aux_sym_user_id_token1] = ACTIONS(712),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [anon_sym_SLASH] = ACTIONS(714),
    [aux_sym__repository_start_token3] = ACTIONS(716),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [239] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [anon_sym_SLASH] = ACTIONS(714),
    [aux_sym__repository_start_token3] = ACTIONS(716),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [240] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [anon_sym_SLASH] = ACTIONS(714),
    [aux_sym__repository_start_token3] = ACTIONS(716),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [241] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(232),
    [aux_sym__repository_start_token13] = ACTIONS(718),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [242] = {
    [sym_json_array] = STATE(140),
    [sym__anything_or_json_array] = STATE(140),
    [sym__almost_json_prefix] = ACTIONS(724),
    [sym__json_prefix] = ACTIONS(690),
    [sym__not_json_prefix] = ACTIONS(726),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [243] = {
    [sym_variable_default_value] = STATE(368),
    [sym_variable_this_or_null] = STATE(368),
    [anon_sym_RBRACE] = ACTIONS(728),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_json_array] = STATE(146),
    [sym__anything_or_json_array] = STATE(146),
    [sym__almost_json_prefix] = ACTIONS(724),
    [sym__json_prefix] = ACTIONS(690),
    [sym__not_json_prefix] = ACTIONS(726),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [245] = {
    [sym_template_expr_less_than_equals] = STATE(310),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [246] = {
    [aux_sym__repository_start_repeat4] = STATE(238),
    [anon_sym_SLASH] = ACTIONS(734),
    [aux_sym__repository_start_token3] = ACTIONS(736),
    [aux_sym__repository_start_token12] = ACTIONS(108),
    [aux_sym__repository_start_token15] = ACTIONS(108),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [247] = {
    [sym_port] = STATE(314),
    [sym_port_range] = STATE(314),
    [sym__port_part] = STATE(72),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_template_expr_less_than_equals] = STATE(339),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [249] = {
    [sym_variable_default_value] = STATE(318),
    [sym_variable_this_or_null] = STATE(318),
    [anon_sym_RBRACE] = ACTIONS(738),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [aux_sym__repository_start_repeat2] = STATE(240),
    [anon_sym_SLASH] = ACTIONS(734),
    [aux_sym__repository_start_token3] = ACTIONS(736),
    [aux_sym__repository_start_token4] = ACTIONS(112),
    [aux_sym__repository_start_token7] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [251] = {
    [sym_variable_default_value] = STATE(366),
    [sym_variable_this_or_null] = STATE(366),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(734),
    [aux_sym__repository_start_token2] = ACTIONS(118),
    [aux_sym__repository_start_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [253] = {
    [sym_json_array] = STATE(147),
    [sym__anything_or_json_array] = STATE(147),
    [sym__almost_json_prefix] = ACTIONS(724),
    [sym__json_prefix] = ACTIONS(690),
    [sym__not_json_prefix] = ACTIONS(726),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [254] = {
    [sym_variable_default_value] = STATE(337),
    [sym_variable_this_or_null] = STATE(337),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [aux_sym__repository_start_repeat3] = STATE(239),
    [anon_sym_SLASH] = ACTIONS(734),
    [aux_sym__repository_start_token3] = ACTIONS(736),
    [aux_sym__repository_start_token8] = ACTIONS(153),
    [aux_sym__repository_start_token11] = ACTIONS(153),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [256] = {
    [sym_template_expr_less_than_equals] = STATE(362),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [257] = {
    [sym_template_expr_less_than_equals] = STATE(336),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(241),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(692),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(694),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(694),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [258] = {
    [sym_variable_default_value] = STATE(359),
    [sym_variable_this_or_null] = STATE(359),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [aux_sym__json_string] = STATE(262),
    [anon_sym_DQUOTE] = ACTIONS(746),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
    [aux_sym__json_string_token1] = ACTIONS(748),
    [sym__json_escape_sequence] = ACTIONS(748),
  },
  [260] = {
    [aux_sym__json_string] = STATE(260),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
    [aux_sym__json_string_token1] = ACTIONS(752),
    [sym__json_escape_sequence] = ACTIONS(752),
  },
  [261] = {
    [aux_sym__json_string] = STATE(260),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
    [aux_sym__json_string_token1] = ACTIONS(757),
    [sym__json_escape_sequence] = ACTIONS(757),
  },
  [262] = {
    [aux_sym__json_string] = STATE(260),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
    [aux_sym__json_string_token1] = ACTIONS(757),
    [sym__json_escape_sequence] = ACTIONS(757),
  },
  [263] = {
    [aux_sym_json_array_repeat1] = STATE(263),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [sym_docker_variable] = STATE(84),
    [anon_sym_LBRACE] = ACTIONS(766),
    [sym__docker_variable] = ACTIONS(768),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [265] = {
    [sym_docker_variable] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(770),
    [sym__docker_variable] = ACTIONS(772),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [266] = {
    [sym_signal_name] = STATE(155),
    [aux_sym_signal_name_token1] = ACTIONS(774),
    [sym_signal_num] = ACTIONS(776),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [aux_sym_arg_default_token1] = ACTIONS(778),
    [anon_sym_DOLLAR] = ACTIONS(780),
    [aux_sym_workdir_token2] = ACTIONS(780),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [268] = {
    [aux_sym__anything] = STATE(106),
    [aux_sym__anything_token1] = ACTIONS(782),
    [aux_sym__anything_token2] = ACTIONS(782),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [269] = {
    [sym_docker_variable] = STATE(70),
    [anon_sym_LBRACE] = ACTIONS(784),
    [sym__docker_variable] = ACTIONS(786),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [270] = {
    [aux_sym_json_array_repeat1] = STATE(263),
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(790),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [sym_docker_variable] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(784),
    [sym__docker_variable] = ACTIONS(786),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [272] = {
    [sym_docker_variable] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(766),
    [sym__docker_variable] = ACTIONS(768),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [273] = {
    [sym_platform] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(792),
    [aux_sym_platform_token1] = ACTIONS(794),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [274] = {
    [sym_docker_variable] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(796),
    [sym__docker_variable] = ACTIONS(798),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [275] = {
    [sym_docker_variable] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(784),
    [sym__docker_variable] = ACTIONS(786),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [276] = {
    [aux_sym__anything] = STATE(92),
    [aux_sym__anything_token1] = ACTIONS(413),
    [aux_sym__anything_token2] = ACTIONS(413),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [277] = {
    [anon_sym_DOLLAR] = ACTIONS(800),
    [aux_sym_port_protocol_token1] = ACTIONS(802),
    [aux_sym_port_protocol_token2] = ACTIONS(802),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [sym__port_part] = STATE(76),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_user_id_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [279] = {
    [sym_docker_variable] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(804),
    [sym__docker_variable] = ACTIONS(806),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [280] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(770),
    [sym__docker_variable] = ACTIONS(772),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [281] = {
    [sym_docker_variable] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(766),
    [sym__docker_variable] = ACTIONS(768),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [282] = {
    [aux_sym_json_array_repeat1] = STATE(285),
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(808),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [283] = {
    [aux_sym_json_array_repeat1] = STATE(263),
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(808),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [sym_docker_variable] = STATE(39),
    [anon_sym_LBRACE] = ACTIONS(766),
    [sym__docker_variable] = ACTIONS(768),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [285] = {
    [aux_sym_json_array_repeat1] = STATE(263),
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(810),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [286] = {
    [sym_docker_variable] = STATE(24),
    [anon_sym_LBRACE] = ACTIONS(766),
    [sym__docker_variable] = ACTIONS(768),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [287] = {
    [sym_docker_variable] = STATE(59),
    [anon_sym_LBRACE] = ACTIONS(766),
    [sym__docker_variable] = ACTIONS(768),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [288] = {
    [sym_docker_variable] = STATE(105),
    [anon_sym_LBRACE] = ACTIONS(796),
    [sym__docker_variable] = ACTIONS(798),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [289] = {
    [aux_sym_json_array_repeat1] = STATE(270),
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(810),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [290] = {
    [sym_json_array] = STATE(153),
    [sym__json_prefix] = ACTIONS(690),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [sym__json_value] = STATE(296),
    [anon_sym_DQUOTE] = ACTIONS(812),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(814),
    [anon_sym_RBRACK] = ACTIONS(814),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(819),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [sym_arg_default] = STATE(163),
    [aux_sym_arg_default_token1] = ACTIONS(821),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(764),
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [sym_user_group_id] = STATE(157),
    [aux_sym_user_id_token1] = ACTIONS(825),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [sym_user_group] = STATE(157),
    [aux_sym_user_name_token1] = ACTIONS(827),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [sym__docker_variable] = ACTIONS(829),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [300] = {
    [sym__space_no_newline] = ACTIONS(831),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [301] = {
    [sym_template_expr_curly_braces] = ACTIONS(833),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [302] = {
    [sym_template_expr_percent_signs] = ACTIONS(835),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [303] = {
    [sym_template_expr_curly_braces] = ACTIONS(837),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [304] = {
    [sym_template_expr_percent_signs] = ACTIONS(839),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [305] = {
    [sym_template_expr_curly_braces] = ACTIONS(841),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [306] = {
    [aux_sym__repository_start_token13] = ACTIONS(843),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym__repository_start_token9] = ACTIONS(845),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [anon_sym_SLASH] = ACTIONS(847),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [aux_sym__repository_start_token5] = ACTIONS(849),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [310] = {
    [aux_sym__repository_start_token13] = ACTIONS(851),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [311] = {
    [aux_sym__repository_start_token9] = ACTIONS(853),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [aux_sym__repository_start_token5] = ACTIONS(855),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [sym__space_no_newline] = ACTIONS(857),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [314] = {
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [anon_sym_RBRACE] = ACTIONS(861),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [sym_template_expr_percent_signs] = ACTIONS(863),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [317] = {
    [anon_sym_DQUOTE] = ACTIONS(865),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(867),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [sym_template_expr_percent_signs] = ACTIONS(869),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [320] = {
    [sym_template_expr_curly_braces] = ACTIONS(871),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [321] = {
    [anon_sym_SLASH] = ACTIONS(873),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [anon_sym_SLASH] = ACTIONS(734),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [sym_template_expr_percent_signs] = ACTIONS(875),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [324] = {
    [sym_template_expr_curly_braces] = ACTIONS(877),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [325] = {
    [aux_sym__repository_start_token5] = ACTIONS(879),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [326] = {
    [aux_sym__repository_start_token13] = ACTIONS(881),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [aux_sym__repository_start_token9] = ACTIONS(883),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [aux_sym__repository_start_token5] = ACTIONS(885),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [aux_sym__repository_start_token9] = ACTIONS(887),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [aux_sym__repository_start_token13] = ACTIONS(889),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [331] = {
    [aux_sym__repository_start_token5] = ACTIONS(891),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [sym_template_expr_curly_braces] = ACTIONS(893),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [333] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(895),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [334] = {
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym__repository_start_token9] = ACTIONS(899),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [336] = {
    [aux_sym__repository_start_token13] = ACTIONS(901),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(903),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_template_expr_percent_signs] = ACTIONS(905),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [339] = {
    [aux_sym__repository_start_token13] = ACTIONS(907),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [sym_template_expr_percent_signs] = ACTIONS(909),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [341] = {
    [sym_template_expr_curly_braces] = ACTIONS(911),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [342] = {
    [aux_sym__repository_start_token9] = ACTIONS(913),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [aux_sym__repository_start_token13] = ACTIONS(915),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(917),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [345] = {
    [anon_sym_SLASH] = ACTIONS(714),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [aux_sym__repository_start_token5] = ACTIONS(919),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [347] = {
    [aux_sym_path_token2] = ACTIONS(921),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [348] = {
    [aux_sym__repository_start_token9] = ACTIONS(923),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [sym_arg_name] = ACTIONS(925),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(927),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [351] = {
    [sym__space_no_newline] = ACTIONS(929),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [352] = {
    [sym__space_no_newline] = ACTIONS(931),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [353] = {
    [sym__space_no_newline] = ACTIONS(933),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [354] = {
    [sym__space_no_newline] = ACTIONS(935),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [355] = {
    [sym__space_no_newline] = ACTIONS(937),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [356] = {
    [sym__space_no_newline] = ACTIONS(939),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [357] = {
    [sym__space_no_newline] = ACTIONS(941),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(943),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(945),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [aux_sym__repository_start_token5] = ACTIONS(947),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [361] = {
    [aux_sym__repository_start_token9] = ACTIONS(949),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [362] = {
    [aux_sym__repository_start_token13] = ACTIONS(951),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [363] = {
    [aux_sym_signal_name_token2] = ACTIONS(953),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [364] = {
    [aux_sym__repository_start_token5] = ACTIONS(955),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [sym__space_no_newline] = ACTIONS(957),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [366] = {
    [anon_sym_RBRACE] = ACTIONS(959),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [sym__space_no_newline] = ACTIONS(961),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [368] = {
    [anon_sym_RBRACE] = ACTIONS(963),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [369] = {
    [sym__docker_variable] = ACTIONS(965),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [370] = {
    [sym_template_expr_curly_braces] = ACTIONS(967),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [371] = {
    [sym_template_expr_percent_signs] = ACTIONS(969),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [372] = {
    [sym__space_no_newline] = ACTIONS(971),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [373] = {
    [sym__docker_variable] = ACTIONS(973),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [374] = {
    [sym__docker_variable] = ACTIONS(975),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
  [375] = {
    [sym__docker_variable] = ACTIONS(977),
    [sym_comment] = ACTIONS(110),
    [sym_line_continuation] = ACTIONS(110),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(313),
  [9] = {.count = 1, .reusable = true}, SHIFT(372),
  [11] = {.count = 1, .reusable = true}, SHIFT(367),
  [13] = {.count = 1, .reusable = true}, SHIFT(365),
  [15] = {.count = 1, .reusable = true}, SHIFT(300),
  [17] = {.count = 1, .reusable = true}, SHIFT(357),
  [19] = {.count = 1, .reusable = true}, SHIFT(356),
  [21] = {.count = 1, .reusable = true}, SHIFT(355),
  [23] = {.count = 1, .reusable = true}, SHIFT(354),
  [25] = {.count = 1, .reusable = true}, SHIFT(353),
  [27] = {.count = 1, .reusable = true}, SHIFT(352),
  [29] = {.count = 1, .reusable = true}, SHIFT(351),
  [31] = {.count = 1, .reusable = true}, SHIFT(178),
  [33] = {.count = 1, .reusable = true}, SHIFT(176),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(313),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(372),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(367),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(365),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(300),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(357),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(356),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(355),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(354),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(353),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(352),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(351),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(178),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(176),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(213),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(271),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(34),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [94] = {.count = 1, .reusable = true}, SHIFT(213),
  [96] = {.count = 1, .reusable = true}, SHIFT(271),
  [98] = {.count = 1, .reusable = true}, SHIFT(34),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [104] = {.count = 1, .reusable = true}, SHIFT(210),
  [106] = {.count = 1, .reusable = false}, SHIFT(64),
  [108] = {.count = 1, .reusable = true}, SHIFT(248),
  [110] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [112] = {.count = 1, .reusable = true}, SHIFT(332),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [118] = {.count = 1, .reusable = true}, SHIFT(286),
  [120] = {.count = 1, .reusable = true}, SHIFT(212),
  [122] = {.count = 1, .reusable = false}, SHIFT(62),
  [124] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(248),
  [131] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(286),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [142] = {.count = 1, .reusable = true}, SHIFT(219),
  [144] = {.count = 1, .reusable = false}, SHIFT(71),
  [146] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [148] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(332),
  [153] = {.count = 1, .reusable = true}, SHIFT(316),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(316),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [186] = {.count = 1, .reusable = false}, SHIFT(96),
  [188] = {.count = 1, .reusable = true}, SHIFT(370),
  [190] = {.count = 1, .reusable = true}, SHIFT(265),
  [192] = {.count = 1, .reusable = false}, SHIFT(110),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(370),
  [197] = {.count = 1, .reusable = false}, SHIFT(93),
  [199] = {.count = 1, .reusable = true}, SHIFT(371),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(256),
  [204] = {.count = 1, .reusable = true}, SHIFT(256),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(371),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(277),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(265),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [222] = {.count = 1, .reusable = false}, SHIFT(117),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [228] = {.count = 1, .reusable = false}, SHIFT(112),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [234] = {.count = 1, .reusable = false}, SHIFT(111),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [240] = {.count = 1, .reusable = false}, SHIFT(122),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [246] = {.count = 1, .reusable = false}, SHIFT(132),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [252] = {.count = 1, .reusable = false}, SHIFT(127),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [258] = {.count = 1, .reusable = true}, SHIFT(224),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(278),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [274] = {.count = 1, .reusable = true}, SHIFT(217),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [280] = {.count = 1, .reusable = false}, SHIFT(141),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [286] = {.count = 1, .reusable = false}, SHIFT(119),
  [288] = {.count = 1, .reusable = true}, SHIFT(347),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [296] = {.count = 1, .reusable = false}, SHIFT(172),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [302] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [304] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(288),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [311] = {.count = 1, .reusable = false}, SHIFT(175),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [317] = {.count = 1, .reusable = false}, SHIFT(288),
  [319] = {.count = 1, .reusable = false}, SHIFT(151),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(119),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(347),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [337] = {.count = 1, .reusable = true}, SHIFT(227),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [343] = {.count = 1, .reusable = false}, SHIFT(173),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 2),
  [353] = {.count = 1, .reusable = true}, SHIFT(108),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [357] = {.count = 1, .reusable = true}, SHIFT(195),
  [359] = {.count = 1, .reusable = true}, SHIFT(186),
  [361] = {.count = 1, .reusable = true}, SHIFT(192),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [365] = {.count = 1, .reusable = true}, SHIFT(190),
  [367] = {.count = 1, .reusable = true}, SHIFT(179),
  [369] = {.count = 1, .reusable = true}, SHIFT(206),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [373] = {.count = 1, .reusable = true}, SHIFT(205),
  [375] = {.count = 1, .reusable = true}, SHIFT(180),
  [377] = {.count = 1, .reusable = true}, SHIFT(207),
  [379] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(99),
  [386] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [390] = {.count = 1, .reusable = true}, SHIFT(199),
  [392] = {.count = 1, .reusable = true}, SHIFT(185),
  [394] = {.count = 1, .reusable = true}, SHIFT(200),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(99),
  [402] = {.count = 1, .reusable = false}, SHIFT(144),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(108),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [413] = {.count = 1, .reusable = true}, SHIFT(92),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [419] = {.count = 1, .reusable = true}, SHIFT(181),
  [421] = {.count = 1, .reusable = true}, SHIFT(189),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [429] = {.count = 1, .reusable = true}, SHIFT(187),
  [431] = {.count = 1, .reusable = true}, SHIFT(194),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [441] = {.count = 1, .reusable = true}, SHIFT(201),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [447] = {.count = 1, .reusable = true}, SHIFT(294),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [451] = {.count = 1, .reusable = true}, SHIFT(298),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [455] = {.count = 1, .reusable = true}, SHIFT(196),
  [457] = {.count = 1, .reusable = true}, SHIFT(297),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [467] = {.count = 1, .reusable = true}, SHIFT(202),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [505] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [519] = {.count = 1, .reusable = true}, SHIFT(272),
  [521] = {.count = 1, .reusable = true}, SHIFT(273),
  [523] = {.count = 1, .reusable = false}, SHIFT(73),
  [525] = {.count = 1, .reusable = true}, SHIFT(341),
  [527] = {.count = 1, .reusable = true}, SHIFT(340),
  [529] = {.count = 1, .reusable = true}, SHIFT(236),
  [531] = {.count = 1, .reusable = true}, SHIFT(225),
  [533] = {.count = 1, .reusable = true}, SHIFT(287),
  [535] = {.count = 1, .reusable = true}, SHIFT(203),
  [537] = {.count = 1, .reusable = false}, SHIFT(130),
  [539] = {.count = 1, .reusable = true}, SHIFT(303),
  [541] = {.count = 1, .reusable = true}, SHIFT(302),
  [543] = {.count = 1, .reusable = true}, SHIFT(257),
  [545] = {.count = 1, .reusable = true}, SHIFT(191),
  [547] = {.count = 1, .reusable = true}, SHIFT(197),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(281),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(321),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(320),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(319),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(231),
  [564] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(281),
  [567] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(321),
  [570] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(320),
  [573] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(319),
  [576] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(231),
  [579] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(281),
  [582] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(321),
  [585] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(320),
  [588] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(319),
  [591] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(231),
  [594] = {.count = 1, .reusable = true}, SHIFT(208),
  [596] = {.count = 1, .reusable = true}, SHIFT(198),
  [598] = {.count = 1, .reusable = true}, SHIFT(204),
  [600] = {.count = 1, .reusable = true}, SHIFT(280),
  [602] = {.count = 1, .reusable = false}, SHIFT(100),
  [604] = {.count = 1, .reusable = true}, SHIFT(324),
  [606] = {.count = 1, .reusable = true}, SHIFT(323),
  [608] = {.count = 1, .reusable = true}, SHIFT(245),
  [610] = {.count = 1, .reusable = true}, SHIFT(264),
  [612] = {.count = 1, .reusable = false}, SHIFT(174),
  [614] = {.count = 1, .reusable = true}, SHIFT(301),
  [616] = {.count = 1, .reusable = true}, SHIFT(338),
  [618] = {.count = 1, .reusable = true}, SHIFT(234),
  [620] = {.count = 1, .reusable = true}, SHIFT(284),
  [622] = {.count = 1, .reusable = false}, SHIFT(120),
  [624] = {.count = 1, .reusable = true}, SHIFT(305),
  [626] = {.count = 1, .reusable = true}, SHIFT(304),
  [628] = {.count = 1, .reusable = true}, SHIFT(233),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [638] = {.count = 1, .reusable = true}, SHIFT(247),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [642] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [680] = {.count = 1, .reusable = false}, SHIFT(282),
  [682] = {.count = 1, .reusable = false}, SHIFT(291),
  [684] = {.count = 1, .reusable = false}, SHIFT(139),
  [686] = {.count = 1, .reusable = false}, SHIFT(261),
  [688] = {.count = 1, .reusable = true}, SHIFT(261),
  [690] = {.count = 1, .reusable = true}, SHIFT(226),
  [692] = {.count = 1, .reusable = true}, SHIFT(241),
  [694] = {.count = 1, .reusable = false}, SHIFT(241),
  [696] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [698] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(232),
  [701] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(232),
  [704] = {.count = 1, .reusable = true}, SHIFT(223),
  [706] = {.count = 1, .reusable = false}, SHIFT(322),
  [708] = {.count = 1, .reusable = true}, SHIFT(275),
  [710] = {.count = 1, .reusable = true}, SHIFT(131),
  [712] = {.count = 1, .reusable = true}, SHIFT(133),
  [714] = {.count = 1, .reusable = true}, SHIFT(221),
  [716] = {.count = 1, .reusable = false}, SHIFT(308),
  [718] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [720] = {.count = 1, .reusable = true}, SHIFT(232),
  [722] = {.count = 1, .reusable = false}, SHIFT(232),
  [724] = {.count = 1, .reusable = true}, SHIFT(276),
  [726] = {.count = 1, .reusable = true}, SHIFT(109),
  [728] = {.count = 1, .reusable = true}, SHIFT(42),
  [730] = {.count = 1, .reusable = true}, SHIFT(333),
  [732] = {.count = 1, .reusable = true}, SHIFT(344),
  [734] = {.count = 1, .reusable = true}, SHIFT(218),
  [736] = {.count = 1, .reusable = false}, SHIFT(345),
  [738] = {.count = 1, .reusable = true}, SHIFT(49),
  [740] = {.count = 1, .reusable = true}, SHIFT(215),
  [742] = {.count = 1, .reusable = true}, SHIFT(101),
  [744] = {.count = 1, .reusable = true}, SHIFT(22),
  [746] = {.count = 1, .reusable = false}, SHIFT(292),
  [748] = {.count = 1, .reusable = true}, SHIFT(262),
  [750] = {.count = 1, .reusable = false}, REDUCE(aux_sym__json_string, 2),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(260),
  [755] = {.count = 1, .reusable = false}, SHIFT(289),
  [757] = {.count = 1, .reusable = true}, SHIFT(260),
  [759] = {.count = 1, .reusable = false}, SHIFT(295),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(291),
  [764] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [766] = {.count = 1, .reusable = true}, SHIFT(369),
  [768] = {.count = 1, .reusable = true}, SHIFT(21),
  [770] = {.count = 1, .reusable = true}, SHIFT(375),
  [772] = {.count = 1, .reusable = true}, SHIFT(45),
  [774] = {.count = 1, .reusable = true}, SHIFT(363),
  [776] = {.count = 1, .reusable = true}, SHIFT(155),
  [778] = {.count = 1, .reusable = false}, SHIFT(149),
  [780] = {.count = 1, .reusable = false}, SHIFT(274),
  [782] = {.count = 1, .reusable = true}, SHIFT(106),
  [784] = {.count = 1, .reusable = true}, SHIFT(299),
  [786] = {.count = 1, .reusable = true}, SHIFT(44),
  [788] = {.count = 1, .reusable = true}, SHIFT(291),
  [790] = {.count = 1, .reusable = true}, SHIFT(160),
  [792] = {.count = 1, .reusable = true}, SHIFT(279),
  [794] = {.count = 1, .reusable = true}, SHIFT(222),
  [796] = {.count = 1, .reusable = true}, SHIFT(373),
  [798] = {.count = 1, .reusable = true}, SHIFT(95),
  [800] = {.count = 1, .reusable = true}, SHIFT(269),
  [802] = {.count = 1, .reusable = true}, SHIFT(65),
  [804] = {.count = 1, .reusable = true}, SHIFT(374),
  [806] = {.count = 1, .reusable = true}, SHIFT(209),
  [808] = {.count = 1, .reusable = true}, SHIFT(162),
  [810] = {.count = 1, .reusable = true}, SHIFT(154),
  [812] = {.count = 1, .reusable = true}, SHIFT(259),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [816] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(80),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [821] = {.count = 1, .reusable = true}, SHIFT(167),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [825] = {.count = 1, .reusable = true}, SHIFT(150),
  [827] = {.count = 1, .reusable = true}, SHIFT(159),
  [829] = {.count = 1, .reusable = true}, SHIFT(249),
  [831] = {.count = 1, .reusable = true}, SHIFT(290),
  [833] = {.count = 1, .reusable = true}, SHIFT(364),
  [835] = {.count = 1, .reusable = true}, SHIFT(335),
  [837] = {.count = 1, .reusable = true}, SHIFT(331),
  [839] = {.count = 1, .reusable = true}, SHIFT(329),
  [841] = {.count = 1, .reusable = true}, SHIFT(325),
  [843] = {.count = 1, .reusable = true}, SHIFT(246),
  [845] = {.count = 1, .reusable = true}, SHIFT(255),
  [847] = {.count = 1, .reusable = true}, SHIFT(216),
  [849] = {.count = 1, .reusable = true}, SHIFT(250),
  [851] = {.count = 1, .reusable = true}, SHIFT(33),
  [853] = {.count = 1, .reusable = true}, SHIFT(37),
  [855] = {.count = 1, .reusable = true}, SHIFT(35),
  [857] = {.count = 1, .reusable = true}, SHIFT(349),
  [859] = {.count = 1, .reusable = true}, SHIFT(80),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [863] = {.count = 1, .reusable = true}, SHIFT(348),
  [865] = {.count = 1, .reusable = true}, SHIFT(115),
  [867] = {.count = 1, .reusable = true}, SHIFT(46),
  [869] = {.count = 1, .reusable = true}, SHIFT(307),
  [871] = {.count = 1, .reusable = true}, SHIFT(309),
  [873] = {.count = 1, .reusable = true}, SHIFT(220),
  [875] = {.count = 1, .reusable = true}, SHIFT(311),
  [877] = {.count = 1, .reusable = true}, SHIFT(312),
  [879] = {.count = 1, .reusable = true}, SHIFT(48),
  [881] = {.count = 1, .reusable = true}, SHIFT(15),
  [883] = {.count = 1, .reusable = true}, SHIFT(14),
  [885] = {.count = 1, .reusable = true}, SHIFT(13),
  [887] = {.count = 1, .reusable = true}, SHIFT(53),
  [889] = {.count = 1, .reusable = true}, SHIFT(54),
  [891] = {.count = 1, .reusable = true}, SHIFT(60),
  [893] = {.count = 1, .reusable = true}, SHIFT(346),
  [895] = {.count = 1, .reusable = true}, SHIFT(358),
  [897] = {.count = 1, .reusable = true}, SHIFT(103),
  [899] = {.count = 1, .reusable = true}, SHIFT(61),
  [901] = {.count = 1, .reusable = true}, SHIFT(63),
  [903] = {.count = 1, .reusable = true}, SHIFT(102),
  [905] = {.count = 1, .reusable = true}, SHIFT(342),
  [907] = {.count = 1, .reusable = true}, SHIFT(18),
  [909] = {.count = 1, .reusable = true}, SHIFT(327),
  [911] = {.count = 1, .reusable = true}, SHIFT(328),
  [913] = {.count = 1, .reusable = true}, SHIFT(82),
  [915] = {.count = 1, .reusable = true}, SHIFT(79),
  [917] = {.count = 1, .reusable = true}, SHIFT(315),
  [919] = {.count = 1, .reusable = true}, SHIFT(19),
  [921] = {.count = 1, .reusable = true}, SHIFT(317),
  [923] = {.count = 1, .reusable = true}, SHIFT(23),
  [925] = {.count = 1, .reusable = true}, SHIFT(123),
  [927] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [929] = {.count = 1, .reusable = true}, SHIFT(268),
  [931] = {.count = 1, .reusable = true}, SHIFT(253),
  [933] = {.count = 1, .reusable = true}, SHIFT(244),
  [935] = {.count = 1, .reusable = true}, SHIFT(242),
  [937] = {.count = 1, .reusable = true}, SHIFT(237),
  [939] = {.count = 1, .reusable = true}, SHIFT(267),
  [941] = {.count = 1, .reusable = true}, SHIFT(230),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [945] = {.count = 1, .reusable = true}, SHIFT(20),
  [947] = {.count = 1, .reusable = true}, SHIFT(50),
  [949] = {.count = 1, .reusable = true}, SHIFT(51),
  [951] = {.count = 1, .reusable = true}, SHIFT(52),
  [953] = {.count = 1, .reusable = true}, SHIFT(142),
  [955] = {.count = 1, .reusable = true}, SHIFT(83),
  [957] = {.count = 1, .reusable = true}, SHIFT(266),
  [959] = {.count = 1, .reusable = true}, SHIFT(211),
  [961] = {.count = 1, .reusable = true}, SHIFT(229),
  [963] = {.count = 1, .reusable = true}, SHIFT(41),
  [965] = {.count = 1, .reusable = true}, SHIFT(258),
  [967] = {.count = 1, .reusable = true}, SHIFT(360),
  [969] = {.count = 1, .reusable = true}, SHIFT(361),
  [971] = {.count = 1, .reusable = true}, SHIFT(228),
  [973] = {.count = 1, .reusable = true}, SHIFT(254),
  [975] = {.count = 1, .reusable = true}, SHIFT(251),
  [977] = {.count = 1, .reusable = true}, SHIFT(243),
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
