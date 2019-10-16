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
#define STATE_COUNT 468
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14

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
  sym_path = 17,
  aux_sym_workdir_token1 = 18,
  anon_sym_DOLLAR = 19,
  aux_sym_workdir_token2 = 20,
  aux_sym_workdir_token3 = 21,
  aux_sym_workdir_token4 = 22,
  aux_sym_user_token1 = 23,
  anon_sym_COLON = 24,
  aux_sym_user_name_token1 = 25,
  aux_sym_user_id_token1 = 26,
  aux_sym_cmd_token1 = 27,
  aux_sym_entrypoint_token1 = 28,
  aux_sym_run_token1 = 29,
  aux_sym_maintainer_token1 = 30,
  aux_sym_expose_token1 = 31,
  anon_sym_DQUOTE = 32,
  anon_sym_DASH = 33,
  anon_sym_SLASH = 34,
  aux_sym_port_protocol_token1 = 35,
  aux_sym_port_protocol_token2 = 36,
  aux_sym_from_token1 = 37,
  anon_sym_DASH_DASHplatform_EQ = 38,
  anon_sym_AT = 39,
  anon_sym_sha256_COLON = 40,
  aux_sym_from_token2 = 41,
  aux_sym_platform_token1 = 42,
  aux_sym__repository_start_token1 = 43,
  aux_sym__repository_start_token2 = 44,
  aux_sym__repository_start_token3 = 45,
  aux_sym__repository_start_token4 = 46,
  aux_sym__repository_start_token5 = 47,
  aux_sym__repository_start_token6 = 48,
  aux_sym__repository_start_token7 = 49,
  aux_sym__repository_start_token8 = 50,
  aux_sym__repository_start_token9 = 51,
  aux_sym__repository_start_token10 = 52,
  aux_sym__repository_start_token11 = 53,
  aux_sym__repository_start_token12 = 54,
  aux_sym__repository_start_token13 = 55,
  aux_sym__repository_start_token14 = 56,
  aux_sym__repository_start_token15 = 57,
  aux_sym__repository_start_token16 = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  sym__docker_variable = 61,
  anon_sym_COLON_DASH = 62,
  aux_sym_variable_default_value_token1 = 63,
  anon_sym_COLON_PLUS = 64,
  aux_sym__anything_token1 = 65,
  sym__json_prefix = 66,
  anon_sym_COMMA = 67,
  anon_sym_RBRACK = 68,
  sym__space_no_newline = 69,
  sym_template_expr_curly_braces = 70,
  sym_template_expr_percent_signs = 71,
  aux_sym_template_expr_less_than_equals_token1 = 72,
  aux_sym_template_expr_less_than_equals_token2 = 73,
  aux_sym_template_expr_less_than_equals_token3 = 74,
  sym__space = 75,
  sym__blank_line = 76,
  sym_comment = 77,
  sym_line_continuation = 78,
  aux_sym__json_string_token1 = 79,
  sym__json_escape_sequence = 80,
  sym_dockerfile = 81,
  sym__directive = 82,
  sym_onbuild = 83,
  sym_env = 84,
  sym_label = 85,
  sym_healthcheck = 86,
  sym_arg = 87,
  sym_arg_default = 88,
  sym_add = 89,
  sym_copy = 90,
  sym_stopsignal = 91,
  sym_signal_name = 92,
  sym_shell = 93,
  sym_volume = 94,
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
  [sym_path] = "path",
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
  [anon_sym_DQUOTE] = "\"",
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
  [sym__space] = "_space",
  [sym__blank_line] = "_blank_line",
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
  [sym_path] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
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
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '#') ADVANCE(812);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == ',') ADVANCE(790);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(791);
      if (lookahead == '{') ADVANCE(701);
      if (lookahead == '}') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(224);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(250);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(224);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(177);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(250);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(792);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(792);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(439);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(426);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(452);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(439);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(426);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(452);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(439);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(426);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(452);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(563);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(586);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(541);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(528);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(573);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(563);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(586);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(541);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(528);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(573);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(563);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(586);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(541);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(528);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(573);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(525);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(512);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(467);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(499);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == '\\') ADVANCE(525);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(525);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(512);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(467);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(499);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == '\\') ADVANCE(525);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(525);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(512);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(467);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(499);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == '\\') ADVANCE(525);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(660);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(602);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(647);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(649);
      if (lookahead == '\\') ADVANCE(600);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(660);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(602);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(647);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(649);
      if (lookahead == '\\') ADVANCE(600);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(660);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(602);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(647);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(649);
      if (lookahead == '\\') ADVANCE(600);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(316);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(329);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(719);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(724);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(717);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(715);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(721);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(718);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(725);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(722);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(723);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(708);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(153);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(688);
      if (lookahead == ',') ADVANCE(790);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(791);
      if (lookahead == '}') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '#') ADVANCE(812);
      if (lookahead == ',') ADVANCE(790);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '#') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(793);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(799);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(799);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(797);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(795);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(705);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(706);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '#') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(804);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(54);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '}') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '}') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(525);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(600);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(703);
      if (lookahead == '\\') ADVANCE(703);
      if (lookahead == '{') ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(369);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(727);
      END_STATE();
    case 52:
      if (lookahead == '+') ADVANCE(707);
      if (lookahead == '-') ADVANCE(704);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(695);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(695);
      if (lookahead != 0) ADVANCE(801);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(695);
      if (lookahead != 0) ADVANCE(800);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\\') ADVANCE(711);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(727);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(727);
      if (lookahead == '\\') ADVANCE(711);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(150);
      END_STATE();
    case 60:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(694);
      END_STATE();
    case 61:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(699);
      END_STATE();
    case 62:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(697);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 90:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 101:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 102:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 148:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(727);
      END_STATE();
    case 151:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(727);
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(177);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(187);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_workdir_token3);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '$') ADVANCE(255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '5') ADVANCE(354);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == ':') ADVANCE(349);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(808);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(359);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(370);
      if (lookahead == '%') ADVANCE(690);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 369:
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
          lookahead != '}') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
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
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
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
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
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
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
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
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(462);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(462);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
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
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
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
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
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
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
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
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(669);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(618);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(630);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(610);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(619);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(626);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(646);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(609);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(616);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(650);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(644);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(612);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(610);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(665);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(610);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(655);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(606);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(671);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(651);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(652);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(640);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(628);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(600);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(656);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(600);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(673);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(674);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(676);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(677);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(679);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(680);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(682);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(683);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(685);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(687);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(689);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(691);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(693);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(696);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(698);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 703:
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
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(709);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == '\\') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(729);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(741);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(737);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(774);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(712);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(728);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(728);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(728);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(728);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(784);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(728);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(743);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(728);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(728);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(747);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(728);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(728);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(728);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(728);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(767);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(728);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(736);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(728);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(740);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(728);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(728);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(738);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(728);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(728);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(728);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(728);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(728);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(728);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(728);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(739);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(728);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(773);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(728);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(728);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(728);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(728);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(728);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(728);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(728);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(728);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(728);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(739);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(728);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(728);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(728);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(728);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(728);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(762);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(728);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(728);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 788:
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
          lookahead != 'v') ADVANCE(728);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(778);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(804);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(795);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(795);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(797);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(804);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead == '#') ADVANCE(712);
      if (lookahead != 0) ADVANCE(809);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(699);
      if (lookahead != 0) ADVANCE(809);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(697);
      if (lookahead != 0) ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead != 0) ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__json_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 47},
  [192] = {.lex_state = 47},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 48},
  [195] = {.lex_state = 48},
  [196] = {.lex_state = 48},
  [197] = {.lex_state = 47},
  [198] = {.lex_state = 47},
  [199] = {.lex_state = 48},
  [200] = {.lex_state = 48},
  [201] = {.lex_state = 47},
  [202] = {.lex_state = 48},
  [203] = {.lex_state = 47},
  [204] = {.lex_state = 47},
  [205] = {.lex_state = 47},
  [206] = {.lex_state = 47},
  [207] = {.lex_state = 47},
  [208] = {.lex_state = 47},
  [209] = {.lex_state = 47},
  [210] = {.lex_state = 47},
  [211] = {.lex_state = 47},
  [212] = {.lex_state = 47},
  [213] = {.lex_state = 47},
  [214] = {.lex_state = 47},
  [215] = {.lex_state = 47},
  [216] = {.lex_state = 47},
  [217] = {.lex_state = 47},
  [218] = {.lex_state = 47},
  [219] = {.lex_state = 47},
  [220] = {.lex_state = 47},
  [221] = {.lex_state = 47},
  [222] = {.lex_state = 47},
  [223] = {.lex_state = 47},
  [224] = {.lex_state = 47},
  [225] = {.lex_state = 47},
  [226] = {.lex_state = 47},
  [227] = {.lex_state = 47},
  [228] = {.lex_state = 47},
  [229] = {.lex_state = 47},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 47},
  [232] = {.lex_state = 47},
  [233] = {.lex_state = 47},
  [234] = {.lex_state = 47},
  [235] = {.lex_state = 47},
  [236] = {.lex_state = 47},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 47},
  [239] = {.lex_state = 47},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 21},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 46},
  [246] = {.lex_state = 45},
  [247] = {.lex_state = 26},
  [248] = {.lex_state = 46},
  [249] = {.lex_state = 43},
  [250] = {.lex_state = 26},
  [251] = {.lex_state = 26},
  [252] = {.lex_state = 43},
  [253] = {.lex_state = 26},
  [254] = {.lex_state = 26},
  [255] = {.lex_state = 39},
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 26},
  [258] = {.lex_state = 20},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 43},
  [262] = {.lex_state = 25},
  [263] = {.lex_state = 46},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 45},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 26},
  [268] = {.lex_state = 44},
  [269] = {.lex_state = 26},
  [270] = {.lex_state = 39},
  [271] = {.lex_state = 26},
  [272] = {.lex_state = 26},
  [273] = {.lex_state = 44},
  [274] = {.lex_state = 45},
  [275] = {.lex_state = 44},
  [276] = {.lex_state = 20},
  [277] = {.lex_state = 26},
  [278] = {.lex_state = 20},
  [279] = {.lex_state = 26},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 39},
  [284] = {.lex_state = 20},
  [285] = {.lex_state = 20},
  [286] = {.lex_state = 20},
  [287] = {.lex_state = 22},
  [288] = {.lex_state = 44},
  [289] = {.lex_state = 22},
  [290] = {.lex_state = 45},
  [291] = {.lex_state = 46},
  [292] = {.lex_state = 43},
  [293] = {.lex_state = 22},
  [294] = {.lex_state = 43},
  [295] = {.lex_state = 37},
  [296] = {.lex_state = 37},
  [297] = {.lex_state = 43},
  [298] = {.lex_state = 37},
  [299] = {.lex_state = 43},
  [300] = {.lex_state = 22},
  [301] = {.lex_state = 49},
  [302] = {.lex_state = 42},
  [303] = {.lex_state = 20},
  [304] = {.lex_state = 20},
  [305] = {.lex_state = 20},
  [306] = {.lex_state = 49},
  [307] = {.lex_state = 20},
  [308] = {.lex_state = 49},
  [309] = {.lex_state = 49},
  [310] = {.lex_state = 49},
  [311] = {.lex_state = 20},
  [312] = {.lex_state = 49},
  [313] = {.lex_state = 49},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 49},
  [316] = {.lex_state = 49},
  [317] = {.lex_state = 20},
  [318] = {.lex_state = 49},
  [319] = {.lex_state = 20},
  [320] = {.lex_state = 49},
  [321] = {.lex_state = 49},
  [322] = {.lex_state = 50},
  [323] = {.lex_state = 20},
  [324] = {.lex_state = 49},
  [325] = {.lex_state = 49},
  [326] = {.lex_state = 20},
  [327] = {.lex_state = 20},
  [328] = {.lex_state = 49},
  [329] = {.lex_state = 20},
  [330] = {.lex_state = 20},
  [331] = {.lex_state = 27},
  [332] = {.lex_state = 20},
  [333] = {.lex_state = 20},
  [334] = {.lex_state = 49},
  [335] = {.lex_state = 20},
  [336] = {.lex_state = 49},
  [337] = {.lex_state = 20},
  [338] = {.lex_state = 20},
  [339] = {.lex_state = 20},
  [340] = {.lex_state = 28},
  [341] = {.lex_state = 20},
  [342] = {.lex_state = 20},
  [343] = {.lex_state = 24},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 24},
  [346] = {.lex_state = 20},
  [347] = {.lex_state = 24},
  [348] = {.lex_state = 20},
  [349] = {.lex_state = 39},
  [350] = {.lex_state = 20},
  [351] = {.lex_state = 20},
  [352] = {.lex_state = 20},
  [353] = {.lex_state = 20},
  [354] = {.lex_state = 20},
  [355] = {.lex_state = 23},
  [356] = {.lex_state = 20},
  [357] = {.lex_state = 20},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 30},
  [360] = {.lex_state = 20},
  [361] = {.lex_state = 23},
  [362] = {.lex_state = 20},
  [363] = {.lex_state = 20},
  [364] = {.lex_state = 23},
  [365] = {.lex_state = 42},
  [366] = {.lex_state = 20},
  [367] = {.lex_state = 23},
  [368] = {.lex_state = 39},
  [369] = {.lex_state = 39},
  [370] = {.lex_state = 20},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 42},
  [373] = {.lex_state = 23},
  [374] = {.lex_state = 42},
  [375] = {.lex_state = 20},
  [376] = {.lex_state = 30},
  [377] = {.lex_state = 20},
  [378] = {.lex_state = 23},
  [379] = {.lex_state = 49},
  [380] = {.lex_state = 39},
  [381] = {.lex_state = 20},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 20},
  [385] = {.lex_state = 40},
  [386] = {.lex_state = 39},
  [387] = {.lex_state = 20},
  [388] = {.lex_state = 42},
  [389] = {.lex_state = 20},
  [390] = {.lex_state = 20},
  [391] = {.lex_state = 31},
  [392] = {.lex_state = 23},
  [393] = {.lex_state = 31},
  [394] = {.lex_state = 42},
  [395] = {.lex_state = 20},
  [396] = {.lex_state = 29},
  [397] = {.lex_state = 39},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 42},
  [400] = {.lex_state = 30},
  [401] = {.lex_state = 23},
  [402] = {.lex_state = 23},
  [403] = {.lex_state = 39},
  [404] = {.lex_state = 23},
  [405] = {.lex_state = 23},
  [406] = {.lex_state = 23},
  [407] = {.lex_state = 23},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 23},
  [410] = {.lex_state = 41},
  [411] = {.lex_state = 42},
  [412] = {.lex_state = 39},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 23},
  [415] = {.lex_state = 23},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 23},
  [418] = {.lex_state = 30},
  [419] = {.lex_state = 23},
  [420] = {.lex_state = 23},
  [421] = {.lex_state = 23},
  [422] = {.lex_state = 29},
  [423] = {.lex_state = 20},
  [424] = {.lex_state = 20},
  [425] = {.lex_state = 20},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 20},
  [428] = {.lex_state = 42},
  [429] = {.lex_state = 20},
  [430] = {.lex_state = 39},
  [431] = {.lex_state = 30},
  [432] = {.lex_state = 29},
  [433] = {.lex_state = 20},
  [434] = {.lex_state = 42},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 39},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 23},
  [439] = {.lex_state = 20},
  [440] = {.lex_state = 42},
  [441] = {.lex_state = 20},
  [442] = {.lex_state = 39},
  [443] = {.lex_state = 20},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 23},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 29},
  [448] = {.lex_state = 20},
  [449] = {.lex_state = 29},
  [450] = {.lex_state = 20},
  [451] = {.lex_state = 49},
  [452] = {.lex_state = 30},
  [453] = {.lex_state = 30},
  [454] = {.lex_state = 29},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 49},
  [457] = {.lex_state = 30},
  [458] = {.lex_state = 29},
  [459] = {.lex_state = 29},
  [460] = {.lex_state = 49},
  [461] = {.lex_state = 30},
  [462] = {.lex_state = 29},
  [463] = {.lex_state = 30},
  [464] = {.lex_state = 49},
  [465] = {.lex_state = 49},
  [466] = {.lex_state = 49},
  [467] = {.lex_state = 49},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(1),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(389),
    [sym__directive] = STATE(165),
    [sym_onbuild] = STATE(165),
    [sym_env] = STATE(165),
    [sym_label] = STATE(165),
    [sym_healthcheck] = STATE(165),
    [sym_arg] = STATE(165),
    [sym_add] = STATE(165),
    [sym_copy] = STATE(165),
    [sym_stopsignal] = STATE(165),
    [sym_shell] = STATE(165),
    [sym_volume] = STATE(165),
    [sym_workdir] = STATE(165),
    [sym_user] = STATE(165),
    [sym_cmd] = STATE(165),
    [sym_entrypoint] = STATE(165),
    [sym_run] = STATE(165),
    [sym_maintainer] = STATE(165),
    [sym_expose] = STATE(165),
    [sym_from] = STATE(165),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_onbuild_token1] = ACTIONS(9),
    [aux_sym_env_token1] = ACTIONS(11),
    [aux_sym_label_token1] = ACTIONS(13),
    [aux_sym_healthcheck_token1] = ACTIONS(15),
    [aux_sym_arg_token1] = ACTIONS(17),
    [aux_sym_add_token1] = ACTIONS(19),
    [aux_sym_copy_token1] = ACTIONS(21),
    [aux_sym_stopsignal_token1] = ACTIONS(23),
    [aux_sym_shell_token1] = ACTIONS(25),
    [aux_sym_volume_token1] = ACTIONS(27),
    [aux_sym_workdir_token1] = ACTIONS(29),
    [aux_sym_user_token1] = ACTIONS(31),
    [aux_sym_cmd_token1] = ACTIONS(33),
    [aux_sym_entrypoint_token1] = ACTIONS(35),
    [aux_sym_run_token1] = ACTIONS(37),
    [aux_sym_maintainer_token1] = ACTIONS(39),
    [aux_sym_expose_token1] = ACTIONS(41),
    [aux_sym_from_token1] = ACTIONS(43),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [2] = {
    [sym__directive] = STATE(165),
    [sym_onbuild] = STATE(165),
    [sym_env] = STATE(165),
    [sym_label] = STATE(165),
    [sym_healthcheck] = STATE(165),
    [sym_arg] = STATE(165),
    [sym_add] = STATE(165),
    [sym_copy] = STATE(165),
    [sym_stopsignal] = STATE(165),
    [sym_shell] = STATE(165),
    [sym_volume] = STATE(165),
    [sym_workdir] = STATE(165),
    [sym_user] = STATE(165),
    [sym_cmd] = STATE(165),
    [sym_entrypoint] = STATE(165),
    [sym_run] = STATE(165),
    [sym_maintainer] = STATE(165),
    [sym_expose] = STATE(165),
    [sym_from] = STATE(165),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_onbuild_token1] = ACTIONS(9),
    [aux_sym_env_token1] = ACTIONS(11),
    [aux_sym_label_token1] = ACTIONS(13),
    [aux_sym_healthcheck_token1] = ACTIONS(15),
    [aux_sym_arg_token1] = ACTIONS(17),
    [aux_sym_add_token1] = ACTIONS(19),
    [aux_sym_copy_token1] = ACTIONS(21),
    [aux_sym_stopsignal_token1] = ACTIONS(23),
    [aux_sym_shell_token1] = ACTIONS(25),
    [aux_sym_volume_token1] = ACTIONS(27),
    [aux_sym_workdir_token1] = ACTIONS(29),
    [aux_sym_user_token1] = ACTIONS(31),
    [aux_sym_cmd_token1] = ACTIONS(33),
    [aux_sym_entrypoint_token1] = ACTIONS(35),
    [aux_sym_run_token1] = ACTIONS(37),
    [aux_sym_maintainer_token1] = ACTIONS(39),
    [aux_sym_expose_token1] = ACTIONS(41),
    [aux_sym_from_token1] = ACTIONS(43),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [3] = {
    [sym__directive] = STATE(165),
    [sym_onbuild] = STATE(165),
    [sym_env] = STATE(165),
    [sym_label] = STATE(165),
    [sym_healthcheck] = STATE(165),
    [sym_arg] = STATE(165),
    [sym_add] = STATE(165),
    [sym_copy] = STATE(165),
    [sym_stopsignal] = STATE(165),
    [sym_shell] = STATE(165),
    [sym_volume] = STATE(165),
    [sym_workdir] = STATE(165),
    [sym_user] = STATE(165),
    [sym_cmd] = STATE(165),
    [sym_entrypoint] = STATE(165),
    [sym_run] = STATE(165),
    [sym_maintainer] = STATE(165),
    [sym_expose] = STATE(165),
    [sym_from] = STATE(165),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_onbuild_token1] = ACTIONS(51),
    [aux_sym_env_token1] = ACTIONS(54),
    [aux_sym_label_token1] = ACTIONS(57),
    [aux_sym_healthcheck_token1] = ACTIONS(60),
    [aux_sym_arg_token1] = ACTIONS(63),
    [aux_sym_add_token1] = ACTIONS(66),
    [aux_sym_copy_token1] = ACTIONS(69),
    [aux_sym_stopsignal_token1] = ACTIONS(72),
    [aux_sym_shell_token1] = ACTIONS(75),
    [aux_sym_volume_token1] = ACTIONS(78),
    [aux_sym_workdir_token1] = ACTIONS(81),
    [aux_sym_user_token1] = ACTIONS(84),
    [aux_sym_cmd_token1] = ACTIONS(87),
    [aux_sym_entrypoint_token1] = ACTIONS(90),
    [aux_sym_run_token1] = ACTIONS(93),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(99),
    [aux_sym_from_token1] = ACTIONS(102),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(105),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [4] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(85),
    [sym_port] = STATE(85),
    [sym_port_range] = STATE(85),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_onbuild_token1] = ACTIONS(108),
    [aux_sym_env_token1] = ACTIONS(108),
    [aux_sym_label_token1] = ACTIONS(108),
    [aux_sym_healthcheck_token1] = ACTIONS(108),
    [aux_sym_arg_token1] = ACTIONS(108),
    [aux_sym_add_token1] = ACTIONS(108),
    [aux_sym_copy_token1] = ACTIONS(108),
    [aux_sym_stopsignal_token1] = ACTIONS(108),
    [aux_sym_shell_token1] = ACTIONS(108),
    [aux_sym_volume_token1] = ACTIONS(108),
    [aux_sym_workdir_token1] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_user_token1] = ACTIONS(108),
    [aux_sym_user_id_token1] = ACTIONS(113),
    [aux_sym_cmd_token1] = ACTIONS(108),
    [aux_sym_entrypoint_token1] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(108),
    [aux_sym_maintainer_token1] = ACTIONS(108),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(108),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(108),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym_env] = STATE(166),
    [sym_label] = STATE(166),
    [sym_healthcheck] = STATE(166),
    [sym_arg] = STATE(166),
    [sym_add] = STATE(166),
    [sym_copy] = STATE(166),
    [sym_stopsignal] = STATE(166),
    [sym_shell] = STATE(166),
    [sym_volume] = STATE(166),
    [sym_workdir] = STATE(166),
    [sym_user] = STATE(166),
    [sym_cmd] = STATE(166),
    [sym_entrypoint] = STATE(166),
    [sym_run] = STATE(166),
    [sym_expose] = STATE(166),
    [aux_sym_env_token1] = ACTIONS(11),
    [aux_sym_label_token1] = ACTIONS(13),
    [aux_sym_healthcheck_token1] = ACTIONS(15),
    [aux_sym_arg_token1] = ACTIONS(17),
    [aux_sym_add_token1] = ACTIONS(19),
    [aux_sym_copy_token1] = ACTIONS(21),
    [aux_sym_stopsignal_token1] = ACTIONS(23),
    [aux_sym_shell_token1] = ACTIONS(25),
    [aux_sym_volume_token1] = ACTIONS(27),
    [aux_sym_workdir_token1] = ACTIONS(29),
    [aux_sym_user_token1] = ACTIONS(31),
    [aux_sym_cmd_token1] = ACTIONS(33),
    [aux_sym_entrypoint_token1] = ACTIONS(35),
    [aux_sym_run_token1] = ACTIONS(37),
    [aux_sym_expose_token1] = ACTIONS(41),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [6] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(85),
    [sym_port] = STATE(85),
    [sym_port_range] = STATE(85),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_onbuild_token1] = ACTIONS(119),
    [aux_sym_env_token1] = ACTIONS(119),
    [aux_sym_label_token1] = ACTIONS(119),
    [aux_sym_healthcheck_token1] = ACTIONS(119),
    [aux_sym_arg_token1] = ACTIONS(119),
    [aux_sym_add_token1] = ACTIONS(119),
    [aux_sym_copy_token1] = ACTIONS(119),
    [aux_sym_stopsignal_token1] = ACTIONS(119),
    [aux_sym_shell_token1] = ACTIONS(119),
    [aux_sym_volume_token1] = ACTIONS(119),
    [aux_sym_workdir_token1] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [aux_sym_user_token1] = ACTIONS(119),
    [aux_sym_user_id_token1] = ACTIONS(123),
    [aux_sym_cmd_token1] = ACTIONS(119),
    [aux_sym_entrypoint_token1] = ACTIONS(119),
    [aux_sym_run_token1] = ACTIONS(119),
    [aux_sym_maintainer_token1] = ACTIONS(119),
    [aux_sym_expose_token1] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [aux_sym_from_token1] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(119),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [7] = {
    [aux_sym__repository_start_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_onbuild_token1] = ACTIONS(139),
    [aux_sym_env_token1] = ACTIONS(139),
    [aux_sym_label_token1] = ACTIONS(139),
    [aux_sym_healthcheck_token1] = ACTIONS(139),
    [aux_sym_arg_token1] = ACTIONS(139),
    [aux_sym_add_token1] = ACTIONS(139),
    [aux_sym_copy_token1] = ACTIONS(139),
    [aux_sym_stopsignal_token1] = ACTIONS(139),
    [aux_sym_shell_token1] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(139),
    [aux_sym_entrypoint_token1] = ACTIONS(139),
    [aux_sym_run_token1] = ACTIONS(139),
    [aux_sym_maintainer_token1] = ACTIONS(139),
    [aux_sym_expose_token1] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [aux_sym_from_token1] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(143),
    [aux_sym__repository_start_token16] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
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
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
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
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token8] = ACTIONS(156),
    [aux_sym__repository_start_token11] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(152),
    [sym__space_no_newline] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token7] = ACTIONS(163),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_onbuild_token1] = ACTIONS(167),
    [aux_sym_env_token1] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(167),
    [aux_sym_healthcheck_token1] = ACTIONS(167),
    [aux_sym_arg_token1] = ACTIONS(167),
    [aux_sym_add_token1] = ACTIONS(167),
    [aux_sym_copy_token1] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(169),
    [aux_sym__repository_start_token7] = ACTIONS(169),
    [aux_sym__repository_start_token16] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token7] = ACTIONS(163),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(180),
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
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym_user_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym_from_token1] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token16] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(180),
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
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_user_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_onbuild_token1] = ACTIONS(193),
    [aux_sym_env_token1] = ACTIONS(193),
    [aux_sym_label_token1] = ACTIONS(193),
    [aux_sym_healthcheck_token1] = ACTIONS(193),
    [aux_sym_arg_token1] = ACTIONS(193),
    [aux_sym_add_token1] = ACTIONS(193),
    [aux_sym_copy_token1] = ACTIONS(193),
    [aux_sym_stopsignal_token1] = ACTIONS(193),
    [aux_sym_shell_token1] = ACTIONS(193),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym_user_token1] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [aux_sym_cmd_token1] = ACTIONS(193),
    [aux_sym_entrypoint_token1] = ACTIONS(193),
    [aux_sym_run_token1] = ACTIONS(193),
    [aux_sym_maintainer_token1] = ACTIONS(193),
    [aux_sym_expose_token1] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym_from_token1] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [aux_sym__repository_start_token16] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token16] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym_from_token1] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [aux_sym__repository_start_token16] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym_from_token1] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token16] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token12] = ACTIONS(207),
    [aux_sym__repository_start_token15] = ACTIONS(207),
    [aux_sym__repository_start_token16] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [sym_port_protocol] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_onbuild_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(211),
    [aux_sym_healthcheck_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [aux_sym_user_id_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [aux_sym_from_token1] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [27] = {
    [aux_sym__repository_start_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [aux_sym__repository_start_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_COLON] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token4] = ACTIONS(219),
    [aux_sym__repository_start_token7] = ACTIONS(219),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym__repository_start_repeat4] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_COLON] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token12] = ACTIONS(223),
    [aux_sym__repository_start_token15] = ACTIONS(223),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_COLON] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token8] = ACTIONS(225),
    [aux_sym__repository_start_token11] = ACTIONS(225),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat4] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_COLON] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token12] = ACTIONS(223),
    [aux_sym__repository_start_token15] = ACTIONS(223),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat4] = STATE(32),
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
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token12] = ACTIONS(227),
    [aux_sym__repository_start_token15] = ACTIONS(227),
    [sym__space_no_newline] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
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
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token8] = ACTIONS(230),
    [aux_sym__repository_start_token11] = ACTIONS(230),
    [sym__space_no_newline] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_onbuild_token1] = ACTIONS(167),
    [aux_sym_env_token1] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(167),
    [aux_sym_healthcheck_token1] = ACTIONS(167),
    [aux_sym_arg_token1] = ACTIONS(167),
    [aux_sym_add_token1] = ACTIONS(167),
    [aux_sym_copy_token1] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(233),
    [aux_sym__repository_start_token7] = ACTIONS(233),
    [sym__space_no_newline] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(180),
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
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [aux_sym_user_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(180),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(236),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space_no_newline] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [sym_port_protocol] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_onbuild_token1] = ACTIONS(239),
    [aux_sym_env_token1] = ACTIONS(239),
    [aux_sym_label_token1] = ACTIONS(239),
    [aux_sym_healthcheck_token1] = ACTIONS(239),
    [aux_sym_arg_token1] = ACTIONS(239),
    [aux_sym_add_token1] = ACTIONS(239),
    [aux_sym_copy_token1] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(239),
    [aux_sym_shell_token1] = ACTIONS(239),
    [aux_sym_volume_token1] = ACTIONS(239),
    [aux_sym_workdir_token1] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(239),
    [aux_sym_user_token1] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [aux_sym_user_id_token1] = ACTIONS(239),
    [aux_sym_cmd_token1] = ACTIONS(239),
    [aux_sym_entrypoint_token1] = ACTIONS(239),
    [aux_sym_run_token1] = ACTIONS(239),
    [aux_sym_maintainer_token1] = ACTIONS(239),
    [aux_sym_expose_token1] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(213),
    [aux_sym_from_token1] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(239),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym__repository_start_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_COLON] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token4] = ACTIONS(219),
    [aux_sym__repository_start_token7] = ACTIONS(219),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_onbuild_token1] = ACTIONS(139),
    [aux_sym_env_token1] = ACTIONS(139),
    [aux_sym_label_token1] = ACTIONS(139),
    [aux_sym_healthcheck_token1] = ACTIONS(139),
    [aux_sym_arg_token1] = ACTIONS(139),
    [aux_sym_add_token1] = ACTIONS(139),
    [aux_sym_copy_token1] = ACTIONS(139),
    [aux_sym_stopsignal_token1] = ACTIONS(139),
    [aux_sym_shell_token1] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(137),
    [aux_sym_cmd_token1] = ACTIONS(139),
    [aux_sym_entrypoint_token1] = ACTIONS(139),
    [aux_sym_run_token1] = ACTIONS(139),
    [aux_sym_maintainer_token1] = ACTIONS(139),
    [aux_sym_expose_token1] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(241),
    [sym__space_no_newline] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_COLON] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token8] = ACTIONS(225),
    [aux_sym__repository_start_token11] = ACTIONS(225),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(195),
    [aux_sym_env_token1] = ACTIONS(195),
    [aux_sym_label_token1] = ACTIONS(195),
    [aux_sym_healthcheck_token1] = ACTIONS(195),
    [aux_sym_arg_token1] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(195),
    [aux_sym_copy_token1] = ACTIONS(195),
    [aux_sym_stopsignal_token1] = ACTIONS(195),
    [aux_sym_shell_token1] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [aux_sym_user_id_token1] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(195),
    [aux_sym_entrypoint_token1] = ACTIONS(195),
    [aux_sym_run_token1] = ACTIONS(195),
    [aux_sym_maintainer_token1] = ACTIONS(195),
    [aux_sym_expose_token1] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(203),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space_no_newline] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(180),
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
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_user_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(180),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space_no_newline] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_onbuild_token1] = ACTIONS(193),
    [aux_sym_env_token1] = ACTIONS(193),
    [aux_sym_label_token1] = ACTIONS(193),
    [aux_sym_healthcheck_token1] = ACTIONS(193),
    [aux_sym_arg_token1] = ACTIONS(193),
    [aux_sym_add_token1] = ACTIONS(193),
    [aux_sym_copy_token1] = ACTIONS(193),
    [aux_sym_stopsignal_token1] = ACTIONS(193),
    [aux_sym_shell_token1] = ACTIONS(193),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym_user_token1] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(191),
    [aux_sym_cmd_token1] = ACTIONS(193),
    [aux_sym_entrypoint_token1] = ACTIONS(193),
    [aux_sym_run_token1] = ACTIONS(193),
    [aux_sym_maintainer_token1] = ACTIONS(193),
    [aux_sym_expose_token1] = ACTIONS(193),
    [aux_sym_from_token1] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(199),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [aux_sym__repository_start_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_onbuild_token1] = ACTIONS(245),
    [aux_sym_env_token1] = ACTIONS(245),
    [aux_sym_label_token1] = ACTIONS(245),
    [aux_sym_healthcheck_token1] = ACTIONS(245),
    [aux_sym_arg_token1] = ACTIONS(245),
    [aux_sym_add_token1] = ACTIONS(245),
    [aux_sym_copy_token1] = ACTIONS(245),
    [aux_sym_stopsignal_token1] = ACTIONS(245),
    [aux_sym_shell_token1] = ACTIONS(245),
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(245),
    [aux_sym_cmd_token1] = ACTIONS(245),
    [aux_sym_entrypoint_token1] = ACTIONS(245),
    [aux_sym_run_token1] = ACTIONS(245),
    [aux_sym_maintainer_token1] = ACTIONS(245),
    [aux_sym_expose_token1] = ACTIONS(245),
    [aux_sym_from_token1] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(243),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [sym__space_no_newline] = ACTIONS(245),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(207),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token12] = ACTIONS(207),
    [aux_sym__repository_start_token15] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(203),
    [aux_sym_env_token1] = ACTIONS(203),
    [aux_sym_label_token1] = ACTIONS(203),
    [aux_sym_healthcheck_token1] = ACTIONS(203),
    [aux_sym_arg_token1] = ACTIONS(203),
    [aux_sym_add_token1] = ACTIONS(203),
    [aux_sym_copy_token1] = ACTIONS(203),
    [aux_sym_stopsignal_token1] = ACTIONS(203),
    [aux_sym_shell_token1] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(203),
    [aux_sym_workdir_token1] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [aux_sym_user_id_token1] = ACTIONS(203),
    [aux_sym_cmd_token1] = ACTIONS(203),
    [aux_sym_entrypoint_token1] = ACTIONS(203),
    [aux_sym_run_token1] = ACTIONS(203),
    [aux_sym_maintainer_token1] = ACTIONS(203),
    [aux_sym_expose_token1] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym_from_token1] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(187),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space_no_newline] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(187),
    [aux_sym_env_token1] = ACTIONS(187),
    [aux_sym_label_token1] = ACTIONS(187),
    [aux_sym_healthcheck_token1] = ACTIONS(187),
    [aux_sym_arg_token1] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(187),
    [aux_sym_copy_token1] = ACTIONS(187),
    [aux_sym_stopsignal_token1] = ACTIONS(187),
    [aux_sym_shell_token1] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(187),
    [aux_sym_workdir_token1] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [aux_sym_user_id_token1] = ACTIONS(187),
    [aux_sym_cmd_token1] = ACTIONS(187),
    [aux_sym_entrypoint_token1] = ACTIONS(187),
    [aux_sym_run_token1] = ACTIONS(187),
    [aux_sym_maintainer_token1] = ACTIONS(187),
    [aux_sym_expose_token1] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym_from_token1] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [aux_sym__repository_start_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [sym__space_no_newline] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [aux_sym__repository_start_repeat2] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token7] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [52] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [53] = {
    [aux_sym__repository_start_repeat3] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
    [aux_sym__repository_start_repeat4] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [56] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token7] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space_no_newline] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [aux_sym__repository_start_token16] = ACTIONS(265),
    [sym__space_no_newline] = ACTIONS(263),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym__repository_start_repeat3] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym__repository_start_token3] = ACTIONS(271),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [aux_sym__repository_start_repeat4] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym__repository_start_token3] = ACTIONS(271),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_onbuild_token1] = ACTIONS(273),
    [aux_sym_env_token1] = ACTIONS(273),
    [aux_sym_label_token1] = ACTIONS(273),
    [aux_sym_healthcheck_token1] = ACTIONS(273),
    [aux_sym_arg_token1] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(273),
    [aux_sym_copy_token1] = ACTIONS(273),
    [aux_sym_stopsignal_token1] = ACTIONS(273),
    [aux_sym_shell_token1] = ACTIONS(273),
    [aux_sym_volume_token1] = ACTIONS(273),
    [aux_sym_workdir_token1] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [aux_sym_user_token1] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [aux_sym_user_id_token1] = ACTIONS(273),
    [aux_sym_cmd_token1] = ACTIONS(273),
    [aux_sym_entrypoint_token1] = ACTIONS(273),
    [aux_sym_run_token1] = ACTIONS(273),
    [aux_sym_maintainer_token1] = ACTIONS(273),
    [aux_sym_expose_token1] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [aux_sym_from_token1] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_onbuild_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_label_token1] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [aux_sym_user_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_onbuild_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_label_token1] = ACTIONS(275),
    [aux_sym_healthcheck_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
    [aux_sym_user_id_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [aux_sym__repository_start_repeat2] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym__repository_start_token3] = ACTIONS(271),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token7] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(271),
    [sym__space_no_newline] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [aux_sym__repository_start_token3] = ACTIONS(283),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_onbuild_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_label_token1] = ACTIONS(285),
    [aux_sym_healthcheck_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_stopsignal_token1] = ACTIONS(285),
    [aux_sym_shell_token1] = ACTIONS(285),
    [aux_sym_volume_token1] = ACTIONS(285),
    [aux_sym_workdir_token1] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_user_token1] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [aux_sym_user_id_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_run_token1] = ACTIONS(285),
    [aux_sym_maintainer_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [aux_sym__repository_start_token3] = ACTIONS(283),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token7] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [aux_sym__repository_start_repeat4] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [aux_sym__repository_start_token3] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_onbuild_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(211),
    [aux_sym_healthcheck_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [aux_sym_user_id_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_onbuild_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_label_token1] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_stopsignal_token1] = ACTIONS(287),
    [aux_sym_shell_token1] = ACTIONS(287),
    [aux_sym_volume_token1] = ACTIONS(287),
    [aux_sym_workdir_token1] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [aux_sym_user_id_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_onbuild_token1] = ACTIONS(127),
    [aux_sym_env_token1] = ACTIONS(127),
    [aux_sym_label_token1] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(127),
    [aux_sym_arg_token1] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(127),
    [aux_sym_copy_token1] = ACTIONS(127),
    [aux_sym_stopsignal_token1] = ACTIONS(127),
    [aux_sym_shell_token1] = ACTIONS(127),
    [aux_sym_volume_token1] = ACTIONS(127),
    [aux_sym_workdir_token1] = ACTIONS(127),
    [aux_sym_user_token1] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(127),
    [aux_sym_entrypoint_token1] = ACTIONS(127),
    [aux_sym_run_token1] = ACTIONS(127),
    [aux_sym_maintainer_token1] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym_from_token1] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [aux_sym__repository_start_token16] = ACTIONS(293),
    [sym__space_no_newline] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
    [aux_sym__repository_start_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_user_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [aux_sym_from_token1] = ACTIONS(297),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [aux_sym__repository_start_repeat3] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token8] = ACTIONS(307),
    [aux_sym__repository_start_token11] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [aux_sym__repository_start_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(311),
    [aux_sym_env_token1] = ACTIONS(311),
    [aux_sym_label_token1] = ACTIONS(311),
    [aux_sym_healthcheck_token1] = ACTIONS(311),
    [aux_sym_arg_token1] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(311),
    [aux_sym_copy_token1] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(311),
    [aux_sym_shell_token1] = ACTIONS(311),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_run_token1] = ACTIONS(311),
    [aux_sym_maintainer_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [aux_sym_from_token1] = ACTIONS(311),
    [aux_sym__repository_start_token2] = ACTIONS(313),
    [aux_sym__repository_start_token3] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [aux_sym_workdir_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_onbuild_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_label_token1] = ACTIONS(319),
    [aux_sym_healthcheck_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_stopsignal_token1] = ACTIONS(319),
    [aux_sym_shell_token1] = ACTIONS(319),
    [aux_sym_volume_token1] = ACTIONS(319),
    [aux_sym_workdir_token1] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [aux_sym_workdir_token3] = ACTIONS(323),
    [aux_sym_workdir_token4] = ACTIONS(325),
    [aux_sym_user_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(319),
    [aux_sym_maintainer_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_workdir_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym_onbuild_token1] = ACTIONS(329),
    [aux_sym_env_token1] = ACTIONS(329),
    [aux_sym_label_token1] = ACTIONS(329),
    [aux_sym_healthcheck_token1] = ACTIONS(329),
    [aux_sym_arg_token1] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(329),
    [aux_sym_copy_token1] = ACTIONS(329),
    [aux_sym_stopsignal_token1] = ACTIONS(329),
    [aux_sym_shell_token1] = ACTIONS(329),
    [aux_sym_volume_token1] = ACTIONS(329),
    [aux_sym_workdir_token1] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [aux_sym_workdir_token3] = ACTIONS(334),
    [aux_sym_workdir_token4] = ACTIONS(329),
    [aux_sym_user_token1] = ACTIONS(329),
    [aux_sym_cmd_token1] = ACTIONS(329),
    [aux_sym_entrypoint_token1] = ACTIONS(329),
    [aux_sym_run_token1] = ACTIONS(329),
    [aux_sym_maintainer_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym_onbuild_token1] = ACTIONS(337),
    [aux_sym_env_token1] = ACTIONS(337),
    [aux_sym_label_token1] = ACTIONS(337),
    [aux_sym_healthcheck_token1] = ACTIONS(337),
    [aux_sym_arg_token1] = ACTIONS(337),
    [aux_sym_add_token1] = ACTIONS(337),
    [aux_sym_copy_token1] = ACTIONS(337),
    [aux_sym_stopsignal_token1] = ACTIONS(337),
    [aux_sym_shell_token1] = ACTIONS(337),
    [aux_sym_volume_token1] = ACTIONS(337),
    [aux_sym_workdir_token1] = ACTIONS(337),
    [anon_sym_DOLLAR] = ACTIONS(337),
    [aux_sym_user_token1] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [aux_sym_user_id_token1] = ACTIONS(337),
    [aux_sym_cmd_token1] = ACTIONS(337),
    [aux_sym_entrypoint_token1] = ACTIONS(337),
    [aux_sym_run_token1] = ACTIONS(337),
    [aux_sym_maintainer_token1] = ACTIONS(337),
    [aux_sym_expose_token1] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [aux_sym_from_token1] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_onbuild_token1] = ACTIONS(339),
    [aux_sym_env_token1] = ACTIONS(339),
    [aux_sym_label_token1] = ACTIONS(339),
    [aux_sym_healthcheck_token1] = ACTIONS(339),
    [aux_sym_arg_token1] = ACTIONS(339),
    [aux_sym_add_token1] = ACTIONS(339),
    [aux_sym_copy_token1] = ACTIONS(339),
    [aux_sym_stopsignal_token1] = ACTIONS(339),
    [aux_sym_shell_token1] = ACTIONS(339),
    [aux_sym_volume_token1] = ACTIONS(339),
    [aux_sym_workdir_token1] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [aux_sym_user_token1] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [aux_sym_user_id_token1] = ACTIONS(339),
    [aux_sym_cmd_token1] = ACTIONS(339),
    [aux_sym_entrypoint_token1] = ACTIONS(339),
    [aux_sym_run_token1] = ACTIONS(339),
    [aux_sym_maintainer_token1] = ACTIONS(339),
    [aux_sym_expose_token1] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [aux_sym_from_token1] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [aux_sym__repository_start_repeat3] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(343),
    [aux_sym_env_token1] = ACTIONS(343),
    [aux_sym_label_token1] = ACTIONS(343),
    [aux_sym_healthcheck_token1] = ACTIONS(343),
    [aux_sym_arg_token1] = ACTIONS(343),
    [aux_sym_add_token1] = ACTIONS(343),
    [aux_sym_copy_token1] = ACTIONS(343),
    [aux_sym_stopsignal_token1] = ACTIONS(343),
    [aux_sym_shell_token1] = ACTIONS(343),
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [aux_sym_user_token1] = ACTIONS(343),
    [aux_sym_cmd_token1] = ACTIONS(343),
    [aux_sym_entrypoint_token1] = ACTIONS(343),
    [aux_sym_run_token1] = ACTIONS(343),
    [aux_sym_maintainer_token1] = ACTIONS(343),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym__repository_start_token3] = ACTIONS(345),
    [aux_sym__repository_start_token8] = ACTIONS(307),
    [aux_sym__repository_start_token11] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [82] = {
    [aux_sym__repository_start_repeat2] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(343),
    [aux_sym_env_token1] = ACTIONS(343),
    [aux_sym_label_token1] = ACTIONS(343),
    [aux_sym_healthcheck_token1] = ACTIONS(343),
    [aux_sym_arg_token1] = ACTIONS(343),
    [aux_sym_add_token1] = ACTIONS(343),
    [aux_sym_copy_token1] = ACTIONS(343),
    [aux_sym_stopsignal_token1] = ACTIONS(343),
    [aux_sym_shell_token1] = ACTIONS(343),
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [aux_sym_user_token1] = ACTIONS(343),
    [aux_sym_cmd_token1] = ACTIONS(343),
    [aux_sym_entrypoint_token1] = ACTIONS(343),
    [aux_sym_run_token1] = ACTIONS(343),
    [aux_sym_maintainer_token1] = ACTIONS(343),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym__repository_start_token3] = ACTIONS(345),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token7] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [aux_sym__repository_start_repeat2] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token4] = ACTIONS(347),
    [aux_sym__repository_start_token7] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [84] = {
    [aux_sym__repository_start_repeat4] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token12] = ACTIONS(349),
    [aux_sym__repository_start_token15] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_onbuild_token1] = ACTIONS(351),
    [aux_sym_env_token1] = ACTIONS(351),
    [aux_sym_label_token1] = ACTIONS(351),
    [aux_sym_healthcheck_token1] = ACTIONS(351),
    [aux_sym_arg_token1] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(351),
    [aux_sym_copy_token1] = ACTIONS(351),
    [aux_sym_stopsignal_token1] = ACTIONS(351),
    [aux_sym_shell_token1] = ACTIONS(351),
    [aux_sym_volume_token1] = ACTIONS(351),
    [aux_sym_workdir_token1] = ACTIONS(351),
    [anon_sym_DOLLAR] = ACTIONS(351),
    [aux_sym_user_token1] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(353),
    [aux_sym_user_id_token1] = ACTIONS(351),
    [aux_sym_cmd_token1] = ACTIONS(351),
    [aux_sym_entrypoint_token1] = ACTIONS(351),
    [aux_sym_run_token1] = ACTIONS(351),
    [aux_sym_maintainer_token1] = ACTIONS(351),
    [aux_sym_expose_token1] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [aux_sym_from_token1] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
    [aux_sym_workdir_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(355),
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
    [anon_sym_DOLLAR] = ACTIONS(321),
    [aux_sym_workdir_token3] = ACTIONS(323),
    [aux_sym_workdir_token4] = ACTIONS(359),
    [aux_sym_user_token1] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(357),
    [aux_sym_entrypoint_token1] = ACTIONS(357),
    [aux_sym_run_token1] = ACTIONS(357),
    [aux_sym_maintainer_token1] = ACTIONS(357),
    [aux_sym_expose_token1] = ACTIONS(357),
    [aux_sym_from_token1] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__repository_start_repeat4] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(343),
    [aux_sym_env_token1] = ACTIONS(343),
    [aux_sym_label_token1] = ACTIONS(343),
    [aux_sym_healthcheck_token1] = ACTIONS(343),
    [aux_sym_arg_token1] = ACTIONS(343),
    [aux_sym_add_token1] = ACTIONS(343),
    [aux_sym_copy_token1] = ACTIONS(343),
    [aux_sym_stopsignal_token1] = ACTIONS(343),
    [aux_sym_shell_token1] = ACTIONS(343),
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [aux_sym_user_token1] = ACTIONS(343),
    [aux_sym_cmd_token1] = ACTIONS(343),
    [aux_sym_entrypoint_token1] = ACTIONS(343),
    [aux_sym_run_token1] = ACTIONS(343),
    [aux_sym_maintainer_token1] = ACTIONS(343),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym__repository_start_token3] = ACTIONS(345),
    [aux_sym__repository_start_token12] = ACTIONS(349),
    [aux_sym__repository_start_token15] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [88] = {
    [aux_sym__repository_start_repeat2] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_onbuild_token1] = ACTIONS(167),
    [aux_sym_env_token1] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(167),
    [aux_sym_healthcheck_token1] = ACTIONS(167),
    [aux_sym_arg_token1] = ACTIONS(167),
    [aux_sym_add_token1] = ACTIONS(167),
    [aux_sym_copy_token1] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(361),
    [aux_sym__repository_start_token7] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [89] = {
    [aux_sym__repository_start_repeat4] = STATE(89),
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
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token12] = ACTIONS(364),
    [aux_sym__repository_start_token15] = ACTIONS(364),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
    [aux_sym__repository_start_repeat3] = STATE(90),
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
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_maintainer_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token8] = ACTIONS(367),
    [aux_sym__repository_start_token11] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [91] = {
    [aux_sym__repository_start_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(180),
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
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [aux_sym_user_token1] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(370),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [aux_sym__repository_start_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(343),
    [aux_sym_env_token1] = ACTIONS(343),
    [aux_sym_label_token1] = ACTIONS(343),
    [aux_sym_healthcheck_token1] = ACTIONS(343),
    [aux_sym_arg_token1] = ACTIONS(343),
    [aux_sym_add_token1] = ACTIONS(343),
    [aux_sym_copy_token1] = ACTIONS(343),
    [aux_sym_stopsignal_token1] = ACTIONS(343),
    [aux_sym_shell_token1] = ACTIONS(343),
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(343),
    [aux_sym_cmd_token1] = ACTIONS(343),
    [aux_sym_entrypoint_token1] = ACTIONS(343),
    [aux_sym_run_token1] = ACTIONS(343),
    [aux_sym_maintainer_token1] = ACTIONS(343),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym__repository_start_token2] = ACTIONS(313),
    [aux_sym__repository_start_token3] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [aux_sym_workdir_token3] = ACTIONS(203),
    [aux_sym_workdir_token4] = ACTIONS(205),
    [aux_sym_user_token1] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token12] = ACTIONS(207),
    [aux_sym__repository_start_token15] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym_onbuild_token1] = ACTIONS(373),
    [aux_sym_env_token1] = ACTIONS(373),
    [aux_sym_label_token1] = ACTIONS(373),
    [aux_sym_healthcheck_token1] = ACTIONS(373),
    [aux_sym_arg_token1] = ACTIONS(373),
    [aux_sym_add_token1] = ACTIONS(373),
    [aux_sym_copy_token1] = ACTIONS(373),
    [aux_sym_stopsignal_token1] = ACTIONS(373),
    [aux_sym_shell_token1] = ACTIONS(373),
    [aux_sym_volume_token1] = ACTIONS(373),
    [aux_sym_workdir_token1] = ACTIONS(373),
    [aux_sym_user_token1] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(377),
    [sym__space_no_newline] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_onbuild_token1] = ACTIONS(127),
    [aux_sym_env_token1] = ACTIONS(127),
    [aux_sym_label_token1] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(127),
    [aux_sym_arg_token1] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(127),
    [aux_sym_copy_token1] = ACTIONS(127),
    [aux_sym_stopsignal_token1] = ACTIONS(127),
    [aux_sym_shell_token1] = ACTIONS(127),
    [aux_sym_volume_token1] = ACTIONS(127),
    [aux_sym_workdir_token1] = ACTIONS(127),
    [aux_sym_user_token1] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(127),
    [aux_sym_entrypoint_token1] = ACTIONS(127),
    [aux_sym_run_token1] = ACTIONS(127),
    [aux_sym_maintainer_token1] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(127),
    [aux_sym_from_token1] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
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
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [aux_sym_user_id_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(180),
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
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_user_token1] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym_onbuild_token1] = ACTIONS(383),
    [aux_sym_env_token1] = ACTIONS(383),
    [aux_sym_label_token1] = ACTIONS(383),
    [aux_sym_healthcheck_token1] = ACTIONS(383),
    [aux_sym_arg_token1] = ACTIONS(383),
    [aux_sym_add_token1] = ACTIONS(383),
    [aux_sym_copy_token1] = ACTIONS(383),
    [aux_sym_stopsignal_token1] = ACTIONS(383),
    [aux_sym_shell_token1] = ACTIONS(383),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym_user_token1] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
    [aux_sym_cmd_token1] = ACTIONS(383),
    [aux_sym_entrypoint_token1] = ACTIONS(383),
    [aux_sym_run_token1] = ACTIONS(383),
    [aux_sym_maintainer_token1] = ACTIONS(383),
    [aux_sym_expose_token1] = ACTIONS(383),
    [aux_sym_from_token1] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(387),
    [sym__space_no_newline] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [aux_sym_workdir_token3] = ACTIONS(187),
    [aux_sym_workdir_token4] = ACTIONS(189),
    [aux_sym_user_token1] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym_workdir_token3] = ACTIONS(195),
    [aux_sym_workdir_token4] = ACTIONS(197),
    [aux_sym_user_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym_onbuild_token1] = ACTIONS(329),
    [aux_sym_env_token1] = ACTIONS(329),
    [aux_sym_label_token1] = ACTIONS(329),
    [aux_sym_healthcheck_token1] = ACTIONS(329),
    [aux_sym_arg_token1] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(329),
    [aux_sym_copy_token1] = ACTIONS(329),
    [aux_sym_stopsignal_token1] = ACTIONS(329),
    [aux_sym_shell_token1] = ACTIONS(329),
    [aux_sym_volume_token1] = ACTIONS(329),
    [aux_sym_workdir_token1] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [aux_sym_workdir_token3] = ACTIONS(327),
    [aux_sym_workdir_token4] = ACTIONS(329),
    [aux_sym_user_token1] = ACTIONS(329),
    [aux_sym_cmd_token1] = ACTIONS(329),
    [aux_sym_entrypoint_token1] = ACTIONS(329),
    [aux_sym_run_token1] = ACTIONS(329),
    [aux_sym_maintainer_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym_onbuild_token1] = ACTIONS(391),
    [aux_sym_env_token1] = ACTIONS(391),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_healthcheck_token1] = ACTIONS(391),
    [aux_sym_arg_token1] = ACTIONS(391),
    [aux_sym_add_token1] = ACTIONS(391),
    [aux_sym_copy_token1] = ACTIONS(391),
    [aux_sym_stopsignal_token1] = ACTIONS(391),
    [aux_sym_shell_token1] = ACTIONS(391),
    [aux_sym_volume_token1] = ACTIONS(391),
    [aux_sym_workdir_token1] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(391),
    [aux_sym_user_token1] = ACTIONS(391),
    [aux_sym_user_id_token1] = ACTIONS(391),
    [aux_sym_cmd_token1] = ACTIONS(391),
    [aux_sym_entrypoint_token1] = ACTIONS(391),
    [aux_sym_run_token1] = ACTIONS(391),
    [aux_sym_maintainer_token1] = ACTIONS(391),
    [aux_sym_expose_token1] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [aux_sym_from_token1] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [aux_sym_from_token1] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_onbuild_token1] = ACTIONS(193),
    [aux_sym_env_token1] = ACTIONS(193),
    [aux_sym_label_token1] = ACTIONS(193),
    [aux_sym_healthcheck_token1] = ACTIONS(193),
    [aux_sym_arg_token1] = ACTIONS(193),
    [aux_sym_add_token1] = ACTIONS(193),
    [aux_sym_copy_token1] = ACTIONS(193),
    [aux_sym_stopsignal_token1] = ACTIONS(193),
    [aux_sym_shell_token1] = ACTIONS(193),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym_user_token1] = ACTIONS(193),
    [aux_sym_cmd_token1] = ACTIONS(193),
    [aux_sym_entrypoint_token1] = ACTIONS(193),
    [aux_sym_run_token1] = ACTIONS(193),
    [aux_sym_maintainer_token1] = ACTIONS(193),
    [aux_sym_expose_token1] = ACTIONS(193),
    [aux_sym_from_token1] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
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
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(397),
    [sym__space_no_newline] = ACTIONS(399),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [sym__space_no_newline] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [aux_sym_onbuild_token1] = ACTIONS(401),
    [aux_sym_env_token1] = ACTIONS(401),
    [aux_sym_label_token1] = ACTIONS(401),
    [aux_sym_healthcheck_token1] = ACTIONS(401),
    [aux_sym_arg_token1] = ACTIONS(401),
    [aux_sym_add_token1] = ACTIONS(401),
    [aux_sym_copy_token1] = ACTIONS(401),
    [aux_sym_stopsignal_token1] = ACTIONS(401),
    [aux_sym_shell_token1] = ACTIONS(401),
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [aux_sym_user_token1] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
    [aux_sym_cmd_token1] = ACTIONS(401),
    [aux_sym_entrypoint_token1] = ACTIONS(401),
    [aux_sym_run_token1] = ACTIONS(401),
    [aux_sym_maintainer_token1] = ACTIONS(401),
    [aux_sym_expose_token1] = ACTIONS(401),
    [aux_sym_from_token1] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(405),
    [sym__space_no_newline] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_onbuild_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_label_token1] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [aux_sym_user_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_onbuild_token1] = ACTIONS(409),
    [aux_sym_env_token1] = ACTIONS(409),
    [aux_sym_label_token1] = ACTIONS(409),
    [aux_sym_healthcheck_token1] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(409),
    [aux_sym_add_token1] = ACTIONS(409),
    [aux_sym_copy_token1] = ACTIONS(409),
    [aux_sym_stopsignal_token1] = ACTIONS(409),
    [aux_sym_shell_token1] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(409),
    [aux_sym_workdir_token1] = ACTIONS(409),
    [aux_sym_user_token1] = ACTIONS(409),
    [aux_sym_cmd_token1] = ACTIONS(409),
    [aux_sym_entrypoint_token1] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(411),
    [sym__space_no_newline] = ACTIONS(413),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [115] = {
    [aux_sym__anything] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_onbuild_token1] = ACTIONS(417),
    [aux_sym_env_token1] = ACTIONS(417),
    [aux_sym_label_token1] = ACTIONS(417),
    [aux_sym_healthcheck_token1] = ACTIONS(417),
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
    [aux_sym__anything_token1] = ACTIONS(419),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(415),
    [sym_comment] = ACTIONS(417),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(422),
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
    [anon_sym_AT] = ACTIONS(422),
    [sym__space_no_newline] = ACTIONS(424),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [aux_sym_add_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(426),
    [aux_sym_onbuild_token1] = ACTIONS(428),
    [aux_sym_env_token1] = ACTIONS(428),
    [aux_sym_label_token1] = ACTIONS(428),
    [aux_sym_healthcheck_token1] = ACTIONS(428),
    [aux_sym_arg_token1] = ACTIONS(428),
    [aux_sym_add_token1] = ACTIONS(428),
    [aux_sym_copy_token1] = ACTIONS(428),
    [aux_sym_stopsignal_token1] = ACTIONS(428),
    [aux_sym_shell_token1] = ACTIONS(428),
    [aux_sym_volume_token1] = ACTIONS(428),
    [sym_path] = ACTIONS(430),
    [aux_sym_workdir_token1] = ACTIONS(428),
    [aux_sym_user_token1] = ACTIONS(428),
    [aux_sym_cmd_token1] = ACTIONS(428),
    [aux_sym_entrypoint_token1] = ACTIONS(428),
    [aux_sym_run_token1] = ACTIONS(428),
    [aux_sym_maintainer_token1] = ACTIONS(428),
    [aux_sym_expose_token1] = ACTIONS(428),
    [aux_sym_from_token1] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym_onbuild_token1] = ACTIONS(434),
    [aux_sym_env_token1] = ACTIONS(434),
    [aux_sym_label_token1] = ACTIONS(434),
    [aux_sym_healthcheck_token1] = ACTIONS(434),
    [aux_sym_arg_token1] = ACTIONS(434),
    [aux_sym_add_token1] = ACTIONS(434),
    [aux_sym_copy_token1] = ACTIONS(434),
    [aux_sym_stopsignal_token1] = ACTIONS(434),
    [aux_sym_shell_token1] = ACTIONS(434),
    [aux_sym_volume_token1] = ACTIONS(434),
    [sym_path] = ACTIONS(434),
    [aux_sym_workdir_token1] = ACTIONS(434),
    [aux_sym_user_token1] = ACTIONS(434),
    [aux_sym_cmd_token1] = ACTIONS(434),
    [aux_sym_entrypoint_token1] = ACTIONS(434),
    [aux_sym_run_token1] = ACTIONS(434),
    [aux_sym_maintainer_token1] = ACTIONS(434),
    [aux_sym_expose_token1] = ACTIONS(434),
    [aux_sym_from_token1] = ACTIONS(434),
    [sym__space_no_newline] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
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
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(397),
    [sym__space_no_newline] = ACTIONS(399),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
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
    [sym__space_no_newline] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [aux_sym__anything] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_onbuild_token1] = ACTIONS(417),
    [aux_sym_env_token1] = ACTIONS(417),
    [aux_sym_label_token1] = ACTIONS(417),
    [aux_sym_healthcheck_token1] = ACTIONS(417),
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
    [aux_sym__anything_token1] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(249),
    [aux_sym_env_token1] = ACTIONS(249),
    [aux_sym_label_token1] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(249),
    [aux_sym_arg_token1] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(249),
    [aux_sym_copy_token1] = ACTIONS(249),
    [aux_sym_stopsignal_token1] = ACTIONS(249),
    [aux_sym_shell_token1] = ACTIONS(249),
    [aux_sym_volume_token1] = ACTIONS(249),
    [aux_sym_workdir_token1] = ACTIONS(249),
    [aux_sym_user_token1] = ACTIONS(249),
    [aux_sym_cmd_token1] = ACTIONS(249),
    [aux_sym_entrypoint_token1] = ACTIONS(249),
    [aux_sym_run_token1] = ACTIONS(249),
    [aux_sym_maintainer_token1] = ACTIONS(249),
    [aux_sym_expose_token1] = ACTIONS(249),
    [aux_sym_from_token1] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym_onbuild_token1] = ACTIONS(383),
    [aux_sym_env_token1] = ACTIONS(383),
    [aux_sym_label_token1] = ACTIONS(383),
    [aux_sym_healthcheck_token1] = ACTIONS(383),
    [aux_sym_arg_token1] = ACTIONS(383),
    [aux_sym_add_token1] = ACTIONS(383),
    [aux_sym_copy_token1] = ACTIONS(383),
    [aux_sym_stopsignal_token1] = ACTIONS(383),
    [aux_sym_shell_token1] = ACTIONS(383),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym_user_token1] = ACTIONS(383),
    [aux_sym_cmd_token1] = ACTIONS(383),
    [aux_sym_entrypoint_token1] = ACTIONS(383),
    [aux_sym_run_token1] = ACTIONS(383),
    [aux_sym_maintainer_token1] = ACTIONS(383),
    [aux_sym_expose_token1] = ACTIONS(383),
    [aux_sym_from_token1] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(387),
    [sym__space_no_newline] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_label_token1] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_stopsignal_token1] = ACTIONS(255),
    [aux_sym_shell_token1] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(255),
    [aux_sym_workdir_token1] = ACTIONS(255),
    [aux_sym_user_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_run_token1] = ACTIONS(255),
    [aux_sym_maintainer_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [aux_sym__anything] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_onbuild_token1] = ACTIONS(449),
    [aux_sym_env_token1] = ACTIONS(449),
    [aux_sym_label_token1] = ACTIONS(449),
    [aux_sym_healthcheck_token1] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_stopsignal_token1] = ACTIONS(449),
    [aux_sym_shell_token1] = ACTIONS(449),
    [aux_sym_volume_token1] = ACTIONS(449),
    [aux_sym_workdir_token1] = ACTIONS(449),
    [aux_sym_user_token1] = ACTIONS(449),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_run_token1] = ACTIONS(449),
    [aux_sym_maintainer_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [aux_sym__anything_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [aux_sym_add_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_onbuild_token1] = ACTIONS(455),
    [aux_sym_env_token1] = ACTIONS(455),
    [aux_sym_label_token1] = ACTIONS(455),
    [aux_sym_healthcheck_token1] = ACTIONS(455),
    [aux_sym_arg_token1] = ACTIONS(455),
    [aux_sym_add_token1] = ACTIONS(455),
    [aux_sym_copy_token1] = ACTIONS(455),
    [aux_sym_stopsignal_token1] = ACTIONS(455),
    [aux_sym_shell_token1] = ACTIONS(455),
    [aux_sym_volume_token1] = ACTIONS(455),
    [sym_path] = ACTIONS(430),
    [aux_sym_workdir_token1] = ACTIONS(455),
    [aux_sym_user_token1] = ACTIONS(455),
    [aux_sym_cmd_token1] = ACTIONS(455),
    [aux_sym_entrypoint_token1] = ACTIONS(455),
    [aux_sym_run_token1] = ACTIONS(455),
    [aux_sym_maintainer_token1] = ACTIONS(455),
    [aux_sym_expose_token1] = ACTIONS(455),
    [aux_sym_from_token1] = ACTIONS(455),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [127] = {
    [aux_sym__anything] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(457),
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
    [aux_sym__anything_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [aux_sym__anything] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(461),
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
    [aux_sym__anything_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [aux_sym_add_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(465),
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
    [sym_path] = ACTIONS(469),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [aux_sym_onbuild_token1] = ACTIONS(472),
    [aux_sym_env_token1] = ACTIONS(472),
    [aux_sym_label_token1] = ACTIONS(472),
    [aux_sym_healthcheck_token1] = ACTIONS(472),
    [aux_sym_arg_token1] = ACTIONS(472),
    [aux_sym_add_token1] = ACTIONS(472),
    [aux_sym_copy_token1] = ACTIONS(472),
    [aux_sym_stopsignal_token1] = ACTIONS(472),
    [aux_sym_shell_token1] = ACTIONS(472),
    [aux_sym_volume_token1] = ACTIONS(472),
    [aux_sym_workdir_token1] = ACTIONS(472),
    [aux_sym_user_token1] = ACTIONS(472),
    [aux_sym_cmd_token1] = ACTIONS(472),
    [aux_sym_entrypoint_token1] = ACTIONS(472),
    [aux_sym_run_token1] = ACTIONS(472),
    [aux_sym_maintainer_token1] = ACTIONS(472),
    [aux_sym_expose_token1] = ACTIONS(472),
    [aux_sym_from_token1] = ACTIONS(472),
    [anon_sym_AT] = ACTIONS(472),
    [sym__space_no_newline] = ACTIONS(474),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(472),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [aux_sym_add_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_onbuild_token1] = ACTIONS(478),
    [aux_sym_env_token1] = ACTIONS(478),
    [aux_sym_label_token1] = ACTIONS(478),
    [aux_sym_healthcheck_token1] = ACTIONS(478),
    [aux_sym_arg_token1] = ACTIONS(478),
    [aux_sym_add_token1] = ACTIONS(478),
    [aux_sym_copy_token1] = ACTIONS(478),
    [aux_sym_stopsignal_token1] = ACTIONS(478),
    [aux_sym_shell_token1] = ACTIONS(478),
    [aux_sym_volume_token1] = ACTIONS(478),
    [sym_path] = ACTIONS(430),
    [aux_sym_workdir_token1] = ACTIONS(478),
    [aux_sym_user_token1] = ACTIONS(478),
    [aux_sym_cmd_token1] = ACTIONS(478),
    [aux_sym_entrypoint_token1] = ACTIONS(478),
    [aux_sym_run_token1] = ACTIONS(478),
    [aux_sym_maintainer_token1] = ACTIONS(478),
    [aux_sym_expose_token1] = ACTIONS(478),
    [aux_sym_from_token1] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(476),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
    [aux_sym__anything] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_onbuild_token1] = ACTIONS(482),
    [aux_sym_env_token1] = ACTIONS(482),
    [aux_sym_label_token1] = ACTIONS(482),
    [aux_sym_healthcheck_token1] = ACTIONS(482),
    [aux_sym_arg_token1] = ACTIONS(482),
    [aux_sym_add_token1] = ACTIONS(482),
    [aux_sym_copy_token1] = ACTIONS(482),
    [aux_sym_stopsignal_token1] = ACTIONS(482),
    [aux_sym_shell_token1] = ACTIONS(482),
    [aux_sym_volume_token1] = ACTIONS(482),
    [aux_sym_workdir_token1] = ACTIONS(482),
    [aux_sym_user_token1] = ACTIONS(482),
    [aux_sym_cmd_token1] = ACTIONS(482),
    [aux_sym_entrypoint_token1] = ACTIONS(482),
    [aux_sym_run_token1] = ACTIONS(482),
    [aux_sym_maintainer_token1] = ACTIONS(482),
    [aux_sym_expose_token1] = ACTIONS(482),
    [aux_sym_from_token1] = ACTIONS(482),
    [aux_sym__anything_token1] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym_comment] = ACTIONS(486),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [aux_sym__anything] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_onbuild_token1] = ACTIONS(490),
    [aux_sym_env_token1] = ACTIONS(490),
    [aux_sym_label_token1] = ACTIONS(490),
    [aux_sym_healthcheck_token1] = ACTIONS(490),
    [aux_sym_arg_token1] = ACTIONS(490),
    [aux_sym_add_token1] = ACTIONS(490),
    [aux_sym_copy_token1] = ACTIONS(490),
    [aux_sym_stopsignal_token1] = ACTIONS(490),
    [aux_sym_shell_token1] = ACTIONS(490),
    [aux_sym_volume_token1] = ACTIONS(490),
    [aux_sym_workdir_token1] = ACTIONS(490),
    [aux_sym_user_token1] = ACTIONS(490),
    [aux_sym_cmd_token1] = ACTIONS(490),
    [aux_sym_entrypoint_token1] = ACTIONS(490),
    [aux_sym_run_token1] = ACTIONS(490),
    [aux_sym_maintainer_token1] = ACTIONS(490),
    [aux_sym_expose_token1] = ACTIONS(490),
    [aux_sym_from_token1] = ACTIONS(490),
    [aux_sym__anything_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_onbuild_token1] = ACTIONS(492),
    [aux_sym_env_token1] = ACTIONS(492),
    [aux_sym_label_token1] = ACTIONS(492),
    [aux_sym_healthcheck_token1] = ACTIONS(492),
    [aux_sym_arg_token1] = ACTIONS(492),
    [aux_sym_add_token1] = ACTIONS(492),
    [aux_sym_copy_token1] = ACTIONS(492),
    [aux_sym_stopsignal_token1] = ACTIONS(492),
    [aux_sym_shell_token1] = ACTIONS(492),
    [aux_sym_volume_token1] = ACTIONS(492),
    [aux_sym_workdir_token1] = ACTIONS(492),
    [aux_sym_user_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_run_token1] = ACTIONS(492),
    [aux_sym_maintainer_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [sym__space_no_newline] = ACTIONS(494),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_onbuild_token1] = ACTIONS(496),
    [aux_sym_env_token1] = ACTIONS(496),
    [aux_sym_label_token1] = ACTIONS(496),
    [aux_sym_healthcheck_token1] = ACTIONS(496),
    [aux_sym_arg_token1] = ACTIONS(496),
    [aux_sym_add_token1] = ACTIONS(496),
    [aux_sym_copy_token1] = ACTIONS(496),
    [aux_sym_stopsignal_token1] = ACTIONS(496),
    [aux_sym_shell_token1] = ACTIONS(496),
    [aux_sym_volume_token1] = ACTIONS(496),
    [aux_sym_workdir_token1] = ACTIONS(496),
    [aux_sym_user_token1] = ACTIONS(496),
    [aux_sym_cmd_token1] = ACTIONS(496),
    [aux_sym_entrypoint_token1] = ACTIONS(496),
    [aux_sym_run_token1] = ACTIONS(496),
    [aux_sym_maintainer_token1] = ACTIONS(496),
    [aux_sym_expose_token1] = ACTIONS(496),
    [aux_sym_from_token1] = ACTIONS(496),
    [sym__space_no_newline] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(496),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [aux_sym_onbuild_token1] = ACTIONS(500),
    [aux_sym_env_token1] = ACTIONS(500),
    [aux_sym_label_token1] = ACTIONS(500),
    [aux_sym_healthcheck_token1] = ACTIONS(500),
    [aux_sym_arg_token1] = ACTIONS(500),
    [aux_sym_add_token1] = ACTIONS(500),
    [aux_sym_copy_token1] = ACTIONS(500),
    [aux_sym_stopsignal_token1] = ACTIONS(500),
    [aux_sym_shell_token1] = ACTIONS(500),
    [aux_sym_volume_token1] = ACTIONS(500),
    [aux_sym_workdir_token1] = ACTIONS(500),
    [aux_sym_user_token1] = ACTIONS(500),
    [anon_sym_COLON] = ACTIONS(500),
    [aux_sym_cmd_token1] = ACTIONS(500),
    [aux_sym_entrypoint_token1] = ACTIONS(500),
    [aux_sym_run_token1] = ACTIONS(500),
    [aux_sym_maintainer_token1] = ACTIONS(500),
    [aux_sym_expose_token1] = ACTIONS(500),
    [aux_sym_from_token1] = ACTIONS(500),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(500),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(267),
    [sym__space_no_newline] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [aux_sym_onbuild_token1] = ACTIONS(502),
    [aux_sym_env_token1] = ACTIONS(502),
    [aux_sym_label_token1] = ACTIONS(502),
    [aux_sym_healthcheck_token1] = ACTIONS(502),
    [aux_sym_arg_token1] = ACTIONS(502),
    [aux_sym_add_token1] = ACTIONS(502),
    [aux_sym_copy_token1] = ACTIONS(502),
    [aux_sym_stopsignal_token1] = ACTIONS(502),
    [aux_sym_shell_token1] = ACTIONS(502),
    [aux_sym_volume_token1] = ACTIONS(502),
    [aux_sym_workdir_token1] = ACTIONS(502),
    [aux_sym_user_token1] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [aux_sym_cmd_token1] = ACTIONS(502),
    [aux_sym_entrypoint_token1] = ACTIONS(502),
    [aux_sym_run_token1] = ACTIONS(502),
    [aux_sym_maintainer_token1] = ACTIONS(502),
    [aux_sym_expose_token1] = ACTIONS(502),
    [aux_sym_from_token1] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [aux_sym_onbuild_token1] = ACTIONS(504),
    [aux_sym_env_token1] = ACTIONS(504),
    [aux_sym_label_token1] = ACTIONS(504),
    [aux_sym_healthcheck_token1] = ACTIONS(504),
    [aux_sym_arg_token1] = ACTIONS(504),
    [aux_sym_add_token1] = ACTIONS(504),
    [aux_sym_copy_token1] = ACTIONS(504),
    [aux_sym_stopsignal_token1] = ACTIONS(504),
    [aux_sym_shell_token1] = ACTIONS(504),
    [aux_sym_volume_token1] = ACTIONS(504),
    [aux_sym_workdir_token1] = ACTIONS(504),
    [aux_sym_user_token1] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(506),
    [aux_sym_cmd_token1] = ACTIONS(504),
    [aux_sym_entrypoint_token1] = ACTIONS(504),
    [aux_sym_run_token1] = ACTIONS(504),
    [aux_sym_maintainer_token1] = ACTIONS(504),
    [aux_sym_expose_token1] = ACTIONS(504),
    [aux_sym_from_token1] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(504),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym_onbuild_token1] = ACTIONS(383),
    [aux_sym_env_token1] = ACTIONS(383),
    [aux_sym_label_token1] = ACTIONS(383),
    [aux_sym_healthcheck_token1] = ACTIONS(383),
    [aux_sym_arg_token1] = ACTIONS(383),
    [aux_sym_add_token1] = ACTIONS(383),
    [aux_sym_copy_token1] = ACTIONS(383),
    [aux_sym_stopsignal_token1] = ACTIONS(383),
    [aux_sym_shell_token1] = ACTIONS(383),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym_user_token1] = ACTIONS(383),
    [aux_sym_cmd_token1] = ACTIONS(383),
    [aux_sym_entrypoint_token1] = ACTIONS(383),
    [aux_sym_run_token1] = ACTIONS(383),
    [aux_sym_maintainer_token1] = ACTIONS(383),
    [aux_sym_expose_token1] = ACTIONS(383),
    [aux_sym_from_token1] = ACTIONS(383),
    [sym__space_no_newline] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [aux_sym_onbuild_token1] = ACTIONS(504),
    [aux_sym_env_token1] = ACTIONS(504),
    [aux_sym_label_token1] = ACTIONS(504),
    [aux_sym_healthcheck_token1] = ACTIONS(504),
    [aux_sym_arg_token1] = ACTIONS(504),
    [aux_sym_add_token1] = ACTIONS(504),
    [aux_sym_copy_token1] = ACTIONS(504),
    [aux_sym_stopsignal_token1] = ACTIONS(504),
    [aux_sym_shell_token1] = ACTIONS(504),
    [aux_sym_volume_token1] = ACTIONS(504),
    [aux_sym_workdir_token1] = ACTIONS(504),
    [aux_sym_user_token1] = ACTIONS(504),
    [anon_sym_COLON] = ACTIONS(508),
    [aux_sym_cmd_token1] = ACTIONS(504),
    [aux_sym_entrypoint_token1] = ACTIONS(504),
    [aux_sym_run_token1] = ACTIONS(504),
    [aux_sym_maintainer_token1] = ACTIONS(504),
    [aux_sym_expose_token1] = ACTIONS(504),
    [aux_sym_from_token1] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(504),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [aux_sym_onbuild_token1] = ACTIONS(510),
    [aux_sym_env_token1] = ACTIONS(510),
    [aux_sym_label_token1] = ACTIONS(510),
    [aux_sym_healthcheck_token1] = ACTIONS(510),
    [aux_sym_arg_token1] = ACTIONS(510),
    [aux_sym_add_token1] = ACTIONS(510),
    [aux_sym_copy_token1] = ACTIONS(510),
    [aux_sym_stopsignal_token1] = ACTIONS(510),
    [aux_sym_shell_token1] = ACTIONS(510),
    [aux_sym_volume_token1] = ACTIONS(510),
    [aux_sym_workdir_token1] = ACTIONS(510),
    [aux_sym_user_token1] = ACTIONS(510),
    [aux_sym_cmd_token1] = ACTIONS(510),
    [aux_sym_entrypoint_token1] = ACTIONS(510),
    [aux_sym_run_token1] = ACTIONS(510),
    [aux_sym_maintainer_token1] = ACTIONS(510),
    [aux_sym_expose_token1] = ACTIONS(510),
    [aux_sym_from_token1] = ACTIONS(510),
    [sym__space_no_newline] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(510),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(514),
    [aux_sym_onbuild_token1] = ACTIONS(514),
    [aux_sym_env_token1] = ACTIONS(514),
    [aux_sym_label_token1] = ACTIONS(514),
    [aux_sym_healthcheck_token1] = ACTIONS(514),
    [aux_sym_arg_token1] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_add_token1] = ACTIONS(514),
    [aux_sym_copy_token1] = ACTIONS(514),
    [aux_sym_stopsignal_token1] = ACTIONS(514),
    [aux_sym_shell_token1] = ACTIONS(514),
    [aux_sym_volume_token1] = ACTIONS(514),
    [aux_sym_workdir_token1] = ACTIONS(514),
    [aux_sym_user_token1] = ACTIONS(514),
    [aux_sym_cmd_token1] = ACTIONS(514),
    [aux_sym_entrypoint_token1] = ACTIONS(514),
    [aux_sym_run_token1] = ACTIONS(514),
    [aux_sym_maintainer_token1] = ACTIONS(514),
    [aux_sym_expose_token1] = ACTIONS(514),
    [aux_sym_from_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(514),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [aux_sym_onbuild_token1] = ACTIONS(518),
    [aux_sym_env_token1] = ACTIONS(518),
    [aux_sym_label_token1] = ACTIONS(518),
    [aux_sym_healthcheck_token1] = ACTIONS(518),
    [aux_sym_arg_token1] = ACTIONS(518),
    [aux_sym_add_token1] = ACTIONS(518),
    [aux_sym_copy_token1] = ACTIONS(518),
    [aux_sym_stopsignal_token1] = ACTIONS(518),
    [aux_sym_shell_token1] = ACTIONS(518),
    [aux_sym_volume_token1] = ACTIONS(518),
    [aux_sym_workdir_token1] = ACTIONS(518),
    [aux_sym_user_token1] = ACTIONS(518),
    [aux_sym_cmd_token1] = ACTIONS(518),
    [aux_sym_entrypoint_token1] = ACTIONS(518),
    [aux_sym_run_token1] = ACTIONS(518),
    [aux_sym_maintainer_token1] = ACTIONS(518),
    [aux_sym_expose_token1] = ACTIONS(518),
    [aux_sym_from_token1] = ACTIONS(518),
    [sym__space_no_newline] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(518),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
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
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [sym__space_no_newline] = ACTIONS(399),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_onbuild_token1] = ACTIONS(409),
    [aux_sym_env_token1] = ACTIONS(409),
    [aux_sym_label_token1] = ACTIONS(409),
    [aux_sym_healthcheck_token1] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(409),
    [aux_sym_add_token1] = ACTIONS(409),
    [aux_sym_copy_token1] = ACTIONS(409),
    [aux_sym_stopsignal_token1] = ACTIONS(409),
    [aux_sym_shell_token1] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(409),
    [aux_sym_workdir_token1] = ACTIONS(409),
    [aux_sym_user_token1] = ACTIONS(409),
    [aux_sym_cmd_token1] = ACTIONS(409),
    [aux_sym_entrypoint_token1] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [sym__space_no_newline] = ACTIONS(413),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
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
    [sym__space_no_newline] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(465),
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
    [sym_path] = ACTIONS(467),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_onbuild_token1] = ACTIONS(522),
    [aux_sym_env_token1] = ACTIONS(522),
    [aux_sym_label_token1] = ACTIONS(522),
    [aux_sym_healthcheck_token1] = ACTIONS(522),
    [aux_sym_arg_token1] = ACTIONS(522),
    [aux_sym_add_token1] = ACTIONS(522),
    [aux_sym_copy_token1] = ACTIONS(522),
    [aux_sym_stopsignal_token1] = ACTIONS(522),
    [aux_sym_shell_token1] = ACTIONS(522),
    [aux_sym_volume_token1] = ACTIONS(522),
    [aux_sym_workdir_token1] = ACTIONS(522),
    [aux_sym_user_token1] = ACTIONS(522),
    [aux_sym_cmd_token1] = ACTIONS(522),
    [aux_sym_entrypoint_token1] = ACTIONS(522),
    [aux_sym_run_token1] = ACTIONS(522),
    [aux_sym_maintainer_token1] = ACTIONS(522),
    [aux_sym_expose_token1] = ACTIONS(522),
    [aux_sym_from_token1] = ACTIONS(522),
    [sym__space_no_newline] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(426),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(426),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [aux_sym_onbuild_token1] = ACTIONS(526),
    [aux_sym_env_token1] = ACTIONS(526),
    [aux_sym_label_token1] = ACTIONS(526),
    [aux_sym_healthcheck_token1] = ACTIONS(526),
    [aux_sym_arg_token1] = ACTIONS(526),
    [aux_sym_add_token1] = ACTIONS(526),
    [aux_sym_copy_token1] = ACTIONS(526),
    [aux_sym_stopsignal_token1] = ACTIONS(526),
    [aux_sym_shell_token1] = ACTIONS(526),
    [aux_sym_volume_token1] = ACTIONS(526),
    [aux_sym_workdir_token1] = ACTIONS(526),
    [aux_sym_user_token1] = ACTIONS(526),
    [aux_sym_cmd_token1] = ACTIONS(526),
    [aux_sym_entrypoint_token1] = ACTIONS(526),
    [aux_sym_run_token1] = ACTIONS(526),
    [aux_sym_maintainer_token1] = ACTIONS(526),
    [aux_sym_expose_token1] = ACTIONS(526),
    [aux_sym_from_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym_onbuild_token1] = ACTIONS(409),
    [aux_sym_env_token1] = ACTIONS(409),
    [aux_sym_label_token1] = ACTIONS(409),
    [aux_sym_healthcheck_token1] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(409),
    [aux_sym_add_token1] = ACTIONS(409),
    [aux_sym_copy_token1] = ACTIONS(409),
    [aux_sym_stopsignal_token1] = ACTIONS(409),
    [aux_sym_shell_token1] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(409),
    [aux_sym_workdir_token1] = ACTIONS(409),
    [aux_sym_user_token1] = ACTIONS(409),
    [aux_sym_cmd_token1] = ACTIONS(409),
    [aux_sym_entrypoint_token1] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_onbuild_token1] = ACTIONS(528),
    [aux_sym_env_token1] = ACTIONS(528),
    [aux_sym_label_token1] = ACTIONS(528),
    [aux_sym_healthcheck_token1] = ACTIONS(528),
    [aux_sym_arg_token1] = ACTIONS(528),
    [aux_sym_add_token1] = ACTIONS(528),
    [aux_sym_copy_token1] = ACTIONS(528),
    [aux_sym_stopsignal_token1] = ACTIONS(528),
    [aux_sym_shell_token1] = ACTIONS(528),
    [aux_sym_volume_token1] = ACTIONS(528),
    [aux_sym_workdir_token1] = ACTIONS(528),
    [aux_sym_user_token1] = ACTIONS(528),
    [aux_sym_cmd_token1] = ACTIONS(528),
    [aux_sym_entrypoint_token1] = ACTIONS(528),
    [aux_sym_run_token1] = ACTIONS(528),
    [aux_sym_maintainer_token1] = ACTIONS(528),
    [aux_sym_expose_token1] = ACTIONS(528),
    [aux_sym_from_token1] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(528),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_onbuild_token1] = ACTIONS(476),
    [aux_sym_env_token1] = ACTIONS(476),
    [aux_sym_label_token1] = ACTIONS(476),
    [aux_sym_healthcheck_token1] = ACTIONS(476),
    [aux_sym_arg_token1] = ACTIONS(476),
    [aux_sym_add_token1] = ACTIONS(476),
    [aux_sym_copy_token1] = ACTIONS(476),
    [aux_sym_stopsignal_token1] = ACTIONS(476),
    [aux_sym_shell_token1] = ACTIONS(476),
    [aux_sym_volume_token1] = ACTIONS(476),
    [aux_sym_workdir_token1] = ACTIONS(476),
    [aux_sym_user_token1] = ACTIONS(476),
    [aux_sym_cmd_token1] = ACTIONS(476),
    [aux_sym_entrypoint_token1] = ACTIONS(476),
    [aux_sym_run_token1] = ACTIONS(476),
    [aux_sym_maintainer_token1] = ACTIONS(476),
    [aux_sym_expose_token1] = ACTIONS(476),
    [aux_sym_from_token1] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(476),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_onbuild_token1] = ACTIONS(119),
    [aux_sym_env_token1] = ACTIONS(119),
    [aux_sym_label_token1] = ACTIONS(119),
    [aux_sym_healthcheck_token1] = ACTIONS(119),
    [aux_sym_arg_token1] = ACTIONS(119),
    [aux_sym_add_token1] = ACTIONS(119),
    [aux_sym_copy_token1] = ACTIONS(119),
    [aux_sym_stopsignal_token1] = ACTIONS(119),
    [aux_sym_shell_token1] = ACTIONS(119),
    [aux_sym_volume_token1] = ACTIONS(119),
    [aux_sym_workdir_token1] = ACTIONS(119),
    [aux_sym_user_token1] = ACTIONS(119),
    [aux_sym_cmd_token1] = ACTIONS(119),
    [aux_sym_entrypoint_token1] = ACTIONS(119),
    [aux_sym_run_token1] = ACTIONS(119),
    [aux_sym_maintainer_token1] = ACTIONS(119),
    [aux_sym_expose_token1] = ACTIONS(119),
    [aux_sym_from_token1] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(119),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_onbuild_token1] = ACTIONS(522),
    [aux_sym_env_token1] = ACTIONS(522),
    [aux_sym_label_token1] = ACTIONS(522),
    [aux_sym_healthcheck_token1] = ACTIONS(522),
    [aux_sym_arg_token1] = ACTIONS(522),
    [aux_sym_add_token1] = ACTIONS(522),
    [aux_sym_copy_token1] = ACTIONS(522),
    [aux_sym_stopsignal_token1] = ACTIONS(522),
    [aux_sym_shell_token1] = ACTIONS(522),
    [aux_sym_volume_token1] = ACTIONS(522),
    [aux_sym_workdir_token1] = ACTIONS(522),
    [aux_sym_user_token1] = ACTIONS(522),
    [aux_sym_cmd_token1] = ACTIONS(522),
    [aux_sym_entrypoint_token1] = ACTIONS(522),
    [aux_sym_run_token1] = ACTIONS(522),
    [aux_sym_maintainer_token1] = ACTIONS(522),
    [aux_sym_expose_token1] = ACTIONS(522),
    [aux_sym_from_token1] = ACTIONS(522),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [aux_sym_onbuild_token1] = ACTIONS(530),
    [aux_sym_env_token1] = ACTIONS(530),
    [aux_sym_label_token1] = ACTIONS(530),
    [aux_sym_healthcheck_token1] = ACTIONS(530),
    [aux_sym_arg_token1] = ACTIONS(530),
    [aux_sym_add_token1] = ACTIONS(530),
    [aux_sym_copy_token1] = ACTIONS(530),
    [aux_sym_stopsignal_token1] = ACTIONS(530),
    [aux_sym_shell_token1] = ACTIONS(530),
    [aux_sym_volume_token1] = ACTIONS(530),
    [aux_sym_workdir_token1] = ACTIONS(530),
    [aux_sym_user_token1] = ACTIONS(530),
    [aux_sym_cmd_token1] = ACTIONS(530),
    [aux_sym_entrypoint_token1] = ACTIONS(530),
    [aux_sym_run_token1] = ACTIONS(530),
    [aux_sym_maintainer_token1] = ACTIONS(530),
    [aux_sym_expose_token1] = ACTIONS(530),
    [aux_sym_from_token1] = ACTIONS(530),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_onbuild_token1] = ACTIONS(532),
    [aux_sym_env_token1] = ACTIONS(532),
    [aux_sym_label_token1] = ACTIONS(532),
    [aux_sym_healthcheck_token1] = ACTIONS(532),
    [aux_sym_arg_token1] = ACTIONS(532),
    [aux_sym_add_token1] = ACTIONS(532),
    [aux_sym_copy_token1] = ACTIONS(532),
    [aux_sym_stopsignal_token1] = ACTIONS(532),
    [aux_sym_shell_token1] = ACTIONS(532),
    [aux_sym_volume_token1] = ACTIONS(532),
    [aux_sym_workdir_token1] = ACTIONS(532),
    [aux_sym_user_token1] = ACTIONS(532),
    [aux_sym_cmd_token1] = ACTIONS(532),
    [aux_sym_entrypoint_token1] = ACTIONS(532),
    [aux_sym_run_token1] = ACTIONS(532),
    [aux_sym_maintainer_token1] = ACTIONS(532),
    [aux_sym_expose_token1] = ACTIONS(532),
    [aux_sym_from_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(532),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [aux_sym_onbuild_token1] = ACTIONS(534),
    [aux_sym_env_token1] = ACTIONS(534),
    [aux_sym_label_token1] = ACTIONS(534),
    [aux_sym_healthcheck_token1] = ACTIONS(534),
    [aux_sym_arg_token1] = ACTIONS(534),
    [aux_sym_add_token1] = ACTIONS(534),
    [aux_sym_copy_token1] = ACTIONS(534),
    [aux_sym_stopsignal_token1] = ACTIONS(534),
    [aux_sym_shell_token1] = ACTIONS(534),
    [aux_sym_volume_token1] = ACTIONS(534),
    [aux_sym_workdir_token1] = ACTIONS(534),
    [aux_sym_user_token1] = ACTIONS(534),
    [aux_sym_cmd_token1] = ACTIONS(534),
    [aux_sym_entrypoint_token1] = ACTIONS(534),
    [aux_sym_run_token1] = ACTIONS(534),
    [aux_sym_maintainer_token1] = ACTIONS(534),
    [aux_sym_expose_token1] = ACTIONS(534),
    [aux_sym_from_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(534),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_onbuild_token1] = ACTIONS(536),
    [aux_sym_env_token1] = ACTIONS(536),
    [aux_sym_label_token1] = ACTIONS(536),
    [aux_sym_healthcheck_token1] = ACTIONS(536),
    [aux_sym_arg_token1] = ACTIONS(536),
    [aux_sym_add_token1] = ACTIONS(536),
    [aux_sym_copy_token1] = ACTIONS(536),
    [aux_sym_stopsignal_token1] = ACTIONS(536),
    [aux_sym_shell_token1] = ACTIONS(536),
    [aux_sym_volume_token1] = ACTIONS(536),
    [aux_sym_workdir_token1] = ACTIONS(536),
    [aux_sym_user_token1] = ACTIONS(536),
    [aux_sym_cmd_token1] = ACTIONS(536),
    [aux_sym_entrypoint_token1] = ACTIONS(536),
    [aux_sym_run_token1] = ACTIONS(536),
    [aux_sym_maintainer_token1] = ACTIONS(536),
    [aux_sym_expose_token1] = ACTIONS(536),
    [aux_sym_from_token1] = ACTIONS(536),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(536),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [aux_sym_onbuild_token1] = ACTIONS(538),
    [aux_sym_env_token1] = ACTIONS(538),
    [aux_sym_label_token1] = ACTIONS(538),
    [aux_sym_healthcheck_token1] = ACTIONS(538),
    [aux_sym_arg_token1] = ACTIONS(538),
    [aux_sym_add_token1] = ACTIONS(538),
    [aux_sym_copy_token1] = ACTIONS(538),
    [aux_sym_stopsignal_token1] = ACTIONS(538),
    [aux_sym_shell_token1] = ACTIONS(538),
    [aux_sym_volume_token1] = ACTIONS(538),
    [aux_sym_workdir_token1] = ACTIONS(538),
    [aux_sym_user_token1] = ACTIONS(538),
    [aux_sym_cmd_token1] = ACTIONS(538),
    [aux_sym_entrypoint_token1] = ACTIONS(538),
    [aux_sym_run_token1] = ACTIONS(538),
    [aux_sym_maintainer_token1] = ACTIONS(538),
    [aux_sym_expose_token1] = ACTIONS(538),
    [aux_sym_from_token1] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(538),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [aux_sym_onbuild_token1] = ACTIONS(540),
    [aux_sym_env_token1] = ACTIONS(540),
    [aux_sym_label_token1] = ACTIONS(540),
    [aux_sym_healthcheck_token1] = ACTIONS(540),
    [aux_sym_arg_token1] = ACTIONS(540),
    [aux_sym_add_token1] = ACTIONS(540),
    [aux_sym_copy_token1] = ACTIONS(540),
    [aux_sym_stopsignal_token1] = ACTIONS(540),
    [aux_sym_shell_token1] = ACTIONS(540),
    [aux_sym_volume_token1] = ACTIONS(540),
    [aux_sym_workdir_token1] = ACTIONS(540),
    [aux_sym_user_token1] = ACTIONS(540),
    [aux_sym_cmd_token1] = ACTIONS(540),
    [aux_sym_entrypoint_token1] = ACTIONS(540),
    [aux_sym_run_token1] = ACTIONS(540),
    [aux_sym_maintainer_token1] = ACTIONS(540),
    [aux_sym_expose_token1] = ACTIONS(540),
    [aux_sym_from_token1] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(540),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [aux_sym_onbuild_token1] = ACTIONS(542),
    [aux_sym_env_token1] = ACTIONS(542),
    [aux_sym_label_token1] = ACTIONS(542),
    [aux_sym_healthcheck_token1] = ACTIONS(542),
    [aux_sym_arg_token1] = ACTIONS(542),
    [aux_sym_add_token1] = ACTIONS(542),
    [aux_sym_copy_token1] = ACTIONS(542),
    [aux_sym_stopsignal_token1] = ACTIONS(542),
    [aux_sym_shell_token1] = ACTIONS(542),
    [aux_sym_volume_token1] = ACTIONS(542),
    [aux_sym_workdir_token1] = ACTIONS(542),
    [aux_sym_user_token1] = ACTIONS(542),
    [aux_sym_cmd_token1] = ACTIONS(542),
    [aux_sym_entrypoint_token1] = ACTIONS(542),
    [aux_sym_run_token1] = ACTIONS(542),
    [aux_sym_maintainer_token1] = ACTIONS(542),
    [aux_sym_expose_token1] = ACTIONS(542),
    [aux_sym_from_token1] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(542),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [aux_sym_onbuild_token1] = ACTIONS(544),
    [aux_sym_env_token1] = ACTIONS(544),
    [aux_sym_label_token1] = ACTIONS(544),
    [aux_sym_healthcheck_token1] = ACTIONS(544),
    [aux_sym_arg_token1] = ACTIONS(544),
    [aux_sym_add_token1] = ACTIONS(544),
    [aux_sym_copy_token1] = ACTIONS(544),
    [aux_sym_stopsignal_token1] = ACTIONS(544),
    [aux_sym_shell_token1] = ACTIONS(544),
    [aux_sym_volume_token1] = ACTIONS(544),
    [aux_sym_workdir_token1] = ACTIONS(544),
    [aux_sym_user_token1] = ACTIONS(544),
    [aux_sym_cmd_token1] = ACTIONS(544),
    [aux_sym_entrypoint_token1] = ACTIONS(544),
    [aux_sym_run_token1] = ACTIONS(544),
    [aux_sym_maintainer_token1] = ACTIONS(544),
    [aux_sym_expose_token1] = ACTIONS(544),
    [aux_sym_from_token1] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(544),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [aux_sym_onbuild_token1] = ACTIONS(546),
    [aux_sym_env_token1] = ACTIONS(546),
    [aux_sym_label_token1] = ACTIONS(546),
    [aux_sym_healthcheck_token1] = ACTIONS(546),
    [aux_sym_arg_token1] = ACTIONS(546),
    [aux_sym_add_token1] = ACTIONS(546),
    [aux_sym_copy_token1] = ACTIONS(546),
    [aux_sym_stopsignal_token1] = ACTIONS(546),
    [aux_sym_shell_token1] = ACTIONS(546),
    [aux_sym_volume_token1] = ACTIONS(546),
    [aux_sym_workdir_token1] = ACTIONS(546),
    [aux_sym_user_token1] = ACTIONS(546),
    [aux_sym_cmd_token1] = ACTIONS(546),
    [aux_sym_entrypoint_token1] = ACTIONS(546),
    [aux_sym_run_token1] = ACTIONS(546),
    [aux_sym_maintainer_token1] = ACTIONS(546),
    [aux_sym_expose_token1] = ACTIONS(546),
    [aux_sym_from_token1] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(546),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [aux_sym_onbuild_token1] = ACTIONS(548),
    [aux_sym_env_token1] = ACTIONS(548),
    [aux_sym_label_token1] = ACTIONS(548),
    [aux_sym_healthcheck_token1] = ACTIONS(548),
    [aux_sym_arg_token1] = ACTIONS(548),
    [aux_sym_add_token1] = ACTIONS(548),
    [aux_sym_copy_token1] = ACTIONS(548),
    [aux_sym_stopsignal_token1] = ACTIONS(548),
    [aux_sym_shell_token1] = ACTIONS(548),
    [aux_sym_volume_token1] = ACTIONS(548),
    [aux_sym_workdir_token1] = ACTIONS(548),
    [aux_sym_user_token1] = ACTIONS(548),
    [aux_sym_cmd_token1] = ACTIONS(548),
    [aux_sym_entrypoint_token1] = ACTIONS(548),
    [aux_sym_run_token1] = ACTIONS(548),
    [aux_sym_maintainer_token1] = ACTIONS(548),
    [aux_sym_expose_token1] = ACTIONS(548),
    [aux_sym_from_token1] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(548),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [aux_sym_onbuild_token1] = ACTIONS(550),
    [aux_sym_env_token1] = ACTIONS(550),
    [aux_sym_label_token1] = ACTIONS(550),
    [aux_sym_healthcheck_token1] = ACTIONS(550),
    [aux_sym_arg_token1] = ACTIONS(550),
    [aux_sym_add_token1] = ACTIONS(550),
    [aux_sym_copy_token1] = ACTIONS(550),
    [aux_sym_stopsignal_token1] = ACTIONS(550),
    [aux_sym_shell_token1] = ACTIONS(550),
    [aux_sym_volume_token1] = ACTIONS(550),
    [aux_sym_workdir_token1] = ACTIONS(550),
    [aux_sym_user_token1] = ACTIONS(550),
    [aux_sym_cmd_token1] = ACTIONS(550),
    [aux_sym_entrypoint_token1] = ACTIONS(550),
    [aux_sym_run_token1] = ACTIONS(550),
    [aux_sym_maintainer_token1] = ACTIONS(550),
    [aux_sym_expose_token1] = ACTIONS(550),
    [aux_sym_from_token1] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(550),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [aux_sym_onbuild_token1] = ACTIONS(552),
    [aux_sym_env_token1] = ACTIONS(552),
    [aux_sym_label_token1] = ACTIONS(552),
    [aux_sym_healthcheck_token1] = ACTIONS(552),
    [aux_sym_arg_token1] = ACTIONS(552),
    [aux_sym_add_token1] = ACTIONS(552),
    [aux_sym_copy_token1] = ACTIONS(552),
    [aux_sym_stopsignal_token1] = ACTIONS(552),
    [aux_sym_shell_token1] = ACTIONS(552),
    [aux_sym_volume_token1] = ACTIONS(552),
    [aux_sym_workdir_token1] = ACTIONS(552),
    [aux_sym_user_token1] = ACTIONS(552),
    [aux_sym_cmd_token1] = ACTIONS(552),
    [aux_sym_entrypoint_token1] = ACTIONS(552),
    [aux_sym_run_token1] = ACTIONS(552),
    [aux_sym_maintainer_token1] = ACTIONS(552),
    [aux_sym_expose_token1] = ACTIONS(552),
    [aux_sym_from_token1] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(552),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [aux_sym_onbuild_token1] = ACTIONS(554),
    [aux_sym_env_token1] = ACTIONS(554),
    [aux_sym_label_token1] = ACTIONS(554),
    [aux_sym_healthcheck_token1] = ACTIONS(554),
    [aux_sym_arg_token1] = ACTIONS(554),
    [aux_sym_add_token1] = ACTIONS(554),
    [aux_sym_copy_token1] = ACTIONS(554),
    [aux_sym_stopsignal_token1] = ACTIONS(554),
    [aux_sym_shell_token1] = ACTIONS(554),
    [aux_sym_volume_token1] = ACTIONS(554),
    [aux_sym_workdir_token1] = ACTIONS(554),
    [aux_sym_user_token1] = ACTIONS(554),
    [aux_sym_cmd_token1] = ACTIONS(554),
    [aux_sym_entrypoint_token1] = ACTIONS(554),
    [aux_sym_run_token1] = ACTIONS(554),
    [aux_sym_maintainer_token1] = ACTIONS(554),
    [aux_sym_expose_token1] = ACTIONS(554),
    [aux_sym_from_token1] = ACTIONS(554),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(554),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [aux_sym_onbuild_token1] = ACTIONS(556),
    [aux_sym_env_token1] = ACTIONS(556),
    [aux_sym_label_token1] = ACTIONS(556),
    [aux_sym_healthcheck_token1] = ACTIONS(556),
    [aux_sym_arg_token1] = ACTIONS(556),
    [aux_sym_add_token1] = ACTIONS(556),
    [aux_sym_copy_token1] = ACTIONS(556),
    [aux_sym_stopsignal_token1] = ACTIONS(556),
    [aux_sym_shell_token1] = ACTIONS(556),
    [aux_sym_volume_token1] = ACTIONS(556),
    [aux_sym_workdir_token1] = ACTIONS(556),
    [aux_sym_user_token1] = ACTIONS(556),
    [aux_sym_cmd_token1] = ACTIONS(556),
    [aux_sym_entrypoint_token1] = ACTIONS(556),
    [aux_sym_run_token1] = ACTIONS(556),
    [aux_sym_maintainer_token1] = ACTIONS(556),
    [aux_sym_expose_token1] = ACTIONS(556),
    [aux_sym_from_token1] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(556),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(558),
    [aux_sym_onbuild_token1] = ACTIONS(558),
    [aux_sym_env_token1] = ACTIONS(558),
    [aux_sym_label_token1] = ACTIONS(558),
    [aux_sym_healthcheck_token1] = ACTIONS(558),
    [aux_sym_arg_token1] = ACTIONS(558),
    [aux_sym_add_token1] = ACTIONS(558),
    [aux_sym_copy_token1] = ACTIONS(558),
    [aux_sym_stopsignal_token1] = ACTIONS(558),
    [aux_sym_shell_token1] = ACTIONS(558),
    [aux_sym_volume_token1] = ACTIONS(558),
    [aux_sym_workdir_token1] = ACTIONS(558),
    [aux_sym_user_token1] = ACTIONS(558),
    [aux_sym_cmd_token1] = ACTIONS(558),
    [aux_sym_entrypoint_token1] = ACTIONS(558),
    [aux_sym_run_token1] = ACTIONS(558),
    [aux_sym_maintainer_token1] = ACTIONS(558),
    [aux_sym_expose_token1] = ACTIONS(558),
    [aux_sym_from_token1] = ACTIONS(558),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(558),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [aux_sym_onbuild_token1] = ACTIONS(560),
    [aux_sym_env_token1] = ACTIONS(560),
    [aux_sym_label_token1] = ACTIONS(560),
    [aux_sym_healthcheck_token1] = ACTIONS(560),
    [aux_sym_arg_token1] = ACTIONS(560),
    [aux_sym_add_token1] = ACTIONS(560),
    [aux_sym_copy_token1] = ACTIONS(560),
    [aux_sym_stopsignal_token1] = ACTIONS(560),
    [aux_sym_shell_token1] = ACTIONS(560),
    [aux_sym_volume_token1] = ACTIONS(560),
    [aux_sym_workdir_token1] = ACTIONS(560),
    [aux_sym_user_token1] = ACTIONS(560),
    [aux_sym_cmd_token1] = ACTIONS(560),
    [aux_sym_entrypoint_token1] = ACTIONS(560),
    [aux_sym_run_token1] = ACTIONS(560),
    [aux_sym_maintainer_token1] = ACTIONS(560),
    [aux_sym_expose_token1] = ACTIONS(560),
    [aux_sym_from_token1] = ACTIONS(560),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(560),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_onbuild_token1] = ACTIONS(355),
    [aux_sym_env_token1] = ACTIONS(355),
    [aux_sym_label_token1] = ACTIONS(355),
    [aux_sym_healthcheck_token1] = ACTIONS(355),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_onbuild_token1] = ACTIONS(496),
    [aux_sym_env_token1] = ACTIONS(496),
    [aux_sym_label_token1] = ACTIONS(496),
    [aux_sym_healthcheck_token1] = ACTIONS(496),
    [aux_sym_arg_token1] = ACTIONS(496),
    [aux_sym_add_token1] = ACTIONS(496),
    [aux_sym_copy_token1] = ACTIONS(496),
    [aux_sym_stopsignal_token1] = ACTIONS(496),
    [aux_sym_shell_token1] = ACTIONS(496),
    [aux_sym_volume_token1] = ACTIONS(496),
    [aux_sym_workdir_token1] = ACTIONS(496),
    [aux_sym_user_token1] = ACTIONS(496),
    [aux_sym_cmd_token1] = ACTIONS(496),
    [aux_sym_entrypoint_token1] = ACTIONS(496),
    [aux_sym_run_token1] = ACTIONS(496),
    [aux_sym_maintainer_token1] = ACTIONS(496),
    [aux_sym_expose_token1] = ACTIONS(496),
    [aux_sym_from_token1] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(496),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(562),
    [aux_sym_onbuild_token1] = ACTIONS(562),
    [aux_sym_env_token1] = ACTIONS(562),
    [aux_sym_label_token1] = ACTIONS(562),
    [aux_sym_healthcheck_token1] = ACTIONS(562),
    [aux_sym_arg_token1] = ACTIONS(562),
    [aux_sym_add_token1] = ACTIONS(562),
    [aux_sym_copy_token1] = ACTIONS(562),
    [aux_sym_stopsignal_token1] = ACTIONS(562),
    [aux_sym_shell_token1] = ACTIONS(562),
    [aux_sym_volume_token1] = ACTIONS(562),
    [aux_sym_workdir_token1] = ACTIONS(562),
    [aux_sym_user_token1] = ACTIONS(562),
    [aux_sym_cmd_token1] = ACTIONS(562),
    [aux_sym_entrypoint_token1] = ACTIONS(562),
    [aux_sym_run_token1] = ACTIONS(562),
    [aux_sym_maintainer_token1] = ACTIONS(562),
    [aux_sym_expose_token1] = ACTIONS(562),
    [aux_sym_from_token1] = ACTIONS(562),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(562),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [aux_sym_onbuild_token1] = ACTIONS(564),
    [aux_sym_env_token1] = ACTIONS(564),
    [aux_sym_label_token1] = ACTIONS(564),
    [aux_sym_healthcheck_token1] = ACTIONS(564),
    [aux_sym_arg_token1] = ACTIONS(564),
    [aux_sym_add_token1] = ACTIONS(564),
    [aux_sym_copy_token1] = ACTIONS(564),
    [aux_sym_stopsignal_token1] = ACTIONS(564),
    [aux_sym_shell_token1] = ACTIONS(564),
    [aux_sym_volume_token1] = ACTIONS(564),
    [aux_sym_workdir_token1] = ACTIONS(564),
    [aux_sym_user_token1] = ACTIONS(564),
    [aux_sym_cmd_token1] = ACTIONS(564),
    [aux_sym_entrypoint_token1] = ACTIONS(564),
    [aux_sym_run_token1] = ACTIONS(564),
    [aux_sym_maintainer_token1] = ACTIONS(564),
    [aux_sym_expose_token1] = ACTIONS(564),
    [aux_sym_from_token1] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(564),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(566),
    [aux_sym_onbuild_token1] = ACTIONS(566),
    [aux_sym_env_token1] = ACTIONS(566),
    [aux_sym_label_token1] = ACTIONS(566),
    [aux_sym_healthcheck_token1] = ACTIONS(566),
    [aux_sym_arg_token1] = ACTIONS(566),
    [aux_sym_add_token1] = ACTIONS(566),
    [aux_sym_copy_token1] = ACTIONS(566),
    [aux_sym_stopsignal_token1] = ACTIONS(566),
    [aux_sym_shell_token1] = ACTIONS(566),
    [aux_sym_volume_token1] = ACTIONS(566),
    [aux_sym_workdir_token1] = ACTIONS(566),
    [aux_sym_user_token1] = ACTIONS(566),
    [aux_sym_cmd_token1] = ACTIONS(566),
    [aux_sym_entrypoint_token1] = ACTIONS(566),
    [aux_sym_run_token1] = ACTIONS(566),
    [aux_sym_maintainer_token1] = ACTIONS(566),
    [aux_sym_expose_token1] = ACTIONS(566),
    [aux_sym_from_token1] = ACTIONS(566),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(566),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [aux_sym_onbuild_token1] = ACTIONS(568),
    [aux_sym_env_token1] = ACTIONS(568),
    [aux_sym_label_token1] = ACTIONS(568),
    [aux_sym_healthcheck_token1] = ACTIONS(568),
    [aux_sym_arg_token1] = ACTIONS(568),
    [aux_sym_add_token1] = ACTIONS(568),
    [aux_sym_copy_token1] = ACTIONS(568),
    [aux_sym_stopsignal_token1] = ACTIONS(568),
    [aux_sym_shell_token1] = ACTIONS(568),
    [aux_sym_volume_token1] = ACTIONS(568),
    [aux_sym_workdir_token1] = ACTIONS(568),
    [aux_sym_user_token1] = ACTIONS(568),
    [aux_sym_cmd_token1] = ACTIONS(568),
    [aux_sym_entrypoint_token1] = ACTIONS(568),
    [aux_sym_run_token1] = ACTIONS(568),
    [aux_sym_maintainer_token1] = ACTIONS(568),
    [aux_sym_expose_token1] = ACTIONS(568),
    [aux_sym_from_token1] = ACTIONS(568),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(568),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [aux_sym_onbuild_token1] = ACTIONS(570),
    [aux_sym_env_token1] = ACTIONS(570),
    [aux_sym_label_token1] = ACTIONS(570),
    [aux_sym_healthcheck_token1] = ACTIONS(570),
    [aux_sym_arg_token1] = ACTIONS(570),
    [aux_sym_add_token1] = ACTIONS(570),
    [aux_sym_copy_token1] = ACTIONS(570),
    [aux_sym_stopsignal_token1] = ACTIONS(570),
    [aux_sym_shell_token1] = ACTIONS(570),
    [aux_sym_volume_token1] = ACTIONS(570),
    [aux_sym_workdir_token1] = ACTIONS(570),
    [aux_sym_user_token1] = ACTIONS(570),
    [aux_sym_cmd_token1] = ACTIONS(570),
    [aux_sym_entrypoint_token1] = ACTIONS(570),
    [aux_sym_run_token1] = ACTIONS(570),
    [aux_sym_maintainer_token1] = ACTIONS(570),
    [aux_sym_expose_token1] = ACTIONS(570),
    [aux_sym_from_token1] = ACTIONS(570),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(570),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [aux_sym_onbuild_token1] = ACTIONS(572),
    [aux_sym_env_token1] = ACTIONS(572),
    [aux_sym_label_token1] = ACTIONS(572),
    [aux_sym_healthcheck_token1] = ACTIONS(572),
    [aux_sym_arg_token1] = ACTIONS(572),
    [aux_sym_add_token1] = ACTIONS(572),
    [aux_sym_copy_token1] = ACTIONS(572),
    [aux_sym_stopsignal_token1] = ACTIONS(572),
    [aux_sym_shell_token1] = ACTIONS(572),
    [aux_sym_volume_token1] = ACTIONS(572),
    [aux_sym_workdir_token1] = ACTIONS(572),
    [aux_sym_user_token1] = ACTIONS(572),
    [aux_sym_cmd_token1] = ACTIONS(572),
    [aux_sym_entrypoint_token1] = ACTIONS(572),
    [aux_sym_run_token1] = ACTIONS(572),
    [aux_sym_maintainer_token1] = ACTIONS(572),
    [aux_sym_expose_token1] = ACTIONS(572),
    [aux_sym_from_token1] = ACTIONS(572),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(572),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [aux_sym_onbuild_token1] = ACTIONS(574),
    [aux_sym_env_token1] = ACTIONS(574),
    [aux_sym_label_token1] = ACTIONS(574),
    [aux_sym_healthcheck_token1] = ACTIONS(574),
    [aux_sym_arg_token1] = ACTIONS(574),
    [aux_sym_add_token1] = ACTIONS(574),
    [aux_sym_copy_token1] = ACTIONS(574),
    [aux_sym_stopsignal_token1] = ACTIONS(574),
    [aux_sym_shell_token1] = ACTIONS(574),
    [aux_sym_volume_token1] = ACTIONS(574),
    [aux_sym_workdir_token1] = ACTIONS(574),
    [aux_sym_user_token1] = ACTIONS(574),
    [aux_sym_cmd_token1] = ACTIONS(574),
    [aux_sym_entrypoint_token1] = ACTIONS(574),
    [aux_sym_run_token1] = ACTIONS(574),
    [aux_sym_maintainer_token1] = ACTIONS(574),
    [aux_sym_expose_token1] = ACTIONS(574),
    [aux_sym_from_token1] = ACTIONS(574),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(574),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [aux_sym_onbuild_token1] = ACTIONS(576),
    [aux_sym_env_token1] = ACTIONS(576),
    [aux_sym_label_token1] = ACTIONS(576),
    [aux_sym_healthcheck_token1] = ACTIONS(576),
    [aux_sym_arg_token1] = ACTIONS(576),
    [aux_sym_add_token1] = ACTIONS(576),
    [aux_sym_copy_token1] = ACTIONS(576),
    [aux_sym_stopsignal_token1] = ACTIONS(576),
    [aux_sym_shell_token1] = ACTIONS(576),
    [aux_sym_volume_token1] = ACTIONS(576),
    [aux_sym_workdir_token1] = ACTIONS(576),
    [aux_sym_user_token1] = ACTIONS(576),
    [aux_sym_cmd_token1] = ACTIONS(576),
    [aux_sym_entrypoint_token1] = ACTIONS(576),
    [aux_sym_run_token1] = ACTIONS(576),
    [aux_sym_maintainer_token1] = ACTIONS(576),
    [aux_sym_expose_token1] = ACTIONS(576),
    [aux_sym_from_token1] = ACTIONS(576),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(576),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_label_token1] = ACTIONS(301),
    [aux_sym_healthcheck_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_stopsignal_token1] = ACTIONS(301),
    [aux_sym_shell_token1] = ACTIONS(301),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_user_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_run_token1] = ACTIONS(301),
    [aux_sym_maintainer_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [aux_sym_onbuild_token1] = ACTIONS(518),
    [aux_sym_env_token1] = ACTIONS(518),
    [aux_sym_label_token1] = ACTIONS(518),
    [aux_sym_healthcheck_token1] = ACTIONS(518),
    [aux_sym_arg_token1] = ACTIONS(518),
    [aux_sym_add_token1] = ACTIONS(518),
    [aux_sym_copy_token1] = ACTIONS(518),
    [aux_sym_stopsignal_token1] = ACTIONS(518),
    [aux_sym_shell_token1] = ACTIONS(518),
    [aux_sym_volume_token1] = ACTIONS(518),
    [aux_sym_workdir_token1] = ACTIONS(518),
    [aux_sym_user_token1] = ACTIONS(518),
    [aux_sym_cmd_token1] = ACTIONS(518),
    [aux_sym_entrypoint_token1] = ACTIONS(518),
    [aux_sym_run_token1] = ACTIONS(518),
    [aux_sym_maintainer_token1] = ACTIONS(518),
    [aux_sym_expose_token1] = ACTIONS(518),
    [aux_sym_from_token1] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(518),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [aux_sym_onbuild_token1] = ACTIONS(578),
    [aux_sym_env_token1] = ACTIONS(578),
    [aux_sym_label_token1] = ACTIONS(578),
    [aux_sym_healthcheck_token1] = ACTIONS(578),
    [aux_sym_arg_token1] = ACTIONS(578),
    [aux_sym_add_token1] = ACTIONS(578),
    [aux_sym_copy_token1] = ACTIONS(578),
    [aux_sym_stopsignal_token1] = ACTIONS(578),
    [aux_sym_shell_token1] = ACTIONS(578),
    [aux_sym_volume_token1] = ACTIONS(578),
    [aux_sym_workdir_token1] = ACTIONS(578),
    [aux_sym_user_token1] = ACTIONS(578),
    [aux_sym_cmd_token1] = ACTIONS(578),
    [aux_sym_entrypoint_token1] = ACTIONS(578),
    [aux_sym_run_token1] = ACTIONS(578),
    [aux_sym_maintainer_token1] = ACTIONS(578),
    [aux_sym_expose_token1] = ACTIONS(578),
    [aux_sym_from_token1] = ACTIONS(578),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(578),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(580),
    [aux_sym_onbuild_token1] = ACTIONS(580),
    [aux_sym_env_token1] = ACTIONS(580),
    [aux_sym_label_token1] = ACTIONS(580),
    [aux_sym_healthcheck_token1] = ACTIONS(580),
    [aux_sym_arg_token1] = ACTIONS(580),
    [aux_sym_add_token1] = ACTIONS(580),
    [aux_sym_copy_token1] = ACTIONS(580),
    [aux_sym_stopsignal_token1] = ACTIONS(580),
    [aux_sym_shell_token1] = ACTIONS(580),
    [aux_sym_volume_token1] = ACTIONS(580),
    [aux_sym_workdir_token1] = ACTIONS(580),
    [aux_sym_user_token1] = ACTIONS(580),
    [aux_sym_cmd_token1] = ACTIONS(580),
    [aux_sym_entrypoint_token1] = ACTIONS(580),
    [aux_sym_run_token1] = ACTIONS(580),
    [aux_sym_maintainer_token1] = ACTIONS(580),
    [aux_sym_expose_token1] = ACTIONS(580),
    [aux_sym_from_token1] = ACTIONS(580),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(580),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(341),
    [aux_sym_env_token1] = ACTIONS(341),
    [aux_sym_label_token1] = ACTIONS(341),
    [aux_sym_healthcheck_token1] = ACTIONS(341),
    [aux_sym_arg_token1] = ACTIONS(341),
    [aux_sym_add_token1] = ACTIONS(341),
    [aux_sym_copy_token1] = ACTIONS(341),
    [aux_sym_stopsignal_token1] = ACTIONS(341),
    [aux_sym_shell_token1] = ACTIONS(341),
    [aux_sym_volume_token1] = ACTIONS(341),
    [aux_sym_workdir_token1] = ACTIONS(341),
    [aux_sym_user_token1] = ACTIONS(341),
    [aux_sym_cmd_token1] = ACTIONS(341),
    [aux_sym_entrypoint_token1] = ACTIONS(341),
    [aux_sym_run_token1] = ACTIONS(341),
    [aux_sym_maintainer_token1] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(341),
    [aux_sym_from_token1] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [191] = {
    [sym_repository] = STATE(212),
    [sym__repository_start] = STATE(197),
    [sym_image] = STATE(95),
    [anon_sym_DOLLAR] = ACTIONS(582),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(584),
    [aux_sym_platform_token1] = ACTIONS(586),
    [aux_sym__repository_start_token1] = ACTIONS(582),
    [aux_sym__repository_start_token4] = ACTIONS(588),
    [aux_sym__repository_start_token6] = ACTIONS(588),
    [aux_sym__repository_start_token8] = ACTIONS(590),
    [aux_sym__repository_start_token10] = ACTIONS(590),
    [aux_sym__repository_start_token12] = ACTIONS(592),
    [aux_sym__repository_start_token14] = ACTIONS(592),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [192] = {
    [sym_repository] = STATE(213),
    [sym__repository_start] = STATE(197),
    [sym_image] = STATE(109),
    [anon_sym_DOLLAR] = ACTIONS(582),
    [aux_sym_platform_token1] = ACTIONS(586),
    [aux_sym__repository_start_token1] = ACTIONS(582),
    [aux_sym__repository_start_token4] = ACTIONS(588),
    [aux_sym__repository_start_token6] = ACTIONS(588),
    [aux_sym__repository_start_token8] = ACTIONS(590),
    [aux_sym__repository_start_token10] = ACTIONS(590),
    [aux_sym__repository_start_token12] = ACTIONS(592),
    [aux_sym__repository_start_token14] = ACTIONS(592),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [193] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(156),
    [sym__port] = STATE(85),
    [sym_port] = STATE(85),
    [sym_port_range] = STATE(85),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(594),
    [aux_sym_user_id_token1] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [194] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_sha256_COLON] = ACTIONS(598),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [195] = {
    [sym_digest] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_sha256_COLON] = ACTIONS(608),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [196] = {
    [sym_digest] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_sha256_COLON] = ACTIONS(610),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [197] = {
    [sym__repository_continued] = STATE(201),
    [aux_sym_repository_repeat1] = STATE(201),
    [anon_sym_DOLLAR] = ACTIONS(612),
    [aux_sym_platform_token1] = ACTIONS(615),
    [aux_sym__repository_start_token1] = ACTIONS(612),
    [aux_sym__repository_start_token4] = ACTIONS(618),
    [aux_sym__repository_start_token6] = ACTIONS(618),
    [aux_sym__repository_start_token8] = ACTIONS(621),
    [aux_sym__repository_start_token10] = ACTIONS(621),
    [aux_sym__repository_start_token12] = ACTIONS(624),
    [aux_sym__repository_start_token14] = ACTIONS(624),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [198] = {
    [sym__repository_continued] = STATE(198),
    [aux_sym_repository_repeat1] = STATE(198),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [aux_sym_platform_token1] = ACTIONS(630),
    [aux_sym__repository_start_token1] = ACTIONS(627),
    [aux_sym__repository_start_token4] = ACTIONS(633),
    [aux_sym__repository_start_token6] = ACTIONS(633),
    [aux_sym__repository_start_token8] = ACTIONS(636),
    [aux_sym__repository_start_token10] = ACTIONS(636),
    [aux_sym__repository_start_token12] = ACTIONS(639),
    [aux_sym__repository_start_token14] = ACTIONS(639),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [199] = {
    [sym_digest] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_sha256_COLON] = ACTIONS(642),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [200] = {
    [sym_digest] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_sha256_COLON] = ACTIONS(644),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [201] = {
    [sym__repository_continued] = STATE(198),
    [aux_sym_repository_repeat1] = STATE(198),
    [anon_sym_DOLLAR] = ACTIONS(646),
    [aux_sym_platform_token1] = ACTIONS(649),
    [aux_sym__repository_start_token1] = ACTIONS(646),
    [aux_sym__repository_start_token4] = ACTIONS(652),
    [aux_sym__repository_start_token6] = ACTIONS(652),
    [aux_sym__repository_start_token8] = ACTIONS(655),
    [aux_sym__repository_start_token10] = ACTIONS(655),
    [aux_sym__repository_start_token12] = ACTIONS(658),
    [aux_sym__repository_start_token14] = ACTIONS(658),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [202] = {
    [sym_digest] = STATE(146),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_sha256_COLON] = ACTIONS(661),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [203] = {
    [sym_tag] = STATE(119),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [aux_sym_platform_token1] = ACTIONS(665),
    [aux_sym__repository_start_token1] = ACTIONS(663),
    [aux_sym__repository_start_token4] = ACTIONS(667),
    [aux_sym__repository_start_token6] = ACTIONS(667),
    [aux_sym__repository_start_token8] = ACTIONS(669),
    [aux_sym__repository_start_token10] = ACTIONS(669),
    [aux_sym__repository_start_token12] = ACTIONS(671),
    [aux_sym__repository_start_token14] = ACTIONS(671),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [204] = {
    [sym_digest] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [205] = {
    [sym_as_name] = STATE(187),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [206] = {
    [sym_as_name] = STATE(176),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [207] = {
    [sym_digest] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [208] = {
    [sym_tag] = STATE(114),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [aux_sym_platform_token1] = ACTIONS(665),
    [aux_sym__repository_start_token1] = ACTIONS(663),
    [aux_sym__repository_start_token4] = ACTIONS(667),
    [aux_sym__repository_start_token6] = ACTIONS(667),
    [aux_sym__repository_start_token8] = ACTIONS(669),
    [aux_sym__repository_start_token10] = ACTIONS(669),
    [aux_sym__repository_start_token12] = ACTIONS(671),
    [aux_sym__repository_start_token14] = ACTIONS(671),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [209] = {
    [sym_digest] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [210] = {
    [sym_digest] = STATE(150),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [211] = {
    [sym_as_name] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [212] = {
    [sym_image] = STATE(111),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [aux_sym_platform_token1] = ACTIONS(685),
    [aux_sym__repository_start_token1] = ACTIONS(683),
    [aux_sym__repository_start_token4] = ACTIONS(687),
    [aux_sym__repository_start_token6] = ACTIONS(687),
    [aux_sym__repository_start_token8] = ACTIONS(689),
    [aux_sym__repository_start_token10] = ACTIONS(689),
    [aux_sym__repository_start_token12] = ACTIONS(691),
    [aux_sym__repository_start_token14] = ACTIONS(691),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [213] = {
    [sym_image] = STATE(99),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [aux_sym_platform_token1] = ACTIONS(685),
    [aux_sym__repository_start_token1] = ACTIONS(683),
    [aux_sym__repository_start_token4] = ACTIONS(687),
    [aux_sym__repository_start_token6] = ACTIONS(687),
    [aux_sym__repository_start_token8] = ACTIONS(689),
    [aux_sym__repository_start_token10] = ACTIONS(689),
    [aux_sym__repository_start_token12] = ACTIONS(691),
    [aux_sym__repository_start_token14] = ACTIONS(691),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [214] = {
    [sym_as_name] = STATE(159),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [215] = {
    [sym_as_name] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [216] = {
    [sym_as_name] = STATE(160),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [217] = {
    [sym_tag] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [aux_sym_platform_token1] = ACTIONS(665),
    [aux_sym__repository_start_token1] = ACTIONS(663),
    [aux_sym__repository_start_token4] = ACTIONS(667),
    [aux_sym__repository_start_token6] = ACTIONS(667),
    [aux_sym__repository_start_token8] = ACTIONS(669),
    [aux_sym__repository_start_token10] = ACTIONS(669),
    [aux_sym__repository_start_token12] = ACTIONS(671),
    [aux_sym__repository_start_token14] = ACTIONS(671),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [sym_as_name] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [219] = {
    [sym_as_name] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [220] = {
    [sym_digest] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym_tag] = STATE(120),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [aux_sym_platform_token1] = ACTIONS(665),
    [aux_sym__repository_start_token1] = ACTIONS(663),
    [aux_sym__repository_start_token4] = ACTIONS(667),
    [aux_sym__repository_start_token6] = ACTIONS(667),
    [aux_sym__repository_start_token8] = ACTIONS(669),
    [aux_sym__repository_start_token10] = ACTIONS(669),
    [aux_sym__repository_start_token12] = ACTIONS(671),
    [aux_sym__repository_start_token14] = ACTIONS(671),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym_as_name] = STATE(153),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [aux_sym_platform_token1] = ACTIONS(675),
    [aux_sym__repository_start_token1] = ACTIONS(673),
    [aux_sym__repository_start_token4] = ACTIONS(677),
    [aux_sym__repository_start_token6] = ACTIONS(677),
    [aux_sym__repository_start_token8] = ACTIONS(679),
    [aux_sym__repository_start_token10] = ACTIONS(679),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [aux_sym_platform_token1] = ACTIONS(600),
    [aux_sym__repository_start_token1] = ACTIONS(596),
    [aux_sym__repository_start_token4] = ACTIONS(602),
    [aux_sym__repository_start_token6] = ACTIONS(602),
    [aux_sym__repository_start_token8] = ACTIONS(604),
    [aux_sym__repository_start_token10] = ACTIONS(604),
    [aux_sym__repository_start_token12] = ACTIONS(606),
    [aux_sym__repository_start_token14] = ACTIONS(606),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_DOLLAR] = ACTIONS(693),
    [aux_sym_platform_token1] = ACTIONS(695),
    [aux_sym__repository_start_token1] = ACTIONS(693),
    [aux_sym__repository_start_token4] = ACTIONS(693),
    [aux_sym__repository_start_token6] = ACTIONS(693),
    [aux_sym__repository_start_token8] = ACTIONS(693),
    [aux_sym__repository_start_token10] = ACTIONS(693),
    [aux_sym__repository_start_token12] = ACTIONS(693),
    [aux_sym__repository_start_token14] = ACTIONS(693),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [anon_sym_DOLLAR] = ACTIONS(697),
    [aux_sym_platform_token1] = ACTIONS(699),
    [aux_sym__repository_start_token1] = ACTIONS(697),
    [aux_sym__repository_start_token4] = ACTIONS(697),
    [aux_sym__repository_start_token6] = ACTIONS(697),
    [aux_sym__repository_start_token8] = ACTIONS(697),
    [aux_sym__repository_start_token10] = ACTIONS(697),
    [aux_sym__repository_start_token12] = ACTIONS(697),
    [aux_sym__repository_start_token14] = ACTIONS(697),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_DOLLAR] = ACTIONS(701),
    [aux_sym_platform_token1] = ACTIONS(703),
    [aux_sym__repository_start_token1] = ACTIONS(701),
    [aux_sym__repository_start_token4] = ACTIONS(701),
    [aux_sym__repository_start_token6] = ACTIONS(701),
    [aux_sym__repository_start_token8] = ACTIONS(701),
    [aux_sym__repository_start_token10] = ACTIONS(701),
    [aux_sym__repository_start_token12] = ACTIONS(701),
    [aux_sym__repository_start_token14] = ACTIONS(701),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(705),
    [aux_sym__repository_start_token6] = ACTIONS(705),
    [aux_sym__repository_start_token8] = ACTIONS(705),
    [aux_sym__repository_start_token10] = ACTIONS(705),
    [aux_sym__repository_start_token12] = ACTIONS(705),
    [aux_sym__repository_start_token14] = ACTIONS(705),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_platform_token1] = ACTIONS(189),
    [aux_sym__repository_start_token1] = ACTIONS(187),
    [aux_sym__repository_start_token4] = ACTIONS(187),
    [aux_sym__repository_start_token6] = ACTIONS(187),
    [aux_sym__repository_start_token8] = ACTIONS(187),
    [aux_sym__repository_start_token10] = ACTIONS(187),
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token14] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_DOLLAR] = ACTIONS(709),
    [aux_sym_platform_token1] = ACTIONS(711),
    [aux_sym__repository_start_token1] = ACTIONS(709),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(709),
    [aux_sym__repository_start_token10] = ACTIONS(709),
    [aux_sym__repository_start_token12] = ACTIONS(709),
    [aux_sym__repository_start_token14] = ACTIONS(709),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [anon_sym_DOLLAR] = ACTIONS(713),
    [aux_sym_platform_token1] = ACTIONS(715),
    [aux_sym__repository_start_token1] = ACTIONS(713),
    [aux_sym__repository_start_token4] = ACTIONS(713),
    [aux_sym__repository_start_token6] = ACTIONS(713),
    [aux_sym__repository_start_token8] = ACTIONS(713),
    [aux_sym__repository_start_token10] = ACTIONS(713),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [anon_sym_DOLLAR] = ACTIONS(717),
    [aux_sym_platform_token1] = ACTIONS(719),
    [aux_sym__repository_start_token1] = ACTIONS(717),
    [aux_sym__repository_start_token4] = ACTIONS(717),
    [aux_sym__repository_start_token6] = ACTIONS(717),
    [aux_sym__repository_start_token8] = ACTIONS(717),
    [aux_sym__repository_start_token10] = ACTIONS(717),
    [aux_sym__repository_start_token12] = ACTIONS(717),
    [aux_sym__repository_start_token14] = ACTIONS(717),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_platform_token1] = ACTIONS(197),
    [aux_sym__repository_start_token1] = ACTIONS(195),
    [aux_sym__repository_start_token4] = ACTIONS(195),
    [aux_sym__repository_start_token6] = ACTIONS(195),
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token10] = ACTIONS(195),
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token14] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_platform_token1] = ACTIONS(205),
    [aux_sym__repository_start_token1] = ACTIONS(203),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token6] = ACTIONS(203),
    [aux_sym__repository_start_token8] = ACTIONS(203),
    [aux_sym__repository_start_token10] = ACTIONS(203),
    [aux_sym__repository_start_token12] = ACTIONS(203),
    [aux_sym__repository_start_token14] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_DOLLAR] = ACTIONS(721),
    [aux_sym_platform_token1] = ACTIONS(723),
    [aux_sym__repository_start_token1] = ACTIONS(721),
    [aux_sym__repository_start_token4] = ACTIONS(721),
    [aux_sym__repository_start_token6] = ACTIONS(721),
    [aux_sym__repository_start_token8] = ACTIONS(721),
    [aux_sym__repository_start_token10] = ACTIONS(721),
    [aux_sym__repository_start_token12] = ACTIONS(721),
    [aux_sym__repository_start_token14] = ACTIONS(721),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_platform_token1] = ACTIONS(727),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(725),
    [aux_sym__repository_start_token6] = ACTIONS(725),
    [aux_sym__repository_start_token8] = ACTIONS(725),
    [aux_sym__repository_start_token10] = ACTIONS(725),
    [aux_sym__repository_start_token12] = ACTIONS(725),
    [aux_sym__repository_start_token14] = ACTIONS(725),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_DOLLAR] = ACTIONS(729),
    [aux_sym_platform_token1] = ACTIONS(731),
    [aux_sym__repository_start_token1] = ACTIONS(729),
    [aux_sym__repository_start_token4] = ACTIONS(729),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(729),
    [aux_sym__repository_start_token10] = ACTIONS(729),
    [aux_sym__repository_start_token12] = ACTIONS(729),
    [aux_sym__repository_start_token14] = ACTIONS(729),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym__port_spec] = STATE(381),
    [sym_mapped_port] = STATE(381),
    [sym__port] = STATE(352),
    [sym_port] = STATE(338),
    [sym_port_range] = STATE(338),
    [sym__port_part] = STATE(326),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_user_id_token1] = ACTIONS(735),
    [anon_sym_DQUOTE] = ACTIONS(737),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [238] = {
    [anon_sym_DOLLAR] = ACTIONS(739),
    [aux_sym_platform_token1] = ACTIONS(741),
    [aux_sym__repository_start_token1] = ACTIONS(739),
    [aux_sym__repository_start_token4] = ACTIONS(739),
    [aux_sym__repository_start_token6] = ACTIONS(739),
    [aux_sym__repository_start_token8] = ACTIONS(739),
    [aux_sym__repository_start_token10] = ACTIONS(739),
    [aux_sym__repository_start_token12] = ACTIONS(739),
    [aux_sym__repository_start_token14] = ACTIONS(739),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [anon_sym_DOLLAR] = ACTIONS(743),
    [aux_sym_platform_token1] = ACTIONS(745),
    [aux_sym__repository_start_token1] = ACTIONS(743),
    [aux_sym__repository_start_token4] = ACTIONS(743),
    [aux_sym__repository_start_token6] = ACTIONS(743),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(743),
    [aux_sym__repository_start_token14] = ACTIONS(743),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym__port] = STATE(375),
    [sym_port] = STATE(375),
    [sym_port_range] = STATE(375),
    [sym__port_part] = STATE(326),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_user_id_token1] = ACTIONS(735),
    [anon_sym_DQUOTE] = ACTIONS(737),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [241] = {
    [sym__port] = STATE(105),
    [sym_port] = STATE(105),
    [sym_port_range] = STATE(105),
    [sym__port_part] = STATE(63),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [aux_sym_user_id_token1] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(747),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [242] = {
    [aux_sym__json_string] = STATE(287),
    [aux_sym_json_array_repeat1] = STATE(335),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(755),
    [sym__json_escape_sequence] = ACTIONS(757),
  },
  [243] = {
    [sym__port] = STATE(189),
    [sym_port] = STATE(189),
    [sym_port_range] = STATE(189),
    [sym__port_part] = STATE(63),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [aux_sym_user_id_token1] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(747),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [244] = {
    [sym_variable_default_value] = STATE(427),
    [sym_variable_this_or_null] = STATE(427),
    [anon_sym_RBRACE] = ACTIONS(759),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [245] = {
    [aux_sym__repository_start_repeat2] = STATE(248),
    [anon_sym_SLASH] = ACTIONS(765),
    [aux_sym__repository_start_token3] = ACTIONS(767),
    [aux_sym__repository_start_token4] = ACTIONS(769),
    [aux_sym__repository_start_token7] = ACTIONS(769),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [aux_sym__repository_start_repeat3] = STATE(246),
    [anon_sym_SLASH] = ACTIONS(152),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token8] = ACTIONS(771),
    [aux_sym__repository_start_token11] = ACTIONS(771),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_template_expr_less_than_equals] = STATE(436),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [aux_sym__repository_start_repeat2] = STATE(248),
    [anon_sym_SLASH] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(776),
    [aux_sym__repository_start_token7] = ACTIONS(776),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [aux_sym__repository_start_repeat1] = STATE(249),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(779),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_template_expr_less_than_equals] = STATE(430),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_template_expr_less_than_equals] = STATE(380),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [aux_sym__repository_start_repeat1] = STATE(249),
    [anon_sym_DOLLAR] = ACTIONS(782),
    [anon_sym_SLASH] = ACTIONS(784),
    [aux_sym__repository_start_token2] = ACTIONS(782),
    [aux_sym__repository_start_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_template_expr_less_than_equals] = STATE(403),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_template_expr_less_than_equals] = STATE(397),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [sym_user_name] = STATE(139),
    [sym_user_id] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_user_name_token1] = ACTIONS(790),
    [aux_sym_user_id_token1] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
    [aux_sym__anything] = STATE(125),
    [sym_json_array] = STATE(183),
    [sym__anything_or_json_array] = STATE(183),
    [aux_sym__anything_token1] = ACTIONS(794),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [sym_template_expr_less_than_equals] = STATE(442),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [258] = {
    [sym_port_protocol] = STATE(319),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(798),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [aux_sym__anything] = STATE(125),
    [sym_json_array] = STATE(184),
    [sym__anything_or_json_array] = STATE(184),
    [aux_sym__anything_token1] = ACTIONS(794),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_port_protocol] = STATE(329),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(798),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [aux_sym__repository_start_repeat1] = STATE(252),
    [anon_sym_DOLLAR] = ACTIONS(782),
    [anon_sym_SLASH] = ACTIONS(800),
    [aux_sym__repository_start_token2] = ACTIONS(782),
    [aux_sym__repository_start_token3] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
    [aux_sym__anything] = STATE(125),
    [sym_json_array] = STATE(185),
    [sym__anything_or_json_array] = STATE(185),
    [aux_sym__anything_token1] = ACTIONS(794),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [aux_sym__repository_start_repeat2] = STATE(245),
    [anon_sym_SLASH] = ACTIONS(784),
    [aux_sym__repository_start_token3] = ACTIONS(786),
    [aux_sym__repository_start_token4] = ACTIONS(769),
    [aux_sym__repository_start_token7] = ACTIONS(769),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [sym_variable_default_value] = STATE(433),
    [sym_variable_this_or_null] = STATE(433),
    [anon_sym_RBRACE] = ACTIONS(804),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [aux_sym__repository_start_repeat3] = STATE(274),
    [anon_sym_SLASH] = ACTIONS(784),
    [aux_sym__repository_start_token3] = ACTIONS(786),
    [aux_sym__repository_start_token8] = ACTIONS(806),
    [aux_sym__repository_start_token11] = ACTIONS(806),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [sym_variable_default_value] = STATE(439),
    [sym_variable_this_or_null] = STATE(439),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
    [sym_template_expr_less_than_equals] = STATE(368),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [aux_sym__repository_start_repeat4] = STATE(275),
    [anon_sym_SLASH] = ACTIONS(784),
    [aux_sym__repository_start_token3] = ACTIONS(786),
    [aux_sym__repository_start_token12] = ACTIONS(810),
    [aux_sym__repository_start_token15] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(269),
    [aux_sym__repository_start_token13] = ACTIONS(812),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(814),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(814),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(814),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [sym_variable_default_value] = STATE(444),
    [sym_variable_this_or_null] = STATE(444),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [sym_template_expr_less_than_equals] = STATE(386),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [sym_template_expr_less_than_equals] = STATE(369),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [aux_sym__repository_start_repeat4] = STATE(273),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token12] = ACTIONS(819),
    [aux_sym__repository_start_token15] = ACTIONS(819),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [aux_sym__repository_start_repeat3] = STATE(246),
    [anon_sym_SLASH] = ACTIONS(765),
    [aux_sym__repository_start_token3] = ACTIONS(767),
    [aux_sym__repository_start_token8] = ACTIONS(806),
    [aux_sym__repository_start_token11] = ACTIONS(806),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [aux_sym__repository_start_repeat4] = STATE(273),
    [anon_sym_SLASH] = ACTIONS(765),
    [aux_sym__repository_start_token3] = ACTIONS(767),
    [aux_sym__repository_start_token12] = ACTIONS(810),
    [aux_sym__repository_start_token15] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [sym_port] = STATE(357),
    [sym_port_range] = STATE(357),
    [sym__port_part] = STATE(326),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_user_id_token1] = ACTIONS(735),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(269),
    [aux_sym__repository_start_token13] = ACTIONS(822),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(824),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(824),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(824),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [sym_port] = STATE(425),
    [sym_port_range] = STATE(425),
    [sym__port_part] = STATE(326),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_user_id_token1] = ACTIONS(735),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym_template_expr_less_than_equals] = STATE(412),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(277),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(774),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [280] = {
    [sym_variable_default_value] = STATE(446),
    [sym_variable_this_or_null] = STATE(446),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [sym_variable_default_value] = STATE(448),
    [sym_variable_this_or_null] = STATE(448),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [sym_variable_default_value] = STATE(390),
    [sym_variable_this_or_null] = STATE(390),
    [anon_sym_RBRACE] = ACTIONS(830),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym_variable_default_value] = STATE(450),
    [sym_variable_this_or_null] = STATE(450),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_COLON_DASH] = ACTIONS(761),
    [anon_sym_COLON_PLUS] = ACTIONS(763),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [aux_sym__json_string] = STATE(293),
    [anon_sym_DQUOTE] = ACTIONS(834),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(836),
    [sym__json_escape_sequence] = ACTIONS(836),
  },
  [288] = {
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token12] = ACTIONS(207),
    [aux_sym__repository_start_token15] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [289] = {
    [aux_sym__json_string] = STATE(300),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(840),
    [sym__json_escape_sequence] = ACTIONS(840),
  },
  [290] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym__json_string] = STATE(293),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(844),
    [sym__json_escape_sequence] = ACTIONS(844),
  },
  [294] = {
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [sym_json_array] = STATE(155),
    [aux_sym_add_repeat1] = STATE(131),
    [sym_path] = ACTIONS(847),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [sym_json_array] = STATE(179),
    [aux_sym_add_repeat1] = STATE(126),
    [sym_path] = ACTIONS(847),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [sym_json_array] = STATE(151),
    [aux_sym_add_repeat1] = STATE(117),
    [sym_path] = ACTIONS(847),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [anon_sym_DOLLAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym__json_string] = STATE(293),
    [anon_sym_DQUOTE] = ACTIONS(849),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(836),
    [sym__json_escape_sequence] = ACTIONS(836),
  },
  [301] = {
    [sym_docker_variable] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(851),
    [sym__docker_variable] = ACTIONS(853),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [sym_signal_name] = STATE(169),
    [aux_sym_signal_name_token1] = ACTIONS(855),
    [sym_signal_num] = ACTIONS(857),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [aux_sym_json_array_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(859),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [aux_sym_json_array_repeat1] = STATE(303),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [aux_sym_json_array_repeat1] = STATE(317),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(859),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [sym_docker_variable] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(863),
    [sym__docker_variable] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym_json_array_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_RBRACK] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [sym_docker_variable] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(872),
    [sym__docker_variable] = ACTIONS(874),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym_docker_variable] = STATE(103),
    [anon_sym_LBRACE] = ACTIONS(851),
    [sym__docker_variable] = ACTIONS(853),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [310] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(876),
    [sym__docker_variable] = ACTIONS(878),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [311] = {
    [anon_sym_DOLLAR] = ACTIONS(880),
    [aux_sym_port_protocol_token1] = ACTIONS(882),
    [aux_sym_port_protocol_token2] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [sym_docker_variable] = STATE(261),
    [anon_sym_LBRACE] = ACTIONS(872),
    [sym__docker_variable] = ACTIONS(874),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [sym_docker_variable] = STATE(258),
    [anon_sym_LBRACE] = ACTIONS(884),
    [sym__docker_variable] = ACTIONS(886),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [sym_docker_variable] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym__docker_variable] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [sym_docker_variable] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym__docker_variable] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [sym_docker_variable] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(876),
    [sym__docker_variable] = ACTIONS(878),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [317] = {
    [aux_sym_json_array_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(892),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [sym_docker_variable] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(863),
    [sym__docker_variable] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [sym_docker_variable] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym__docker_variable] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [sym_docker_variable] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym__docker_variable] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [sym_platform] = STATE(192),
    [anon_sym_DOLLAR] = ACTIONS(894),
    [aux_sym_platform_token1] = ACTIONS(896),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [sym__port_part] = STATE(337),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_user_id_token1] = ACTIONS(735),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_docker_variable] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(898),
    [sym__docker_variable] = ACTIONS(900),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [sym_docker_variable] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(902),
    [sym__docker_variable] = ACTIONS(904),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [326] = {
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [sym__port_part] = STATE(80),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [aux_sym_user_id_token1] = ACTIONS(123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [sym_docker_variable] = STATE(61),
    [anon_sym_LBRACE] = ACTIONS(898),
    [sym__docker_variable] = ACTIONS(900),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_arg_default_token1] = ACTIONS(908),
    [anon_sym_DOLLAR] = ACTIONS(910),
    [aux_sym_workdir_token2] = ACTIONS(910),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [anon_sym_DOLLAR] = ACTIONS(912),
    [aux_sym_port_protocol_token1] = ACTIONS(914),
    [aux_sym_port_protocol_token2] = ACTIONS(914),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [sym_docker_variable] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(898),
    [sym__docker_variable] = ACTIONS(900),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym_json_array_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [sym_docker_variable] = STATE(333),
    [anon_sym_LBRACE] = ACTIONS(884),
    [sym__docker_variable] = ACTIONS(886),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [338] = {
    [anon_sym_COLON] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [sym_json_array] = STATE(180),
    [sym__json_prefix] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [sym_arg_default] = STATE(172),
    [aux_sym_arg_default_token1] = ACTIONS(921),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [341] = {
    [sym_user_group_id] = STATE(177),
    [aux_sym_user_id_token1] = ACTIONS(923),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [aux_sym__anything] = STATE(128),
    [aux_sym__anything_token1] = ACTIONS(925),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [aux_sym__anything] = STATE(133),
    [aux_sym__anything_token1] = ACTIONS(927),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [aux_sym__anything] = STATE(127),
    [aux_sym__anything_token1] = ACTIONS(929),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(931),
    [anon_sym_RBRACK] = ACTIONS(931),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [aux_sym__anything] = STATE(132),
    [aux_sym__anything_token1] = ACTIONS(933),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [anon_sym_COMMA] = ACTIONS(935),
    [anon_sym_RBRACK] = ACTIONS(935),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [sym_user_group] = STATE(177),
    [aux_sym_user_name_token1] = ACTIONS(937),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [sym__json_value] = STATE(351),
    [anon_sym_DQUOTE] = ACTIONS(939),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(870),
    [anon_sym_RBRACK] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [anon_sym_COLON] = ACTIONS(941),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_RBRACE] = ACTIONS(943),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [aux_sym__repository_start_token9] = ACTIONS(945),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [sym__space_no_newline] = ACTIONS(947),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [aux_sym_from_token2] = ACTIONS(949),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(951),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [sym_template_expr_percent_signs] = ACTIONS(953),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [359] = {
    [sym_template_expr_curly_braces] = ACTIONS(955),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [aux_sym_from_token2] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [sym__space_no_newline] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_SLASH] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [aux_sym_from_token2] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [sym__space_no_newline] = ACTIONS(963),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [aux_sym__repository_start_token5] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [aux_sym__repository_start_token9] = ACTIONS(967),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [sym__space_no_newline] = ACTIONS(969),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [aux_sym__repository_start_token13] = ACTIONS(971),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [aux_sym__repository_start_token13] = ACTIONS(973),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [aux_sym_from_token2] = ACTIONS(975),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [aux_sym__repository_start_token9] = ACTIONS(977),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [aux_sym__repository_start_token5] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [sym__space_no_newline] = ACTIONS(981),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym__repository_start_token5] = ACTIONS(983),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DQUOTE] = ACTIONS(391),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [sym_template_expr_curly_braces] = ACTIONS(985),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [aux_sym_from_token2] = ACTIONS(987),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [sym__space_no_newline] = ACTIONS(989),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [sym__docker_variable] = ACTIONS(991),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [aux_sym__repository_start_token13] = ACTIONS(993),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [anon_sym_DQUOTE] = ACTIONS(995),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [sym__space_no_newline] = ACTIONS(997),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(999),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [aux_sym_from_token2] = ACTIONS(1001),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [sym_arg_name] = ACTIONS(1003),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [aux_sym__repository_start_token13] = ACTIONS(1005),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [aux_sym__repository_start_token9] = ACTIONS(1007),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [aux_sym__repository_start_token5] = ACTIONS(1009),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [ts_builtin_sym_end] = ACTIONS(1011),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(1013),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1015),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [sym__space_no_newline] = ACTIONS(1017),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1019),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [aux_sym__repository_start_token5] = ACTIONS(1021),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [aux_sym__repository_start_token9] = ACTIONS(1023),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym_template_expr_percent_signs] = ACTIONS(1025),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [397] = {
    [aux_sym__repository_start_token13] = ACTIONS(1027),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [aux_sym__repository_start_token9] = ACTIONS(1029),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [aux_sym__repository_start_token5] = ACTIONS(1031),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [sym_template_expr_curly_braces] = ACTIONS(1033),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [401] = {
    [sym__space_no_newline] = ACTIONS(1035),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym__space_no_newline] = ACTIONS(1037),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [aux_sym__repository_start_token13] = ACTIONS(1039),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym__space_no_newline] = ACTIONS(1041),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym__space_no_newline] = ACTIONS(1043),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym__space_no_newline] = ACTIONS(1045),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [sym__space_no_newline] = ACTIONS(1047),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [sym__space_no_newline] = ACTIONS(1049),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [sym__space_no_newline] = ACTIONS(1051),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [aux_sym_signal_name_token2] = ACTIONS(1053),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [aux_sym__repository_start_token5] = ACTIONS(1055),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [aux_sym__repository_start_token13] = ACTIONS(1057),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [sym__space_no_newline] = ACTIONS(1059),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym__space_no_newline] = ACTIONS(1061),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym__space_no_newline] = ACTIONS(1063),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_SLASH] = ACTIONS(784),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [sym__space_no_newline] = ACTIONS(1065),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_template_expr_curly_braces] = ACTIONS(1067),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [419] = {
    [sym__space_no_newline] = ACTIONS(1069),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym__space_no_newline] = ACTIONS(1071),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym__space_no_newline] = ACTIONS(1073),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_template_expr_percent_signs] = ACTIONS(1075),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [423] = {
    [anon_sym_SLASH] = ACTIONS(1077),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym__repository_start_token9] = ACTIONS(1079),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [anon_sym_SLASH] = ACTIONS(1083),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_RBRACE] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [aux_sym__repository_start_token5] = ACTIONS(1087),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [aux_sym__repository_start_token9] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [aux_sym__repository_start_token13] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym_template_expr_curly_braces] = ACTIONS(1093),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [432] = {
    [sym_template_expr_percent_signs] = ACTIONS(1095),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [433] = {
    [anon_sym_RBRACE] = ACTIONS(1097),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [aux_sym__repository_start_token5] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [aux_sym__repository_start_token9] = ACTIONS(1101),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [aux_sym__repository_start_token13] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [aux_sym_from_token2] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym__space_no_newline] = ACTIONS(1107),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(1109),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [aux_sym__repository_start_token5] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [aux_sym__repository_start_token9] = ACTIONS(1113),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [aux_sym__repository_start_token13] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [aux_sym_from_token2] = ACTIONS(1117),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_RBRACE] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym__space_no_newline] = ACTIONS(1121),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_RBRACE] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym_template_expr_percent_signs] = ACTIONS(1125),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [448] = {
    [anon_sym_RBRACE] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym_template_expr_percent_signs] = ACTIONS(1129),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym__docker_variable] = ACTIONS(1133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [452] = {
    [sym_template_expr_curly_braces] = ACTIONS(1135),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [453] = {
    [sym_template_expr_curly_braces] = ACTIONS(1137),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [454] = {
    [sym_template_expr_percent_signs] = ACTIONS(1139),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [455] = {
    [aux_sym_from_token2] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym__docker_variable] = ACTIONS(1143),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [457] = {
    [sym_template_expr_curly_braces] = ACTIONS(1145),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [458] = {
    [sym_template_expr_percent_signs] = ACTIONS(1147),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [459] = {
    [sym_template_expr_percent_signs] = ACTIONS(1149),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [460] = {
    [sym__docker_variable] = ACTIONS(1151),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [461] = {
    [sym_template_expr_curly_braces] = ACTIONS(1153),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [462] = {
    [sym_template_expr_percent_signs] = ACTIONS(1155),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [463] = {
    [sym_template_expr_curly_braces] = ACTIONS(1157),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [464] = {
    [sym__docker_variable] = ACTIONS(1159),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [465] = {
    [sym__docker_variable] = ACTIONS(1161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [466] = {
    [sym__docker_variable] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [467] = {
    [sym__docker_variable] = ACTIONS(1165),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(445),
  [11] = {.count = 1, .reusable = true}, SHIFT(421),
  [13] = {.count = 1, .reusable = true}, SHIFT(420),
  [15] = {.count = 1, .reusable = true}, SHIFT(419),
  [17] = {.count = 1, .reusable = true}, SHIFT(415),
  [19] = {.count = 1, .reusable = true}, SHIFT(414),
  [21] = {.count = 1, .reusable = true}, SHIFT(413),
  [23] = {.count = 1, .reusable = true}, SHIFT(409),
  [25] = {.count = 1, .reusable = true}, SHIFT(408),
  [27] = {.count = 1, .reusable = true}, SHIFT(407),
  [29] = {.count = 1, .reusable = true}, SHIFT(406),
  [31] = {.count = 1, .reusable = true}, SHIFT(405),
  [33] = {.count = 1, .reusable = true}, SHIFT(404),
  [35] = {.count = 1, .reusable = true}, SHIFT(402),
  [37] = {.count = 1, .reusable = true}, SHIFT(401),
  [39] = {.count = 1, .reusable = true}, SHIFT(392),
  [41] = {.count = 1, .reusable = true}, SHIFT(193),
  [43] = {.count = 1, .reusable = true}, SHIFT(191),
  [45] = {.count = 1, .reusable = true}, SHIFT(165),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(445),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(421),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(420),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(419),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(415),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(414),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(413),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(409),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(408),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(407),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(406),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(405),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(404),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(402),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(401),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(392),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(193),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(191),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(165),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(324),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(36),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(237),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [121] = {.count = 1, .reusable = true}, SHIFT(324),
  [123] = {.count = 1, .reusable = true}, SHIFT(36),
  [125] = {.count = 1, .reusable = true}, SHIFT(237),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(321),
  [133] = {.count = 1, .reusable = true}, SHIFT(234),
  [135] = {.count = 1, .reusable = false}, SHIFT(62),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(235),
  [143] = {.count = 1, .reusable = false}, SHIFT(72),
  [145] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(272),
  [152] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(447),
  [159] = {.count = 1, .reusable = true}, SHIFT(272),
  [161] = {.count = 1, .reusable = true}, SHIFT(447),
  [163] = {.count = 1, .reusable = true}, SHIFT(452),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(452),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [176] = {.count = 1, .reusable = true}, SHIFT(239),
  [178] = {.count = 1, .reusable = false}, SHIFT(73),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(321),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(332),
  [215] = {.count = 1, .reusable = true}, SHIFT(310),
  [217] = {.count = 1, .reusable = false}, SHIFT(113),
  [219] = {.count = 1, .reusable = true}, SHIFT(453),
  [221] = {.count = 1, .reusable = false}, SHIFT(110),
  [223] = {.count = 1, .reusable = true}, SHIFT(250),
  [225] = {.count = 1, .reusable = true}, SHIFT(454),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(250),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(454),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(453),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(310),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [241] = {.count = 1, .reusable = false}, SHIFT(96),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [247] = {.count = 1, .reusable = false}, SHIFT(122),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [253] = {.count = 1, .reusable = false}, SHIFT(124),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [259] = {.count = 1, .reusable = false}, SHIFT(130),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [265] = {.count = 1, .reusable = true}, SHIFT(229),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [271] = {.count = 1, .reusable = false}, SHIFT(145),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [277] = {.count = 1, .reusable = true}, SHIFT(327),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [283] = {.count = 1, .reusable = false}, SHIFT(142),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [293] = {.count = 1, .reusable = true}, SHIFT(231),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(137),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [305] = {.count = 1, .reusable = false}, SHIFT(158),
  [307] = {.count = 1, .reusable = true}, SHIFT(462),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [313] = {.count = 1, .reusable = true}, SHIFT(306),
  [315] = {.count = 1, .reusable = false}, SHIFT(190),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [321] = {.count = 1, .reusable = false}, SHIFT(309),
  [323] = {.count = 1, .reusable = true}, SHIFT(309),
  [325] = {.count = 1, .reusable = false}, SHIFT(174),
  [327] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(309),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(309),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [345] = {.count = 1, .reusable = false}, SHIFT(186),
  [347] = {.count = 1, .reusable = true}, SHIFT(461),
  [349] = {.count = 1, .reusable = true}, SHIFT(257),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [353] = {.count = 1, .reusable = true}, SHIFT(241),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [359] = {.count = 1, .reusable = false}, SHIFT(164),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(461),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(257),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(462),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(306),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [375] = {.count = 1, .reusable = true}, SHIFT(203),
  [377] = {.count = 1, .reusable = true}, SHIFT(202),
  [379] = {.count = 1, .reusable = false}, SHIFT(443),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [385] = {.count = 1, .reusable = true}, SHIFT(221),
  [387] = {.count = 1, .reusable = true}, SHIFT(196),
  [389] = {.count = 1, .reusable = false}, SHIFT(377),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [395] = {.count = 1, .reusable = true}, SHIFT(208),
  [397] = {.count = 1, .reusable = true}, SHIFT(194),
  [399] = {.count = 1, .reusable = false}, SHIFT(455),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [403] = {.count = 1, .reusable = true}, SHIFT(217),
  [405] = {.count = 1, .reusable = true}, SHIFT(200),
  [407] = {.count = 1, .reusable = false}, SHIFT(370),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [411] = {.count = 1, .reusable = true}, SHIFT(199),
  [413] = {.count = 1, .reusable = false}, SHIFT(437),
  [415] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(115),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [430] = {.count = 1, .reusable = false}, SHIFT(118),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_add_repeat1, 1),
  [434] = {.count = 1, .reusable = false}, REDUCE(aux_sym_add_repeat1, 1),
  [436] = {.count = 1, .reusable = false}, SHIFT(149),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [440] = {.count = 1, .reusable = true}, SHIFT(195),
  [442] = {.count = 1, .reusable = false}, SHIFT(384),
  [444] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(121),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [451] = {.count = 1, .reusable = false}, SHIFT(121),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_healthcheck, 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(aux_sym_add_repeat1, 2),
  [467] = {.count = 1, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2),
  [469] = {.count = 2, .reusable = false}, REDUCE(aux_sym_add_repeat1, 2), SHIFT_REPEAT(118),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [484] = {.count = 1, .reusable = false}, SHIFT(115),
  [486] = {.count = 1, .reusable = false}, SHIFT(170),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [498] = {.count = 1, .reusable = false}, SHIFT(360),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [506] = {.count = 1, .reusable = true}, SHIFT(349),
  [508] = {.count = 1, .reusable = true}, SHIFT(341),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [516] = {.count = 1, .reusable = true}, SHIFT(340),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [520] = {.count = 1, .reusable = false}, SHIFT(356),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [524] = {.count = 1, .reusable = false}, SHIFT(363),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [544] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [582] = {.count = 1, .reusable = true}, SHIFT(320),
  [584] = {.count = 1, .reusable = true}, SHIFT(322),
  [586] = {.count = 1, .reusable = false}, SHIFT(58),
  [588] = {.count = 1, .reusable = true}, SHIFT(359),
  [590] = {.count = 1, .reusable = true}, SHIFT(358),
  [592] = {.count = 1, .reusable = true}, SHIFT(279),
  [594] = {.count = 1, .reusable = true}, SHIFT(243),
  [596] = {.count = 1, .reusable = true}, SHIFT(314),
  [598] = {.count = 1, .reusable = true}, SHIFT(220),
  [600] = {.count = 1, .reusable = false}, SHIFT(134),
  [602] = {.count = 1, .reusable = true}, SHIFT(400),
  [604] = {.count = 1, .reusable = true}, SHIFT(396),
  [606] = {.count = 1, .reusable = true}, SHIFT(254),
  [608] = {.count = 1, .reusable = true}, SHIFT(210),
  [610] = {.count = 1, .reusable = true}, SHIFT(207),
  [612] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(312),
  [615] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(426),
  [618] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(431),
  [621] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(432),
  [624] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(251),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(312),
  [630] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(426),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(431),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(432),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(251),
  [642] = {.count = 1, .reusable = true}, SHIFT(209),
  [644] = {.count = 1, .reusable = true}, SHIFT(223),
  [646] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(312),
  [649] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(426),
  [652] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(431),
  [655] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(432),
  [658] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(251),
  [661] = {.count = 1, .reusable = true}, SHIFT(204),
  [663] = {.count = 1, .reusable = true}, SHIFT(315),
  [665] = {.count = 1, .reusable = false}, SHIFT(116),
  [667] = {.count = 1, .reusable = true}, SHIFT(463),
  [669] = {.count = 1, .reusable = true}, SHIFT(459),
  [671] = {.count = 1, .reusable = true}, SHIFT(253),
  [673] = {.count = 1, .reusable = true}, SHIFT(318),
  [675] = {.count = 1, .reusable = false}, SHIFT(182),
  [677] = {.count = 1, .reusable = true}, SHIFT(376),
  [679] = {.count = 1, .reusable = true}, SHIFT(449),
  [681] = {.count = 1, .reusable = true}, SHIFT(271),
  [683] = {.count = 1, .reusable = true}, SHIFT(316),
  [685] = {.count = 1, .reusable = false}, SHIFT(107),
  [687] = {.count = 1, .reusable = true}, SHIFT(418),
  [689] = {.count = 1, .reusable = true}, SHIFT(422),
  [691] = {.count = 1, .reusable = true}, SHIFT(267),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [707] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [711] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [719] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [723] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [733] = {.count = 1, .reusable = true}, SHIFT(313),
  [735] = {.count = 1, .reusable = true}, SHIFT(260),
  [737] = {.count = 1, .reusable = true}, SHIFT(278),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [747] = {.count = 1, .reusable = true}, SHIFT(276),
  [749] = {.count = 1, .reusable = true}, SHIFT(304),
  [751] = {.count = 1, .reusable = true}, SHIFT(350),
  [753] = {.count = 1, .reusable = true}, SHIFT(188),
  [755] = {.count = 1, .reusable = false}, SHIFT(287),
  [757] = {.count = 1, .reusable = true}, SHIFT(287),
  [759] = {.count = 1, .reusable = true}, SHIFT(22),
  [761] = {.count = 1, .reusable = true}, SHIFT(393),
  [763] = {.count = 1, .reusable = true}, SHIFT(391),
  [765] = {.count = 1, .reusable = true}, SHIFT(230),
  [767] = {.count = 1, .reusable = false}, SHIFT(423),
  [769] = {.count = 1, .reusable = true}, SHIFT(457),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(458),
  [774] = {.count = 1, .reusable = true}, SHIFT(277),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(457),
  [779] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(308),
  [782] = {.count = 1, .reusable = true}, SHIFT(308),
  [784] = {.count = 1, .reusable = true}, SHIFT(236),
  [786] = {.count = 1, .reusable = false}, SHIFT(362),
  [788] = {.count = 1, .reusable = true}, SHIFT(334),
  [790] = {.count = 1, .reusable = true}, SHIFT(136),
  [792] = {.count = 1, .reusable = true}, SHIFT(138),
  [794] = {.count = 1, .reusable = false}, SHIFT(125),
  [796] = {.count = 1, .reusable = true}, SHIFT(242),
  [798] = {.count = 1, .reusable = true}, SHIFT(311),
  [800] = {.count = 1, .reusable = true}, SHIFT(227),
  [802] = {.count = 1, .reusable = false}, SHIFT(416),
  [804] = {.count = 1, .reusable = true}, SHIFT(101),
  [806] = {.count = 1, .reusable = true}, SHIFT(458),
  [808] = {.count = 1, .reusable = true}, SHIFT(285),
  [810] = {.count = 1, .reusable = true}, SHIFT(247),
  [812] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(269),
  [817] = {.count = 1, .reusable = true}, SHIFT(232),
  [819] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(247),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [824] = {.count = 1, .reusable = true}, SHIFT(269),
  [826] = {.count = 1, .reusable = true}, SHIFT(57),
  [828] = {.count = 1, .reusable = true}, SHIFT(292),
  [830] = {.count = 1, .reusable = true}, SHIFT(40),
  [832] = {.count = 1, .reusable = true}, SHIFT(104),
  [834] = {.count = 1, .reusable = true}, SHIFT(305),
  [836] = {.count = 1, .reusable = true}, SHIFT(293),
  [838] = {.count = 1, .reusable = true}, SHIFT(346),
  [840] = {.count = 1, .reusable = true}, SHIFT(300),
  [842] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_string, 2),
  [844] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(293),
  [847] = {.count = 1, .reusable = true}, SHIFT(118),
  [849] = {.count = 1, .reusable = true}, SHIFT(348),
  [851] = {.count = 1, .reusable = true}, SHIFT(456),
  [853] = {.count = 1, .reusable = true}, SHIFT(93),
  [855] = {.count = 1, .reusable = true}, SHIFT(410),
  [857] = {.count = 1, .reusable = true}, SHIFT(169),
  [859] = {.count = 1, .reusable = true}, SHIFT(167),
  [861] = {.count = 1, .reusable = true}, SHIFT(173),
  [863] = {.count = 1, .reusable = true}, SHIFT(467),
  [865] = {.count = 1, .reusable = true}, SHIFT(106),
  [867] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(350),
  [870] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [872] = {.count = 1, .reusable = true}, SHIFT(466),
  [874] = {.count = 1, .reusable = true}, SHIFT(297),
  [876] = {.count = 1, .reusable = true}, SHIFT(465),
  [878] = {.count = 1, .reusable = true}, SHIFT(41),
  [880] = {.count = 1, .reusable = true}, SHIFT(336),
  [882] = {.count = 1, .reusable = true}, SHIFT(330),
  [884] = {.count = 1, .reusable = true}, SHIFT(460),
  [886] = {.count = 1, .reusable = true}, SHIFT(284),
  [888] = {.count = 1, .reusable = true}, SHIFT(451),
  [890] = {.count = 1, .reusable = true}, SHIFT(24),
  [892] = {.count = 1, .reusable = true}, SHIFT(154),
  [894] = {.count = 1, .reusable = true}, SHIFT(325),
  [896] = {.count = 1, .reusable = true}, SHIFT(226),
  [898] = {.count = 1, .reusable = true}, SHIFT(379),
  [900] = {.count = 1, .reusable = true}, SHIFT(47),
  [902] = {.count = 1, .reusable = true}, SHIFT(464),
  [904] = {.count = 1, .reusable = true}, SHIFT(233),
  [906] = {.count = 1, .reusable = true}, SHIFT(323),
  [908] = {.count = 1, .reusable = false}, SHIFT(161),
  [910] = {.count = 1, .reusable = false}, SHIFT(301),
  [912] = {.count = 1, .reusable = true}, SHIFT(328),
  [914] = {.count = 1, .reusable = true}, SHIFT(71),
  [916] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [918] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(79),
  [921] = {.count = 1, .reusable = true}, SHIFT(171),
  [923] = {.count = 1, .reusable = true}, SHIFT(178),
  [925] = {.count = 1, .reusable = true}, SHIFT(128),
  [927] = {.count = 1, .reusable = true}, SHIFT(133),
  [929] = {.count = 1, .reusable = true}, SHIFT(127),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [933] = {.count = 1, .reusable = true}, SHIFT(132),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [937] = {.count = 1, .reusable = true}, SHIFT(152),
  [939] = {.count = 1, .reusable = true}, SHIFT(289),
  [941] = {.count = 1, .reusable = true}, SHIFT(240),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [945] = {.count = 1, .reusable = true}, SHIFT(53),
  [947] = {.count = 1, .reusable = true}, SHIFT(214),
  [949] = {.count = 1, .reusable = true}, SHIFT(361),
  [951] = {.count = 1, .reusable = true}, SHIFT(79),
  [953] = {.count = 1, .reusable = true}, SHIFT(395),
  [955] = {.count = 1, .reusable = true}, SHIFT(394),
  [957] = {.count = 1, .reusable = true}, SHIFT(364),
  [959] = {.count = 1, .reusable = true}, SHIFT(216),
  [961] = {.count = 1, .reusable = true}, SHIFT(367),
  [963] = {.count = 1, .reusable = true}, SHIFT(218),
  [965] = {.count = 1, .reusable = true}, SHIFT(28),
  [967] = {.count = 1, .reusable = true}, SHIFT(30),
  [969] = {.count = 1, .reusable = true}, SHIFT(219),
  [971] = {.count = 1, .reusable = true}, SHIFT(31),
  [973] = {.count = 1, .reusable = true}, SHIFT(25),
  [975] = {.count = 1, .reusable = true}, SHIFT(417),
  [977] = {.count = 1, .reusable = true}, SHIFT(23),
  [979] = {.count = 1, .reusable = true}, SHIFT(21),
  [981] = {.count = 1, .reusable = true}, SHIFT(205),
  [983] = {.count = 1, .reusable = true}, SHIFT(263),
  [985] = {.count = 1, .reusable = true}, SHIFT(388),
  [987] = {.count = 1, .reusable = true}, SHIFT(438),
  [989] = {.count = 1, .reusable = true}, SHIFT(222),
  [991] = {.count = 1, .reusable = true}, SHIFT(282),
  [993] = {.count = 1, .reusable = true}, SHIFT(268),
  [995] = {.count = 1, .reusable = true}, SHIFT(97),
  [997] = {.count = 1, .reusable = true}, SHIFT(211),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1001] = {.count = 1, .reusable = true}, SHIFT(355),
  [1003] = {.count = 1, .reusable = true}, SHIFT(143),
  [1005] = {.count = 1, .reusable = true}, SHIFT(87),
  [1007] = {.count = 1, .reusable = true}, SHIFT(81),
  [1009] = {.count = 1, .reusable = true}, SHIFT(82),
  [1011] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1013] = {.count = 1, .reusable = true}, SHIFT(49),
  [1015] = {.count = 1, .reusable = true}, SHIFT(383),
  [1017] = {.count = 1, .reusable = true}, SHIFT(347),
  [1019] = {.count = 1, .reusable = true}, SHIFT(353),
  [1021] = {.count = 1, .reusable = true}, SHIFT(13),
  [1023] = {.count = 1, .reusable = true}, SHIFT(12),
  [1025] = {.count = 1, .reusable = true}, SHIFT(398),
  [1027] = {.count = 1, .reusable = true}, SHIFT(60),
  [1029] = {.count = 1, .reusable = true}, SHIFT(59),
  [1031] = {.count = 1, .reusable = true}, SHIFT(64),
  [1033] = {.count = 1, .reusable = true}, SHIFT(399),
  [1035] = {.count = 1, .reusable = true}, SHIFT(262),
  [1037] = {.count = 1, .reusable = true}, SHIFT(259),
  [1039] = {.count = 1, .reusable = true}, SHIFT(54),
  [1041] = {.count = 1, .reusable = true}, SHIFT(256),
  [1043] = {.count = 1, .reusable = true}, SHIFT(255),
  [1045] = {.count = 1, .reusable = true}, SHIFT(331),
  [1047] = {.count = 1, .reusable = true}, SHIFT(295),
  [1049] = {.count = 1, .reusable = true}, SHIFT(339),
  [1051] = {.count = 1, .reusable = true}, SHIFT(302),
  [1053] = {.count = 1, .reusable = true}, SHIFT(181),
  [1055] = {.count = 1, .reusable = true}, SHIFT(51),
  [1057] = {.count = 1, .reusable = true}, SHIFT(11),
  [1059] = {.count = 1, .reusable = true}, SHIFT(296),
  [1061] = {.count = 1, .reusable = true}, SHIFT(298),
  [1063] = {.count = 1, .reusable = true}, SHIFT(385),
  [1065] = {.count = 1, .reusable = true}, SHIFT(215),
  [1067] = {.count = 1, .reusable = true}, SHIFT(365),
  [1069] = {.count = 1, .reusable = true}, SHIFT(343),
  [1071] = {.count = 1, .reusable = true}, SHIFT(344),
  [1073] = {.count = 1, .reusable = true}, SHIFT(345),
  [1075] = {.count = 1, .reusable = true}, SHIFT(366),
  [1077] = {.count = 1, .reusable = true}, SHIFT(225),
  [1079] = {.count = 1, .reusable = true}, SHIFT(265),
  [1081] = {.count = 1, .reusable = true}, SHIFT(342),
  [1083] = {.count = 1, .reusable = true}, SHIFT(238),
  [1085] = {.count = 1, .reusable = true}, SHIFT(19),
  [1087] = {.count = 1, .reusable = true}, SHIFT(43),
  [1089] = {.count = 1, .reusable = true}, SHIFT(44),
  [1091] = {.count = 1, .reusable = true}, SHIFT(46),
  [1093] = {.count = 1, .reusable = true}, SHIFT(374),
  [1095] = {.count = 1, .reusable = true}, SHIFT(424),
  [1097] = {.count = 1, .reusable = true}, SHIFT(100),
  [1099] = {.count = 1, .reusable = true}, SHIFT(291),
  [1101] = {.count = 1, .reusable = true}, SHIFT(290),
  [1103] = {.count = 1, .reusable = true}, SHIFT(288),
  [1105] = {.count = 1, .reusable = true}, SHIFT(382),
  [1107] = {.count = 1, .reusable = true}, SHIFT(206),
  [1109] = {.count = 1, .reusable = true}, SHIFT(286),
  [1111] = {.count = 1, .reusable = true}, SHIFT(108),
  [1113] = {.count = 1, .reusable = true}, SHIFT(112),
  [1115] = {.count = 1, .reusable = true}, SHIFT(94),
  [1117] = {.count = 1, .reusable = true}, SHIFT(378),
  [1119] = {.count = 1, .reusable = true}, SHIFT(228),
  [1121] = {.count = 1, .reusable = true}, SHIFT(5),
  [1123] = {.count = 1, .reusable = true}, SHIFT(48),
  [1125] = {.count = 1, .reusable = true}, SHIFT(371),
  [1127] = {.count = 1, .reusable = true}, SHIFT(294),
  [1129] = {.count = 1, .reusable = true}, SHIFT(387),
  [1131] = {.count = 1, .reusable = true}, SHIFT(102),
  [1133] = {.count = 1, .reusable = true}, SHIFT(244),
  [1135] = {.count = 1, .reusable = true}, SHIFT(372),
  [1137] = {.count = 1, .reusable = true}, SHIFT(428),
  [1139] = {.count = 1, .reusable = true}, SHIFT(429),
  [1141] = {.count = 1, .reusable = true}, SHIFT(373),
  [1143] = {.count = 1, .reusable = true}, SHIFT(264),
  [1145] = {.count = 1, .reusable = true}, SHIFT(434),
  [1147] = {.count = 1, .reusable = true}, SHIFT(435),
  [1149] = {.count = 1, .reusable = true}, SHIFT(354),
  [1151] = {.count = 1, .reusable = true}, SHIFT(266),
  [1153] = {.count = 1, .reusable = true}, SHIFT(440),
  [1155] = {.count = 1, .reusable = true}, SHIFT(441),
  [1157] = {.count = 1, .reusable = true}, SHIFT(411),
  [1159] = {.count = 1, .reusable = true}, SHIFT(270),
  [1161] = {.count = 1, .reusable = true}, SHIFT(280),
  [1163] = {.count = 1, .reusable = true}, SHIFT(281),
  [1165] = {.count = 1, .reusable = true}, SHIFT(283),
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
