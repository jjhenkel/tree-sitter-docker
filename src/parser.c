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
#define STATE_COUNT 385
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
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
  aux_sym__anything_token2 = 67,
  sym__almost_json_prefix = 68,
  sym__json_prefix = 69,
  sym__not_json_prefix = 70,
  anon_sym_COMMA = 71,
  anon_sym_RBRACK = 72,
  sym__space_no_newline = 73,
  sym_template_expr_curly_braces = 74,
  sym_template_expr_percent_signs = 75,
  aux_sym_template_expr_less_than_equals_token1 = 76,
  aux_sym_template_expr_less_than_equals_token2 = 77,
  aux_sym_template_expr_less_than_equals_token3 = 78,
  sym_comment = 79,
  sym_line_continuation = 80,
  aux_sym__json_string_token1 = 81,
  sym__json_escape_sequence = 82,
  sym_dockerfile = 83,
  sym__directive = 84,
  sym_onbuild = 85,
  sym_env = 86,
  sym_label = 87,
  sym_healthcheck = 88,
  sym_arg = 89,
  sym_arg_default = 90,
  sym_add = 91,
  sym_copy = 92,
  sym_stopsignal = 93,
  sym_signal_name = 94,
  sym_shell = 95,
  sym_volume = 96,
  sym_path = 97,
  sym_workdir = 98,
  sym_user = 99,
  sym_user_name = 100,
  sym_user_group = 101,
  sym_user_id = 102,
  sym_user_group_id = 103,
  sym_cmd = 104,
  sym_entrypoint = 105,
  sym_run = 106,
  sym_maintainer = 107,
  sym_expose = 108,
  sym__port_spec = 109,
  sym_mapped_port = 110,
  sym_mapped_no_lhs = 111,
  sym__port = 112,
  sym_port = 113,
  sym_port_range = 114,
  sym__port_part = 115,
  sym_port_protocol = 116,
  sym_from = 117,
  sym_platform = 118,
  sym_repository = 119,
  sym__repository_start = 120,
  sym__repository_continued = 121,
  sym_image = 122,
  sym_tag = 123,
  sym_digest = 124,
  sym_as_name = 125,
  sym_docker_variable = 126,
  sym_variable_default_value = 127,
  sym_variable_this_or_null = 128,
  aux_sym__anything = 129,
  sym_json_array = 130,
  sym__anything_or_json_array = 131,
  sym_template_expr_less_than_equals = 132,
  sym__json_value = 133,
  aux_sym__json_string = 134,
  aux_sym_dockerfile_repeat1 = 135,
  aux_sym_add_repeat1 = 136,
  aux_sym_workdir_repeat1 = 137,
  aux_sym_expose_repeat1 = 138,
  aux_sym_repository_repeat1 = 139,
  aux_sym__repository_start_repeat1 = 140,
  aux_sym__repository_start_repeat2 = 141,
  aux_sym__repository_start_repeat3 = 142,
  aux_sym__repository_start_repeat4 = 143,
  aux_sym_json_array_repeat1 = 144,
  aux_sym_template_expr_less_than_equals_repeat1 = 145,
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
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead == 'S') ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(240);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(906);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '}') ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(454);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(440);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(427);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(864);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(886);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(828);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(894);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(848);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(887);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(873);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0) ADVANCE(899);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead == 'S') ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(240);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(906);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '}') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(335);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(358);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(344);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(804);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(804);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(568);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(506);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(555);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(510);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(542);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(568);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(506);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(555);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(510);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(542);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(716);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(731);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(718);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(758);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(763);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(765);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(716);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(731);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(718);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(758);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(763);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(765);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(641);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(628);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(583);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(629);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(615);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(641);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(628);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(583);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(629);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(615);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(702);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(657);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(644);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(684);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(703);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(689);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(691);
      if (lookahead == '\\') ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 25:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(702);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(657);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(644);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(684);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(703);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(689);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(691);
      if (lookahead == '\\') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(815);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(813);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(920);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(900);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(900);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(900);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(923);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(922);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(922);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(903);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '#') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(824);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(917);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(922);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(922);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(908);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(907);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '#') ADVANCE(911);
      if (lookahead == '\\') ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(911);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '#') ADVANCE(914);
      if (lookahead == '\\') ADVANCE(913);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(914);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(374);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '}') ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '%') ADVANCE(802);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(820);
      if (lookahead == '\\') ADVANCE(820);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(820);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(493);
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
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 59:
      if (lookahead == '+') ADVANCE(825);
      if (lookahead == '-') ADVANCE(821);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(471);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(811);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(811);
      if (lookahead != 0) ADVANCE(918);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(811);
      if (lookahead != 0) ADVANCE(919);
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
      if (lookahead == '"') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(901);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(35);
      END_STATE();
    case 75:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(810);
      END_STATE();
    case 76:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(815);
      END_STATE();
    case 77:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(813);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 104:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 105:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(145);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 143:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 144:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 146:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 151:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 161:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 162:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 163:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 164:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(918);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '2') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '5') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '6') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
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
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(370);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(311);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
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
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(302);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
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
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_workdir_token3);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '#') ADVANCE(454);
      if (lookahead == '$') ADVANCE(377);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(440);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(427);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(396);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '2') ADVANCE(477);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(471);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(806);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '{') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 493:
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
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(522);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(564);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(513);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(525);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(518);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(505);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(541);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(504);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(509);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(507);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(508);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(550);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(512);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(566);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(557);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(546);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(523);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(534);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(568);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(551);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(637);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(586);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(598);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(614);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(584);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(582);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(625);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(580);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(633);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(638);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(578);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(623);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(619);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(599);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(640);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(607);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(641);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(624);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(808);
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
          lookahead != '}') ADVANCE(641);
      END_STATE();
    case 642:
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
          lookahead != '}') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(649);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(711);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(660);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(653);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(688);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(651);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(658);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(656);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(700);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(674);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(654);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(676);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(653);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(695);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(655);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(659);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(680);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(699);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(705);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(671);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(713);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(704);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(693);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(673);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(655);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(701);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(715);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(698);
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 715:
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
          lookahead != '}') ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(741);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(748);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(785);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(734);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(746);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(742);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(762);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(725);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(732);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(730);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(728);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(726);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(726);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(729);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(782);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(771);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(720);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(774);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(770);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(779);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(787);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(778);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(764);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(733);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(740);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(756);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(744);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(755);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(716);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(772);
      if (lookahead == '{') ADVANCE(800);
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
          lookahead != '}') ADVANCE(716);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(789);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(792);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(793);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(795);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(796);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(803);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(805);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(807);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(812);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(814);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(791);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 820:
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
          lookahead != '}') ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(864);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(886);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(828);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(894);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(848);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(887);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(873);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(875);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(836);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(842);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(836);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(885);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(899);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__anything_token2);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__almost_json_prefix);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(904);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(908);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(907);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(908);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(911);
      if (lookahead == '\\') ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(911);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(914);
      if (lookahead == '\\') ADVANCE(913);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(914);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(914);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(914);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\\') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(917);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(917);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(917);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(920);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 923:
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
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 5},
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
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 55},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 55},
  [184] = {.lex_state = 55},
  [185] = {.lex_state = 56},
  [186] = {.lex_state = 56},
  [187] = {.lex_state = 56},
  [188] = {.lex_state = 55},
  [189] = {.lex_state = 56},
  [190] = {.lex_state = 56},
  [191] = {.lex_state = 56},
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
  [213] = {.lex_state = 55},
  [214] = {.lex_state = 4},
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
  [225] = {.lex_state = 55},
  [226] = {.lex_state = 55},
  [227] = {.lex_state = 55},
  [228] = {.lex_state = 55},
  [229] = {.lex_state = 55},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 34},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 48},
  [234] = {.lex_state = 48},
  [235] = {.lex_state = 48},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 50},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 22},
  [241] = {.lex_state = 24},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 38},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 38},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 38},
  [248] = {.lex_state = 50},
  [249] = {.lex_state = 50},
  [250] = {.lex_state = 38},
  [251] = {.lex_state = 38},
  [252] = {.lex_state = 24},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 38},
  [255] = {.lex_state = 22},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 50},
  [259] = {.lex_state = 50},
  [260] = {.lex_state = 38},
  [261] = {.lex_state = 38},
  [262] = {.lex_state = 50},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 57},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 57},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 57},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 40},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 57},
  [281] = {.lex_state = 57},
  [282] = {.lex_state = 57},
  [283] = {.lex_state = 57},
  [284] = {.lex_state = 57},
  [285] = {.lex_state = 57},
  [286] = {.lex_state = 58},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 57},
  [289] = {.lex_state = 57},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 57},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 57},
  [294] = {.lex_state = 57},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 41},
  [298] = {.lex_state = 50},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 11},
  [307] = {.lex_state = 42},
  [308] = {.lex_state = 57},
  [309] = {.lex_state = 42},
  [310] = {.lex_state = 42},
  [311] = {.lex_state = 42},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 43},
  [316] = {.lex_state = 44},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 53},
  [324] = {.lex_state = 42},
  [325] = {.lex_state = 42},
  [326] = {.lex_state = 42},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 42},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 43},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 45},
  [333] = {.lex_state = 44},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 43},
  [336] = {.lex_state = 44},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 42},
  [346] = {.lex_state = 11},
  [347] = {.lex_state = 42},
  [348] = {.lex_state = 44},
  [349] = {.lex_state = 42},
  [350] = {.lex_state = 42},
  [351] = {.lex_state = 42},
  [352] = {.lex_state = 42},
  [353] = {.lex_state = 42},
  [354] = {.lex_state = 43},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 43},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 42},
  [362] = {.lex_state = 54},
  [363] = {.lex_state = 44},
  [364] = {.lex_state = 43},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 37},
  [367] = {.lex_state = 37},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 44},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 43},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 57},
  [379] = {.lex_state = 43},
  [380] = {.lex_state = 44},
  [381] = {.lex_state = 44},
  [382] = {.lex_state = 57},
  [383] = {.lex_state = 57},
  [384] = {.lex_state = 57},
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
    [sym_dockerfile] = STATE(360),
    [sym__directive] = STATE(149),
    [sym_onbuild] = STATE(149),
    [sym_env] = STATE(149),
    [sym_label] = STATE(149),
    [sym_healthcheck] = STATE(149),
    [sym_arg] = STATE(149),
    [sym_add] = STATE(149),
    [sym_copy] = STATE(149),
    [sym_stopsignal] = STATE(149),
    [sym_shell] = STATE(149),
    [sym_volume] = STATE(149),
    [sym_workdir] = STATE(149),
    [sym_user] = STATE(149),
    [sym_cmd] = STATE(149),
    [sym_entrypoint] = STATE(149),
    [sym_run] = STATE(149),
    [sym_maintainer] = STATE(149),
    [sym_expose] = STATE(149),
    [sym_from] = STATE(149),
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
    [sym__directive] = STATE(149),
    [sym_onbuild] = STATE(149),
    [sym_env] = STATE(149),
    [sym_label] = STATE(149),
    [sym_healthcheck] = STATE(149),
    [sym_arg] = STATE(149),
    [sym_add] = STATE(149),
    [sym_copy] = STATE(149),
    [sym_stopsignal] = STATE(149),
    [sym_shell] = STATE(149),
    [sym_volume] = STATE(149),
    [sym_workdir] = STATE(149),
    [sym_user] = STATE(149),
    [sym_cmd] = STATE(149),
    [sym_entrypoint] = STATE(149),
    [sym_run] = STATE(149),
    [sym_maintainer] = STATE(149),
    [sym_expose] = STATE(149),
    [sym_from] = STATE(149),
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
    [sym__directive] = STATE(149),
    [sym_onbuild] = STATE(149),
    [sym_env] = STATE(149),
    [sym_label] = STATE(149),
    [sym_healthcheck] = STATE(149),
    [sym_arg] = STATE(149),
    [sym_add] = STATE(149),
    [sym_copy] = STATE(149),
    [sym_stopsignal] = STATE(149),
    [sym_shell] = STATE(149),
    [sym_volume] = STATE(149),
    [sym_workdir] = STATE(149),
    [sym_user] = STATE(149),
    [sym_cmd] = STATE(149),
    [sym_entrypoint] = STATE(149),
    [sym_run] = STATE(149),
    [sym_maintainer] = STATE(149),
    [sym_expose] = STATE(149),
    [sym_from] = STATE(149),
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
    [sym_expose] = STATE(150),
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
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(79),
    [sym_port] = STATE(79),
    [sym_port_range] = STATE(79),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(5),
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
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_user_token1] = ACTIONS(101),
    [aux_sym_user_id_token1] = ACTIONS(109),
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
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(79),
    [sym_port] = STATE(79),
    [sym_port_range] = STATE(79),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_onbuild_token1] = ACTIONS(112),
    [aux_sym_env_token1] = ACTIONS(112),
    [aux_sym_label_token1] = ACTIONS(112),
    [aux_sym_healthcheck_token1] = ACTIONS(112),
    [aux_sym_arg_token1] = ACTIONS(112),
    [aux_sym_add_token1] = ACTIONS(112),
    [aux_sym_copy_token1] = ACTIONS(112),
    [aux_sym_stopsignal_token1] = ACTIONS(112),
    [aux_sym_shell_token1] = ACTIONS(112),
    [aux_sym_volume_token1] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [aux_sym_workdir_token1] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_user_token1] = ACTIONS(112),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [aux_sym_cmd_token1] = ACTIONS(112),
    [aux_sym_entrypoint_token1] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_maintainer_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [aux_sym_from_token1] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
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
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_cmd_token1] = ACTIONS(122),
    [aux_sym_entrypoint_token1] = ACTIONS(122),
    [aux_sym_run_token1] = ACTIONS(122),
    [aux_sym_maintainer_token1] = ACTIONS(122),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(128),
    [aux_sym__repository_start_token16] = ACTIONS(126),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [8] = {
    [aux_sym__repository_start_repeat2] = STATE(18),
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
    [anon_sym_SLASH] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(128),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [aux_sym__repository_start_token16] = ACTIONS(126),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
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
    [anon_sym_SLASH] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(128),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [aux_sym__repository_start_token16] = ACTIONS(126),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [10] = {
    [aux_sym__repository_start_repeat4] = STATE(16),
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
    [anon_sym_SLASH] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(128),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [aux_sym__repository_start_token16] = ACTIONS(126),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_onbuild_token1] = ACTIONS(140),
    [aux_sym_env_token1] = ACTIONS(140),
    [aux_sym_label_token1] = ACTIONS(140),
    [aux_sym_healthcheck_token1] = ACTIONS(140),
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
    [anon_sym_SLASH] = ACTIONS(138),
    [aux_sym_from_token1] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [aux_sym_from_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(140),
    [aux_sym__repository_start_token12] = ACTIONS(142),
    [aux_sym__repository_start_token15] = ACTIONS(142),
    [aux_sym__repository_start_token16] = ACTIONS(138),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_from_token2] = ACTIONS(147),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token8] = ACTIONS(149),
    [aux_sym__repository_start_token11] = ACTIONS(149),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_onbuild_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_label_token1] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_stopsignal_token1] = ACTIONS(154),
    [aux_sym_shell_token1] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(154),
    [aux_sym_workdir_token1] = ACTIONS(154),
    [aux_sym_user_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_maintainer_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(152),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(152),
    [aux_sym_from_token2] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(152),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [14] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_from_token2] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token16] = ACTIONS(163),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [15] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
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
    [anon_sym_DOLLAR] = ACTIONS(171),
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
    [aux_sym__repository_start_token2] = ACTIONS(171),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [16] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym__repository_start_token3] = ACTIONS(180),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [aux_sym__repository_start_token16] = ACTIONS(178),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [17] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym__repository_start_token3] = ACTIONS(180),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [aux_sym__repository_start_token16] = ACTIONS(178),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [18] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym__repository_start_token3] = ACTIONS(180),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [aux_sym__repository_start_token16] = ACTIONS(178),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
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
    [anon_sym_DOLLAR] = ACTIONS(182),
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
    [aux_sym__repository_start_token2] = ACTIONS(182),
    [aux_sym__repository_start_token3] = ACTIONS(184),
    [aux_sym__repository_start_token16] = ACTIONS(182),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
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
    [aux_sym__repository_start_token12] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [aux_sym__repository_start_token16] = ACTIONS(190),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
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
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [aux_sym__repository_start_token8] = ACTIONS(194),
    [aux_sym__repository_start_token11] = ACTIONS(194),
    [aux_sym__repository_start_token16] = ACTIONS(194),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
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
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token4] = ACTIONS(198),
    [aux_sym__repository_start_token7] = ACTIONS(198),
    [aux_sym__repository_start_token16] = ACTIONS(198),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [24] = {
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
    [anon_sym_DOLLAR] = ACTIONS(167),
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
    [aux_sym__repository_start_token2] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [25] = {
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
    [anon_sym_DOLLAR] = ACTIONS(202),
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
    [aux_sym__repository_start_token2] = ACTIONS(202),
    [aux_sym__repository_start_token3] = ACTIONS(204),
    [aux_sym__repository_start_token16] = ACTIONS(202),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [26] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
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
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token8] = ACTIONS(208),
    [aux_sym__repository_start_token11] = ACTIONS(208),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [27] = {
    [aux_sym__repository_start_repeat2] = STATE(32),
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
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token4] = ACTIONS(210),
    [aux_sym__repository_start_token7] = ACTIONS(210),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
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
    [anon_sym_DOLLAR] = ACTIONS(212),
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
    [aux_sym__repository_start_token2] = ACTIONS(212),
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [29] = {
    [aux_sym__repository_start_repeat4] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym_onbuild_token1] = ACTIONS(140),
    [aux_sym_env_token1] = ACTIONS(140),
    [aux_sym_label_token1] = ACTIONS(140),
    [aux_sym_healthcheck_token1] = ACTIONS(140),
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
    [aux_sym__repository_start_token3] = ACTIONS(140),
    [aux_sym__repository_start_token12] = ACTIONS(214),
    [aux_sym__repository_start_token15] = ACTIONS(214),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [30] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_from_token2] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(212),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [31] = {
    [aux_sym__repository_start_repeat4] = STATE(34),
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
    [aux_sym__repository_start_token3] = ACTIONS(206),
    [aux_sym__repository_start_token12] = ACTIONS(219),
    [aux_sym__repository_start_token15] = ACTIONS(219),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [32] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
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
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token4] = ACTIONS(210),
    [aux_sym__repository_start_token7] = ACTIONS(210),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token8] = ACTIONS(208),
    [aux_sym__repository_start_token11] = ACTIONS(208),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [34] = {
    [aux_sym__repository_start_repeat4] = STATE(29),
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
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token12] = ACTIONS(219),
    [aux_sym__repository_start_token15] = ACTIONS(219),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [35] = {
    [sym_port_protocol] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_onbuild_token1] = ACTIONS(223),
    [aux_sym_env_token1] = ACTIONS(223),
    [aux_sym_label_token1] = ACTIONS(223),
    [aux_sym_healthcheck_token1] = ACTIONS(223),
    [aux_sym_arg_token1] = ACTIONS(223),
    [aux_sym_add_token1] = ACTIONS(223),
    [aux_sym_copy_token1] = ACTIONS(223),
    [aux_sym_stopsignal_token1] = ACTIONS(223),
    [aux_sym_shell_token1] = ACTIONS(223),
    [aux_sym_volume_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [aux_sym_workdir_token1] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [aux_sym_user_token1] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [aux_sym_user_id_token1] = ACTIONS(223),
    [aux_sym_cmd_token1] = ACTIONS(223),
    [aux_sym_entrypoint_token1] = ACTIONS(223),
    [aux_sym_run_token1] = ACTIONS(223),
    [aux_sym_maintainer_token1] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(225),
    [aux_sym_from_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [anon_sym_SLASH] = ACTIONS(225),
    [aux_sym_from_token1] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
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
    [anon_sym_DOLLAR] = ACTIONS(229),
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
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [38] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_onbuild_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_label_token1] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_stopsignal_token1] = ACTIONS(154),
    [aux_sym_shell_token1] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(154),
    [aux_sym_workdir_token1] = ACTIONS(154),
    [aux_sym_user_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(152),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_maintainer_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(152),
    [aux_sym_from_token2] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token4] = ACTIONS(232),
    [aux_sym__repository_start_token7] = ACTIONS(232),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [39] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(145),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_from_token2] = ACTIONS(147),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token8] = ACTIONS(235),
    [aux_sym__repository_start_token11] = ACTIONS(235),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [40] = {
    [aux_sym__repository_start_repeat4] = STATE(45),
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
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [41] = {
    [aux_sym__repository_start_repeat1] = STATE(55),
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
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(246),
    [aux_sym_cmd_token1] = ACTIONS(246),
    [aux_sym_entrypoint_token1] = ACTIONS(246),
    [aux_sym_run_token1] = ACTIONS(246),
    [aux_sym_maintainer_token1] = ACTIONS(246),
    [aux_sym_expose_token1] = ACTIONS(246),
    [aux_sym_from_token1] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(244),
    [aux_sym_from_token2] = ACTIONS(246),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(248),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [42] = {
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
    [anon_sym_DOLLAR] = ACTIONS(202),
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
    [aux_sym__repository_start_token2] = ACTIONS(202),
    [aux_sym__repository_start_token3] = ACTIONS(204),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [43] = {
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
    [anon_sym_DOLLAR] = ACTIONS(182),
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
    [aux_sym__repository_start_token2] = ACTIONS(182),
    [aux_sym__repository_start_token3] = ACTIONS(184),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [44] = {
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [45] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [46] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [47] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(190),
    [aux_sym__repository_start_token15] = ACTIONS(190),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_onbuild_token1] = ACTIONS(182),
    [aux_sym_env_token1] = ACTIONS(182),
    [aux_sym_label_token1] = ACTIONS(182),
    [aux_sym_healthcheck_token1] = ACTIONS(182),
    [aux_sym_arg_token1] = ACTIONS(182),
    [aux_sym_add_token1] = ACTIONS(182),
    [aux_sym_copy_token1] = ACTIONS(182),
    [aux_sym_stopsignal_token1] = ACTIONS(182),
    [aux_sym_shell_token1] = ACTIONS(182),
    [aux_sym_volume_token1] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(182),
    [aux_sym_user_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [aux_sym_user_id_token1] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__repository_start_repeat3] = STATE(57),
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
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [51] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(196),
    [aux_sym__repository_start_token8] = ACTIONS(194),
    [aux_sym__repository_start_token11] = ACTIONS(194),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [52] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(200),
    [aux_sym__repository_start_token4] = ACTIONS(198),
    [aux_sym__repository_start_token7] = ACTIONS(198),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [53] = {
    [aux_sym__repository_start_repeat2] = STATE(46),
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
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [54] = {
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
    [anon_sym_DOLLAR] = ACTIONS(167),
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
    [aux_sym__repository_start_token2] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [55] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
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
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(240),
    [aux_sym_cmd_token1] = ACTIONS(240),
    [aux_sym_entrypoint_token1] = ACTIONS(240),
    [aux_sym_run_token1] = ACTIONS(240),
    [aux_sym_maintainer_token1] = ACTIONS(240),
    [aux_sym_expose_token1] = ACTIONS(240),
    [aux_sym_from_token1] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(238),
    [aux_sym_from_token2] = ACTIONS(240),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(242),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym_onbuild_token1] = ACTIONS(202),
    [aux_sym_env_token1] = ACTIONS(202),
    [aux_sym_label_token1] = ACTIONS(202),
    [aux_sym_healthcheck_token1] = ACTIONS(202),
    [aux_sym_arg_token1] = ACTIONS(202),
    [aux_sym_add_token1] = ACTIONS(202),
    [aux_sym_copy_token1] = ACTIONS(202),
    [aux_sym_stopsignal_token1] = ACTIONS(202),
    [aux_sym_shell_token1] = ACTIONS(202),
    [aux_sym_volume_token1] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [aux_sym_workdir_token1] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [aux_sym_user_token1] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [aux_sym_user_id_token1] = ACTIONS(202),
    [aux_sym_cmd_token1] = ACTIONS(202),
    [aux_sym_entrypoint_token1] = ACTIONS(202),
    [aux_sym_run_token1] = ACTIONS(202),
    [aux_sym_maintainer_token1] = ACTIONS(202),
    [aux_sym_expose_token1] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [aux_sym_from_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [58] = {
    [aux_sym__repository_start_repeat1] = STATE(64),
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
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(258),
    [aux_sym_cmd_token1] = ACTIONS(258),
    [aux_sym_entrypoint_token1] = ACTIONS(258),
    [aux_sym_run_token1] = ACTIONS(258),
    [aux_sym_maintainer_token1] = ACTIONS(258),
    [aux_sym_expose_token1] = ACTIONS(258),
    [aux_sym_from_token1] = ACTIONS(258),
    [aux_sym_from_token2] = ACTIONS(258),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(260),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(176),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [aux_sym_from_token2] = ACTIONS(174),
    [aux_sym__repository_start_token16] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym_onbuild_token1] = ACTIONS(276),
    [aux_sym_env_token1] = ACTIONS(276),
    [aux_sym_label_token1] = ACTIONS(276),
    [aux_sym_healthcheck_token1] = ACTIONS(276),
    [aux_sym_arg_token1] = ACTIONS(276),
    [aux_sym_add_token1] = ACTIONS(276),
    [aux_sym_copy_token1] = ACTIONS(276),
    [aux_sym_stopsignal_token1] = ACTIONS(276),
    [aux_sym_shell_token1] = ACTIONS(276),
    [aux_sym_volume_token1] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [aux_sym_workdir_token1] = ACTIONS(276),
    [anon_sym_DOLLAR] = ACTIONS(276),
    [aux_sym_user_token1] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(276),
    [aux_sym_user_id_token1] = ACTIONS(276),
    [aux_sym_cmd_token1] = ACTIONS(276),
    [aux_sym_entrypoint_token1] = ACTIONS(276),
    [aux_sym_run_token1] = ACTIONS(276),
    [aux_sym_maintainer_token1] = ACTIONS(276),
    [aux_sym_expose_token1] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [64] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(280),
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
    [aux_sym_workdir_token1] = ACTIONS(282),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(282),
    [aux_sym_cmd_token1] = ACTIONS(282),
    [aux_sym_entrypoint_token1] = ACTIONS(282),
    [aux_sym_run_token1] = ACTIONS(282),
    [aux_sym_maintainer_token1] = ACTIONS(282),
    [aux_sym_expose_token1] = ACTIONS(282),
    [aux_sym_from_token1] = ACTIONS(282),
    [aux_sym_from_token2] = ACTIONS(282),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(284),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [65] = {
    [aux_sym__repository_start_repeat2] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(280),
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
    [aux_sym_workdir_token1] = ACTIONS(282),
    [aux_sym_user_token1] = ACTIONS(282),
    [aux_sym_cmd_token1] = ACTIONS(282),
    [aux_sym_entrypoint_token1] = ACTIONS(282),
    [aux_sym_run_token1] = ACTIONS(282),
    [aux_sym_maintainer_token1] = ACTIONS(282),
    [aux_sym_expose_token1] = ACTIONS(282),
    [aux_sym_from_token1] = ACTIONS(282),
    [aux_sym_from_token2] = ACTIONS(282),
    [aux_sym__repository_start_token3] = ACTIONS(284),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_onbuild_token1] = ACTIONS(223),
    [aux_sym_env_token1] = ACTIONS(223),
    [aux_sym_label_token1] = ACTIONS(223),
    [aux_sym_healthcheck_token1] = ACTIONS(223),
    [aux_sym_arg_token1] = ACTIONS(223),
    [aux_sym_add_token1] = ACTIONS(223),
    [aux_sym_copy_token1] = ACTIONS(223),
    [aux_sym_stopsignal_token1] = ACTIONS(223),
    [aux_sym_shell_token1] = ACTIONS(223),
    [aux_sym_volume_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [aux_sym_workdir_token1] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [aux_sym_user_token1] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [aux_sym_user_id_token1] = ACTIONS(223),
    [aux_sym_cmd_token1] = ACTIONS(223),
    [aux_sym_entrypoint_token1] = ACTIONS(223),
    [aux_sym_run_token1] = ACTIONS(223),
    [aux_sym_maintainer_token1] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
    [aux_sym__repository_start_repeat3] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(280),
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
    [aux_sym_workdir_token1] = ACTIONS(282),
    [aux_sym_user_token1] = ACTIONS(282),
    [aux_sym_cmd_token1] = ACTIONS(282),
    [aux_sym_entrypoint_token1] = ACTIONS(282),
    [aux_sym_run_token1] = ACTIONS(282),
    [aux_sym_maintainer_token1] = ACTIONS(282),
    [aux_sym_expose_token1] = ACTIONS(282),
    [aux_sym_from_token1] = ACTIONS(282),
    [aux_sym_from_token2] = ACTIONS(282),
    [aux_sym__repository_start_token3] = ACTIONS(284),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [68] = {
    [aux_sym__repository_start_repeat4] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(280),
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
    [aux_sym_workdir_token1] = ACTIONS(282),
    [aux_sym_user_token1] = ACTIONS(282),
    [aux_sym_cmd_token1] = ACTIONS(282),
    [aux_sym_entrypoint_token1] = ACTIONS(282),
    [aux_sym_run_token1] = ACTIONS(282),
    [aux_sym_maintainer_token1] = ACTIONS(282),
    [aux_sym_expose_token1] = ACTIONS(282),
    [aux_sym_from_token1] = ACTIONS(282),
    [aux_sym_from_token2] = ACTIONS(282),
    [aux_sym__repository_start_token3] = ACTIONS(284),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [69] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(288),
    [aux_sym_env_token1] = ACTIONS(288),
    [aux_sym_label_token1] = ACTIONS(288),
    [aux_sym_healthcheck_token1] = ACTIONS(288),
    [aux_sym_arg_token1] = ACTIONS(288),
    [aux_sym_add_token1] = ACTIONS(288),
    [aux_sym_copy_token1] = ACTIONS(288),
    [aux_sym_stopsignal_token1] = ACTIONS(288),
    [aux_sym_shell_token1] = ACTIONS(288),
    [aux_sym_volume_token1] = ACTIONS(288),
    [aux_sym_workdir_token1] = ACTIONS(288),
    [aux_sym_user_token1] = ACTIONS(288),
    [aux_sym_cmd_token1] = ACTIONS(288),
    [aux_sym_entrypoint_token1] = ACTIONS(288),
    [aux_sym_run_token1] = ACTIONS(288),
    [aux_sym_maintainer_token1] = ACTIONS(288),
    [aux_sym_expose_token1] = ACTIONS(288),
    [aux_sym_from_token1] = ACTIONS(288),
    [aux_sym_from_token2] = ACTIONS(288),
    [aux_sym__repository_start_token3] = ACTIONS(290),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [70] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(288),
    [aux_sym_env_token1] = ACTIONS(288),
    [aux_sym_label_token1] = ACTIONS(288),
    [aux_sym_healthcheck_token1] = ACTIONS(288),
    [aux_sym_arg_token1] = ACTIONS(288),
    [aux_sym_add_token1] = ACTIONS(288),
    [aux_sym_copy_token1] = ACTIONS(288),
    [aux_sym_stopsignal_token1] = ACTIONS(288),
    [aux_sym_shell_token1] = ACTIONS(288),
    [aux_sym_volume_token1] = ACTIONS(288),
    [aux_sym_workdir_token1] = ACTIONS(288),
    [aux_sym_user_token1] = ACTIONS(288),
    [aux_sym_cmd_token1] = ACTIONS(288),
    [aux_sym_entrypoint_token1] = ACTIONS(288),
    [aux_sym_run_token1] = ACTIONS(288),
    [aux_sym_maintainer_token1] = ACTIONS(288),
    [aux_sym_expose_token1] = ACTIONS(288),
    [aux_sym_from_token1] = ACTIONS(288),
    [aux_sym_from_token2] = ACTIONS(288),
    [aux_sym__repository_start_token3] = ACTIONS(290),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [71] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(288),
    [aux_sym_env_token1] = ACTIONS(288),
    [aux_sym_label_token1] = ACTIONS(288),
    [aux_sym_healthcheck_token1] = ACTIONS(288),
    [aux_sym_arg_token1] = ACTIONS(288),
    [aux_sym_add_token1] = ACTIONS(288),
    [aux_sym_copy_token1] = ACTIONS(288),
    [aux_sym_stopsignal_token1] = ACTIONS(288),
    [aux_sym_shell_token1] = ACTIONS(288),
    [aux_sym_volume_token1] = ACTIONS(288),
    [aux_sym_workdir_token1] = ACTIONS(288),
    [aux_sym_user_token1] = ACTIONS(288),
    [aux_sym_cmd_token1] = ACTIONS(288),
    [aux_sym_entrypoint_token1] = ACTIONS(288),
    [aux_sym_run_token1] = ACTIONS(288),
    [aux_sym_maintainer_token1] = ACTIONS(288),
    [aux_sym_expose_token1] = ACTIONS(288),
    [aux_sym_from_token1] = ACTIONS(288),
    [aux_sym_from_token2] = ACTIONS(288),
    [aux_sym__repository_start_token3] = ACTIONS(290),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_onbuild_token1] = ACTIONS(120),
    [aux_sym_env_token1] = ACTIONS(120),
    [aux_sym_label_token1] = ACTIONS(120),
    [aux_sym_healthcheck_token1] = ACTIONS(120),
    [aux_sym_arg_token1] = ACTIONS(120),
    [aux_sym_add_token1] = ACTIONS(120),
    [aux_sym_copy_token1] = ACTIONS(120),
    [aux_sym_stopsignal_token1] = ACTIONS(120),
    [aux_sym_shell_token1] = ACTIONS(120),
    [aux_sym_volume_token1] = ACTIONS(120),
    [aux_sym_workdir_token1] = ACTIONS(120),
    [aux_sym_user_token1] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(122),
    [aux_sym_cmd_token1] = ACTIONS(120),
    [aux_sym_entrypoint_token1] = ACTIONS(120),
    [aux_sym_run_token1] = ACTIONS(120),
    [aux_sym_maintainer_token1] = ACTIONS(120),
    [aux_sym_expose_token1] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(120),
    [aux_sym__repository_start_token16] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
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
  [74] = {
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
  [75] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym_user_token1] = ACTIONS(298),
    [aux_sym_cmd_token1] = ACTIONS(298),
    [aux_sym_entrypoint_token1] = ACTIONS(298),
    [aux_sym_run_token1] = ACTIONS(298),
    [aux_sym_maintainer_token1] = ACTIONS(298),
    [aux_sym_expose_token1] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token3] = ACTIONS(300),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [76] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(302),
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
    [aux_sym_path_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_workdir_token1] = ACTIONS(304),
    [aux_sym_user_token1] = ACTIONS(304),
    [aux_sym_cmd_token1] = ACTIONS(304),
    [aux_sym_entrypoint_token1] = ACTIONS(304),
    [aux_sym_run_token1] = ACTIONS(304),
    [aux_sym_maintainer_token1] = ACTIONS(304),
    [aux_sym_expose_token1] = ACTIONS(304),
    [aux_sym_from_token1] = ACTIONS(304),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [aux_sym_onbuild_token1] = ACTIONS(310),
    [aux_sym_env_token1] = ACTIONS(310),
    [aux_sym_label_token1] = ACTIONS(310),
    [aux_sym_healthcheck_token1] = ACTIONS(310),
    [aux_sym_arg_token1] = ACTIONS(310),
    [aux_sym_add_token1] = ACTIONS(310),
    [aux_sym_copy_token1] = ACTIONS(310),
    [aux_sym_stopsignal_token1] = ACTIONS(310),
    [aux_sym_shell_token1] = ACTIONS(310),
    [aux_sym_volume_token1] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [aux_sym_workdir_token1] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [aux_sym_user_token1] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [aux_sym_user_id_token1] = ACTIONS(310),
    [aux_sym_cmd_token1] = ACTIONS(310),
    [aux_sym_entrypoint_token1] = ACTIONS(310),
    [aux_sym_run_token1] = ACTIONS(310),
    [aux_sym_maintainer_token1] = ACTIONS(310),
    [aux_sym_expose_token1] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_workdir_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(312),
    [aux_sym_onbuild_token1] = ACTIONS(314),
    [aux_sym_env_token1] = ACTIONS(314),
    [aux_sym_label_token1] = ACTIONS(314),
    [aux_sym_healthcheck_token1] = ACTIONS(314),
    [aux_sym_arg_token1] = ACTIONS(314),
    [aux_sym_add_token1] = ACTIONS(314),
    [aux_sym_copy_token1] = ACTIONS(314),
    [aux_sym_stopsignal_token1] = ACTIONS(314),
    [aux_sym_shell_token1] = ACTIONS(314),
    [aux_sym_volume_token1] = ACTIONS(314),
    [aux_sym_workdir_token1] = ACTIONS(314),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [aux_sym_workdir_token3] = ACTIONS(316),
    [aux_sym_workdir_token4] = ACTIONS(318),
    [aux_sym_user_token1] = ACTIONS(314),
    [aux_sym_cmd_token1] = ACTIONS(314),
    [aux_sym_entrypoint_token1] = ACTIONS(314),
    [aux_sym_run_token1] = ACTIONS(314),
    [aux_sym_maintainer_token1] = ACTIONS(314),
    [aux_sym_expose_token1] = ACTIONS(314),
    [aux_sym_from_token1] = ACTIONS(314),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(320),
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
    [anon_sym_DQUOTE] = ACTIONS(320),
    [aux_sym_workdir_token1] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [aux_sym_user_token1] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(322),
    [aux_sym_user_id_token1] = ACTIONS(320),
    [aux_sym_cmd_token1] = ACTIONS(320),
    [aux_sym_entrypoint_token1] = ACTIONS(320),
    [aux_sym_run_token1] = ACTIONS(320),
    [aux_sym_maintainer_token1] = ACTIONS(320),
    [aux_sym_expose_token1] = ACTIONS(320),
    [aux_sym_from_token1] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [80] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(324),
    [aux_sym_onbuild_token1] = ACTIONS(326),
    [aux_sym_env_token1] = ACTIONS(326),
    [aux_sym_label_token1] = ACTIONS(326),
    [aux_sym_healthcheck_token1] = ACTIONS(326),
    [aux_sym_arg_token1] = ACTIONS(326),
    [aux_sym_add_token1] = ACTIONS(326),
    [aux_sym_copy_token1] = ACTIONS(326),
    [aux_sym_stopsignal_token1] = ACTIONS(326),
    [aux_sym_shell_token1] = ACTIONS(326),
    [aux_sym_volume_token1] = ACTIONS(326),
    [aux_sym_path_token1] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(326),
    [aux_sym_user_token1] = ACTIONS(326),
    [aux_sym_cmd_token1] = ACTIONS(326),
    [aux_sym_entrypoint_token1] = ACTIONS(326),
    [aux_sym_run_token1] = ACTIONS(326),
    [aux_sym_maintainer_token1] = ACTIONS(326),
    [aux_sym_expose_token1] = ACTIONS(326),
    [aux_sym_from_token1] = ACTIONS(326),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [81] = {
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
    [aux_sym_path_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_workdir_token1] = ACTIONS(336),
    [aux_sym_user_token1] = ACTIONS(336),
    [aux_sym_cmd_token1] = ACTIONS(336),
    [aux_sym_entrypoint_token1] = ACTIONS(336),
    [aux_sym_run_token1] = ACTIONS(336),
    [aux_sym_maintainer_token1] = ACTIONS(336),
    [aux_sym_expose_token1] = ACTIONS(336),
    [aux_sym_from_token1] = ACTIONS(336),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [82] = {
    [aux_sym_workdir_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(338),
    [aux_sym_onbuild_token1] = ACTIONS(340),
    [aux_sym_env_token1] = ACTIONS(340),
    [aux_sym_label_token1] = ACTIONS(340),
    [aux_sym_healthcheck_token1] = ACTIONS(340),
    [aux_sym_arg_token1] = ACTIONS(340),
    [aux_sym_add_token1] = ACTIONS(340),
    [aux_sym_copy_token1] = ACTIONS(340),
    [aux_sym_stopsignal_token1] = ACTIONS(340),
    [aux_sym_shell_token1] = ACTIONS(340),
    [aux_sym_volume_token1] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [aux_sym_workdir_token3] = ACTIONS(316),
    [aux_sym_workdir_token4] = ACTIONS(342),
    [aux_sym_user_token1] = ACTIONS(340),
    [aux_sym_cmd_token1] = ACTIONS(340),
    [aux_sym_entrypoint_token1] = ACTIONS(340),
    [aux_sym_run_token1] = ACTIONS(340),
    [aux_sym_maintainer_token1] = ACTIONS(340),
    [aux_sym_expose_token1] = ACTIONS(340),
    [aux_sym_from_token1] = ACTIONS(340),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [83] = {
    [aux_sym__repository_start_repeat1] = STATE(90),
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
    [aux_sym_workdir_token1] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(346),
    [aux_sym_cmd_token1] = ACTIONS(346),
    [aux_sym_entrypoint_token1] = ACTIONS(346),
    [aux_sym_run_token1] = ACTIONS(346),
    [aux_sym_maintainer_token1] = ACTIONS(346),
    [aux_sym_expose_token1] = ACTIONS(346),
    [aux_sym_from_token1] = ACTIONS(346),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(348),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [84] = {
    [aux_sym_workdir_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(350),
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
    [anon_sym_DOLLAR] = ACTIONS(354),
    [aux_sym_workdir_token3] = ACTIONS(354),
    [aux_sym_workdir_token4] = ACTIONS(352),
    [aux_sym_user_token1] = ACTIONS(352),
    [aux_sym_cmd_token1] = ACTIONS(352),
    [aux_sym_entrypoint_token1] = ACTIONS(352),
    [aux_sym_run_token1] = ACTIONS(352),
    [aux_sym_maintainer_token1] = ACTIONS(352),
    [aux_sym_expose_token1] = ACTIONS(352),
    [aux_sym_from_token1] = ACTIONS(352),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [85] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym_user_token1] = ACTIONS(298),
    [aux_sym_cmd_token1] = ACTIONS(298),
    [aux_sym_entrypoint_token1] = ACTIONS(298),
    [aux_sym_run_token1] = ACTIONS(298),
    [aux_sym_maintainer_token1] = ACTIONS(298),
    [aux_sym_expose_token1] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token3] = ACTIONS(300),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [86] = {
    [sym_path] = STATE(80),
    [aux_sym_add_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_onbuild_token1] = ACTIONS(359),
    [aux_sym_env_token1] = ACTIONS(359),
    [aux_sym_label_token1] = ACTIONS(359),
    [aux_sym_healthcheck_token1] = ACTIONS(359),
    [aux_sym_arg_token1] = ACTIONS(359),
    [aux_sym_add_token1] = ACTIONS(359),
    [aux_sym_copy_token1] = ACTIONS(359),
    [aux_sym_stopsignal_token1] = ACTIONS(359),
    [aux_sym_shell_token1] = ACTIONS(359),
    [aux_sym_volume_token1] = ACTIONS(359),
    [aux_sym_path_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_workdir_token1] = ACTIONS(359),
    [aux_sym_user_token1] = ACTIONS(359),
    [aux_sym_cmd_token1] = ACTIONS(359),
    [aux_sym_entrypoint_token1] = ACTIONS(359),
    [aux_sym_run_token1] = ACTIONS(359),
    [aux_sym_maintainer_token1] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [aux_sym_from_token1] = ACTIONS(359),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [87] = {
    [aux_sym__repository_start_repeat4] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [aux_sym__repository_start_token3] = ACTIONS(365),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [88] = {
    [aux_sym__repository_start_repeat3] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [aux_sym__repository_start_token3] = ACTIONS(365),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [89] = {
    [aux_sym__repository_start_repeat2] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [aux_sym__repository_start_token3] = ACTIONS(365),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [90] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(365),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_onbuild_token1] = ACTIONS(367),
    [aux_sym_env_token1] = ACTIONS(367),
    [aux_sym_label_token1] = ACTIONS(367),
    [aux_sym_healthcheck_token1] = ACTIONS(367),
    [aux_sym_arg_token1] = ACTIONS(367),
    [aux_sym_add_token1] = ACTIONS(367),
    [aux_sym_copy_token1] = ACTIONS(367),
    [aux_sym_stopsignal_token1] = ACTIONS(367),
    [aux_sym_shell_token1] = ACTIONS(367),
    [aux_sym_volume_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [aux_sym_workdir_token1] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(367),
    [aux_sym_user_token1] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(367),
    [aux_sym_user_id_token1] = ACTIONS(367),
    [aux_sym_cmd_token1] = ACTIONS(367),
    [aux_sym_entrypoint_token1] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_maintainer_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym_user_token1] = ACTIONS(298),
    [aux_sym_cmd_token1] = ACTIONS(298),
    [aux_sym_entrypoint_token1] = ACTIONS(298),
    [aux_sym_run_token1] = ACTIONS(298),
    [aux_sym_maintainer_token1] = ACTIONS(298),
    [aux_sym_expose_token1] = ACTIONS(298),
    [aux_sym_from_token1] = ACTIONS(298),
    [aux_sym__repository_start_token3] = ACTIONS(300),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [93] = {
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
  [94] = {
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
    [aux_sym_workdir_token1] = ACTIONS(377),
    [aux_sym_user_token1] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(379),
    [aux_sym_cmd_token1] = ACTIONS(377),
    [aux_sym_entrypoint_token1] = ACTIONS(377),
    [aux_sym_run_token1] = ACTIONS(377),
    [aux_sym_maintainer_token1] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(381),
    [aux_sym_from_token2] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [aux_sym__anything] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym_onbuild_token1] = ACTIONS(387),
    [aux_sym_env_token1] = ACTIONS(387),
    [aux_sym_label_token1] = ACTIONS(387),
    [aux_sym_healthcheck_token1] = ACTIONS(387),
    [aux_sym_arg_token1] = ACTIONS(387),
    [aux_sym_add_token1] = ACTIONS(387),
    [aux_sym_copy_token1] = ACTIONS(387),
    [aux_sym_stopsignal_token1] = ACTIONS(387),
    [aux_sym_shell_token1] = ACTIONS(387),
    [aux_sym_volume_token1] = ACTIONS(387),
    [aux_sym_workdir_token1] = ACTIONS(387),
    [aux_sym_user_token1] = ACTIONS(387),
    [aux_sym_cmd_token1] = ACTIONS(387),
    [aux_sym_entrypoint_token1] = ACTIONS(387),
    [aux_sym_run_token1] = ACTIONS(387),
    [aux_sym_maintainer_token1] = ACTIONS(387),
    [aux_sym_expose_token1] = ACTIONS(387),
    [aux_sym_from_token1] = ACTIONS(387),
    [aux_sym__anything_token1] = ACTIONS(389),
    [aux_sym__anything_token2] = ACTIONS(389),
    [sym_comment] = ACTIONS(391),
    [sym_line_continuation] = ACTIONS(130),
  },
  [96] = {
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
    [anon_sym_DOLLAR] = ACTIONS(204),
    [aux_sym_workdir_token3] = ACTIONS(204),
    [aux_sym_workdir_token4] = ACTIONS(204),
    [aux_sym_user_token1] = ACTIONS(204),
    [aux_sym_cmd_token1] = ACTIONS(204),
    [aux_sym_entrypoint_token1] = ACTIONS(204),
    [aux_sym_run_token1] = ACTIONS(204),
    [aux_sym_maintainer_token1] = ACTIONS(204),
    [aux_sym_expose_token1] = ACTIONS(204),
    [aux_sym_from_token1] = ACTIONS(204),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [aux_sym_onbuild_token1] = ACTIONS(393),
    [aux_sym_env_token1] = ACTIONS(393),
    [aux_sym_label_token1] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(393),
    [aux_sym_arg_token1] = ACTIONS(393),
    [aux_sym_add_token1] = ACTIONS(393),
    [aux_sym_copy_token1] = ACTIONS(393),
    [aux_sym_stopsignal_token1] = ACTIONS(393),
    [aux_sym_shell_token1] = ACTIONS(393),
    [aux_sym_volume_token1] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [aux_sym_user_id_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [aux_sym__anything] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(395),
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
    [aux_sym__anything_token1] = ACTIONS(399),
    [aux_sym__anything_token2] = ACTIONS(399),
    [sym_comment] = ACTIONS(397),
    [sym_line_continuation] = ACTIONS(130),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [aux_sym_onbuild_token1] = ACTIONS(402),
    [aux_sym_env_token1] = ACTIONS(402),
    [aux_sym_label_token1] = ACTIONS(402),
    [aux_sym_healthcheck_token1] = ACTIONS(402),
    [aux_sym_arg_token1] = ACTIONS(402),
    [aux_sym_add_token1] = ACTIONS(402),
    [aux_sym_copy_token1] = ACTIONS(402),
    [aux_sym_stopsignal_token1] = ACTIONS(402),
    [aux_sym_shell_token1] = ACTIONS(402),
    [aux_sym_volume_token1] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(402),
    [aux_sym_workdir_token1] = ACTIONS(402),
    [anon_sym_DOLLAR] = ACTIONS(402),
    [aux_sym_user_token1] = ACTIONS(402),
    [aux_sym_user_id_token1] = ACTIONS(402),
    [aux_sym_cmd_token1] = ACTIONS(402),
    [aux_sym_entrypoint_token1] = ACTIONS(402),
    [aux_sym_run_token1] = ACTIONS(402),
    [aux_sym_maintainer_token1] = ACTIONS(402),
    [aux_sym_expose_token1] = ACTIONS(402),
    [aux_sym_from_token1] = ACTIONS(402),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [aux_sym__anything] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(404),
    [aux_sym_onbuild_token1] = ACTIONS(406),
    [aux_sym_env_token1] = ACTIONS(406),
    [aux_sym_label_token1] = ACTIONS(406),
    [aux_sym_healthcheck_token1] = ACTIONS(406),
    [aux_sym_arg_token1] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(406),
    [aux_sym_copy_token1] = ACTIONS(406),
    [aux_sym_stopsignal_token1] = ACTIONS(406),
    [aux_sym_shell_token1] = ACTIONS(406),
    [aux_sym_volume_token1] = ACTIONS(406),
    [aux_sym_workdir_token1] = ACTIONS(406),
    [aux_sym_user_token1] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(406),
    [aux_sym_entrypoint_token1] = ACTIONS(406),
    [aux_sym_run_token1] = ACTIONS(406),
    [aux_sym_maintainer_token1] = ACTIONS(406),
    [aux_sym_expose_token1] = ACTIONS(406),
    [aux_sym_from_token1] = ACTIONS(406),
    [aux_sym__anything_token1] = ACTIONS(408),
    [aux_sym__anything_token2] = ACTIONS(408),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [101] = {
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
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym_workdir_token3] = ACTIONS(184),
    [aux_sym_workdir_token4] = ACTIONS(184),
    [aux_sym_user_token1] = ACTIONS(184),
    [aux_sym_cmd_token1] = ACTIONS(184),
    [aux_sym_entrypoint_token1] = ACTIONS(184),
    [aux_sym_run_token1] = ACTIONS(184),
    [aux_sym_maintainer_token1] = ACTIONS(184),
    [aux_sym_expose_token1] = ACTIONS(184),
    [aux_sym_from_token1] = ACTIONS(184),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [aux_sym_from_token2] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_onbuild_token1] = ACTIONS(410),
    [aux_sym_env_token1] = ACTIONS(410),
    [aux_sym_label_token1] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(410),
    [aux_sym_arg_token1] = ACTIONS(410),
    [aux_sym_add_token1] = ACTIONS(410),
    [aux_sym_copy_token1] = ACTIONS(410),
    [aux_sym_stopsignal_token1] = ACTIONS(410),
    [aux_sym_shell_token1] = ACTIONS(410),
    [aux_sym_volume_token1] = ACTIONS(410),
    [aux_sym_workdir_token1] = ACTIONS(410),
    [aux_sym_user_token1] = ACTIONS(410),
    [anon_sym_COLON] = ACTIONS(412),
    [aux_sym_cmd_token1] = ACTIONS(410),
    [aux_sym_entrypoint_token1] = ACTIONS(410),
    [aux_sym_run_token1] = ACTIONS(410),
    [aux_sym_maintainer_token1] = ACTIONS(410),
    [aux_sym_expose_token1] = ACTIONS(410),
    [aux_sym_from_token1] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(414),
    [aux_sym_from_token2] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [105] = {
    [aux_sym__anything] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym_onbuild_token1] = ACTIONS(420),
    [aux_sym_env_token1] = ACTIONS(420),
    [aux_sym_label_token1] = ACTIONS(420),
    [aux_sym_healthcheck_token1] = ACTIONS(420),
    [aux_sym_arg_token1] = ACTIONS(420),
    [aux_sym_add_token1] = ACTIONS(420),
    [aux_sym_copy_token1] = ACTIONS(420),
    [aux_sym_stopsignal_token1] = ACTIONS(420),
    [aux_sym_shell_token1] = ACTIONS(420),
    [aux_sym_volume_token1] = ACTIONS(420),
    [aux_sym_workdir_token1] = ACTIONS(420),
    [aux_sym_user_token1] = ACTIONS(420),
    [aux_sym_cmd_token1] = ACTIONS(420),
    [aux_sym_entrypoint_token1] = ACTIONS(420),
    [aux_sym_run_token1] = ACTIONS(420),
    [aux_sym_maintainer_token1] = ACTIONS(420),
    [aux_sym_expose_token1] = ACTIONS(420),
    [aux_sym_from_token1] = ACTIONS(420),
    [aux_sym__anything_token1] = ACTIONS(422),
    [aux_sym__anything_token2] = ACTIONS(422),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [106] = {
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
  [107] = {
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
  [108] = {
    [aux_sym__anything] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(395),
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
    [aux_sym__anything_token1] = ACTIONS(424),
    [aux_sym__anything_token2] = ACTIONS(424),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(350),
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
    [anon_sym_DOLLAR] = ACTIONS(352),
    [aux_sym_workdir_token3] = ACTIONS(352),
    [aux_sym_workdir_token4] = ACTIONS(352),
    [aux_sym_user_token1] = ACTIONS(352),
    [aux_sym_cmd_token1] = ACTIONS(352),
    [aux_sym_entrypoint_token1] = ACTIONS(352),
    [aux_sym_run_token1] = ACTIONS(352),
    [aux_sym_maintainer_token1] = ACTIONS(352),
    [aux_sym_expose_token1] = ACTIONS(352),
    [aux_sym_from_token1] = ACTIONS(352),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_onbuild_token1] = ACTIONS(427),
    [aux_sym_env_token1] = ACTIONS(427),
    [aux_sym_label_token1] = ACTIONS(427),
    [aux_sym_healthcheck_token1] = ACTIONS(427),
    [aux_sym_arg_token1] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(427),
    [aux_sym_copy_token1] = ACTIONS(427),
    [aux_sym_stopsignal_token1] = ACTIONS(427),
    [aux_sym_shell_token1] = ACTIONS(427),
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [aux_sym_user_token1] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(429),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(431),
    [aux_sym_from_token2] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_onbuild_token1] = ACTIONS(120),
    [aux_sym_env_token1] = ACTIONS(120),
    [aux_sym_label_token1] = ACTIONS(120),
    [aux_sym_healthcheck_token1] = ACTIONS(120),
    [aux_sym_arg_token1] = ACTIONS(120),
    [aux_sym_add_token1] = ACTIONS(120),
    [aux_sym_copy_token1] = ACTIONS(120),
    [aux_sym_stopsignal_token1] = ACTIONS(120),
    [aux_sym_shell_token1] = ACTIONS(120),
    [aux_sym_volume_token1] = ACTIONS(120),
    [aux_sym_workdir_token1] = ACTIONS(120),
    [aux_sym_user_token1] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [aux_sym_cmd_token1] = ACTIONS(120),
    [aux_sym_entrypoint_token1] = ACTIONS(120),
    [aux_sym_run_token1] = ACTIONS(120),
    [aux_sym_maintainer_token1] = ACTIONS(120),
    [aux_sym_expose_token1] = ACTIONS(120),
    [aux_sym_from_token1] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(120),
    [aux_sym_from_token2] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_onbuild_token1] = ACTIONS(435),
    [aux_sym_env_token1] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(435),
    [aux_sym_healthcheck_token1] = ACTIONS(435),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(437),
    [aux_sym_from_token2] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_onbuild_token1] = ACTIONS(441),
    [aux_sym_env_token1] = ACTIONS(441),
    [aux_sym_label_token1] = ACTIONS(441),
    [aux_sym_healthcheck_token1] = ACTIONS(441),
    [aux_sym_arg_token1] = ACTIONS(441),
    [aux_sym_add_token1] = ACTIONS(441),
    [aux_sym_copy_token1] = ACTIONS(441),
    [aux_sym_stopsignal_token1] = ACTIONS(441),
    [aux_sym_shell_token1] = ACTIONS(441),
    [aux_sym_volume_token1] = ACTIONS(441),
    [aux_sym_workdir_token1] = ACTIONS(441),
    [aux_sym_user_token1] = ACTIONS(441),
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
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_onbuild_token1] = ACTIONS(445),
    [aux_sym_env_token1] = ACTIONS(445),
    [aux_sym_label_token1] = ACTIONS(445),
    [aux_sym_healthcheck_token1] = ACTIONS(445),
    [aux_sym_arg_token1] = ACTIONS(445),
    [aux_sym_add_token1] = ACTIONS(445),
    [aux_sym_copy_token1] = ACTIONS(445),
    [aux_sym_stopsignal_token1] = ACTIONS(445),
    [aux_sym_shell_token1] = ACTIONS(445),
    [aux_sym_volume_token1] = ACTIONS(445),
    [aux_sym_path_token1] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [aux_sym_workdir_token1] = ACTIONS(445),
    [aux_sym_user_token1] = ACTIONS(445),
    [aux_sym_cmd_token1] = ACTIONS(445),
    [aux_sym_entrypoint_token1] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [115] = {
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
  [116] = {
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
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_onbuild_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(447),
    [aux_sym_healthcheck_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_stopsignal_token1] = ACTIONS(447),
    [aux_sym_shell_token1] = ACTIONS(447),
    [aux_sym_volume_token1] = ACTIONS(447),
    [aux_sym_workdir_token1] = ACTIONS(447),
    [aux_sym_user_token1] = ACTIONS(447),
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
  [118] = {
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
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_onbuild_token1] = ACTIONS(453),
    [aux_sym_env_token1] = ACTIONS(453),
    [aux_sym_label_token1] = ACTIONS(453),
    [aux_sym_healthcheck_token1] = ACTIONS(453),
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
    [anon_sym_AT] = ACTIONS(453),
    [aux_sym_from_token2] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_onbuild_token1] = ACTIONS(410),
    [aux_sym_env_token1] = ACTIONS(410),
    [aux_sym_label_token1] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(410),
    [aux_sym_arg_token1] = ACTIONS(410),
    [aux_sym_add_token1] = ACTIONS(410),
    [aux_sym_copy_token1] = ACTIONS(410),
    [aux_sym_stopsignal_token1] = ACTIONS(410),
    [aux_sym_shell_token1] = ACTIONS(410),
    [aux_sym_volume_token1] = ACTIONS(410),
    [aux_sym_workdir_token1] = ACTIONS(410),
    [aux_sym_user_token1] = ACTIONS(410),
    [aux_sym_cmd_token1] = ACTIONS(410),
    [aux_sym_entrypoint_token1] = ACTIONS(410),
    [aux_sym_run_token1] = ACTIONS(410),
    [aux_sym_maintainer_token1] = ACTIONS(410),
    [aux_sym_expose_token1] = ACTIONS(410),
    [aux_sym_from_token1] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(414),
    [aux_sym_from_token2] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym_onbuild_token1] = ACTIONS(457),
    [aux_sym_env_token1] = ACTIONS(457),
    [aux_sym_label_token1] = ACTIONS(457),
    [aux_sym_healthcheck_token1] = ACTIONS(457),
    [aux_sym_arg_token1] = ACTIONS(457),
    [aux_sym_add_token1] = ACTIONS(457),
    [aux_sym_copy_token1] = ACTIONS(457),
    [aux_sym_stopsignal_token1] = ACTIONS(457),
    [aux_sym_shell_token1] = ACTIONS(457),
    [aux_sym_volume_token1] = ACTIONS(457),
    [aux_sym_path_token1] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [aux_sym_workdir_token1] = ACTIONS(457),
    [aux_sym_user_token1] = ACTIONS(457),
    [aux_sym_cmd_token1] = ACTIONS(457),
    [aux_sym_entrypoint_token1] = ACTIONS(457),
    [aux_sym_run_token1] = ACTIONS(457),
    [aux_sym_maintainer_token1] = ACTIONS(457),
    [aux_sym_expose_token1] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [122] = {
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
    [aux_sym_cmd_token1] = ACTIONS(286),
    [aux_sym_entrypoint_token1] = ACTIONS(286),
    [aux_sym_run_token1] = ACTIONS(286),
    [aux_sym_maintainer_token1] = ACTIONS(286),
    [aux_sym_expose_token1] = ACTIONS(286),
    [aux_sym_from_token1] = ACTIONS(286),
    [aux_sym_from_token2] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_onbuild_token1] = ACTIONS(410),
    [aux_sym_env_token1] = ACTIONS(410),
    [aux_sym_label_token1] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(410),
    [aux_sym_arg_token1] = ACTIONS(410),
    [aux_sym_add_token1] = ACTIONS(410),
    [aux_sym_copy_token1] = ACTIONS(410),
    [aux_sym_stopsignal_token1] = ACTIONS(410),
    [aux_sym_shell_token1] = ACTIONS(410),
    [aux_sym_volume_token1] = ACTIONS(410),
    [aux_sym_workdir_token1] = ACTIONS(410),
    [aux_sym_user_token1] = ACTIONS(410),
    [aux_sym_cmd_token1] = ACTIONS(410),
    [aux_sym_entrypoint_token1] = ACTIONS(410),
    [aux_sym_run_token1] = ACTIONS(410),
    [aux_sym_maintainer_token1] = ACTIONS(410),
    [aux_sym_expose_token1] = ACTIONS(410),
    [aux_sym_from_token1] = ACTIONS(410),
    [aux_sym_from_token2] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_onbuild_token1] = ACTIONS(459),
    [aux_sym_env_token1] = ACTIONS(459),
    [aux_sym_label_token1] = ACTIONS(459),
    [aux_sym_healthcheck_token1] = ACTIONS(459),
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
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_onbuild_token1] = ACTIONS(461),
    [aux_sym_env_token1] = ACTIONS(461),
    [aux_sym_label_token1] = ACTIONS(461),
    [aux_sym_healthcheck_token1] = ACTIONS(461),
    [aux_sym_arg_token1] = ACTIONS(461),
    [aux_sym_add_token1] = ACTIONS(461),
    [aux_sym_copy_token1] = ACTIONS(461),
    [aux_sym_stopsignal_token1] = ACTIONS(461),
    [aux_sym_shell_token1] = ACTIONS(461),
    [aux_sym_volume_token1] = ACTIONS(461),
    [aux_sym_workdir_token1] = ACTIONS(461),
    [aux_sym_user_token1] = ACTIONS(461),
    [aux_sym_cmd_token1] = ACTIONS(461),
    [aux_sym_entrypoint_token1] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_maintainer_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [aux_sym_from_token2] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [126] = {
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
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_onbuild_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(447),
    [aux_sym_healthcheck_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_stopsignal_token1] = ACTIONS(447),
    [aux_sym_shell_token1] = ACTIONS(447),
    [aux_sym_volume_token1] = ACTIONS(447),
    [aux_sym_workdir_token1] = ACTIONS(447),
    [aux_sym_user_token1] = ACTIONS(447),
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
  [128] = {
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
    [anon_sym_COLON] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_run_token1] = ACTIONS(465),
    [aux_sym_maintainer_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [129] = {
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
    [anon_sym_COLON] = ACTIONS(469),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_run_token1] = ACTIONS(465),
    [aux_sym_maintainer_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_onbuild_token1] = ACTIONS(471),
    [aux_sym_env_token1] = ACTIONS(471),
    [aux_sym_label_token1] = ACTIONS(471),
    [aux_sym_healthcheck_token1] = ACTIONS(471),
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
    [aux_sym_from_token2] = ACTIONS(473),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_onbuild_token1] = ACTIONS(435),
    [aux_sym_env_token1] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(435),
    [aux_sym_healthcheck_token1] = ACTIONS(435),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [aux_sym_from_token2] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_onbuild_token1] = ACTIONS(475),
    [aux_sym_env_token1] = ACTIONS(475),
    [aux_sym_label_token1] = ACTIONS(475),
    [aux_sym_healthcheck_token1] = ACTIONS(475),
    [aux_sym_arg_token1] = ACTIONS(475),
    [anon_sym_EQ] = ACTIONS(477),
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
  [133] = {
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
  [134] = {
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
    [aux_sym_cmd_token1] = ACTIONS(369),
    [aux_sym_entrypoint_token1] = ACTIONS(369),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_maintainer_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_from_token2] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_onbuild_token1] = ACTIONS(483),
    [aux_sym_env_token1] = ACTIONS(483),
    [aux_sym_label_token1] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(483),
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
    [aux_sym_from_token2] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
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
    [anon_sym_COLON] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_run_token1] = ACTIONS(487),
    [aux_sym_maintainer_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [aux_sym_onbuild_token1] = ACTIONS(280),
    [aux_sym_env_token1] = ACTIONS(280),
    [aux_sym_label_token1] = ACTIONS(280),
    [aux_sym_healthcheck_token1] = ACTIONS(280),
    [aux_sym_arg_token1] = ACTIONS(280),
    [aux_sym_add_token1] = ACTIONS(280),
    [aux_sym_copy_token1] = ACTIONS(280),
    [aux_sym_stopsignal_token1] = ACTIONS(280),
    [aux_sym_shell_token1] = ACTIONS(280),
    [aux_sym_volume_token1] = ACTIONS(280),
    [aux_sym_workdir_token1] = ACTIONS(280),
    [aux_sym_user_token1] = ACTIONS(280),
    [aux_sym_cmd_token1] = ACTIONS(280),
    [aux_sym_entrypoint_token1] = ACTIONS(280),
    [aux_sym_run_token1] = ACTIONS(280),
    [aux_sym_maintainer_token1] = ACTIONS(280),
    [aux_sym_expose_token1] = ACTIONS(280),
    [aux_sym_from_token1] = ACTIONS(280),
    [aux_sym_from_token2] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_onbuild_token1] = ACTIONS(489),
    [aux_sym_env_token1] = ACTIONS(489),
    [aux_sym_label_token1] = ACTIONS(489),
    [aux_sym_healthcheck_token1] = ACTIONS(489),
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
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_onbuild_token1] = ACTIONS(493),
    [aux_sym_env_token1] = ACTIONS(493),
    [aux_sym_label_token1] = ACTIONS(493),
    [aux_sym_healthcheck_token1] = ACTIONS(493),
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
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_onbuild_token1] = ACTIONS(112),
    [aux_sym_env_token1] = ACTIONS(112),
    [aux_sym_label_token1] = ACTIONS(112),
    [aux_sym_healthcheck_token1] = ACTIONS(112),
    [aux_sym_arg_token1] = ACTIONS(112),
    [aux_sym_add_token1] = ACTIONS(112),
    [aux_sym_copy_token1] = ACTIONS(112),
    [aux_sym_stopsignal_token1] = ACTIONS(112),
    [aux_sym_shell_token1] = ACTIONS(112),
    [aux_sym_volume_token1] = ACTIONS(112),
    [aux_sym_workdir_token1] = ACTIONS(112),
    [aux_sym_user_token1] = ACTIONS(112),
    [aux_sym_cmd_token1] = ACTIONS(112),
    [aux_sym_entrypoint_token1] = ACTIONS(112),
    [aux_sym_run_token1] = ACTIONS(112),
    [aux_sym_maintainer_token1] = ACTIONS(112),
    [aux_sym_expose_token1] = ACTIONS(112),
    [aux_sym_from_token1] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [142] = {
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
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_onbuild_token1] = ACTIONS(471),
    [aux_sym_env_token1] = ACTIONS(471),
    [aux_sym_label_token1] = ACTIONS(471),
    [aux_sym_healthcheck_token1] = ACTIONS(471),
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
  [146] = {
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
  [147] = {
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
  [148] = {
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
  [149] = {
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
  [150] = {
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
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_onbuild_token1] = ACTIONS(483),
    [aux_sym_env_token1] = ACTIONS(483),
    [aux_sym_label_token1] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(483),
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
  [152] = {
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
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_onbuild_token1] = ACTIONS(357),
    [aux_sym_env_token1] = ACTIONS(357),
    [aux_sym_label_token1] = ACTIONS(357),
    [aux_sym_healthcheck_token1] = ACTIONS(357),
    [aux_sym_arg_token1] = ACTIONS(357),
    [aux_sym_add_token1] = ACTIONS(357),
    [aux_sym_copy_token1] = ACTIONS(357),
    [aux_sym_stopsignal_token1] = ACTIONS(357),
    [aux_sym_shell_token1] = ACTIONS(357),
    [aux_sym_volume_token1] = ACTIONS(357),
    [aux_sym_workdir_token1] = ACTIONS(357),
    [aux_sym_user_token1] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(357),
    [aux_sym_entrypoint_token1] = ACTIONS(357),
    [aux_sym_run_token1] = ACTIONS(357),
    [aux_sym_maintainer_token1] = ACTIONS(357),
    [aux_sym_expose_token1] = ACTIONS(357),
    [aux_sym_from_token1] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [154] = {
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
    [aux_sym_workdir_token1] = ACTIONS(302),
    [aux_sym_user_token1] = ACTIONS(302),
    [aux_sym_cmd_token1] = ACTIONS(302),
    [aux_sym_entrypoint_token1] = ACTIONS(302),
    [aux_sym_run_token1] = ACTIONS(302),
    [aux_sym_maintainer_token1] = ACTIONS(302),
    [aux_sym_expose_token1] = ACTIONS(302),
    [aux_sym_from_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym_onbuild_token1] = ACTIONS(296),
    [aux_sym_env_token1] = ACTIONS(296),
    [aux_sym_label_token1] = ACTIONS(296),
    [aux_sym_healthcheck_token1] = ACTIONS(296),
    [aux_sym_arg_token1] = ACTIONS(296),
    [aux_sym_add_token1] = ACTIONS(296),
    [aux_sym_copy_token1] = ACTIONS(296),
    [aux_sym_stopsignal_token1] = ACTIONS(296),
    [aux_sym_shell_token1] = ACTIONS(296),
    [aux_sym_volume_token1] = ACTIONS(296),
    [aux_sym_workdir_token1] = ACTIONS(296),
    [aux_sym_user_token1] = ACTIONS(296),
    [aux_sym_cmd_token1] = ACTIONS(296),
    [aux_sym_entrypoint_token1] = ACTIONS(296),
    [aux_sym_run_token1] = ACTIONS(296),
    [aux_sym_maintainer_token1] = ACTIONS(296),
    [aux_sym_expose_token1] = ACTIONS(296),
    [aux_sym_from_token1] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [156] = {
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
  [157] = {
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
  [158] = {
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
  [159] = {
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
  [162] = {
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
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_onbuild_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(447),
    [aux_sym_healthcheck_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_stopsignal_token1] = ACTIONS(447),
    [aux_sym_shell_token1] = ACTIONS(447),
    [aux_sym_volume_token1] = ACTIONS(447),
    [aux_sym_workdir_token1] = ACTIONS(447),
    [aux_sym_user_token1] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_run_token1] = ACTIONS(447),
    [aux_sym_maintainer_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [164] = {
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
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_onbuild_token1] = ACTIONS(410),
    [aux_sym_env_token1] = ACTIONS(410),
    [aux_sym_label_token1] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(410),
    [aux_sym_arg_token1] = ACTIONS(410),
    [aux_sym_add_token1] = ACTIONS(410),
    [aux_sym_copy_token1] = ACTIONS(410),
    [aux_sym_stopsignal_token1] = ACTIONS(410),
    [aux_sym_shell_token1] = ACTIONS(410),
    [aux_sym_volume_token1] = ACTIONS(410),
    [aux_sym_workdir_token1] = ACTIONS(410),
    [aux_sym_user_token1] = ACTIONS(410),
    [aux_sym_cmd_token1] = ACTIONS(410),
    [aux_sym_entrypoint_token1] = ACTIONS(410),
    [aux_sym_run_token1] = ACTIONS(410),
    [aux_sym_maintainer_token1] = ACTIONS(410),
    [aux_sym_expose_token1] = ACTIONS(410),
    [aux_sym_from_token1] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [166] = {
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
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(361),
    [aux_sym_env_token1] = ACTIONS(361),
    [aux_sym_label_token1] = ACTIONS(361),
    [aux_sym_healthcheck_token1] = ACTIONS(361),
    [aux_sym_arg_token1] = ACTIONS(361),
    [aux_sym_add_token1] = ACTIONS(361),
    [aux_sym_copy_token1] = ACTIONS(361),
    [aux_sym_stopsignal_token1] = ACTIONS(361),
    [aux_sym_shell_token1] = ACTIONS(361),
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [aux_sym_user_token1] = ACTIONS(361),
    [aux_sym_cmd_token1] = ACTIONS(361),
    [aux_sym_entrypoint_token1] = ACTIONS(361),
    [aux_sym_run_token1] = ACTIONS(361),
    [aux_sym_maintainer_token1] = ACTIONS(361),
    [aux_sym_expose_token1] = ACTIONS(361),
    [aux_sym_from_token1] = ACTIONS(361),
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
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [aux_sym_onbuild_token1] = ACTIONS(338),
    [aux_sym_env_token1] = ACTIONS(338),
    [aux_sym_label_token1] = ACTIONS(338),
    [aux_sym_healthcheck_token1] = ACTIONS(338),
    [aux_sym_arg_token1] = ACTIONS(338),
    [aux_sym_add_token1] = ACTIONS(338),
    [aux_sym_copy_token1] = ACTIONS(338),
    [aux_sym_stopsignal_token1] = ACTIONS(338),
    [aux_sym_shell_token1] = ACTIONS(338),
    [aux_sym_volume_token1] = ACTIONS(338),
    [aux_sym_workdir_token1] = ACTIONS(338),
    [aux_sym_user_token1] = ACTIONS(338),
    [aux_sym_cmd_token1] = ACTIONS(338),
    [aux_sym_entrypoint_token1] = ACTIONS(338),
    [aux_sym_run_token1] = ACTIONS(338),
    [aux_sym_maintainer_token1] = ACTIONS(338),
    [aux_sym_expose_token1] = ACTIONS(338),
    [aux_sym_from_token1] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_onbuild_token1] = ACTIONS(435),
    [aux_sym_env_token1] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(435),
    [aux_sym_healthcheck_token1] = ACTIONS(435),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [173] = {
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
  [174] = {
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
  [175] = {
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
    [aux_sym_cmd_token1] = ACTIONS(369),
    [aux_sym_entrypoint_token1] = ACTIONS(369),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_maintainer_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [179] = {
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
  [180] = {
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
  [181] = {
    [sym_repository] = STATE(211),
    [sym__repository_start] = STATE(192),
    [sym_image] = STATE(94),
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [182] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(141),
    [sym__port] = STATE(79),
    [sym_port] = STATE(79),
    [sym_port_range] = STATE(79),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(559),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [183] = {
    [sym_repository] = STATE(201),
    [sym__repository_start] = STATE(192),
    [sym_image] = STATE(103),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [aux_sym_platform_token1] = ACTIONS(551),
    [aux_sym__repository_start_token1] = ACTIONS(547),
    [aux_sym__repository_start_token4] = ACTIONS(553),
    [aux_sym__repository_start_token6] = ACTIONS(553),
    [aux_sym__repository_start_token8] = ACTIONS(555),
    [aux_sym__repository_start_token10] = ACTIONS(555),
    [aux_sym__repository_start_token12] = ACTIONS(557),
    [aux_sym__repository_start_token14] = ACTIONS(557),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [184] = {
    [sym__repository_continued] = STATE(188),
    [aux_sym_repository_repeat1] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [aux_sym_platform_token1] = ACTIONS(564),
    [aux_sym__repository_start_token1] = ACTIONS(561),
    [aux_sym__repository_start_token4] = ACTIONS(567),
    [aux_sym__repository_start_token6] = ACTIONS(567),
    [aux_sym__repository_start_token8] = ACTIONS(570),
    [aux_sym__repository_start_token10] = ACTIONS(570),
    [aux_sym__repository_start_token12] = ACTIONS(573),
    [aux_sym__repository_start_token14] = ACTIONS(573),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [185] = {
    [sym_digest] = STATE(131),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_sha256_COLON] = ACTIONS(578),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [186] = {
    [sym_digest] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_sha256_COLON] = ACTIONS(588),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [187] = {
    [sym_digest] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_sha256_COLON] = ACTIONS(590),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [188] = {
    [sym__repository_continued] = STATE(188),
    [aux_sym_repository_repeat1] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(592),
    [aux_sym_platform_token1] = ACTIONS(595),
    [aux_sym__repository_start_token1] = ACTIONS(592),
    [aux_sym__repository_start_token4] = ACTIONS(598),
    [aux_sym__repository_start_token6] = ACTIONS(598),
    [aux_sym__repository_start_token8] = ACTIONS(601),
    [aux_sym__repository_start_token10] = ACTIONS(601),
    [aux_sym__repository_start_token12] = ACTIONS(604),
    [aux_sym__repository_start_token14] = ACTIONS(604),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [189] = {
    [sym_digest] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_sha256_COLON] = ACTIONS(607),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [190] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_sha256_COLON] = ACTIONS(609),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [191] = {
    [sym_digest] = STATE(133),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_sha256_COLON] = ACTIONS(611),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [192] = {
    [sym__repository_continued] = STATE(184),
    [aux_sym_repository_repeat1] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [aux_sym_platform_token1] = ACTIONS(616),
    [aux_sym__repository_start_token1] = ACTIONS(613),
    [aux_sym__repository_start_token4] = ACTIONS(619),
    [aux_sym__repository_start_token6] = ACTIONS(619),
    [aux_sym__repository_start_token8] = ACTIONS(622),
    [aux_sym__repository_start_token10] = ACTIONS(622),
    [aux_sym__repository_start_token12] = ACTIONS(625),
    [aux_sym__repository_start_token14] = ACTIONS(625),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [193] = {
    [sym_tag] = STATE(117),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [194] = {
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [195] = {
    [sym_as_name] = STATE(178),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [196] = {
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [197] = {
    [sym_digest] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [198] = {
    [sym_tag] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [199] = {
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [200] = {
    [sym_digest] = STATE(133),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [201] = {
    [sym_image] = STATE(93),
    [anon_sym_DOLLAR] = ACTIONS(648),
    [aux_sym_platform_token1] = ACTIONS(650),
    [aux_sym__repository_start_token1] = ACTIONS(648),
    [aux_sym__repository_start_token4] = ACTIONS(652),
    [aux_sym__repository_start_token6] = ACTIONS(652),
    [aux_sym__repository_start_token8] = ACTIONS(654),
    [aux_sym__repository_start_token10] = ACTIONS(654),
    [aux_sym__repository_start_token12] = ACTIONS(656),
    [aux_sym__repository_start_token14] = ACTIONS(656),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [202] = {
    [sym_digest] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [203] = {
    [sym_as_name] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [204] = {
    [sym_digest] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [205] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [206] = {
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
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [207] = {
    [sym_as_name] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [208] = {
    [sym_as_name] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [209] = {
    [sym_as_name] = STATE(142),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [210] = {
    [sym_digest] = STATE(131),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [aux_sym_platform_token1] = ACTIONS(580),
    [aux_sym__repository_start_token1] = ACTIONS(576),
    [aux_sym__repository_start_token4] = ACTIONS(582),
    [aux_sym__repository_start_token6] = ACTIONS(582),
    [aux_sym__repository_start_token8] = ACTIONS(584),
    [aux_sym__repository_start_token10] = ACTIONS(584),
    [aux_sym__repository_start_token12] = ACTIONS(586),
    [aux_sym__repository_start_token14] = ACTIONS(586),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [211] = {
    [sym_image] = STATE(110),
    [anon_sym_DOLLAR] = ACTIONS(648),
    [aux_sym_platform_token1] = ACTIONS(650),
    [aux_sym__repository_start_token1] = ACTIONS(648),
    [aux_sym__repository_start_token4] = ACTIONS(652),
    [aux_sym__repository_start_token6] = ACTIONS(652),
    [aux_sym__repository_start_token8] = ACTIONS(654),
    [aux_sym__repository_start_token10] = ACTIONS(654),
    [aux_sym__repository_start_token12] = ACTIONS(656),
    [aux_sym__repository_start_token14] = ACTIONS(656),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [212] = {
    [sym_tag] = STATE(120),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(628),
    [aux_sym__repository_start_token4] = ACTIONS(632),
    [aux_sym__repository_start_token6] = ACTIONS(632),
    [aux_sym__repository_start_token8] = ACTIONS(634),
    [aux_sym__repository_start_token10] = ACTIONS(634),
    [aux_sym__repository_start_token12] = ACTIONS(636),
    [aux_sym__repository_start_token14] = ACTIONS(636),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [213] = {
    [sym_as_name] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [aux_sym_platform_token1] = ACTIONS(640),
    [aux_sym__repository_start_token1] = ACTIONS(638),
    [aux_sym__repository_start_token4] = ACTIONS(642),
    [aux_sym__repository_start_token6] = ACTIONS(642),
    [aux_sym__repository_start_token8] = ACTIONS(644),
    [aux_sym__repository_start_token10] = ACTIONS(644),
    [aux_sym__repository_start_token12] = ACTIONS(646),
    [aux_sym__repository_start_token14] = ACTIONS(646),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [214] = {
    [sym__port_spec] = STATE(314),
    [sym_mapped_port] = STATE(314),
    [sym__port] = STATE(79),
    [sym_port] = STATE(296),
    [sym_port_range] = STATE(296),
    [sym__port_part] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [215] = {
    [anon_sym_DOLLAR] = ACTIONS(660),
    [aux_sym_platform_token1] = ACTIONS(662),
    [aux_sym__repository_start_token1] = ACTIONS(660),
    [aux_sym__repository_start_token4] = ACTIONS(660),
    [aux_sym__repository_start_token6] = ACTIONS(660),
    [aux_sym__repository_start_token8] = ACTIONS(660),
    [aux_sym__repository_start_token10] = ACTIONS(660),
    [aux_sym__repository_start_token12] = ACTIONS(660),
    [aux_sym__repository_start_token14] = ACTIONS(660),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [216] = {
    [anon_sym_DOLLAR] = ACTIONS(664),
    [aux_sym_platform_token1] = ACTIONS(666),
    [aux_sym__repository_start_token1] = ACTIONS(664),
    [aux_sym__repository_start_token4] = ACTIONS(664),
    [aux_sym__repository_start_token6] = ACTIONS(664),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(664),
    [aux_sym__repository_start_token14] = ACTIONS(664),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [217] = {
    [anon_sym_DOLLAR] = ACTIONS(668),
    [aux_sym_platform_token1] = ACTIONS(670),
    [aux_sym__repository_start_token1] = ACTIONS(668),
    [aux_sym__repository_start_token4] = ACTIONS(668),
    [aux_sym__repository_start_token6] = ACTIONS(668),
    [aux_sym__repository_start_token8] = ACTIONS(668),
    [aux_sym__repository_start_token10] = ACTIONS(668),
    [aux_sym__repository_start_token12] = ACTIONS(668),
    [aux_sym__repository_start_token14] = ACTIONS(668),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [218] = {
    [anon_sym_DOLLAR] = ACTIONS(672),
    [aux_sym_platform_token1] = ACTIONS(674),
    [aux_sym__repository_start_token1] = ACTIONS(672),
    [aux_sym__repository_start_token4] = ACTIONS(672),
    [aux_sym__repository_start_token6] = ACTIONS(672),
    [aux_sym__repository_start_token8] = ACTIONS(672),
    [aux_sym__repository_start_token10] = ACTIONS(672),
    [aux_sym__repository_start_token12] = ACTIONS(672),
    [aux_sym__repository_start_token14] = ACTIONS(672),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [219] = {
    [anon_sym_DOLLAR] = ACTIONS(676),
    [aux_sym_platform_token1] = ACTIONS(678),
    [aux_sym__repository_start_token1] = ACTIONS(676),
    [aux_sym__repository_start_token4] = ACTIONS(676),
    [aux_sym__repository_start_token6] = ACTIONS(676),
    [aux_sym__repository_start_token8] = ACTIONS(676),
    [aux_sym__repository_start_token10] = ACTIONS(676),
    [aux_sym__repository_start_token12] = ACTIONS(676),
    [aux_sym__repository_start_token14] = ACTIONS(676),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [220] = {
    [anon_sym_DOLLAR] = ACTIONS(680),
    [aux_sym_platform_token1] = ACTIONS(682),
    [aux_sym__repository_start_token1] = ACTIONS(680),
    [aux_sym__repository_start_token4] = ACTIONS(680),
    [aux_sym__repository_start_token6] = ACTIONS(680),
    [aux_sym__repository_start_token8] = ACTIONS(680),
    [aux_sym__repository_start_token10] = ACTIONS(680),
    [aux_sym__repository_start_token12] = ACTIONS(680),
    [aux_sym__repository_start_token14] = ACTIONS(680),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [221] = {
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(684),
    [aux_sym__repository_start_token6] = ACTIONS(684),
    [aux_sym__repository_start_token8] = ACTIONS(684),
    [aux_sym__repository_start_token10] = ACTIONS(684),
    [aux_sym__repository_start_token12] = ACTIONS(684),
    [aux_sym__repository_start_token14] = ACTIONS(684),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [222] = {
    [anon_sym_DOLLAR] = ACTIONS(688),
    [aux_sym_platform_token1] = ACTIONS(690),
    [aux_sym__repository_start_token1] = ACTIONS(688),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(688),
    [aux_sym__repository_start_token10] = ACTIONS(688),
    [aux_sym__repository_start_token12] = ACTIONS(688),
    [aux_sym__repository_start_token14] = ACTIONS(688),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [223] = {
    [anon_sym_DOLLAR] = ACTIONS(692),
    [aux_sym_platform_token1] = ACTIONS(694),
    [aux_sym__repository_start_token1] = ACTIONS(692),
    [aux_sym__repository_start_token4] = ACTIONS(692),
    [aux_sym__repository_start_token6] = ACTIONS(692),
    [aux_sym__repository_start_token8] = ACTIONS(692),
    [aux_sym__repository_start_token10] = ACTIONS(692),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [224] = {
    [anon_sym_DOLLAR] = ACTIONS(696),
    [aux_sym_platform_token1] = ACTIONS(698),
    [aux_sym__repository_start_token1] = ACTIONS(696),
    [aux_sym__repository_start_token4] = ACTIONS(696),
    [aux_sym__repository_start_token6] = ACTIONS(696),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(696),
    [aux_sym__repository_start_token14] = ACTIONS(696),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [225] = {
    [anon_sym_DOLLAR] = ACTIONS(186),
    [aux_sym_platform_token1] = ACTIONS(188),
    [aux_sym__repository_start_token1] = ACTIONS(186),
    [aux_sym__repository_start_token4] = ACTIONS(186),
    [aux_sym__repository_start_token6] = ACTIONS(186),
    [aux_sym__repository_start_token8] = ACTIONS(186),
    [aux_sym__repository_start_token10] = ACTIONS(186),
    [aux_sym__repository_start_token12] = ACTIONS(186),
    [aux_sym__repository_start_token14] = ACTIONS(186),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [226] = {
    [anon_sym_DOLLAR] = ACTIONS(700),
    [aux_sym_platform_token1] = ACTIONS(702),
    [aux_sym__repository_start_token1] = ACTIONS(700),
    [aux_sym__repository_start_token4] = ACTIONS(700),
    [aux_sym__repository_start_token6] = ACTIONS(700),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(700),
    [aux_sym__repository_start_token14] = ACTIONS(700),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [227] = {
    [anon_sym_DOLLAR] = ACTIONS(704),
    [aux_sym_platform_token1] = ACTIONS(706),
    [aux_sym__repository_start_token1] = ACTIONS(704),
    [aux_sym__repository_start_token4] = ACTIONS(704),
    [aux_sym__repository_start_token6] = ACTIONS(704),
    [aux_sym__repository_start_token8] = ACTIONS(704),
    [aux_sym__repository_start_token10] = ACTIONS(704),
    [aux_sym__repository_start_token12] = ACTIONS(704),
    [aux_sym__repository_start_token14] = ACTIONS(704),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [228] = {
    [anon_sym_DOLLAR] = ACTIONS(182),
    [aux_sym_platform_token1] = ACTIONS(184),
    [aux_sym__repository_start_token1] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(182),
    [aux_sym__repository_start_token6] = ACTIONS(182),
    [aux_sym__repository_start_token8] = ACTIONS(182),
    [aux_sym__repository_start_token10] = ACTIONS(182),
    [aux_sym__repository_start_token12] = ACTIONS(182),
    [aux_sym__repository_start_token14] = ACTIONS(182),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [229] = {
    [anon_sym_DOLLAR] = ACTIONS(202),
    [aux_sym_platform_token1] = ACTIONS(204),
    [aux_sym__repository_start_token1] = ACTIONS(202),
    [aux_sym__repository_start_token4] = ACTIONS(202),
    [aux_sym__repository_start_token6] = ACTIONS(202),
    [aux_sym__repository_start_token8] = ACTIONS(202),
    [aux_sym__repository_start_token10] = ACTIONS(202),
    [aux_sym__repository_start_token12] = ACTIONS(202),
    [aux_sym__repository_start_token14] = ACTIONS(202),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [230] = {
    [sym__port] = STATE(166),
    [sym_port] = STATE(166),
    [sym_port_range] = STATE(166),
    [sym__port_part] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [aux_sym__json_string] = STATE(267),
    [aux_sym_json_array_repeat1] = STATE(277),
    [anon_sym_DQUOTE] = ACTIONS(708),
    [anon_sym_COMMA] = ACTIONS(710),
    [anon_sym_RBRACK] = ACTIONS(712),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
    [aux_sym__json_string_token1] = ACTIONS(714),
    [sym__json_escape_sequence] = ACTIONS(716),
  },
  [232] = {
    [sym__port] = STATE(99),
    [sym_port] = STATE(99),
    [sym_port_range] = STATE(99),
    [sym__port_part] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym_path] = STATE(86),
    [sym_json_array] = STATE(153),
    [aux_sym_add_repeat1] = STATE(86),
    [aux_sym_path_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [234] = {
    [sym_path] = STATE(76),
    [sym_json_array] = STATE(154),
    [aux_sym_add_repeat1] = STATE(76),
    [aux_sym_path_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [235] = {
    [sym_path] = STATE(81),
    [sym_json_array] = STATE(157),
    [aux_sym_add_repeat1] = STATE(81),
    [aux_sym_path_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [236] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(720),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(722),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [237] = {
    [sym_json_array] = STATE(164),
    [sym__anything_or_json_array] = STATE(164),
    [sym__almost_json_prefix] = ACTIONS(724),
    [sym__json_prefix] = ACTIONS(718),
    [sym__not_json_prefix] = ACTIONS(726),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [238] = {
    [sym_variable_default_value] = STATE(377),
    [sym_variable_this_or_null] = STATE(377),
    [anon_sym_RBRACE] = ACTIONS(728),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [aux_sym__repository_start_repeat2] = STATE(256),
    [anon_sym_SLASH] = ACTIONS(720),
    [aux_sym__repository_start_token3] = ACTIONS(722),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [240] = {
    [aux_sym__repository_start_repeat3] = STATE(255),
    [anon_sym_SLASH] = ACTIONS(720),
    [aux_sym__repository_start_token3] = ACTIONS(722),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [241] = {
    [aux_sym__repository_start_repeat4] = STATE(252),
    [anon_sym_SLASH] = ACTIONS(720),
    [aux_sym__repository_start_token3] = ACTIONS(722),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [242] = {
    [sym_json_array] = STATE(160),
    [sym__anything_or_json_array] = STATE(160),
    [sym__almost_json_prefix] = ACTIONS(724),
    [sym__json_prefix] = ACTIONS(718),
    [sym__not_json_prefix] = ACTIONS(726),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [243] = {
    [sym_template_expr_less_than_equals] = STATE(343),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [244] = {
    [aux_sym__repository_start_repeat1] = STATE(236),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(738),
    [aux_sym__repository_start_token2] = ACTIONS(124),
    [aux_sym__repository_start_token3] = ACTIONS(740),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [245] = {
    [sym_template_expr_less_than_equals] = STATE(304),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [246] = {
    [sym_port] = STATE(344),
    [sym_port_range] = STATE(344),
    [sym__port_part] = STATE(63),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_template_expr_less_than_equals] = STATE(327),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [248] = {
    [sym_variable_default_value] = STATE(365),
    [sym_variable_this_or_null] = STATE(365),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_variable_default_value] = STATE(368),
    [sym_variable_this_or_null] = STATE(368),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_template_expr_less_than_equals] = STATE(371),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [251] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(261),
    [aux_sym__repository_start_token13] = ACTIONS(746),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(748),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(750),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(750),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [252] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [anon_sym_SLASH] = ACTIONS(752),
    [aux_sym__repository_start_token3] = ACTIONS(754),
    [aux_sym__repository_start_token12] = ACTIONS(136),
    [aux_sym__repository_start_token15] = ACTIONS(136),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [253] = {
    [sym_template_expr_less_than_equals] = STATE(329),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [254] = {
    [sym_template_expr_less_than_equals] = STATE(305),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [255] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
    [anon_sym_SLASH] = ACTIONS(752),
    [aux_sym__repository_start_token3] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(134),
    [aux_sym__repository_start_token11] = ACTIONS(134),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [256] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [anon_sym_SLASH] = ACTIONS(752),
    [aux_sym__repository_start_token3] = ACTIONS(754),
    [aux_sym__repository_start_token4] = ACTIONS(132),
    [aux_sym__repository_start_token7] = ACTIONS(132),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [257] = {
    [sym_template_expr_less_than_equals] = STATE(318),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [258] = {
    [sym_variable_default_value] = STATE(375),
    [sym_variable_this_or_null] = STATE(375),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [sym_user_name] = STATE(129),
    [sym_user_id] = STATE(128),
    [anon_sym_DOLLAR] = ACTIONS(758),
    [aux_sym_user_name_token1] = ACTIONS(760),
    [aux_sym_user_id_token1] = ACTIONS(762),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
    [sym_template_expr_less_than_equals] = STATE(339),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(251),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(734),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(736),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(736),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [261] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(261),
    [aux_sym__repository_start_token13] = ACTIONS(764),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(766),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(769),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(769),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [262] = {
    [sym_variable_default_value] = STATE(373),
    [sym_variable_this_or_null] = STATE(373),
    [anon_sym_RBRACE] = ACTIONS(772),
    [anon_sym_COLON_DASH] = ACTIONS(730),
    [anon_sym_COLON_PLUS] = ACTIONS(732),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [sym_json_array] = STATE(159),
    [sym__anything_or_json_array] = STATE(159),
    [sym__almost_json_prefix] = ACTIONS(724),
    [sym__json_prefix] = ACTIONS(718),
    [sym__not_json_prefix] = ACTIONS(726),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [264] = {
    [aux_sym__json_string] = STATE(264),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
    [aux_sym__json_string_token1] = ACTIONS(776),
    [sym__json_escape_sequence] = ACTIONS(776),
  },
  [265] = {
    [aux_sym__json_string] = STATE(266),
    [anon_sym_DQUOTE] = ACTIONS(779),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
    [aux_sym__json_string_token1] = ACTIONS(781),
    [sym__json_escape_sequence] = ACTIONS(781),
  },
  [266] = {
    [aux_sym__json_string] = STATE(264),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
    [aux_sym__json_string_token1] = ACTIONS(785),
    [sym__json_escape_sequence] = ACTIONS(785),
  },
  [267] = {
    [aux_sym__json_string] = STATE(264),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
    [aux_sym__json_string_token1] = ACTIONS(785),
    [sym__json_escape_sequence] = ACTIONS(785),
  },
  [268] = {
    [aux_sym_json_array_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [sym_docker_variable] = STATE(140),
    [anon_sym_LBRACE] = ACTIONS(793),
    [sym__docker_variable] = ACTIONS(795),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [270] = {
    [aux_sym_json_array_repeat1] = STATE(268),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [sym_docker_variable] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(799),
    [sym__docker_variable] = ACTIONS(801),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [272] = {
    [aux_sym_json_array_repeat1] = STATE(274),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(803),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [sym_docker_variable] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(793),
    [sym__docker_variable] = ACTIONS(795),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [274] = {
    [aux_sym_json_array_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [aux_sym_arg_default_token1] = ACTIONS(805),
    [anon_sym_DOLLAR] = ACTIONS(807),
    [aux_sym_workdir_token2] = ACTIONS(807),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [276] = {
    [sym_signal_name] = STATE(138),
    [aux_sym_signal_name_token1] = ACTIONS(809),
    [sym_signal_num] = ACTIONS(811),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [277] = {
    [aux_sym_json_array_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(803),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [aux_sym_json_array_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(813),
    [anon_sym_RBRACK] = ACTIONS(816),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [279] = {
    [aux_sym__anything] = STATE(95),
    [aux_sym__anything_token1] = ACTIONS(818),
    [aux_sym__anything_token2] = ACTIONS(818),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [280] = {
    [sym_docker_variable] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(820),
    [sym__docker_variable] = ACTIONS(822),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [281] = {
    [sym_docker_variable] = STATE(24),
    [anon_sym_LBRACE] = ACTIONS(820),
    [sym__docker_variable] = ACTIONS(822),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [282] = {
    [sym_docker_variable] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(824),
    [sym__docker_variable] = ACTIONS(826),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [283] = {
    [sym_docker_variable] = STATE(244),
    [anon_sym_LBRACE] = ACTIONS(820),
    [sym__docker_variable] = ACTIONS(822),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [284] = {
    [sym_docker_variable] = STATE(78),
    [anon_sym_LBRACE] = ACTIONS(824),
    [sym__docker_variable] = ACTIONS(826),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [285] = {
    [sym_docker_variable] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(820),
    [sym__docker_variable] = ACTIONS(822),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [286] = {
    [sym_platform] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_platform_token1] = ACTIONS(830),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [287] = {
    [aux_sym__anything] = STATE(100),
    [aux_sym__anything_token1] = ACTIONS(422),
    [aux_sym__anything_token2] = ACTIONS(422),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [288] = {
    [sym_docker_variable] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(799),
    [sym__docker_variable] = ACTIONS(801),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [289] = {
    [sym_docker_variable] = STATE(226),
    [anon_sym_LBRACE] = ACTIONS(832),
    [sym__docker_variable] = ACTIONS(834),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [290] = {
    [sym__port_part] = STATE(77),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [aux_sym_user_id_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [sym_docker_variable] = STATE(83),
    [anon_sym_LBRACE] = ACTIONS(820),
    [sym__docker_variable] = ACTIONS(822),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [292] = {
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym_port_protocol_token1] = ACTIONS(838),
    [aux_sym_port_protocol_token2] = ACTIONS(838),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [sym_docker_variable] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(820),
    [sym__docker_variable] = ACTIONS(822),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [294] = {
    [sym_docker_variable] = STATE(61),
    [anon_sym_LBRACE] = ACTIONS(793),
    [sym__docker_variable] = ACTIONS(795),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RBRACK] = ACTIONS(840),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [anon_sym_DQUOTE] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(845),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [sym_arg_default] = STATE(162),
    [aux_sym_arg_default_token1] = ACTIONS(847),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [298] = {
    [sym_user_group] = STATE(169),
    [aux_sym_user_name_token1] = ACTIONS(849),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_RBRACK] = ACTIONS(851),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [sym__json_value] = STATE(301),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_COMMA] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [sym_user_group_id] = STATE(169),
    [aux_sym_user_id_token1] = ACTIONS(855),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [sym_json_array] = STATE(156),
    [sym__json_prefix] = ACTIONS(718),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [aux_sym__repository_start_token13] = ACTIONS(857),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [aux_sym__repository_start_token13] = ACTIONS(859),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [aux_sym__repository_start_token9] = ACTIONS(861),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [sym__space_no_newline] = ACTIONS(863),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [308] = {
    [sym__docker_variable] = ACTIONS(865),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [309] = {
    [sym__space_no_newline] = ACTIONS(867),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [310] = {
    [sym__space_no_newline] = ACTIONS(869),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [311] = {
    [sym__space_no_newline] = ACTIONS(871),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [312] = {
    [aux_sym__repository_start_token5] = ACTIONS(873),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [anon_sym_SLASH] = ACTIONS(875),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [anon_sym_DQUOTE] = ACTIONS(877),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [sym_template_expr_curly_braces] = ACTIONS(879),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [316] = {
    [sym_template_expr_percent_signs] = ACTIONS(881),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [317] = {
    [aux_sym__repository_start_token5] = ACTIONS(883),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [aux_sym__repository_start_token13] = ACTIONS(885),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [aux_sym__repository_start_token9] = ACTIONS(887),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [320] = {
    [aux_sym__repository_start_token5] = ACTIONS(889),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [aux_sym__repository_start_token9] = ACTIONS(891),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [anon_sym_SLASH] = ACTIONS(752),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [aux_sym_signal_name_token2] = ACTIONS(893),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [sym__space_no_newline] = ACTIONS(895),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [325] = {
    [sym__space_no_newline] = ACTIONS(897),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [326] = {
    [sym__space_no_newline] = ACTIONS(899),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [327] = {
    [aux_sym__repository_start_token13] = ACTIONS(901),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [sym__space_no_newline] = ACTIONS(903),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [329] = {
    [aux_sym__repository_start_token13] = ACTIONS(905),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [sym_template_expr_curly_braces] = ACTIONS(907),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [331] = {
    [aux_sym__repository_start_token9] = ACTIONS(909),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [aux_sym_path_token2] = ACTIONS(911),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [333] = {
    [sym_template_expr_percent_signs] = ACTIONS(913),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [334] = {
    [aux_sym__repository_start_token5] = ACTIONS(915),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [sym_template_expr_curly_braces] = ACTIONS(917),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [336] = {
    [sym_template_expr_percent_signs] = ACTIONS(919),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(921),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [anon_sym_RBRACE] = ACTIONS(923),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [aux_sym__repository_start_token13] = ACTIONS(925),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [aux_sym__repository_start_token9] = ACTIONS(927),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [341] = {
    [aux_sym__repository_start_token5] = ACTIONS(929),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [anon_sym_SLASH] = ACTIONS(931),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [aux_sym__repository_start_token13] = ACTIONS(933),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [sym__space_no_newline] = ACTIONS(937),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [346] = {
    [aux_sym__repository_start_token9] = ACTIONS(939),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [347] = {
    [sym__space_no_newline] = ACTIONS(941),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [348] = {
    [sym_template_expr_percent_signs] = ACTIONS(943),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [349] = {
    [sym__space_no_newline] = ACTIONS(945),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [350] = {
    [sym__space_no_newline] = ACTIONS(947),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [351] = {
    [sym__space_no_newline] = ACTIONS(949),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [352] = {
    [sym__space_no_newline] = ACTIONS(951),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [353] = {
    [sym__space_no_newline] = ACTIONS(953),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [354] = {
    [sym_template_expr_curly_braces] = ACTIONS(955),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [355] = {
    [aux_sym__repository_start_token5] = ACTIONS(957),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [sym_template_expr_curly_braces] = ACTIONS(959),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [357] = {
    [aux_sym__repository_start_token9] = ACTIONS(961),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [358] = {
    [aux_sym__repository_start_token5] = ACTIONS(963),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [359] = {
    [anon_sym_SLASH] = ACTIONS(720),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [ts_builtin_sym_end] = ACTIONS(965),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [361] = {
    [sym__space_no_newline] = ACTIONS(967),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [362] = {
    [sym_arg_name] = ACTIONS(969),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [363] = {
    [sym_template_expr_percent_signs] = ACTIONS(971),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [364] = {
    [sym_template_expr_curly_braces] = ACTIONS(973),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [365] = {
    [anon_sym_RBRACE] = ACTIONS(975),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(977),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [367] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(979),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [368] = {
    [anon_sym_RBRACE] = ACTIONS(981),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [369] = {
    [aux_sym__repository_start_token5] = ACTIONS(983),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [370] = {
    [aux_sym__repository_start_token9] = ACTIONS(985),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [aux_sym__repository_start_token13] = ACTIONS(987),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [anon_sym_DQUOTE] = ACTIONS(989),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(991),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [sym_template_expr_percent_signs] = ACTIONS(993),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [375] = {
    [anon_sym_RBRACE] = ACTIONS(995),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [376] = {
    [sym_template_expr_curly_braces] = ACTIONS(997),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [377] = {
    [anon_sym_RBRACE] = ACTIONS(999),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [378] = {
    [sym__docker_variable] = ACTIONS(1001),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [379] = {
    [sym_template_expr_curly_braces] = ACTIONS(1003),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [380] = {
    [sym_template_expr_percent_signs] = ACTIONS(1005),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [381] = {
    [sym_template_expr_percent_signs] = ACTIONS(1007),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [382] = {
    [sym__docker_variable] = ACTIONS(1009),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [383] = {
    [sym__docker_variable] = ACTIONS(1011),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
  [384] = {
    [sym__docker_variable] = ACTIONS(1013),
    [sym_comment] = ACTIONS(130),
    [sym_line_continuation] = ACTIONS(130),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(361),
  [9] = {.count = 1, .reusable = true}, SHIFT(353),
  [11] = {.count = 1, .reusable = true}, SHIFT(352),
  [13] = {.count = 1, .reusable = true}, SHIFT(351),
  [15] = {.count = 1, .reusable = true}, SHIFT(350),
  [17] = {.count = 1, .reusable = true}, SHIFT(349),
  [19] = {.count = 1, .reusable = true}, SHIFT(347),
  [21] = {.count = 1, .reusable = true}, SHIFT(345),
  [23] = {.count = 1, .reusable = true}, SHIFT(310),
  [25] = {.count = 1, .reusable = true}, SHIFT(309),
  [27] = {.count = 1, .reusable = true}, SHIFT(307),
  [29] = {.count = 1, .reusable = true}, SHIFT(311),
  [31] = {.count = 1, .reusable = true}, SHIFT(324),
  [33] = {.count = 1, .reusable = true}, SHIFT(325),
  [35] = {.count = 1, .reusable = true}, SHIFT(326),
  [37] = {.count = 1, .reusable = true}, SHIFT(328),
  [39] = {.count = 1, .reusable = true}, SHIFT(182),
  [41] = {.count = 1, .reusable = true}, SHIFT(181),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(361),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(353),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(352),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(351),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(350),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(349),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(347),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(345),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(310),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(309),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(307),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(311),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(324),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(325),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(326),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(328),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(182),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(181),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(214),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(273),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(36),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [114] = {.count = 1, .reusable = true}, SHIFT(214),
  [116] = {.count = 1, .reusable = true}, SHIFT(273),
  [118] = {.count = 1, .reusable = true}, SHIFT(36),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(281),
  [126] = {.count = 1, .reusable = true}, SHIFT(215),
  [128] = {.count = 1, .reusable = false}, SHIFT(59),
  [130] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [132] = {.count = 1, .reusable = true}, SHIFT(364),
  [134] = {.count = 1, .reusable = true}, SHIFT(363),
  [136] = {.count = 1, .reusable = true}, SHIFT(253),
  [138] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [140] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(253),
  [145] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(363),
  [152] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(364),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(223),
  [165] = {.count = 1, .reusable = false}, SHIFT(72),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(281),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [178] = {.count = 1, .reusable = true}, SHIFT(224),
  [180] = {.count = 1, .reusable = false}, SHIFT(60),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [200] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [206] = {.count = 1, .reusable = false}, SHIFT(102),
  [208] = {.count = 1, .reusable = true}, SHIFT(380),
  [210] = {.count = 1, .reusable = true}, SHIFT(379),
  [212] = {.count = 1, .reusable = true}, SHIFT(288),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(250),
  [217] = {.count = 1, .reusable = false}, SHIFT(111),
  [219] = {.count = 1, .reusable = true}, SHIFT(250),
  [221] = {.count = 1, .reusable = false}, SHIFT(107),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(292),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(288),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(379),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(380),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [242] = {.count = 1, .reusable = false}, SHIFT(118),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [248] = {.count = 1, .reusable = false}, SHIFT(115),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [254] = {.count = 1, .reusable = false}, SHIFT(113),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [260] = {.count = 1, .reusable = false}, SHIFT(137),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [266] = {.count = 1, .reusable = true}, SHIFT(217),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [274] = {.count = 1, .reusable = true}, SHIFT(221),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [278] = {.count = 1, .reusable = true}, SHIFT(290),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [284] = {.count = 1, .reusable = false}, SHIFT(122),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [290] = {.count = 1, .reusable = false}, SHIFT(125),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [300] = {.count = 1, .reusable = false}, SHIFT(148),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [306] = {.count = 1, .reusable = false}, SHIFT(114),
  [308] = {.count = 1, .reusable = true}, SHIFT(332),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [316] = {.count = 1, .reusable = false}, SHIFT(282),
  [318] = {.count = 1, .reusable = false}, SHIFT(171),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [322] = {.count = 1, .reusable = true}, SHIFT(232),
  [324] = {.count = 1, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2),
  [326] = {.count = 1, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(114),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(332),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [342] = {.count = 1, .reusable = false}, SHIFT(175),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [348] = {.count = 1, .reusable = false}, SHIFT(167),
  [350] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [352] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(282),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [365] = {.count = 1, .reusable = false}, SHIFT(155),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [371] = {.count = 1, .reusable = true}, SHIFT(193),
  [373] = {.count = 1, .reusable = true}, SHIFT(186),
  [375] = {.count = 1, .reusable = true}, SHIFT(203),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [379] = {.count = 1, .reusable = true}, SHIFT(212),
  [381] = {.count = 1, .reusable = true}, SHIFT(187),
  [383] = {.count = 1, .reusable = true}, SHIFT(208),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [389] = {.count = 1, .reusable = true}, SHIFT(98),
  [391] = {.count = 1, .reusable = false}, SHIFT(143),
  [393] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(98),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 2),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 2),
  [408] = {.count = 1, .reusable = true}, SHIFT(108),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [412] = {.count = 1, .reusable = true}, SHIFT(198),
  [414] = {.count = 1, .reusable = true}, SHIFT(185),
  [416] = {.count = 1, .reusable = true}, SHIFT(213),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [422] = {.count = 1, .reusable = true}, SHIFT(100),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(108),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [429] = {.count = 1, .reusable = true}, SHIFT(194),
  [431] = {.count = 1, .reusable = true}, SHIFT(190),
  [433] = {.count = 1, .reusable = true}, SHIFT(195),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [437] = {.count = 1, .reusable = true}, SHIFT(189),
  [439] = {.count = 1, .reusable = true}, SHIFT(196),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [449] = {.count = 1, .reusable = true}, SHIFT(191),
  [451] = {.count = 1, .reusable = true}, SHIFT(199),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [467] = {.count = 1, .reusable = true}, SHIFT(302),
  [469] = {.count = 1, .reusable = true}, SHIFT(298),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [473] = {.count = 1, .reusable = true}, SHIFT(209),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [477] = {.count = 1, .reusable = true}, SHIFT(297),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [481] = {.count = 1, .reusable = true}, SHIFT(207),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [485] = {.count = 1, .reusable = true}, SHIFT(206),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [505] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [547] = {.count = 1, .reusable = true}, SHIFT(285),
  [549] = {.count = 1, .reusable = true}, SHIFT(286),
  [551] = {.count = 1, .reusable = false}, SHIFT(62),
  [553] = {.count = 1, .reusable = true}, SHIFT(354),
  [555] = {.count = 1, .reusable = true}, SHIFT(348),
  [557] = {.count = 1, .reusable = true}, SHIFT(247),
  [559] = {.count = 1, .reusable = true}, SHIFT(230),
  [561] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(283),
  [564] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(342),
  [567] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(356),
  [570] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(316),
  [573] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(254),
  [576] = {.count = 1, .reusable = true}, SHIFT(280),
  [578] = {.count = 1, .reusable = true}, SHIFT(202),
  [580] = {.count = 1, .reusable = false}, SHIFT(124),
  [582] = {.count = 1, .reusable = true}, SHIFT(315),
  [584] = {.count = 1, .reusable = true}, SHIFT(381),
  [586] = {.count = 1, .reusable = true}, SHIFT(243),
  [588] = {.count = 1, .reusable = true}, SHIFT(197),
  [590] = {.count = 1, .reusable = true}, SHIFT(205),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(283),
  [595] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(342),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(356),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(316),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(254),
  [607] = {.count = 1, .reusable = true}, SHIFT(200),
  [609] = {.count = 1, .reusable = true}, SHIFT(210),
  [611] = {.count = 1, .reusable = true}, SHIFT(204),
  [613] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(283),
  [616] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(342),
  [619] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(356),
  [622] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(316),
  [625] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(254),
  [628] = {.count = 1, .reusable = true}, SHIFT(293),
  [630] = {.count = 1, .reusable = false}, SHIFT(119),
  [632] = {.count = 1, .reusable = true}, SHIFT(330),
  [634] = {.count = 1, .reusable = true}, SHIFT(333),
  [636] = {.count = 1, .reusable = true}, SHIFT(245),
  [638] = {.count = 1, .reusable = true}, SHIFT(291),
  [640] = {.count = 1, .reusable = false}, SHIFT(173),
  [642] = {.count = 1, .reusable = true}, SHIFT(376),
  [644] = {.count = 1, .reusable = true}, SHIFT(374),
  [646] = {.count = 1, .reusable = true}, SHIFT(260),
  [648] = {.count = 1, .reusable = true}, SHIFT(271),
  [650] = {.count = 1, .reusable = false}, SHIFT(106),
  [652] = {.count = 1, .reusable = true}, SHIFT(335),
  [654] = {.count = 1, .reusable = true}, SHIFT(336),
  [656] = {.count = 1, .reusable = true}, SHIFT(257),
  [658] = {.count = 1, .reusable = true}, SHIFT(246),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [708] = {.count = 1, .reusable = false}, SHIFT(272),
  [710] = {.count = 1, .reusable = false}, SHIFT(300),
  [712] = {.count = 1, .reusable = false}, SHIFT(179),
  [714] = {.count = 1, .reusable = false}, SHIFT(267),
  [716] = {.count = 1, .reusable = true}, SHIFT(267),
  [718] = {.count = 1, .reusable = true}, SHIFT(231),
  [720] = {.count = 1, .reusable = true}, SHIFT(222),
  [722] = {.count = 1, .reusable = false}, SHIFT(322),
  [724] = {.count = 1, .reusable = true}, SHIFT(287),
  [726] = {.count = 1, .reusable = true}, SHIFT(105),
  [728] = {.count = 1, .reusable = true}, SHIFT(43),
  [730] = {.count = 1, .reusable = true}, SHIFT(367),
  [732] = {.count = 1, .reusable = true}, SHIFT(366),
  [734] = {.count = 1, .reusable = true}, SHIFT(251),
  [736] = {.count = 1, .reusable = false}, SHIFT(251),
  [738] = {.count = 1, .reusable = true}, SHIFT(219),
  [740] = {.count = 1, .reusable = false}, SHIFT(359),
  [742] = {.count = 1, .reusable = true}, SHIFT(49),
  [744] = {.count = 1, .reusable = true}, SHIFT(19),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [748] = {.count = 1, .reusable = true}, SHIFT(261),
  [750] = {.count = 1, .reusable = false}, SHIFT(261),
  [752] = {.count = 1, .reusable = true}, SHIFT(216),
  [754] = {.count = 1, .reusable = false}, SHIFT(313),
  [756] = {.count = 1, .reusable = true}, SHIFT(228),
  [758] = {.count = 1, .reusable = true}, SHIFT(269),
  [760] = {.count = 1, .reusable = true}, SHIFT(126),
  [762] = {.count = 1, .reusable = true}, SHIFT(136),
  [764] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(261),
  [769] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(261),
  [772] = {.count = 1, .reusable = true}, SHIFT(101),
  [774] = {.count = 1, .reusable = false}, REDUCE(aux_sym__json_string, 2),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(264),
  [779] = {.count = 1, .reusable = false}, SHIFT(299),
  [781] = {.count = 1, .reusable = true}, SHIFT(266),
  [783] = {.count = 1, .reusable = false}, SHIFT(295),
  [785] = {.count = 1, .reusable = true}, SHIFT(264),
  [787] = {.count = 1, .reusable = false}, SHIFT(270),
  [789] = {.count = 1, .reusable = true}, SHIFT(300),
  [791] = {.count = 1, .reusable = true}, SHIFT(139),
  [793] = {.count = 1, .reusable = true}, SHIFT(308),
  [795] = {.count = 1, .reusable = true}, SHIFT(47),
  [797] = {.count = 1, .reusable = true}, SHIFT(176),
  [799] = {.count = 1, .reusable = true}, SHIFT(384),
  [801] = {.count = 1, .reusable = true}, SHIFT(44),
  [803] = {.count = 1, .reusable = true}, SHIFT(152),
  [805] = {.count = 1, .reusable = false}, SHIFT(158),
  [807] = {.count = 1, .reusable = false}, SHIFT(284),
  [809] = {.count = 1, .reusable = true}, SHIFT(323),
  [811] = {.count = 1, .reusable = true}, SHIFT(138),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(300),
  [816] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [818] = {.count = 1, .reusable = true}, SHIFT(95),
  [820] = {.count = 1, .reusable = true}, SHIFT(378),
  [822] = {.count = 1, .reusable = true}, SHIFT(20),
  [824] = {.count = 1, .reusable = true}, SHIFT(382),
  [826] = {.count = 1, .reusable = true}, SHIFT(104),
  [828] = {.count = 1, .reusable = true}, SHIFT(289),
  [830] = {.count = 1, .reusable = true}, SHIFT(220),
  [832] = {.count = 1, .reusable = true}, SHIFT(383),
  [834] = {.count = 1, .reusable = true}, SHIFT(225),
  [836] = {.count = 1, .reusable = true}, SHIFT(294),
  [838] = {.count = 1, .reusable = true}, SHIFT(74),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [842] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(91),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [847] = {.count = 1, .reusable = true}, SHIFT(168),
  [849] = {.count = 1, .reusable = true}, SHIFT(170),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [853] = {.count = 1, .reusable = true}, SHIFT(265),
  [855] = {.count = 1, .reusable = true}, SHIFT(161),
  [857] = {.count = 1, .reusable = true}, SHIFT(40),
  [859] = {.count = 1, .reusable = true}, SHIFT(241),
  [861] = {.count = 1, .reusable = true}, SHIFT(240),
  [863] = {.count = 1, .reusable = true}, SHIFT(275),
  [865] = {.count = 1, .reusable = true}, SHIFT(248),
  [867] = {.count = 1, .reusable = true}, SHIFT(235),
  [869] = {.count = 1, .reusable = true}, SHIFT(303),
  [871] = {.count = 1, .reusable = true}, SHIFT(259),
  [873] = {.count = 1, .reusable = true}, SHIFT(239),
  [875] = {.count = 1, .reusable = true}, SHIFT(227),
  [877] = {.count = 1, .reusable = true}, SHIFT(97),
  [879] = {.count = 1, .reusable = true}, SHIFT(355),
  [881] = {.count = 1, .reusable = true}, SHIFT(306),
  [883] = {.count = 1, .reusable = true}, SHIFT(8),
  [885] = {.count = 1, .reusable = true}, SHIFT(31),
  [887] = {.count = 1, .reusable = true}, SHIFT(26),
  [889] = {.count = 1, .reusable = true}, SHIFT(27),
  [891] = {.count = 1, .reusable = true}, SHIFT(9),
  [893] = {.count = 1, .reusable = true}, SHIFT(174),
  [895] = {.count = 1, .reusable = true}, SHIFT(263),
  [897] = {.count = 1, .reusable = true}, SHIFT(242),
  [899] = {.count = 1, .reusable = true}, SHIFT(237),
  [901] = {.count = 1, .reusable = true}, SHIFT(10),
  [903] = {.count = 1, .reusable = true}, SHIFT(279),
  [905] = {.count = 1, .reusable = true}, SHIFT(21),
  [907] = {.count = 1, .reusable = true}, SHIFT(358),
  [909] = {.count = 1, .reusable = true}, SHIFT(22),
  [911] = {.count = 1, .reusable = true}, SHIFT(372),
  [913] = {.count = 1, .reusable = true}, SHIFT(357),
  [915] = {.count = 1, .reusable = true}, SHIFT(23),
  [917] = {.count = 1, .reusable = true}, SHIFT(320),
  [919] = {.count = 1, .reusable = true}, SHIFT(319),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [925] = {.count = 1, .reusable = true}, SHIFT(87),
  [927] = {.count = 1, .reusable = true}, SHIFT(88),
  [929] = {.count = 1, .reusable = true}, SHIFT(89),
  [931] = {.count = 1, .reusable = true}, SHIFT(218),
  [933] = {.count = 1, .reusable = true}, SHIFT(68),
  [935] = {.count = 1, .reusable = true}, SHIFT(91),
  [937] = {.count = 1, .reusable = true}, SHIFT(276),
  [939] = {.count = 1, .reusable = true}, SHIFT(67),
  [941] = {.count = 1, .reusable = true}, SHIFT(234),
  [943] = {.count = 1, .reusable = true}, SHIFT(321),
  [945] = {.count = 1, .reusable = true}, SHIFT(233),
  [947] = {.count = 1, .reusable = true}, SHIFT(362),
  [949] = {.count = 1, .reusable = true}, SHIFT(180),
  [951] = {.count = 1, .reusable = true}, SHIFT(147),
  [953] = {.count = 1, .reusable = true}, SHIFT(177),
  [955] = {.count = 1, .reusable = true}, SHIFT(317),
  [957] = {.count = 1, .reusable = true}, SHIFT(65),
  [959] = {.count = 1, .reusable = true}, SHIFT(312),
  [961] = {.count = 1, .reusable = true}, SHIFT(50),
  [963] = {.count = 1, .reusable = true}, SHIFT(53),
  [965] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [967] = {.count = 1, .reusable = true}, SHIFT(4),
  [969] = {.count = 1, .reusable = true}, SHIFT(132),
  [971] = {.count = 1, .reusable = true}, SHIFT(331),
  [973] = {.count = 1, .reusable = true}, SHIFT(334),
  [975] = {.count = 1, .reusable = true}, SHIFT(56),
  [977] = {.count = 1, .reusable = true}, SHIFT(337),
  [979] = {.count = 1, .reusable = true}, SHIFT(338),
  [981] = {.count = 1, .reusable = true}, SHIFT(25),
  [983] = {.count = 1, .reusable = true}, SHIFT(52),
  [985] = {.count = 1, .reusable = true}, SHIFT(51),
  [987] = {.count = 1, .reusable = true}, SHIFT(48),
  [989] = {.count = 1, .reusable = true}, SHIFT(121),
  [991] = {.count = 1, .reusable = true}, SHIFT(96),
  [993] = {.count = 1, .reusable = true}, SHIFT(340),
  [995] = {.count = 1, .reusable = true}, SHIFT(229),
  [997] = {.count = 1, .reusable = true}, SHIFT(341),
  [999] = {.count = 1, .reusable = true}, SHIFT(42),
  [1001] = {.count = 1, .reusable = true}, SHIFT(249),
  [1003] = {.count = 1, .reusable = true}, SHIFT(369),
  [1005] = {.count = 1, .reusable = true}, SHIFT(370),
  [1007] = {.count = 1, .reusable = true}, SHIFT(346),
  [1009] = {.count = 1, .reusable = true}, SHIFT(262),
  [1011] = {.count = 1, .reusable = true}, SHIFT(258),
  [1013] = {.count = 1, .reusable = true}, SHIFT(238),
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
