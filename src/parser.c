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
#define STATE_COUNT 386
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  aux_sym_onbuild_token1 = 1,
  aux_sym_env_token1 = 2,
  aux_sym_label_token1 = 3,
  aux_sym_healthcheck_token1 = 4,
  aux_sym_arg_token1 = 5,
  anon_sym_EQ = 6,
  sym_arg_name = 7,
  aux_sym_arg_default_token1 = 8,
  aux_sym_add_token1 = 9,
  aux_sym_copy_token1 = 10,
  aux_sym_stopsignal_token1 = 11,
  aux_sym_signal_name_token1 = 12,
  aux_sym_signal_name_token2 = 13,
  sym_signal_num = 14,
  aux_sym_shell_token1 = 15,
  aux_sym_volume_token1 = 16,
  aux_sym_path_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_path_token2 = 19,
  aux_sym_workdir_token1 = 20,
  anon_sym_DOLLAR = 21,
  aux_sym_workdir_token2 = 22,
  aux_sym_workdir_token3 = 23,
  aux_sym_workdir_token4 = 24,
  aux_sym_user_token1 = 25,
  anon_sym_COLON = 26,
  aux_sym_user_name_token1 = 27,
  aux_sym_user_id_token1 = 28,
  aux_sym_cmd_token1 = 29,
  aux_sym_entrypoint_token1 = 30,
  aux_sym_run_token1 = 31,
  aux_sym_maintainer_token1 = 32,
  aux_sym_expose_token1 = 33,
  anon_sym_DASH = 34,
  anon_sym_SLASH = 35,
  aux_sym_port_protocol_token1 = 36,
  aux_sym_port_protocol_token2 = 37,
  aux_sym_from_token1 = 38,
  anon_sym_DASH_DASHplatform_EQ = 39,
  anon_sym_AT = 40,
  anon_sym_sha256_COLON = 41,
  aux_sym_from_token2 = 42,
  aux_sym_platform_token1 = 43,
  aux_sym__repository_start_token1 = 44,
  aux_sym__repository_start_token2 = 45,
  aux_sym__repository_start_token3 = 46,
  aux_sym__repository_start_token4 = 47,
  aux_sym__repository_start_token5 = 48,
  aux_sym__repository_start_token6 = 49,
  aux_sym__repository_start_token7 = 50,
  aux_sym__repository_start_token8 = 51,
  aux_sym__repository_start_token9 = 52,
  aux_sym__repository_start_token10 = 53,
  aux_sym__repository_start_token11 = 54,
  aux_sym__repository_start_token12 = 55,
  aux_sym__repository_start_token13 = 56,
  aux_sym__repository_start_token14 = 57,
  aux_sym__repository_start_token15 = 58,
  aux_sym__repository_start_token16 = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  sym__docker_variable = 62,
  anon_sym_COLON_DASH = 63,
  aux_sym_variable_default_value_token1 = 64,
  anon_sym_COLON_PLUS = 65,
  aux_sym__anything_token1 = 66,
  sym__json_prefix = 67,
  anon_sym_COMMA = 68,
  anon_sym_RBRACK = 69,
  sym__space_no_newline = 70,
  sym_template_expr_curly_braces = 71,
  sym_template_expr_percent_signs = 72,
  aux_sym_template_expr_less_than_equals_token1 = 73,
  aux_sym_template_expr_less_than_equals_token2 = 74,
  aux_sym_template_expr_less_than_equals_token3 = 75,
  sym_comment = 76,
  sym_line_continuation = 77,
  aux_sym__json_string_token1 = 78,
  sym__json_escape_sequence = 79,
  sym_dockerfile = 80,
  sym__directive = 81,
  sym_onbuild = 82,
  sym_env = 83,
  sym_label = 84,
  sym_healthcheck = 85,
  sym_arg = 86,
  sym_arg_default = 87,
  sym_add = 88,
  sym_copy = 89,
  sym_stopsignal = 90,
  sym_signal_name = 91,
  sym_shell = 92,
  sym_volume = 93,
  sym_path = 94,
  sym_workdir = 95,
  sym_user = 96,
  sym_user_name = 97,
  sym_user_group = 98,
  sym_user_id = 99,
  sym_user_group_id = 100,
  sym_cmd = 101,
  sym_entrypoint = 102,
  sym_run = 103,
  sym_maintainer = 104,
  sym_expose = 105,
  sym__port_spec = 106,
  sym_mapped_port = 107,
  sym_mapped_no_lhs = 108,
  sym__port = 109,
  sym_port = 110,
  sym_port_range = 111,
  sym__port_part = 112,
  sym_port_protocol = 113,
  sym_from = 114,
  sym_platform = 115,
  sym_repository = 116,
  sym__repository_start = 117,
  sym__repository_continued = 118,
  sym_image = 119,
  sym_tag = 120,
  sym_digest = 121,
  sym_as_name = 122,
  sym_docker_variable = 123,
  sym_variable_default_value = 124,
  sym_variable_this_or_null = 125,
  aux_sym__anything = 126,
  sym_json_array = 127,
  sym__anything_or_json_array = 128,
  sym_template_expr_less_than_equals = 129,
  sym__json_value = 130,
  aux_sym__json_string = 131,
  aux_sym_dockerfile_repeat1 = 132,
  aux_sym_add_repeat1 = 133,
  aux_sym_workdir_repeat1 = 134,
  aux_sym_expose_repeat1 = 135,
  aux_sym_repository_repeat1 = 136,
  aux_sym__repository_start_repeat1 = 137,
  aux_sym__repository_start_repeat2 = 138,
  aux_sym__repository_start_repeat3 = 139,
  aux_sym__repository_start_repeat4 = 140,
  aux_sym_json_array_repeat1 = 141,
  aux_sym_template_expr_less_than_equals_repeat1 = 142,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_onbuild_token1] = "onbuild_token1",
  [aux_sym_env_token1] = "env_token1",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_healthcheck_token1] = "healthcheck_token1",
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
  [sym__json_prefix] = "_json_prefix",
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
  [sym_onbuild] = "onbuild",
  [sym_env] = "env",
  [sym_label] = "label",
  [sym_healthcheck] = "healthcheck",
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
  [aux_sym_onbuild_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_token1] = {
    .visible = false,
    .named = false,
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
  [sym__json_prefix] = {
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
  [sym_onbuild] = {
    .visible = true,
    .named = true,
  },
  [sym_env] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck] = {
    .visible = true,
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
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == ',') ADVANCE(921);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(241);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(244);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(922);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '{') ADVANCE(819);
      if (lookahead == '}') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(455);
      if (lookahead == '$') ADVANCE(378);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(396);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(442);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(428);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(837);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(842);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(832);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(833);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(844);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(843);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(840);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(841);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(830);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == ',') ADVANCE(921);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(241);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(922);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '%') ADVANCE(805);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '}') ADVANCE(795);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(359);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(345);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(59);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(59);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(629);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(584);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(630);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(616);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(629);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(584);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(630);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(616);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(680);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(703);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(658);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(645);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(704);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(690);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(692);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(680);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(703);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(658);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(645);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(704);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(690);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(692);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(569);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(556);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(569);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(556);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(777);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(732);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(719);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(739);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(778);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(764);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(717);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 25:
      if (lookahead == 0) ADVANCE(167);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(777);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(732);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(719);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(739);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(778);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(764);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(717);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '#') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(944);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(943);
      if (lookahead == ',') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(943);
      if (lookahead != 0) ADVANCE(943);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(932);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(933);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\\') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(825);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(943);
      if (lookahead != 0) ADVANCE(943);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '\\') ADVANCE(929);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(930);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '#') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(927);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(375);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(924);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(923);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == ',') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '}') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(821);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(821);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(494);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(494);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(845);
      END_STATE();
    case 56:
      if (lookahead == '+') ADVANCE(826);
      if (lookahead == '-') ADVANCE(822);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(472);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(812);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(812);
      if (lookahead != 0) ADVANCE(934);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(812);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '"') ADVANCE(920);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '"') ADVANCE(920);
      if (lookahead == '\\') ADVANCE(827);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(845);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '"') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(845);
      if (lookahead == '\\') ADVANCE(827);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(163);
      END_STATE();
    case 73:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(811);
      END_STATE();
    case 74:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(816);
      END_STATE();
    case 75:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(814);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 115:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 144:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 161:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 162:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(845);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(934);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(845);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '5') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '6') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '"') ADVANCE(920);
      if (lookahead == '\\') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(371);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_workdir_token3);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '#') ADVANCE(455);
      if (lookahead == '$') ADVANCE(378);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(396);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(442);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(428);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '2') ADVANCE(478);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '6') ADVANCE(480);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(939);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '{') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 494:
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
          lookahead != '}') ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(565);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(514);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(526);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(519);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(522);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(542);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(505);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(510);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(508);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(566);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(506);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(509);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(551);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(567);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(558);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(548);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(513);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(536);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(535);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(569);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(552);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(496);
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
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(638);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(587);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(599);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(595);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(578);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(585);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(583);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(614);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(581);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(634);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(624);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(573);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(606);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(623);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(632);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(631);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(620);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(641);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(593);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(642);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(625);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(809);
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(938);
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
          lookahead != '}') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(712);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(661);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(673);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(666);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(654);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(662);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(689);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(652);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(659);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(657);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(688);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(655);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(713);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(677);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(696);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(656);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(698);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(678);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(700);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(697);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(714);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(705);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(694);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(695);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(664);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(716);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(699);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(74);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(742);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(744);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(786);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(735);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(747);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(727);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(763);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(726);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(733);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(731);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(750);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(729);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(727);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(749);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(727);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(770);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(730);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(772);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(784);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(734);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(721);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(752);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(775);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(746);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(788);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(769);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(734);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(757);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(745);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(756);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(717);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(773);
      if (lookahead == '{') ADVANCE(801);
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
          lookahead != '}') ADVANCE(717);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(792);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(790);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(793);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(794);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(796);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(797);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(800);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(802);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(804);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(806);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(808);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(810);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(813);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(815);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(792);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 821:
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
          lookahead != '}') ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\\') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(825);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(825);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0) ADVANCE(846);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(847);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(901);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(860);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(848);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(849);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(885);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(916);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(904);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(890);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(891);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(857);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(846);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(884);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(847);
      if (lookahead == '\\') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(846);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(846);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(911);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(846);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(846);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(846);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(868);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(846);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(846);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(872);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(846);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(846);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(846);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(846);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(846);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(846);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(846);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(846);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(846);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(846);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(908);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(846);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(846);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(846);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(846);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(882);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(906);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(874);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(846);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(913);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(846);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(905);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(846);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(846);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(895);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(846);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(846);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(846);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(846);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(846);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(846);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(846);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(846);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(846);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(846);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(846);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(884);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(846);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(873);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(846);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(883);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(846);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(846);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'd' &&
          lookahead != 'r') ADVANCE(846);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 'h' &&
          lookahead != 't') ADVANCE(846);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'm' &&
          lookahead != 'o') ADVANCE(846);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(857);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != 'X' &&
          lookahead != '\\' &&
          lookahead != 'n' &&
          lookahead != 'x') ADVANCE(846);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != 'V' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'v') ADVANCE(846);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(924);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(927);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(927);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '\\') ADVANCE(929);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(930);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(930);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '\\') ADVANCE(932);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(933);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(933);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(936);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(936);
      if (lookahead == '#') ADVANCE(829);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(936);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(816);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(936);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(814);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(936);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(829);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(940);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 944:
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
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
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
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 51},
  [181] = {.lex_state = 51},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 52},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 52},
  [186] = {.lex_state = 51},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 52},
  [189] = {.lex_state = 52},
  [190] = {.lex_state = 52},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 51},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 51},
  [196] = {.lex_state = 51},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 51},
  [199] = {.lex_state = 51},
  [200] = {.lex_state = 51},
  [201] = {.lex_state = 51},
  [202] = {.lex_state = 51},
  [203] = {.lex_state = 51},
  [204] = {.lex_state = 51},
  [205] = {.lex_state = 51},
  [206] = {.lex_state = 51},
  [207] = {.lex_state = 51},
  [208] = {.lex_state = 51},
  [209] = {.lex_state = 51},
  [210] = {.lex_state = 51},
  [211] = {.lex_state = 51},
  [212] = {.lex_state = 51},
  [213] = {.lex_state = 51},
  [214] = {.lex_state = 51},
  [215] = {.lex_state = 51},
  [216] = {.lex_state = 51},
  [217] = {.lex_state = 51},
  [218] = {.lex_state = 51},
  [219] = {.lex_state = 51},
  [220] = {.lex_state = 51},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 51},
  [223] = {.lex_state = 51},
  [224] = {.lex_state = 51},
  [225] = {.lex_state = 51},
  [226] = {.lex_state = 51},
  [227] = {.lex_state = 51},
  [228] = {.lex_state = 51},
  [229] = {.lex_state = 31},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 44},
  [233] = {.lex_state = 44},
  [234] = {.lex_state = 44},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 32},
  [237] = {.lex_state = 32},
  [238] = {.lex_state = 32},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 24},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 46},
  [244] = {.lex_state = 46},
  [245] = {.lex_state = 32},
  [246] = {.lex_state = 32},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 32},
  [251] = {.lex_state = 33},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 46},
  [254] = {.lex_state = 32},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 24},
  [257] = {.lex_state = 33},
  [258] = {.lex_state = 32},
  [259] = {.lex_state = 33},
  [260] = {.lex_state = 46},
  [261] = {.lex_state = 32},
  [262] = {.lex_state = 46},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 35},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 53},
  [269] = {.lex_state = 53},
  [270] = {.lex_state = 53},
  [271] = {.lex_state = 53},
  [272] = {.lex_state = 53},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 53},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 53},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 54},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 46},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 37},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 39},
  [311] = {.lex_state = 40},
  [312] = {.lex_state = 15},
  [313] = {.lex_state = 39},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 49},
  [317] = {.lex_state = 15},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 39},
  [320] = {.lex_state = 38},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 53},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 50},
  [330] = {.lex_state = 39},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 15},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 38},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 15},
  [345] = {.lex_state = 39},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 38},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 41},
  [352] = {.lex_state = 41},
  [353] = {.lex_state = 41},
  [354] = {.lex_state = 41},
  [355] = {.lex_state = 41},
  [356] = {.lex_state = 41},
  [357] = {.lex_state = 41},
  [358] = {.lex_state = 41},
  [359] = {.lex_state = 41},
  [360] = {.lex_state = 41},
  [361] = {.lex_state = 38},
  [362] = {.lex_state = 39},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 41},
  [365] = {.lex_state = 41},
  [366] = {.lex_state = 41},
  [367] = {.lex_state = 39},
  [368] = {.lex_state = 38},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 34},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 34},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 53},
  [380] = {.lex_state = 39},
  [381] = {.lex_state = 38},
  [382] = {.lex_state = 38},
  [383] = {.lex_state = 53},
  [384] = {.lex_state = 53},
  [385] = {.lex_state = 53},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_onbuild_token1] = ACTIONS(1),
    [aux_sym_env_token1] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [aux_sym_healthcheck_token1] = ACTIONS(1),
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
    [sym__json_prefix] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(346),
    [sym__directive] = STATE(150),
    [sym_onbuild] = STATE(150),
    [sym_env] = STATE(150),
    [sym_label] = STATE(150),
    [sym_healthcheck] = STATE(150),
    [sym_arg] = STATE(150),
    [sym_add] = STATE(150),
    [sym_copy] = STATE(150),
    [sym_stopsignal] = STATE(150),
    [sym_shell] = STATE(150),
    [sym_volume] = STATE(150),
    [sym_workdir] = STATE(150),
    [sym_user] = STATE(150),
    [sym_cmd] = STATE(150),
    [sym_entrypoint] = STATE(150),
    [sym_run] = STATE(150),
    [sym_maintainer] = STATE(150),
    [sym_expose] = STATE(150),
    [sym_from] = STATE(150),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_onbuild_token1] = ACTIONS(7),
    [aux_sym_env_token1] = ACTIONS(9),
    [aux_sym_label_token1] = ACTIONS(11),
    [aux_sym_healthcheck_token1] = ACTIONS(13),
    [aux_sym_arg_token1] = ACTIONS(15),
    [aux_sym_add_token1] = ACTIONS(17),
    [aux_sym_copy_token1] = ACTIONS(19),
    [aux_sym_stopsignal_token1] = ACTIONS(21),
    [aux_sym_shell_token1] = ACTIONS(23),
    [aux_sym_volume_token1] = ACTIONS(25),
    [aux_sym_workdir_token1] = ACTIONS(27),
    [aux_sym_user_token1] = ACTIONS(29),
    [aux_sym_cmd_token1] = ACTIONS(31),
    [aux_sym_entrypoint_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_maintainer_token1] = ACTIONS(37),
    [aux_sym_expose_token1] = ACTIONS(39),
    [aux_sym_from_token1] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [2] = {
    [sym__directive] = STATE(150),
    [sym_onbuild] = STATE(150),
    [sym_env] = STATE(150),
    [sym_label] = STATE(150),
    [sym_healthcheck] = STATE(150),
    [sym_arg] = STATE(150),
    [sym_add] = STATE(150),
    [sym_copy] = STATE(150),
    [sym_stopsignal] = STATE(150),
    [sym_shell] = STATE(150),
    [sym_volume] = STATE(150),
    [sym_workdir] = STATE(150),
    [sym_user] = STATE(150),
    [sym_cmd] = STATE(150),
    [sym_entrypoint] = STATE(150),
    [sym_run] = STATE(150),
    [sym_maintainer] = STATE(150),
    [sym_expose] = STATE(150),
    [sym_from] = STATE(150),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_onbuild_token1] = ACTIONS(45),
    [aux_sym_env_token1] = ACTIONS(48),
    [aux_sym_label_token1] = ACTIONS(51),
    [aux_sym_healthcheck_token1] = ACTIONS(54),
    [aux_sym_arg_token1] = ACTIONS(57),
    [aux_sym_add_token1] = ACTIONS(60),
    [aux_sym_copy_token1] = ACTIONS(63),
    [aux_sym_stopsignal_token1] = ACTIONS(66),
    [aux_sym_shell_token1] = ACTIONS(69),
    [aux_sym_volume_token1] = ACTIONS(72),
    [aux_sym_workdir_token1] = ACTIONS(75),
    [aux_sym_user_token1] = ACTIONS(78),
    [aux_sym_cmd_token1] = ACTIONS(81),
    [aux_sym_entrypoint_token1] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(87),
    [aux_sym_maintainer_token1] = ACTIONS(90),
    [aux_sym_expose_token1] = ACTIONS(93),
    [aux_sym_from_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [3] = {
    [sym__directive] = STATE(150),
    [sym_onbuild] = STATE(150),
    [sym_env] = STATE(150),
    [sym_label] = STATE(150),
    [sym_healthcheck] = STATE(150),
    [sym_arg] = STATE(150),
    [sym_add] = STATE(150),
    [sym_copy] = STATE(150),
    [sym_stopsignal] = STATE(150),
    [sym_shell] = STATE(150),
    [sym_volume] = STATE(150),
    [sym_workdir] = STATE(150),
    [sym_user] = STATE(150),
    [sym_cmd] = STATE(150),
    [sym_entrypoint] = STATE(150),
    [sym_run] = STATE(150),
    [sym_maintainer] = STATE(150),
    [sym_expose] = STATE(150),
    [sym_from] = STATE(150),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_onbuild_token1] = ACTIONS(7),
    [aux_sym_env_token1] = ACTIONS(9),
    [aux_sym_label_token1] = ACTIONS(11),
    [aux_sym_healthcheck_token1] = ACTIONS(13),
    [aux_sym_arg_token1] = ACTIONS(15),
    [aux_sym_add_token1] = ACTIONS(17),
    [aux_sym_copy_token1] = ACTIONS(19),
    [aux_sym_stopsignal_token1] = ACTIONS(21),
    [aux_sym_shell_token1] = ACTIONS(23),
    [aux_sym_volume_token1] = ACTIONS(25),
    [aux_sym_workdir_token1] = ACTIONS(27),
    [aux_sym_user_token1] = ACTIONS(29),
    [aux_sym_cmd_token1] = ACTIONS(31),
    [aux_sym_entrypoint_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_maintainer_token1] = ACTIONS(37),
    [aux_sym_expose_token1] = ACTIONS(39),
    [aux_sym_from_token1] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [4] = {
    [sym_env] = STATE(164),
    [sym_label] = STATE(164),
    [sym_healthcheck] = STATE(164),
    [sym_arg] = STATE(164),
    [sym_add] = STATE(164),
    [sym_copy] = STATE(164),
    [sym_stopsignal] = STATE(164),
    [sym_shell] = STATE(164),
    [sym_volume] = STATE(164),
    [sym_workdir] = STATE(164),
    [sym_user] = STATE(164),
    [sym_cmd] = STATE(164),
    [sym_entrypoint] = STATE(164),
    [sym_run] = STATE(164),
    [sym_expose] = STATE(164),
    [aux_sym_env_token1] = ACTIONS(9),
    [aux_sym_label_token1] = ACTIONS(11),
    [aux_sym_healthcheck_token1] = ACTIONS(13),
    [aux_sym_arg_token1] = ACTIONS(15),
    [aux_sym_add_token1] = ACTIONS(17),
    [aux_sym_copy_token1] = ACTIONS(19),
    [aux_sym_stopsignal_token1] = ACTIONS(21),
    [aux_sym_shell_token1] = ACTIONS(23),
    [aux_sym_volume_token1] = ACTIONS(25),
    [aux_sym_workdir_token1] = ACTIONS(27),
    [aux_sym_user_token1] = ACTIONS(29),
    [aux_sym_cmd_token1] = ACTIONS(31),
    [aux_sym_entrypoint_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_expose_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [5] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(87),
    [sym_port] = STATE(87),
    [sym_port_range] = STATE(87),
    [sym__port_part] = STATE(68),
    [aux_sym_expose_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_onbuild_token1] = ACTIONS(101),
    [aux_sym_env_token1] = ACTIONS(101),
    [aux_sym_label_token1] = ACTIONS(101),
    [aux_sym_healthcheck_token1] = ACTIONS(101),
    [aux_sym_arg_token1] = ACTIONS(101),
    [aux_sym_add_token1] = ACTIONS(101),
    [aux_sym_copy_token1] = ACTIONS(101),
    [aux_sym_stopsignal_token1] = ACTIONS(101),
    [aux_sym_shell_token1] = ACTIONS(101),
    [aux_sym_volume_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [aux_sym_workdir_token1] = ACTIONS(101),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [aux_sym_user_token1] = ACTIONS(101),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [aux_sym_cmd_token1] = ACTIONS(101),
    [aux_sym_entrypoint_token1] = ACTIONS(101),
    [aux_sym_run_token1] = ACTIONS(101),
    [aux_sym_maintainer_token1] = ACTIONS(101),
    [aux_sym_expose_token1] = ACTIONS(101),
    [aux_sym_from_token1] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [6] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(87),
    [sym_port] = STATE(87),
    [sym_port_range] = STATE(87),
    [sym__port_part] = STATE(68),
    [aux_sym_expose_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(109),
    [aux_sym_onbuild_token1] = ACTIONS(109),
    [aux_sym_env_token1] = ACTIONS(109),
    [aux_sym_label_token1] = ACTIONS(109),
    [aux_sym_healthcheck_token1] = ACTIONS(109),
    [aux_sym_arg_token1] = ACTIONS(109),
    [aux_sym_add_token1] = ACTIONS(109),
    [aux_sym_copy_token1] = ACTIONS(109),
    [aux_sym_stopsignal_token1] = ACTIONS(109),
    [aux_sym_shell_token1] = ACTIONS(109),
    [aux_sym_volume_token1] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_workdir_token1] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [aux_sym_user_token1] = ACTIONS(109),
    [aux_sym_user_id_token1] = ACTIONS(117),
    [aux_sym_cmd_token1] = ACTIONS(109),
    [aux_sym_entrypoint_token1] = ACTIONS(109),
    [aux_sym_run_token1] = ACTIONS(109),
    [aux_sym_maintainer_token1] = ACTIONS(109),
    [aux_sym_expose_token1] = ACTIONS(109),
    [aux_sym_from_token1] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_onbuild_token1] = ACTIONS(122),
    [aux_sym_env_token1] = ACTIONS(122),
    [aux_sym_label_token1] = ACTIONS(122),
    [aux_sym_healthcheck_token1] = ACTIONS(122),
    [aux_sym_arg_token1] = ACTIONS(122),
    [aux_sym_add_token1] = ACTIONS(122),
    [aux_sym_copy_token1] = ACTIONS(122),
    [aux_sym_stopsignal_token1] = ACTIONS(122),
    [aux_sym_shell_token1] = ACTIONS(122),
    [aux_sym_volume_token1] = ACTIONS(122),
    [aux_sym_workdir_token1] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_cmd_token1] = ACTIONS(122),
    [aux_sym_entrypoint_token1] = ACTIONS(122),
    [aux_sym_run_token1] = ACTIONS(122),
    [aux_sym_maintainer_token1] = ACTIONS(122),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(120),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(122),
    [aux_sym__repository_start_token8] = ACTIONS(124),
    [aux_sym__repository_start_token11] = ACTIONS(124),
    [aux_sym__repository_start_token16] = ACTIONS(120),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [8] = {
    [aux_sym__repository_start_repeat4] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [9] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(141),
    [aux_sym_env_token1] = ACTIONS(141),
    [aux_sym_label_token1] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(141),
    [aux_sym_arg_token1] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(141),
    [aux_sym_copy_token1] = ACTIONS(141),
    [aux_sym_stopsignal_token1] = ACTIONS(141),
    [aux_sym_shell_token1] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(141),
    [aux_sym_workdir_token1] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(141),
    [aux_sym_cmd_token1] = ACTIONS(141),
    [aux_sym_entrypoint_token1] = ACTIONS(141),
    [aux_sym_run_token1] = ACTIONS(141),
    [aux_sym_maintainer_token1] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(139),
    [aux_sym_from_token2] = ACTIONS(141),
    [aux_sym__repository_start_token2] = ACTIONS(143),
    [aux_sym__repository_start_token3] = ACTIONS(141),
    [aux_sym__repository_start_token16] = ACTIONS(139),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [10] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(148),
    [aux_sym_env_token1] = ACTIONS(148),
    [aux_sym_label_token1] = ACTIONS(148),
    [aux_sym_healthcheck_token1] = ACTIONS(148),
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
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(150),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [11] = {
    [aux_sym__repository_start_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [13] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(148),
    [aux_sym_env_token1] = ACTIONS(148),
    [aux_sym_label_token1] = ACTIONS(148),
    [aux_sym_healthcheck_token1] = ACTIONS(148),
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
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(150),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [14] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(148),
    [aux_sym_env_token1] = ACTIONS(148),
    [aux_sym_label_token1] = ACTIONS(148),
    [aux_sym_healthcheck_token1] = ACTIONS(148),
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
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [aux_sym__repository_start_token16] = ACTIONS(150),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_onbuild_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_label_token1] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_stopsignal_token1] = ACTIONS(160),
    [aux_sym_shell_token1] = ACTIONS(160),
    [aux_sym_volume_token1] = ACTIONS(160),
    [aux_sym_workdir_token1] = ACTIONS(160),
    [aux_sym_user_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_run_token1] = ACTIONS(160),
    [aux_sym_maintainer_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(158),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(158),
    [aux_sym_from_token2] = ACTIONS(160),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(162),
    [aux_sym__repository_start_token15] = ACTIONS(162),
    [aux_sym__repository_start_token16] = ACTIONS(158),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [16] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [17] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_onbuild_token1] = ACTIONS(169),
    [aux_sym_env_token1] = ACTIONS(169),
    [aux_sym_label_token1] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(169),
    [aux_sym_arg_token1] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(169),
    [aux_sym_copy_token1] = ACTIONS(169),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [aux_sym_user_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(167),
    [aux_sym_from_token2] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [18] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(176),
    [aux_sym_env_token1] = ACTIONS(176),
    [aux_sym_label_token1] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(176),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [aux_sym_cmd_token1] = ACTIONS(176),
    [aux_sym_entrypoint_token1] = ACTIONS(176),
    [aux_sym_run_token1] = ACTIONS(176),
    [aux_sym_maintainer_token1] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(174),
    [aux_sym_from_token2] = ACTIONS(176),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(180),
    [aux_sym__repository_start_token16] = ACTIONS(178),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_onbuild_token1] = ACTIONS(184),
    [aux_sym_env_token1] = ACTIONS(184),
    [aux_sym_label_token1] = ACTIONS(184),
    [aux_sym_healthcheck_token1] = ACTIONS(184),
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
    [aux_sym__repository_start_token12] = ACTIONS(182),
    [aux_sym__repository_start_token15] = ACTIONS(182),
    [aux_sym__repository_start_token16] = ACTIONS(182),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_onbuild_token1] = ACTIONS(188),
    [aux_sym_env_token1] = ACTIONS(188),
    [aux_sym_label_token1] = ACTIONS(188),
    [aux_sym_healthcheck_token1] = ACTIONS(188),
    [aux_sym_arg_token1] = ACTIONS(188),
    [aux_sym_add_token1] = ACTIONS(188),
    [aux_sym_copy_token1] = ACTIONS(188),
    [aux_sym_stopsignal_token1] = ACTIONS(188),
    [aux_sym_shell_token1] = ACTIONS(188),
    [aux_sym_volume_token1] = ACTIONS(188),
    [aux_sym_workdir_token1] = ACTIONS(188),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [aux_sym_user_token1] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [aux_sym_cmd_token1] = ACTIONS(188),
    [aux_sym_entrypoint_token1] = ACTIONS(188),
    [aux_sym_run_token1] = ACTIONS(188),
    [aux_sym_maintainer_token1] = ACTIONS(188),
    [aux_sym_expose_token1] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(186),
    [aux_sym_from_token1] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(186),
    [aux_sym_from_token2] = ACTIONS(188),
    [aux_sym__repository_start_token2] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(188),
    [aux_sym__repository_start_token16] = ACTIONS(186),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_onbuild_token1] = ACTIONS(192),
    [aux_sym_env_token1] = ACTIONS(192),
    [aux_sym_label_token1] = ACTIONS(192),
    [aux_sym_healthcheck_token1] = ACTIONS(192),
    [aux_sym_arg_token1] = ACTIONS(192),
    [aux_sym_add_token1] = ACTIONS(192),
    [aux_sym_copy_token1] = ACTIONS(192),
    [aux_sym_stopsignal_token1] = ACTIONS(192),
    [aux_sym_shell_token1] = ACTIONS(192),
    [aux_sym_volume_token1] = ACTIONS(192),
    [aux_sym_workdir_token1] = ACTIONS(192),
    [aux_sym_user_token1] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [aux_sym_cmd_token1] = ACTIONS(192),
    [aux_sym_entrypoint_token1] = ACTIONS(192),
    [aux_sym_run_token1] = ACTIONS(192),
    [aux_sym_maintainer_token1] = ACTIONS(192),
    [aux_sym_expose_token1] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(190),
    [aux_sym_from_token1] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(190),
    [aux_sym_from_token2] = ACTIONS(192),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(190),
    [aux_sym__repository_start_token7] = ACTIONS(190),
    [aux_sym__repository_start_token16] = ACTIONS(190),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_onbuild_token1] = ACTIONS(196),
    [aux_sym_env_token1] = ACTIONS(196),
    [aux_sym_label_token1] = ACTIONS(196),
    [aux_sym_healthcheck_token1] = ACTIONS(196),
    [aux_sym_arg_token1] = ACTIONS(196),
    [aux_sym_add_token1] = ACTIONS(196),
    [aux_sym_copy_token1] = ACTIONS(196),
    [aux_sym_stopsignal_token1] = ACTIONS(196),
    [aux_sym_shell_token1] = ACTIONS(196),
    [aux_sym_volume_token1] = ACTIONS(196),
    [aux_sym_workdir_token1] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym_user_token1] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [aux_sym_cmd_token1] = ACTIONS(196),
    [aux_sym_entrypoint_token1] = ACTIONS(196),
    [aux_sym_run_token1] = ACTIONS(196),
    [aux_sym_maintainer_token1] = ACTIONS(196),
    [aux_sym_expose_token1] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(194),
    [aux_sym_from_token1] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(194),
    [aux_sym_from_token2] = ACTIONS(196),
    [aux_sym__repository_start_token2] = ACTIONS(194),
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [aux_sym__repository_start_token16] = ACTIONS(194),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym_onbuild_token1] = ACTIONS(200),
    [aux_sym_env_token1] = ACTIONS(200),
    [aux_sym_label_token1] = ACTIONS(200),
    [aux_sym_healthcheck_token1] = ACTIONS(200),
    [aux_sym_arg_token1] = ACTIONS(200),
    [aux_sym_add_token1] = ACTIONS(200),
    [aux_sym_copy_token1] = ACTIONS(200),
    [aux_sym_stopsignal_token1] = ACTIONS(200),
    [aux_sym_shell_token1] = ACTIONS(200),
    [aux_sym_volume_token1] = ACTIONS(200),
    [aux_sym_workdir_token1] = ACTIONS(200),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym_user_token1] = ACTIONS(200),
    [anon_sym_COLON] = ACTIONS(200),
    [aux_sym_cmd_token1] = ACTIONS(200),
    [aux_sym_entrypoint_token1] = ACTIONS(200),
    [aux_sym_run_token1] = ACTIONS(200),
    [aux_sym_maintainer_token1] = ACTIONS(200),
    [aux_sym_expose_token1] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(198),
    [aux_sym_from_token2] = ACTIONS(200),
    [aux_sym__repository_start_token2] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token16] = ACTIONS(198),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_onbuild_token1] = ACTIONS(204),
    [aux_sym_env_token1] = ACTIONS(204),
    [aux_sym_label_token1] = ACTIONS(204),
    [aux_sym_healthcheck_token1] = ACTIONS(204),
    [aux_sym_arg_token1] = ACTIONS(204),
    [aux_sym_add_token1] = ACTIONS(204),
    [aux_sym_copy_token1] = ACTIONS(204),
    [aux_sym_stopsignal_token1] = ACTIONS(204),
    [aux_sym_shell_token1] = ACTIONS(204),
    [aux_sym_volume_token1] = ACTIONS(204),
    [aux_sym_workdir_token1] = ACTIONS(204),
    [aux_sym_user_token1] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(204),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(202),
    [aux_sym_from_token1] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(204),
    [aux_sym__repository_start_token3] = ACTIONS(204),
    [aux_sym__repository_start_token8] = ACTIONS(202),
    [aux_sym__repository_start_token11] = ACTIONS(202),
    [aux_sym__repository_start_token16] = ACTIONS(202),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(141),
    [aux_sym_env_token1] = ACTIONS(141),
    [aux_sym_label_token1] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(141),
    [aux_sym_arg_token1] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(141),
    [aux_sym_copy_token1] = ACTIONS(141),
    [aux_sym_stopsignal_token1] = ACTIONS(141),
    [aux_sym_shell_token1] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(141),
    [aux_sym_workdir_token1] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_user_token1] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(141),
    [aux_sym_cmd_token1] = ACTIONS(141),
    [aux_sym_entrypoint_token1] = ACTIONS(141),
    [aux_sym_run_token1] = ACTIONS(141),
    [aux_sym_maintainer_token1] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(139),
    [aux_sym_from_token2] = ACTIONS(141),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(141),
    [aux_sym__repository_start_token16] = ACTIONS(139),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [26] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token8] = ACTIONS(208),
    [aux_sym__repository_start_token11] = ACTIONS(208),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [27] = {
    [aux_sym__repository_start_repeat4] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token12] = ACTIONS(210),
    [aux_sym__repository_start_token15] = ACTIONS(210),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [28] = {
    [sym_port_protocol] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_onbuild_token1] = ACTIONS(212),
    [aux_sym_env_token1] = ACTIONS(212),
    [aux_sym_label_token1] = ACTIONS(212),
    [aux_sym_healthcheck_token1] = ACTIONS(212),
    [aux_sym_arg_token1] = ACTIONS(212),
    [aux_sym_add_token1] = ACTIONS(212),
    [aux_sym_copy_token1] = ACTIONS(212),
    [aux_sym_stopsignal_token1] = ACTIONS(212),
    [aux_sym_shell_token1] = ACTIONS(212),
    [aux_sym_volume_token1] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_workdir_token1] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [aux_sym_user_token1] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [aux_sym_user_id_token1] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(212),
    [aux_sym_entrypoint_token1] = ACTIONS(212),
    [aux_sym_run_token1] = ACTIONS(212),
    [aux_sym_maintainer_token1] = ACTIONS(212),
    [aux_sym_expose_token1] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(214),
    [aux_sym_from_token1] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym__repository_start_repeat4] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_onbuild_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_label_token1] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_stopsignal_token1] = ACTIONS(160),
    [aux_sym_shell_token1] = ACTIONS(160),
    [aux_sym_volume_token1] = ACTIONS(160),
    [aux_sym_workdir_token1] = ACTIONS(160),
    [aux_sym_user_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(158),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_run_token1] = ACTIONS(160),
    [aux_sym_maintainer_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(158),
    [aux_sym_from_token2] = ACTIONS(160),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(216),
    [aux_sym__repository_start_token15] = ACTIONS(216),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [30] = {
    [aux_sym__repository_start_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(176),
    [aux_sym_env_token1] = ACTIONS(176),
    [aux_sym_label_token1] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(176),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(219),
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
    [aux_sym__repository_start_token2] = ACTIONS(219),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token4] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(223),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [32] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(148),
    [aux_sym_env_token1] = ACTIONS(148),
    [aux_sym_label_token1] = ACTIONS(148),
    [aux_sym_healthcheck_token1] = ACTIONS(148),
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
    [aux_sym__repository_start_token3] = ACTIONS(225),
    [aux_sym__repository_start_token4] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(223),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(148),
    [aux_sym_env_token1] = ACTIONS(148),
    [aux_sym_label_token1] = ACTIONS(148),
    [aux_sym_healthcheck_token1] = ACTIONS(148),
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
    [aux_sym__repository_start_token3] = ACTIONS(225),
    [aux_sym__repository_start_token8] = ACTIONS(208),
    [aux_sym__repository_start_token11] = ACTIONS(208),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [34] = {
    [aux_sym__repository_start_repeat4] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(148),
    [aux_sym_env_token1] = ACTIONS(148),
    [aux_sym_label_token1] = ACTIONS(148),
    [aux_sym_healthcheck_token1] = ACTIONS(148),
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
    [aux_sym__repository_start_token3] = ACTIONS(225),
    [aux_sym__repository_start_token12] = ACTIONS(210),
    [aux_sym__repository_start_token15] = ACTIONS(210),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [35] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(131),
    [aux_sym_env_token1] = ACTIONS(131),
    [aux_sym_label_token1] = ACTIONS(131),
    [aux_sym_healthcheck_token1] = ACTIONS(131),
    [aux_sym_arg_token1] = ACTIONS(131),
    [aux_sym_add_token1] = ACTIONS(131),
    [aux_sym_copy_token1] = ACTIONS(131),
    [aux_sym_stopsignal_token1] = ACTIONS(131),
    [aux_sym_shell_token1] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(131),
    [aux_sym_workdir_token1] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(219),
    [aux_sym_user_token1] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(131),
    [aux_sym_entrypoint_token1] = ACTIONS(131),
    [aux_sym_run_token1] = ACTIONS(131),
    [aux_sym_maintainer_token1] = ACTIONS(131),
    [aux_sym_expose_token1] = ACTIONS(131),
    [aux_sym_from_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(131),
    [aux_sym__repository_start_token2] = ACTIONS(219),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [36] = {
    [sym_port_protocol] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_onbuild_token1] = ACTIONS(227),
    [aux_sym_env_token1] = ACTIONS(227),
    [aux_sym_label_token1] = ACTIONS(227),
    [aux_sym_healthcheck_token1] = ACTIONS(227),
    [aux_sym_arg_token1] = ACTIONS(227),
    [aux_sym_add_token1] = ACTIONS(227),
    [aux_sym_copy_token1] = ACTIONS(227),
    [aux_sym_stopsignal_token1] = ACTIONS(227),
    [aux_sym_shell_token1] = ACTIONS(227),
    [aux_sym_volume_token1] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [aux_sym_workdir_token1] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym_user_token1] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [aux_sym_user_id_token1] = ACTIONS(227),
    [aux_sym_cmd_token1] = ACTIONS(227),
    [aux_sym_entrypoint_token1] = ACTIONS(227),
    [aux_sym_run_token1] = ACTIONS(227),
    [aux_sym_maintainer_token1] = ACTIONS(227),
    [aux_sym_expose_token1] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(214),
    [aux_sym_from_token1] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(141),
    [aux_sym_env_token1] = ACTIONS(141),
    [aux_sym_label_token1] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(141),
    [aux_sym_arg_token1] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(141),
    [aux_sym_copy_token1] = ACTIONS(141),
    [aux_sym_stopsignal_token1] = ACTIONS(141),
    [aux_sym_shell_token1] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(141),
    [aux_sym_workdir_token1] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym_user_token1] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(141),
    [aux_sym_entrypoint_token1] = ACTIONS(141),
    [aux_sym_run_token1] = ACTIONS(141),
    [aux_sym_maintainer_token1] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(141),
    [aux_sym_from_token1] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(139),
    [aux_sym_from_token2] = ACTIONS(141),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(141),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [38] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_onbuild_token1] = ACTIONS(169),
    [aux_sym_env_token1] = ACTIONS(169),
    [aux_sym_label_token1] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(169),
    [aux_sym_arg_token1] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(169),
    [aux_sym_copy_token1] = ACTIONS(169),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [aux_sym_user_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [aux_sym_from_token1] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(167),
    [aux_sym_from_token2] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token4] = ACTIONS(232),
    [aux_sym__repository_start_token7] = ACTIONS(232),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [39] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_onbuild_token1] = ACTIONS(122),
    [aux_sym_env_token1] = ACTIONS(122),
    [aux_sym_label_token1] = ACTIONS(122),
    [aux_sym_healthcheck_token1] = ACTIONS(122),
    [aux_sym_arg_token1] = ACTIONS(122),
    [aux_sym_add_token1] = ACTIONS(122),
    [aux_sym_copy_token1] = ACTIONS(122),
    [aux_sym_stopsignal_token1] = ACTIONS(122),
    [aux_sym_shell_token1] = ACTIONS(122),
    [aux_sym_volume_token1] = ACTIONS(122),
    [aux_sym_workdir_token1] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(120),
    [aux_sym_cmd_token1] = ACTIONS(122),
    [aux_sym_entrypoint_token1] = ACTIONS(122),
    [aux_sym_run_token1] = ACTIONS(122),
    [aux_sym_maintainer_token1] = ACTIONS(122),
    [aux_sym_expose_token1] = ACTIONS(122),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(122),
    [aux_sym__repository_start_token8] = ACTIONS(235),
    [aux_sym__repository_start_token11] = ACTIONS(235),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [40] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_onbuild_token1] = ACTIONS(240),
    [aux_sym_env_token1] = ACTIONS(240),
    [aux_sym_label_token1] = ACTIONS(240),
    [aux_sym_healthcheck_token1] = ACTIONS(240),
    [aux_sym_arg_token1] = ACTIONS(240),
    [aux_sym_add_token1] = ACTIONS(240),
    [aux_sym_copy_token1] = ACTIONS(240),
    [aux_sym_stopsignal_token1] = ACTIONS(240),
    [aux_sym_shell_token1] = ACTIONS(240),
    [aux_sym_volume_token1] = ACTIONS(240),
    [aux_sym_workdir_token1] = ACTIONS(240),
    [aux_sym_user_token1] = ACTIONS(240),
    [aux_sym_cmd_token1] = ACTIONS(240),
    [aux_sym_entrypoint_token1] = ACTIONS(240),
    [aux_sym_run_token1] = ACTIONS(240),
    [aux_sym_maintainer_token1] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(240),
    [aux_sym_from_token1] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym__repository_start_token3] = ACTIONS(242),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym_onbuild_token1] = ACTIONS(198),
    [aux_sym_env_token1] = ACTIONS(198),
    [aux_sym_label_token1] = ACTIONS(198),
    [aux_sym_healthcheck_token1] = ACTIONS(198),
    [aux_sym_arg_token1] = ACTIONS(198),
    [aux_sym_add_token1] = ACTIONS(198),
    [aux_sym_copy_token1] = ACTIONS(198),
    [aux_sym_stopsignal_token1] = ACTIONS(198),
    [aux_sym_shell_token1] = ACTIONS(198),
    [aux_sym_volume_token1] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_workdir_token1] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym_user_token1] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [aux_sym_user_id_token1] = ACTIONS(198),
    [aux_sym_cmd_token1] = ACTIONS(198),
    [aux_sym_entrypoint_token1] = ACTIONS(198),
    [aux_sym_run_token1] = ACTIONS(198),
    [aux_sym_maintainer_token1] = ACTIONS(198),
    [aux_sym_expose_token1] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [aux_sym_from_token1] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_onbuild_token1] = ACTIONS(240),
    [aux_sym_env_token1] = ACTIONS(240),
    [aux_sym_label_token1] = ACTIONS(240),
    [aux_sym_healthcheck_token1] = ACTIONS(240),
    [aux_sym_arg_token1] = ACTIONS(240),
    [aux_sym_add_token1] = ACTIONS(240),
    [aux_sym_copy_token1] = ACTIONS(240),
    [aux_sym_stopsignal_token1] = ACTIONS(240),
    [aux_sym_shell_token1] = ACTIONS(240),
    [aux_sym_volume_token1] = ACTIONS(240),
    [aux_sym_workdir_token1] = ACTIONS(240),
    [aux_sym_user_token1] = ACTIONS(240),
    [aux_sym_cmd_token1] = ACTIONS(240),
    [aux_sym_entrypoint_token1] = ACTIONS(240),
    [aux_sym_run_token1] = ACTIONS(240),
    [aux_sym_maintainer_token1] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(240),
    [aux_sym_from_token1] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym__repository_start_token3] = ACTIONS(242),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_onbuild_token1] = ACTIONS(196),
    [aux_sym_env_token1] = ACTIONS(196),
    [aux_sym_label_token1] = ACTIONS(196),
    [aux_sym_healthcheck_token1] = ACTIONS(196),
    [aux_sym_arg_token1] = ACTIONS(196),
    [aux_sym_add_token1] = ACTIONS(196),
    [aux_sym_copy_token1] = ACTIONS(196),
    [aux_sym_stopsignal_token1] = ACTIONS(196),
    [aux_sym_shell_token1] = ACTIONS(196),
    [aux_sym_volume_token1] = ACTIONS(196),
    [aux_sym_workdir_token1] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym_user_token1] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(194),
    [aux_sym_cmd_token1] = ACTIONS(196),
    [aux_sym_entrypoint_token1] = ACTIONS(196),
    [aux_sym_run_token1] = ACTIONS(196),
    [aux_sym_maintainer_token1] = ACTIONS(196),
    [aux_sym_expose_token1] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(194),
    [aux_sym_from_token2] = ACTIONS(196),
    [aux_sym__repository_start_token2] = ACTIONS(194),
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym_onbuild_token1] = ACTIONS(200),
    [aux_sym_env_token1] = ACTIONS(200),
    [aux_sym_label_token1] = ACTIONS(200),
    [aux_sym_healthcheck_token1] = ACTIONS(200),
    [aux_sym_arg_token1] = ACTIONS(200),
    [aux_sym_add_token1] = ACTIONS(200),
    [aux_sym_copy_token1] = ACTIONS(200),
    [aux_sym_stopsignal_token1] = ACTIONS(200),
    [aux_sym_shell_token1] = ACTIONS(200),
    [aux_sym_volume_token1] = ACTIONS(200),
    [aux_sym_workdir_token1] = ACTIONS(200),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym_user_token1] = ACTIONS(200),
    [anon_sym_COLON] = ACTIONS(198),
    [aux_sym_cmd_token1] = ACTIONS(200),
    [aux_sym_entrypoint_token1] = ACTIONS(200),
    [aux_sym_run_token1] = ACTIONS(200),
    [aux_sym_maintainer_token1] = ACTIONS(200),
    [aux_sym_expose_token1] = ACTIONS(200),
    [aux_sym_from_token1] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(198),
    [aux_sym_from_token2] = ACTIONS(200),
    [aux_sym__repository_start_token2] = ACTIONS(198),
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_onbuild_token1] = ACTIONS(184),
    [aux_sym_env_token1] = ACTIONS(184),
    [aux_sym_label_token1] = ACTIONS(184),
    [aux_sym_healthcheck_token1] = ACTIONS(184),
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
    [aux_sym__repository_start_token12] = ACTIONS(182),
    [aux_sym__repository_start_token15] = ACTIONS(182),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_onbuild_token1] = ACTIONS(194),
    [aux_sym_env_token1] = ACTIONS(194),
    [aux_sym_label_token1] = ACTIONS(194),
    [aux_sym_healthcheck_token1] = ACTIONS(194),
    [aux_sym_arg_token1] = ACTIONS(194),
    [aux_sym_add_token1] = ACTIONS(194),
    [aux_sym_copy_token1] = ACTIONS(194),
    [aux_sym_stopsignal_token1] = ACTIONS(194),
    [aux_sym_shell_token1] = ACTIONS(194),
    [aux_sym_volume_token1] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_workdir_token1] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym_user_token1] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [aux_sym_user_id_token1] = ACTIONS(194),
    [aux_sym_cmd_token1] = ACTIONS(194),
    [aux_sym_entrypoint_token1] = ACTIONS(194),
    [aux_sym_run_token1] = ACTIONS(194),
    [aux_sym_maintainer_token1] = ACTIONS(194),
    [aux_sym_expose_token1] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [aux_sym_from_token1] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_onbuild_token1] = ACTIONS(204),
    [aux_sym_env_token1] = ACTIONS(204),
    [aux_sym_label_token1] = ACTIONS(204),
    [aux_sym_healthcheck_token1] = ACTIONS(204),
    [aux_sym_arg_token1] = ACTIONS(204),
    [aux_sym_add_token1] = ACTIONS(204),
    [aux_sym_copy_token1] = ACTIONS(204),
    [aux_sym_stopsignal_token1] = ACTIONS(204),
    [aux_sym_shell_token1] = ACTIONS(204),
    [aux_sym_volume_token1] = ACTIONS(204),
    [aux_sym_workdir_token1] = ACTIONS(204),
    [aux_sym_user_token1] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [aux_sym_from_token1] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(202),
    [aux_sym_from_token2] = ACTIONS(204),
    [aux_sym__repository_start_token3] = ACTIONS(204),
    [aux_sym__repository_start_token8] = ACTIONS(202),
    [aux_sym__repository_start_token11] = ACTIONS(202),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_onbuild_token1] = ACTIONS(192),
    [aux_sym_env_token1] = ACTIONS(192),
    [aux_sym_label_token1] = ACTIONS(192),
    [aux_sym_healthcheck_token1] = ACTIONS(192),
    [aux_sym_arg_token1] = ACTIONS(192),
    [aux_sym_add_token1] = ACTIONS(192),
    [aux_sym_copy_token1] = ACTIONS(192),
    [aux_sym_stopsignal_token1] = ACTIONS(192),
    [aux_sym_shell_token1] = ACTIONS(192),
    [aux_sym_volume_token1] = ACTIONS(192),
    [aux_sym_workdir_token1] = ACTIONS(192),
    [aux_sym_user_token1] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(190),
    [aux_sym_cmd_token1] = ACTIONS(192),
    [aux_sym_entrypoint_token1] = ACTIONS(192),
    [aux_sym_run_token1] = ACTIONS(192),
    [aux_sym_maintainer_token1] = ACTIONS(192),
    [aux_sym_expose_token1] = ACTIONS(192),
    [aux_sym_from_token1] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(190),
    [aux_sym_from_token2] = ACTIONS(192),
    [aux_sym__repository_start_token3] = ACTIONS(192),
    [aux_sym__repository_start_token4] = ACTIONS(190),
    [aux_sym__repository_start_token7] = ACTIONS(190),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(141),
    [aux_sym_env_token1] = ACTIONS(141),
    [aux_sym_label_token1] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(141),
    [aux_sym_arg_token1] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(141),
    [aux_sym_copy_token1] = ACTIONS(141),
    [aux_sym_stopsignal_token1] = ACTIONS(141),
    [aux_sym_shell_token1] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(141),
    [aux_sym_workdir_token1] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_user_token1] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(141),
    [aux_sym_entrypoint_token1] = ACTIONS(141),
    [aux_sym_run_token1] = ACTIONS(141),
    [aux_sym_maintainer_token1] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(141),
    [aux_sym_from_token1] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(139),
    [aux_sym_from_token2] = ACTIONS(141),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(141),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [50] = {
    [aux_sym__repository_start_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(244),
    [aux_sym_onbuild_token1] = ACTIONS(246),
    [aux_sym_env_token1] = ACTIONS(246),
    [aux_sym_label_token1] = ACTIONS(246),
    [aux_sym_healthcheck_token1] = ACTIONS(246),
    [aux_sym_arg_token1] = ACTIONS(246),
    [aux_sym_add_token1] = ACTIONS(246),
    [aux_sym_copy_token1] = ACTIONS(246),
    [aux_sym_stopsignal_token1] = ACTIONS(246),
    [aux_sym_shell_token1] = ACTIONS(246),
    [aux_sym_volume_token1] = ACTIONS(246),
    [aux_sym_workdir_token1] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(246),
    [aux_sym_cmd_token1] = ACTIONS(246),
    [aux_sym_entrypoint_token1] = ACTIONS(246),
    [aux_sym_run_token1] = ACTIONS(246),
    [aux_sym_maintainer_token1] = ACTIONS(246),
    [aux_sym_expose_token1] = ACTIONS(246),
    [aux_sym_from_token1] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(246),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(248),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [51] = {
    [aux_sym__repository_start_repeat3] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_onbuild_token1] = ACTIONS(252),
    [aux_sym_env_token1] = ACTIONS(252),
    [aux_sym_label_token1] = ACTIONS(252),
    [aux_sym_healthcheck_token1] = ACTIONS(252),
    [aux_sym_arg_token1] = ACTIONS(252),
    [aux_sym_add_token1] = ACTIONS(252),
    [aux_sym_copy_token1] = ACTIONS(252),
    [aux_sym_stopsignal_token1] = ACTIONS(252),
    [aux_sym_shell_token1] = ACTIONS(252),
    [aux_sym_volume_token1] = ACTIONS(252),
    [aux_sym_workdir_token1] = ACTIONS(252),
    [aux_sym_user_token1] = ACTIONS(252),
    [aux_sym_cmd_token1] = ACTIONS(252),
    [aux_sym_entrypoint_token1] = ACTIONS(252),
    [aux_sym_run_token1] = ACTIONS(252),
    [aux_sym_maintainer_token1] = ACTIONS(252),
    [aux_sym_expose_token1] = ACTIONS(252),
    [aux_sym_from_token1] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(252),
    [aux_sym__repository_start_token3] = ACTIONS(254),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [52] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_onbuild_token1] = ACTIONS(240),
    [aux_sym_env_token1] = ACTIONS(240),
    [aux_sym_label_token1] = ACTIONS(240),
    [aux_sym_healthcheck_token1] = ACTIONS(240),
    [aux_sym_arg_token1] = ACTIONS(240),
    [aux_sym_add_token1] = ACTIONS(240),
    [aux_sym_copy_token1] = ACTIONS(240),
    [aux_sym_stopsignal_token1] = ACTIONS(240),
    [aux_sym_shell_token1] = ACTIONS(240),
    [aux_sym_volume_token1] = ACTIONS(240),
    [aux_sym_workdir_token1] = ACTIONS(240),
    [aux_sym_user_token1] = ACTIONS(240),
    [aux_sym_cmd_token1] = ACTIONS(240),
    [aux_sym_entrypoint_token1] = ACTIONS(240),
    [aux_sym_run_token1] = ACTIONS(240),
    [aux_sym_maintainer_token1] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(240),
    [aux_sym_from_token1] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym__repository_start_token3] = ACTIONS(242),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [53] = {
    [aux_sym__repository_start_repeat2] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_onbuild_token1] = ACTIONS(252),
    [aux_sym_env_token1] = ACTIONS(252),
    [aux_sym_label_token1] = ACTIONS(252),
    [aux_sym_healthcheck_token1] = ACTIONS(252),
    [aux_sym_arg_token1] = ACTIONS(252),
    [aux_sym_add_token1] = ACTIONS(252),
    [aux_sym_copy_token1] = ACTIONS(252),
    [aux_sym_stopsignal_token1] = ACTIONS(252),
    [aux_sym_shell_token1] = ACTIONS(252),
    [aux_sym_volume_token1] = ACTIONS(252),
    [aux_sym_workdir_token1] = ACTIONS(252),
    [aux_sym_user_token1] = ACTIONS(252),
    [aux_sym_cmd_token1] = ACTIONS(252),
    [aux_sym_entrypoint_token1] = ACTIONS(252),
    [aux_sym_run_token1] = ACTIONS(252),
    [aux_sym_maintainer_token1] = ACTIONS(252),
    [aux_sym_expose_token1] = ACTIONS(252),
    [aux_sym_from_token1] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(252),
    [aux_sym__repository_start_token3] = ACTIONS(254),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [54] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_onbuild_token1] = ACTIONS(252),
    [aux_sym_env_token1] = ACTIONS(252),
    [aux_sym_label_token1] = ACTIONS(252),
    [aux_sym_healthcheck_token1] = ACTIONS(252),
    [aux_sym_arg_token1] = ACTIONS(252),
    [aux_sym_add_token1] = ACTIONS(252),
    [aux_sym_copy_token1] = ACTIONS(252),
    [aux_sym_stopsignal_token1] = ACTIONS(252),
    [aux_sym_shell_token1] = ACTIONS(252),
    [aux_sym_volume_token1] = ACTIONS(252),
    [aux_sym_workdir_token1] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(252),
    [aux_sym_cmd_token1] = ACTIONS(252),
    [aux_sym_entrypoint_token1] = ACTIONS(252),
    [aux_sym_run_token1] = ACTIONS(252),
    [aux_sym_maintainer_token1] = ACTIONS(252),
    [aux_sym_expose_token1] = ACTIONS(252),
    [aux_sym_from_token1] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(252),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(254),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_onbuild_token1] = ACTIONS(186),
    [aux_sym_env_token1] = ACTIONS(186),
    [aux_sym_label_token1] = ACTIONS(186),
    [aux_sym_healthcheck_token1] = ACTIONS(186),
    [aux_sym_arg_token1] = ACTIONS(186),
    [aux_sym_add_token1] = ACTIONS(186),
    [aux_sym_copy_token1] = ACTIONS(186),
    [aux_sym_stopsignal_token1] = ACTIONS(186),
    [aux_sym_shell_token1] = ACTIONS(186),
    [aux_sym_volume_token1] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [aux_sym_workdir_token1] = ACTIONS(186),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [aux_sym_user_token1] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(186),
    [aux_sym_user_id_token1] = ACTIONS(186),
    [aux_sym_cmd_token1] = ACTIONS(186),
    [aux_sym_entrypoint_token1] = ACTIONS(186),
    [aux_sym_run_token1] = ACTIONS(186),
    [aux_sym_maintainer_token1] = ACTIONS(186),
    [aux_sym_expose_token1] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [aux_sym_from_token1] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_onbuild_token1] = ACTIONS(188),
    [aux_sym_env_token1] = ACTIONS(188),
    [aux_sym_label_token1] = ACTIONS(188),
    [aux_sym_healthcheck_token1] = ACTIONS(188),
    [aux_sym_arg_token1] = ACTIONS(188),
    [aux_sym_add_token1] = ACTIONS(188),
    [aux_sym_copy_token1] = ACTIONS(188),
    [aux_sym_stopsignal_token1] = ACTIONS(188),
    [aux_sym_shell_token1] = ACTIONS(188),
    [aux_sym_volume_token1] = ACTIONS(188),
    [aux_sym_workdir_token1] = ACTIONS(188),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [aux_sym_user_token1] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(186),
    [aux_sym_cmd_token1] = ACTIONS(188),
    [aux_sym_entrypoint_token1] = ACTIONS(188),
    [aux_sym_run_token1] = ACTIONS(188),
    [aux_sym_maintainer_token1] = ACTIONS(188),
    [aux_sym_expose_token1] = ACTIONS(188),
    [aux_sym_from_token1] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(186),
    [aux_sym_from_token2] = ACTIONS(188),
    [aux_sym__repository_start_token2] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(188),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [57] = {
    [aux_sym__repository_start_repeat4] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_onbuild_token1] = ACTIONS(252),
    [aux_sym_env_token1] = ACTIONS(252),
    [aux_sym_label_token1] = ACTIONS(252),
    [aux_sym_healthcheck_token1] = ACTIONS(252),
    [aux_sym_arg_token1] = ACTIONS(252),
    [aux_sym_add_token1] = ACTIONS(252),
    [aux_sym_copy_token1] = ACTIONS(252),
    [aux_sym_stopsignal_token1] = ACTIONS(252),
    [aux_sym_shell_token1] = ACTIONS(252),
    [aux_sym_volume_token1] = ACTIONS(252),
    [aux_sym_workdir_token1] = ACTIONS(252),
    [aux_sym_user_token1] = ACTIONS(252),
    [aux_sym_cmd_token1] = ACTIONS(252),
    [aux_sym_entrypoint_token1] = ACTIONS(252),
    [aux_sym_run_token1] = ACTIONS(252),
    [aux_sym_maintainer_token1] = ACTIONS(252),
    [aux_sym_expose_token1] = ACTIONS(252),
    [aux_sym_from_token1] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(252),
    [aux_sym__repository_start_token3] = ACTIONS(254),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(146),
    [aux_sym_env_token1] = ACTIONS(146),
    [aux_sym_label_token1] = ACTIONS(146),
    [aux_sym_healthcheck_token1] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(146),
    [aux_sym_add_token1] = ACTIONS(146),
    [aux_sym_copy_token1] = ACTIONS(146),
    [aux_sym_stopsignal_token1] = ACTIONS(146),
    [aux_sym_shell_token1] = ACTIONS(146),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym_user_token1] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(148),
    [aux_sym_cmd_token1] = ACTIONS(146),
    [aux_sym_entrypoint_token1] = ACTIONS(146),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_maintainer_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(146),
    [aux_sym__repository_start_token16] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym_onbuild_token1] = ACTIONS(258),
    [aux_sym_env_token1] = ACTIONS(258),
    [aux_sym_label_token1] = ACTIONS(258),
    [aux_sym_healthcheck_token1] = ACTIONS(258),
    [aux_sym_arg_token1] = ACTIONS(258),
    [aux_sym_add_token1] = ACTIONS(258),
    [aux_sym_copy_token1] = ACTIONS(258),
    [aux_sym_stopsignal_token1] = ACTIONS(258),
    [aux_sym_shell_token1] = ACTIONS(258),
    [aux_sym_volume_token1] = ACTIONS(258),
    [aux_sym_workdir_token1] = ACTIONS(258),
    [aux_sym_user_token1] = ACTIONS(258),
    [aux_sym_cmd_token1] = ACTIONS(258),
    [aux_sym_entrypoint_token1] = ACTIONS(258),
    [aux_sym_run_token1] = ACTIONS(258),
    [aux_sym_maintainer_token1] = ACTIONS(258),
    [aux_sym_expose_token1] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [aux_sym_from_token2] = ACTIONS(258),
    [aux_sym__repository_start_token3] = ACTIONS(260),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym_onbuild_token1] = ACTIONS(262),
    [aux_sym_env_token1] = ACTIONS(262),
    [aux_sym_label_token1] = ACTIONS(262),
    [aux_sym_healthcheck_token1] = ACTIONS(262),
    [aux_sym_arg_token1] = ACTIONS(262),
    [aux_sym_add_token1] = ACTIONS(262),
    [aux_sym_copy_token1] = ACTIONS(262),
    [aux_sym_stopsignal_token1] = ACTIONS(262),
    [aux_sym_shell_token1] = ACTIONS(262),
    [aux_sym_volume_token1] = ACTIONS(262),
    [aux_sym_workdir_token1] = ACTIONS(262),
    [aux_sym_user_token1] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(264),
    [aux_sym_cmd_token1] = ACTIONS(262),
    [aux_sym_entrypoint_token1] = ACTIONS(262),
    [aux_sym_run_token1] = ACTIONS(262),
    [aux_sym_maintainer_token1] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(266),
    [aux_sym_from_token1] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(262),
    [aux_sym_from_token2] = ACTIONS(262),
    [aux_sym__repository_start_token16] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [aux_sym_onbuild_token1] = ACTIONS(268),
    [aux_sym_env_token1] = ACTIONS(268),
    [aux_sym_label_token1] = ACTIONS(268),
    [aux_sym_healthcheck_token1] = ACTIONS(268),
    [aux_sym_arg_token1] = ACTIONS(268),
    [aux_sym_add_token1] = ACTIONS(268),
    [aux_sym_copy_token1] = ACTIONS(268),
    [aux_sym_stopsignal_token1] = ACTIONS(268),
    [aux_sym_shell_token1] = ACTIONS(268),
    [aux_sym_volume_token1] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [aux_sym_workdir_token1] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [aux_sym_user_token1] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(268),
    [aux_sym_user_id_token1] = ACTIONS(268),
    [aux_sym_cmd_token1] = ACTIONS(268),
    [aux_sym_entrypoint_token1] = ACTIONS(268),
    [aux_sym_run_token1] = ACTIONS(268),
    [aux_sym_maintainer_token1] = ACTIONS(268),
    [aux_sym_expose_token1] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [aux_sym_from_token1] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
    [aux_sym__repository_start_repeat4] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_onbuild_token1] = ACTIONS(272),
    [aux_sym_env_token1] = ACTIONS(272),
    [aux_sym_label_token1] = ACTIONS(272),
    [aux_sym_healthcheck_token1] = ACTIONS(272),
    [aux_sym_arg_token1] = ACTIONS(272),
    [aux_sym_add_token1] = ACTIONS(272),
    [aux_sym_copy_token1] = ACTIONS(272),
    [aux_sym_stopsignal_token1] = ACTIONS(272),
    [aux_sym_shell_token1] = ACTIONS(272),
    [aux_sym_volume_token1] = ACTIONS(272),
    [aux_sym_workdir_token1] = ACTIONS(272),
    [aux_sym_user_token1] = ACTIONS(272),
    [aux_sym_cmd_token1] = ACTIONS(272),
    [aux_sym_entrypoint_token1] = ACTIONS(272),
    [aux_sym_run_token1] = ACTIONS(272),
    [aux_sym_maintainer_token1] = ACTIONS(272),
    [aux_sym_expose_token1] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(272),
    [aux_sym_from_token2] = ACTIONS(272),
    [aux_sym__repository_start_token3] = ACTIONS(274),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [63] = {
    [aux_sym__repository_start_repeat3] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_onbuild_token1] = ACTIONS(272),
    [aux_sym_env_token1] = ACTIONS(272),
    [aux_sym_label_token1] = ACTIONS(272),
    [aux_sym_healthcheck_token1] = ACTIONS(272),
    [aux_sym_arg_token1] = ACTIONS(272),
    [aux_sym_add_token1] = ACTIONS(272),
    [aux_sym_copy_token1] = ACTIONS(272),
    [aux_sym_stopsignal_token1] = ACTIONS(272),
    [aux_sym_shell_token1] = ACTIONS(272),
    [aux_sym_volume_token1] = ACTIONS(272),
    [aux_sym_workdir_token1] = ACTIONS(272),
    [aux_sym_user_token1] = ACTIONS(272),
    [aux_sym_cmd_token1] = ACTIONS(272),
    [aux_sym_entrypoint_token1] = ACTIONS(272),
    [aux_sym_run_token1] = ACTIONS(272),
    [aux_sym_maintainer_token1] = ACTIONS(272),
    [aux_sym_expose_token1] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(272),
    [aux_sym_from_token2] = ACTIONS(272),
    [aux_sym__repository_start_token3] = ACTIONS(274),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [64] = {
    [aux_sym__repository_start_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_onbuild_token1] = ACTIONS(278),
    [aux_sym_env_token1] = ACTIONS(278),
    [aux_sym_label_token1] = ACTIONS(278),
    [aux_sym_healthcheck_token1] = ACTIONS(278),
    [aux_sym_arg_token1] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(278),
    [aux_sym_copy_token1] = ACTIONS(278),
    [aux_sym_stopsignal_token1] = ACTIONS(278),
    [aux_sym_shell_token1] = ACTIONS(278),
    [aux_sym_volume_token1] = ACTIONS(278),
    [aux_sym_workdir_token1] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(278),
    [aux_sym_cmd_token1] = ACTIONS(278),
    [aux_sym_entrypoint_token1] = ACTIONS(278),
    [aux_sym_run_token1] = ACTIONS(278),
    [aux_sym_maintainer_token1] = ACTIONS(278),
    [aux_sym_expose_token1] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(278),
    [aux_sym_from_token2] = ACTIONS(278),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(280),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [65] = {
    [aux_sym__repository_start_repeat2] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_onbuild_token1] = ACTIONS(272),
    [aux_sym_env_token1] = ACTIONS(272),
    [aux_sym_label_token1] = ACTIONS(272),
    [aux_sym_healthcheck_token1] = ACTIONS(272),
    [aux_sym_arg_token1] = ACTIONS(272),
    [aux_sym_add_token1] = ACTIONS(272),
    [aux_sym_copy_token1] = ACTIONS(272),
    [aux_sym_stopsignal_token1] = ACTIONS(272),
    [aux_sym_shell_token1] = ACTIONS(272),
    [aux_sym_volume_token1] = ACTIONS(272),
    [aux_sym_workdir_token1] = ACTIONS(272),
    [aux_sym_user_token1] = ACTIONS(272),
    [aux_sym_cmd_token1] = ACTIONS(272),
    [aux_sym_entrypoint_token1] = ACTIONS(272),
    [aux_sym_run_token1] = ACTIONS(272),
    [aux_sym_maintainer_token1] = ACTIONS(272),
    [aux_sym_expose_token1] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(272),
    [aux_sym_from_token2] = ACTIONS(272),
    [aux_sym__repository_start_token3] = ACTIONS(274),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_onbuild_token1] = ACTIONS(212),
    [aux_sym_env_token1] = ACTIONS(212),
    [aux_sym_label_token1] = ACTIONS(212),
    [aux_sym_healthcheck_token1] = ACTIONS(212),
    [aux_sym_arg_token1] = ACTIONS(212),
    [aux_sym_add_token1] = ACTIONS(212),
    [aux_sym_copy_token1] = ACTIONS(212),
    [aux_sym_stopsignal_token1] = ACTIONS(212),
    [aux_sym_shell_token1] = ACTIONS(212),
    [aux_sym_volume_token1] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_workdir_token1] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [aux_sym_user_token1] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [aux_sym_user_id_token1] = ACTIONS(212),
    [aux_sym_cmd_token1] = ACTIONS(212),
    [aux_sym_entrypoint_token1] = ACTIONS(212),
    [aux_sym_run_token1] = ACTIONS(212),
    [aux_sym_maintainer_token1] = ACTIONS(212),
    [aux_sym_expose_token1] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [aux_sym_from_token1] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(129),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [aux_sym_onbuild_token1] = ACTIONS(282),
    [aux_sym_env_token1] = ACTIONS(282),
    [aux_sym_label_token1] = ACTIONS(282),
    [aux_sym_healthcheck_token1] = ACTIONS(282),
    [aux_sym_arg_token1] = ACTIONS(282),
    [aux_sym_add_token1] = ACTIONS(282),
    [aux_sym_copy_token1] = ACTIONS(282),
    [aux_sym_stopsignal_token1] = ACTIONS(282),
    [aux_sym_shell_token1] = ACTIONS(282),
    [aux_sym_volume_token1] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [aux_sym_workdir_token1] = ACTIONS(282),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [aux_sym_user_token1] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(282),
    [aux_sym_user_id_token1] = ACTIONS(282),
    [aux_sym_cmd_token1] = ACTIONS(282),
    [aux_sym_entrypoint_token1] = ACTIONS(282),
    [aux_sym_run_token1] = ACTIONS(282),
    [aux_sym_maintainer_token1] = ACTIONS(282),
    [aux_sym_expose_token1] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(284),
    [aux_sym_from_token1] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(286),
    [aux_sym_env_token1] = ACTIONS(286),
    [aux_sym_label_token1] = ACTIONS(286),
    [aux_sym_healthcheck_token1] = ACTIONS(286),
    [aux_sym_arg_token1] = ACTIONS(286),
    [aux_sym_add_token1] = ACTIONS(286),
    [aux_sym_copy_token1] = ACTIONS(286),
    [aux_sym_stopsignal_token1] = ACTIONS(286),
    [aux_sym_shell_token1] = ACTIONS(286),
    [aux_sym_volume_token1] = ACTIONS(286),
    [aux_sym_workdir_token1] = ACTIONS(286),
    [aux_sym_user_token1] = ACTIONS(286),
    [anon_sym_COLON] = ACTIONS(288),
    [aux_sym_cmd_token1] = ACTIONS(286),
    [aux_sym_entrypoint_token1] = ACTIONS(286),
    [aux_sym_run_token1] = ACTIONS(286),
    [aux_sym_maintainer_token1] = ACTIONS(286),
    [aux_sym_expose_token1] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(290),
    [aux_sym_from_token1] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(286),
    [aux_sym_from_token2] = ACTIONS(286),
    [aux_sym__repository_start_token16] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym_onbuild_token1] = ACTIONS(292),
    [aux_sym_env_token1] = ACTIONS(292),
    [aux_sym_label_token1] = ACTIONS(292),
    [aux_sym_healthcheck_token1] = ACTIONS(292),
    [aux_sym_arg_token1] = ACTIONS(292),
    [aux_sym_add_token1] = ACTIONS(292),
    [aux_sym_copy_token1] = ACTIONS(292),
    [aux_sym_stopsignal_token1] = ACTIONS(292),
    [aux_sym_shell_token1] = ACTIONS(292),
    [aux_sym_volume_token1] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [aux_sym_workdir_token1] = ACTIONS(292),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [aux_sym_user_token1] = ACTIONS(292),
    [anon_sym_COLON] = ACTIONS(292),
    [aux_sym_user_id_token1] = ACTIONS(292),
    [aux_sym_cmd_token1] = ACTIONS(292),
    [aux_sym_entrypoint_token1] = ACTIONS(292),
    [aux_sym_run_token1] = ACTIONS(292),
    [aux_sym_maintainer_token1] = ACTIONS(292),
    [aux_sym_expose_token1] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [aux_sym_from_token1] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_onbuild_token1] = ACTIONS(272),
    [aux_sym_env_token1] = ACTIONS(272),
    [aux_sym_label_token1] = ACTIONS(272),
    [aux_sym_healthcheck_token1] = ACTIONS(272),
    [aux_sym_arg_token1] = ACTIONS(272),
    [aux_sym_add_token1] = ACTIONS(272),
    [aux_sym_copy_token1] = ACTIONS(272),
    [aux_sym_stopsignal_token1] = ACTIONS(272),
    [aux_sym_shell_token1] = ACTIONS(272),
    [aux_sym_volume_token1] = ACTIONS(272),
    [aux_sym_workdir_token1] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(272),
    [aux_sym_cmd_token1] = ACTIONS(272),
    [aux_sym_entrypoint_token1] = ACTIONS(272),
    [aux_sym_run_token1] = ACTIONS(272),
    [aux_sym_maintainer_token1] = ACTIONS(272),
    [aux_sym_expose_token1] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(272),
    [aux_sym_from_token2] = ACTIONS(272),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(274),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [aux_sym_onbuild_token1] = ACTIONS(294),
    [aux_sym_env_token1] = ACTIONS(294),
    [aux_sym_label_token1] = ACTIONS(294),
    [aux_sym_healthcheck_token1] = ACTIONS(294),
    [aux_sym_arg_token1] = ACTIONS(294),
    [aux_sym_add_token1] = ACTIONS(294),
    [aux_sym_copy_token1] = ACTIONS(294),
    [aux_sym_stopsignal_token1] = ACTIONS(294),
    [aux_sym_shell_token1] = ACTIONS(294),
    [aux_sym_volume_token1] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [aux_sym_workdir_token1] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [aux_sym_user_token1] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [aux_sym_user_id_token1] = ACTIONS(294),
    [aux_sym_cmd_token1] = ACTIONS(294),
    [aux_sym_entrypoint_token1] = ACTIONS(294),
    [aux_sym_run_token1] = ACTIONS(294),
    [aux_sym_maintainer_token1] = ACTIONS(294),
    [aux_sym_expose_token1] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [aux_sym_from_token1] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym_onbuild_token1] = ACTIONS(258),
    [aux_sym_env_token1] = ACTIONS(258),
    [aux_sym_label_token1] = ACTIONS(258),
    [aux_sym_healthcheck_token1] = ACTIONS(258),
    [aux_sym_arg_token1] = ACTIONS(258),
    [aux_sym_add_token1] = ACTIONS(258),
    [aux_sym_copy_token1] = ACTIONS(258),
    [aux_sym_stopsignal_token1] = ACTIONS(258),
    [aux_sym_shell_token1] = ACTIONS(258),
    [aux_sym_volume_token1] = ACTIONS(258),
    [aux_sym_workdir_token1] = ACTIONS(258),
    [aux_sym_user_token1] = ACTIONS(258),
    [aux_sym_cmd_token1] = ACTIONS(258),
    [aux_sym_entrypoint_token1] = ACTIONS(258),
    [aux_sym_run_token1] = ACTIONS(258),
    [aux_sym_maintainer_token1] = ACTIONS(258),
    [aux_sym_expose_token1] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [aux_sym_from_token2] = ACTIONS(258),
    [aux_sym__repository_start_token3] = ACTIONS(260),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [74] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym_onbuild_token1] = ACTIONS(258),
    [aux_sym_env_token1] = ACTIONS(258),
    [aux_sym_label_token1] = ACTIONS(258),
    [aux_sym_healthcheck_token1] = ACTIONS(258),
    [aux_sym_arg_token1] = ACTIONS(258),
    [aux_sym_add_token1] = ACTIONS(258),
    [aux_sym_copy_token1] = ACTIONS(258),
    [aux_sym_stopsignal_token1] = ACTIONS(258),
    [aux_sym_shell_token1] = ACTIONS(258),
    [aux_sym_volume_token1] = ACTIONS(258),
    [aux_sym_workdir_token1] = ACTIONS(258),
    [aux_sym_user_token1] = ACTIONS(258),
    [aux_sym_cmd_token1] = ACTIONS(258),
    [aux_sym_entrypoint_token1] = ACTIONS(258),
    [aux_sym_run_token1] = ACTIONS(258),
    [aux_sym_maintainer_token1] = ACTIONS(258),
    [aux_sym_expose_token1] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [aux_sym_from_token2] = ACTIONS(258),
    [aux_sym__repository_start_token3] = ACTIONS(260),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [75] = {
    [aux_sym__repository_start_repeat1] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym_onbuild_token1] = ACTIONS(298),
    [aux_sym_env_token1] = ACTIONS(298),
    [aux_sym_label_token1] = ACTIONS(298),
    [aux_sym_healthcheck_token1] = ACTIONS(298),
    [aux_sym_arg_token1] = ACTIONS(298),
    [aux_sym_add_token1] = ACTIONS(298),
    [aux_sym_copy_token1] = ACTIONS(298),
    [aux_sym_stopsignal_token1] = ACTIONS(298),
    [aux_sym_shell_token1] = ACTIONS(298),
    [aux_sym_volume_token1] = ACTIONS(298),
    [aux_sym_workdir_token1] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(298),
    [aux_sym_cmd_token1] = ACTIONS(298),
    [aux_sym_entrypoint_token1] = ACTIONS(298),
    [aux_sym_run_token1] = ACTIONS(298),
    [aux_sym_maintainer_token1] = ACTIONS(298),
    [aux_sym_expose_token1] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(300),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [aux_sym_onbuild_token1] = ACTIONS(302),
    [aux_sym_env_token1] = ACTIONS(302),
    [aux_sym_label_token1] = ACTIONS(302),
    [aux_sym_healthcheck_token1] = ACTIONS(302),
    [aux_sym_arg_token1] = ACTIONS(302),
    [aux_sym_add_token1] = ACTIONS(302),
    [aux_sym_copy_token1] = ACTIONS(302),
    [aux_sym_stopsignal_token1] = ACTIONS(302),
    [aux_sym_shell_token1] = ACTIONS(302),
    [aux_sym_volume_token1] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [aux_sym_workdir_token1] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [aux_sym_user_token1] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [aux_sym_user_id_token1] = ACTIONS(302),
    [aux_sym_cmd_token1] = ACTIONS(302),
    [aux_sym_entrypoint_token1] = ACTIONS(302),
    [aux_sym_run_token1] = ACTIONS(302),
    [aux_sym_maintainer_token1] = ACTIONS(302),
    [aux_sym_expose_token1] = ACTIONS(302),
    [aux_sym_from_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_onbuild_token1] = ACTIONS(306),
    [aux_sym_env_token1] = ACTIONS(306),
    [aux_sym_label_token1] = ACTIONS(306),
    [aux_sym_healthcheck_token1] = ACTIONS(306),
    [aux_sym_arg_token1] = ACTIONS(306),
    [aux_sym_add_token1] = ACTIONS(306),
    [aux_sym_copy_token1] = ACTIONS(306),
    [aux_sym_stopsignal_token1] = ACTIONS(306),
    [aux_sym_shell_token1] = ACTIONS(306),
    [aux_sym_volume_token1] = ACTIONS(306),
    [aux_sym_workdir_token1] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(306),
    [aux_sym_cmd_token1] = ACTIONS(306),
    [aux_sym_entrypoint_token1] = ACTIONS(306),
    [aux_sym_run_token1] = ACTIONS(306),
    [aux_sym_maintainer_token1] = ACTIONS(306),
    [aux_sym_expose_token1] = ACTIONS(306),
    [aux_sym_from_token1] = ACTIONS(306),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(308),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [78] = {
    [aux_sym__repository_start_repeat4] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_onbuild_token1] = ACTIONS(306),
    [aux_sym_env_token1] = ACTIONS(306),
    [aux_sym_label_token1] = ACTIONS(306),
    [aux_sym_healthcheck_token1] = ACTIONS(306),
    [aux_sym_arg_token1] = ACTIONS(306),
    [aux_sym_add_token1] = ACTIONS(306),
    [aux_sym_copy_token1] = ACTIONS(306),
    [aux_sym_stopsignal_token1] = ACTIONS(306),
    [aux_sym_shell_token1] = ACTIONS(306),
    [aux_sym_volume_token1] = ACTIONS(306),
    [aux_sym_workdir_token1] = ACTIONS(306),
    [aux_sym_user_token1] = ACTIONS(306),
    [aux_sym_cmd_token1] = ACTIONS(306),
    [aux_sym_entrypoint_token1] = ACTIONS(306),
    [aux_sym_run_token1] = ACTIONS(306),
    [aux_sym_maintainer_token1] = ACTIONS(306),
    [aux_sym_expose_token1] = ACTIONS(306),
    [aux_sym_from_token1] = ACTIONS(306),
    [aux_sym__repository_start_token3] = ACTIONS(308),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [79] = {
    [aux_sym_workdir_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(310),
    [aux_sym_onbuild_token1] = ACTIONS(312),
    [aux_sym_env_token1] = ACTIONS(312),
    [aux_sym_label_token1] = ACTIONS(312),
    [aux_sym_healthcheck_token1] = ACTIONS(312),
    [aux_sym_arg_token1] = ACTIONS(312),
    [aux_sym_add_token1] = ACTIONS(312),
    [aux_sym_copy_token1] = ACTIONS(312),
    [aux_sym_stopsignal_token1] = ACTIONS(312),
    [aux_sym_shell_token1] = ACTIONS(312),
    [aux_sym_volume_token1] = ACTIONS(312),
    [aux_sym_workdir_token1] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [aux_sym_workdir_token3] = ACTIONS(314),
    [aux_sym_workdir_token4] = ACTIONS(316),
    [aux_sym_user_token1] = ACTIONS(312),
    [aux_sym_cmd_token1] = ACTIONS(312),
    [aux_sym_entrypoint_token1] = ACTIONS(312),
    [aux_sym_run_token1] = ACTIONS(312),
    [aux_sym_maintainer_token1] = ACTIONS(312),
    [aux_sym_expose_token1] = ACTIONS(312),
    [aux_sym_from_token1] = ACTIONS(312),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [80] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(318),
    [aux_sym_onbuild_token1] = ACTIONS(320),
    [aux_sym_env_token1] = ACTIONS(320),
    [aux_sym_label_token1] = ACTIONS(320),
    [aux_sym_healthcheck_token1] = ACTIONS(320),
    [aux_sym_arg_token1] = ACTIONS(320),
    [aux_sym_add_token1] = ACTIONS(320),
    [aux_sym_copy_token1] = ACTIONS(320),
    [aux_sym_stopsignal_token1] = ACTIONS(320),
    [aux_sym_shell_token1] = ACTIONS(320),
    [aux_sym_volume_token1] = ACTIONS(320),
    [aux_sym_path_token1] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(320),
    [aux_sym_user_token1] = ACTIONS(320),
    [aux_sym_cmd_token1] = ACTIONS(320),
    [aux_sym_entrypoint_token1] = ACTIONS(320),
    [aux_sym_run_token1] = ACTIONS(320),
    [aux_sym_maintainer_token1] = ACTIONS(320),
    [aux_sym_expose_token1] = ACTIONS(320),
    [aux_sym_from_token1] = ACTIONS(320),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [81] = {
    [aux_sym__repository_start_repeat3] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_onbuild_token1] = ACTIONS(306),
    [aux_sym_env_token1] = ACTIONS(306),
    [aux_sym_label_token1] = ACTIONS(306),
    [aux_sym_healthcheck_token1] = ACTIONS(306),
    [aux_sym_arg_token1] = ACTIONS(306),
    [aux_sym_add_token1] = ACTIONS(306),
    [aux_sym_copy_token1] = ACTIONS(306),
    [aux_sym_stopsignal_token1] = ACTIONS(306),
    [aux_sym_shell_token1] = ACTIONS(306),
    [aux_sym_volume_token1] = ACTIONS(306),
    [aux_sym_workdir_token1] = ACTIONS(306),
    [aux_sym_user_token1] = ACTIONS(306),
    [aux_sym_cmd_token1] = ACTIONS(306),
    [aux_sym_entrypoint_token1] = ACTIONS(306),
    [aux_sym_run_token1] = ACTIONS(306),
    [aux_sym_maintainer_token1] = ACTIONS(306),
    [aux_sym_expose_token1] = ACTIONS(306),
    [aux_sym_from_token1] = ACTIONS(306),
    [aux_sym__repository_start_token3] = ACTIONS(308),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [82] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(328),
    [aux_sym_onbuild_token1] = ACTIONS(330),
    [aux_sym_env_token1] = ACTIONS(330),
    [aux_sym_label_token1] = ACTIONS(330),
    [aux_sym_healthcheck_token1] = ACTIONS(330),
    [aux_sym_arg_token1] = ACTIONS(330),
    [aux_sym_add_token1] = ACTIONS(330),
    [aux_sym_copy_token1] = ACTIONS(330),
    [aux_sym_stopsignal_token1] = ACTIONS(330),
    [aux_sym_shell_token1] = ACTIONS(330),
    [aux_sym_volume_token1] = ACTIONS(330),
    [aux_sym_workdir_token1] = ACTIONS(330),
    [aux_sym_user_token1] = ACTIONS(330),
    [aux_sym_cmd_token1] = ACTIONS(330),
    [aux_sym_entrypoint_token1] = ACTIONS(330),
    [aux_sym_run_token1] = ACTIONS(330),
    [aux_sym_maintainer_token1] = ACTIONS(330),
    [aux_sym_expose_token1] = ACTIONS(330),
    [aux_sym_from_token1] = ACTIONS(330),
    [aux_sym__repository_start_token3] = ACTIONS(332),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [83] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(334),
    [aux_sym_onbuild_token1] = ACTIONS(336),
    [aux_sym_env_token1] = ACTIONS(336),
    [aux_sym_label_token1] = ACTIONS(336),
    [aux_sym_healthcheck_token1] = ACTIONS(336),
    [aux_sym_arg_token1] = ACTIONS(336),
    [aux_sym_add_token1] = ACTIONS(336),
    [aux_sym_copy_token1] = ACTIONS(336),
    [aux_sym_stopsignal_token1] = ACTIONS(336),
    [aux_sym_shell_token1] = ACTIONS(336),
    [aux_sym_volume_token1] = ACTIONS(336),
    [aux_sym_path_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(336),
    [aux_sym_user_token1] = ACTIONS(336),
    [aux_sym_cmd_token1] = ACTIONS(336),
    [aux_sym_entrypoint_token1] = ACTIONS(336),
    [aux_sym_run_token1] = ACTIONS(336),
    [aux_sym_maintainer_token1] = ACTIONS(336),
    [aux_sym_expose_token1] = ACTIONS(336),
    [aux_sym_from_token1] = ACTIONS(336),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [84] = {
    [aux_sym__repository_start_repeat2] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_onbuild_token1] = ACTIONS(306),
    [aux_sym_env_token1] = ACTIONS(306),
    [aux_sym_label_token1] = ACTIONS(306),
    [aux_sym_healthcheck_token1] = ACTIONS(306),
    [aux_sym_arg_token1] = ACTIONS(306),
    [aux_sym_add_token1] = ACTIONS(306),
    [aux_sym_copy_token1] = ACTIONS(306),
    [aux_sym_stopsignal_token1] = ACTIONS(306),
    [aux_sym_shell_token1] = ACTIONS(306),
    [aux_sym_volume_token1] = ACTIONS(306),
    [aux_sym_workdir_token1] = ACTIONS(306),
    [aux_sym_user_token1] = ACTIONS(306),
    [aux_sym_cmd_token1] = ACTIONS(306),
    [aux_sym_entrypoint_token1] = ACTIONS(306),
    [aux_sym_run_token1] = ACTIONS(306),
    [aux_sym_maintainer_token1] = ACTIONS(306),
    [aux_sym_expose_token1] = ACTIONS(306),
    [aux_sym_from_token1] = ACTIONS(306),
    [aux_sym__repository_start_token3] = ACTIONS(308),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [aux_sym_onbuild_token1] = ACTIONS(342),
    [aux_sym_env_token1] = ACTIONS(342),
    [aux_sym_label_token1] = ACTIONS(342),
    [aux_sym_healthcheck_token1] = ACTIONS(342),
    [aux_sym_arg_token1] = ACTIONS(342),
    [aux_sym_add_token1] = ACTIONS(342),
    [aux_sym_copy_token1] = ACTIONS(342),
    [aux_sym_stopsignal_token1] = ACTIONS(342),
    [aux_sym_shell_token1] = ACTIONS(342),
    [aux_sym_volume_token1] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [aux_sym_workdir_token1] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [aux_sym_user_token1] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(342),
    [aux_sym_user_id_token1] = ACTIONS(342),
    [aux_sym_cmd_token1] = ACTIONS(342),
    [aux_sym_entrypoint_token1] = ACTIONS(342),
    [aux_sym_run_token1] = ACTIONS(342),
    [aux_sym_maintainer_token1] = ACTIONS(342),
    [aux_sym_expose_token1] = ACTIONS(342),
    [aux_sym_from_token1] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [86] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(344),
    [aux_sym_onbuild_token1] = ACTIONS(346),
    [aux_sym_env_token1] = ACTIONS(346),
    [aux_sym_label_token1] = ACTIONS(346),
    [aux_sym_healthcheck_token1] = ACTIONS(346),
    [aux_sym_arg_token1] = ACTIONS(346),
    [aux_sym_add_token1] = ACTIONS(346),
    [aux_sym_copy_token1] = ACTIONS(346),
    [aux_sym_stopsignal_token1] = ACTIONS(346),
    [aux_sym_shell_token1] = ACTIONS(346),
    [aux_sym_volume_token1] = ACTIONS(346),
    [aux_sym_path_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(346),
    [aux_sym_user_token1] = ACTIONS(346),
    [aux_sym_cmd_token1] = ACTIONS(346),
    [aux_sym_entrypoint_token1] = ACTIONS(346),
    [aux_sym_run_token1] = ACTIONS(346),
    [aux_sym_maintainer_token1] = ACTIONS(346),
    [aux_sym_expose_token1] = ACTIONS(346),
    [aux_sym_from_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [aux_sym_onbuild_token1] = ACTIONS(348),
    [aux_sym_env_token1] = ACTIONS(348),
    [aux_sym_label_token1] = ACTIONS(348),
    [aux_sym_healthcheck_token1] = ACTIONS(348),
    [aux_sym_arg_token1] = ACTIONS(348),
    [aux_sym_add_token1] = ACTIONS(348),
    [aux_sym_copy_token1] = ACTIONS(348),
    [aux_sym_stopsignal_token1] = ACTIONS(348),
    [aux_sym_shell_token1] = ACTIONS(348),
    [aux_sym_volume_token1] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [aux_sym_workdir_token1] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [aux_sym_user_token1] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(350),
    [aux_sym_user_id_token1] = ACTIONS(348),
    [aux_sym_cmd_token1] = ACTIONS(348),
    [aux_sym_entrypoint_token1] = ACTIONS(348),
    [aux_sym_run_token1] = ACTIONS(348),
    [aux_sym_maintainer_token1] = ACTIONS(348),
    [aux_sym_expose_token1] = ACTIONS(348),
    [aux_sym_from_token1] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [88] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(352),
    [aux_sym_onbuild_token1] = ACTIONS(354),
    [aux_sym_env_token1] = ACTIONS(354),
    [aux_sym_label_token1] = ACTIONS(354),
    [aux_sym_healthcheck_token1] = ACTIONS(354),
    [aux_sym_arg_token1] = ACTIONS(354),
    [aux_sym_add_token1] = ACTIONS(354),
    [aux_sym_copy_token1] = ACTIONS(354),
    [aux_sym_stopsignal_token1] = ACTIONS(354),
    [aux_sym_shell_token1] = ACTIONS(354),
    [aux_sym_volume_token1] = ACTIONS(354),
    [aux_sym_path_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(354),
    [aux_sym_user_token1] = ACTIONS(354),
    [aux_sym_cmd_token1] = ACTIONS(354),
    [aux_sym_entrypoint_token1] = ACTIONS(354),
    [aux_sym_run_token1] = ACTIONS(354),
    [aux_sym_maintainer_token1] = ACTIONS(354),
    [aux_sym_expose_token1] = ACTIONS(354),
    [aux_sym_from_token1] = ACTIONS(354),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [89] = {
    [aux_sym_workdir_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(356),
    [aux_sym_onbuild_token1] = ACTIONS(358),
    [aux_sym_env_token1] = ACTIONS(358),
    [aux_sym_label_token1] = ACTIONS(358),
    [aux_sym_healthcheck_token1] = ACTIONS(358),
    [aux_sym_arg_token1] = ACTIONS(358),
    [aux_sym_add_token1] = ACTIONS(358),
    [aux_sym_copy_token1] = ACTIONS(358),
    [aux_sym_stopsignal_token1] = ACTIONS(358),
    [aux_sym_shell_token1] = ACTIONS(358),
    [aux_sym_volume_token1] = ACTIONS(358),
    [aux_sym_workdir_token1] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [aux_sym_workdir_token3] = ACTIONS(314),
    [aux_sym_workdir_token4] = ACTIONS(360),
    [aux_sym_user_token1] = ACTIONS(358),
    [aux_sym_cmd_token1] = ACTIONS(358),
    [aux_sym_entrypoint_token1] = ACTIONS(358),
    [aux_sym_run_token1] = ACTIONS(358),
    [aux_sym_maintainer_token1] = ACTIONS(358),
    [aux_sym_expose_token1] = ACTIONS(358),
    [aux_sym_from_token1] = ACTIONS(358),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [90] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(328),
    [aux_sym_onbuild_token1] = ACTIONS(330),
    [aux_sym_env_token1] = ACTIONS(330),
    [aux_sym_label_token1] = ACTIONS(330),
    [aux_sym_healthcheck_token1] = ACTIONS(330),
    [aux_sym_arg_token1] = ACTIONS(330),
    [aux_sym_add_token1] = ACTIONS(330),
    [aux_sym_copy_token1] = ACTIONS(330),
    [aux_sym_stopsignal_token1] = ACTIONS(330),
    [aux_sym_shell_token1] = ACTIONS(330),
    [aux_sym_volume_token1] = ACTIONS(330),
    [aux_sym_workdir_token1] = ACTIONS(330),
    [aux_sym_user_token1] = ACTIONS(330),
    [aux_sym_cmd_token1] = ACTIONS(330),
    [aux_sym_entrypoint_token1] = ACTIONS(330),
    [aux_sym_run_token1] = ACTIONS(330),
    [aux_sym_maintainer_token1] = ACTIONS(330),
    [aux_sym_expose_token1] = ACTIONS(330),
    [aux_sym_from_token1] = ACTIONS(330),
    [aux_sym__repository_start_token3] = ACTIONS(332),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [91] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(328),
    [aux_sym_onbuild_token1] = ACTIONS(330),
    [aux_sym_env_token1] = ACTIONS(330),
    [aux_sym_label_token1] = ACTIONS(330),
    [aux_sym_healthcheck_token1] = ACTIONS(330),
    [aux_sym_arg_token1] = ACTIONS(330),
    [aux_sym_add_token1] = ACTIONS(330),
    [aux_sym_copy_token1] = ACTIONS(330),
    [aux_sym_stopsignal_token1] = ACTIONS(330),
    [aux_sym_shell_token1] = ACTIONS(330),
    [aux_sym_volume_token1] = ACTIONS(330),
    [aux_sym_workdir_token1] = ACTIONS(330),
    [aux_sym_user_token1] = ACTIONS(330),
    [aux_sym_cmd_token1] = ACTIONS(330),
    [aux_sym_entrypoint_token1] = ACTIONS(330),
    [aux_sym_run_token1] = ACTIONS(330),
    [aux_sym_maintainer_token1] = ACTIONS(330),
    [aux_sym_expose_token1] = ACTIONS(330),
    [aux_sym_from_token1] = ACTIONS(330),
    [aux_sym__repository_start_token3] = ACTIONS(332),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [92] = {
    [aux_sym_workdir_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(362),
    [aux_sym_onbuild_token1] = ACTIONS(364),
    [aux_sym_env_token1] = ACTIONS(364),
    [aux_sym_label_token1] = ACTIONS(364),
    [aux_sym_healthcheck_token1] = ACTIONS(364),
    [aux_sym_arg_token1] = ACTIONS(364),
    [aux_sym_add_token1] = ACTIONS(364),
    [aux_sym_copy_token1] = ACTIONS(364),
    [aux_sym_stopsignal_token1] = ACTIONS(364),
    [aux_sym_shell_token1] = ACTIONS(364),
    [aux_sym_volume_token1] = ACTIONS(364),
    [aux_sym_workdir_token1] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(366),
    [aux_sym_workdir_token3] = ACTIONS(366),
    [aux_sym_workdir_token4] = ACTIONS(364),
    [aux_sym_user_token1] = ACTIONS(364),
    [aux_sym_cmd_token1] = ACTIONS(364),
    [aux_sym_entrypoint_token1] = ACTIONS(364),
    [aux_sym_run_token1] = ACTIONS(364),
    [aux_sym_maintainer_token1] = ACTIONS(364),
    [aux_sym_expose_token1] = ACTIONS(364),
    [aux_sym_from_token1] = ACTIONS(364),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym_onbuild_token1] = ACTIONS(200),
    [aux_sym_env_token1] = ACTIONS(200),
    [aux_sym_label_token1] = ACTIONS(200),
    [aux_sym_healthcheck_token1] = ACTIONS(200),
    [aux_sym_arg_token1] = ACTIONS(200),
    [aux_sym_add_token1] = ACTIONS(200),
    [aux_sym_copy_token1] = ACTIONS(200),
    [aux_sym_stopsignal_token1] = ACTIONS(200),
    [aux_sym_shell_token1] = ACTIONS(200),
    [aux_sym_volume_token1] = ACTIONS(200),
    [aux_sym_workdir_token1] = ACTIONS(200),
    [anon_sym_DOLLAR] = ACTIONS(200),
    [aux_sym_workdir_token3] = ACTIONS(200),
    [aux_sym_workdir_token4] = ACTIONS(200),
    [aux_sym_user_token1] = ACTIONS(200),
    [aux_sym_cmd_token1] = ACTIONS(200),
    [aux_sym_entrypoint_token1] = ACTIONS(200),
    [aux_sym_run_token1] = ACTIONS(200),
    [aux_sym_maintainer_token1] = ACTIONS(200),
    [aux_sym_expose_token1] = ACTIONS(200),
    [aux_sym_from_token1] = ACTIONS(200),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [aux_sym_onbuild_token1] = ACTIONS(364),
    [aux_sym_env_token1] = ACTIONS(364),
    [aux_sym_label_token1] = ACTIONS(364),
    [aux_sym_healthcheck_token1] = ACTIONS(364),
    [aux_sym_arg_token1] = ACTIONS(364),
    [aux_sym_add_token1] = ACTIONS(364),
    [aux_sym_copy_token1] = ACTIONS(364),
    [aux_sym_stopsignal_token1] = ACTIONS(364),
    [aux_sym_shell_token1] = ACTIONS(364),
    [aux_sym_volume_token1] = ACTIONS(364),
    [aux_sym_workdir_token1] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(364),
    [aux_sym_workdir_token3] = ACTIONS(364),
    [aux_sym_workdir_token4] = ACTIONS(364),
    [aux_sym_user_token1] = ACTIONS(364),
    [aux_sym_cmd_token1] = ACTIONS(364),
    [aux_sym_entrypoint_token1] = ACTIONS(364),
    [aux_sym_run_token1] = ACTIONS(364),
    [aux_sym_maintainer_token1] = ACTIONS(364),
    [aux_sym_expose_token1] = ACTIONS(364),
    [aux_sym_from_token1] = ACTIONS(364),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym_onbuild_token1] = ACTIONS(369),
    [aux_sym_env_token1] = ACTIONS(369),
    [aux_sym_label_token1] = ACTIONS(369),
    [aux_sym_healthcheck_token1] = ACTIONS(369),
    [aux_sym_arg_token1] = ACTIONS(369),
    [aux_sym_add_token1] = ACTIONS(369),
    [aux_sym_copy_token1] = ACTIONS(369),
    [aux_sym_stopsignal_token1] = ACTIONS(369),
    [aux_sym_shell_token1] = ACTIONS(369),
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym_user_token1] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(369),
    [aux_sym_entrypoint_token1] = ACTIONS(369),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_maintainer_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(373),
    [aux_sym_from_token2] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(286),
    [aux_sym_env_token1] = ACTIONS(286),
    [aux_sym_label_token1] = ACTIONS(286),
    [aux_sym_healthcheck_token1] = ACTIONS(286),
    [aux_sym_arg_token1] = ACTIONS(286),
    [aux_sym_add_token1] = ACTIONS(286),
    [aux_sym_copy_token1] = ACTIONS(286),
    [aux_sym_stopsignal_token1] = ACTIONS(286),
    [aux_sym_shell_token1] = ACTIONS(286),
    [aux_sym_volume_token1] = ACTIONS(286),
    [aux_sym_workdir_token1] = ACTIONS(286),
    [aux_sym_user_token1] = ACTIONS(286),
    [anon_sym_COLON] = ACTIONS(286),
    [aux_sym_cmd_token1] = ACTIONS(286),
    [aux_sym_entrypoint_token1] = ACTIONS(286),
    [aux_sym_run_token1] = ACTIONS(286),
    [aux_sym_maintainer_token1] = ACTIONS(286),
    [aux_sym_expose_token1] = ACTIONS(286),
    [aux_sym_from_token1] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(286),
    [aux_sym_from_token2] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [aux_sym_onbuild_token1] = ACTIONS(377),
    [aux_sym_env_token1] = ACTIONS(377),
    [aux_sym_label_token1] = ACTIONS(377),
    [aux_sym_healthcheck_token1] = ACTIONS(377),
    [aux_sym_arg_token1] = ACTIONS(377),
    [aux_sym_add_token1] = ACTIONS(377),
    [aux_sym_copy_token1] = ACTIONS(377),
    [aux_sym_stopsignal_token1] = ACTIONS(377),
    [aux_sym_shell_token1] = ACTIONS(377),
    [aux_sym_volume_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [aux_sym_workdir_token1] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [aux_sym_user_token1] = ACTIONS(377),
    [aux_sym_user_id_token1] = ACTIONS(377),
    [aux_sym_cmd_token1] = ACTIONS(377),
    [aux_sym_entrypoint_token1] = ACTIONS(377),
    [aux_sym_run_token1] = ACTIONS(377),
    [aux_sym_maintainer_token1] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_onbuild_token1] = ACTIONS(379),
    [aux_sym_env_token1] = ACTIONS(379),
    [aux_sym_label_token1] = ACTIONS(379),
    [aux_sym_healthcheck_token1] = ACTIONS(379),
    [aux_sym_arg_token1] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(379),
    [aux_sym_copy_token1] = ACTIONS(379),
    [aux_sym_stopsignal_token1] = ACTIONS(379),
    [aux_sym_shell_token1] = ACTIONS(379),
    [aux_sym_volume_token1] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_workdir_token1] = ACTIONS(379),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [aux_sym_user_token1] = ACTIONS(379),
    [aux_sym_user_id_token1] = ACTIONS(379),
    [aux_sym_cmd_token1] = ACTIONS(379),
    [aux_sym_entrypoint_token1] = ACTIONS(379),
    [aux_sym_run_token1] = ACTIONS(379),
    [aux_sym_maintainer_token1] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(379),
    [aux_sym_from_token1] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_onbuild_token1] = ACTIONS(196),
    [aux_sym_env_token1] = ACTIONS(196),
    [aux_sym_label_token1] = ACTIONS(196),
    [aux_sym_healthcheck_token1] = ACTIONS(196),
    [aux_sym_arg_token1] = ACTIONS(196),
    [aux_sym_add_token1] = ACTIONS(196),
    [aux_sym_copy_token1] = ACTIONS(196),
    [aux_sym_stopsignal_token1] = ACTIONS(196),
    [aux_sym_shell_token1] = ACTIONS(196),
    [aux_sym_volume_token1] = ACTIONS(196),
    [aux_sym_workdir_token1] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [aux_sym_workdir_token3] = ACTIONS(196),
    [aux_sym_workdir_token4] = ACTIONS(196),
    [aux_sym_user_token1] = ACTIONS(196),
    [aux_sym_cmd_token1] = ACTIONS(196),
    [aux_sym_entrypoint_token1] = ACTIONS(196),
    [aux_sym_run_token1] = ACTIONS(196),
    [aux_sym_maintainer_token1] = ACTIONS(196),
    [aux_sym_expose_token1] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(196),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(385),
    [aux_sym_from_token2] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(393),
    [aux_sym_from_token2] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_onbuild_token1] = ACTIONS(188),
    [aux_sym_env_token1] = ACTIONS(188),
    [aux_sym_label_token1] = ACTIONS(188),
    [aux_sym_healthcheck_token1] = ACTIONS(188),
    [aux_sym_arg_token1] = ACTIONS(188),
    [aux_sym_add_token1] = ACTIONS(188),
    [aux_sym_copy_token1] = ACTIONS(188),
    [aux_sym_stopsignal_token1] = ACTIONS(188),
    [aux_sym_shell_token1] = ACTIONS(188),
    [aux_sym_volume_token1] = ACTIONS(188),
    [aux_sym_workdir_token1] = ACTIONS(188),
    [anon_sym_DOLLAR] = ACTIONS(188),
    [aux_sym_workdir_token3] = ACTIONS(188),
    [aux_sym_workdir_token4] = ACTIONS(188),
    [aux_sym_user_token1] = ACTIONS(188),
    [aux_sym_cmd_token1] = ACTIONS(188),
    [aux_sym_entrypoint_token1] = ACTIONS(188),
    [aux_sym_run_token1] = ACTIONS(188),
    [aux_sym_maintainer_token1] = ACTIONS(188),
    [aux_sym_expose_token1] = ACTIONS(188),
    [aux_sym_from_token1] = ACTIONS(188),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_from_token2] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym_onbuild_token1] = ACTIONS(262),
    [aux_sym_env_token1] = ACTIONS(262),
    [aux_sym_label_token1] = ACTIONS(262),
    [aux_sym_healthcheck_token1] = ACTIONS(262),
    [aux_sym_arg_token1] = ACTIONS(262),
    [aux_sym_add_token1] = ACTIONS(262),
    [aux_sym_copy_token1] = ACTIONS(262),
    [aux_sym_stopsignal_token1] = ACTIONS(262),
    [aux_sym_shell_token1] = ACTIONS(262),
    [aux_sym_volume_token1] = ACTIONS(262),
    [aux_sym_workdir_token1] = ACTIONS(262),
    [aux_sym_user_token1] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [aux_sym_cmd_token1] = ACTIONS(262),
    [aux_sym_entrypoint_token1] = ACTIONS(262),
    [aux_sym_run_token1] = ACTIONS(262),
    [aux_sym_maintainer_token1] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(262),
    [aux_sym_from_token1] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(262),
    [aux_sym_from_token2] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(146),
    [aux_sym_env_token1] = ACTIONS(146),
    [aux_sym_label_token1] = ACTIONS(146),
    [aux_sym_healthcheck_token1] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(146),
    [aux_sym_add_token1] = ACTIONS(146),
    [aux_sym_copy_token1] = ACTIONS(146),
    [aux_sym_stopsignal_token1] = ACTIONS(146),
    [aux_sym_shell_token1] = ACTIONS(146),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym_user_token1] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [aux_sym_cmd_token1] = ACTIONS(146),
    [aux_sym_entrypoint_token1] = ACTIONS(146),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_maintainer_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [aux_sym_from_token2] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_onbuild_token1] = ACTIONS(397),
    [aux_sym_env_token1] = ACTIONS(397),
    [aux_sym_label_token1] = ACTIONS(397),
    [aux_sym_healthcheck_token1] = ACTIONS(397),
    [aux_sym_arg_token1] = ACTIONS(397),
    [aux_sym_add_token1] = ACTIONS(397),
    [aux_sym_copy_token1] = ACTIONS(397),
    [aux_sym_stopsignal_token1] = ACTIONS(397),
    [aux_sym_shell_token1] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(397),
    [aux_sym_workdir_token1] = ACTIONS(397),
    [aux_sym_user_token1] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [aux_sym_cmd_token1] = ACTIONS(397),
    [aux_sym_entrypoint_token1] = ACTIONS(397),
    [aux_sym_run_token1] = ACTIONS(397),
    [aux_sym_maintainer_token1] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(397),
    [aux_sym_from_token1] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(401),
    [aux_sym_from_token2] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_onbuild_token1] = ACTIONS(238),
    [aux_sym_env_token1] = ACTIONS(238),
    [aux_sym_label_token1] = ACTIONS(238),
    [aux_sym_healthcheck_token1] = ACTIONS(238),
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
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(393),
    [aux_sym_from_token2] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
    [aux_sym__anything] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym_onbuild_token1] = ACTIONS(407),
    [aux_sym_env_token1] = ACTIONS(407),
    [aux_sym_label_token1] = ACTIONS(407),
    [aux_sym_healthcheck_token1] = ACTIONS(407),
    [aux_sym_arg_token1] = ACTIONS(407),
    [aux_sym_add_token1] = ACTIONS(407),
    [aux_sym_copy_token1] = ACTIONS(407),
    [aux_sym_stopsignal_token1] = ACTIONS(407),
    [aux_sym_shell_token1] = ACTIONS(407),
    [aux_sym_volume_token1] = ACTIONS(407),
    [aux_sym_workdir_token1] = ACTIONS(407),
    [aux_sym_user_token1] = ACTIONS(407),
    [aux_sym_cmd_token1] = ACTIONS(407),
    [aux_sym_entrypoint_token1] = ACTIONS(407),
    [aux_sym_run_token1] = ACTIONS(407),
    [aux_sym_maintainer_token1] = ACTIONS(407),
    [aux_sym_expose_token1] = ACTIONS(407),
    [aux_sym_from_token1] = ACTIONS(407),
    [aux_sym__anything_token1] = ACTIONS(409),
    [sym_comment] = ACTIONS(407),
    [sym_line_continuation] = ACTIONS(127),
  },
  [110] = {
    [aux_sym__anything] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_onbuild_token1] = ACTIONS(414),
    [aux_sym_env_token1] = ACTIONS(414),
    [aux_sym_label_token1] = ACTIONS(414),
    [aux_sym_healthcheck_token1] = ACTIONS(414),
    [aux_sym_arg_token1] = ACTIONS(414),
    [aux_sym_add_token1] = ACTIONS(414),
    [aux_sym_copy_token1] = ACTIONS(414),
    [aux_sym_stopsignal_token1] = ACTIONS(414),
    [aux_sym_shell_token1] = ACTIONS(414),
    [aux_sym_volume_token1] = ACTIONS(414),
    [aux_sym_workdir_token1] = ACTIONS(414),
    [aux_sym_user_token1] = ACTIONS(414),
    [aux_sym_cmd_token1] = ACTIONS(414),
    [aux_sym_entrypoint_token1] = ACTIONS(414),
    [aux_sym_run_token1] = ACTIONS(414),
    [aux_sym_maintainer_token1] = ACTIONS(414),
    [aux_sym_expose_token1] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(414),
    [aux_sym__anything_token1] = ACTIONS(416),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym_onbuild_token1] = ACTIONS(418),
    [aux_sym_env_token1] = ACTIONS(418),
    [aux_sym_label_token1] = ACTIONS(418),
    [aux_sym_healthcheck_token1] = ACTIONS(418),
    [aux_sym_arg_token1] = ACTIONS(418),
    [aux_sym_add_token1] = ACTIONS(418),
    [aux_sym_copy_token1] = ACTIONS(418),
    [aux_sym_stopsignal_token1] = ACTIONS(418),
    [aux_sym_shell_token1] = ACTIONS(418),
    [aux_sym_volume_token1] = ACTIONS(418),
    [aux_sym_workdir_token1] = ACTIONS(418),
    [aux_sym_user_token1] = ACTIONS(418),
    [aux_sym_cmd_token1] = ACTIONS(418),
    [aux_sym_entrypoint_token1] = ACTIONS(418),
    [aux_sym_run_token1] = ACTIONS(418),
    [aux_sym_maintainer_token1] = ACTIONS(418),
    [aux_sym_expose_token1] = ACTIONS(418),
    [aux_sym_from_token1] = ACTIONS(418),
    [anon_sym_AT] = ACTIONS(418),
    [aux_sym_from_token2] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [aux_sym__anything] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(420),
    [aux_sym_onbuild_token1] = ACTIONS(422),
    [aux_sym_env_token1] = ACTIONS(422),
    [aux_sym_label_token1] = ACTIONS(422),
    [aux_sym_healthcheck_token1] = ACTIONS(422),
    [aux_sym_arg_token1] = ACTIONS(422),
    [aux_sym_add_token1] = ACTIONS(422),
    [aux_sym_copy_token1] = ACTIONS(422),
    [aux_sym_stopsignal_token1] = ACTIONS(422),
    [aux_sym_shell_token1] = ACTIONS(422),
    [aux_sym_volume_token1] = ACTIONS(422),
    [aux_sym_workdir_token1] = ACTIONS(422),
    [aux_sym_user_token1] = ACTIONS(422),
    [aux_sym_cmd_token1] = ACTIONS(422),
    [aux_sym_entrypoint_token1] = ACTIONS(422),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [aux_sym__anything_token1] = ACTIONS(416),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [113] = {
    [aux_sym__anything] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(424),
    [aux_sym_onbuild_token1] = ACTIONS(426),
    [aux_sym_env_token1] = ACTIONS(426),
    [aux_sym_label_token1] = ACTIONS(426),
    [aux_sym_healthcheck_token1] = ACTIONS(426),
    [aux_sym_arg_token1] = ACTIONS(426),
    [aux_sym_add_token1] = ACTIONS(426),
    [aux_sym_copy_token1] = ACTIONS(426),
    [aux_sym_stopsignal_token1] = ACTIONS(426),
    [aux_sym_shell_token1] = ACTIONS(426),
    [aux_sym_volume_token1] = ACTIONS(426),
    [aux_sym_workdir_token1] = ACTIONS(426),
    [aux_sym_user_token1] = ACTIONS(426),
    [aux_sym_cmd_token1] = ACTIONS(426),
    [aux_sym_entrypoint_token1] = ACTIONS(426),
    [aux_sym_run_token1] = ACTIONS(426),
    [aux_sym_maintainer_token1] = ACTIONS(426),
    [aux_sym_expose_token1] = ACTIONS(426),
    [aux_sym_from_token1] = ACTIONS(426),
    [aux_sym__anything_token1] = ACTIONS(416),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_onbuild_token1] = ACTIONS(430),
    [aux_sym_env_token1] = ACTIONS(430),
    [aux_sym_label_token1] = ACTIONS(430),
    [aux_sym_healthcheck_token1] = ACTIONS(430),
    [aux_sym_arg_token1] = ACTIONS(430),
    [aux_sym_add_token1] = ACTIONS(430),
    [aux_sym_copy_token1] = ACTIONS(430),
    [aux_sym_stopsignal_token1] = ACTIONS(430),
    [aux_sym_shell_token1] = ACTIONS(430),
    [aux_sym_volume_token1] = ACTIONS(430),
    [aux_sym_path_token1] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [aux_sym_workdir_token1] = ACTIONS(430),
    [aux_sym_user_token1] = ACTIONS(430),
    [aux_sym_cmd_token1] = ACTIONS(430),
    [aux_sym_entrypoint_token1] = ACTIONS(430),
    [aux_sym_run_token1] = ACTIONS(430),
    [aux_sym_maintainer_token1] = ACTIONS(430),
    [aux_sym_expose_token1] = ACTIONS(430),
    [aux_sym_from_token1] = ACTIONS(430),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym_onbuild_token1] = ACTIONS(432),
    [aux_sym_env_token1] = ACTIONS(432),
    [aux_sym_label_token1] = ACTIONS(432),
    [aux_sym_healthcheck_token1] = ACTIONS(432),
    [aux_sym_arg_token1] = ACTIONS(432),
    [aux_sym_add_token1] = ACTIONS(432),
    [aux_sym_copy_token1] = ACTIONS(432),
    [aux_sym_stopsignal_token1] = ACTIONS(432),
    [aux_sym_shell_token1] = ACTIONS(432),
    [aux_sym_volume_token1] = ACTIONS(432),
    [aux_sym_workdir_token1] = ACTIONS(432),
    [aux_sym_user_token1] = ACTIONS(432),
    [aux_sym_cmd_token1] = ACTIONS(432),
    [aux_sym_entrypoint_token1] = ACTIONS(432),
    [aux_sym_run_token1] = ACTIONS(432),
    [aux_sym_maintainer_token1] = ACTIONS(432),
    [aux_sym_expose_token1] = ACTIONS(432),
    [aux_sym_from_token1] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(434),
    [aux_sym_from_token2] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_onbuild_token1] = ACTIONS(397),
    [aux_sym_env_token1] = ACTIONS(397),
    [aux_sym_label_token1] = ACTIONS(397),
    [aux_sym_healthcheck_token1] = ACTIONS(397),
    [aux_sym_arg_token1] = ACTIONS(397),
    [aux_sym_add_token1] = ACTIONS(397),
    [aux_sym_copy_token1] = ACTIONS(397),
    [aux_sym_stopsignal_token1] = ACTIONS(397),
    [aux_sym_shell_token1] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(397),
    [aux_sym_workdir_token1] = ACTIONS(397),
    [aux_sym_user_token1] = ACTIONS(397),
    [aux_sym_cmd_token1] = ACTIONS(397),
    [aux_sym_entrypoint_token1] = ACTIONS(397),
    [aux_sym_run_token1] = ACTIONS(397),
    [aux_sym_maintainer_token1] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(397),
    [aux_sym_from_token1] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(401),
    [aux_sym_from_token2] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_onbuild_token1] = ACTIONS(250),
    [aux_sym_env_token1] = ACTIONS(250),
    [aux_sym_label_token1] = ACTIONS(250),
    [aux_sym_healthcheck_token1] = ACTIONS(250),
    [aux_sym_arg_token1] = ACTIONS(250),
    [aux_sym_add_token1] = ACTIONS(250),
    [aux_sym_copy_token1] = ACTIONS(250),
    [aux_sym_stopsignal_token1] = ACTIONS(250),
    [aux_sym_shell_token1] = ACTIONS(250),
    [aux_sym_volume_token1] = ACTIONS(250),
    [aux_sym_workdir_token1] = ACTIONS(250),
    [aux_sym_user_token1] = ACTIONS(250),
    [aux_sym_cmd_token1] = ACTIONS(250),
    [aux_sym_entrypoint_token1] = ACTIONS(250),
    [aux_sym_run_token1] = ACTIONS(250),
    [aux_sym_maintainer_token1] = ACTIONS(250),
    [aux_sym_expose_token1] = ACTIONS(250),
    [aux_sym_from_token1] = ACTIONS(250),
    [anon_sym_AT] = ACTIONS(250),
    [aux_sym_from_token2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_onbuild_token1] = ACTIONS(438),
    [aux_sym_env_token1] = ACTIONS(438),
    [aux_sym_label_token1] = ACTIONS(438),
    [aux_sym_healthcheck_token1] = ACTIONS(438),
    [aux_sym_arg_token1] = ACTIONS(438),
    [aux_sym_add_token1] = ACTIONS(438),
    [aux_sym_copy_token1] = ACTIONS(438),
    [aux_sym_stopsignal_token1] = ACTIONS(438),
    [aux_sym_shell_token1] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(438),
    [aux_sym_workdir_token1] = ACTIONS(438),
    [aux_sym_user_token1] = ACTIONS(438),
    [aux_sym_cmd_token1] = ACTIONS(438),
    [aux_sym_entrypoint_token1] = ACTIONS(438),
    [aux_sym_run_token1] = ACTIONS(438),
    [aux_sym_maintainer_token1] = ACTIONS(438),
    [aux_sym_expose_token1] = ACTIONS(438),
    [aux_sym_from_token1] = ACTIONS(438),
    [anon_sym_AT] = ACTIONS(440),
    [aux_sym_from_token2] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
    [aux_sym__anything] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym_onbuild_token1] = ACTIONS(446),
    [aux_sym_env_token1] = ACTIONS(446),
    [aux_sym_label_token1] = ACTIONS(446),
    [aux_sym_healthcheck_token1] = ACTIONS(446),
    [aux_sym_arg_token1] = ACTIONS(446),
    [aux_sym_add_token1] = ACTIONS(446),
    [aux_sym_copy_token1] = ACTIONS(446),
    [aux_sym_stopsignal_token1] = ACTIONS(446),
    [aux_sym_shell_token1] = ACTIONS(446),
    [aux_sym_volume_token1] = ACTIONS(446),
    [aux_sym_workdir_token1] = ACTIONS(446),
    [aux_sym_user_token1] = ACTIONS(446),
    [aux_sym_cmd_token1] = ACTIONS(446),
    [aux_sym_entrypoint_token1] = ACTIONS(446),
    [aux_sym_run_token1] = ACTIONS(446),
    [aux_sym_maintainer_token1] = ACTIONS(446),
    [aux_sym_expose_token1] = ACTIONS(446),
    [aux_sym_from_token1] = ACTIONS(446),
    [aux_sym__anything_token1] = ACTIONS(416),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym_onbuild_token1] = ACTIONS(450),
    [aux_sym_env_token1] = ACTIONS(450),
    [aux_sym_label_token1] = ACTIONS(450),
    [aux_sym_healthcheck_token1] = ACTIONS(450),
    [aux_sym_arg_token1] = ACTIONS(450),
    [aux_sym_add_token1] = ACTIONS(450),
    [aux_sym_copy_token1] = ACTIONS(450),
    [aux_sym_stopsignal_token1] = ACTIONS(450),
    [aux_sym_shell_token1] = ACTIONS(450),
    [aux_sym_volume_token1] = ACTIONS(450),
    [aux_sym_path_token1] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [aux_sym_workdir_token1] = ACTIONS(450),
    [aux_sym_user_token1] = ACTIONS(450),
    [aux_sym_cmd_token1] = ACTIONS(450),
    [aux_sym_entrypoint_token1] = ACTIONS(450),
    [aux_sym_run_token1] = ACTIONS(450),
    [aux_sym_maintainer_token1] = ACTIONS(450),
    [aux_sym_expose_token1] = ACTIONS(450),
    [aux_sym_from_token1] = ACTIONS(450),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [121] = {
    [aux_sym__anything] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(452),
    [aux_sym_onbuild_token1] = ACTIONS(454),
    [aux_sym_env_token1] = ACTIONS(454),
    [aux_sym_label_token1] = ACTIONS(454),
    [aux_sym_healthcheck_token1] = ACTIONS(454),
    [aux_sym_arg_token1] = ACTIONS(454),
    [aux_sym_add_token1] = ACTIONS(454),
    [aux_sym_copy_token1] = ACTIONS(454),
    [aux_sym_stopsignal_token1] = ACTIONS(454),
    [aux_sym_shell_token1] = ACTIONS(454),
    [aux_sym_volume_token1] = ACTIONS(454),
    [aux_sym_workdir_token1] = ACTIONS(454),
    [aux_sym_user_token1] = ACTIONS(454),
    [aux_sym_cmd_token1] = ACTIONS(454),
    [aux_sym_entrypoint_token1] = ACTIONS(454),
    [aux_sym_run_token1] = ACTIONS(454),
    [aux_sym_maintainer_token1] = ACTIONS(454),
    [aux_sym_expose_token1] = ACTIONS(454),
    [aux_sym_from_token1] = ACTIONS(454),
    [aux_sym__anything_token1] = ACTIONS(456),
    [sym_comment] = ACTIONS(458),
    [sym_line_continuation] = ACTIONS(127),
  },
  [122] = {
    [aux_sym__anything] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym_onbuild_token1] = ACTIONS(407),
    [aux_sym_env_token1] = ACTIONS(407),
    [aux_sym_label_token1] = ACTIONS(407),
    [aux_sym_healthcheck_token1] = ACTIONS(407),
    [aux_sym_arg_token1] = ACTIONS(407),
    [aux_sym_add_token1] = ACTIONS(407),
    [aux_sym_copy_token1] = ACTIONS(407),
    [aux_sym_stopsignal_token1] = ACTIONS(407),
    [aux_sym_shell_token1] = ACTIONS(407),
    [aux_sym_volume_token1] = ACTIONS(407),
    [aux_sym_workdir_token1] = ACTIONS(407),
    [aux_sym_user_token1] = ACTIONS(407),
    [aux_sym_cmd_token1] = ACTIONS(407),
    [aux_sym_entrypoint_token1] = ACTIONS(407),
    [aux_sym_run_token1] = ACTIONS(407),
    [aux_sym_maintainer_token1] = ACTIONS(407),
    [aux_sym_expose_token1] = ACTIONS(407),
    [aux_sym_from_token1] = ACTIONS(407),
    [aux_sym__anything_token1] = ACTIONS(460),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_onbuild_token1] = ACTIONS(463),
    [aux_sym_env_token1] = ACTIONS(463),
    [aux_sym_label_token1] = ACTIONS(463),
    [aux_sym_healthcheck_token1] = ACTIONS(463),
    [aux_sym_arg_token1] = ACTIONS(463),
    [aux_sym_add_token1] = ACTIONS(463),
    [aux_sym_copy_token1] = ACTIONS(463),
    [aux_sym_stopsignal_token1] = ACTIONS(463),
    [aux_sym_shell_token1] = ACTIONS(463),
    [aux_sym_volume_token1] = ACTIONS(463),
    [aux_sym_workdir_token1] = ACTIONS(463),
    [aux_sym_user_token1] = ACTIONS(463),
    [aux_sym_cmd_token1] = ACTIONS(463),
    [aux_sym_entrypoint_token1] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_maintainer_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(463),
    [aux_sym_from_token2] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym_onbuild_token1] = ACTIONS(465),
    [aux_sym_env_token1] = ACTIONS(465),
    [aux_sym_label_token1] = ACTIONS(465),
    [aux_sym_healthcheck_token1] = ACTIONS(465),
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
    [aux_sym_from_token2] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_onbuild_token1] = ACTIONS(467),
    [aux_sym_env_token1] = ACTIONS(467),
    [aux_sym_label_token1] = ACTIONS(467),
    [aux_sym_healthcheck_token1] = ACTIONS(467),
    [aux_sym_arg_token1] = ACTIONS(467),
    [aux_sym_add_token1] = ACTIONS(467),
    [aux_sym_copy_token1] = ACTIONS(467),
    [aux_sym_stopsignal_token1] = ACTIONS(467),
    [aux_sym_shell_token1] = ACTIONS(467),
    [aux_sym_volume_token1] = ACTIONS(467),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [aux_sym_from_token2] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [aux_sym_from_token2] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_onbuild_token1] = ACTIONS(438),
    [aux_sym_env_token1] = ACTIONS(438),
    [aux_sym_label_token1] = ACTIONS(438),
    [aux_sym_healthcheck_token1] = ACTIONS(438),
    [aux_sym_arg_token1] = ACTIONS(438),
    [aux_sym_add_token1] = ACTIONS(438),
    [aux_sym_copy_token1] = ACTIONS(438),
    [aux_sym_stopsignal_token1] = ACTIONS(438),
    [aux_sym_shell_token1] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(438),
    [aux_sym_workdir_token1] = ACTIONS(438),
    [aux_sym_user_token1] = ACTIONS(438),
    [aux_sym_cmd_token1] = ACTIONS(438),
    [aux_sym_entrypoint_token1] = ACTIONS(438),
    [aux_sym_run_token1] = ACTIONS(438),
    [aux_sym_maintainer_token1] = ACTIONS(438),
    [aux_sym_expose_token1] = ACTIONS(438),
    [aux_sym_from_token1] = ACTIONS(438),
    [aux_sym_from_token2] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_onbuild_token1] = ACTIONS(469),
    [aux_sym_env_token1] = ACTIONS(469),
    [aux_sym_label_token1] = ACTIONS(469),
    [aux_sym_healthcheck_token1] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_stopsignal_token1] = ACTIONS(469),
    [aux_sym_shell_token1] = ACTIONS(469),
    [aux_sym_volume_token1] = ACTIONS(469),
    [aux_sym_workdir_token1] = ACTIONS(469),
    [aux_sym_user_token1] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_run_token1] = ACTIONS(469),
    [aux_sym_maintainer_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym_onbuild_token1] = ACTIONS(432),
    [aux_sym_env_token1] = ACTIONS(432),
    [aux_sym_label_token1] = ACTIONS(432),
    [aux_sym_healthcheck_token1] = ACTIONS(432),
    [aux_sym_arg_token1] = ACTIONS(432),
    [aux_sym_add_token1] = ACTIONS(432),
    [aux_sym_copy_token1] = ACTIONS(432),
    [aux_sym_stopsignal_token1] = ACTIONS(432),
    [aux_sym_shell_token1] = ACTIONS(432),
    [aux_sym_volume_token1] = ACTIONS(432),
    [aux_sym_workdir_token1] = ACTIONS(432),
    [aux_sym_user_token1] = ACTIONS(432),
    [aux_sym_cmd_token1] = ACTIONS(432),
    [aux_sym_entrypoint_token1] = ACTIONS(432),
    [aux_sym_run_token1] = ACTIONS(432),
    [aux_sym_maintainer_token1] = ACTIONS(432),
    [aux_sym_expose_token1] = ACTIONS(432),
    [aux_sym_from_token1] = ACTIONS(432),
    [aux_sym_from_token2] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_onbuild_token1] = ACTIONS(469),
    [aux_sym_env_token1] = ACTIONS(469),
    [aux_sym_label_token1] = ACTIONS(469),
    [aux_sym_healthcheck_token1] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_stopsignal_token1] = ACTIONS(469),
    [aux_sym_shell_token1] = ACTIONS(469),
    [aux_sym_volume_token1] = ACTIONS(469),
    [aux_sym_workdir_token1] = ACTIONS(469),
    [aux_sym_user_token1] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(473),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_run_token1] = ACTIONS(469),
    [aux_sym_maintainer_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_onbuild_token1] = ACTIONS(475),
    [aux_sym_env_token1] = ACTIONS(475),
    [aux_sym_label_token1] = ACTIONS(475),
    [aux_sym_healthcheck_token1] = ACTIONS(475),
    [aux_sym_arg_token1] = ACTIONS(475),
    [aux_sym_add_token1] = ACTIONS(475),
    [aux_sym_copy_token1] = ACTIONS(475),
    [aux_sym_stopsignal_token1] = ACTIONS(475),
    [aux_sym_shell_token1] = ACTIONS(475),
    [aux_sym_volume_token1] = ACTIONS(475),
    [aux_sym_workdir_token1] = ACTIONS(475),
    [aux_sym_user_token1] = ACTIONS(475),
    [anon_sym_COLON] = ACTIONS(475),
    [aux_sym_cmd_token1] = ACTIONS(475),
    [aux_sym_entrypoint_token1] = ACTIONS(475),
    [aux_sym_run_token1] = ACTIONS(475),
    [aux_sym_maintainer_token1] = ACTIONS(475),
    [aux_sym_expose_token1] = ACTIONS(475),
    [aux_sym_from_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [aux_sym_onbuild_token1] = ACTIONS(477),
    [aux_sym_env_token1] = ACTIONS(477),
    [aux_sym_label_token1] = ACTIONS(477),
    [aux_sym_healthcheck_token1] = ACTIONS(477),
    [aux_sym_arg_token1] = ACTIONS(477),
    [aux_sym_add_token1] = ACTIONS(477),
    [aux_sym_copy_token1] = ACTIONS(477),
    [aux_sym_stopsignal_token1] = ACTIONS(477),
    [aux_sym_shell_token1] = ACTIONS(477),
    [aux_sym_volume_token1] = ACTIONS(477),
    [aux_sym_workdir_token1] = ACTIONS(477),
    [aux_sym_user_token1] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [aux_sym_cmd_token1] = ACTIONS(477),
    [aux_sym_entrypoint_token1] = ACTIONS(477),
    [aux_sym_run_token1] = ACTIONS(477),
    [aux_sym_maintainer_token1] = ACTIONS(477),
    [aux_sym_expose_token1] = ACTIONS(477),
    [aux_sym_from_token1] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym_onbuild_token1] = ACTIONS(256),
    [aux_sym_env_token1] = ACTIONS(256),
    [aux_sym_label_token1] = ACTIONS(256),
    [aux_sym_healthcheck_token1] = ACTIONS(256),
    [aux_sym_arg_token1] = ACTIONS(256),
    [aux_sym_add_token1] = ACTIONS(256),
    [aux_sym_copy_token1] = ACTIONS(256),
    [aux_sym_stopsignal_token1] = ACTIONS(256),
    [aux_sym_shell_token1] = ACTIONS(256),
    [aux_sym_volume_token1] = ACTIONS(256),
    [aux_sym_workdir_token1] = ACTIONS(256),
    [aux_sym_user_token1] = ACTIONS(256),
    [aux_sym_cmd_token1] = ACTIONS(256),
    [aux_sym_entrypoint_token1] = ACTIONS(256),
    [aux_sym_run_token1] = ACTIONS(256),
    [aux_sym_maintainer_token1] = ACTIONS(256),
    [aux_sym_expose_token1] = ACTIONS(256),
    [aux_sym_from_token1] = ACTIONS(256),
    [aux_sym_from_token2] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_onbuild_token1] = ACTIONS(397),
    [aux_sym_env_token1] = ACTIONS(397),
    [aux_sym_label_token1] = ACTIONS(397),
    [aux_sym_healthcheck_token1] = ACTIONS(397),
    [aux_sym_arg_token1] = ACTIONS(397),
    [aux_sym_add_token1] = ACTIONS(397),
    [aux_sym_copy_token1] = ACTIONS(397),
    [aux_sym_stopsignal_token1] = ACTIONS(397),
    [aux_sym_shell_token1] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(397),
    [aux_sym_workdir_token1] = ACTIONS(397),
    [aux_sym_user_token1] = ACTIONS(397),
    [aux_sym_cmd_token1] = ACTIONS(397),
    [aux_sym_entrypoint_token1] = ACTIONS(397),
    [aux_sym_run_token1] = ACTIONS(397),
    [aux_sym_maintainer_token1] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(397),
    [aux_sym_from_token1] = ACTIONS(397),
    [aux_sym_from_token2] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_onbuild_token1] = ACTIONS(270),
    [aux_sym_env_token1] = ACTIONS(270),
    [aux_sym_label_token1] = ACTIONS(270),
    [aux_sym_healthcheck_token1] = ACTIONS(270),
    [aux_sym_arg_token1] = ACTIONS(270),
    [aux_sym_add_token1] = ACTIONS(270),
    [aux_sym_copy_token1] = ACTIONS(270),
    [aux_sym_stopsignal_token1] = ACTIONS(270),
    [aux_sym_shell_token1] = ACTIONS(270),
    [aux_sym_volume_token1] = ACTIONS(270),
    [aux_sym_workdir_token1] = ACTIONS(270),
    [aux_sym_user_token1] = ACTIONS(270),
    [aux_sym_cmd_token1] = ACTIONS(270),
    [aux_sym_entrypoint_token1] = ACTIONS(270),
    [aux_sym_run_token1] = ACTIONS(270),
    [aux_sym_maintainer_token1] = ACTIONS(270),
    [aux_sym_expose_token1] = ACTIONS(270),
    [aux_sym_from_token1] = ACTIONS(270),
    [aux_sym_from_token2] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym_onbuild_token1] = ACTIONS(479),
    [aux_sym_env_token1] = ACTIONS(479),
    [aux_sym_label_token1] = ACTIONS(479),
    [aux_sym_healthcheck_token1] = ACTIONS(479),
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
    [aux_sym_from_token2] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_onbuild_token1] = ACTIONS(483),
    [aux_sym_env_token1] = ACTIONS(483),
    [aux_sym_label_token1] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(483),
    [aux_sym_arg_token1] = ACTIONS(483),
    [anon_sym_EQ] = ACTIONS(485),
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
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_onbuild_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_label_token1] = ACTIONS(487),
    [aux_sym_healthcheck_token1] = ACTIONS(487),
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
    [aux_sym_from_token2] = ACTIONS(489),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_onbuild_token1] = ACTIONS(491),
    [aux_sym_env_token1] = ACTIONS(491),
    [aux_sym_label_token1] = ACTIONS(491),
    [aux_sym_healthcheck_token1] = ACTIONS(491),
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
    [aux_sym_from_token2] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_onbuild_token1] = ACTIONS(495),
    [aux_sym_env_token1] = ACTIONS(495),
    [aux_sym_label_token1] = ACTIONS(495),
    [aux_sym_healthcheck_token1] = ACTIONS(495),
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
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [aux_sym_onbuild_token1] = ACTIONS(352),
    [aux_sym_env_token1] = ACTIONS(352),
    [aux_sym_label_token1] = ACTIONS(352),
    [aux_sym_healthcheck_token1] = ACTIONS(352),
    [aux_sym_arg_token1] = ACTIONS(352),
    [aux_sym_add_token1] = ACTIONS(352),
    [aux_sym_copy_token1] = ACTIONS(352),
    [aux_sym_stopsignal_token1] = ACTIONS(352),
    [aux_sym_shell_token1] = ACTIONS(352),
    [aux_sym_volume_token1] = ACTIONS(352),
    [aux_sym_workdir_token1] = ACTIONS(352),
    [aux_sym_user_token1] = ACTIONS(352),
    [aux_sym_cmd_token1] = ACTIONS(352),
    [aux_sym_entrypoint_token1] = ACTIONS(352),
    [aux_sym_run_token1] = ACTIONS(352),
    [aux_sym_maintainer_token1] = ACTIONS(352),
    [aux_sym_expose_token1] = ACTIONS(352),
    [aux_sym_from_token1] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [aux_sym_onbuild_token1] = ACTIONS(356),
    [aux_sym_env_token1] = ACTIONS(356),
    [aux_sym_label_token1] = ACTIONS(356),
    [aux_sym_healthcheck_token1] = ACTIONS(356),
    [aux_sym_arg_token1] = ACTIONS(356),
    [aux_sym_add_token1] = ACTIONS(356),
    [aux_sym_copy_token1] = ACTIONS(356),
    [aux_sym_stopsignal_token1] = ACTIONS(356),
    [aux_sym_shell_token1] = ACTIONS(356),
    [aux_sym_volume_token1] = ACTIONS(356),
    [aux_sym_workdir_token1] = ACTIONS(356),
    [aux_sym_user_token1] = ACTIONS(356),
    [aux_sym_cmd_token1] = ACTIONS(356),
    [aux_sym_entrypoint_token1] = ACTIONS(356),
    [aux_sym_run_token1] = ACTIONS(356),
    [aux_sym_maintainer_token1] = ACTIONS(356),
    [aux_sym_expose_token1] = ACTIONS(356),
    [aux_sym_from_token1] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [aux_sym_onbuild_token1] = ACTIONS(497),
    [aux_sym_env_token1] = ACTIONS(497),
    [aux_sym_label_token1] = ACTIONS(497),
    [aux_sym_healthcheck_token1] = ACTIONS(497),
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
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_onbuild_token1] = ACTIONS(499),
    [aux_sym_env_token1] = ACTIONS(499),
    [aux_sym_label_token1] = ACTIONS(499),
    [aux_sym_healthcheck_token1] = ACTIONS(499),
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
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_onbuild_token1] = ACTIONS(501),
    [aux_sym_env_token1] = ACTIONS(501),
    [aux_sym_label_token1] = ACTIONS(501),
    [aux_sym_healthcheck_token1] = ACTIONS(501),
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
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_onbuild_token1] = ACTIONS(503),
    [aux_sym_env_token1] = ACTIONS(503),
    [aux_sym_label_token1] = ACTIONS(503),
    [aux_sym_healthcheck_token1] = ACTIONS(503),
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
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_onbuild_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_label_token1] = ACTIONS(487),
    [aux_sym_healthcheck_token1] = ACTIONS(487),
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
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [aux_sym_onbuild_token1] = ACTIONS(505),
    [aux_sym_env_token1] = ACTIONS(505),
    [aux_sym_label_token1] = ACTIONS(505),
    [aux_sym_healthcheck_token1] = ACTIONS(505),
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
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [aux_sym_onbuild_token1] = ACTIONS(507),
    [aux_sym_env_token1] = ACTIONS(507),
    [aux_sym_label_token1] = ACTIONS(507),
    [aux_sym_healthcheck_token1] = ACTIONS(507),
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
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_onbuild_token1] = ACTIONS(509),
    [aux_sym_env_token1] = ACTIONS(509),
    [aux_sym_label_token1] = ACTIONS(509),
    [aux_sym_healthcheck_token1] = ACTIONS(509),
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
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_onbuild_token1] = ACTIONS(491),
    [aux_sym_env_token1] = ACTIONS(491),
    [aux_sym_label_token1] = ACTIONS(491),
    [aux_sym_healthcheck_token1] = ACTIONS(491),
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
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym_onbuild_token1] = ACTIONS(511),
    [aux_sym_env_token1] = ACTIONS(511),
    [aux_sym_label_token1] = ACTIONS(511),
    [aux_sym_healthcheck_token1] = ACTIONS(511),
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
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym_onbuild_token1] = ACTIONS(479),
    [aux_sym_env_token1] = ACTIONS(479),
    [aux_sym_label_token1] = ACTIONS(479),
    [aux_sym_healthcheck_token1] = ACTIONS(479),
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
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_onbuild_token1] = ACTIONS(513),
    [aux_sym_env_token1] = ACTIONS(513),
    [aux_sym_label_token1] = ACTIONS(513),
    [aux_sym_healthcheck_token1] = ACTIONS(513),
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
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [aux_sym_onbuild_token1] = ACTIONS(328),
    [aux_sym_env_token1] = ACTIONS(328),
    [aux_sym_label_token1] = ACTIONS(328),
    [aux_sym_healthcheck_token1] = ACTIONS(328),
    [aux_sym_arg_token1] = ACTIONS(328),
    [aux_sym_add_token1] = ACTIONS(328),
    [aux_sym_copy_token1] = ACTIONS(328),
    [aux_sym_stopsignal_token1] = ACTIONS(328),
    [aux_sym_shell_token1] = ACTIONS(328),
    [aux_sym_volume_token1] = ACTIONS(328),
    [aux_sym_workdir_token1] = ACTIONS(328),
    [aux_sym_user_token1] = ACTIONS(328),
    [aux_sym_cmd_token1] = ACTIONS(328),
    [aux_sym_entrypoint_token1] = ACTIONS(328),
    [aux_sym_run_token1] = ACTIONS(328),
    [aux_sym_maintainer_token1] = ACTIONS(328),
    [aux_sym_expose_token1] = ACTIONS(328),
    [aux_sym_from_token1] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_onbuild_token1] = ACTIONS(101),
    [aux_sym_env_token1] = ACTIONS(101),
    [aux_sym_label_token1] = ACTIONS(101),
    [aux_sym_healthcheck_token1] = ACTIONS(101),
    [aux_sym_arg_token1] = ACTIONS(101),
    [aux_sym_add_token1] = ACTIONS(101),
    [aux_sym_copy_token1] = ACTIONS(101),
    [aux_sym_stopsignal_token1] = ACTIONS(101),
    [aux_sym_shell_token1] = ACTIONS(101),
    [aux_sym_volume_token1] = ACTIONS(101),
    [aux_sym_workdir_token1] = ACTIONS(101),
    [aux_sym_user_token1] = ACTIONS(101),
    [aux_sym_cmd_token1] = ACTIONS(101),
    [aux_sym_entrypoint_token1] = ACTIONS(101),
    [aux_sym_run_token1] = ACTIONS(101),
    [aux_sym_maintainer_token1] = ACTIONS(101),
    [aux_sym_expose_token1] = ACTIONS(101),
    [aux_sym_from_token1] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [aux_sym_onbuild_token1] = ACTIONS(515),
    [aux_sym_env_token1] = ACTIONS(515),
    [aux_sym_label_token1] = ACTIONS(515),
    [aux_sym_healthcheck_token1] = ACTIONS(515),
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
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym_onbuild_token1] = ACTIONS(432),
    [aux_sym_env_token1] = ACTIONS(432),
    [aux_sym_label_token1] = ACTIONS(432),
    [aux_sym_healthcheck_token1] = ACTIONS(432),
    [aux_sym_arg_token1] = ACTIONS(432),
    [aux_sym_add_token1] = ACTIONS(432),
    [aux_sym_copy_token1] = ACTIONS(432),
    [aux_sym_stopsignal_token1] = ACTIONS(432),
    [aux_sym_shell_token1] = ACTIONS(432),
    [aux_sym_volume_token1] = ACTIONS(432),
    [aux_sym_workdir_token1] = ACTIONS(432),
    [aux_sym_user_token1] = ACTIONS(432),
    [aux_sym_cmd_token1] = ACTIONS(432),
    [aux_sym_entrypoint_token1] = ACTIONS(432),
    [aux_sym_run_token1] = ACTIONS(432),
    [aux_sym_maintainer_token1] = ACTIONS(432),
    [aux_sym_expose_token1] = ACTIONS(432),
    [aux_sym_from_token1] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_onbuild_token1] = ACTIONS(517),
    [aux_sym_env_token1] = ACTIONS(517),
    [aux_sym_label_token1] = ACTIONS(517),
    [aux_sym_healthcheck_token1] = ACTIONS(517),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_onbuild_token1] = ACTIONS(304),
    [aux_sym_env_token1] = ACTIONS(304),
    [aux_sym_label_token1] = ACTIONS(304),
    [aux_sym_healthcheck_token1] = ACTIONS(304),
    [aux_sym_arg_token1] = ACTIONS(304),
    [aux_sym_add_token1] = ACTIONS(304),
    [aux_sym_copy_token1] = ACTIONS(304),
    [aux_sym_stopsignal_token1] = ACTIONS(304),
    [aux_sym_shell_token1] = ACTIONS(304),
    [aux_sym_volume_token1] = ACTIONS(304),
    [aux_sym_workdir_token1] = ACTIONS(304),
    [aux_sym_user_token1] = ACTIONS(304),
    [aux_sym_cmd_token1] = ACTIONS(304),
    [aux_sym_entrypoint_token1] = ACTIONS(304),
    [aux_sym_run_token1] = ACTIONS(304),
    [aux_sym_maintainer_token1] = ACTIONS(304),
    [aux_sym_expose_token1] = ACTIONS(304),
    [aux_sym_from_token1] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_onbuild_token1] = ACTIONS(397),
    [aux_sym_env_token1] = ACTIONS(397),
    [aux_sym_label_token1] = ACTIONS(397),
    [aux_sym_healthcheck_token1] = ACTIONS(397),
    [aux_sym_arg_token1] = ACTIONS(397),
    [aux_sym_add_token1] = ACTIONS(397),
    [aux_sym_copy_token1] = ACTIONS(397),
    [aux_sym_stopsignal_token1] = ACTIONS(397),
    [aux_sym_shell_token1] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(397),
    [aux_sym_workdir_token1] = ACTIONS(397),
    [aux_sym_user_token1] = ACTIONS(397),
    [aux_sym_cmd_token1] = ACTIONS(397),
    [aux_sym_entrypoint_token1] = ACTIONS(397),
    [aux_sym_run_token1] = ACTIONS(397),
    [aux_sym_maintainer_token1] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(397),
    [aux_sym_from_token1] = ACTIONS(397),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [aux_sym_onbuild_token1] = ACTIONS(519),
    [aux_sym_env_token1] = ACTIONS(519),
    [aux_sym_label_token1] = ACTIONS(519),
    [aux_sym_healthcheck_token1] = ACTIONS(519),
    [aux_sym_arg_token1] = ACTIONS(519),
    [aux_sym_add_token1] = ACTIONS(519),
    [aux_sym_copy_token1] = ACTIONS(519),
    [aux_sym_stopsignal_token1] = ACTIONS(519),
    [aux_sym_shell_token1] = ACTIONS(519),
    [aux_sym_volume_token1] = ACTIONS(519),
    [aux_sym_workdir_token1] = ACTIONS(519),
    [aux_sym_user_token1] = ACTIONS(519),
    [aux_sym_cmd_token1] = ACTIONS(519),
    [aux_sym_entrypoint_token1] = ACTIONS(519),
    [aux_sym_run_token1] = ACTIONS(519),
    [aux_sym_maintainer_token1] = ACTIONS(519),
    [aux_sym_expose_token1] = ACTIONS(519),
    [aux_sym_from_token1] = ACTIONS(519),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_onbuild_token1] = ACTIONS(521),
    [aux_sym_env_token1] = ACTIONS(521),
    [aux_sym_label_token1] = ACTIONS(521),
    [aux_sym_healthcheck_token1] = ACTIONS(521),
    [aux_sym_arg_token1] = ACTIONS(521),
    [aux_sym_add_token1] = ACTIONS(521),
    [aux_sym_copy_token1] = ACTIONS(521),
    [aux_sym_stopsignal_token1] = ACTIONS(521),
    [aux_sym_shell_token1] = ACTIONS(521),
    [aux_sym_volume_token1] = ACTIONS(521),
    [aux_sym_workdir_token1] = ACTIONS(521),
    [aux_sym_user_token1] = ACTIONS(521),
    [aux_sym_cmd_token1] = ACTIONS(521),
    [aux_sym_entrypoint_token1] = ACTIONS(521),
    [aux_sym_run_token1] = ACTIONS(521),
    [aux_sym_maintainer_token1] = ACTIONS(521),
    [aux_sym_expose_token1] = ACTIONS(521),
    [aux_sym_from_token1] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [aux_sym_onbuild_token1] = ACTIONS(523),
    [aux_sym_env_token1] = ACTIONS(523),
    [aux_sym_label_token1] = ACTIONS(523),
    [aux_sym_healthcheck_token1] = ACTIONS(523),
    [aux_sym_arg_token1] = ACTIONS(523),
    [aux_sym_add_token1] = ACTIONS(523),
    [aux_sym_copy_token1] = ACTIONS(523),
    [aux_sym_stopsignal_token1] = ACTIONS(523),
    [aux_sym_shell_token1] = ACTIONS(523),
    [aux_sym_volume_token1] = ACTIONS(523),
    [aux_sym_workdir_token1] = ACTIONS(523),
    [aux_sym_user_token1] = ACTIONS(523),
    [aux_sym_cmd_token1] = ACTIONS(523),
    [aux_sym_entrypoint_token1] = ACTIONS(523),
    [aux_sym_run_token1] = ACTIONS(523),
    [aux_sym_maintainer_token1] = ACTIONS(523),
    [aux_sym_expose_token1] = ACTIONS(523),
    [aux_sym_from_token1] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [aux_sym_onbuild_token1] = ACTIONS(344),
    [aux_sym_env_token1] = ACTIONS(344),
    [aux_sym_label_token1] = ACTIONS(344),
    [aux_sym_healthcheck_token1] = ACTIONS(344),
    [aux_sym_arg_token1] = ACTIONS(344),
    [aux_sym_add_token1] = ACTIONS(344),
    [aux_sym_copy_token1] = ACTIONS(344),
    [aux_sym_stopsignal_token1] = ACTIONS(344),
    [aux_sym_shell_token1] = ACTIONS(344),
    [aux_sym_volume_token1] = ACTIONS(344),
    [aux_sym_workdir_token1] = ACTIONS(344),
    [aux_sym_user_token1] = ACTIONS(344),
    [aux_sym_cmd_token1] = ACTIONS(344),
    [aux_sym_entrypoint_token1] = ACTIONS(344),
    [aux_sym_run_token1] = ACTIONS(344),
    [aux_sym_maintainer_token1] = ACTIONS(344),
    [aux_sym_expose_token1] = ACTIONS(344),
    [aux_sym_from_token1] = ACTIONS(344),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [aux_sym_onbuild_token1] = ACTIONS(525),
    [aux_sym_env_token1] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(525),
    [aux_sym_healthcheck_token1] = ACTIONS(525),
    [aux_sym_arg_token1] = ACTIONS(525),
    [aux_sym_add_token1] = ACTIONS(525),
    [aux_sym_copy_token1] = ACTIONS(525),
    [aux_sym_stopsignal_token1] = ACTIONS(525),
    [aux_sym_shell_token1] = ACTIONS(525),
    [aux_sym_volume_token1] = ACTIONS(525),
    [aux_sym_workdir_token1] = ACTIONS(525),
    [aux_sym_user_token1] = ACTIONS(525),
    [aux_sym_cmd_token1] = ACTIONS(525),
    [aux_sym_entrypoint_token1] = ACTIONS(525),
    [aux_sym_run_token1] = ACTIONS(525),
    [aux_sym_maintainer_token1] = ACTIONS(525),
    [aux_sym_expose_token1] = ACTIONS(525),
    [aux_sym_from_token1] = ACTIONS(525),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_onbuild_token1] = ACTIONS(527),
    [aux_sym_env_token1] = ACTIONS(527),
    [aux_sym_label_token1] = ACTIONS(527),
    [aux_sym_healthcheck_token1] = ACTIONS(527),
    [aux_sym_arg_token1] = ACTIONS(527),
    [aux_sym_add_token1] = ACTIONS(527),
    [aux_sym_copy_token1] = ACTIONS(527),
    [aux_sym_stopsignal_token1] = ACTIONS(527),
    [aux_sym_shell_token1] = ACTIONS(527),
    [aux_sym_volume_token1] = ACTIONS(527),
    [aux_sym_workdir_token1] = ACTIONS(527),
    [aux_sym_user_token1] = ACTIONS(527),
    [aux_sym_cmd_token1] = ACTIONS(527),
    [aux_sym_entrypoint_token1] = ACTIONS(527),
    [aux_sym_run_token1] = ACTIONS(527),
    [aux_sym_maintainer_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_onbuild_token1] = ACTIONS(529),
    [aux_sym_env_token1] = ACTIONS(529),
    [aux_sym_label_token1] = ACTIONS(529),
    [aux_sym_healthcheck_token1] = ACTIONS(529),
    [aux_sym_arg_token1] = ACTIONS(529),
    [aux_sym_add_token1] = ACTIONS(529),
    [aux_sym_copy_token1] = ACTIONS(529),
    [aux_sym_stopsignal_token1] = ACTIONS(529),
    [aux_sym_shell_token1] = ACTIONS(529),
    [aux_sym_volume_token1] = ACTIONS(529),
    [aux_sym_workdir_token1] = ACTIONS(529),
    [aux_sym_user_token1] = ACTIONS(529),
    [aux_sym_cmd_token1] = ACTIONS(529),
    [aux_sym_entrypoint_token1] = ACTIONS(529),
    [aux_sym_run_token1] = ACTIONS(529),
    [aux_sym_maintainer_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [aux_sym_onbuild_token1] = ACTIONS(334),
    [aux_sym_env_token1] = ACTIONS(334),
    [aux_sym_label_token1] = ACTIONS(334),
    [aux_sym_healthcheck_token1] = ACTIONS(334),
    [aux_sym_arg_token1] = ACTIONS(334),
    [aux_sym_add_token1] = ACTIONS(334),
    [aux_sym_copy_token1] = ACTIONS(334),
    [aux_sym_stopsignal_token1] = ACTIONS(334),
    [aux_sym_shell_token1] = ACTIONS(334),
    [aux_sym_volume_token1] = ACTIONS(334),
    [aux_sym_workdir_token1] = ACTIONS(334),
    [aux_sym_user_token1] = ACTIONS(334),
    [aux_sym_cmd_token1] = ACTIONS(334),
    [aux_sym_entrypoint_token1] = ACTIONS(334),
    [aux_sym_run_token1] = ACTIONS(334),
    [aux_sym_maintainer_token1] = ACTIONS(334),
    [aux_sym_expose_token1] = ACTIONS(334),
    [aux_sym_from_token1] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_onbuild_token1] = ACTIONS(531),
    [aux_sym_env_token1] = ACTIONS(531),
    [aux_sym_label_token1] = ACTIONS(531),
    [aux_sym_healthcheck_token1] = ACTIONS(531),
    [aux_sym_arg_token1] = ACTIONS(531),
    [aux_sym_add_token1] = ACTIONS(531),
    [aux_sym_copy_token1] = ACTIONS(531),
    [aux_sym_stopsignal_token1] = ACTIONS(531),
    [aux_sym_shell_token1] = ACTIONS(531),
    [aux_sym_volume_token1] = ACTIONS(531),
    [aux_sym_workdir_token1] = ACTIONS(531),
    [aux_sym_user_token1] = ACTIONS(531),
    [aux_sym_cmd_token1] = ACTIONS(531),
    [aux_sym_entrypoint_token1] = ACTIONS(531),
    [aux_sym_run_token1] = ACTIONS(531),
    [aux_sym_maintainer_token1] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [aux_sym_onbuild_token1] = ACTIONS(533),
    [aux_sym_env_token1] = ACTIONS(533),
    [aux_sym_label_token1] = ACTIONS(533),
    [aux_sym_healthcheck_token1] = ACTIONS(533),
    [aux_sym_arg_token1] = ACTIONS(533),
    [aux_sym_add_token1] = ACTIONS(533),
    [aux_sym_copy_token1] = ACTIONS(533),
    [aux_sym_stopsignal_token1] = ACTIONS(533),
    [aux_sym_shell_token1] = ACTIONS(533),
    [aux_sym_volume_token1] = ACTIONS(533),
    [aux_sym_workdir_token1] = ACTIONS(533),
    [aux_sym_user_token1] = ACTIONS(533),
    [aux_sym_cmd_token1] = ACTIONS(533),
    [aux_sym_entrypoint_token1] = ACTIONS(533),
    [aux_sym_run_token1] = ACTIONS(533),
    [aux_sym_maintainer_token1] = ACTIONS(533),
    [aux_sym_expose_token1] = ACTIONS(533),
    [aux_sym_from_token1] = ACTIONS(533),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_onbuild_token1] = ACTIONS(535),
    [aux_sym_env_token1] = ACTIONS(535),
    [aux_sym_label_token1] = ACTIONS(535),
    [aux_sym_healthcheck_token1] = ACTIONS(535),
    [aux_sym_arg_token1] = ACTIONS(535),
    [aux_sym_add_token1] = ACTIONS(535),
    [aux_sym_copy_token1] = ACTIONS(535),
    [aux_sym_stopsignal_token1] = ACTIONS(535),
    [aux_sym_shell_token1] = ACTIONS(535),
    [aux_sym_volume_token1] = ACTIONS(535),
    [aux_sym_workdir_token1] = ACTIONS(535),
    [aux_sym_user_token1] = ACTIONS(535),
    [aux_sym_cmd_token1] = ACTIONS(535),
    [aux_sym_entrypoint_token1] = ACTIONS(535),
    [aux_sym_run_token1] = ACTIONS(535),
    [aux_sym_maintainer_token1] = ACTIONS(535),
    [aux_sym_expose_token1] = ACTIONS(535),
    [aux_sym_from_token1] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [aux_sym_onbuild_token1] = ACTIONS(537),
    [aux_sym_env_token1] = ACTIONS(537),
    [aux_sym_label_token1] = ACTIONS(537),
    [aux_sym_healthcheck_token1] = ACTIONS(537),
    [aux_sym_arg_token1] = ACTIONS(537),
    [aux_sym_add_token1] = ACTIONS(537),
    [aux_sym_copy_token1] = ACTIONS(537),
    [aux_sym_stopsignal_token1] = ACTIONS(537),
    [aux_sym_shell_token1] = ACTIONS(537),
    [aux_sym_volume_token1] = ACTIONS(537),
    [aux_sym_workdir_token1] = ACTIONS(537),
    [aux_sym_user_token1] = ACTIONS(537),
    [aux_sym_cmd_token1] = ACTIONS(537),
    [aux_sym_entrypoint_token1] = ACTIONS(537),
    [aux_sym_run_token1] = ACTIONS(537),
    [aux_sym_maintainer_token1] = ACTIONS(537),
    [aux_sym_expose_token1] = ACTIONS(537),
    [aux_sym_from_token1] = ACTIONS(537),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_onbuild_token1] = ACTIONS(438),
    [aux_sym_env_token1] = ACTIONS(438),
    [aux_sym_label_token1] = ACTIONS(438),
    [aux_sym_healthcheck_token1] = ACTIONS(438),
    [aux_sym_arg_token1] = ACTIONS(438),
    [aux_sym_add_token1] = ACTIONS(438),
    [aux_sym_copy_token1] = ACTIONS(438),
    [aux_sym_stopsignal_token1] = ACTIONS(438),
    [aux_sym_shell_token1] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(438),
    [aux_sym_workdir_token1] = ACTIONS(438),
    [aux_sym_user_token1] = ACTIONS(438),
    [aux_sym_cmd_token1] = ACTIONS(438),
    [aux_sym_entrypoint_token1] = ACTIONS(438),
    [aux_sym_run_token1] = ACTIONS(438),
    [aux_sym_maintainer_token1] = ACTIONS(438),
    [aux_sym_expose_token1] = ACTIONS(438),
    [aux_sym_from_token1] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_onbuild_token1] = ACTIONS(539),
    [aux_sym_env_token1] = ACTIONS(539),
    [aux_sym_label_token1] = ACTIONS(539),
    [aux_sym_healthcheck_token1] = ACTIONS(539),
    [aux_sym_arg_token1] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(539),
    [aux_sym_copy_token1] = ACTIONS(539),
    [aux_sym_stopsignal_token1] = ACTIONS(539),
    [aux_sym_shell_token1] = ACTIONS(539),
    [aux_sym_volume_token1] = ACTIONS(539),
    [aux_sym_workdir_token1] = ACTIONS(539),
    [aux_sym_user_token1] = ACTIONS(539),
    [aux_sym_cmd_token1] = ACTIONS(539),
    [aux_sym_entrypoint_token1] = ACTIONS(539),
    [aux_sym_run_token1] = ACTIONS(539),
    [aux_sym_maintainer_token1] = ACTIONS(539),
    [aux_sym_expose_token1] = ACTIONS(539),
    [aux_sym_from_token1] = ACTIONS(539),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [aux_sym_onbuild_token1] = ACTIONS(541),
    [aux_sym_env_token1] = ACTIONS(541),
    [aux_sym_label_token1] = ACTIONS(541),
    [aux_sym_healthcheck_token1] = ACTIONS(541),
    [aux_sym_arg_token1] = ACTIONS(541),
    [aux_sym_add_token1] = ACTIONS(541),
    [aux_sym_copy_token1] = ACTIONS(541),
    [aux_sym_stopsignal_token1] = ACTIONS(541),
    [aux_sym_shell_token1] = ACTIONS(541),
    [aux_sym_volume_token1] = ACTIONS(541),
    [aux_sym_workdir_token1] = ACTIONS(541),
    [aux_sym_user_token1] = ACTIONS(541),
    [aux_sym_cmd_token1] = ACTIONS(541),
    [aux_sym_entrypoint_token1] = ACTIONS(541),
    [aux_sym_run_token1] = ACTIONS(541),
    [aux_sym_maintainer_token1] = ACTIONS(541),
    [aux_sym_expose_token1] = ACTIONS(541),
    [aux_sym_from_token1] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_onbuild_token1] = ACTIONS(543),
    [aux_sym_env_token1] = ACTIONS(543),
    [aux_sym_label_token1] = ACTIONS(543),
    [aux_sym_healthcheck_token1] = ACTIONS(543),
    [aux_sym_arg_token1] = ACTIONS(543),
    [aux_sym_add_token1] = ACTIONS(543),
    [aux_sym_copy_token1] = ACTIONS(543),
    [aux_sym_stopsignal_token1] = ACTIONS(543),
    [aux_sym_shell_token1] = ACTIONS(543),
    [aux_sym_volume_token1] = ACTIONS(543),
    [aux_sym_workdir_token1] = ACTIONS(543),
    [aux_sym_user_token1] = ACTIONS(543),
    [aux_sym_cmd_token1] = ACTIONS(543),
    [aux_sym_entrypoint_token1] = ACTIONS(543),
    [aux_sym_run_token1] = ACTIONS(543),
    [aux_sym_maintainer_token1] = ACTIONS(543),
    [aux_sym_expose_token1] = ACTIONS(543),
    [aux_sym_from_token1] = ACTIONS(543),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [aux_sym_onbuild_token1] = ACTIONS(545),
    [aux_sym_env_token1] = ACTIONS(545),
    [aux_sym_label_token1] = ACTIONS(545),
    [aux_sym_healthcheck_token1] = ACTIONS(545),
    [aux_sym_arg_token1] = ACTIONS(545),
    [aux_sym_add_token1] = ACTIONS(545),
    [aux_sym_copy_token1] = ACTIONS(545),
    [aux_sym_stopsignal_token1] = ACTIONS(545),
    [aux_sym_shell_token1] = ACTIONS(545),
    [aux_sym_volume_token1] = ACTIONS(545),
    [aux_sym_workdir_token1] = ACTIONS(545),
    [aux_sym_user_token1] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_run_token1] = ACTIONS(545),
    [aux_sym_maintainer_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [180] = {
    [sym_repository] = STATE(199),
    [sym__repository_start] = STATE(186),
    [sym_image] = STATE(100),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(549),
    [aux_sym_platform_token1] = ACTIONS(551),
    [aux_sym__repository_start_token1] = ACTIONS(547),
    [aux_sym__repository_start_token4] = ACTIONS(553),
    [aux_sym__repository_start_token6] = ACTIONS(553),
    [aux_sym__repository_start_token8] = ACTIONS(555),
    [aux_sym__repository_start_token10] = ACTIONS(555),
    [aux_sym__repository_start_token12] = ACTIONS(557),
    [aux_sym__repository_start_token14] = ACTIONS(557),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [181] = {
    [sym_repository] = STATE(194),
    [sym__repository_start] = STATE(186),
    [sym_image] = STATE(101),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [aux_sym_platform_token1] = ACTIONS(551),
    [aux_sym__repository_start_token1] = ACTIONS(547),
    [aux_sym__repository_start_token4] = ACTIONS(553),
    [aux_sym__repository_start_token6] = ACTIONS(553),
    [aux_sym__repository_start_token8] = ACTIONS(555),
    [aux_sym__repository_start_token10] = ACTIONS(555),
    [aux_sym__repository_start_token12] = ACTIONS(557),
    [aux_sym__repository_start_token14] = ACTIONS(557),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [182] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(156),
    [sym__port] = STATE(87),
    [sym_port] = STATE(87),
    [sym_port_range] = STATE(87),
    [sym__port_part] = STATE(68),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(559),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [183] = {
    [sym_digest] = STATE(129),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_sha256_COLON] = ACTIONS(563),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [184] = {
    [sym__repository_continued] = STATE(184),
    [aux_sym_repository_repeat1] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(573),
    [aux_sym_platform_token1] = ACTIONS(576),
    [aux_sym__repository_start_token1] = ACTIONS(573),
    [aux_sym__repository_start_token4] = ACTIONS(579),
    [aux_sym__repository_start_token6] = ACTIONS(579),
    [aux_sym__repository_start_token8] = ACTIONS(582),
    [aux_sym__repository_start_token10] = ACTIONS(582),
    [aux_sym__repository_start_token12] = ACTIONS(585),
    [aux_sym__repository_start_token14] = ACTIONS(585),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [185] = {
    [sym_digest] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_sha256_COLON] = ACTIONS(588),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [186] = {
    [sym__repository_continued] = STATE(187),
    [aux_sym_repository_repeat1] = STATE(187),
    [anon_sym_DOLLAR] = ACTIONS(590),
    [aux_sym_platform_token1] = ACTIONS(593),
    [aux_sym__repository_start_token1] = ACTIONS(590),
    [aux_sym__repository_start_token4] = ACTIONS(596),
    [aux_sym__repository_start_token6] = ACTIONS(596),
    [aux_sym__repository_start_token8] = ACTIONS(599),
    [aux_sym__repository_start_token10] = ACTIONS(599),
    [aux_sym__repository_start_token12] = ACTIONS(602),
    [aux_sym__repository_start_token14] = ACTIONS(602),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [187] = {
    [sym__repository_continued] = STATE(184),
    [aux_sym_repository_repeat1] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [aux_sym_platform_token1] = ACTIONS(608),
    [aux_sym__repository_start_token1] = ACTIONS(605),
    [aux_sym__repository_start_token4] = ACTIONS(611),
    [aux_sym__repository_start_token6] = ACTIONS(611),
    [aux_sym__repository_start_token8] = ACTIONS(614),
    [aux_sym__repository_start_token10] = ACTIONS(614),
    [aux_sym__repository_start_token12] = ACTIONS(617),
    [aux_sym__repository_start_token14] = ACTIONS(617),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [188] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_sha256_COLON] = ACTIONS(620),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [189] = {
    [sym_digest] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_sha256_COLON] = ACTIONS(622),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [190] = {
    [sym_digest] = STATE(136),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_sha256_COLON] = ACTIONS(624),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [191] = {
    [sym_digest] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_sha256_COLON] = ACTIONS(626),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [192] = {
    [sym_tag] = STATE(115),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [193] = {
    [sym_as_name] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [194] = {
    [sym_image] = STATE(106),
    [anon_sym_DOLLAR] = ACTIONS(648),
    [aux_sym_platform_token1] = ACTIONS(650),
    [aux_sym__repository_start_token1] = ACTIONS(648),
    [aux_sym__repository_start_token4] = ACTIONS(652),
    [aux_sym__repository_start_token6] = ACTIONS(652),
    [aux_sym__repository_start_token8] = ACTIONS(654),
    [aux_sym__repository_start_token10] = ACTIONS(654),
    [aux_sym__repository_start_token12] = ACTIONS(656),
    [aux_sym__repository_start_token14] = ACTIONS(656),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [195] = {
    [sym_as_name] = STATE(145),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [196] = {
    [sym_as_name] = STATE(153),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [197] = {
    [sym_digest] = STATE(136),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [198] = {
    [sym_tag] = STATE(116),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [199] = {
    [sym_image] = STATE(95),
    [anon_sym_DOLLAR] = ACTIONS(648),
    [aux_sym_platform_token1] = ACTIONS(650),
    [aux_sym__repository_start_token1] = ACTIONS(648),
    [aux_sym__repository_start_token4] = ACTIONS(652),
    [aux_sym__repository_start_token6] = ACTIONS(652),
    [aux_sym__repository_start_token8] = ACTIONS(654),
    [aux_sym__repository_start_token10] = ACTIONS(654),
    [aux_sym__repository_start_token12] = ACTIONS(656),
    [aux_sym__repository_start_token14] = ACTIONS(656),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [200] = {
    [sym_as_name] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [201] = {
    [sym_as_name] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [202] = {
    [sym_digest] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [203] = {
    [sym_as_name] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [204] = {
    [sym_digest] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [205] = {
    [sym_as_name] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [206] = {
    [sym_tag] = STATE(118),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [207] = {
    [sym_digest] = STATE(129),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [208] = {
    [sym_tag] = STATE(108),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [209] = {
    [sym_as_name] = STATE(159),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [210] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [211] = {
    [sym_as_name] = STATE(146),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [212] = {
    [sym_digest] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(565),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(569),
    [aux_sym__repository_start_token10] = ACTIONS(569),
    [aux_sym__repository_start_token12] = ACTIONS(571),
    [aux_sym__repository_start_token14] = ACTIONS(571),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [213] = {
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(658),
    [aux_sym__repository_start_token6] = ACTIONS(658),
    [aux_sym__repository_start_token8] = ACTIONS(658),
    [aux_sym__repository_start_token10] = ACTIONS(658),
    [aux_sym__repository_start_token12] = ACTIONS(658),
    [aux_sym__repository_start_token14] = ACTIONS(658),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [214] = {
    [anon_sym_DOLLAR] = ACTIONS(662),
    [aux_sym_platform_token1] = ACTIONS(664),
    [aux_sym__repository_start_token1] = ACTIONS(662),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(662),
    [aux_sym__repository_start_token10] = ACTIONS(662),
    [aux_sym__repository_start_token12] = ACTIONS(662),
    [aux_sym__repository_start_token14] = ACTIONS(662),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [215] = {
    [anon_sym_DOLLAR] = ACTIONS(186),
    [aux_sym_platform_token1] = ACTIONS(188),
    [aux_sym__repository_start_token1] = ACTIONS(186),
    [aux_sym__repository_start_token4] = ACTIONS(186),
    [aux_sym__repository_start_token6] = ACTIONS(186),
    [aux_sym__repository_start_token8] = ACTIONS(186),
    [aux_sym__repository_start_token10] = ACTIONS(186),
    [aux_sym__repository_start_token12] = ACTIONS(186),
    [aux_sym__repository_start_token14] = ACTIONS(186),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [216] = {
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym_platform_token1] = ACTIONS(196),
    [aux_sym__repository_start_token1] = ACTIONS(194),
    [aux_sym__repository_start_token4] = ACTIONS(194),
    [aux_sym__repository_start_token6] = ACTIONS(194),
    [aux_sym__repository_start_token8] = ACTIONS(194),
    [aux_sym__repository_start_token10] = ACTIONS(194),
    [aux_sym__repository_start_token12] = ACTIONS(194),
    [aux_sym__repository_start_token14] = ACTIONS(194),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [217] = {
    [anon_sym_DOLLAR] = ACTIONS(666),
    [aux_sym_platform_token1] = ACTIONS(668),
    [aux_sym__repository_start_token1] = ACTIONS(666),
    [aux_sym__repository_start_token4] = ACTIONS(666),
    [aux_sym__repository_start_token6] = ACTIONS(666),
    [aux_sym__repository_start_token8] = ACTIONS(666),
    [aux_sym__repository_start_token10] = ACTIONS(666),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [218] = {
    [anon_sym_DOLLAR] = ACTIONS(670),
    [aux_sym_platform_token1] = ACTIONS(672),
    [aux_sym__repository_start_token1] = ACTIONS(670),
    [aux_sym__repository_start_token4] = ACTIONS(670),
    [aux_sym__repository_start_token6] = ACTIONS(670),
    [aux_sym__repository_start_token8] = ACTIONS(670),
    [aux_sym__repository_start_token10] = ACTIONS(670),
    [aux_sym__repository_start_token12] = ACTIONS(670),
    [aux_sym__repository_start_token14] = ACTIONS(670),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [219] = {
    [anon_sym_DOLLAR] = ACTIONS(674),
    [aux_sym_platform_token1] = ACTIONS(676),
    [aux_sym__repository_start_token1] = ACTIONS(674),
    [aux_sym__repository_start_token4] = ACTIONS(674),
    [aux_sym__repository_start_token6] = ACTIONS(674),
    [aux_sym__repository_start_token8] = ACTIONS(674),
    [aux_sym__repository_start_token10] = ACTIONS(674),
    [aux_sym__repository_start_token12] = ACTIONS(674),
    [aux_sym__repository_start_token14] = ACTIONS(674),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [220] = {
    [anon_sym_DOLLAR] = ACTIONS(198),
    [aux_sym_platform_token1] = ACTIONS(200),
    [aux_sym__repository_start_token1] = ACTIONS(198),
    [aux_sym__repository_start_token4] = ACTIONS(198),
    [aux_sym__repository_start_token6] = ACTIONS(198),
    [aux_sym__repository_start_token8] = ACTIONS(198),
    [aux_sym__repository_start_token10] = ACTIONS(198),
    [aux_sym__repository_start_token12] = ACTIONS(198),
    [aux_sym__repository_start_token14] = ACTIONS(198),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [221] = {
    [sym__port_spec] = STATE(323),
    [sym_mapped_port] = STATE(323),
    [sym__port] = STATE(87),
    [sym_port] = STATE(302),
    [sym_port_range] = STATE(302),
    [sym__port_part] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_DOLLAR] = ACTIONS(680),
    [aux_sym_platform_token1] = ACTIONS(682),
    [aux_sym__repository_start_token1] = ACTIONS(680),
    [aux_sym__repository_start_token4] = ACTIONS(680),
    [aux_sym__repository_start_token6] = ACTIONS(680),
    [aux_sym__repository_start_token8] = ACTIONS(680),
    [aux_sym__repository_start_token10] = ACTIONS(680),
    [aux_sym__repository_start_token12] = ACTIONS(680),
    [aux_sym__repository_start_token14] = ACTIONS(680),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [223] = {
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(684),
    [aux_sym__repository_start_token6] = ACTIONS(684),
    [aux_sym__repository_start_token8] = ACTIONS(684),
    [aux_sym__repository_start_token10] = ACTIONS(684),
    [aux_sym__repository_start_token12] = ACTIONS(684),
    [aux_sym__repository_start_token14] = ACTIONS(684),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [224] = {
    [anon_sym_DOLLAR] = ACTIONS(688),
    [aux_sym_platform_token1] = ACTIONS(690),
    [aux_sym__repository_start_token1] = ACTIONS(688),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(688),
    [aux_sym__repository_start_token10] = ACTIONS(688),
    [aux_sym__repository_start_token12] = ACTIONS(688),
    [aux_sym__repository_start_token14] = ACTIONS(688),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [225] = {
    [anon_sym_DOLLAR] = ACTIONS(692),
    [aux_sym_platform_token1] = ACTIONS(694),
    [aux_sym__repository_start_token1] = ACTIONS(692),
    [aux_sym__repository_start_token4] = ACTIONS(692),
    [aux_sym__repository_start_token6] = ACTIONS(692),
    [aux_sym__repository_start_token8] = ACTIONS(692),
    [aux_sym__repository_start_token10] = ACTIONS(692),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [226] = {
    [anon_sym_DOLLAR] = ACTIONS(696),
    [aux_sym_platform_token1] = ACTIONS(698),
    [aux_sym__repository_start_token1] = ACTIONS(696),
    [aux_sym__repository_start_token4] = ACTIONS(696),
    [aux_sym__repository_start_token6] = ACTIONS(696),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(696),
    [aux_sym__repository_start_token14] = ACTIONS(696),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [227] = {
    [anon_sym_DOLLAR] = ACTIONS(700),
    [aux_sym_platform_token1] = ACTIONS(702),
    [aux_sym__repository_start_token1] = ACTIONS(700),
    [aux_sym__repository_start_token4] = ACTIONS(700),
    [aux_sym__repository_start_token6] = ACTIONS(700),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(700),
    [aux_sym__repository_start_token14] = ACTIONS(700),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [228] = {
    [anon_sym_DOLLAR] = ACTIONS(704),
    [aux_sym_platform_token1] = ACTIONS(706),
    [aux_sym__repository_start_token1] = ACTIONS(704),
    [aux_sym__repository_start_token4] = ACTIONS(704),
    [aux_sym__repository_start_token6] = ACTIONS(704),
    [aux_sym__repository_start_token8] = ACTIONS(704),
    [aux_sym__repository_start_token10] = ACTIONS(704),
    [aux_sym__repository_start_token12] = ACTIONS(704),
    [aux_sym__repository_start_token14] = ACTIONS(704),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [229] = {
    [aux_sym__json_string] = STATE(263),
    [aux_sym_json_array_repeat1] = STATE(291),
    [anon_sym_DQUOTE] = ACTIONS(708),
    [anon_sym_COMMA] = ACTIONS(710),
    [anon_sym_RBRACK] = ACTIONS(712),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
    [aux_sym__json_string_token1] = ACTIONS(714),
    [sym__json_escape_sequence] = ACTIONS(716),
  },
  [230] = {
    [sym__port] = STATE(98),
    [sym_port] = STATE(98),
    [sym_port_range] = STATE(98),
    [sym__port_part] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym__port] = STATE(177),
    [sym_port] = STATE(177),
    [sym_port_range] = STATE(177),
    [sym__port_part] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_path] = STATE(88),
    [sym_json_array] = STATE(141),
    [aux_sym_add_repeat1] = STATE(88),
    [aux_sym_path_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [233] = {
    [sym_path] = STATE(86),
    [sym_json_array] = STATE(166),
    [aux_sym_add_repeat1] = STATE(86),
    [aux_sym_path_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [234] = {
    [sym_path] = STATE(83),
    [sym_json_array] = STATE(170),
    [aux_sym_add_repeat1] = STATE(83),
    [aux_sym_path_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [235] = {
    [sym_template_expr_less_than_equals] = STATE(312),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [236] = {
    [sym_template_expr_less_than_equals] = STATE(334),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [237] = {
    [sym_template_expr_less_than_equals] = STATE(372),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [238] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(250),
    [aux_sym__repository_start_token13] = ACTIONS(724),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(726),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(728),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(728),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [239] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(730),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(732),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [240] = {
    [aux_sym__repository_start_repeat2] = STATE(256),
    [anon_sym_SLASH] = ACTIONS(730),
    [aux_sym__repository_start_token3] = ACTIONS(732),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [241] = {
    [aux_sym__repository_start_repeat3] = STATE(255),
    [anon_sym_SLASH] = ACTIONS(730),
    [aux_sym__repository_start_token3] = ACTIONS(732),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [242] = {
    [aux_sym__repository_start_repeat4] = STATE(252),
    [anon_sym_SLASH] = ACTIONS(730),
    [aux_sym__repository_start_token3] = ACTIONS(732),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [243] = {
    [sym_variable_default_value] = STATE(373),
    [sym_variable_this_or_null] = STATE(373),
    [anon_sym_RBRACE] = ACTIONS(734),
    [anon_sym_COLON_DASH] = ACTIONS(736),
    [anon_sym_COLON_PLUS] = ACTIONS(738),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_variable_default_value] = STATE(378),
    [sym_variable_this_or_null] = STATE(378),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_COLON_DASH] = ACTIONS(736),
    [anon_sym_COLON_PLUS] = ACTIONS(738),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_template_expr_less_than_equals] = STATE(331),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [246] = {
    [sym_template_expr_less_than_equals] = STATE(344),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [247] = {
    [sym_variable_default_value] = STATE(376),
    [sym_variable_this_or_null] = STATE(376),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_COLON_DASH] = ACTIONS(736),
    [anon_sym_COLON_PLUS] = ACTIONS(738),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [aux_sym__repository_start_repeat1] = STATE(239),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(744),
    [aux_sym__repository_start_token2] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(746),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [249] = {
    [sym_port] = STATE(347),
    [sym_port_range] = STATE(347),
    [sym__port_part] = STATE(68),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(250),
    [aux_sym__repository_start_token13] = ACTIONS(748),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(750),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(753),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(753),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [251] = {
    [aux_sym__anything] = STATE(119),
    [sym_json_array] = STATE(174),
    [sym__anything_or_json_array] = STATE(174),
    [aux_sym__anything_token1] = ACTIONS(756),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [252] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [anon_sym_SLASH] = ACTIONS(758),
    [aux_sym__repository_start_token3] = ACTIONS(760),
    [aux_sym__repository_start_token12] = ACTIONS(137),
    [aux_sym__repository_start_token15] = ACTIONS(137),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [253] = {
    [sym_variable_default_value] = STATE(374),
    [sym_variable_this_or_null] = STATE(374),
    [anon_sym_RBRACE] = ACTIONS(762),
    [anon_sym_COLON_DASH] = ACTIONS(736),
    [anon_sym_COLON_PLUS] = ACTIONS(738),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_template_expr_less_than_equals] = STATE(321),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [255] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [anon_sym_SLASH] = ACTIONS(758),
    [aux_sym__repository_start_token3] = ACTIONS(760),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [256] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [anon_sym_SLASH] = ACTIONS(758),
    [aux_sym__repository_start_token3] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [257] = {
    [aux_sym__anything] = STATE(119),
    [sym_json_array] = STATE(173),
    [sym__anything_or_json_array] = STATE(173),
    [aux_sym__anything_token1] = ACTIONS(756),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [258] = {
    [sym_template_expr_less_than_equals] = STATE(337),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [259] = {
    [aux_sym__anything] = STATE(119),
    [sym_json_array] = STATE(172),
    [sym__anything_or_json_array] = STATE(172),
    [aux_sym__anything_token1] = ACTIONS(756),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [260] = {
    [sym_variable_default_value] = STATE(369),
    [sym_variable_this_or_null] = STATE(369),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_COLON_DASH] = ACTIONS(736),
    [anon_sym_COLON_PLUS] = ACTIONS(738),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [261] = {
    [sym_template_expr_less_than_equals] = STATE(317),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(238),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(720),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(722),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [262] = {
    [sym_user_name] = STATE(130),
    [sym_user_id] = STATE(128),
    [anon_sym_DOLLAR] = ACTIONS(766),
    [aux_sym_user_name_token1] = ACTIONS(768),
    [aux_sym_user_id_token1] = ACTIONS(770),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [aux_sym__json_string] = STATE(265),
    [anon_sym_DQUOTE] = ACTIONS(772),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
    [aux_sym__json_string_token1] = ACTIONS(774),
    [sym__json_escape_sequence] = ACTIONS(774),
  },
  [264] = {
    [aux_sym__json_string] = STATE(265),
    [anon_sym_DQUOTE] = ACTIONS(776),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
    [aux_sym__json_string_token1] = ACTIONS(774),
    [sym__json_escape_sequence] = ACTIONS(774),
  },
  [265] = {
    [aux_sym__json_string] = STATE(265),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
    [aux_sym__json_string_token1] = ACTIONS(780),
    [sym__json_escape_sequence] = ACTIONS(780),
  },
  [266] = {
    [aux_sym__json_string] = STATE(264),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
    [aux_sym__json_string_token1] = ACTIONS(785),
    [sym__json_escape_sequence] = ACTIONS(785),
  },
  [267] = {
    [aux_sym_json_array_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(789),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [sym_docker_variable] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym__docker_variable] = ACTIONS(793),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [269] = {
    [sym_docker_variable] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(795),
    [sym__docker_variable] = ACTIONS(797),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [270] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(799),
    [sym__docker_variable] = ACTIONS(801),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [271] = {
    [sym_docker_variable] = STATE(75),
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym__docker_variable] = ACTIONS(793),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [272] = {
    [sym_docker_variable] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(803),
    [sym__docker_variable] = ACTIONS(805),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [273] = {
    [aux_sym_json_array_repeat1] = STATE(287),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(807),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [aux_sym_arg_default_token1] = ACTIONS(809),
    [anon_sym_DOLLAR] = ACTIONS(811),
    [aux_sym_workdir_token2] = ACTIONS(811),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [275] = {
    [sym_signal_name] = STATE(167),
    [aux_sym_signal_name_token1] = ACTIONS(813),
    [sym_signal_num] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [sym_docker_variable] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(795),
    [sym__docker_variable] = ACTIONS(797),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [277] = {
    [sym_docker_variable] = STATE(149),
    [anon_sym_LBRACE] = ACTIONS(799),
    [sym__docker_variable] = ACTIONS(801),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [278] = {
    [sym_docker_variable] = STATE(79),
    [anon_sym_LBRACE] = ACTIONS(803),
    [sym__docker_variable] = ACTIONS(805),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [279] = {
    [sym_docker_variable] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym__docker_variable] = ACTIONS(793),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [280] = {
    [aux_sym_json_array_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(817),
    [anon_sym_RBRACK] = ACTIONS(820),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [281] = {
    [sym_docker_variable] = STATE(248),
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym__docker_variable] = ACTIONS(793),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [282] = {
    [anon_sym_DOLLAR] = ACTIONS(822),
    [aux_sym_port_protocol_token1] = ACTIONS(824),
    [aux_sym_port_protocol_token2] = ACTIONS(824),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [283] = {
    [sym_docker_variable] = STATE(228),
    [anon_sym_LBRACE] = ACTIONS(826),
    [sym__docker_variable] = ACTIONS(828),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [284] = {
    [sym_docker_variable] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym__docker_variable] = ACTIONS(793),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [285] = {
    [sym_platform] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(830),
    [aux_sym_platform_token1] = ACTIONS(832),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [286] = {
    [sym_docker_variable] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym__docker_variable] = ACTIONS(793),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [287] = {
    [aux_sym_json_array_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(834),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [288] = {
    [sym__port_part] = STATE(76),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [aux_sym_user_id_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [289] = {
    [sym_docker_variable] = STATE(61),
    [anon_sym_LBRACE] = ACTIONS(799),
    [sym__docker_variable] = ACTIONS(801),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [290] = {
    [aux_sym_json_array_repeat1] = STATE(267),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(834),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [aux_sym_json_array_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(807),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(820),
    [anon_sym_RBRACK] = ACTIONS(820),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym__anything] = STATE(121),
    [aux_sym__anything_token1] = ACTIONS(836),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [294] = {
    [anon_sym_COMMA] = ACTIONS(838),
    [anon_sym_RBRACK] = ACTIONS(838),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [aux_sym__anything] = STATE(112),
    [aux_sym__anything_token1] = ACTIONS(840),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [aux_sym__anything] = STATE(110),
    [aux_sym__anything_token1] = ACTIONS(844),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [298] = {
    [sym__json_value] = STATE(292),
    [anon_sym_DQUOTE] = ACTIONS(846),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [sym_user_group_id] = STATE(169),
    [aux_sym_user_id_token1] = ACTIONS(848),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [sym_user_group] = STATE(169),
    [aux_sym_user_name_token1] = ACTIONS(850),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [aux_sym__anything] = STATE(113),
    [aux_sym__anything_token1] = ACTIONS(852),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [302] = {
    [anon_sym_DQUOTE] = ACTIONS(854),
    [anon_sym_COLON] = ACTIONS(857),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [sym_arg_default] = STATE(143),
    [aux_sym_arg_default_token1] = ACTIONS(859),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [304] = {
    [sym_json_array] = STATE(168),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [aux_sym__repository_start_token9] = ACTIONS(861),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [aux_sym__repository_start_token9] = ACTIONS(863),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym__repository_start_token5] = ACTIONS(865),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [aux_sym__repository_start_token5] = ACTIONS(867),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym_template_expr_percent_signs] = ACTIONS(869),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [310] = {
    [sym_template_expr_curly_braces] = ACTIONS(871),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [311] = {
    [aux_sym_path_token2] = ACTIONS(873),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [312] = {
    [aux_sym__repository_start_token13] = ACTIONS(875),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [sym_template_expr_curly_braces] = ACTIONS(877),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [314] = {
    [anon_sym_SLASH] = ACTIONS(879),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [aux_sym__repository_start_token9] = ACTIONS(881),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [aux_sym_signal_name_token2] = ACTIONS(883),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [317] = {
    [aux_sym__repository_start_token13] = ACTIONS(885),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [anon_sym_SLASH] = ACTIONS(758),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [sym_template_expr_curly_braces] = ACTIONS(887),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [320] = {
    [sym_template_expr_percent_signs] = ACTIONS(889),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [321] = {
    [aux_sym__repository_start_token13] = ACTIONS(891),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [aux_sym__repository_start_token9] = ACTIONS(893),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [aux_sym__repository_start_token5] = ACTIONS(897),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [sym__docker_variable] = ACTIONS(899),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [326] = {
    [anon_sym_DQUOTE] = ACTIONS(901),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(903),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [anon_sym_RBRACE] = ACTIONS(905),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [sym_arg_name] = ACTIONS(907),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [sym_template_expr_curly_braces] = ACTIONS(909),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [331] = {
    [aux_sym__repository_start_token13] = ACTIONS(911),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [aux_sym__repository_start_token9] = ACTIONS(913),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [aux_sym__repository_start_token5] = ACTIONS(915),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [aux_sym__repository_start_token13] = ACTIONS(917),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym__repository_start_token9] = ACTIONS(919),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [336] = {
    [aux_sym__repository_start_token5] = ACTIONS(921),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [aux_sym__repository_start_token13] = ACTIONS(923),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_template_expr_percent_signs] = ACTIONS(925),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [339] = {
    [aux_sym__repository_start_token5] = ACTIONS(927),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [sym__space_no_newline] = ACTIONS(929),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [341] = {
    [anon_sym_SLASH] = ACTIONS(730),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [aux_sym__repository_start_token5] = ACTIONS(931),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [aux_sym__repository_start_token9] = ACTIONS(933),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [aux_sym__repository_start_token13] = ACTIONS(935),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [sym_template_expr_curly_braces] = ACTIONS(937),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(939),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [347] = {
    [anon_sym_DQUOTE] = ACTIONS(941),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [348] = {
    [sym_template_expr_percent_signs] = ACTIONS(943),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [349] = {
    [sym__space_no_newline] = ACTIONS(945),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [350] = {
    [sym__space_no_newline] = ACTIONS(947),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [351] = {
    [sym__space_no_newline] = ACTIONS(949),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [352] = {
    [sym__space_no_newline] = ACTIONS(951),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [353] = {
    [sym__space_no_newline] = ACTIONS(953),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [354] = {
    [sym__space_no_newline] = ACTIONS(955),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [355] = {
    [sym__space_no_newline] = ACTIONS(957),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [356] = {
    [sym__space_no_newline] = ACTIONS(959),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [357] = {
    [sym__space_no_newline] = ACTIONS(961),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [358] = {
    [sym__space_no_newline] = ACTIONS(963),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [359] = {
    [sym__space_no_newline] = ACTIONS(965),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [360] = {
    [sym__space_no_newline] = ACTIONS(967),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [361] = {
    [sym_template_expr_percent_signs] = ACTIONS(969),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [362] = {
    [sym_template_expr_curly_braces] = ACTIONS(971),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [363] = {
    [anon_sym_SLASH] = ACTIONS(973),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [364] = {
    [sym__space_no_newline] = ACTIONS(975),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [365] = {
    [sym__space_no_newline] = ACTIONS(977),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [366] = {
    [sym__space_no_newline] = ACTIONS(979),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [367] = {
    [sym_template_expr_curly_braces] = ACTIONS(981),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [368] = {
    [sym_template_expr_percent_signs] = ACTIONS(983),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(985),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [370] = {
    [aux_sym__repository_start_token5] = ACTIONS(987),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [aux_sym__repository_start_token9] = ACTIONS(989),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [aux_sym__repository_start_token13] = ACTIONS(991),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(993),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [anon_sym_RBRACE] = ACTIONS(995),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(997),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(999),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1001),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [378] = {
    [anon_sym_RBRACE] = ACTIONS(1003),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [sym__docker_variable] = ACTIONS(1005),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [380] = {
    [sym_template_expr_curly_braces] = ACTIONS(1007),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [381] = {
    [sym_template_expr_percent_signs] = ACTIONS(1009),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [382] = {
    [sym_template_expr_percent_signs] = ACTIONS(1011),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [383] = {
    [sym__docker_variable] = ACTIONS(1013),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [384] = {
    [sym__docker_variable] = ACTIONS(1015),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
  [385] = {
    [sym__docker_variable] = ACTIONS(1017),
    [sym_comment] = ACTIONS(127),
    [sym_line_continuation] = ACTIONS(127),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(340),
  [9] = {.count = 1, .reusable = true}, SHIFT(366),
  [11] = {.count = 1, .reusable = true}, SHIFT(365),
  [13] = {.count = 1, .reusable = true}, SHIFT(364),
  [15] = {.count = 1, .reusable = true}, SHIFT(360),
  [17] = {.count = 1, .reusable = true}, SHIFT(359),
  [19] = {.count = 1, .reusable = true}, SHIFT(358),
  [21] = {.count = 1, .reusable = true}, SHIFT(357),
  [23] = {.count = 1, .reusable = true}, SHIFT(356),
  [25] = {.count = 1, .reusable = true}, SHIFT(355),
  [27] = {.count = 1, .reusable = true}, SHIFT(354),
  [29] = {.count = 1, .reusable = true}, SHIFT(353),
  [31] = {.count = 1, .reusable = true}, SHIFT(352),
  [33] = {.count = 1, .reusable = true}, SHIFT(351),
  [35] = {.count = 1, .reusable = true}, SHIFT(350),
  [37] = {.count = 1, .reusable = true}, SHIFT(349),
  [39] = {.count = 1, .reusable = true}, SHIFT(182),
  [41] = {.count = 1, .reusable = true}, SHIFT(180),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(340),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(366),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(365),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(364),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(360),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(359),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(358),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(357),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(356),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(355),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(354),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(353),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(352),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(351),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(350),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(349),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(182),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(180),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(221),
  [105] = {.count = 1, .reusable = true}, SHIFT(270),
  [107] = {.count = 1, .reusable = true}, SHIFT(36),
  [109] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(221),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(270),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(36),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [122] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(361),
  [127] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [133] = {.count = 1, .reusable = true}, SHIFT(214),
  [135] = {.count = 1, .reusable = false}, SHIFT(58),
  [137] = {.count = 1, .reusable = true}, SHIFT(254),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(284),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [150] = {.count = 1, .reusable = true}, SHIFT(213),
  [152] = {.count = 1, .reusable = false}, SHIFT(69),
  [154] = {.count = 1, .reusable = true}, SHIFT(362),
  [156] = {.count = 1, .reusable = true}, SHIFT(361),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [160] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(254),
  [165] = {.count = 1, .reusable = true}, SHIFT(284),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(362),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [178] = {.count = 1, .reusable = true}, SHIFT(224),
  [180] = {.count = 1, .reusable = false}, SHIFT(67),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [206] = {.count = 1, .reusable = false}, SHIFT(105),
  [208] = {.count = 1, .reusable = true}, SHIFT(381),
  [210] = {.count = 1, .reusable = true}, SHIFT(237),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [214] = {.count = 1, .reusable = true}, SHIFT(282),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(237),
  [219] = {.count = 1, .reusable = true}, SHIFT(276),
  [221] = {.count = 1, .reusable = false}, SHIFT(103),
  [223] = {.count = 1, .reusable = true}, SHIFT(380),
  [225] = {.count = 1, .reusable = false}, SHIFT(96),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(276),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(380),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(381),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [242] = {.count = 1, .reusable = false}, SHIFT(111),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [248] = {.count = 1, .reusable = false}, SHIFT(117),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [254] = {.count = 1, .reusable = false}, SHIFT(107),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [260] = {.count = 1, .reusable = false}, SHIFT(124),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(217),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [274] = {.count = 1, .reusable = false}, SHIFT(133),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [280] = {.count = 1, .reusable = false}, SHIFT(135),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [284] = {.count = 1, .reusable = true}, SHIFT(288),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [290] = {.count = 1, .reusable = true}, SHIFT(218),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [300] = {.count = 1, .reusable = false}, SHIFT(161),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [308] = {.count = 1, .reusable = false}, SHIFT(155),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [314] = {.count = 1, .reusable = false}, SHIFT(272),
  [316] = {.count = 1, .reusable = false}, SHIFT(142),
  [318] = {.count = 1, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2),
  [320] = {.count = 1, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2),
  [322] = {.count = 2, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(114),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(311),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [332] = {.count = 1, .reusable = false}, SHIFT(152),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [338] = {.count = 1, .reusable = false}, SHIFT(114),
  [340] = {.count = 1, .reusable = true}, SHIFT(311),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [350] = {.count = 1, .reusable = true}, SHIFT(230),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [360] = {.count = 1, .reusable = false}, SHIFT(178),
  [362] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [364] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(272),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [371] = {.count = 1, .reusable = true}, SHIFT(198),
  [373] = {.count = 1, .reusable = true}, SHIFT(188),
  [375] = {.count = 1, .reusable = true}, SHIFT(201),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [383] = {.count = 1, .reusable = true}, SHIFT(208),
  [385] = {.count = 1, .reusable = true}, SHIFT(185),
  [387] = {.count = 1, .reusable = true}, SHIFT(200),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [391] = {.count = 1, .reusable = true}, SHIFT(206),
  [393] = {.count = 1, .reusable = true}, SHIFT(189),
  [395] = {.count = 1, .reusable = true}, SHIFT(205),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [399] = {.count = 1, .reusable = true}, SHIFT(192),
  [401] = {.count = 1, .reusable = true}, SHIFT(183),
  [403] = {.count = 1, .reusable = true}, SHIFT(209),
  [405] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [407] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(109),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [416] = {.count = 1, .reusable = true}, SHIFT(122),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_healthcheck, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [434] = {.count = 1, .reusable = true}, SHIFT(191),
  [436] = {.count = 1, .reusable = true}, SHIFT(193),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [440] = {.count = 1, .reusable = true}, SHIFT(190),
  [442] = {.count = 1, .reusable = true}, SHIFT(196),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [456] = {.count = 1, .reusable = true}, SHIFT(109),
  [458] = {.count = 1, .reusable = false}, SHIFT(144),
  [460] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(122),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [471] = {.count = 1, .reusable = true}, SHIFT(299),
  [473] = {.count = 1, .reusable = true}, SHIFT(300),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [481] = {.count = 1, .reusable = true}, SHIFT(203),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [485] = {.count = 1, .reusable = true}, SHIFT(303),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [489] = {.count = 1, .reusable = true}, SHIFT(195),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [493] = {.count = 1, .reusable = true}, SHIFT(211),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [509] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [547] = {.count = 1, .reusable = true}, SHIFT(279),
  [549] = {.count = 1, .reusable = true}, SHIFT(285),
  [551] = {.count = 1, .reusable = false}, SHIFT(60),
  [553] = {.count = 1, .reusable = true}, SHIFT(310),
  [555] = {.count = 1, .reusable = true}, SHIFT(309),
  [557] = {.count = 1, .reusable = true}, SHIFT(246),
  [559] = {.count = 1, .reusable = true}, SHIFT(231),
  [561] = {.count = 1, .reusable = true}, SHIFT(286),
  [563] = {.count = 1, .reusable = true}, SHIFT(197),
  [565] = {.count = 1, .reusable = false}, SHIFT(125),
  [567] = {.count = 1, .reusable = true}, SHIFT(330),
  [569] = {.count = 1, .reusable = true}, SHIFT(338),
  [571] = {.count = 1, .reusable = true}, SHIFT(236),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(281),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(363),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(367),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(368),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(261),
  [588] = {.count = 1, .reusable = true}, SHIFT(210),
  [590] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(281),
  [593] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(363),
  [596] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(367),
  [599] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(368),
  [602] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(261),
  [605] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(281),
  [608] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(363),
  [611] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(367),
  [614] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(368),
  [617] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(261),
  [620] = {.count = 1, .reusable = true}, SHIFT(212),
  [622] = {.count = 1, .reusable = true}, SHIFT(207),
  [624] = {.count = 1, .reusable = true}, SHIFT(204),
  [626] = {.count = 1, .reusable = true}, SHIFT(202),
  [628] = {.count = 1, .reusable = true}, SHIFT(268),
  [630] = {.count = 1, .reusable = false}, SHIFT(123),
  [632] = {.count = 1, .reusable = true}, SHIFT(319),
  [634] = {.count = 1, .reusable = true}, SHIFT(320),
  [636] = {.count = 1, .reusable = true}, SHIFT(258),
  [638] = {.count = 1, .reusable = true}, SHIFT(271),
  [640] = {.count = 1, .reusable = false}, SHIFT(163),
  [642] = {.count = 1, .reusable = true}, SHIFT(313),
  [644] = {.count = 1, .reusable = true}, SHIFT(382),
  [646] = {.count = 1, .reusable = true}, SHIFT(245),
  [648] = {.count = 1, .reusable = true}, SHIFT(269),
  [650] = {.count = 1, .reusable = false}, SHIFT(104),
  [652] = {.count = 1, .reusable = true}, SHIFT(345),
  [654] = {.count = 1, .reusable = true}, SHIFT(348),
  [656] = {.count = 1, .reusable = true}, SHIFT(235),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [664] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [668] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [676] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [678] = {.count = 1, .reusable = true}, SHIFT(249),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [708] = {.count = 1, .reusable = false}, SHIFT(273),
  [710] = {.count = 1, .reusable = false}, SHIFT(298),
  [712] = {.count = 1, .reusable = false}, SHIFT(157),
  [714] = {.count = 1, .reusable = false}, SHIFT(263),
  [716] = {.count = 1, .reusable = true}, SHIFT(263),
  [718] = {.count = 1, .reusable = true}, SHIFT(229),
  [720] = {.count = 1, .reusable = true}, SHIFT(238),
  [722] = {.count = 1, .reusable = false}, SHIFT(238),
  [724] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [726] = {.count = 1, .reusable = true}, SHIFT(250),
  [728] = {.count = 1, .reusable = false}, SHIFT(250),
  [730] = {.count = 1, .reusable = true}, SHIFT(222),
  [732] = {.count = 1, .reusable = false}, SHIFT(318),
  [734] = {.count = 1, .reusable = true}, SHIFT(46),
  [736] = {.count = 1, .reusable = true}, SHIFT(377),
  [738] = {.count = 1, .reusable = true}, SHIFT(375),
  [740] = {.count = 1, .reusable = true}, SHIFT(43),
  [742] = {.count = 1, .reusable = true}, SHIFT(216),
  [744] = {.count = 1, .reusable = true}, SHIFT(219),
  [746] = {.count = 1, .reusable = false}, SHIFT(341),
  [748] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(250),
  [753] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(250),
  [756] = {.count = 1, .reusable = false}, SHIFT(119),
  [758] = {.count = 1, .reusable = true}, SHIFT(226),
  [760] = {.count = 1, .reusable = false}, SHIFT(314),
  [762] = {.count = 1, .reusable = true}, SHIFT(99),
  [764] = {.count = 1, .reusable = true}, SHIFT(22),
  [766] = {.count = 1, .reusable = true}, SHIFT(277),
  [768] = {.count = 1, .reusable = true}, SHIFT(132),
  [770] = {.count = 1, .reusable = true}, SHIFT(131),
  [772] = {.count = 1, .reusable = false}, SHIFT(290),
  [774] = {.count = 1, .reusable = true}, SHIFT(265),
  [776] = {.count = 1, .reusable = false}, SHIFT(296),
  [778] = {.count = 1, .reusable = false}, REDUCE(aux_sym__json_string, 2),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(265),
  [783] = {.count = 1, .reusable = false}, SHIFT(294),
  [785] = {.count = 1, .reusable = true}, SHIFT(264),
  [787] = {.count = 1, .reusable = true}, SHIFT(298),
  [789] = {.count = 1, .reusable = true}, SHIFT(160),
  [791] = {.count = 1, .reusable = true}, SHIFT(379),
  [793] = {.count = 1, .reusable = true}, SHIFT(23),
  [795] = {.count = 1, .reusable = true}, SHIFT(385),
  [797] = {.count = 1, .reusable = true}, SHIFT(44),
  [799] = {.count = 1, .reusable = true}, SHIFT(325),
  [801] = {.count = 1, .reusable = true}, SHIFT(41),
  [803] = {.count = 1, .reusable = true}, SHIFT(383),
  [805] = {.count = 1, .reusable = true}, SHIFT(93),
  [807] = {.count = 1, .reusable = true}, SHIFT(140),
  [809] = {.count = 1, .reusable = false}, SHIFT(171),
  [811] = {.count = 1, .reusable = false}, SHIFT(278),
  [813] = {.count = 1, .reusable = true}, SHIFT(316),
  [815] = {.count = 1, .reusable = true}, SHIFT(167),
  [817] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(298),
  [820] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [822] = {.count = 1, .reusable = true}, SHIFT(289),
  [824] = {.count = 1, .reusable = true}, SHIFT(70),
  [826] = {.count = 1, .reusable = true}, SHIFT(384),
  [828] = {.count = 1, .reusable = true}, SHIFT(220),
  [830] = {.count = 1, .reusable = true}, SHIFT(283),
  [832] = {.count = 1, .reusable = true}, SHIFT(225),
  [834] = {.count = 1, .reusable = true}, SHIFT(179),
  [836] = {.count = 1, .reusable = true}, SHIFT(121),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [840] = {.count = 1, .reusable = true}, SHIFT(112),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [844] = {.count = 1, .reusable = true}, SHIFT(110),
  [846] = {.count = 1, .reusable = true}, SHIFT(266),
  [848] = {.count = 1, .reusable = true}, SHIFT(165),
  [850] = {.count = 1, .reusable = true}, SHIFT(176),
  [852] = {.count = 1, .reusable = true}, SHIFT(113),
  [854] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(85),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [859] = {.count = 1, .reusable = true}, SHIFT(154),
  [861] = {.count = 1, .reusable = true}, SHIFT(51),
  [863] = {.count = 1, .reusable = true}, SHIFT(26),
  [865] = {.count = 1, .reusable = true}, SHIFT(240),
  [867] = {.count = 1, .reusable = true}, SHIFT(31),
  [869] = {.count = 1, .reusable = true}, SHIFT(343),
  [871] = {.count = 1, .reusable = true}, SHIFT(342),
  [873] = {.count = 1, .reusable = true}, SHIFT(326),
  [875] = {.count = 1, .reusable = true}, SHIFT(27),
  [877] = {.count = 1, .reusable = true}, SHIFT(333),
  [879] = {.count = 1, .reusable = true}, SHIFT(223),
  [881] = {.count = 1, .reusable = true}, SHIFT(241),
  [883] = {.count = 1, .reusable = true}, SHIFT(148),
  [885] = {.count = 1, .reusable = true}, SHIFT(242),
  [887] = {.count = 1, .reusable = true}, SHIFT(339),
  [889] = {.count = 1, .reusable = true}, SHIFT(305),
  [891] = {.count = 1, .reusable = true}, SHIFT(19),
  [893] = {.count = 1, .reusable = true}, SHIFT(24),
  [895] = {.count = 1, .reusable = true}, SHIFT(97),
  [897] = {.count = 1, .reusable = true}, SHIFT(21),
  [899] = {.count = 1, .reusable = true}, SHIFT(243),
  [901] = {.count = 1, .reusable = true}, SHIFT(120),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [907] = {.count = 1, .reusable = true}, SHIFT(137),
  [909] = {.count = 1, .reusable = true}, SHIFT(336),
  [911] = {.count = 1, .reusable = true}, SHIFT(78),
  [913] = {.count = 1, .reusable = true}, SHIFT(81),
  [915] = {.count = 1, .reusable = true}, SHIFT(84),
  [917] = {.count = 1, .reusable = true}, SHIFT(62),
  [919] = {.count = 1, .reusable = true}, SHIFT(63),
  [921] = {.count = 1, .reusable = true}, SHIFT(65),
  [923] = {.count = 1, .reusable = true}, SHIFT(57),
  [925] = {.count = 1, .reusable = true}, SHIFT(335),
  [927] = {.count = 1, .reusable = true}, SHIFT(53),
  [929] = {.count = 1, .reusable = true}, SHIFT(4),
  [931] = {.count = 1, .reusable = true}, SHIFT(11),
  [933] = {.count = 1, .reusable = true}, SHIFT(12),
  [935] = {.count = 1, .reusable = true}, SHIFT(8),
  [937] = {.count = 1, .reusable = true}, SHIFT(308),
  [939] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [941] = {.count = 1, .reusable = true}, SHIFT(85),
  [943] = {.count = 1, .reusable = true}, SHIFT(306),
  [945] = {.count = 1, .reusable = true}, SHIFT(293),
  [947] = {.count = 1, .reusable = true}, SHIFT(251),
  [949] = {.count = 1, .reusable = true}, SHIFT(257),
  [951] = {.count = 1, .reusable = true}, SHIFT(259),
  [953] = {.count = 1, .reusable = true}, SHIFT(262),
  [955] = {.count = 1, .reusable = true}, SHIFT(274),
  [957] = {.count = 1, .reusable = true}, SHIFT(234),
  [959] = {.count = 1, .reusable = true}, SHIFT(304),
  [961] = {.count = 1, .reusable = true}, SHIFT(275),
  [963] = {.count = 1, .reusable = true}, SHIFT(233),
  [965] = {.count = 1, .reusable = true}, SHIFT(232),
  [967] = {.count = 1, .reusable = true}, SHIFT(329),
  [969] = {.count = 1, .reusable = true}, SHIFT(322),
  [971] = {.count = 1, .reusable = true}, SHIFT(324),
  [973] = {.count = 1, .reusable = true}, SHIFT(227),
  [975] = {.count = 1, .reusable = true}, SHIFT(295),
  [977] = {.count = 1, .reusable = true}, SHIFT(297),
  [979] = {.count = 1, .reusable = true}, SHIFT(301),
  [981] = {.count = 1, .reusable = true}, SHIFT(307),
  [983] = {.count = 1, .reusable = true}, SHIFT(315),
  [985] = {.count = 1, .reusable = true}, SHIFT(20),
  [987] = {.count = 1, .reusable = true}, SHIFT(48),
  [989] = {.count = 1, .reusable = true}, SHIFT(47),
  [991] = {.count = 1, .reusable = true}, SHIFT(45),
  [993] = {.count = 1, .reusable = true}, SHIFT(55),
  [995] = {.count = 1, .reusable = true}, SHIFT(102),
  [997] = {.count = 1, .reusable = true}, SHIFT(327),
  [999] = {.count = 1, .reusable = true}, SHIFT(215),
  [1001] = {.count = 1, .reusable = true}, SHIFT(328),
  [1003] = {.count = 1, .reusable = true}, SHIFT(56),
  [1005] = {.count = 1, .reusable = true}, SHIFT(260),
  [1007] = {.count = 1, .reusable = true}, SHIFT(370),
  [1009] = {.count = 1, .reusable = true}, SHIFT(371),
  [1011] = {.count = 1, .reusable = true}, SHIFT(332),
  [1013] = {.count = 1, .reusable = true}, SHIFT(253),
  [1015] = {.count = 1, .reusable = true}, SHIFT(247),
  [1017] = {.count = 1, .reusable = true}, SHIFT(244),
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
