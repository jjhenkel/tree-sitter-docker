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
#define STATE_COUNT 479
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 15

enum {
  aux_sym_add_token1 = 1,
  aux_sym_arg_token1 = 2,
  anon_sym_EQ = 3,
  aux_sym_cmd_token1 = 4,
  aux_sym_copy_token1 = 5,
  aux_sym_entrypoint_token1 = 6,
  aux_sym_env_token1 = 7,
  aux_sym_expose_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_from_token1 = 10,
  anon_sym_DASH_DASHplatform_EQ = 11,
  anon_sym_COLON = 12,
  anon_sym_AT = 13,
  anon_sym_sha256_COLON = 14,
  aux_sym_from_token2 = 15,
  aux_sym_healthcheck_token1 = 16,
  aux_sym_label_token1 = 17,
  aux_sym_maintainer_token1 = 18,
  aux_sym_onbuild_token1 = 19,
  aux_sym_run_token1 = 20,
  aux_sym_shell_token1 = 21,
  aux_sym_stopsignal_token1 = 22,
  aux_sym_user_token1 = 23,
  anon_sym_DOLLAR = 24,
  aux_sym_volume_token1 = 25,
  aux_sym_workdir_token1 = 26,
  aux_sym_workdir_token2 = 27,
  aux_sym_workdir_token3 = 28,
  aux_sym_workdir_token4 = 29,
  aux_sym_workdir_token5 = 30,
  sym_arg_name = 31,
  anon_sym_DASH = 32,
  aux_sym__port_part_token1 = 33,
  anon_sym_SLASH = 34,
  aux_sym_port_protocol_token1 = 35,
  aux_sym_port_protocol_token2 = 36,
  aux_sym_platform_token1 = 37,
  aux_sym__repository_start_token1 = 38,
  aux_sym__repository_start_token2 = 39,
  aux_sym__repository_start_token3 = 40,
  aux_sym__repository_start_token4 = 41,
  aux_sym__repository_start_token5 = 42,
  aux_sym__repository_start_token6 = 43,
  aux_sym__repository_start_token7 = 44,
  aux_sym__repository_start_token8 = 45,
  aux_sym__repository_start_token9 = 46,
  aux_sym__repository_start_token10 = 47,
  aux_sym__repository_start_token11 = 48,
  aux_sym__repository_start_token12 = 49,
  aux_sym__repository_start_token13 = 50,
  aux_sym__repository_start_token14 = 51,
  aux_sym__repository_start_token15 = 52,
  aux_sym__repository_start_token16 = 53,
  sym_label_key = 54,
  aux_sym_label_value_token1 = 55,
  aux_sym_label_value_token2 = 56,
  aux_sym_label_value_token3 = 57,
  sym_signal_num = 58,
  aux_sym_signal_name_token1 = 59,
  aux_sym_signal_name_token2 = 60,
  aux_sym_user_name_token1 = 61,
  sym_path = 62,
  aux_sym__anything_token1 = 63,
  anon_sym_LBRACE = 64,
  anon_sym_RBRACE = 65,
  anon_sym_COLON_DASH = 66,
  aux_sym_variable_default_value_token1 = 67,
  anon_sym_COLON_PLUS = 68,
  sym__docker_variable = 69,
  sym_template_expr_curly_braces = 70,
  sym_template_expr_percent_signs = 71,
  aux_sym_template_expr_less_than_equals_token1 = 72,
  aux_sym_template_expr_less_than_equals_token2 = 73,
  aux_sym_template_expr_less_than_equals_token3 = 74,
  sym__space = 75,
  sym__blank_line = 76,
  sym__space_no_newline = 77,
  sym_comment = 78,
  sym_line_continuation = 79,
  anon_sym_COMMA = 80,
  anon_sym_RBRACK = 81,
  sym__json_prefix = 82,
  aux_sym__json_string_token1 = 83,
  sym__json_escape_sequence = 84,
  sym_dockerfile = 85,
  sym__directive = 86,
  sym_add = 87,
  sym_arg = 88,
  sym_cmd = 89,
  sym_copy = 90,
  sym_entrypoint = 91,
  sym_env = 92,
  sym_expose = 93,
  sym_from = 94,
  sym_healthcheck = 95,
  sym_label = 96,
  sym_maintainer = 97,
  sym_onbuild = 98,
  sym_run = 99,
  sym_shell = 100,
  sym_stopsignal = 101,
  sym_user = 102,
  sym_volume = 103,
  sym_workdir = 104,
  sym_arg_default = 105,
  sym__port_spec = 106,
  sym_mapped_port = 107,
  sym_mapped_no_lhs = 108,
  sym__port = 109,
  sym_port = 110,
  sym_port_range = 111,
  sym__port_part = 112,
  sym_port_protocol = 113,
  sym_platform = 114,
  sym_repository = 115,
  sym__repository_start = 116,
  sym__repository_continued = 117,
  sym_image = 118,
  sym_tag = 119,
  sym_digest = 120,
  sym_as_name = 121,
  aux_sym__labels = 122,
  sym_label_pair = 123,
  sym_label_value = 124,
  sym_signal_name = 125,
  sym_user_name = 126,
  sym_user_group = 127,
  sym_user_id = 128,
  sym_user_group_id = 129,
  aux_sym__paths = 130,
  aux_sym__anything = 131,
  sym_docker_variable = 132,
  sym_variable_default_value = 133,
  sym_variable_this_or_null = 134,
  sym_template_expr_less_than_equals = 135,
  sym_json_array = 136,
  sym__anything_or_json_array = 137,
  sym__json_value = 138,
  aux_sym__json_string = 139,
  aux_sym_dockerfile_repeat1 = 140,
  aux_sym_expose_repeat1 = 141,
  aux_sym_workdir_repeat1 = 142,
  aux_sym_repository_repeat1 = 143,
  aux_sym__repository_start_repeat1 = 144,
  aux_sym__repository_start_repeat2 = 145,
  aux_sym__repository_start_repeat3 = 146,
  aux_sym__repository_start_repeat4 = 147,
  aux_sym_label_value_repeat1 = 148,
  aux_sym_template_expr_less_than_equals_repeat1 = 149,
  aux_sym_json_array_repeat1 = 150,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_add_token1] = "add_token1",
  [aux_sym_arg_token1] = "arg_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_cmd_token1] = "cmd_token1",
  [aux_sym_copy_token1] = "copy_token1",
  [aux_sym_entrypoint_token1] = "entrypoint_token1",
  [aux_sym_env_token1] = "env_token1",
  [aux_sym_expose_token1] = "expose_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_from_token1] = "from_token1",
  [anon_sym_DASH_DASHplatform_EQ] = "--platform=",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_sha256_COLON] = "sha256:",
  [aux_sym_from_token2] = "from_token2",
  [aux_sym_healthcheck_token1] = "healthcheck_token1",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_maintainer_token1] = "maintainer_token1",
  [aux_sym_onbuild_token1] = "onbuild_token1",
  [aux_sym_run_token1] = "run_token1",
  [aux_sym_shell_token1] = "shell_token1",
  [aux_sym_stopsignal_token1] = "stopsignal_token1",
  [aux_sym_user_token1] = "user_token1",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_volume_token1] = "volume_token1",
  [aux_sym_workdir_token1] = "workdir_token1",
  [aux_sym_workdir_token2] = "workdir_token2",
  [aux_sym_workdir_token3] = "workdir_token3",
  [aux_sym_workdir_token4] = "workdir_token4",
  [aux_sym_workdir_token5] = "workdir_token5",
  [sym_arg_name] = "arg_name",
  [anon_sym_DASH] = "-",
  [aux_sym__port_part_token1] = "_port_part_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym_port_protocol_token1] = "port_protocol_token1",
  [aux_sym_port_protocol_token2] = "port_protocol_token2",
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
  [sym_label_key] = "label_key",
  [aux_sym_label_value_token1] = "label_value_token1",
  [aux_sym_label_value_token2] = "label_value_token2",
  [aux_sym_label_value_token3] = "label_value_token3",
  [sym_signal_num] = "signal_num",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [aux_sym_signal_name_token2] = "signal_name_token2",
  [aux_sym_user_name_token1] = "user_name_token1",
  [sym_path] = "path",
  [aux_sym__anything_token1] = "_anything_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_DASH] = ":-",
  [aux_sym_variable_default_value_token1] = "variable_default_value_token1",
  [anon_sym_COLON_PLUS] = ":+",
  [sym__docker_variable] = "_docker_variable",
  [sym_template_expr_curly_braces] = "template_expr_curly_braces",
  [sym_template_expr_percent_signs] = "template_expr_percent_signs",
  [aux_sym_template_expr_less_than_equals_token1] = "template_expr_less_than_equals_token1",
  [aux_sym_template_expr_less_than_equals_token2] = "template_expr_less_than_equals_token2",
  [aux_sym_template_expr_less_than_equals_token3] = "template_expr_less_than_equals_token3",
  [sym__space] = "_space",
  [sym__blank_line] = "_blank_line",
  [sym__space_no_newline] = "_space_no_newline",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym__json_prefix] = "_json_prefix",
  [aux_sym__json_string_token1] = "_json_string_token1",
  [sym__json_escape_sequence] = "_json_escape_sequence",
  [sym_dockerfile] = "dockerfile",
  [sym__directive] = "_directive",
  [sym_add] = "add",
  [sym_arg] = "arg",
  [sym_cmd] = "cmd",
  [sym_copy] = "copy",
  [sym_entrypoint] = "entrypoint",
  [sym_env] = "env",
  [sym_expose] = "expose",
  [sym_from] = "from",
  [sym_healthcheck] = "healthcheck",
  [sym_label] = "label",
  [sym_maintainer] = "maintainer",
  [sym_onbuild] = "onbuild",
  [sym_run] = "run",
  [sym_shell] = "shell",
  [sym_stopsignal] = "stopsignal",
  [sym_user] = "user",
  [sym_volume] = "volume",
  [sym_workdir] = "workdir",
  [sym_arg_default] = "arg_default",
  [sym__port_spec] = "_port_spec",
  [sym_mapped_port] = "mapped_port",
  [sym_mapped_no_lhs] = "mapped_no_lhs",
  [sym__port] = "_port",
  [sym_port] = "port",
  [sym_port_range] = "port_range",
  [sym__port_part] = "_port_part",
  [sym_port_protocol] = "port_protocol",
  [sym_platform] = "platform",
  [sym_repository] = "repository",
  [sym__repository_start] = "_repository_start",
  [sym__repository_continued] = "_repository_continued",
  [sym_image] = "image",
  [sym_tag] = "tag",
  [sym_digest] = "digest",
  [sym_as_name] = "as_name",
  [aux_sym__labels] = "_labels",
  [sym_label_pair] = "label_pair",
  [sym_label_value] = "label_value",
  [sym_signal_name] = "signal_name",
  [sym_user_name] = "user_name",
  [sym_user_group] = "user_group",
  [sym_user_id] = "user_id",
  [sym_user_group_id] = "user_group_id",
  [aux_sym__paths] = "_paths",
  [aux_sym__anything] = "_anything",
  [sym_docker_variable] = "docker_variable",
  [sym_variable_default_value] = "variable_default_value",
  [sym_variable_this_or_null] = "variable_this_or_null",
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [sym_json_array] = "json_array",
  [sym__anything_or_json_array] = "_anything_or_json_array",
  [sym__json_value] = "_json_value",
  [aux_sym__json_string] = "_json_string",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_workdir_repeat1] = "workdir_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_label_value_repeat1] = "label_value_repeat1",
  [aux_sym_template_expr_less_than_equals_repeat1] = "template_expr_less_than_equals_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_add_token1] = {
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
  [aux_sym_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_token1] = {
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
  [aux_sym_from_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASHplatform_EQ] = {
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
  [aux_sym_from_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onbuild_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_token1] = {
    .visible = false,
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
  [aux_sym_workdir_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__port_part_token1] = {
    .visible = false,
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
  [sym_label_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_label_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_value_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_signal_num] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_signal_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__anything_token1] = {
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
  [sym__docker_variable] = {
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
  [sym__space_no_newline] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__json_prefix] = {
    .visible = false,
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
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_env] = {
    .visible = true,
    .named = true,
  },
  [sym_expose] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild] = {
    .visible = true,
    .named = true,
  },
  [sym_run] = {
    .visible = true,
    .named = true,
  },
  [sym_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
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
  [sym_arg_default] = {
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
  [aux_sym__labels] = {
    .visible = false,
    .named = false,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_label_value] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_name] = {
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
  [aux_sym__paths] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__anything] = {
    .visible = false,
    .named = false,
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
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym__anything_or_json_array] = {
    .visible = false,
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
  [aux_sym_expose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_repeat1] = {
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
  [aux_sym_label_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_expr_less_than_equals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
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
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(902);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == ',') ADVANCE(899);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(900);
      if (lookahead == '{') ADVANCE(871);
      if (lookahead == '}') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(902);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(143);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(687);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(642);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(628);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(629);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(669);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(688);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(674);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(676);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(789);
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
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(789);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(789);
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
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(789);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(143);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(889);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(143);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(889);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(451);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(425);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(451);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(451);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(425);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(451);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(451);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(425);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(451);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(378);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(378);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(378);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
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
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
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
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
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
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
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
          lookahead == '') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
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
          lookahead == '') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
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
          lookahead == '') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(211);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(243);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(806);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(799);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(803);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(807);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(805);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(790);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead != 0) ADVANCE(795);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(160);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(59);
      if (lookahead == ',') ADVANCE(899);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(84);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(900);
      if (lookahead == '}') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(902);
      if (lookahead == ',') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(900);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(902);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(902);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(890);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(890);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0) ADVANCE(795);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0) ADVANCE(795);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(883);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(883);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(879);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(881);
      if (lookahead == '\\') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(881);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(874);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(875);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(898);
      if (lookahead == '#') ADVANCE(809);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(898);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(898);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(703);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(898);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(703);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(789);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0) ADVANCE(789);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '}') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(713);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(451);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(877);
      if (lookahead == '{') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(877);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '$') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(295);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(809);
      END_STATE();
    case 57:
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(621);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(621);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(621);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead == '"') ADVANCE(901);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead == '"') ADVANCE(901);
      if (lookahead == '\\') ADVANCE(793);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(809);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead == '"') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(793);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(155);
      END_STATE();
    case 65:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(620);
      END_STATE();
    case 66:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(625);
      END_STATE();
    case 67:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(623);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(711);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 107:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 117:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 153:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 155:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(809);
      END_STATE();
    case 156:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(809);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(703);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(809);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(701);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '$') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(206);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '5') ADVANCE(280);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '6') ADVANCE(281);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '%') ADVANCE(616);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '{') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(294);
      END_STATE();
    case 295:
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
          lookahead != '}') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
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
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(463);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
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
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
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
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
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
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(595);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(556);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(549);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(535);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(538);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(596);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(558);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(581);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(584);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(597);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(588);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(578);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(566);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(554);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(526);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(582);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(526);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(599);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(603);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(605);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(606);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(608);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(609);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(611);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(613);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(615);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(617);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(619);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(622);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(624);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(696);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(653);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(643);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(637);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(704);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(732);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(726);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(782);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(792);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(792);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(792);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(791);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(811);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(819);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(823);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(819);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(870);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(845);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(794);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(810);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(810);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(810);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(810);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(810);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(825);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(810);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(836);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(810);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(810);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(810);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(833);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(810);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(810);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(810);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(810);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(810);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(810);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(810);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(849);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(810);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(818);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(810);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(822);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(839);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(810);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(810);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(820);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(810);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(810);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(810);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(810);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(810);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(838);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(810);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(810);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(843);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(810);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(868);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(810);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(810);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(810);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(853);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(810);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(810);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(810);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(810);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(810);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(810);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(810);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(810);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(810);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(834);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(810);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(844);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(810);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(810);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 870:
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
          lookahead != 'v') ADVANCE(810);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(860);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(875);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(875);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 877:
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
          lookahead != '}') ADVANCE(877);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(879);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(881);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(881);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(883);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(888);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '#') ADVANCE(794);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(625);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(623);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(896);
      if (lookahead != 0) ADVANCE(702);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(896);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(898);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 903:
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 5},
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
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 52},
  [196] = {.lex_state = 52},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 53},
  [199] = {.lex_state = 53},
  [200] = {.lex_state = 53},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 53},
  [203] = {.lex_state = 52},
  [204] = {.lex_state = 53},
  [205] = {.lex_state = 53},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 52},
  [208] = {.lex_state = 52},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 52},
  [211] = {.lex_state = 52},
  [212] = {.lex_state = 52},
  [213] = {.lex_state = 52},
  [214] = {.lex_state = 52},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 52},
  [221] = {.lex_state = 52},
  [222] = {.lex_state = 52},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 52},
  [225] = {.lex_state = 52},
  [226] = {.lex_state = 52},
  [227] = {.lex_state = 52},
  [228] = {.lex_state = 52},
  [229] = {.lex_state = 52},
  [230] = {.lex_state = 52},
  [231] = {.lex_state = 52},
  [232] = {.lex_state = 52},
  [233] = {.lex_state = 52},
  [234] = {.lex_state = 52},
  [235] = {.lex_state = 52},
  [236] = {.lex_state = 52},
  [237] = {.lex_state = 52},
  [238] = {.lex_state = 52},
  [239] = {.lex_state = 52},
  [240] = {.lex_state = 52},
  [241] = {.lex_state = 21},
  [242] = {.lex_state = 52},
  [243] = {.lex_state = 52},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 21},
  [246] = {.lex_state = 21},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 44},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 48},
  [251] = {.lex_state = 51},
  [252] = {.lex_state = 27},
  [253] = {.lex_state = 28},
  [254] = {.lex_state = 28},
  [255] = {.lex_state = 28},
  [256] = {.lex_state = 27},
  [257] = {.lex_state = 21},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 44},
  [261] = {.lex_state = 28},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 28},
  [264] = {.lex_state = 28},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 28},
  [267] = {.lex_state = 21},
  [268] = {.lex_state = 49},
  [269] = {.lex_state = 28},
  [270] = {.lex_state = 49},
  [271] = {.lex_state = 51},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 50},
  [274] = {.lex_state = 50},
  [275] = {.lex_state = 28},
  [276] = {.lex_state = 50},
  [277] = {.lex_state = 48},
  [278] = {.lex_state = 51},
  [279] = {.lex_state = 48},
  [280] = {.lex_state = 28},
  [281] = {.lex_state = 44},
  [282] = {.lex_state = 44},
  [283] = {.lex_state = 44},
  [284] = {.lex_state = 44},
  [285] = {.lex_state = 44},
  [286] = {.lex_state = 44},
  [287] = {.lex_state = 44},
  [288] = {.lex_state = 21},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 51},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 49},
  [293] = {.lex_state = 50},
  [294] = {.lex_state = 21},
  [295] = {.lex_state = 49},
  [296] = {.lex_state = 49},
  [297] = {.lex_state = 42},
  [298] = {.lex_state = 40},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 42},
  [301] = {.lex_state = 49},
  [302] = {.lex_state = 48},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 23},
  [305] = {.lex_state = 42},
  [306] = {.lex_state = 54},
  [307] = {.lex_state = 54},
  [308] = {.lex_state = 54},
  [309] = {.lex_state = 54},
  [310] = {.lex_state = 54},
  [311] = {.lex_state = 54},
  [312] = {.lex_state = 21},
  [313] = {.lex_state = 54},
  [314] = {.lex_state = 54},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 41},
  [317] = {.lex_state = 21},
  [318] = {.lex_state = 24},
  [319] = {.lex_state = 54},
  [320] = {.lex_state = 47},
  [321] = {.lex_state = 29},
  [322] = {.lex_state = 21},
  [323] = {.lex_state = 54},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 55},
  [327] = {.lex_state = 54},
  [328] = {.lex_state = 54},
  [329] = {.lex_state = 54},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 21},
  [332] = {.lex_state = 21},
  [333] = {.lex_state = 54},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 21},
  [336] = {.lex_state = 21},
  [337] = {.lex_state = 54},
  [338] = {.lex_state = 54},
  [339] = {.lex_state = 21},
  [340] = {.lex_state = 21},
  [341] = {.lex_state = 54},
  [342] = {.lex_state = 21},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 54},
  [345] = {.lex_state = 30},
  [346] = {.lex_state = 21},
  [347] = {.lex_state = 21},
  [348] = {.lex_state = 21},
  [349] = {.lex_state = 44},
  [350] = {.lex_state = 26},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 21},
  [353] = {.lex_state = 21},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 21},
  [356] = {.lex_state = 24},
  [357] = {.lex_state = 21},
  [358] = {.lex_state = 21},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 26},
  [361] = {.lex_state = 21},
  [362] = {.lex_state = 21},
  [363] = {.lex_state = 31},
  [364] = {.lex_state = 32},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 21},
  [367] = {.lex_state = 21},
  [368] = {.lex_state = 44},
  [369] = {.lex_state = 25},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 21},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 25},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 44},
  [376] = {.lex_state = 25},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 21},
  [379] = {.lex_state = 25},
  [380] = {.lex_state = 21},
  [381] = {.lex_state = 25},
  [382] = {.lex_state = 25},
  [383] = {.lex_state = 21},
  [384] = {.lex_state = 33},
  [385] = {.lex_state = 33},
  [386] = {.lex_state = 21},
  [387] = {.lex_state = 44},
  [388] = {.lex_state = 25},
  [389] = {.lex_state = 21},
  [390] = {.lex_state = 32},
  [391] = {.lex_state = 31},
  [392] = {.lex_state = 21},
  [393] = {.lex_state = 31},
  [394] = {.lex_state = 32},
  [395] = {.lex_state = 31},
  [396] = {.lex_state = 21},
  [397] = {.lex_state = 44},
  [398] = {.lex_state = 21},
  [399] = {.lex_state = 32},
  [400] = {.lex_state = 25},
  [401] = {.lex_state = 25},
  [402] = {.lex_state = 54},
  [403] = {.lex_state = 21},
  [404] = {.lex_state = 21},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 21},
  [407] = {.lex_state = 44},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 44},
  [410] = {.lex_state = 21},
  [411] = {.lex_state = 46},
  [412] = {.lex_state = 21},
  [413] = {.lex_state = 32},
  [414] = {.lex_state = 31},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 21},
  [417] = {.lex_state = 44},
  [418] = {.lex_state = 21},
  [419] = {.lex_state = 44},
  [420] = {.lex_state = 32},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 44},
  [423] = {.lex_state = 21},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 45},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 25},
  [428] = {.lex_state = 25},
  [429] = {.lex_state = 25},
  [430] = {.lex_state = 25},
  [431] = {.lex_state = 25},
  [432] = {.lex_state = 25},
  [433] = {.lex_state = 32},
  [434] = {.lex_state = 31},
  [435] = {.lex_state = 21},
  [436] = {.lex_state = 25},
  [437] = {.lex_state = 25},
  [438] = {.lex_state = 44},
  [439] = {.lex_state = 21},
  [440] = {.lex_state = 44},
  [441] = {.lex_state = 21},
  [442] = {.lex_state = 25},
  [443] = {.lex_state = 21},
  [444] = {.lex_state = 44},
  [445] = {.lex_state = 21},
  [446] = {.lex_state = 44},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 25},
  [449] = {.lex_state = 44},
  [450] = {.lex_state = 44},
  [451] = {.lex_state = 21},
  [452] = {.lex_state = 44},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 25},
  [455] = {.lex_state = 44},
  [456] = {.lex_state = 25},
  [457] = {.lex_state = 44},
  [458] = {.lex_state = 25},
  [459] = {.lex_state = 44},
  [460] = {.lex_state = 25},
  [461] = {.lex_state = 44},
  [462] = {.lex_state = 25},
  [463] = {.lex_state = 54},
  [464] = {.lex_state = 31},
  [465] = {.lex_state = 32},
  [466] = {.lex_state = 25},
  [467] = {.lex_state = 54},
  [468] = {.lex_state = 31},
  [469] = {.lex_state = 32},
  [470] = {.lex_state = 25},
  [471] = {.lex_state = 54},
  [472] = {.lex_state = 31},
  [473] = {.lex_state = 32},
  [474] = {.lex_state = 25},
  [475] = {.lex_state = 54},
  [476] = {.lex_state = 54},
  [477] = {.lex_state = 54},
  [478] = {.lex_state = 54},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_label_value_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__json_string_token1] = ACTIONS(1),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(426),
    [sym__directive] = STATE(188),
    [sym_add] = STATE(188),
    [sym_arg] = STATE(188),
    [sym_cmd] = STATE(188),
    [sym_copy] = STATE(188),
    [sym_entrypoint] = STATE(188),
    [sym_env] = STATE(188),
    [sym_expose] = STATE(188),
    [sym_from] = STATE(188),
    [sym_healthcheck] = STATE(188),
    [sym_label] = STATE(188),
    [sym_maintainer] = STATE(188),
    [sym_onbuild] = STATE(188),
    [sym_run] = STATE(188),
    [sym_shell] = STATE(188),
    [sym_stopsignal] = STATE(188),
    [sym_user] = STATE(188),
    [sym_volume] = STATE(188),
    [sym_workdir] = STATE(188),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_add_token1] = ACTIONS(9),
    [aux_sym_arg_token1] = ACTIONS(11),
    [aux_sym_cmd_token1] = ACTIONS(13),
    [aux_sym_copy_token1] = ACTIONS(15),
    [aux_sym_entrypoint_token1] = ACTIONS(17),
    [aux_sym_env_token1] = ACTIONS(19),
    [aux_sym_expose_token1] = ACTIONS(21),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym_healthcheck_token1] = ACTIONS(25),
    [aux_sym_label_token1] = ACTIONS(27),
    [aux_sym_maintainer_token1] = ACTIONS(29),
    [aux_sym_onbuild_token1] = ACTIONS(31),
    [aux_sym_run_token1] = ACTIONS(33),
    [aux_sym_shell_token1] = ACTIONS(35),
    [aux_sym_stopsignal_token1] = ACTIONS(37),
    [aux_sym_user_token1] = ACTIONS(39),
    [aux_sym_volume_token1] = ACTIONS(41),
    [aux_sym_workdir_token1] = ACTIONS(43),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [2] = {
    [sym__directive] = STATE(188),
    [sym_add] = STATE(188),
    [sym_arg] = STATE(188),
    [sym_cmd] = STATE(188),
    [sym_copy] = STATE(188),
    [sym_entrypoint] = STATE(188),
    [sym_env] = STATE(188),
    [sym_expose] = STATE(188),
    [sym_from] = STATE(188),
    [sym_healthcheck] = STATE(188),
    [sym_label] = STATE(188),
    [sym_maintainer] = STATE(188),
    [sym_onbuild] = STATE(188),
    [sym_run] = STATE(188),
    [sym_shell] = STATE(188),
    [sym_stopsignal] = STATE(188),
    [sym_user] = STATE(188),
    [sym_volume] = STATE(188),
    [sym_workdir] = STATE(188),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_add_token1] = ACTIONS(9),
    [aux_sym_arg_token1] = ACTIONS(11),
    [aux_sym_cmd_token1] = ACTIONS(13),
    [aux_sym_copy_token1] = ACTIONS(15),
    [aux_sym_entrypoint_token1] = ACTIONS(17),
    [aux_sym_env_token1] = ACTIONS(19),
    [aux_sym_expose_token1] = ACTIONS(21),
    [aux_sym_from_token1] = ACTIONS(23),
    [aux_sym_healthcheck_token1] = ACTIONS(25),
    [aux_sym_label_token1] = ACTIONS(27),
    [aux_sym_maintainer_token1] = ACTIONS(29),
    [aux_sym_onbuild_token1] = ACTIONS(31),
    [aux_sym_run_token1] = ACTIONS(33),
    [aux_sym_shell_token1] = ACTIONS(35),
    [aux_sym_stopsignal_token1] = ACTIONS(37),
    [aux_sym_user_token1] = ACTIONS(39),
    [aux_sym_volume_token1] = ACTIONS(41),
    [aux_sym_workdir_token1] = ACTIONS(43),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [3] = {
    [sym__directive] = STATE(188),
    [sym_add] = STATE(188),
    [sym_arg] = STATE(188),
    [sym_cmd] = STATE(188),
    [sym_copy] = STATE(188),
    [sym_entrypoint] = STATE(188),
    [sym_env] = STATE(188),
    [sym_expose] = STATE(188),
    [sym_from] = STATE(188),
    [sym_healthcheck] = STATE(188),
    [sym_label] = STATE(188),
    [sym_maintainer] = STATE(188),
    [sym_onbuild] = STATE(188),
    [sym_run] = STATE(188),
    [sym_shell] = STATE(188),
    [sym_stopsignal] = STATE(188),
    [sym_user] = STATE(188),
    [sym_volume] = STATE(188),
    [sym_workdir] = STATE(188),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_add_token1] = ACTIONS(51),
    [aux_sym_arg_token1] = ACTIONS(54),
    [aux_sym_cmd_token1] = ACTIONS(57),
    [aux_sym_copy_token1] = ACTIONS(60),
    [aux_sym_entrypoint_token1] = ACTIONS(63),
    [aux_sym_env_token1] = ACTIONS(66),
    [aux_sym_expose_token1] = ACTIONS(69),
    [aux_sym_from_token1] = ACTIONS(72),
    [aux_sym_healthcheck_token1] = ACTIONS(75),
    [aux_sym_label_token1] = ACTIONS(78),
    [aux_sym_maintainer_token1] = ACTIONS(81),
    [aux_sym_onbuild_token1] = ACTIONS(84),
    [aux_sym_run_token1] = ACTIONS(87),
    [aux_sym_shell_token1] = ACTIONS(90),
    [aux_sym_stopsignal_token1] = ACTIONS(93),
    [aux_sym_user_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(99),
    [aux_sym_workdir_token1] = ACTIONS(102),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(105),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [4] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(88),
    [sym_port] = STATE(88),
    [sym_port_range] = STATE(88),
    [sym__port_part] = STATE(67),
    [aux_sym_expose_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_add_token1] = ACTIONS(108),
    [aux_sym_arg_token1] = ACTIONS(108),
    [aux_sym_cmd_token1] = ACTIONS(108),
    [aux_sym_copy_token1] = ACTIONS(108),
    [aux_sym_entrypoint_token1] = ACTIONS(108),
    [aux_sym_env_token1] = ACTIONS(108),
    [aux_sym_expose_token1] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [aux_sym_from_token1] = ACTIONS(108),
    [aux_sym_healthcheck_token1] = ACTIONS(108),
    [aux_sym_label_token1] = ACTIONS(108),
    [aux_sym_maintainer_token1] = ACTIONS(108),
    [aux_sym_onbuild_token1] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(108),
    [aux_sym_shell_token1] = ACTIONS(108),
    [aux_sym_stopsignal_token1] = ACTIONS(108),
    [aux_sym_user_token1] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [aux_sym_volume_token1] = ACTIONS(108),
    [aux_sym_workdir_token1] = ACTIONS(108),
    [aux_sym__port_part_token1] = ACTIONS(116),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(108),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(88),
    [sym_port] = STATE(88),
    [sym_port_range] = STATE(88),
    [sym__port_part] = STATE(67),
    [aux_sym_expose_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_add_token1] = ACTIONS(119),
    [aux_sym_arg_token1] = ACTIONS(119),
    [aux_sym_cmd_token1] = ACTIONS(119),
    [aux_sym_copy_token1] = ACTIONS(119),
    [aux_sym_entrypoint_token1] = ACTIONS(119),
    [aux_sym_env_token1] = ACTIONS(119),
    [aux_sym_expose_token1] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [aux_sym_from_token1] = ACTIONS(119),
    [aux_sym_healthcheck_token1] = ACTIONS(119),
    [aux_sym_label_token1] = ACTIONS(119),
    [aux_sym_maintainer_token1] = ACTIONS(119),
    [aux_sym_onbuild_token1] = ACTIONS(119),
    [aux_sym_run_token1] = ACTIONS(119),
    [aux_sym_shell_token1] = ACTIONS(119),
    [aux_sym_stopsignal_token1] = ACTIONS(119),
    [aux_sym_user_token1] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym_volume_token1] = ACTIONS(119),
    [aux_sym_workdir_token1] = ACTIONS(119),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(119),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [6] = {
    [sym_add] = STATE(171),
    [sym_arg] = STATE(171),
    [sym_cmd] = STATE(171),
    [sym_copy] = STATE(171),
    [sym_entrypoint] = STATE(171),
    [sym_env] = STATE(171),
    [sym_expose] = STATE(171),
    [sym_healthcheck] = STATE(171),
    [sym_label] = STATE(171),
    [sym_run] = STATE(171),
    [sym_shell] = STATE(171),
    [sym_stopsignal] = STATE(171),
    [sym_user] = STATE(171),
    [sym_volume] = STATE(171),
    [sym_workdir] = STATE(171),
    [aux_sym_add_token1] = ACTIONS(9),
    [aux_sym_arg_token1] = ACTIONS(11),
    [aux_sym_cmd_token1] = ACTIONS(13),
    [aux_sym_copy_token1] = ACTIONS(15),
    [aux_sym_entrypoint_token1] = ACTIONS(17),
    [aux_sym_env_token1] = ACTIONS(19),
    [aux_sym_expose_token1] = ACTIONS(21),
    [aux_sym_healthcheck_token1] = ACTIONS(25),
    [aux_sym_label_token1] = ACTIONS(27),
    [aux_sym_run_token1] = ACTIONS(33),
    [aux_sym_shell_token1] = ACTIONS(35),
    [aux_sym_stopsignal_token1] = ACTIONS(37),
    [aux_sym_user_token1] = ACTIONS(39),
    [aux_sym_volume_token1] = ACTIONS(41),
    [aux_sym_workdir_token1] = ACTIONS(43),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [7] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__repository_start_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_add_token1] = ACTIONS(139),
    [aux_sym_arg_token1] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(139),
    [aux_sym_copy_token1] = ACTIONS(139),
    [aux_sym_entrypoint_token1] = ACTIONS(139),
    [aux_sym_env_token1] = ACTIONS(139),
    [aux_sym_expose_token1] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(137),
    [aux_sym_healthcheck_token1] = ACTIONS(139),
    [aux_sym_label_token1] = ACTIONS(139),
    [aux_sym_maintainer_token1] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(139),
    [aux_sym_run_token1] = ACTIONS(139),
    [aux_sym_shell_token1] = ACTIONS(139),
    [aux_sym_stopsignal_token1] = ACTIONS(139),
    [aux_sym_user_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(143),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(145),
    [aux_sym__repository_start_token16] = ACTIONS(143),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(159),
    [aux_sym__repository_start_token2] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat4] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_add_token1] = ACTIONS(168),
    [aux_sym_arg_token1] = ACTIONS(168),
    [aux_sym_cmd_token1] = ACTIONS(168),
    [aux_sym_copy_token1] = ACTIONS(168),
    [aux_sym_entrypoint_token1] = ACTIONS(168),
    [aux_sym_env_token1] = ACTIONS(168),
    [aux_sym_expose_token1] = ACTIONS(168),
    [aux_sym_from_token1] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(166),
    [aux_sym_healthcheck_token1] = ACTIONS(168),
    [aux_sym_label_token1] = ACTIONS(168),
    [aux_sym_maintainer_token1] = ACTIONS(168),
    [aux_sym_onbuild_token1] = ACTIONS(168),
    [aux_sym_run_token1] = ACTIONS(168),
    [aux_sym_shell_token1] = ACTIONS(168),
    [aux_sym_stopsignal_token1] = ACTIONS(168),
    [aux_sym_user_token1] = ACTIONS(168),
    [aux_sym_volume_token1] = ACTIONS(168),
    [aux_sym_workdir_token1] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(166),
    [aux_sym__repository_start_token3] = ACTIONS(168),
    [aux_sym__repository_start_token12] = ACTIONS(170),
    [aux_sym__repository_start_token15] = ACTIONS(170),
    [aux_sym__repository_start_token16] = ACTIONS(166),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(166),
    [sym__space_no_newline] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_add_token1] = ACTIONS(175),
    [aux_sym_arg_token1] = ACTIONS(175),
    [aux_sym_cmd_token1] = ACTIONS(175),
    [aux_sym_copy_token1] = ACTIONS(175),
    [aux_sym_entrypoint_token1] = ACTIONS(175),
    [aux_sym_env_token1] = ACTIONS(175),
    [aux_sym_expose_token1] = ACTIONS(175),
    [aux_sym_from_token1] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(173),
    [aux_sym_healthcheck_token1] = ACTIONS(175),
    [aux_sym_label_token1] = ACTIONS(175),
    [aux_sym_maintainer_token1] = ACTIONS(175),
    [aux_sym_onbuild_token1] = ACTIONS(175),
    [aux_sym_run_token1] = ACTIONS(175),
    [aux_sym_shell_token1] = ACTIONS(175),
    [aux_sym_stopsignal_token1] = ACTIONS(175),
    [aux_sym_user_token1] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(177),
    [aux_sym__repository_start_token11] = ACTIONS(177),
    [aux_sym__repository_start_token16] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_add_token1] = ACTIONS(182),
    [aux_sym_arg_token1] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_copy_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_env_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym_healthcheck_token1] = ACTIONS(182),
    [aux_sym_label_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_onbuild_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_shell_token1] = ACTIONS(182),
    [aux_sym_stopsignal_token1] = ACTIONS(182),
    [aux_sym_user_token1] = ACTIONS(182),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(184),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(159),
    [aux_sym__repository_start_token2] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(187),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_user_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token16] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_add_token1] = ACTIONS(193),
    [aux_sym_arg_token1] = ACTIONS(193),
    [aux_sym_cmd_token1] = ACTIONS(193),
    [aux_sym_copy_token1] = ACTIONS(193),
    [aux_sym_entrypoint_token1] = ACTIONS(193),
    [aux_sym_env_token1] = ACTIONS(193),
    [aux_sym_expose_token1] = ACTIONS(193),
    [aux_sym_from_token1] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(191),
    [aux_sym_healthcheck_token1] = ACTIONS(193),
    [aux_sym_label_token1] = ACTIONS(193),
    [aux_sym_maintainer_token1] = ACTIONS(193),
    [aux_sym_onbuild_token1] = ACTIONS(193),
    [aux_sym_run_token1] = ACTIONS(193),
    [aux_sym_shell_token1] = ACTIONS(193),
    [aux_sym_stopsignal_token1] = ACTIONS(193),
    [aux_sym_user_token1] = ACTIONS(193),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token8] = ACTIONS(191),
    [aux_sym__repository_start_token11] = ACTIONS(191),
    [aux_sym__repository_start_token16] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(195),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_user_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token15] = ACTIONS(195),
    [aux_sym__repository_start_token16] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token16] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(203),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_user_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [aux_sym__repository_start_token16] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(207),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token16] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [aux_sym__repository_start_repeat3] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token8] = ACTIONS(213),
    [aux_sym__repository_start_token11] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [aux_sym__repository_start_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_add_token1] = ACTIONS(139),
    [aux_sym_arg_token1] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(139),
    [aux_sym_copy_token1] = ACTIONS(139),
    [aux_sym_entrypoint_token1] = ACTIONS(139),
    [aux_sym_env_token1] = ACTIONS(139),
    [aux_sym_expose_token1] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [aux_sym_healthcheck_token1] = ACTIONS(139),
    [aux_sym_label_token1] = ACTIONS(139),
    [aux_sym_maintainer_token1] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(139),
    [aux_sym_run_token1] = ACTIONS(139),
    [aux_sym_shell_token1] = ACTIONS(139),
    [aux_sym_stopsignal_token1] = ACTIONS(139),
    [aux_sym_user_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [sym_port_protocol] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(219),
    [aux_sym_add_token1] = ACTIONS(219),
    [aux_sym_arg_token1] = ACTIONS(219),
    [aux_sym_cmd_token1] = ACTIONS(219),
    [aux_sym_copy_token1] = ACTIONS(219),
    [aux_sym_entrypoint_token1] = ACTIONS(219),
    [aux_sym_env_token1] = ACTIONS(219),
    [aux_sym_expose_token1] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [aux_sym_from_token1] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [aux_sym_healthcheck_token1] = ACTIONS(219),
    [aux_sym_label_token1] = ACTIONS(219),
    [aux_sym_maintainer_token1] = ACTIONS(219),
    [aux_sym_onbuild_token1] = ACTIONS(219),
    [aux_sym_run_token1] = ACTIONS(219),
    [aux_sym_shell_token1] = ACTIONS(219),
    [aux_sym_stopsignal_token1] = ACTIONS(219),
    [aux_sym_user_token1] = ACTIONS(219),
    [anon_sym_DOLLAR] = ACTIONS(219),
    [aux_sym_volume_token1] = ACTIONS(219),
    [aux_sym_workdir_token1] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [aux_sym__port_part_token1] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat4] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [aux_sym__repository_start_token12] = ACTIONS(225),
    [aux_sym__repository_start_token15] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat3] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [aux_sym__repository_start_token8] = ACTIONS(213),
    [aux_sym__repository_start_token11] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(129),
    [aux_sym_label_token1] = ACTIONS(129),
    [aux_sym_maintainer_token1] = ACTIONS(129),
    [aux_sym_onbuild_token1] = ACTIONS(129),
    [aux_sym_run_token1] = ACTIONS(129),
    [aux_sym_shell_token1] = ACTIONS(129),
    [aux_sym_stopsignal_token1] = ACTIONS(129),
    [aux_sym_user_token1] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [aux_sym__repository_start_token4] = ACTIONS(227),
    [aux_sym__repository_start_token7] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_add_token1] = ACTIONS(182),
    [aux_sym_arg_token1] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_copy_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_env_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [aux_sym_healthcheck_token1] = ACTIONS(182),
    [aux_sym_label_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_onbuild_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_shell_token1] = ACTIONS(182),
    [aux_sym_stopsignal_token1] = ACTIONS(182),
    [aux_sym_user_token1] = ACTIONS(182),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(229),
    [aux_sym__repository_start_token7] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat4] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_add_token1] = ACTIONS(168),
    [aux_sym_arg_token1] = ACTIONS(168),
    [aux_sym_cmd_token1] = ACTIONS(168),
    [aux_sym_copy_token1] = ACTIONS(168),
    [aux_sym_entrypoint_token1] = ACTIONS(168),
    [aux_sym_env_token1] = ACTIONS(168),
    [aux_sym_expose_token1] = ACTIONS(168),
    [aux_sym_from_token1] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(166),
    [aux_sym_healthcheck_token1] = ACTIONS(168),
    [aux_sym_label_token1] = ACTIONS(168),
    [aux_sym_maintainer_token1] = ACTIONS(168),
    [aux_sym_onbuild_token1] = ACTIONS(168),
    [aux_sym_run_token1] = ACTIONS(168),
    [aux_sym_shell_token1] = ACTIONS(168),
    [aux_sym_stopsignal_token1] = ACTIONS(168),
    [aux_sym_user_token1] = ACTIONS(168),
    [aux_sym_volume_token1] = ACTIONS(168),
    [aux_sym_workdir_token1] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(168),
    [aux_sym__repository_start_token12] = ACTIONS(232),
    [aux_sym__repository_start_token15] = ACTIONS(232),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(166),
    [sym__space_no_newline] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat3] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_add_token1] = ACTIONS(175),
    [aux_sym_arg_token1] = ACTIONS(175),
    [aux_sym_cmd_token1] = ACTIONS(175),
    [aux_sym_copy_token1] = ACTIONS(175),
    [aux_sym_entrypoint_token1] = ACTIONS(175),
    [aux_sym_env_token1] = ACTIONS(175),
    [aux_sym_expose_token1] = ACTIONS(175),
    [aux_sym_from_token1] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [aux_sym_healthcheck_token1] = ACTIONS(175),
    [aux_sym_label_token1] = ACTIONS(175),
    [aux_sym_maintainer_token1] = ACTIONS(175),
    [aux_sym_onbuild_token1] = ACTIONS(175),
    [aux_sym_run_token1] = ACTIONS(175),
    [aux_sym_shell_token1] = ACTIONS(175),
    [aux_sym_stopsignal_token1] = ACTIONS(175),
    [aux_sym_user_token1] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(235),
    [aux_sym__repository_start_token11] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [sym_port_protocol] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(241),
    [aux_sym_add_token1] = ACTIONS(241),
    [aux_sym_arg_token1] = ACTIONS(241),
    [aux_sym_cmd_token1] = ACTIONS(241),
    [aux_sym_copy_token1] = ACTIONS(241),
    [aux_sym_entrypoint_token1] = ACTIONS(241),
    [aux_sym_env_token1] = ACTIONS(241),
    [aux_sym_expose_token1] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_from_token1] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [aux_sym_healthcheck_token1] = ACTIONS(241),
    [aux_sym_label_token1] = ACTIONS(241),
    [aux_sym_maintainer_token1] = ACTIONS(241),
    [aux_sym_onbuild_token1] = ACTIONS(241),
    [aux_sym_run_token1] = ACTIONS(241),
    [aux_sym_shell_token1] = ACTIONS(241),
    [aux_sym_stopsignal_token1] = ACTIONS(241),
    [aux_sym_user_token1] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [aux_sym_volume_token1] = ACTIONS(241),
    [aux_sym_workdir_token1] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [aux_sym__port_part_token1] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym__repository_start_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(227),
    [aux_sym__repository_start_token7] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat4] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(149),
    [aux_sym_label_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_onbuild_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token12] = ACTIONS(225),
    [aux_sym__repository_start_token15] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_add_token1] = ACTIONS(207),
    [aux_sym_arg_token1] = ACTIONS(207),
    [aux_sym_cmd_token1] = ACTIONS(207),
    [aux_sym_copy_token1] = ACTIONS(207),
    [aux_sym_entrypoint_token1] = ACTIONS(207),
    [aux_sym_env_token1] = ACTIONS(207),
    [aux_sym_expose_token1] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [aux_sym_from_token1] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [aux_sym_healthcheck_token1] = ACTIONS(207),
    [aux_sym_label_token1] = ACTIONS(207),
    [aux_sym_maintainer_token1] = ACTIONS(207),
    [aux_sym_onbuild_token1] = ACTIONS(207),
    [aux_sym_run_token1] = ACTIONS(207),
    [aux_sym_shell_token1] = ACTIONS(207),
    [aux_sym_stopsignal_token1] = ACTIONS(207),
    [aux_sym_user_token1] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_volume_token1] = ACTIONS(207),
    [aux_sym_workdir_token1] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [aux_sym__port_part_token1] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
    [aux_sym__repository_start_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_add_token1] = ACTIONS(245),
    [aux_sym_arg_token1] = ACTIONS(245),
    [aux_sym_cmd_token1] = ACTIONS(245),
    [aux_sym_copy_token1] = ACTIONS(245),
    [aux_sym_entrypoint_token1] = ACTIONS(245),
    [aux_sym_env_token1] = ACTIONS(245),
    [aux_sym_expose_token1] = ACTIONS(245),
    [aux_sym_from_token1] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(243),
    [aux_sym_healthcheck_token1] = ACTIONS(245),
    [aux_sym_label_token1] = ACTIONS(245),
    [aux_sym_maintainer_token1] = ACTIONS(245),
    [aux_sym_onbuild_token1] = ACTIONS(245),
    [aux_sym_run_token1] = ACTIONS(245),
    [aux_sym_shell_token1] = ACTIONS(245),
    [aux_sym_stopsignal_token1] = ACTIONS(245),
    [aux_sym_user_token1] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
    [aux_sym__repository_start_repeat2] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(187),
    [aux_sym_arg_token1] = ACTIONS(187),
    [aux_sym_cmd_token1] = ACTIONS(187),
    [aux_sym_copy_token1] = ACTIONS(187),
    [aux_sym_entrypoint_token1] = ACTIONS(187),
    [aux_sym_env_token1] = ACTIONS(187),
    [aux_sym_expose_token1] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [aux_sym_from_token1] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [aux_sym_healthcheck_token1] = ACTIONS(187),
    [aux_sym_label_token1] = ACTIONS(187),
    [aux_sym_maintainer_token1] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(187),
    [aux_sym_run_token1] = ACTIONS(187),
    [aux_sym_shell_token1] = ACTIONS(187),
    [aux_sym_stopsignal_token1] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(187),
    [aux_sym_workdir_token1] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [aux_sym__port_part_token1] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [aux_sym__repository_start_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [aux_sym__repository_start_repeat4] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(203),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_user_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(195),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_user_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token15] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_add_token1] = ACTIONS(193),
    [aux_sym_arg_token1] = ACTIONS(193),
    [aux_sym_cmd_token1] = ACTIONS(193),
    [aux_sym_copy_token1] = ACTIONS(193),
    [aux_sym_entrypoint_token1] = ACTIONS(193),
    [aux_sym_env_token1] = ACTIONS(193),
    [aux_sym_expose_token1] = ACTIONS(193),
    [aux_sym_from_token1] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(191),
    [aux_sym_healthcheck_token1] = ACTIONS(193),
    [aux_sym_label_token1] = ACTIONS(193),
    [aux_sym_maintainer_token1] = ACTIONS(193),
    [aux_sym_onbuild_token1] = ACTIONS(193),
    [aux_sym_run_token1] = ACTIONS(193),
    [aux_sym_shell_token1] = ACTIONS(193),
    [aux_sym_stopsignal_token1] = ACTIONS(193),
    [aux_sym_user_token1] = ACTIONS(193),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token8] = ACTIONS(191),
    [aux_sym__repository_start_token11] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_add_token1] = ACTIONS(199),
    [aux_sym_arg_token1] = ACTIONS(199),
    [aux_sym_cmd_token1] = ACTIONS(199),
    [aux_sym_copy_token1] = ACTIONS(199),
    [aux_sym_entrypoint_token1] = ACTIONS(199),
    [aux_sym_env_token1] = ACTIONS(199),
    [aux_sym_expose_token1] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_from_token1] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [aux_sym_healthcheck_token1] = ACTIONS(199),
    [aux_sym_label_token1] = ACTIONS(199),
    [aux_sym_maintainer_token1] = ACTIONS(199),
    [aux_sym_onbuild_token1] = ACTIONS(199),
    [aux_sym_run_token1] = ACTIONS(199),
    [aux_sym_shell_token1] = ACTIONS(199),
    [aux_sym_stopsignal_token1] = ACTIONS(199),
    [aux_sym_user_token1] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(199),
    [aux_sym_workdir_token1] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [aux_sym__port_part_token1] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(159),
    [sym__space_no_newline] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_user_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
    [aux_sym__repository_start_repeat3] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
    [aux_sym__repository_start_repeat4] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(207),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [aux_sym_from_token1] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [aux_sym__port_part_token1] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym__repository_start_repeat4] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(265),
    [aux_sym_arg_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_copy_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_env_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym_healthcheck_token1] = ACTIONS(265),
    [aux_sym_label_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_onbuild_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_AT] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(273),
    [aux_sym__repository_start_token16] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [aux_sym__repository_start_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(277),
    [aux_sym_arg_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_copy_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_env_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym_healthcheck_token1] = ACTIONS(277),
    [aux_sym_label_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_onbuild_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym__repository_start_token3] = ACTIONS(279),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym__space_no_newline] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(277),
    [aux_sym_arg_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_copy_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_env_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym_healthcheck_token1] = ACTIONS(277),
    [aux_sym_label_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_onbuild_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym__repository_start_token3] = ACTIONS(279),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym__space_no_newline] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(285),
    [aux_sym__repository_start_token16] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym__space_no_newline] = ACTIONS(283),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [aux_sym_add_token1] = ACTIONS(241),
    [aux_sym_arg_token1] = ACTIONS(241),
    [aux_sym_cmd_token1] = ACTIONS(241),
    [aux_sym_copy_token1] = ACTIONS(241),
    [aux_sym_entrypoint_token1] = ACTIONS(241),
    [aux_sym_env_token1] = ACTIONS(241),
    [aux_sym_expose_token1] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_from_token1] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [aux_sym_healthcheck_token1] = ACTIONS(241),
    [aux_sym_label_token1] = ACTIONS(241),
    [aux_sym_maintainer_token1] = ACTIONS(241),
    [aux_sym_onbuild_token1] = ACTIONS(241),
    [aux_sym_run_token1] = ACTIONS(241),
    [aux_sym_shell_token1] = ACTIONS(241),
    [aux_sym_stopsignal_token1] = ACTIONS(241),
    [aux_sym_user_token1] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [aux_sym_volume_token1] = ACTIONS(241),
    [aux_sym_workdir_token1] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [aux_sym__port_part_token1] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [65] = {
    [aux_sym__repository_start_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__repository_start_repeat4] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(277),
    [aux_sym_arg_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_copy_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_env_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym_healthcheck_token1] = ACTIONS(277),
    [aux_sym_label_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_onbuild_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym__repository_start_token3] = ACTIONS(279),
    [aux_sym__repository_start_token12] = ACTIONS(157),
    [aux_sym__repository_start_token15] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym__space_no_newline] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(293),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(295),
    [aux_sym__port_part_token1] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(265),
    [aux_sym_arg_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_copy_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_env_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym_healthcheck_token1] = ACTIONS(265),
    [aux_sym_label_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_onbuild_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [aux_sym__repository_start_repeat2] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(265),
    [aux_sym_arg_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_copy_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_env_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym_healthcheck_token1] = ACTIONS(265),
    [aux_sym_label_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_onbuild_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [aux_sym__repository_start_repeat3] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(265),
    [aux_sym_arg_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_copy_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_env_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym_healthcheck_token1] = ACTIONS(265),
    [aux_sym_label_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_onbuild_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(127),
    [aux_sym_arg_token1] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(127),
    [aux_sym_copy_token1] = ACTIONS(127),
    [aux_sym_entrypoint_token1] = ACTIONS(127),
    [aux_sym_env_token1] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(127),
    [aux_sym_from_token1] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(127),
    [aux_sym_label_token1] = ACTIONS(127),
    [aux_sym_maintainer_token1] = ACTIONS(127),
    [aux_sym_onbuild_token1] = ACTIONS(127),
    [aux_sym_run_token1] = ACTIONS(127),
    [aux_sym_shell_token1] = ACTIONS(127),
    [aux_sym_stopsignal_token1] = ACTIONS(127),
    [aux_sym_user_token1] = ACTIONS(127),
    [aux_sym_volume_token1] = ACTIONS(127),
    [aux_sym_workdir_token1] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_from_token1] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_user_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [aux_sym__port_part_token1] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(299),
    [aux_sym_arg_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_copy_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_env_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [aux_sym_healthcheck_token1] = ACTIONS(299),
    [aux_sym_label_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_onbuild_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(299),
    [aux_sym__port_part_token1] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [75] = {
    [aux_sym__repository_start_repeat2] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token4] = ACTIONS(307),
    [aux_sym__repository_start_token7] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [aux_sym_workdir_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(311),
    [aux_sym_arg_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_copy_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_env_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [aux_sym_from_token1] = ACTIONS(311),
    [aux_sym_healthcheck_token1] = ACTIONS(311),
    [aux_sym_label_token1] = ACTIONS(311),
    [aux_sym_maintainer_token1] = ACTIONS(311),
    [aux_sym_onbuild_token1] = ACTIONS(311),
    [aux_sym_run_token1] = ACTIONS(311),
    [aux_sym_shell_token1] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(311),
    [aux_sym_user_token1] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_workdir_token4] = ACTIONS(315),
    [aux_sym_workdir_token5] = ACTIONS(317),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [aux_sym__repository_start_repeat4] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_healthcheck_token1] = ACTIONS(321),
    [aux_sym_label_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_onbuild_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [aux_sym__repository_start_token12] = ACTIONS(325),
    [aux_sym__repository_start_token15] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
    [aux_sym__repository_start_repeat3] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_healthcheck_token1] = ACTIONS(321),
    [aux_sym_label_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_onbuild_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [aux_sym__repository_start_token8] = ACTIONS(327),
    [aux_sym__repository_start_token11] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [79] = {
    [aux_sym_workdir_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(331),
    [aux_sym_arg_token1] = ACTIONS(331),
    [aux_sym_cmd_token1] = ACTIONS(331),
    [aux_sym_copy_token1] = ACTIONS(331),
    [aux_sym_entrypoint_token1] = ACTIONS(331),
    [aux_sym_env_token1] = ACTIONS(331),
    [aux_sym_expose_token1] = ACTIONS(331),
    [aux_sym_from_token1] = ACTIONS(331),
    [aux_sym_healthcheck_token1] = ACTIONS(331),
    [aux_sym_label_token1] = ACTIONS(331),
    [aux_sym_maintainer_token1] = ACTIONS(331),
    [aux_sym_onbuild_token1] = ACTIONS(331),
    [aux_sym_run_token1] = ACTIONS(331),
    [aux_sym_shell_token1] = ACTIONS(331),
    [aux_sym_stopsignal_token1] = ACTIONS(331),
    [aux_sym_user_token1] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(331),
    [aux_sym_workdir_token4] = ACTIONS(315),
    [aux_sym_workdir_token5] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [80] = {
    [aux_sym__repository_start_repeat2] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_add_token1] = ACTIONS(182),
    [aux_sym_arg_token1] = ACTIONS(182),
    [aux_sym_cmd_token1] = ACTIONS(182),
    [aux_sym_copy_token1] = ACTIONS(182),
    [aux_sym_entrypoint_token1] = ACTIONS(182),
    [aux_sym_env_token1] = ACTIONS(182),
    [aux_sym_expose_token1] = ACTIONS(182),
    [aux_sym_from_token1] = ACTIONS(182),
    [aux_sym_healthcheck_token1] = ACTIONS(182),
    [aux_sym_label_token1] = ACTIONS(182),
    [aux_sym_maintainer_token1] = ACTIONS(182),
    [aux_sym_onbuild_token1] = ACTIONS(182),
    [aux_sym_run_token1] = ACTIONS(182),
    [aux_sym_shell_token1] = ACTIONS(182),
    [aux_sym_stopsignal_token1] = ACTIONS(182),
    [aux_sym_user_token1] = ACTIONS(182),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(335),
    [aux_sym__repository_start_token7] = ACTIONS(335),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [81] = {
    [aux_sym__repository_start_repeat2] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_healthcheck_token1] = ACTIONS(321),
    [aux_sym_label_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_onbuild_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [aux_sym__repository_start_token4] = ACTIONS(307),
    [aux_sym__repository_start_token7] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [82] = {
    [aux_sym__repository_start_repeat1] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_healthcheck_token1] = ACTIONS(321),
    [aux_sym_label_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_onbuild_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym__repository_start_token2] = ACTIONS(338),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_add_token1] = ACTIONS(340),
    [aux_sym_arg_token1] = ACTIONS(340),
    [aux_sym_cmd_token1] = ACTIONS(340),
    [aux_sym_copy_token1] = ACTIONS(340),
    [aux_sym_entrypoint_token1] = ACTIONS(340),
    [aux_sym_env_token1] = ACTIONS(340),
    [aux_sym_expose_token1] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_from_token1] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [aux_sym_healthcheck_token1] = ACTIONS(340),
    [aux_sym_label_token1] = ACTIONS(340),
    [aux_sym_maintainer_token1] = ACTIONS(340),
    [aux_sym_onbuild_token1] = ACTIONS(340),
    [aux_sym_run_token1] = ACTIONS(340),
    [aux_sym_shell_token1] = ACTIONS(340),
    [aux_sym_stopsignal_token1] = ACTIONS(340),
    [aux_sym_user_token1] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [aux_sym_volume_token1] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(340),
    [aux_sym__port_part_token1] = ACTIONS(340),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(340),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [aux_sym__repository_start_repeat3] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_add_token1] = ACTIONS(175),
    [aux_sym_arg_token1] = ACTIONS(175),
    [aux_sym_cmd_token1] = ACTIONS(175),
    [aux_sym_copy_token1] = ACTIONS(175),
    [aux_sym_entrypoint_token1] = ACTIONS(175),
    [aux_sym_env_token1] = ACTIONS(175),
    [aux_sym_expose_token1] = ACTIONS(175),
    [aux_sym_from_token1] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(175),
    [aux_sym_label_token1] = ACTIONS(175),
    [aux_sym_maintainer_token1] = ACTIONS(175),
    [aux_sym_onbuild_token1] = ACTIONS(175),
    [aux_sym_run_token1] = ACTIONS(175),
    [aux_sym_shell_token1] = ACTIONS(175),
    [aux_sym_stopsignal_token1] = ACTIONS(175),
    [aux_sym_user_token1] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(342),
    [aux_sym__repository_start_token11] = ACTIONS(342),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__repository_start_repeat4] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_add_token1] = ACTIONS(168),
    [aux_sym_arg_token1] = ACTIONS(168),
    [aux_sym_cmd_token1] = ACTIONS(168),
    [aux_sym_copy_token1] = ACTIONS(168),
    [aux_sym_entrypoint_token1] = ACTIONS(168),
    [aux_sym_env_token1] = ACTIONS(168),
    [aux_sym_expose_token1] = ACTIONS(168),
    [aux_sym_from_token1] = ACTIONS(168),
    [aux_sym_healthcheck_token1] = ACTIONS(168),
    [aux_sym_label_token1] = ACTIONS(168),
    [aux_sym_maintainer_token1] = ACTIONS(168),
    [aux_sym_onbuild_token1] = ACTIONS(168),
    [aux_sym_run_token1] = ACTIONS(168),
    [aux_sym_shell_token1] = ACTIONS(168),
    [aux_sym_stopsignal_token1] = ACTIONS(168),
    [aux_sym_user_token1] = ACTIONS(168),
    [aux_sym_volume_token1] = ACTIONS(168),
    [aux_sym_workdir_token1] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(168),
    [aux_sym__repository_start_token12] = ACTIONS(345),
    [aux_sym__repository_start_token15] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [86] = {
    [aux_sym__repository_start_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(348),
    [aux_sym_add_token1] = ACTIONS(350),
    [aux_sym_arg_token1] = ACTIONS(350),
    [aux_sym_cmd_token1] = ACTIONS(350),
    [aux_sym_copy_token1] = ACTIONS(350),
    [aux_sym_entrypoint_token1] = ACTIONS(350),
    [aux_sym_env_token1] = ACTIONS(350),
    [aux_sym_expose_token1] = ACTIONS(350),
    [aux_sym_from_token1] = ACTIONS(350),
    [aux_sym_healthcheck_token1] = ACTIONS(350),
    [aux_sym_label_token1] = ACTIONS(350),
    [aux_sym_maintainer_token1] = ACTIONS(350),
    [aux_sym_onbuild_token1] = ACTIONS(350),
    [aux_sym_run_token1] = ACTIONS(350),
    [aux_sym_shell_token1] = ACTIONS(350),
    [aux_sym_stopsignal_token1] = ACTIONS(350),
    [aux_sym_user_token1] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [aux_sym_volume_token1] = ACTIONS(350),
    [aux_sym_workdir_token1] = ACTIONS(350),
    [aux_sym__repository_start_token2] = ACTIONS(338),
    [aux_sym__repository_start_token3] = ACTIONS(352),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [aux_sym_add_token1] = ACTIONS(354),
    [aux_sym_arg_token1] = ACTIONS(354),
    [aux_sym_cmd_token1] = ACTIONS(354),
    [aux_sym_copy_token1] = ACTIONS(354),
    [aux_sym_entrypoint_token1] = ACTIONS(354),
    [aux_sym_env_token1] = ACTIONS(354),
    [aux_sym_expose_token1] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [aux_sym_from_token1] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(354),
    [aux_sym_healthcheck_token1] = ACTIONS(354),
    [aux_sym_label_token1] = ACTIONS(354),
    [aux_sym_maintainer_token1] = ACTIONS(354),
    [aux_sym_onbuild_token1] = ACTIONS(354),
    [aux_sym_run_token1] = ACTIONS(354),
    [aux_sym_shell_token1] = ACTIONS(354),
    [aux_sym_stopsignal_token1] = ACTIONS(354),
    [aux_sym_user_token1] = ACTIONS(354),
    [anon_sym_DOLLAR] = ACTIONS(354),
    [aux_sym_volume_token1] = ACTIONS(354),
    [aux_sym_workdir_token1] = ACTIONS(354),
    [aux_sym__port_part_token1] = ACTIONS(354),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(354),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [aux_sym_add_token1] = ACTIONS(356),
    [aux_sym_arg_token1] = ACTIONS(356),
    [aux_sym_cmd_token1] = ACTIONS(356),
    [aux_sym_copy_token1] = ACTIONS(356),
    [aux_sym_entrypoint_token1] = ACTIONS(356),
    [aux_sym_env_token1] = ACTIONS(356),
    [aux_sym_expose_token1] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(356),
    [aux_sym_from_token1] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(358),
    [aux_sym_healthcheck_token1] = ACTIONS(356),
    [aux_sym_label_token1] = ACTIONS(356),
    [aux_sym_maintainer_token1] = ACTIONS(356),
    [aux_sym_onbuild_token1] = ACTIONS(356),
    [aux_sym_run_token1] = ACTIONS(356),
    [aux_sym_shell_token1] = ACTIONS(356),
    [aux_sym_stopsignal_token1] = ACTIONS(356),
    [aux_sym_user_token1] = ACTIONS(356),
    [anon_sym_DOLLAR] = ACTIONS(356),
    [aux_sym_volume_token1] = ACTIONS(356),
    [aux_sym_workdir_token1] = ACTIONS(356),
    [aux_sym__port_part_token1] = ACTIONS(356),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(356),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [aux_sym__repository_start_repeat4] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token12] = ACTIONS(325),
    [aux_sym__repository_start_token15] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
    [aux_sym__repository_start_repeat1] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(360),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(360),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [91] = {
    [aux_sym__repository_start_repeat3] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token8] = ACTIONS(327),
    [aux_sym__repository_start_token11] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [aux_sym_workdir_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(365),
    [aux_sym_arg_token1] = ACTIONS(365),
    [aux_sym_cmd_token1] = ACTIONS(365),
    [aux_sym_copy_token1] = ACTIONS(365),
    [aux_sym_entrypoint_token1] = ACTIONS(365),
    [aux_sym_env_token1] = ACTIONS(365),
    [aux_sym_expose_token1] = ACTIONS(365),
    [aux_sym_from_token1] = ACTIONS(365),
    [aux_sym_healthcheck_token1] = ACTIONS(365),
    [aux_sym_label_token1] = ACTIONS(365),
    [aux_sym_maintainer_token1] = ACTIONS(365),
    [aux_sym_onbuild_token1] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(365),
    [aux_sym_shell_token1] = ACTIONS(365),
    [aux_sym_stopsignal_token1] = ACTIONS(365),
    [aux_sym_user_token1] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(367),
    [aux_sym_volume_token1] = ACTIONS(365),
    [aux_sym_workdir_token1] = ACTIONS(365),
    [aux_sym_workdir_token4] = ACTIONS(370),
    [aux_sym_workdir_token5] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_user_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym_workdir_token4] = ACTIONS(187),
    [aux_sym_workdir_token5] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym_add_token1] = ACTIONS(373),
    [aux_sym_arg_token1] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_copy_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_env_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(377),
    [aux_sym_healthcheck_token1] = ACTIONS(373),
    [aux_sym_label_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_onbuild_token1] = ACTIONS(373),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_shell_token1] = ACTIONS(373),
    [aux_sym_stopsignal_token1] = ACTIONS(373),
    [aux_sym_user_token1] = ACTIONS(373),
    [aux_sym_volume_token1] = ACTIONS(373),
    [aux_sym_workdir_token1] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym__space_no_newline] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym__port_part_token1] = ACTIONS(381),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym__labels] = STATE(102),
    [sym_label_pair] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym_add_token1] = ACTIONS(385),
    [aux_sym_arg_token1] = ACTIONS(385),
    [aux_sym_cmd_token1] = ACTIONS(385),
    [aux_sym_copy_token1] = ACTIONS(385),
    [aux_sym_entrypoint_token1] = ACTIONS(385),
    [aux_sym_env_token1] = ACTIONS(385),
    [aux_sym_expose_token1] = ACTIONS(385),
    [aux_sym_from_token1] = ACTIONS(385),
    [aux_sym_healthcheck_token1] = ACTIONS(385),
    [aux_sym_label_token1] = ACTIONS(385),
    [aux_sym_maintainer_token1] = ACTIONS(385),
    [aux_sym_onbuild_token1] = ACTIONS(385),
    [aux_sym_run_token1] = ACTIONS(385),
    [aux_sym_shell_token1] = ACTIONS(385),
    [aux_sym_stopsignal_token1] = ACTIONS(385),
    [aux_sym_user_token1] = ACTIONS(385),
    [aux_sym_volume_token1] = ACTIONS(385),
    [aux_sym_workdir_token1] = ACTIONS(385),
    [sym_label_key] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(389),
    [sym__space_no_newline] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_add_token1] = ACTIONS(397),
    [aux_sym_arg_token1] = ACTIONS(397),
    [aux_sym_cmd_token1] = ACTIONS(397),
    [aux_sym_copy_token1] = ACTIONS(397),
    [aux_sym_entrypoint_token1] = ACTIONS(397),
    [aux_sym_env_token1] = ACTIONS(397),
    [aux_sym_expose_token1] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [aux_sym_from_token1] = ACTIONS(397),
    [aux_sym_healthcheck_token1] = ACTIONS(397),
    [aux_sym_label_token1] = ACTIONS(397),
    [aux_sym_maintainer_token1] = ACTIONS(397),
    [aux_sym_onbuild_token1] = ACTIONS(397),
    [aux_sym_run_token1] = ACTIONS(397),
    [aux_sym_shell_token1] = ACTIONS(397),
    [aux_sym_stopsignal_token1] = ACTIONS(397),
    [aux_sym_user_token1] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(397),
    [aux_sym_workdir_token1] = ACTIONS(397),
    [aux_sym__port_part_token1] = ACTIONS(397),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(397),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym__labels] = STATE(102),
    [sym_label_pair] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(399),
    [aux_sym_add_token1] = ACTIONS(401),
    [aux_sym_arg_token1] = ACTIONS(401),
    [aux_sym_cmd_token1] = ACTIONS(401),
    [aux_sym_copy_token1] = ACTIONS(401),
    [aux_sym_entrypoint_token1] = ACTIONS(401),
    [aux_sym_env_token1] = ACTIONS(401),
    [aux_sym_expose_token1] = ACTIONS(401),
    [aux_sym_from_token1] = ACTIONS(401),
    [aux_sym_healthcheck_token1] = ACTIONS(401),
    [aux_sym_label_token1] = ACTIONS(401),
    [aux_sym_maintainer_token1] = ACTIONS(401),
    [aux_sym_onbuild_token1] = ACTIONS(401),
    [aux_sym_run_token1] = ACTIONS(401),
    [aux_sym_shell_token1] = ACTIONS(401),
    [aux_sym_stopsignal_token1] = ACTIONS(401),
    [aux_sym_user_token1] = ACTIONS(401),
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [sym_label_key] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(406),
    [aux_sym_arg_token1] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(406),
    [aux_sym_copy_token1] = ACTIONS(406),
    [aux_sym_entrypoint_token1] = ACTIONS(406),
    [aux_sym_env_token1] = ACTIONS(406),
    [aux_sym_expose_token1] = ACTIONS(406),
    [aux_sym_from_token1] = ACTIONS(406),
    [anon_sym_COLON] = ACTIONS(408),
    [anon_sym_AT] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(406),
    [aux_sym_label_token1] = ACTIONS(406),
    [aux_sym_maintainer_token1] = ACTIONS(406),
    [aux_sym_onbuild_token1] = ACTIONS(406),
    [aux_sym_run_token1] = ACTIONS(406),
    [aux_sym_shell_token1] = ACTIONS(406),
    [aux_sym_stopsignal_token1] = ACTIONS(406),
    [aux_sym_user_token1] = ACTIONS(406),
    [aux_sym_volume_token1] = ACTIONS(406),
    [aux_sym_workdir_token1] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(406),
    [sym__space_no_newline] = ACTIONS(412),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_add_token1] = ACTIONS(205),
    [aux_sym_arg_token1] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_copy_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_env_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(205),
    [aux_sym_label_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_onbuild_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_user_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_add_token1] = ACTIONS(414),
    [aux_sym_arg_token1] = ACTIONS(414),
    [aux_sym_cmd_token1] = ACTIONS(414),
    [aux_sym_copy_token1] = ACTIONS(414),
    [aux_sym_entrypoint_token1] = ACTIONS(414),
    [aux_sym_env_token1] = ACTIONS(414),
    [aux_sym_expose_token1] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(416),
    [anon_sym_AT] = ACTIONS(418),
    [aux_sym_healthcheck_token1] = ACTIONS(414),
    [aux_sym_label_token1] = ACTIONS(414),
    [aux_sym_maintainer_token1] = ACTIONS(414),
    [aux_sym_onbuild_token1] = ACTIONS(414),
    [aux_sym_run_token1] = ACTIONS(414),
    [aux_sym_shell_token1] = ACTIONS(414),
    [aux_sym_stopsignal_token1] = ACTIONS(414),
    [aux_sym_user_token1] = ACTIONS(414),
    [aux_sym_volume_token1] = ACTIONS(414),
    [aux_sym_workdir_token1] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(414),
    [sym__space_no_newline] = ACTIONS(420),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_add_token1] = ACTIONS(193),
    [aux_sym_arg_token1] = ACTIONS(193),
    [aux_sym_cmd_token1] = ACTIONS(193),
    [aux_sym_copy_token1] = ACTIONS(193),
    [aux_sym_entrypoint_token1] = ACTIONS(193),
    [aux_sym_env_token1] = ACTIONS(193),
    [aux_sym_expose_token1] = ACTIONS(193),
    [aux_sym_from_token1] = ACTIONS(193),
    [aux_sym_healthcheck_token1] = ACTIONS(193),
    [aux_sym_label_token1] = ACTIONS(193),
    [aux_sym_maintainer_token1] = ACTIONS(193),
    [aux_sym_onbuild_token1] = ACTIONS(193),
    [aux_sym_run_token1] = ACTIONS(193),
    [aux_sym_shell_token1] = ACTIONS(193),
    [aux_sym_stopsignal_token1] = ACTIONS(193),
    [aux_sym_user_token1] = ACTIONS(193),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token8] = ACTIONS(191),
    [aux_sym__repository_start_token11] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym__space_no_newline] = ACTIONS(283),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(365),
    [aux_sym_arg_token1] = ACTIONS(365),
    [aux_sym_cmd_token1] = ACTIONS(365),
    [aux_sym_copy_token1] = ACTIONS(365),
    [aux_sym_entrypoint_token1] = ACTIONS(365),
    [aux_sym_env_token1] = ACTIONS(365),
    [aux_sym_expose_token1] = ACTIONS(365),
    [aux_sym_from_token1] = ACTIONS(365),
    [aux_sym_healthcheck_token1] = ACTIONS(365),
    [aux_sym_label_token1] = ACTIONS(365),
    [aux_sym_maintainer_token1] = ACTIONS(365),
    [aux_sym_onbuild_token1] = ACTIONS(365),
    [aux_sym_run_token1] = ACTIONS(365),
    [aux_sym_shell_token1] = ACTIONS(365),
    [aux_sym_stopsignal_token1] = ACTIONS(365),
    [aux_sym_user_token1] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [aux_sym_volume_token1] = ACTIONS(365),
    [aux_sym_workdir_token1] = ACTIONS(365),
    [aux_sym_workdir_token4] = ACTIONS(363),
    [aux_sym_workdir_token5] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(189),
    [aux_sym_arg_token1] = ACTIONS(189),
    [aux_sym_cmd_token1] = ACTIONS(189),
    [aux_sym_copy_token1] = ACTIONS(189),
    [aux_sym_entrypoint_token1] = ACTIONS(189),
    [aux_sym_env_token1] = ACTIONS(189),
    [aux_sym_expose_token1] = ACTIONS(189),
    [aux_sym_from_token1] = ACTIONS(189),
    [aux_sym_healthcheck_token1] = ACTIONS(189),
    [aux_sym_label_token1] = ACTIONS(189),
    [aux_sym_maintainer_token1] = ACTIONS(189),
    [aux_sym_onbuild_token1] = ACTIONS(189),
    [aux_sym_run_token1] = ACTIONS(189),
    [aux_sym_shell_token1] = ACTIONS(189),
    [aux_sym_stopsignal_token1] = ACTIONS(189),
    [aux_sym_user_token1] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(201),
    [aux_sym_label_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_onbuild_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_workdir_token4] = ACTIONS(199),
    [aux_sym_workdir_token5] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(127),
    [aux_sym_arg_token1] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(127),
    [aux_sym_copy_token1] = ACTIONS(127),
    [aux_sym_entrypoint_token1] = ACTIONS(127),
    [aux_sym_env_token1] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(127),
    [aux_sym_from_token1] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(127),
    [aux_sym_label_token1] = ACTIONS(127),
    [aux_sym_maintainer_token1] = ACTIONS(127),
    [aux_sym_onbuild_token1] = ACTIONS(127),
    [aux_sym_run_token1] = ACTIONS(127),
    [aux_sym_shell_token1] = ACTIONS(127),
    [aux_sym_stopsignal_token1] = ACTIONS(127),
    [aux_sym_user_token1] = ACTIONS(127),
    [aux_sym_volume_token1] = ACTIONS(127),
    [aux_sym_workdir_token1] = ACTIONS(127),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(209),
    [aux_sym_label_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_onbuild_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_workdir_token4] = ACTIONS(207),
    [aux_sym_workdir_token5] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(197),
    [aux_sym_label_token1] = ACTIONS(197),
    [aux_sym_maintainer_token1] = ACTIONS(197),
    [aux_sym_onbuild_token1] = ACTIONS(197),
    [aux_sym_run_token1] = ACTIONS(197),
    [aux_sym_shell_token1] = ACTIONS(197),
    [aux_sym_stopsignal_token1] = ACTIONS(197),
    [aux_sym_user_token1] = ACTIONS(197),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token15] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(406),
    [aux_sym_arg_token1] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(406),
    [aux_sym_copy_token1] = ACTIONS(406),
    [aux_sym_entrypoint_token1] = ACTIONS(406),
    [aux_sym_env_token1] = ACTIONS(406),
    [aux_sym_expose_token1] = ACTIONS(406),
    [aux_sym_from_token1] = ACTIONS(406),
    [anon_sym_AT] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(406),
    [aux_sym_label_token1] = ACTIONS(406),
    [aux_sym_maintainer_token1] = ACTIONS(406),
    [aux_sym_onbuild_token1] = ACTIONS(406),
    [aux_sym_run_token1] = ACTIONS(406),
    [aux_sym_shell_token1] = ACTIONS(406),
    [aux_sym_stopsignal_token1] = ACTIONS(406),
    [aux_sym_user_token1] = ACTIONS(406),
    [aux_sym_volume_token1] = ACTIONS(406),
    [aux_sym_workdir_token1] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(406),
    [sym__space_no_newline] = ACTIONS(412),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [aux_sym__paths] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_add_token1] = ACTIONS(424),
    [aux_sym_arg_token1] = ACTIONS(424),
    [aux_sym_cmd_token1] = ACTIONS(424),
    [aux_sym_copy_token1] = ACTIONS(424),
    [aux_sym_entrypoint_token1] = ACTIONS(424),
    [aux_sym_env_token1] = ACTIONS(424),
    [aux_sym_expose_token1] = ACTIONS(424),
    [aux_sym_from_token1] = ACTIONS(424),
    [aux_sym_healthcheck_token1] = ACTIONS(424),
    [aux_sym_label_token1] = ACTIONS(424),
    [aux_sym_maintainer_token1] = ACTIONS(424),
    [aux_sym_onbuild_token1] = ACTIONS(424),
    [aux_sym_run_token1] = ACTIONS(424),
    [aux_sym_shell_token1] = ACTIONS(424),
    [aux_sym_stopsignal_token1] = ACTIONS(424),
    [aux_sym_user_token1] = ACTIONS(424),
    [aux_sym_volume_token1] = ACTIONS(424),
    [aux_sym_workdir_token1] = ACTIONS(424),
    [sym_path] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_add_token1] = ACTIONS(430),
    [aux_sym_arg_token1] = ACTIONS(430),
    [aux_sym_cmd_token1] = ACTIONS(430),
    [aux_sym_copy_token1] = ACTIONS(430),
    [aux_sym_entrypoint_token1] = ACTIONS(430),
    [aux_sym_env_token1] = ACTIONS(430),
    [aux_sym_expose_token1] = ACTIONS(430),
    [aux_sym_from_token1] = ACTIONS(430),
    [aux_sym_healthcheck_token1] = ACTIONS(430),
    [aux_sym_label_token1] = ACTIONS(430),
    [aux_sym_maintainer_token1] = ACTIONS(430),
    [aux_sym_onbuild_token1] = ACTIONS(430),
    [aux_sym_run_token1] = ACTIONS(430),
    [aux_sym_shell_token1] = ACTIONS(430),
    [aux_sym_stopsignal_token1] = ACTIONS(430),
    [aux_sym_user_token1] = ACTIONS(430),
    [aux_sym_volume_token1] = ACTIONS(430),
    [aux_sym_workdir_token1] = ACTIONS(430),
    [aux_sym__anything_token1] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(437),
    [aux_sym_arg_token1] = ACTIONS(437),
    [aux_sym_cmd_token1] = ACTIONS(437),
    [aux_sym_copy_token1] = ACTIONS(437),
    [aux_sym_entrypoint_token1] = ACTIONS(437),
    [aux_sym_env_token1] = ACTIONS(437),
    [aux_sym_expose_token1] = ACTIONS(437),
    [aux_sym_from_token1] = ACTIONS(437),
    [aux_sym_healthcheck_token1] = ACTIONS(437),
    [aux_sym_label_token1] = ACTIONS(437),
    [aux_sym_maintainer_token1] = ACTIONS(437),
    [aux_sym_onbuild_token1] = ACTIONS(437),
    [aux_sym_run_token1] = ACTIONS(437),
    [aux_sym_shell_token1] = ACTIONS(437),
    [aux_sym_stopsignal_token1] = ACTIONS(437),
    [aux_sym_user_token1] = ACTIONS(437),
    [aux_sym_volume_token1] = ACTIONS(437),
    [aux_sym_workdir_token1] = ACTIONS(437),
    [aux_sym__anything_token1] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_add_token1] = ACTIONS(441),
    [aux_sym_arg_token1] = ACTIONS(441),
    [aux_sym_cmd_token1] = ACTIONS(441),
    [aux_sym_copy_token1] = ACTIONS(441),
    [aux_sym_entrypoint_token1] = ACTIONS(441),
    [aux_sym_env_token1] = ACTIONS(441),
    [aux_sym_expose_token1] = ACTIONS(441),
    [aux_sym_from_token1] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(443),
    [aux_sym_healthcheck_token1] = ACTIONS(441),
    [aux_sym_label_token1] = ACTIONS(441),
    [aux_sym_maintainer_token1] = ACTIONS(441),
    [aux_sym_onbuild_token1] = ACTIONS(441),
    [aux_sym_run_token1] = ACTIONS(441),
    [aux_sym_shell_token1] = ACTIONS(441),
    [aux_sym_stopsignal_token1] = ACTIONS(441),
    [aux_sym_user_token1] = ACTIONS(441),
    [aux_sym_volume_token1] = ACTIONS(441),
    [aux_sym_workdir_token1] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym__space_no_newline] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [aux_sym_healthcheck_token1] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(447),
    [aux_sym_maintainer_token1] = ACTIONS(447),
    [aux_sym_onbuild_token1] = ACTIONS(447),
    [aux_sym_run_token1] = ACTIONS(447),
    [aux_sym_shell_token1] = ACTIONS(447),
    [aux_sym_stopsignal_token1] = ACTIONS(447),
    [aux_sym_user_token1] = ACTIONS(447),
    [aux_sym_volume_token1] = ACTIONS(447),
    [aux_sym_workdir_token1] = ACTIONS(447),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(447),
    [sym__space_no_newline] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [aux_sym__paths] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_add_token1] = ACTIONS(453),
    [aux_sym_arg_token1] = ACTIONS(453),
    [aux_sym_cmd_token1] = ACTIONS(453),
    [aux_sym_copy_token1] = ACTIONS(453),
    [aux_sym_entrypoint_token1] = ACTIONS(453),
    [aux_sym_env_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [aux_sym_healthcheck_token1] = ACTIONS(453),
    [aux_sym_label_token1] = ACTIONS(453),
    [aux_sym_maintainer_token1] = ACTIONS(453),
    [aux_sym_onbuild_token1] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_shell_token1] = ACTIONS(453),
    [aux_sym_stopsignal_token1] = ACTIONS(453),
    [aux_sym_user_token1] = ACTIONS(453),
    [aux_sym_volume_token1] = ACTIONS(453),
    [aux_sym_workdir_token1] = ACTIONS(453),
    [sym_path] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [aux_sym__anything] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_add_token1] = ACTIONS(430),
    [aux_sym_arg_token1] = ACTIONS(430),
    [aux_sym_cmd_token1] = ACTIONS(430),
    [aux_sym_copy_token1] = ACTIONS(430),
    [aux_sym_entrypoint_token1] = ACTIONS(430),
    [aux_sym_env_token1] = ACTIONS(430),
    [aux_sym_expose_token1] = ACTIONS(430),
    [aux_sym_from_token1] = ACTIONS(430),
    [aux_sym_healthcheck_token1] = ACTIONS(430),
    [aux_sym_label_token1] = ACTIONS(430),
    [aux_sym_maintainer_token1] = ACTIONS(430),
    [aux_sym_onbuild_token1] = ACTIONS(430),
    [aux_sym_run_token1] = ACTIONS(430),
    [aux_sym_shell_token1] = ACTIONS(430),
    [aux_sym_stopsignal_token1] = ACTIONS(430),
    [aux_sym_user_token1] = ACTIONS(430),
    [aux_sym_volume_token1] = ACTIONS(430),
    [aux_sym_workdir_token1] = ACTIONS(430),
    [aux_sym__anything_token1] = ACTIONS(455),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(428),
    [sym_comment] = ACTIONS(430),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(389),
    [sym__space_no_newline] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(255),
    [aux_sym_label_token1] = ACTIONS(255),
    [aux_sym_maintainer_token1] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(255),
    [aux_sym_run_token1] = ACTIONS(255),
    [aux_sym_shell_token1] = ACTIONS(255),
    [aux_sym_stopsignal_token1] = ACTIONS(255),
    [aux_sym_user_token1] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(255),
    [aux_sym_workdir_token1] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(249),
    [aux_sym_arg_token1] = ACTIONS(249),
    [aux_sym_cmd_token1] = ACTIONS(249),
    [aux_sym_copy_token1] = ACTIONS(249),
    [aux_sym_entrypoint_token1] = ACTIONS(249),
    [aux_sym_env_token1] = ACTIONS(249),
    [aux_sym_expose_token1] = ACTIONS(249),
    [aux_sym_from_token1] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(249),
    [aux_sym_label_token1] = ACTIONS(249),
    [aux_sym_maintainer_token1] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(249),
    [aux_sym_run_token1] = ACTIONS(249),
    [aux_sym_shell_token1] = ACTIONS(249),
    [aux_sym_stopsignal_token1] = ACTIONS(249),
    [aux_sym_user_token1] = ACTIONS(249),
    [aux_sym_volume_token1] = ACTIONS(249),
    [aux_sym_workdir_token1] = ACTIONS(249),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
    [aux_sym__anything] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(458),
    [aux_sym_add_token1] = ACTIONS(460),
    [aux_sym_arg_token1] = ACTIONS(460),
    [aux_sym_cmd_token1] = ACTIONS(460),
    [aux_sym_copy_token1] = ACTIONS(460),
    [aux_sym_entrypoint_token1] = ACTIONS(460),
    [aux_sym_env_token1] = ACTIONS(460),
    [aux_sym_expose_token1] = ACTIONS(460),
    [aux_sym_from_token1] = ACTIONS(460),
    [aux_sym_healthcheck_token1] = ACTIONS(460),
    [aux_sym_label_token1] = ACTIONS(460),
    [aux_sym_maintainer_token1] = ACTIONS(460),
    [aux_sym_onbuild_token1] = ACTIONS(460),
    [aux_sym_run_token1] = ACTIONS(460),
    [aux_sym_shell_token1] = ACTIONS(460),
    [aux_sym_stopsignal_token1] = ACTIONS(460),
    [aux_sym_user_token1] = ACTIONS(460),
    [aux_sym_volume_token1] = ACTIONS(460),
    [aux_sym_workdir_token1] = ACTIONS(460),
    [aux_sym__anything_token1] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(458),
    [sym_comment] = ACTIONS(464),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(466),
    [aux_sym_add_token1] = ACTIONS(468),
    [aux_sym_arg_token1] = ACTIONS(468),
    [aux_sym_cmd_token1] = ACTIONS(468),
    [aux_sym_copy_token1] = ACTIONS(468),
    [aux_sym_entrypoint_token1] = ACTIONS(468),
    [aux_sym_env_token1] = ACTIONS(468),
    [aux_sym_expose_token1] = ACTIONS(468),
    [aux_sym_from_token1] = ACTIONS(468),
    [aux_sym_healthcheck_token1] = ACTIONS(468),
    [aux_sym_label_token1] = ACTIONS(468),
    [aux_sym_maintainer_token1] = ACTIONS(468),
    [aux_sym_onbuild_token1] = ACTIONS(468),
    [aux_sym_run_token1] = ACTIONS(468),
    [aux_sym_shell_token1] = ACTIONS(468),
    [aux_sym_stopsignal_token1] = ACTIONS(468),
    [aux_sym_user_token1] = ACTIONS(468),
    [aux_sym_volume_token1] = ACTIONS(468),
    [aux_sym_workdir_token1] = ACTIONS(468),
    [aux_sym__anything_token1] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [aux_sym_add_token1] = ACTIONS(472),
    [aux_sym_arg_token1] = ACTIONS(472),
    [aux_sym_cmd_token1] = ACTIONS(472),
    [aux_sym_copy_token1] = ACTIONS(472),
    [aux_sym_entrypoint_token1] = ACTIONS(472),
    [aux_sym_env_token1] = ACTIONS(472),
    [aux_sym_expose_token1] = ACTIONS(472),
    [aux_sym_from_token1] = ACTIONS(472),
    [aux_sym_healthcheck_token1] = ACTIONS(472),
    [aux_sym_label_token1] = ACTIONS(472),
    [aux_sym_maintainer_token1] = ACTIONS(472),
    [aux_sym_onbuild_token1] = ACTIONS(472),
    [aux_sym_run_token1] = ACTIONS(472),
    [aux_sym_shell_token1] = ACTIONS(472),
    [aux_sym_stopsignal_token1] = ACTIONS(472),
    [aux_sym_user_token1] = ACTIONS(472),
    [aux_sym_volume_token1] = ACTIONS(472),
    [aux_sym_workdir_token1] = ACTIONS(472),
    [sym_path] = ACTIONS(472),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(470),
    [sym__space_no_newline] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [aux_sym__paths] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_add_token1] = ACTIONS(478),
    [aux_sym_arg_token1] = ACTIONS(478),
    [aux_sym_cmd_token1] = ACTIONS(478),
    [aux_sym_copy_token1] = ACTIONS(478),
    [aux_sym_entrypoint_token1] = ACTIONS(478),
    [aux_sym_env_token1] = ACTIONS(478),
    [aux_sym_expose_token1] = ACTIONS(478),
    [aux_sym_from_token1] = ACTIONS(478),
    [aux_sym_healthcheck_token1] = ACTIONS(478),
    [aux_sym_label_token1] = ACTIONS(478),
    [aux_sym_maintainer_token1] = ACTIONS(478),
    [aux_sym_onbuild_token1] = ACTIONS(478),
    [aux_sym_run_token1] = ACTIONS(478),
    [aux_sym_shell_token1] = ACTIONS(478),
    [aux_sym_stopsignal_token1] = ACTIONS(478),
    [aux_sym_user_token1] = ACTIONS(478),
    [aux_sym_volume_token1] = ACTIONS(478),
    [aux_sym_workdir_token1] = ACTIONS(478),
    [sym_path] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(476),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_add_token1] = ACTIONS(480),
    [aux_sym_arg_token1] = ACTIONS(480),
    [aux_sym_cmd_token1] = ACTIONS(480),
    [aux_sym_copy_token1] = ACTIONS(480),
    [aux_sym_entrypoint_token1] = ACTIONS(480),
    [aux_sym_env_token1] = ACTIONS(480),
    [aux_sym_expose_token1] = ACTIONS(480),
    [aux_sym_from_token1] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(480),
    [aux_sym_healthcheck_token1] = ACTIONS(480),
    [aux_sym_label_token1] = ACTIONS(480),
    [aux_sym_maintainer_token1] = ACTIONS(480),
    [aux_sym_onbuild_token1] = ACTIONS(480),
    [aux_sym_run_token1] = ACTIONS(480),
    [aux_sym_shell_token1] = ACTIONS(480),
    [aux_sym_stopsignal_token1] = ACTIONS(480),
    [aux_sym_user_token1] = ACTIONS(480),
    [aux_sym_volume_token1] = ACTIONS(480),
    [aux_sym_workdir_token1] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym__space_no_newline] = ACTIONS(482),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(484),
    [aux_sym_add_token1] = ACTIONS(486),
    [aux_sym_arg_token1] = ACTIONS(486),
    [aux_sym_cmd_token1] = ACTIONS(486),
    [aux_sym_copy_token1] = ACTIONS(486),
    [aux_sym_entrypoint_token1] = ACTIONS(486),
    [aux_sym_env_token1] = ACTIONS(486),
    [aux_sym_expose_token1] = ACTIONS(486),
    [aux_sym_from_token1] = ACTIONS(486),
    [aux_sym_healthcheck_token1] = ACTIONS(486),
    [aux_sym_label_token1] = ACTIONS(486),
    [aux_sym_maintainer_token1] = ACTIONS(486),
    [aux_sym_onbuild_token1] = ACTIONS(486),
    [aux_sym_run_token1] = ACTIONS(486),
    [aux_sym_shell_token1] = ACTIONS(486),
    [aux_sym_stopsignal_token1] = ACTIONS(486),
    [aux_sym_user_token1] = ACTIONS(486),
    [aux_sym_volume_token1] = ACTIONS(486),
    [aux_sym_workdir_token1] = ACTIONS(486),
    [aux_sym__anything_token1] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(484),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [aux_sym__paths] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(490),
    [aux_sym_arg_token1] = ACTIONS(490),
    [aux_sym_cmd_token1] = ACTIONS(490),
    [aux_sym_copy_token1] = ACTIONS(490),
    [aux_sym_entrypoint_token1] = ACTIONS(490),
    [aux_sym_env_token1] = ACTIONS(490),
    [aux_sym_expose_token1] = ACTIONS(490),
    [aux_sym_from_token1] = ACTIONS(490),
    [aux_sym_healthcheck_token1] = ACTIONS(490),
    [aux_sym_label_token1] = ACTIONS(490),
    [aux_sym_maintainer_token1] = ACTIONS(490),
    [aux_sym_onbuild_token1] = ACTIONS(490),
    [aux_sym_run_token1] = ACTIONS(490),
    [aux_sym_shell_token1] = ACTIONS(490),
    [aux_sym_stopsignal_token1] = ACTIONS(490),
    [aux_sym_user_token1] = ACTIONS(490),
    [aux_sym_volume_token1] = ACTIONS(490),
    [aux_sym_workdir_token1] = ACTIONS(490),
    [sym_path] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_add_token1] = ACTIONS(495),
    [aux_sym_arg_token1] = ACTIONS(495),
    [aux_sym_cmd_token1] = ACTIONS(495),
    [aux_sym_copy_token1] = ACTIONS(495),
    [aux_sym_entrypoint_token1] = ACTIONS(495),
    [aux_sym_env_token1] = ACTIONS(495),
    [aux_sym_expose_token1] = ACTIONS(495),
    [aux_sym_from_token1] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(497),
    [aux_sym_healthcheck_token1] = ACTIONS(495),
    [aux_sym_label_token1] = ACTIONS(495),
    [aux_sym_maintainer_token1] = ACTIONS(495),
    [aux_sym_onbuild_token1] = ACTIONS(495),
    [aux_sym_run_token1] = ACTIONS(495),
    [aux_sym_shell_token1] = ACTIONS(495),
    [aux_sym_stopsignal_token1] = ACTIONS(495),
    [aux_sym_user_token1] = ACTIONS(495),
    [aux_sym_volume_token1] = ACTIONS(495),
    [aux_sym_workdir_token1] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(495),
    [sym__space_no_newline] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(490),
    [aux_sym_arg_token1] = ACTIONS(490),
    [aux_sym_cmd_token1] = ACTIONS(490),
    [aux_sym_copy_token1] = ACTIONS(490),
    [aux_sym_entrypoint_token1] = ACTIONS(490),
    [aux_sym_env_token1] = ACTIONS(490),
    [aux_sym_expose_token1] = ACTIONS(490),
    [aux_sym_from_token1] = ACTIONS(490),
    [aux_sym_healthcheck_token1] = ACTIONS(490),
    [aux_sym_label_token1] = ACTIONS(490),
    [aux_sym_maintainer_token1] = ACTIONS(490),
    [aux_sym_onbuild_token1] = ACTIONS(490),
    [aux_sym_run_token1] = ACTIONS(490),
    [aux_sym_shell_token1] = ACTIONS(490),
    [aux_sym_stopsignal_token1] = ACTIONS(490),
    [aux_sym_user_token1] = ACTIONS(490),
    [aux_sym_volume_token1] = ACTIONS(490),
    [aux_sym_workdir_token1] = ACTIONS(490),
    [sym_path] = ACTIONS(490),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_add_token1] = ACTIONS(501),
    [aux_sym_arg_token1] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(503),
    [aux_sym_cmd_token1] = ACTIONS(501),
    [aux_sym_copy_token1] = ACTIONS(501),
    [aux_sym_entrypoint_token1] = ACTIONS(501),
    [aux_sym_env_token1] = ACTIONS(501),
    [aux_sym_expose_token1] = ACTIONS(501),
    [aux_sym_from_token1] = ACTIONS(501),
    [aux_sym_healthcheck_token1] = ACTIONS(501),
    [aux_sym_label_token1] = ACTIONS(501),
    [aux_sym_maintainer_token1] = ACTIONS(501),
    [aux_sym_onbuild_token1] = ACTIONS(501),
    [aux_sym_run_token1] = ACTIONS(501),
    [aux_sym_shell_token1] = ACTIONS(501),
    [aux_sym_stopsignal_token1] = ACTIONS(501),
    [aux_sym_user_token1] = ACTIONS(501),
    [aux_sym_volume_token1] = ACTIONS(501),
    [aux_sym_workdir_token1] = ACTIONS(501),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [aux_sym_add_token1] = ACTIONS(505),
    [aux_sym_arg_token1] = ACTIONS(505),
    [aux_sym_cmd_token1] = ACTIONS(505),
    [aux_sym_copy_token1] = ACTIONS(505),
    [aux_sym_entrypoint_token1] = ACTIONS(505),
    [aux_sym_env_token1] = ACTIONS(505),
    [aux_sym_expose_token1] = ACTIONS(505),
    [aux_sym_from_token1] = ACTIONS(505),
    [aux_sym_healthcheck_token1] = ACTIONS(505),
    [aux_sym_label_token1] = ACTIONS(505),
    [aux_sym_maintainer_token1] = ACTIONS(505),
    [aux_sym_onbuild_token1] = ACTIONS(505),
    [aux_sym_run_token1] = ACTIONS(505),
    [aux_sym_shell_token1] = ACTIONS(505),
    [aux_sym_stopsignal_token1] = ACTIONS(505),
    [aux_sym_user_token1] = ACTIONS(505),
    [aux_sym_volume_token1] = ACTIONS(505),
    [aux_sym_workdir_token1] = ACTIONS(505),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(505),
    [sym__space_no_newline] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_add_token1] = ACTIONS(511),
    [aux_sym_arg_token1] = ACTIONS(511),
    [aux_sym_cmd_token1] = ACTIONS(511),
    [aux_sym_copy_token1] = ACTIONS(511),
    [aux_sym_entrypoint_token1] = ACTIONS(511),
    [aux_sym_env_token1] = ACTIONS(511),
    [aux_sym_expose_token1] = ACTIONS(511),
    [aux_sym_from_token1] = ACTIONS(511),
    [aux_sym_healthcheck_token1] = ACTIONS(511),
    [aux_sym_label_token1] = ACTIONS(511),
    [aux_sym_maintainer_token1] = ACTIONS(511),
    [aux_sym_onbuild_token1] = ACTIONS(511),
    [aux_sym_run_token1] = ACTIONS(511),
    [aux_sym_shell_token1] = ACTIONS(511),
    [aux_sym_stopsignal_token1] = ACTIONS(511),
    [aux_sym_user_token1] = ACTIONS(511),
    [aux_sym_volume_token1] = ACTIONS(511),
    [aux_sym_workdir_token1] = ACTIONS(511),
    [sym_label_key] = ACTIONS(509),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_add_token1] = ACTIONS(513),
    [aux_sym_arg_token1] = ACTIONS(513),
    [aux_sym_cmd_token1] = ACTIONS(513),
    [aux_sym_copy_token1] = ACTIONS(513),
    [aux_sym_entrypoint_token1] = ACTIONS(513),
    [aux_sym_env_token1] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [aux_sym_healthcheck_token1] = ACTIONS(513),
    [aux_sym_label_token1] = ACTIONS(513),
    [aux_sym_maintainer_token1] = ACTIONS(513),
    [aux_sym_onbuild_token1] = ACTIONS(513),
    [aux_sym_run_token1] = ACTIONS(513),
    [aux_sym_shell_token1] = ACTIONS(513),
    [aux_sym_stopsignal_token1] = ACTIONS(513),
    [aux_sym_user_token1] = ACTIONS(513),
    [aux_sym_volume_token1] = ACTIONS(513),
    [aux_sym_workdir_token1] = ACTIONS(513),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(513),
    [sym__space_no_newline] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_add_token1] = ACTIONS(495),
    [aux_sym_arg_token1] = ACTIONS(495),
    [aux_sym_cmd_token1] = ACTIONS(495),
    [aux_sym_copy_token1] = ACTIONS(495),
    [aux_sym_entrypoint_token1] = ACTIONS(495),
    [aux_sym_env_token1] = ACTIONS(495),
    [aux_sym_expose_token1] = ACTIONS(495),
    [aux_sym_from_token1] = ACTIONS(495),
    [aux_sym_healthcheck_token1] = ACTIONS(495),
    [aux_sym_label_token1] = ACTIONS(495),
    [aux_sym_maintainer_token1] = ACTIONS(495),
    [aux_sym_onbuild_token1] = ACTIONS(495),
    [aux_sym_run_token1] = ACTIONS(495),
    [aux_sym_shell_token1] = ACTIONS(495),
    [aux_sym_stopsignal_token1] = ACTIONS(495),
    [aux_sym_user_token1] = ACTIONS(495),
    [aux_sym_volume_token1] = ACTIONS(495),
    [aux_sym_workdir_token1] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(495),
    [sym__space_no_newline] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_healthcheck_token1] = ACTIONS(263),
    [aux_sym_label_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_onbuild_token1] = ACTIONS(263),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_shell_token1] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(263),
    [aux_sym_user_token1] = ACTIONS(263),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(406),
    [aux_sym_arg_token1] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(406),
    [aux_sym_copy_token1] = ACTIONS(406),
    [aux_sym_entrypoint_token1] = ACTIONS(406),
    [aux_sym_env_token1] = ACTIONS(406),
    [aux_sym_expose_token1] = ACTIONS(406),
    [aux_sym_from_token1] = ACTIONS(406),
    [aux_sym_healthcheck_token1] = ACTIONS(406),
    [aux_sym_label_token1] = ACTIONS(406),
    [aux_sym_maintainer_token1] = ACTIONS(406),
    [aux_sym_onbuild_token1] = ACTIONS(406),
    [aux_sym_run_token1] = ACTIONS(406),
    [aux_sym_shell_token1] = ACTIONS(406),
    [aux_sym_stopsignal_token1] = ACTIONS(406),
    [aux_sym_user_token1] = ACTIONS(406),
    [aux_sym_volume_token1] = ACTIONS(406),
    [aux_sym_workdir_token1] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(406),
    [sym__space_no_newline] = ACTIONS(412),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_add_token1] = ACTIONS(519),
    [aux_sym_arg_token1] = ACTIONS(519),
    [aux_sym_cmd_token1] = ACTIONS(519),
    [aux_sym_copy_token1] = ACTIONS(519),
    [aux_sym_entrypoint_token1] = ACTIONS(519),
    [aux_sym_env_token1] = ACTIONS(519),
    [aux_sym_expose_token1] = ACTIONS(519),
    [aux_sym_from_token1] = ACTIONS(519),
    [aux_sym_healthcheck_token1] = ACTIONS(519),
    [aux_sym_label_token1] = ACTIONS(519),
    [aux_sym_maintainer_token1] = ACTIONS(519),
    [aux_sym_onbuild_token1] = ACTIONS(519),
    [aux_sym_run_token1] = ACTIONS(519),
    [aux_sym_shell_token1] = ACTIONS(519),
    [aux_sym_stopsignal_token1] = ACTIONS(519),
    [aux_sym_user_token1] = ACTIONS(519),
    [aux_sym_volume_token1] = ACTIONS(519),
    [aux_sym_workdir_token1] = ACTIONS(519),
    [sym_label_key] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(389),
    [sym__space_no_newline] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_add_token1] = ACTIONS(521),
    [aux_sym_arg_token1] = ACTIONS(521),
    [aux_sym_cmd_token1] = ACTIONS(521),
    [aux_sym_copy_token1] = ACTIONS(521),
    [aux_sym_entrypoint_token1] = ACTIONS(521),
    [aux_sym_env_token1] = ACTIONS(521),
    [aux_sym_expose_token1] = ACTIONS(521),
    [aux_sym_from_token1] = ACTIONS(521),
    [aux_sym_healthcheck_token1] = ACTIONS(521),
    [aux_sym_label_token1] = ACTIONS(521),
    [aux_sym_maintainer_token1] = ACTIONS(521),
    [aux_sym_onbuild_token1] = ACTIONS(521),
    [aux_sym_run_token1] = ACTIONS(521),
    [aux_sym_shell_token1] = ACTIONS(521),
    [aux_sym_stopsignal_token1] = ACTIONS(521),
    [aux_sym_user_token1] = ACTIONS(521),
    [aux_sym_volume_token1] = ACTIONS(521),
    [aux_sym_workdir_token1] = ACTIONS(521),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(521),
    [sym__space_no_newline] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [aux_sym_add_token1] = ACTIONS(525),
    [aux_sym_arg_token1] = ACTIONS(525),
    [aux_sym_cmd_token1] = ACTIONS(525),
    [aux_sym_copy_token1] = ACTIONS(525),
    [aux_sym_entrypoint_token1] = ACTIONS(525),
    [aux_sym_env_token1] = ACTIONS(525),
    [aux_sym_expose_token1] = ACTIONS(525),
    [aux_sym_from_token1] = ACTIONS(525),
    [anon_sym_COLON] = ACTIONS(527),
    [aux_sym_healthcheck_token1] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(525),
    [aux_sym_maintainer_token1] = ACTIONS(525),
    [aux_sym_onbuild_token1] = ACTIONS(525),
    [aux_sym_run_token1] = ACTIONS(525),
    [aux_sym_shell_token1] = ACTIONS(525),
    [aux_sym_stopsignal_token1] = ACTIONS(525),
    [aux_sym_user_token1] = ACTIONS(525),
    [aux_sym_volume_token1] = ACTIONS(525),
    [aux_sym_workdir_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [aux_sym_healthcheck_token1] = ACTIONS(275),
    [aux_sym_label_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_onbuild_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym__space_no_newline] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [aux_sym_add_token1] = ACTIONS(525),
    [aux_sym_arg_token1] = ACTIONS(525),
    [aux_sym_cmd_token1] = ACTIONS(525),
    [aux_sym_copy_token1] = ACTIONS(525),
    [aux_sym_entrypoint_token1] = ACTIONS(525),
    [aux_sym_env_token1] = ACTIONS(525),
    [aux_sym_expose_token1] = ACTIONS(525),
    [aux_sym_from_token1] = ACTIONS(525),
    [anon_sym_COLON] = ACTIONS(529),
    [aux_sym_healthcheck_token1] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(525),
    [aux_sym_maintainer_token1] = ACTIONS(525),
    [aux_sym_onbuild_token1] = ACTIONS(525),
    [aux_sym_run_token1] = ACTIONS(525),
    [aux_sym_shell_token1] = ACTIONS(525),
    [aux_sym_stopsignal_token1] = ACTIONS(525),
    [aux_sym_user_token1] = ACTIONS(525),
    [aux_sym_volume_token1] = ACTIONS(525),
    [aux_sym_workdir_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_add_token1] = ACTIONS(531),
    [aux_sym_arg_token1] = ACTIONS(531),
    [aux_sym_cmd_token1] = ACTIONS(531),
    [aux_sym_copy_token1] = ACTIONS(531),
    [aux_sym_entrypoint_token1] = ACTIONS(531),
    [aux_sym_env_token1] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [aux_sym_healthcheck_token1] = ACTIONS(531),
    [aux_sym_label_token1] = ACTIONS(531),
    [aux_sym_maintainer_token1] = ACTIONS(531),
    [aux_sym_onbuild_token1] = ACTIONS(531),
    [aux_sym_run_token1] = ACTIONS(531),
    [aux_sym_shell_token1] = ACTIONS(531),
    [aux_sym_stopsignal_token1] = ACTIONS(531),
    [aux_sym_user_token1] = ACTIONS(531),
    [aux_sym_volume_token1] = ACTIONS(531),
    [aux_sym_workdir_token1] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(531),
    [sym__space_no_newline] = ACTIONS(533),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_add_token1] = ACTIONS(441),
    [aux_sym_arg_token1] = ACTIONS(441),
    [aux_sym_cmd_token1] = ACTIONS(441),
    [aux_sym_copy_token1] = ACTIONS(441),
    [aux_sym_entrypoint_token1] = ACTIONS(441),
    [aux_sym_env_token1] = ACTIONS(441),
    [aux_sym_expose_token1] = ACTIONS(441),
    [aux_sym_from_token1] = ACTIONS(441),
    [aux_sym_healthcheck_token1] = ACTIONS(441),
    [aux_sym_label_token1] = ACTIONS(441),
    [aux_sym_maintainer_token1] = ACTIONS(441),
    [aux_sym_onbuild_token1] = ACTIONS(441),
    [aux_sym_run_token1] = ACTIONS(441),
    [aux_sym_shell_token1] = ACTIONS(441),
    [aux_sym_stopsignal_token1] = ACTIONS(441),
    [aux_sym_user_token1] = ACTIONS(441),
    [aux_sym_volume_token1] = ACTIONS(441),
    [aux_sym_workdir_token1] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym__space_no_newline] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_add_token1] = ACTIONS(535),
    [aux_sym_arg_token1] = ACTIONS(535),
    [aux_sym_cmd_token1] = ACTIONS(535),
    [aux_sym_copy_token1] = ACTIONS(535),
    [aux_sym_entrypoint_token1] = ACTIONS(535),
    [aux_sym_env_token1] = ACTIONS(535),
    [aux_sym_expose_token1] = ACTIONS(535),
    [aux_sym_from_token1] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [aux_sym_healthcheck_token1] = ACTIONS(535),
    [aux_sym_label_token1] = ACTIONS(535),
    [aux_sym_maintainer_token1] = ACTIONS(535),
    [aux_sym_onbuild_token1] = ACTIONS(535),
    [aux_sym_run_token1] = ACTIONS(535),
    [aux_sym_shell_token1] = ACTIONS(535),
    [aux_sym_stopsignal_token1] = ACTIONS(535),
    [aux_sym_user_token1] = ACTIONS(535),
    [aux_sym_volume_token1] = ACTIONS(535),
    [aux_sym_workdir_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(535),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [aux_sym_add_token1] = ACTIONS(537),
    [aux_sym_arg_token1] = ACTIONS(537),
    [aux_sym_cmd_token1] = ACTIONS(537),
    [aux_sym_copy_token1] = ACTIONS(537),
    [aux_sym_entrypoint_token1] = ACTIONS(537),
    [aux_sym_env_token1] = ACTIONS(537),
    [aux_sym_expose_token1] = ACTIONS(537),
    [aux_sym_from_token1] = ACTIONS(537),
    [anon_sym_COLON] = ACTIONS(537),
    [aux_sym_healthcheck_token1] = ACTIONS(537),
    [aux_sym_label_token1] = ACTIONS(537),
    [aux_sym_maintainer_token1] = ACTIONS(537),
    [aux_sym_onbuild_token1] = ACTIONS(537),
    [aux_sym_run_token1] = ACTIONS(537),
    [aux_sym_shell_token1] = ACTIONS(537),
    [aux_sym_stopsignal_token1] = ACTIONS(537),
    [aux_sym_user_token1] = ACTIONS(537),
    [aux_sym_volume_token1] = ACTIONS(537),
    [aux_sym_workdir_token1] = ACTIONS(537),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(537),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(541),
    [aux_sym_arg_token1] = ACTIONS(541),
    [aux_sym_cmd_token1] = ACTIONS(541),
    [aux_sym_copy_token1] = ACTIONS(541),
    [aux_sym_entrypoint_token1] = ACTIONS(541),
    [aux_sym_env_token1] = ACTIONS(541),
    [aux_sym_expose_token1] = ACTIONS(541),
    [aux_sym_from_token1] = ACTIONS(541),
    [aux_sym_healthcheck_token1] = ACTIONS(541),
    [aux_sym_label_token1] = ACTIONS(541),
    [aux_sym_maintainer_token1] = ACTIONS(541),
    [aux_sym_onbuild_token1] = ACTIONS(541),
    [aux_sym_run_token1] = ACTIONS(541),
    [aux_sym_shell_token1] = ACTIONS(541),
    [aux_sym_stopsignal_token1] = ACTIONS(541),
    [aux_sym_user_token1] = ACTIONS(541),
    [aux_sym_volume_token1] = ACTIONS(541),
    [aux_sym_workdir_token1] = ACTIONS(541),
    [sym_label_key] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(539),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_add_token1] = ACTIONS(543),
    [aux_sym_arg_token1] = ACTIONS(543),
    [aux_sym_cmd_token1] = ACTIONS(543),
    [aux_sym_copy_token1] = ACTIONS(543),
    [aux_sym_entrypoint_token1] = ACTIONS(543),
    [aux_sym_env_token1] = ACTIONS(543),
    [aux_sym_expose_token1] = ACTIONS(543),
    [aux_sym_from_token1] = ACTIONS(543),
    [aux_sym_healthcheck_token1] = ACTIONS(543),
    [aux_sym_label_token1] = ACTIONS(543),
    [aux_sym_maintainer_token1] = ACTIONS(543),
    [aux_sym_onbuild_token1] = ACTIONS(543),
    [aux_sym_run_token1] = ACTIONS(543),
    [aux_sym_shell_token1] = ACTIONS(543),
    [aux_sym_stopsignal_token1] = ACTIONS(543),
    [aux_sym_user_token1] = ACTIONS(543),
    [aux_sym_volume_token1] = ACTIONS(543),
    [aux_sym_workdir_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(543),
    [sym__space_no_newline] = ACTIONS(545),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [aux_sym_add_token1] = ACTIONS(547),
    [aux_sym_arg_token1] = ACTIONS(547),
    [aux_sym_cmd_token1] = ACTIONS(547),
    [aux_sym_copy_token1] = ACTIONS(547),
    [aux_sym_entrypoint_token1] = ACTIONS(547),
    [aux_sym_env_token1] = ACTIONS(547),
    [aux_sym_expose_token1] = ACTIONS(547),
    [aux_sym_from_token1] = ACTIONS(547),
    [aux_sym_healthcheck_token1] = ACTIONS(547),
    [aux_sym_label_token1] = ACTIONS(547),
    [aux_sym_maintainer_token1] = ACTIONS(547),
    [aux_sym_onbuild_token1] = ACTIONS(547),
    [aux_sym_run_token1] = ACTIONS(547),
    [aux_sym_shell_token1] = ACTIONS(547),
    [aux_sym_stopsignal_token1] = ACTIONS(547),
    [aux_sym_user_token1] = ACTIONS(547),
    [aux_sym_volume_token1] = ACTIONS(547),
    [aux_sym_workdir_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(547),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [aux_sym_add_token1] = ACTIONS(549),
    [aux_sym_arg_token1] = ACTIONS(549),
    [aux_sym_cmd_token1] = ACTIONS(549),
    [aux_sym_copy_token1] = ACTIONS(549),
    [aux_sym_entrypoint_token1] = ACTIONS(549),
    [aux_sym_env_token1] = ACTIONS(549),
    [aux_sym_expose_token1] = ACTIONS(549),
    [aux_sym_from_token1] = ACTIONS(549),
    [aux_sym_healthcheck_token1] = ACTIONS(549),
    [aux_sym_label_token1] = ACTIONS(549),
    [aux_sym_maintainer_token1] = ACTIONS(549),
    [aux_sym_onbuild_token1] = ACTIONS(549),
    [aux_sym_run_token1] = ACTIONS(549),
    [aux_sym_shell_token1] = ACTIONS(549),
    [aux_sym_stopsignal_token1] = ACTIONS(549),
    [aux_sym_user_token1] = ACTIONS(549),
    [aux_sym_volume_token1] = ACTIONS(549),
    [aux_sym_workdir_token1] = ACTIONS(549),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [aux_sym_add_token1] = ACTIONS(551),
    [aux_sym_arg_token1] = ACTIONS(551),
    [aux_sym_cmd_token1] = ACTIONS(551),
    [aux_sym_copy_token1] = ACTIONS(551),
    [aux_sym_entrypoint_token1] = ACTIONS(551),
    [aux_sym_env_token1] = ACTIONS(551),
    [aux_sym_expose_token1] = ACTIONS(551),
    [aux_sym_from_token1] = ACTIONS(551),
    [aux_sym_healthcheck_token1] = ACTIONS(551),
    [aux_sym_label_token1] = ACTIONS(551),
    [aux_sym_maintainer_token1] = ACTIONS(551),
    [aux_sym_onbuild_token1] = ACTIONS(551),
    [aux_sym_run_token1] = ACTIONS(551),
    [aux_sym_shell_token1] = ACTIONS(551),
    [aux_sym_stopsignal_token1] = ACTIONS(551),
    [aux_sym_user_token1] = ACTIONS(551),
    [aux_sym_volume_token1] = ACTIONS(551),
    [aux_sym_workdir_token1] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [aux_sym_add_token1] = ACTIONS(553),
    [aux_sym_arg_token1] = ACTIONS(553),
    [aux_sym_cmd_token1] = ACTIONS(553),
    [aux_sym_copy_token1] = ACTIONS(553),
    [aux_sym_entrypoint_token1] = ACTIONS(553),
    [aux_sym_env_token1] = ACTIONS(553),
    [aux_sym_expose_token1] = ACTIONS(553),
    [aux_sym_from_token1] = ACTIONS(553),
    [aux_sym_healthcheck_token1] = ACTIONS(553),
    [aux_sym_label_token1] = ACTIONS(553),
    [aux_sym_maintainer_token1] = ACTIONS(553),
    [aux_sym_onbuild_token1] = ACTIONS(553),
    [aux_sym_run_token1] = ACTIONS(553),
    [aux_sym_shell_token1] = ACTIONS(553),
    [aux_sym_stopsignal_token1] = ACTIONS(553),
    [aux_sym_user_token1] = ACTIONS(553),
    [aux_sym_volume_token1] = ACTIONS(553),
    [aux_sym_workdir_token1] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_add_token1] = ACTIONS(451),
    [aux_sym_arg_token1] = ACTIONS(451),
    [aux_sym_cmd_token1] = ACTIONS(451),
    [aux_sym_copy_token1] = ACTIONS(451),
    [aux_sym_entrypoint_token1] = ACTIONS(451),
    [aux_sym_env_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [aux_sym_healthcheck_token1] = ACTIONS(451),
    [aux_sym_label_token1] = ACTIONS(451),
    [aux_sym_maintainer_token1] = ACTIONS(451),
    [aux_sym_onbuild_token1] = ACTIONS(451),
    [aux_sym_run_token1] = ACTIONS(451),
    [aux_sym_shell_token1] = ACTIONS(451),
    [aux_sym_stopsignal_token1] = ACTIONS(451),
    [aux_sym_user_token1] = ACTIONS(451),
    [aux_sym_volume_token1] = ACTIONS(451),
    [aux_sym_workdir_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [aux_sym_add_token1] = ACTIONS(555),
    [aux_sym_arg_token1] = ACTIONS(555),
    [aux_sym_cmd_token1] = ACTIONS(555),
    [aux_sym_copy_token1] = ACTIONS(555),
    [aux_sym_entrypoint_token1] = ACTIONS(555),
    [aux_sym_env_token1] = ACTIONS(555),
    [aux_sym_expose_token1] = ACTIONS(555),
    [aux_sym_from_token1] = ACTIONS(555),
    [aux_sym_healthcheck_token1] = ACTIONS(555),
    [aux_sym_label_token1] = ACTIONS(555),
    [aux_sym_maintainer_token1] = ACTIONS(555),
    [aux_sym_onbuild_token1] = ACTIONS(555),
    [aux_sym_run_token1] = ACTIONS(555),
    [aux_sym_shell_token1] = ACTIONS(555),
    [aux_sym_stopsignal_token1] = ACTIONS(555),
    [aux_sym_user_token1] = ACTIONS(555),
    [aux_sym_volume_token1] = ACTIONS(555),
    [aux_sym_workdir_token1] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [aux_sym_add_token1] = ACTIONS(557),
    [aux_sym_arg_token1] = ACTIONS(557),
    [aux_sym_cmd_token1] = ACTIONS(557),
    [aux_sym_copy_token1] = ACTIONS(557),
    [aux_sym_entrypoint_token1] = ACTIONS(557),
    [aux_sym_env_token1] = ACTIONS(557),
    [aux_sym_expose_token1] = ACTIONS(557),
    [aux_sym_from_token1] = ACTIONS(557),
    [aux_sym_healthcheck_token1] = ACTIONS(557),
    [aux_sym_label_token1] = ACTIONS(557),
    [aux_sym_maintainer_token1] = ACTIONS(557),
    [aux_sym_onbuild_token1] = ACTIONS(557),
    [aux_sym_run_token1] = ACTIONS(557),
    [aux_sym_shell_token1] = ACTIONS(557),
    [aux_sym_stopsignal_token1] = ACTIONS(557),
    [aux_sym_user_token1] = ACTIONS(557),
    [aux_sym_volume_token1] = ACTIONS(557),
    [aux_sym_workdir_token1] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(557),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_add_token1] = ACTIONS(495),
    [aux_sym_arg_token1] = ACTIONS(495),
    [aux_sym_cmd_token1] = ACTIONS(495),
    [aux_sym_copy_token1] = ACTIONS(495),
    [aux_sym_entrypoint_token1] = ACTIONS(495),
    [aux_sym_env_token1] = ACTIONS(495),
    [aux_sym_expose_token1] = ACTIONS(495),
    [aux_sym_from_token1] = ACTIONS(495),
    [aux_sym_healthcheck_token1] = ACTIONS(495),
    [aux_sym_label_token1] = ACTIONS(495),
    [aux_sym_maintainer_token1] = ACTIONS(495),
    [aux_sym_onbuild_token1] = ACTIONS(495),
    [aux_sym_run_token1] = ACTIONS(495),
    [aux_sym_shell_token1] = ACTIONS(495),
    [aux_sym_stopsignal_token1] = ACTIONS(495),
    [aux_sym_user_token1] = ACTIONS(495),
    [aux_sym_volume_token1] = ACTIONS(495),
    [aux_sym_workdir_token1] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [aux_sym_add_token1] = ACTIONS(559),
    [aux_sym_arg_token1] = ACTIONS(559),
    [aux_sym_cmd_token1] = ACTIONS(559),
    [aux_sym_copy_token1] = ACTIONS(559),
    [aux_sym_entrypoint_token1] = ACTIONS(559),
    [aux_sym_env_token1] = ACTIONS(559),
    [aux_sym_expose_token1] = ACTIONS(559),
    [aux_sym_from_token1] = ACTIONS(559),
    [aux_sym_healthcheck_token1] = ACTIONS(559),
    [aux_sym_label_token1] = ACTIONS(559),
    [aux_sym_maintainer_token1] = ACTIONS(559),
    [aux_sym_onbuild_token1] = ACTIONS(559),
    [aux_sym_run_token1] = ACTIONS(559),
    [aux_sym_shell_token1] = ACTIONS(559),
    [aux_sym_stopsignal_token1] = ACTIONS(559),
    [aux_sym_user_token1] = ACTIONS(559),
    [aux_sym_volume_token1] = ACTIONS(559),
    [aux_sym_workdir_token1] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(559),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [aux_sym_add_token1] = ACTIONS(561),
    [aux_sym_arg_token1] = ACTIONS(561),
    [aux_sym_cmd_token1] = ACTIONS(561),
    [aux_sym_copy_token1] = ACTIONS(561),
    [aux_sym_entrypoint_token1] = ACTIONS(561),
    [aux_sym_env_token1] = ACTIONS(561),
    [aux_sym_expose_token1] = ACTIONS(561),
    [aux_sym_from_token1] = ACTIONS(561),
    [aux_sym_healthcheck_token1] = ACTIONS(561),
    [aux_sym_label_token1] = ACTIONS(561),
    [aux_sym_maintainer_token1] = ACTIONS(561),
    [aux_sym_onbuild_token1] = ACTIONS(561),
    [aux_sym_run_token1] = ACTIONS(561),
    [aux_sym_shell_token1] = ACTIONS(561),
    [aux_sym_stopsignal_token1] = ACTIONS(561),
    [aux_sym_user_token1] = ACTIONS(561),
    [aux_sym_volume_token1] = ACTIONS(561),
    [aux_sym_workdir_token1] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [aux_sym_add_token1] = ACTIONS(563),
    [aux_sym_arg_token1] = ACTIONS(563),
    [aux_sym_cmd_token1] = ACTIONS(563),
    [aux_sym_copy_token1] = ACTIONS(563),
    [aux_sym_entrypoint_token1] = ACTIONS(563),
    [aux_sym_env_token1] = ACTIONS(563),
    [aux_sym_expose_token1] = ACTIONS(563),
    [aux_sym_from_token1] = ACTIONS(563),
    [aux_sym_healthcheck_token1] = ACTIONS(563),
    [aux_sym_label_token1] = ACTIONS(563),
    [aux_sym_maintainer_token1] = ACTIONS(563),
    [aux_sym_onbuild_token1] = ACTIONS(563),
    [aux_sym_run_token1] = ACTIONS(563),
    [aux_sym_shell_token1] = ACTIONS(563),
    [aux_sym_stopsignal_token1] = ACTIONS(563),
    [aux_sym_user_token1] = ACTIONS(563),
    [aux_sym_volume_token1] = ACTIONS(563),
    [aux_sym_workdir_token1] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [aux_sym_add_token1] = ACTIONS(565),
    [aux_sym_arg_token1] = ACTIONS(565),
    [aux_sym_cmd_token1] = ACTIONS(565),
    [aux_sym_copy_token1] = ACTIONS(565),
    [aux_sym_entrypoint_token1] = ACTIONS(565),
    [aux_sym_env_token1] = ACTIONS(565),
    [aux_sym_expose_token1] = ACTIONS(565),
    [aux_sym_from_token1] = ACTIONS(565),
    [aux_sym_healthcheck_token1] = ACTIONS(565),
    [aux_sym_label_token1] = ACTIONS(565),
    [aux_sym_maintainer_token1] = ACTIONS(565),
    [aux_sym_onbuild_token1] = ACTIONS(565),
    [aux_sym_run_token1] = ACTIONS(565),
    [aux_sym_shell_token1] = ACTIONS(565),
    [aux_sym_stopsignal_token1] = ACTIONS(565),
    [aux_sym_user_token1] = ACTIONS(565),
    [aux_sym_volume_token1] = ACTIONS(565),
    [aux_sym_workdir_token1] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(565),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(567),
    [aux_sym_add_token1] = ACTIONS(567),
    [aux_sym_arg_token1] = ACTIONS(567),
    [aux_sym_cmd_token1] = ACTIONS(567),
    [aux_sym_copy_token1] = ACTIONS(567),
    [aux_sym_entrypoint_token1] = ACTIONS(567),
    [aux_sym_env_token1] = ACTIONS(567),
    [aux_sym_expose_token1] = ACTIONS(567),
    [aux_sym_from_token1] = ACTIONS(567),
    [aux_sym_healthcheck_token1] = ACTIONS(567),
    [aux_sym_label_token1] = ACTIONS(567),
    [aux_sym_maintainer_token1] = ACTIONS(567),
    [aux_sym_onbuild_token1] = ACTIONS(567),
    [aux_sym_run_token1] = ACTIONS(567),
    [aux_sym_shell_token1] = ACTIONS(567),
    [aux_sym_stopsignal_token1] = ACTIONS(567),
    [aux_sym_user_token1] = ACTIONS(567),
    [aux_sym_volume_token1] = ACTIONS(567),
    [aux_sym_workdir_token1] = ACTIONS(567),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(567),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_add_token1] = ACTIONS(543),
    [aux_sym_arg_token1] = ACTIONS(543),
    [aux_sym_cmd_token1] = ACTIONS(543),
    [aux_sym_copy_token1] = ACTIONS(543),
    [aux_sym_entrypoint_token1] = ACTIONS(543),
    [aux_sym_env_token1] = ACTIONS(543),
    [aux_sym_expose_token1] = ACTIONS(543),
    [aux_sym_from_token1] = ACTIONS(543),
    [aux_sym_healthcheck_token1] = ACTIONS(543),
    [aux_sym_label_token1] = ACTIONS(543),
    [aux_sym_maintainer_token1] = ACTIONS(543),
    [aux_sym_onbuild_token1] = ACTIONS(543),
    [aux_sym_run_token1] = ACTIONS(543),
    [aux_sym_shell_token1] = ACTIONS(543),
    [aux_sym_stopsignal_token1] = ACTIONS(543),
    [aux_sym_user_token1] = ACTIONS(543),
    [aux_sym_volume_token1] = ACTIONS(543),
    [aux_sym_workdir_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [aux_sym_add_token1] = ACTIONS(569),
    [aux_sym_arg_token1] = ACTIONS(569),
    [aux_sym_cmd_token1] = ACTIONS(569),
    [aux_sym_copy_token1] = ACTIONS(569),
    [aux_sym_entrypoint_token1] = ACTIONS(569),
    [aux_sym_env_token1] = ACTIONS(569),
    [aux_sym_expose_token1] = ACTIONS(569),
    [aux_sym_from_token1] = ACTIONS(569),
    [aux_sym_healthcheck_token1] = ACTIONS(569),
    [aux_sym_label_token1] = ACTIONS(569),
    [aux_sym_maintainer_token1] = ACTIONS(569),
    [aux_sym_onbuild_token1] = ACTIONS(569),
    [aux_sym_run_token1] = ACTIONS(569),
    [aux_sym_shell_token1] = ACTIONS(569),
    [aux_sym_stopsignal_token1] = ACTIONS(569),
    [aux_sym_user_token1] = ACTIONS(569),
    [aux_sym_volume_token1] = ACTIONS(569),
    [aux_sym_workdir_token1] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [aux_sym_add_token1] = ACTIONS(571),
    [aux_sym_arg_token1] = ACTIONS(571),
    [aux_sym_cmd_token1] = ACTIONS(571),
    [aux_sym_copy_token1] = ACTIONS(571),
    [aux_sym_entrypoint_token1] = ACTIONS(571),
    [aux_sym_env_token1] = ACTIONS(571),
    [aux_sym_expose_token1] = ACTIONS(571),
    [aux_sym_from_token1] = ACTIONS(571),
    [aux_sym_healthcheck_token1] = ACTIONS(571),
    [aux_sym_label_token1] = ACTIONS(571),
    [aux_sym_maintainer_token1] = ACTIONS(571),
    [aux_sym_onbuild_token1] = ACTIONS(571),
    [aux_sym_run_token1] = ACTIONS(571),
    [aux_sym_shell_token1] = ACTIONS(571),
    [aux_sym_stopsignal_token1] = ACTIONS(571),
    [aux_sym_user_token1] = ACTIONS(571),
    [aux_sym_volume_token1] = ACTIONS(571),
    [aux_sym_workdir_token1] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [aux_sym_add_token1] = ACTIONS(573),
    [aux_sym_arg_token1] = ACTIONS(573),
    [aux_sym_cmd_token1] = ACTIONS(573),
    [aux_sym_copy_token1] = ACTIONS(573),
    [aux_sym_entrypoint_token1] = ACTIONS(573),
    [aux_sym_env_token1] = ACTIONS(573),
    [aux_sym_expose_token1] = ACTIONS(573),
    [aux_sym_from_token1] = ACTIONS(573),
    [aux_sym_healthcheck_token1] = ACTIONS(573),
    [aux_sym_label_token1] = ACTIONS(573),
    [aux_sym_maintainer_token1] = ACTIONS(573),
    [aux_sym_onbuild_token1] = ACTIONS(573),
    [aux_sym_run_token1] = ACTIONS(573),
    [aux_sym_shell_token1] = ACTIONS(573),
    [aux_sym_stopsignal_token1] = ACTIONS(573),
    [aux_sym_user_token1] = ACTIONS(573),
    [aux_sym_volume_token1] = ACTIONS(573),
    [aux_sym_workdir_token1] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [aux_sym_add_token1] = ACTIONS(575),
    [aux_sym_arg_token1] = ACTIONS(575),
    [aux_sym_cmd_token1] = ACTIONS(575),
    [aux_sym_copy_token1] = ACTIONS(575),
    [aux_sym_entrypoint_token1] = ACTIONS(575),
    [aux_sym_env_token1] = ACTIONS(575),
    [aux_sym_expose_token1] = ACTIONS(575),
    [aux_sym_from_token1] = ACTIONS(575),
    [aux_sym_healthcheck_token1] = ACTIONS(575),
    [aux_sym_label_token1] = ACTIONS(575),
    [aux_sym_maintainer_token1] = ACTIONS(575),
    [aux_sym_onbuild_token1] = ACTIONS(575),
    [aux_sym_run_token1] = ACTIONS(575),
    [aux_sym_shell_token1] = ACTIONS(575),
    [aux_sym_stopsignal_token1] = ACTIONS(575),
    [aux_sym_user_token1] = ACTIONS(575),
    [aux_sym_volume_token1] = ACTIONS(575),
    [aux_sym_workdir_token1] = ACTIONS(575),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [aux_sym_add_token1] = ACTIONS(577),
    [aux_sym_arg_token1] = ACTIONS(577),
    [aux_sym_cmd_token1] = ACTIONS(577),
    [aux_sym_copy_token1] = ACTIONS(577),
    [aux_sym_entrypoint_token1] = ACTIONS(577),
    [aux_sym_env_token1] = ACTIONS(577),
    [aux_sym_expose_token1] = ACTIONS(577),
    [aux_sym_from_token1] = ACTIONS(577),
    [aux_sym_healthcheck_token1] = ACTIONS(577),
    [aux_sym_label_token1] = ACTIONS(577),
    [aux_sym_maintainer_token1] = ACTIONS(577),
    [aux_sym_onbuild_token1] = ACTIONS(577),
    [aux_sym_run_token1] = ACTIONS(577),
    [aux_sym_shell_token1] = ACTIONS(577),
    [aux_sym_stopsignal_token1] = ACTIONS(577),
    [aux_sym_user_token1] = ACTIONS(577),
    [aux_sym_volume_token1] = ACTIONS(577),
    [aux_sym_workdir_token1] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_add_token1] = ACTIONS(476),
    [aux_sym_arg_token1] = ACTIONS(476),
    [aux_sym_cmd_token1] = ACTIONS(476),
    [aux_sym_copy_token1] = ACTIONS(476),
    [aux_sym_entrypoint_token1] = ACTIONS(476),
    [aux_sym_env_token1] = ACTIONS(476),
    [aux_sym_expose_token1] = ACTIONS(476),
    [aux_sym_from_token1] = ACTIONS(476),
    [aux_sym_healthcheck_token1] = ACTIONS(476),
    [aux_sym_label_token1] = ACTIONS(476),
    [aux_sym_maintainer_token1] = ACTIONS(476),
    [aux_sym_onbuild_token1] = ACTIONS(476),
    [aux_sym_run_token1] = ACTIONS(476),
    [aux_sym_shell_token1] = ACTIONS(476),
    [aux_sym_stopsignal_token1] = ACTIONS(476),
    [aux_sym_user_token1] = ACTIONS(476),
    [aux_sym_volume_token1] = ACTIONS(476),
    [aux_sym_workdir_token1] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(476),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_add_token1] = ACTIONS(521),
    [aux_sym_arg_token1] = ACTIONS(521),
    [aux_sym_cmd_token1] = ACTIONS(521),
    [aux_sym_copy_token1] = ACTIONS(521),
    [aux_sym_entrypoint_token1] = ACTIONS(521),
    [aux_sym_env_token1] = ACTIONS(521),
    [aux_sym_expose_token1] = ACTIONS(521),
    [aux_sym_from_token1] = ACTIONS(521),
    [aux_sym_healthcheck_token1] = ACTIONS(521),
    [aux_sym_label_token1] = ACTIONS(521),
    [aux_sym_maintainer_token1] = ACTIONS(521),
    [aux_sym_onbuild_token1] = ACTIONS(521),
    [aux_sym_run_token1] = ACTIONS(521),
    [aux_sym_shell_token1] = ACTIONS(521),
    [aux_sym_stopsignal_token1] = ACTIONS(521),
    [aux_sym_user_token1] = ACTIONS(521),
    [aux_sym_volume_token1] = ACTIONS(521),
    [aux_sym_workdir_token1] = ACTIONS(521),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(521),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [aux_sym_add_token1] = ACTIONS(579),
    [aux_sym_arg_token1] = ACTIONS(579),
    [aux_sym_cmd_token1] = ACTIONS(579),
    [aux_sym_copy_token1] = ACTIONS(579),
    [aux_sym_entrypoint_token1] = ACTIONS(579),
    [aux_sym_env_token1] = ACTIONS(579),
    [aux_sym_expose_token1] = ACTIONS(579),
    [aux_sym_from_token1] = ACTIONS(579),
    [aux_sym_healthcheck_token1] = ACTIONS(579),
    [aux_sym_label_token1] = ACTIONS(579),
    [aux_sym_maintainer_token1] = ACTIONS(579),
    [aux_sym_onbuild_token1] = ACTIONS(579),
    [aux_sym_run_token1] = ACTIONS(579),
    [aux_sym_shell_token1] = ACTIONS(579),
    [aux_sym_stopsignal_token1] = ACTIONS(579),
    [aux_sym_user_token1] = ACTIONS(579),
    [aux_sym_volume_token1] = ACTIONS(579),
    [aux_sym_workdir_token1] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(579),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [aux_sym_add_token1] = ACTIONS(581),
    [aux_sym_arg_token1] = ACTIONS(581),
    [aux_sym_cmd_token1] = ACTIONS(581),
    [aux_sym_copy_token1] = ACTIONS(581),
    [aux_sym_entrypoint_token1] = ACTIONS(581),
    [aux_sym_env_token1] = ACTIONS(581),
    [aux_sym_expose_token1] = ACTIONS(581),
    [aux_sym_from_token1] = ACTIONS(581),
    [aux_sym_healthcheck_token1] = ACTIONS(581),
    [aux_sym_label_token1] = ACTIONS(581),
    [aux_sym_maintainer_token1] = ACTIONS(581),
    [aux_sym_onbuild_token1] = ACTIONS(581),
    [aux_sym_run_token1] = ACTIONS(581),
    [aux_sym_shell_token1] = ACTIONS(581),
    [aux_sym_stopsignal_token1] = ACTIONS(581),
    [aux_sym_user_token1] = ACTIONS(581),
    [aux_sym_volume_token1] = ACTIONS(581),
    [aux_sym_workdir_token1] = ACTIONS(581),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [aux_sym_add_token1] = ACTIONS(583),
    [aux_sym_arg_token1] = ACTIONS(583),
    [aux_sym_cmd_token1] = ACTIONS(583),
    [aux_sym_copy_token1] = ACTIONS(583),
    [aux_sym_entrypoint_token1] = ACTIONS(583),
    [aux_sym_env_token1] = ACTIONS(583),
    [aux_sym_expose_token1] = ACTIONS(583),
    [aux_sym_from_token1] = ACTIONS(583),
    [aux_sym_healthcheck_token1] = ACTIONS(583),
    [aux_sym_label_token1] = ACTIONS(583),
    [aux_sym_maintainer_token1] = ACTIONS(583),
    [aux_sym_onbuild_token1] = ACTIONS(583),
    [aux_sym_run_token1] = ACTIONS(583),
    [aux_sym_shell_token1] = ACTIONS(583),
    [aux_sym_stopsignal_token1] = ACTIONS(583),
    [aux_sym_user_token1] = ACTIONS(583),
    [aux_sym_volume_token1] = ACTIONS(583),
    [aux_sym_workdir_token1] = ACTIONS(583),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [aux_sym_add_token1] = ACTIONS(585),
    [aux_sym_arg_token1] = ACTIONS(585),
    [aux_sym_cmd_token1] = ACTIONS(585),
    [aux_sym_copy_token1] = ACTIONS(585),
    [aux_sym_entrypoint_token1] = ACTIONS(585),
    [aux_sym_env_token1] = ACTIONS(585),
    [aux_sym_expose_token1] = ACTIONS(585),
    [aux_sym_from_token1] = ACTIONS(585),
    [aux_sym_healthcheck_token1] = ACTIONS(585),
    [aux_sym_label_token1] = ACTIONS(585),
    [aux_sym_maintainer_token1] = ACTIONS(585),
    [aux_sym_onbuild_token1] = ACTIONS(585),
    [aux_sym_run_token1] = ACTIONS(585),
    [aux_sym_shell_token1] = ACTIONS(585),
    [aux_sym_stopsignal_token1] = ACTIONS(585),
    [aux_sym_user_token1] = ACTIONS(585),
    [aux_sym_volume_token1] = ACTIONS(585),
    [aux_sym_workdir_token1] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(587),
    [aux_sym_add_token1] = ACTIONS(587),
    [aux_sym_arg_token1] = ACTIONS(587),
    [aux_sym_cmd_token1] = ACTIONS(587),
    [aux_sym_copy_token1] = ACTIONS(587),
    [aux_sym_entrypoint_token1] = ACTIONS(587),
    [aux_sym_env_token1] = ACTIONS(587),
    [aux_sym_expose_token1] = ACTIONS(587),
    [aux_sym_from_token1] = ACTIONS(587),
    [aux_sym_healthcheck_token1] = ACTIONS(587),
    [aux_sym_label_token1] = ACTIONS(587),
    [aux_sym_maintainer_token1] = ACTIONS(587),
    [aux_sym_onbuild_token1] = ACTIONS(587),
    [aux_sym_run_token1] = ACTIONS(587),
    [aux_sym_shell_token1] = ACTIONS(587),
    [aux_sym_stopsignal_token1] = ACTIONS(587),
    [aux_sym_user_token1] = ACTIONS(587),
    [aux_sym_volume_token1] = ACTIONS(587),
    [aux_sym_workdir_token1] = ACTIONS(587),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [aux_sym_add_token1] = ACTIONS(589),
    [aux_sym_arg_token1] = ACTIONS(589),
    [aux_sym_cmd_token1] = ACTIONS(589),
    [aux_sym_copy_token1] = ACTIONS(589),
    [aux_sym_entrypoint_token1] = ACTIONS(589),
    [aux_sym_env_token1] = ACTIONS(589),
    [aux_sym_expose_token1] = ACTIONS(589),
    [aux_sym_from_token1] = ACTIONS(589),
    [aux_sym_healthcheck_token1] = ACTIONS(589),
    [aux_sym_label_token1] = ACTIONS(589),
    [aux_sym_maintainer_token1] = ACTIONS(589),
    [aux_sym_onbuild_token1] = ACTIONS(589),
    [aux_sym_run_token1] = ACTIONS(589),
    [aux_sym_shell_token1] = ACTIONS(589),
    [aux_sym_stopsignal_token1] = ACTIONS(589),
    [aux_sym_user_token1] = ACTIONS(589),
    [aux_sym_volume_token1] = ACTIONS(589),
    [aux_sym_workdir_token1] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(591),
    [aux_sym_add_token1] = ACTIONS(591),
    [aux_sym_arg_token1] = ACTIONS(591),
    [aux_sym_cmd_token1] = ACTIONS(591),
    [aux_sym_copy_token1] = ACTIONS(591),
    [aux_sym_entrypoint_token1] = ACTIONS(591),
    [aux_sym_env_token1] = ACTIONS(591),
    [aux_sym_expose_token1] = ACTIONS(591),
    [aux_sym_from_token1] = ACTIONS(591),
    [aux_sym_healthcheck_token1] = ACTIONS(591),
    [aux_sym_label_token1] = ACTIONS(591),
    [aux_sym_maintainer_token1] = ACTIONS(591),
    [aux_sym_onbuild_token1] = ACTIONS(591),
    [aux_sym_run_token1] = ACTIONS(591),
    [aux_sym_shell_token1] = ACTIONS(591),
    [aux_sym_stopsignal_token1] = ACTIONS(591),
    [aux_sym_user_token1] = ACTIONS(591),
    [aux_sym_volume_token1] = ACTIONS(591),
    [aux_sym_workdir_token1] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(591),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [aux_sym_healthcheck_token1] = ACTIONS(319),
    [aux_sym_label_token1] = ACTIONS(319),
    [aux_sym_maintainer_token1] = ACTIONS(319),
    [aux_sym_onbuild_token1] = ACTIONS(319),
    [aux_sym_run_token1] = ACTIONS(319),
    [aux_sym_shell_token1] = ACTIONS(319),
    [aux_sym_stopsignal_token1] = ACTIONS(319),
    [aux_sym_user_token1] = ACTIONS(319),
    [aux_sym_volume_token1] = ACTIONS(319),
    [aux_sym_workdir_token1] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_add_token1] = ACTIONS(422),
    [aux_sym_arg_token1] = ACTIONS(422),
    [aux_sym_cmd_token1] = ACTIONS(422),
    [aux_sym_copy_token1] = ACTIONS(422),
    [aux_sym_entrypoint_token1] = ACTIONS(422),
    [aux_sym_env_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [aux_sym_healthcheck_token1] = ACTIONS(422),
    [aux_sym_label_token1] = ACTIONS(422),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_onbuild_token1] = ACTIONS(422),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_shell_token1] = ACTIONS(422),
    [aux_sym_stopsignal_token1] = ACTIONS(422),
    [aux_sym_user_token1] = ACTIONS(422),
    [aux_sym_volume_token1] = ACTIONS(422),
    [aux_sym_workdir_token1] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_add_token1] = ACTIONS(513),
    [aux_sym_arg_token1] = ACTIONS(513),
    [aux_sym_cmd_token1] = ACTIONS(513),
    [aux_sym_copy_token1] = ACTIONS(513),
    [aux_sym_entrypoint_token1] = ACTIONS(513),
    [aux_sym_env_token1] = ACTIONS(513),
    [aux_sym_expose_token1] = ACTIONS(513),
    [aux_sym_from_token1] = ACTIONS(513),
    [aux_sym_healthcheck_token1] = ACTIONS(513),
    [aux_sym_label_token1] = ACTIONS(513),
    [aux_sym_maintainer_token1] = ACTIONS(513),
    [aux_sym_onbuild_token1] = ACTIONS(513),
    [aux_sym_run_token1] = ACTIONS(513),
    [aux_sym_shell_token1] = ACTIONS(513),
    [aux_sym_stopsignal_token1] = ACTIONS(513),
    [aux_sym_user_token1] = ACTIONS(513),
    [aux_sym_volume_token1] = ACTIONS(513),
    [aux_sym_workdir_token1] = ACTIONS(513),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [aux_sym_add_token1] = ACTIONS(593),
    [aux_sym_arg_token1] = ACTIONS(593),
    [aux_sym_cmd_token1] = ACTIONS(593),
    [aux_sym_copy_token1] = ACTIONS(593),
    [aux_sym_entrypoint_token1] = ACTIONS(593),
    [aux_sym_env_token1] = ACTIONS(593),
    [aux_sym_expose_token1] = ACTIONS(593),
    [aux_sym_from_token1] = ACTIONS(593),
    [aux_sym_healthcheck_token1] = ACTIONS(593),
    [aux_sym_label_token1] = ACTIONS(593),
    [aux_sym_maintainer_token1] = ACTIONS(593),
    [aux_sym_onbuild_token1] = ACTIONS(593),
    [aux_sym_run_token1] = ACTIONS(593),
    [aux_sym_shell_token1] = ACTIONS(593),
    [aux_sym_stopsignal_token1] = ACTIONS(593),
    [aux_sym_user_token1] = ACTIONS(593),
    [aux_sym_volume_token1] = ACTIONS(593),
    [aux_sym_workdir_token1] = ACTIONS(593),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(593),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [aux_sym_add_token1] = ACTIONS(595),
    [aux_sym_arg_token1] = ACTIONS(595),
    [aux_sym_cmd_token1] = ACTIONS(595),
    [aux_sym_copy_token1] = ACTIONS(595),
    [aux_sym_entrypoint_token1] = ACTIONS(595),
    [aux_sym_env_token1] = ACTIONS(595),
    [aux_sym_expose_token1] = ACTIONS(595),
    [aux_sym_from_token1] = ACTIONS(595),
    [aux_sym_healthcheck_token1] = ACTIONS(595),
    [aux_sym_label_token1] = ACTIONS(595),
    [aux_sym_maintainer_token1] = ACTIONS(595),
    [aux_sym_onbuild_token1] = ACTIONS(595),
    [aux_sym_run_token1] = ACTIONS(595),
    [aux_sym_shell_token1] = ACTIONS(595),
    [aux_sym_stopsignal_token1] = ACTIONS(595),
    [aux_sym_user_token1] = ACTIONS(595),
    [aux_sym_volume_token1] = ACTIONS(595),
    [aux_sym_workdir_token1] = ACTIONS(595),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(595),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [aux_sym_add_token1] = ACTIONS(597),
    [aux_sym_arg_token1] = ACTIONS(597),
    [aux_sym_cmd_token1] = ACTIONS(597),
    [aux_sym_copy_token1] = ACTIONS(597),
    [aux_sym_entrypoint_token1] = ACTIONS(597),
    [aux_sym_env_token1] = ACTIONS(597),
    [aux_sym_expose_token1] = ACTIONS(597),
    [aux_sym_from_token1] = ACTIONS(597),
    [aux_sym_healthcheck_token1] = ACTIONS(597),
    [aux_sym_label_token1] = ACTIONS(597),
    [aux_sym_maintainer_token1] = ACTIONS(597),
    [aux_sym_onbuild_token1] = ACTIONS(597),
    [aux_sym_run_token1] = ACTIONS(597),
    [aux_sym_shell_token1] = ACTIONS(597),
    [aux_sym_stopsignal_token1] = ACTIONS(597),
    [aux_sym_user_token1] = ACTIONS(597),
    [aux_sym_volume_token1] = ACTIONS(597),
    [aux_sym_workdir_token1] = ACTIONS(597),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(597),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [aux_sym_add_token1] = ACTIONS(599),
    [aux_sym_arg_token1] = ACTIONS(599),
    [aux_sym_cmd_token1] = ACTIONS(599),
    [aux_sym_copy_token1] = ACTIONS(599),
    [aux_sym_entrypoint_token1] = ACTIONS(599),
    [aux_sym_env_token1] = ACTIONS(599),
    [aux_sym_expose_token1] = ACTIONS(599),
    [aux_sym_from_token1] = ACTIONS(599),
    [aux_sym_healthcheck_token1] = ACTIONS(599),
    [aux_sym_label_token1] = ACTIONS(599),
    [aux_sym_maintainer_token1] = ACTIONS(599),
    [aux_sym_onbuild_token1] = ACTIONS(599),
    [aux_sym_run_token1] = ACTIONS(599),
    [aux_sym_shell_token1] = ACTIONS(599),
    [aux_sym_stopsignal_token1] = ACTIONS(599),
    [aux_sym_user_token1] = ACTIONS(599),
    [aux_sym_volume_token1] = ACTIONS(599),
    [aux_sym_workdir_token1] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(329),
    [aux_sym_arg_token1] = ACTIONS(329),
    [aux_sym_cmd_token1] = ACTIONS(329),
    [aux_sym_copy_token1] = ACTIONS(329),
    [aux_sym_entrypoint_token1] = ACTIONS(329),
    [aux_sym_env_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [aux_sym_healthcheck_token1] = ACTIONS(329),
    [aux_sym_label_token1] = ACTIONS(329),
    [aux_sym_maintainer_token1] = ACTIONS(329),
    [aux_sym_onbuild_token1] = ACTIONS(329),
    [aux_sym_run_token1] = ACTIONS(329),
    [aux_sym_shell_token1] = ACTIONS(329),
    [aux_sym_stopsignal_token1] = ACTIONS(329),
    [aux_sym_user_token1] = ACTIONS(329),
    [aux_sym_volume_token1] = ACTIONS(329),
    [aux_sym_workdir_token1] = ACTIONS(329),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_add_token1] = ACTIONS(441),
    [aux_sym_arg_token1] = ACTIONS(441),
    [aux_sym_cmd_token1] = ACTIONS(441),
    [aux_sym_copy_token1] = ACTIONS(441),
    [aux_sym_entrypoint_token1] = ACTIONS(441),
    [aux_sym_env_token1] = ACTIONS(441),
    [aux_sym_expose_token1] = ACTIONS(441),
    [aux_sym_from_token1] = ACTIONS(441),
    [aux_sym_healthcheck_token1] = ACTIONS(441),
    [aux_sym_label_token1] = ACTIONS(441),
    [aux_sym_maintainer_token1] = ACTIONS(441),
    [aux_sym_onbuild_token1] = ACTIONS(441),
    [aux_sym_run_token1] = ACTIONS(441),
    [aux_sym_shell_token1] = ACTIONS(441),
    [aux_sym_stopsignal_token1] = ACTIONS(441),
    [aux_sym_user_token1] = ACTIONS(441),
    [aux_sym_volume_token1] = ACTIONS(441),
    [aux_sym_workdir_token1] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [aux_sym_healthcheck_token1] = ACTIONS(301),
    [aux_sym_label_token1] = ACTIONS(301),
    [aux_sym_maintainer_token1] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(301),
    [aux_sym_run_token1] = ACTIONS(301),
    [aux_sym_shell_token1] = ACTIONS(301),
    [aux_sym_stopsignal_token1] = ACTIONS(301),
    [aux_sym_user_token1] = ACTIONS(301),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [aux_sym_add_token1] = ACTIONS(601),
    [aux_sym_arg_token1] = ACTIONS(601),
    [aux_sym_cmd_token1] = ACTIONS(601),
    [aux_sym_copy_token1] = ACTIONS(601),
    [aux_sym_entrypoint_token1] = ACTIONS(601),
    [aux_sym_env_token1] = ACTIONS(601),
    [aux_sym_expose_token1] = ACTIONS(601),
    [aux_sym_from_token1] = ACTIONS(601),
    [aux_sym_healthcheck_token1] = ACTIONS(601),
    [aux_sym_label_token1] = ACTIONS(601),
    [aux_sym_maintainer_token1] = ACTIONS(601),
    [aux_sym_onbuild_token1] = ACTIONS(601),
    [aux_sym_run_token1] = ACTIONS(601),
    [aux_sym_shell_token1] = ACTIONS(601),
    [aux_sym_stopsignal_token1] = ACTIONS(601),
    [aux_sym_user_token1] = ACTIONS(601),
    [aux_sym_volume_token1] = ACTIONS(601),
    [aux_sym_workdir_token1] = ACTIONS(601),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_add_token1] = ACTIONS(119),
    [aux_sym_arg_token1] = ACTIONS(119),
    [aux_sym_cmd_token1] = ACTIONS(119),
    [aux_sym_copy_token1] = ACTIONS(119),
    [aux_sym_entrypoint_token1] = ACTIONS(119),
    [aux_sym_env_token1] = ACTIONS(119),
    [aux_sym_expose_token1] = ACTIONS(119),
    [aux_sym_from_token1] = ACTIONS(119),
    [aux_sym_healthcheck_token1] = ACTIONS(119),
    [aux_sym_label_token1] = ACTIONS(119),
    [aux_sym_maintainer_token1] = ACTIONS(119),
    [aux_sym_onbuild_token1] = ACTIONS(119),
    [aux_sym_run_token1] = ACTIONS(119),
    [aux_sym_shell_token1] = ACTIONS(119),
    [aux_sym_stopsignal_token1] = ACTIONS(119),
    [aux_sym_user_token1] = ACTIONS(119),
    [aux_sym_volume_token1] = ACTIONS(119),
    [aux_sym_workdir_token1] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(119),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [195] = {
    [sym_repository] = STATE(216),
    [sym__repository_start] = STATE(203),
    [sym_image] = STATE(95),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(603),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [aux_sym_platform_token1] = ACTIONS(607),
    [aux_sym__repository_start_token1] = ACTIONS(605),
    [aux_sym__repository_start_token4] = ACTIONS(609),
    [aux_sym__repository_start_token6] = ACTIONS(609),
    [aux_sym__repository_start_token8] = ACTIONS(611),
    [aux_sym__repository_start_token10] = ACTIONS(611),
    [aux_sym__repository_start_token12] = ACTIONS(613),
    [aux_sym__repository_start_token14] = ACTIONS(613),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [196] = {
    [sym_repository] = STATE(218),
    [sym__repository_start] = STATE(203),
    [sym_image] = STATE(99),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [aux_sym_platform_token1] = ACTIONS(607),
    [aux_sym__repository_start_token1] = ACTIONS(605),
    [aux_sym__repository_start_token4] = ACTIONS(609),
    [aux_sym__repository_start_token6] = ACTIONS(609),
    [aux_sym__repository_start_token8] = ACTIONS(611),
    [aux_sym__repository_start_token10] = ACTIONS(611),
    [aux_sym__repository_start_token12] = ACTIONS(613),
    [aux_sym__repository_start_token14] = ACTIONS(613),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [197] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(194),
    [sym__port] = STATE(88),
    [sym_port] = STATE(88),
    [sym_port_range] = STATE(88),
    [sym__port_part] = STATE(67),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(615),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [198] = {
    [sym_digest] = STATE(144),
    [anon_sym_sha256_COLON] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [199] = {
    [sym_digest] = STATE(142),
    [anon_sym_sha256_COLON] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [200] = {
    [sym_digest] = STATE(154),
    [anon_sym_sha256_COLON] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [201] = {
    [sym__repository_continued] = STATE(206),
    [aux_sym_repository_repeat1] = STATE(206),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [aux_sym_platform_token1] = ACTIONS(636),
    [aux_sym__repository_start_token1] = ACTIONS(633),
    [aux_sym__repository_start_token4] = ACTIONS(639),
    [aux_sym__repository_start_token6] = ACTIONS(639),
    [aux_sym__repository_start_token8] = ACTIONS(642),
    [aux_sym__repository_start_token10] = ACTIONS(642),
    [aux_sym__repository_start_token12] = ACTIONS(645),
    [aux_sym__repository_start_token14] = ACTIONS(645),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [202] = {
    [sym_digest] = STATE(140),
    [anon_sym_sha256_COLON] = ACTIONS(648),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [203] = {
    [sym__repository_continued] = STATE(201),
    [aux_sym_repository_repeat1] = STATE(201),
    [anon_sym_DOLLAR] = ACTIONS(650),
    [aux_sym_platform_token1] = ACTIONS(653),
    [aux_sym__repository_start_token1] = ACTIONS(650),
    [aux_sym__repository_start_token4] = ACTIONS(656),
    [aux_sym__repository_start_token6] = ACTIONS(656),
    [aux_sym__repository_start_token8] = ACTIONS(659),
    [aux_sym__repository_start_token10] = ACTIONS(659),
    [aux_sym__repository_start_token12] = ACTIONS(662),
    [aux_sym__repository_start_token14] = ACTIONS(662),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [204] = {
    [sym_digest] = STATE(145),
    [anon_sym_sha256_COLON] = ACTIONS(665),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [205] = {
    [sym_digest] = STATE(150),
    [anon_sym_sha256_COLON] = ACTIONS(667),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [206] = {
    [sym__repository_continued] = STATE(206),
    [aux_sym_repository_repeat1] = STATE(206),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [aux_sym_platform_token1] = ACTIONS(672),
    [aux_sym__repository_start_token1] = ACTIONS(669),
    [aux_sym__repository_start_token4] = ACTIONS(675),
    [aux_sym__repository_start_token6] = ACTIONS(675),
    [aux_sym__repository_start_token8] = ACTIONS(678),
    [aux_sym__repository_start_token10] = ACTIONS(678),
    [aux_sym__repository_start_token12] = ACTIONS(681),
    [aux_sym__repository_start_token14] = ACTIONS(681),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [207] = {
    [sym_as_name] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [208] = {
    [sym_tag] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(694),
    [aux_sym_platform_token1] = ACTIONS(696),
    [aux_sym__repository_start_token1] = ACTIONS(694),
    [aux_sym__repository_start_token4] = ACTIONS(698),
    [aux_sym__repository_start_token6] = ACTIONS(698),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(702),
    [aux_sym__repository_start_token14] = ACTIONS(702),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [209] = {
    [sym_as_name] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [210] = {
    [sym_digest] = STATE(145),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [211] = {
    [sym_as_name] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [212] = {
    [sym_as_name] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [213] = {
    [sym_as_name] = STATE(191),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [214] = {
    [sym_tag] = STATE(116),
    [anon_sym_DOLLAR] = ACTIONS(694),
    [aux_sym_platform_token1] = ACTIONS(696),
    [aux_sym__repository_start_token1] = ACTIONS(694),
    [aux_sym__repository_start_token4] = ACTIONS(698),
    [aux_sym__repository_start_token6] = ACTIONS(698),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(702),
    [aux_sym__repository_start_token14] = ACTIONS(702),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [215] = {
    [sym_as_name] = STATE(170),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [216] = {
    [sym_image] = STATE(105),
    [anon_sym_DOLLAR] = ACTIONS(704),
    [aux_sym_platform_token1] = ACTIONS(706),
    [aux_sym__repository_start_token1] = ACTIONS(704),
    [aux_sym__repository_start_token4] = ACTIONS(708),
    [aux_sym__repository_start_token6] = ACTIONS(708),
    [aux_sym__repository_start_token8] = ACTIONS(710),
    [aux_sym__repository_start_token10] = ACTIONS(710),
    [aux_sym__repository_start_token12] = ACTIONS(712),
    [aux_sym__repository_start_token14] = ACTIONS(712),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [217] = {
    [sym_tag] = STATE(120),
    [anon_sym_DOLLAR] = ACTIONS(694),
    [aux_sym_platform_token1] = ACTIONS(696),
    [aux_sym__repository_start_token1] = ACTIONS(694),
    [aux_sym__repository_start_token4] = ACTIONS(698),
    [aux_sym__repository_start_token6] = ACTIONS(698),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(702),
    [aux_sym__repository_start_token14] = ACTIONS(702),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [sym_image] = STATE(103),
    [anon_sym_DOLLAR] = ACTIONS(704),
    [aux_sym_platform_token1] = ACTIONS(706),
    [aux_sym__repository_start_token1] = ACTIONS(704),
    [aux_sym__repository_start_token4] = ACTIONS(708),
    [aux_sym__repository_start_token6] = ACTIONS(708),
    [aux_sym__repository_start_token8] = ACTIONS(710),
    [aux_sym__repository_start_token10] = ACTIONS(710),
    [aux_sym__repository_start_token12] = ACTIONS(712),
    [aux_sym__repository_start_token14] = ACTIONS(712),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [219] = {
    [sym_as_name] = STATE(185),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [220] = {
    [sym_digest] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym_as_name] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym_digest] = STATE(150),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym_digest] = STATE(142),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym_tag] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(694),
    [aux_sym_platform_token1] = ACTIONS(696),
    [aux_sym__repository_start_token1] = ACTIONS(694),
    [aux_sym__repository_start_token4] = ACTIONS(698),
    [aux_sym__repository_start_token6] = ACTIONS(698),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(702),
    [aux_sym__repository_start_token14] = ACTIONS(702),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym_digest] = STATE(154),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_as_name] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [aux_sym_platform_token1] = ACTIONS(686),
    [aux_sym__repository_start_token1] = ACTIONS(684),
    [aux_sym__repository_start_token4] = ACTIONS(688),
    [aux_sym__repository_start_token6] = ACTIONS(688),
    [aux_sym__repository_start_token8] = ACTIONS(690),
    [aux_sym__repository_start_token10] = ACTIONS(690),
    [aux_sym__repository_start_token12] = ACTIONS(692),
    [aux_sym__repository_start_token14] = ACTIONS(692),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_digest] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [aux_sym_platform_token1] = ACTIONS(621),
    [aux_sym__repository_start_token1] = ACTIONS(619),
    [aux_sym__repository_start_token4] = ACTIONS(623),
    [aux_sym__repository_start_token6] = ACTIONS(623),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(627),
    [aux_sym__repository_start_token14] = ACTIONS(627),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_DOLLAR] = ACTIONS(714),
    [aux_sym_platform_token1] = ACTIONS(716),
    [aux_sym__repository_start_token1] = ACTIONS(714),
    [aux_sym__repository_start_token4] = ACTIONS(714),
    [aux_sym__repository_start_token6] = ACTIONS(714),
    [aux_sym__repository_start_token8] = ACTIONS(714),
    [aux_sym__repository_start_token10] = ACTIONS(714),
    [aux_sym__repository_start_token12] = ACTIONS(714),
    [aux_sym__repository_start_token14] = ACTIONS(714),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_platform_token1] = ACTIONS(720),
    [aux_sym__repository_start_token1] = ACTIONS(718),
    [aux_sym__repository_start_token4] = ACTIONS(718),
    [aux_sym__repository_start_token6] = ACTIONS(718),
    [aux_sym__repository_start_token8] = ACTIONS(718),
    [aux_sym__repository_start_token10] = ACTIONS(718),
    [aux_sym__repository_start_token12] = ACTIONS(718),
    [aux_sym__repository_start_token14] = ACTIONS(718),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [anon_sym_DOLLAR] = ACTIONS(722),
    [aux_sym_platform_token1] = ACTIONS(724),
    [aux_sym__repository_start_token1] = ACTIONS(722),
    [aux_sym__repository_start_token4] = ACTIONS(722),
    [aux_sym__repository_start_token6] = ACTIONS(722),
    [aux_sym__repository_start_token8] = ACTIONS(722),
    [aux_sym__repository_start_token10] = ACTIONS(722),
    [aux_sym__repository_start_token12] = ACTIONS(722),
    [aux_sym__repository_start_token14] = ACTIONS(722),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [anon_sym_DOLLAR] = ACTIONS(726),
    [aux_sym_platform_token1] = ACTIONS(728),
    [aux_sym__repository_start_token1] = ACTIONS(726),
    [aux_sym__repository_start_token4] = ACTIONS(726),
    [aux_sym__repository_start_token6] = ACTIONS(726),
    [aux_sym__repository_start_token8] = ACTIONS(726),
    [aux_sym__repository_start_token10] = ACTIONS(726),
    [aux_sym__repository_start_token12] = ACTIONS(726),
    [aux_sym__repository_start_token14] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [anon_sym_DOLLAR] = ACTIONS(730),
    [aux_sym_platform_token1] = ACTIONS(732),
    [aux_sym__repository_start_token1] = ACTIONS(730),
    [aux_sym__repository_start_token4] = ACTIONS(730),
    [aux_sym__repository_start_token6] = ACTIONS(730),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(730),
    [aux_sym__repository_start_token14] = ACTIONS(730),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [anon_sym_DOLLAR] = ACTIONS(734),
    [aux_sym_platform_token1] = ACTIONS(736),
    [aux_sym__repository_start_token1] = ACTIONS(734),
    [aux_sym__repository_start_token4] = ACTIONS(734),
    [aux_sym__repository_start_token6] = ACTIONS(734),
    [aux_sym__repository_start_token8] = ACTIONS(734),
    [aux_sym__repository_start_token10] = ACTIONS(734),
    [aux_sym__repository_start_token12] = ACTIONS(734),
    [aux_sym__repository_start_token14] = ACTIONS(734),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_DOLLAR] = ACTIONS(738),
    [aux_sym_platform_token1] = ACTIONS(740),
    [aux_sym__repository_start_token1] = ACTIONS(738),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(738),
    [aux_sym__repository_start_token8] = ACTIONS(738),
    [aux_sym__repository_start_token10] = ACTIONS(738),
    [aux_sym__repository_start_token12] = ACTIONS(738),
    [aux_sym__repository_start_token14] = ACTIONS(738),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [anon_sym_DOLLAR] = ACTIONS(742),
    [aux_sym_platform_token1] = ACTIONS(744),
    [aux_sym__repository_start_token1] = ACTIONS(742),
    [aux_sym__repository_start_token4] = ACTIONS(742),
    [aux_sym__repository_start_token6] = ACTIONS(742),
    [aux_sym__repository_start_token8] = ACTIONS(742),
    [aux_sym__repository_start_token10] = ACTIONS(742),
    [aux_sym__repository_start_token12] = ACTIONS(742),
    [aux_sym__repository_start_token14] = ACTIONS(742),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
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
  [237] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_platform_token1] = ACTIONS(201),
    [aux_sym__repository_start_token1] = ACTIONS(199),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token6] = ACTIONS(199),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token10] = ACTIONS(199),
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token14] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [anon_sym_DOLLAR] = ACTIONS(746),
    [aux_sym_platform_token1] = ACTIONS(748),
    [aux_sym__repository_start_token1] = ACTIONS(746),
    [aux_sym__repository_start_token4] = ACTIONS(746),
    [aux_sym__repository_start_token6] = ACTIONS(746),
    [aux_sym__repository_start_token8] = ACTIONS(746),
    [aux_sym__repository_start_token10] = ACTIONS(746),
    [aux_sym__repository_start_token12] = ACTIONS(746),
    [aux_sym__repository_start_token14] = ACTIONS(746),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(750),
    [aux_sym__repository_start_token6] = ACTIONS(750),
    [aux_sym__repository_start_token8] = ACTIONS(750),
    [aux_sym__repository_start_token10] = ACTIONS(750),
    [aux_sym__repository_start_token12] = ACTIONS(750),
    [aux_sym__repository_start_token14] = ACTIONS(750),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [anon_sym_DOLLAR] = ACTIONS(754),
    [aux_sym_platform_token1] = ACTIONS(756),
    [aux_sym__repository_start_token1] = ACTIONS(754),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(754),
    [aux_sym__repository_start_token10] = ACTIONS(754),
    [aux_sym__repository_start_token12] = ACTIONS(754),
    [aux_sym__repository_start_token14] = ACTIONS(754),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym__port_spec] = STATE(404),
    [sym_mapped_port] = STATE(404),
    [sym__port] = STATE(355),
    [sym_port] = STATE(352),
    [sym_port_range] = STATE(352),
    [sym__port_part] = STATE(317),
    [anon_sym_DQUOTE] = ACTIONS(758),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym__port_part_token1] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_platform_token1] = ACTIONS(209),
    [aux_sym__repository_start_token1] = ACTIONS(207),
    [aux_sym__repository_start_token4] = ACTIONS(207),
    [aux_sym__repository_start_token6] = ACTIONS(207),
    [aux_sym__repository_start_token8] = ACTIONS(207),
    [aux_sym__repository_start_token10] = ACTIONS(207),
    [aux_sym__repository_start_token12] = ACTIONS(207),
    [aux_sym__repository_start_token14] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [anon_sym_DOLLAR] = ACTIONS(764),
    [aux_sym_platform_token1] = ACTIONS(766),
    [aux_sym__repository_start_token1] = ACTIONS(764),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(764),
    [aux_sym__repository_start_token10] = ACTIONS(764),
    [aux_sym__repository_start_token12] = ACTIONS(764),
    [aux_sym__repository_start_token14] = ACTIONS(764),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [aux_sym__json_string] = STATE(289),
    [aux_sym_json_array_repeat1] = STATE(332),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(772),
    [aux_sym__json_string_token1] = ACTIONS(774),
    [sym__json_escape_sequence] = ACTIONS(776),
  },
  [245] = {
    [sym__port] = STATE(176),
    [sym_port] = STATE(176),
    [sym_port_range] = STATE(176),
    [sym__port_part] = STATE(67),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [sym__port] = STATE(386),
    [sym_port] = STATE(386),
    [sym_port_range] = STATE(386),
    [sym__port_part] = STATE(317),
    [anon_sym_DQUOTE] = ACTIONS(758),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym__port_part_token1] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [247] = {
    [sym__port] = STATE(100),
    [sym_port] = STATE(100),
    [sym_port_range] = STATE(100),
    [sym__port_part] = STATE(67),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [248] = {
    [sym_user_name] = STATE(148),
    [sym_user_id] = STATE(146),
    [anon_sym_DOLLAR] = ACTIONS(780),
    [aux_sym__port_part_token1] = ACTIONS(782),
    [aux_sym_user_name_token1] = ACTIONS(784),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [249] = {
    [sym_template_expr_less_than_equals] = STATE(415),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [aux_sym__repository_start_repeat3] = STATE(277),
    [anon_sym_SLASH] = ACTIONS(788),
    [aux_sym__repository_start_token3] = ACTIONS(790),
    [aux_sym__repository_start_token8] = ACTIONS(792),
    [aux_sym__repository_start_token11] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [aux_sym__repository_start_repeat4] = STATE(278),
    [anon_sym_SLASH] = ACTIONS(788),
    [aux_sym__repository_start_token3] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(794),
    [aux_sym__repository_start_token15] = ACTIONS(794),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [aux_sym__anything] = STATE(132),
    [sym_json_array] = STATE(169),
    [sym__anything_or_json_array] = STATE(169),
    [aux_sym__anything_token1] = ACTIONS(796),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [253] = {
    [sym_template_expr_less_than_equals] = STATE(374),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_template_expr_less_than_equals] = STATE(366),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(266),
    [aux_sym__repository_start_token13] = ACTIONS(800),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(802),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(802),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(802),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [aux_sym__anything] = STATE(132),
    [sym_json_array] = STATE(187),
    [sym__anything_or_json_array] = STATE(187),
    [aux_sym__anything_token1] = ACTIONS(796),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [257] = {
    [sym_port_protocol] = STATE(334),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(804),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [aux_sym__repository_start_repeat1] = STATE(270),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_SLASH] = ACTIONS(788),
    [aux_sym__repository_start_token2] = ACTIONS(806),
    [aux_sym__repository_start_token3] = ACTIONS(790),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [aux_sym__anything] = STATE(132),
    [sym_json_array] = STATE(177),
    [sym__anything_or_json_array] = STATE(177),
    [aux_sym__anything_token1] = ACTIONS(796),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [260] = {
    [sym_variable_default_value] = STATE(387),
    [sym_variable_this_or_null] = STATE(387),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [sym_template_expr_less_than_equals] = STATE(396),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
    [sym_template_expr_less_than_equals] = STATE(447),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [sym_template_expr_less_than_equals] = STATE(441),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [sym_template_expr_less_than_equals] = STATE(424),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [sym_port] = STATE(435),
    [sym_port_range] = STATE(435),
    [sym__port_part] = STATE(317),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym__port_part_token1] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(266),
    [aux_sym__repository_start_token13] = ACTIONS(814),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(816),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(816),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(816),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [sym_port_protocol] = STATE(342),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(804),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [268] = {
    [aux_sym__repository_start_repeat1] = STATE(258),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_SLASH] = ACTIONS(819),
    [aux_sym__repository_start_token2] = ACTIONS(806),
    [aux_sym__repository_start_token3] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [sym_template_expr_less_than_equals] = STATE(453),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [aux_sym__repository_start_repeat1] = STATE(270),
    [anon_sym_DOLLAR] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(159),
    [aux_sym__repository_start_token2] = ACTIONS(823),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [aux_sym__repository_start_repeat4] = STATE(271),
    [anon_sym_SLASH] = ACTIONS(166),
    [aux_sym__repository_start_token3] = ACTIONS(168),
    [aux_sym__repository_start_token12] = ACTIONS(826),
    [aux_sym__repository_start_token15] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [sym_port] = STATE(378),
    [sym_port_range] = STATE(378),
    [sym__port_part] = STATE(317),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym__port_part_token1] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [aux_sym__repository_start_repeat2] = STATE(273),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token4] = ACTIONS(829),
    [aux_sym__repository_start_token7] = ACTIONS(829),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [aux_sym__repository_start_repeat2] = STATE(276),
    [anon_sym_SLASH] = ACTIONS(788),
    [aux_sym__repository_start_token3] = ACTIONS(790),
    [aux_sym__repository_start_token4] = ACTIONS(832),
    [aux_sym__repository_start_token7] = ACTIONS(832),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [sym_template_expr_less_than_equals] = STATE(408),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [aux_sym__repository_start_repeat2] = STATE(273),
    [anon_sym_SLASH] = ACTIONS(834),
    [aux_sym__repository_start_token3] = ACTIONS(836),
    [aux_sym__repository_start_token4] = ACTIONS(832),
    [aux_sym__repository_start_token7] = ACTIONS(832),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [277] = {
    [aux_sym__repository_start_repeat3] = STATE(279),
    [anon_sym_SLASH] = ACTIONS(834),
    [aux_sym__repository_start_token3] = ACTIONS(836),
    [aux_sym__repository_start_token8] = ACTIONS(792),
    [aux_sym__repository_start_token11] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [aux_sym__repository_start_repeat4] = STATE(271),
    [anon_sym_SLASH] = ACTIONS(834),
    [aux_sym__repository_start_token3] = ACTIONS(836),
    [aux_sym__repository_start_token12] = ACTIONS(794),
    [aux_sym__repository_start_token15] = ACTIONS(794),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [279] = {
    [aux_sym__repository_start_repeat3] = STATE(279),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(838),
    [aux_sym__repository_start_token11] = ACTIONS(838),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [280] = {
    [sym_template_expr_less_than_equals] = STATE(418),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(255),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(786),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [281] = {
    [sym_variable_default_value] = STATE(438),
    [sym_variable_this_or_null] = STATE(438),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [sym_variable_default_value] = STATE(444),
    [sym_variable_this_or_null] = STATE(444),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym_variable_default_value] = STATE(450),
    [sym_variable_this_or_null] = STATE(450),
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_variable_default_value] = STATE(461),
    [sym_variable_this_or_null] = STATE(461),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [sym_variable_default_value] = STATE(455),
    [sym_variable_this_or_null] = STATE(455),
    [anon_sym_RBRACE] = ACTIONS(849),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym_variable_default_value] = STATE(457),
    [sym_variable_this_or_null] = STATE(457),
    [anon_sym_RBRACE] = ACTIONS(851),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym_variable_default_value] = STATE(459),
    [sym_variable_this_or_null] = STATE(459),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_COLON_DASH] = ACTIONS(810),
    [anon_sym_COLON_PLUS] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [aux_sym__json_string] = STATE(304),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(857),
    [sym__json_escape_sequence] = ACTIONS(857),
  },
  [290] = {
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token15] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [aux_sym__json_string] = STATE(304),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(857),
    [sym__json_escape_sequence] = ACTIONS(857),
  },
  [292] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [aux_sym__paths] = STATE(130),
    [sym_json_array] = STATE(174),
    [sym_path] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [298] = {
    [sym_label_value] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [aux_sym_label_value_token1] = ACTIONS(865),
    [aux_sym_label_value_token2] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [aux_sym__paths] = STATE(122),
    [sym_json_array] = STATE(159),
    [sym_path] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [301] = {
    [anon_sym_DOLLAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [aux_sym__repository_start_token2] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token8] = ACTIONS(191),
    [aux_sym__repository_start_token11] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [aux_sym__json_string] = STATE(291),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(869),
    [sym__json_escape_sequence] = ACTIONS(869),
  },
  [304] = {
    [aux_sym__json_string] = STATE(304),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(873),
    [sym__json_escape_sequence] = ACTIONS(873),
  },
  [305] = {
    [aux_sym__paths] = STATE(117),
    [sym_json_array] = STATE(184),
    [sym_path] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [306] = {
    [sym_docker_variable] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(876),
    [sym__docker_variable] = ACTIONS(878),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [sym_docker_variable] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(880),
    [sym__docker_variable] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [sym_docker_variable] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(884),
    [sym__docker_variable] = ACTIONS(886),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym_docker_variable] = STATE(301),
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym__docker_variable] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [310] = {
    [sym_docker_variable] = STATE(51),
    [anon_sym_LBRACE] = ACTIONS(876),
    [sym__docker_variable] = ACTIONS(878),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [311] = {
    [sym_docker_variable] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(884),
    [sym__docker_variable] = ACTIONS(886),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [anon_sym_DOLLAR] = ACTIONS(892),
    [aux_sym_port_protocol_token1] = ACTIONS(894),
    [aux_sym_port_protocol_token2] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [sym_docker_variable] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(896),
    [sym__docker_variable] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [sym_docker_variable] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(900),
    [sym__docker_variable] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [aux_sym_json_array_repeat1] = STATE(331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(904),
  },
  [316] = {
    [aux_sym__labels] = STATE(97),
    [sym_label_pair] = STATE(97),
    [sym_label_key] = ACTIONS(387),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [aux_sym_label_value_repeat1] = STATE(318),
    [anon_sym_DQUOTE] = ACTIONS(908),
    [aux_sym_label_value_token3] = ACTIONS(910),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [sym_docker_variable] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(900),
    [sym__docker_variable] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [320] = {
    [sym_signal_name] = STATE(157),
    [sym_signal_num] = ACTIONS(913),
    [aux_sym_signal_name_token1] = ACTIONS(915),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [anon_sym_DOLLAR] = ACTIONS(917),
    [aux_sym_workdir_token2] = ACTIONS(919),
    [aux_sym_workdir_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [aux_sym_json_array_repeat1] = STATE(343),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(904),
  },
  [323] = {
    [sym_docker_variable] = STATE(65),
    [anon_sym_LBRACE] = ACTIONS(900),
    [sym__docker_variable] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [aux_sym_label_value_repeat1] = STATE(318),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [aux_sym_label_value_token3] = ACTIONS(923),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [sym__port_part] = STATE(346),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym__port_part_token1] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [sym_platform] = STATE(196),
    [anon_sym_DOLLAR] = ACTIONS(925),
    [aux_sym_platform_token1] = ACTIONS(927),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [sym_docker_variable] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(900),
    [sym__docker_variable] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [sym_docker_variable] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(880),
    [sym__docker_variable] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [sym_docker_variable] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(929),
    [sym__docker_variable] = ACTIONS(931),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [aux_sym_json_array_repeat1] = STATE(315),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(933),
  },
  [331] = {
    [aux_sym_json_array_repeat1] = STATE(331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(935),
    [anon_sym_RBRACK] = ACTIONS(938),
  },
  [332] = {
    [aux_sym_json_array_repeat1] = STATE(331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(933),
  },
  [333] = {
    [sym_docker_variable] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(880),
    [sym__docker_variable] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [anon_sym_DOLLAR] = ACTIONS(940),
    [aux_sym_port_protocol_token1] = ACTIONS(942),
    [aux_sym_port_protocol_token2] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [sym__port_part] = STATE(87),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [sym_docker_variable] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(944),
    [sym__docker_variable] = ACTIONS(946),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_docker_variable] = STATE(268),
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym__docker_variable] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(299),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [sym_docker_variable] = STATE(339),
    [anon_sym_LBRACE] = ACTIONS(896),
    [sym__docker_variable] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [aux_sym_json_array_repeat1] = STATE(331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(948),
  },
  [344] = {
    [sym_docker_variable] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(929),
    [sym__docker_variable] = ACTIONS(931),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [sym_arg_default] = STATE(165),
    [aux_sym_workdir_token2] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(354),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_DQUOTE] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(952),
    [anon_sym_RBRACK] = ACTIONS(952),
  },
  [349] = {
    [sym_user_group] = STATE(186),
    [aux_sym_user_name_token1] = ACTIONS(954),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym__anything] = STATE(128),
    [aux_sym__anything_token1] = ACTIONS(956),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [sym_user_group_id] = STATE(186),
    [aux_sym__port_part_token1] = ACTIONS(958),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [anon_sym_DQUOTE] = ACTIONS(960),
    [anon_sym_COLON] = ACTIONS(963),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [sym__json_value] = STATE(358),
    [anon_sym_DQUOTE] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(967),
    [anon_sym_RBRACK] = ACTIONS(967),
  },
  [355] = {
    [anon_sym_DQUOTE] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(969),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [aux_sym_label_value_repeat1] = STATE(324),
    [aux_sym_label_value_token3] = ACTIONS(971),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [357] = {
    [sym_json_array] = STATE(167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(798),
  },
  [358] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(938),
    [anon_sym_RBRACK] = ACTIONS(938),
  },
  [359] = {
    [aux_sym__anything] = STATE(127),
    [aux_sym__anything_token1] = ACTIONS(973),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [aux_sym__anything] = STATE(119),
    [aux_sym__anything_token1] = ACTIONS(975),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_SLASH] = ACTIONS(977),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [aux_sym__repository_start_token5] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [sym_template_expr_curly_braces] = ACTIONS(981),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [364] = {
    [sym_template_expr_percent_signs] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [sym_template_expr_curly_braces] = ACTIONS(985),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [aux_sym__repository_start_token13] = ACTIONS(987),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [aux_sym_from_token2] = ACTIONS(989),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [aux_sym__repository_start_token9] = ACTIONS(991),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(993),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [aux_sym__repository_start_token5] = ACTIONS(995),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [aux_sym_from_token2] = ACTIONS(997),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [aux_sym_from_token2] = ACTIONS(999),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1001),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym__repository_start_token13] = ACTIONS(1003),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [aux_sym__repository_start_token9] = ACTIONS(1005),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1007),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [aux_sym__repository_start_token5] = ACTIONS(1009),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1013),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [aux_sym_from_token2] = ACTIONS(1015),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1017),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1019),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [aux_sym_from_token2] = ACTIONS(1021),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1023),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [385] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1025),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [386] = {
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [anon_sym_RBRACE] = ACTIONS(1027),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1029),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [aux_sym_from_token2] = ACTIONS(1031),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [sym_template_expr_percent_signs] = ACTIONS(1033),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [391] = {
    [sym_template_expr_curly_braces] = ACTIONS(1035),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [aux_sym_from_token2] = ACTIONS(1037),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_template_expr_curly_braces] = ACTIONS(1039),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [sym_template_expr_percent_signs] = ACTIONS(1041),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [sym_template_expr_curly_braces] = ACTIONS(1043),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [396] = {
    [aux_sym__repository_start_token13] = ACTIONS(1045),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [aux_sym__repository_start_token9] = ACTIONS(1047),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [aux_sym__repository_start_token5] = ACTIONS(1049),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_template_expr_percent_signs] = ACTIONS(1051),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1053),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1055),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym__docker_variable] = ACTIONS(1057),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [403] = {
    [anon_sym_SLASH] = ACTIONS(788),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [aux_sym__repository_start_token5] = ACTIONS(1061),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [aux_sym_from_token2] = ACTIONS(1063),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [aux_sym__repository_start_token9] = ACTIONS(1065),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [aux_sym__repository_start_token13] = ACTIONS(1067),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [aux_sym__repository_start_token9] = ACTIONS(1069),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [aux_sym__repository_start_token5] = ACTIONS(1071),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [aux_sym_signal_name_token2] = ACTIONS(1073),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_EQ] = ACTIONS(1075),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [sym_template_expr_percent_signs] = ACTIONS(1077),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [414] = {
    [sym_template_expr_curly_braces] = ACTIONS(1079),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [415] = {
    [aux_sym__repository_start_token13] = ACTIONS(1081),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [aux_sym__repository_start_token5] = ACTIONS(1083),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym__repository_start_token9] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [aux_sym__repository_start_token13] = ACTIONS(1087),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [anon_sym_RBRACE] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_template_expr_percent_signs] = ACTIONS(1091),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [421] = {
    [anon_sym_SLASH] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_RBRACE] = ACTIONS(1095),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [anon_sym_SLASH] = ACTIONS(834),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym__repository_start_token13] = ACTIONS(1097),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [sym_arg_name] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [ts_builtin_sym_end] = ACTIONS(1101),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1103),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1105),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1109),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1111),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1113),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym_template_expr_percent_signs] = ACTIONS(1115),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [434] = {
    [sym_template_expr_curly_braces] = ACTIONS(1117),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [435] = {
    [anon_sym_DQUOTE] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1121),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1123),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [anon_sym_RBRACE] = ACTIONS(1125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [aux_sym__repository_start_token5] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [aux_sym__repository_start_token9] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [aux_sym__repository_start_token13] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1133),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [aux_sym_from_token2] = ACTIONS(1135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_RBRACE] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [aux_sym__repository_start_token5] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [aux_sym__repository_start_token9] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym__repository_start_token13] = ACTIONS(1143),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1145),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [aux_sym__repository_start_token9] = ACTIONS(1147),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [aux_sym__repository_start_token5] = ACTIONS(1151),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [aux_sym__repository_start_token9] = ACTIONS(1153),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [aux_sym__repository_start_token13] = ACTIONS(1155),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1157),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [anon_sym_RBRACE] = ACTIONS(1159),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1161),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [anon_sym_RBRACE] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1165),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [anon_sym_RBRACE] = ACTIONS(1167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1169),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1173),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [sym__docker_variable] = ACTIONS(1175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [464] = {
    [sym_template_expr_curly_braces] = ACTIONS(1177),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [465] = {
    [sym_template_expr_percent_signs] = ACTIONS(1179),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [466] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1181),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym__docker_variable] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [468] = {
    [sym_template_expr_curly_braces] = ACTIONS(1185),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [469] = {
    [sym_template_expr_percent_signs] = ACTIONS(1187),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1189),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym__docker_variable] = ACTIONS(1191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [472] = {
    [sym_template_expr_curly_braces] = ACTIONS(1193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [473] = {
    [sym_template_expr_percent_signs] = ACTIONS(1195),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [474] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [sym__docker_variable] = ACTIONS(1199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [476] = {
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [477] = {
    [sym__docker_variable] = ACTIONS(1203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [478] = {
    [sym__docker_variable] = ACTIONS(1205),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(388),
  [11] = {.count = 1, .reusable = true}, SHIFT(474),
  [13] = {.count = 1, .reusable = true}, SHIFT(470),
  [15] = {.count = 1, .reusable = true}, SHIFT(466),
  [17] = {.count = 1, .reusable = true}, SHIFT(462),
  [19] = {.count = 1, .reusable = true}, SHIFT(460),
  [21] = {.count = 1, .reusable = true}, SHIFT(458),
  [23] = {.count = 1, .reusable = true}, SHIFT(456),
  [25] = {.count = 1, .reusable = true}, SHIFT(454),
  [27] = {.count = 1, .reusable = true}, SHIFT(448),
  [29] = {.count = 1, .reusable = true}, SHIFT(442),
  [31] = {.count = 1, .reusable = true}, SHIFT(436),
  [33] = {.count = 1, .reusable = true}, SHIFT(432),
  [35] = {.count = 1, .reusable = true}, SHIFT(431),
  [37] = {.count = 1, .reusable = true}, SHIFT(430),
  [39] = {.count = 1, .reusable = true}, SHIFT(429),
  [41] = {.count = 1, .reusable = true}, SHIFT(428),
  [43] = {.count = 1, .reusable = true}, SHIFT(427),
  [45] = {.count = 1, .reusable = true}, SHIFT(188),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(388),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(474),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(470),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(466),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(462),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(460),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(458),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(456),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(454),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(448),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(442),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(436),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(432),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(431),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(430),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(429),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(428),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(427),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(188),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(241),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(307),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(241),
  [123] = {.count = 1, .reusable = true}, SHIFT(307),
  [125] = {.count = 1, .reusable = true}, SHIFT(28),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [131] = {.count = 1, .reusable = true}, SHIFT(243),
  [133] = {.count = 1, .reusable = false}, SHIFT(60),
  [135] = {.count = 1, .reusable = true}, SHIFT(399),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(314),
  [143] = {.count = 1, .reusable = true}, SHIFT(231),
  [145] = {.count = 1, .reusable = false}, SHIFT(71),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [151] = {.count = 1, .reusable = true}, SHIFT(235),
  [153] = {.count = 1, .reusable = false}, SHIFT(72),
  [155] = {.count = 1, .reusable = true}, SHIFT(393),
  [157] = {.count = 1, .reusable = true}, SHIFT(264),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(314),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(264),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(399),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(393),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [211] = {.count = 1, .reusable = false}, SHIFT(113),
  [213] = {.count = 1, .reusable = true}, SHIFT(465),
  [215] = {.count = 1, .reusable = true}, SHIFT(310),
  [217] = {.count = 1, .reusable = false}, SHIFT(93),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [221] = {.count = 1, .reusable = true}, SHIFT(335),
  [223] = {.count = 1, .reusable = false}, SHIFT(101),
  [225] = {.count = 1, .reusable = true}, SHIFT(263),
  [227] = {.count = 1, .reusable = true}, SHIFT(464),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(464),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(263),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(465),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(310),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [247] = {.count = 1, .reusable = false}, SHIFT(126),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [253] = {.count = 1, .reusable = false}, SHIFT(125),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [259] = {.count = 1, .reusable = false}, SHIFT(131),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [267] = {.count = 1, .reusable = false}, SHIFT(147),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [273] = {.count = 1, .reusable = true}, SHIFT(239),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [279] = {.count = 1, .reusable = false}, SHIFT(137),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [285] = {.count = 1, .reusable = true}, SHIFT(233),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [291] = {.count = 1, .reusable = false}, SHIFT(141),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [295] = {.count = 1, .reusable = true}, SHIFT(336),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [305] = {.count = 1, .reusable = false}, SHIFT(182),
  [307] = {.count = 1, .reusable = true}, SHIFT(472),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [313] = {.count = 1, .reusable = false}, SHIFT(344),
  [315] = {.count = 1, .reusable = true}, SHIFT(344),
  [317] = {.count = 1, .reusable = false}, SHIFT(190),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [323] = {.count = 1, .reusable = false}, SHIFT(192),
  [325] = {.count = 1, .reusable = true}, SHIFT(269),
  [327] = {.count = 1, .reusable = true}, SHIFT(473),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [333] = {.count = 1, .reusable = false}, SHIFT(160),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(472),
  [338] = {.count = 1, .reusable = true}, SHIFT(308),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(473),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(269),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [352] = {.count = 1, .reusable = false}, SHIFT(183),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [358] = {.count = 1, .reusable = true}, SHIFT(247),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(308),
  [363] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(344),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(344),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [375] = {.count = 1, .reusable = true}, SHIFT(208),
  [377] = {.count = 1, .reusable = true}, SHIFT(198),
  [379] = {.count = 1, .reusable = false}, SHIFT(383),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [387] = {.count = 1, .reusable = true}, SHIFT(412),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [391] = {.count = 1, .reusable = true}, SHIFT(217),
  [393] = {.count = 1, .reusable = true}, SHIFT(205),
  [395] = {.count = 1, .reusable = false}, SHIFT(389),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(412),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [408] = {.count = 1, .reusable = true}, SHIFT(224),
  [410] = {.count = 1, .reusable = true}, SHIFT(202),
  [412] = {.count = 1, .reusable = false}, SHIFT(392),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [416] = {.count = 1, .reusable = true}, SHIFT(214),
  [418] = {.count = 1, .reusable = true}, SHIFT(199),
  [420] = {.count = 1, .reusable = false}, SHIFT(371),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [426] = {.count = 1, .reusable = false}, SHIFT(129),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [432] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(118),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_healthcheck, 3),
  [439] = {.count = 1, .reusable = false}, SHIFT(118),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [443] = {.count = 1, .reusable = true}, SHIFT(204),
  [445] = {.count = 1, .reusable = false}, SHIFT(443),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(123),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [462] = {.count = 1, .reusable = false}, SHIFT(123),
  [464] = {.count = 1, .reusable = false}, SHIFT(178),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [470] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [472] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [474] = {.count = 1, .reusable = false}, SHIFT(135),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [488] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [490] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(129),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [497] = {.count = 1, .reusable = true}, SHIFT(200),
  [499] = {.count = 1, .reusable = false}, SHIFT(406),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [503] = {.count = 1, .reusable = true}, SHIFT(345),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [515] = {.count = 1, .reusable = false}, SHIFT(372),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [523] = {.count = 1, .reusable = false}, SHIFT(380),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [527] = {.count = 1, .reusable = true}, SHIFT(351),
  [529] = {.count = 1, .reusable = true}, SHIFT(349),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [545] = {.count = 1, .reusable = false}, SHIFT(367),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [603] = {.count = 1, .reusable = true}, SHIFT(326),
  [605] = {.count = 1, .reusable = true}, SHIFT(327),
  [607] = {.count = 1, .reusable = false}, SHIFT(63),
  [609] = {.count = 1, .reusable = true}, SHIFT(414),
  [611] = {.count = 1, .reusable = true}, SHIFT(413),
  [613] = {.count = 1, .reusable = true}, SHIFT(261),
  [615] = {.count = 1, .reusable = true}, SHIFT(245),
  [617] = {.count = 1, .reusable = true}, SHIFT(223),
  [619] = {.count = 1, .reusable = true}, SHIFT(323),
  [621] = {.count = 1, .reusable = false}, SHIFT(149),
  [623] = {.count = 1, .reusable = true}, SHIFT(363),
  [625] = {.count = 1, .reusable = true}, SHIFT(420),
  [627] = {.count = 1, .reusable = true}, SHIFT(280),
  [629] = {.count = 1, .reusable = true}, SHIFT(222),
  [631] = {.count = 1, .reusable = true}, SHIFT(220),
  [633] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(338),
  [636] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(361),
  [639] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(391),
  [642] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(390),
  [645] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(254),
  [648] = {.count = 1, .reusable = true}, SHIFT(210),
  [650] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(338),
  [653] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(361),
  [656] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(391),
  [659] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(390),
  [662] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(254),
  [665] = {.count = 1, .reusable = true}, SHIFT(225),
  [667] = {.count = 1, .reusable = true}, SHIFT(227),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(338),
  [672] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(361),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(391),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(390),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(254),
  [684] = {.count = 1, .reusable = true}, SHIFT(311),
  [686] = {.count = 1, .reusable = false}, SHIFT(193),
  [688] = {.count = 1, .reusable = true}, SHIFT(434),
  [690] = {.count = 1, .reusable = true}, SHIFT(433),
  [692] = {.count = 1, .reusable = true}, SHIFT(275),
  [694] = {.count = 1, .reusable = true}, SHIFT(319),
  [696] = {.count = 1, .reusable = false}, SHIFT(121),
  [698] = {.count = 1, .reusable = true}, SHIFT(365),
  [700] = {.count = 1, .reusable = true}, SHIFT(364),
  [702] = {.count = 1, .reusable = true}, SHIFT(249),
  [704] = {.count = 1, .reusable = true}, SHIFT(306),
  [706] = {.count = 1, .reusable = false}, SHIFT(108),
  [708] = {.count = 1, .reusable = true}, SHIFT(395),
  [710] = {.count = 1, .reusable = true}, SHIFT(394),
  [712] = {.count = 1, .reusable = true}, SHIFT(253),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [716] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [724] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [732] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [744] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [748] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [752] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [756] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [758] = {.count = 1, .reusable = true}, SHIFT(272),
  [760] = {.count = 1, .reusable = true}, SHIFT(313),
  [762] = {.count = 1, .reusable = true}, SHIFT(257),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [766] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [768] = {.count = 1, .reusable = true}, SHIFT(330),
  [770] = {.count = 1, .reusable = true}, SHIFT(353),
  [772] = {.count = 1, .reusable = true}, SHIFT(166),
  [774] = {.count = 1, .reusable = false}, SHIFT(289),
  [776] = {.count = 1, .reusable = true}, SHIFT(289),
  [778] = {.count = 1, .reusable = true}, SHIFT(265),
  [780] = {.count = 1, .reusable = true}, SHIFT(328),
  [782] = {.count = 1, .reusable = true}, SHIFT(152),
  [784] = {.count = 1, .reusable = true}, SHIFT(151),
  [786] = {.count = 1, .reusable = true}, SHIFT(255),
  [788] = {.count = 1, .reusable = true}, SHIFT(230),
  [790] = {.count = 1, .reusable = false}, SHIFT(423),
  [792] = {.count = 1, .reusable = true}, SHIFT(469),
  [794] = {.count = 1, .reusable = true}, SHIFT(262),
  [796] = {.count = 1, .reusable = false}, SHIFT(132),
  [798] = {.count = 1, .reusable = true}, SHIFT(244),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [802] = {.count = 1, .reusable = true}, SHIFT(266),
  [804] = {.count = 1, .reusable = true}, SHIFT(312),
  [806] = {.count = 1, .reusable = true}, SHIFT(309),
  [808] = {.count = 1, .reusable = true}, SHIFT(49),
  [810] = {.count = 1, .reusable = true}, SHIFT(384),
  [812] = {.count = 1, .reusable = true}, SHIFT(385),
  [814] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(266),
  [819] = {.count = 1, .reusable = true}, SHIFT(232),
  [821] = {.count = 1, .reusable = false}, SHIFT(403),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(309),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(262),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(468),
  [832] = {.count = 1, .reusable = true}, SHIFT(468),
  [834] = {.count = 1, .reusable = true}, SHIFT(234),
  [836] = {.count = 1, .reusable = false}, SHIFT(421),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(469),
  [841] = {.count = 1, .reusable = true}, SHIFT(23),
  [843] = {.count = 1, .reusable = true}, SHIFT(112),
  [845] = {.count = 1, .reusable = true}, SHIFT(299),
  [847] = {.count = 1, .reusable = true}, SHIFT(109),
  [849] = {.count = 1, .reusable = true}, SHIFT(237),
  [851] = {.count = 1, .reusable = true}, SHIFT(53),
  [853] = {.count = 1, .reusable = true}, SHIFT(295),
  [855] = {.count = 1, .reusable = true}, SHIFT(322),
  [857] = {.count = 1, .reusable = true}, SHIFT(304),
  [859] = {.count = 1, .reusable = true}, SHIFT(354),
  [861] = {.count = 1, .reusable = true}, SHIFT(129),
  [863] = {.count = 1, .reusable = false}, SHIFT(356),
  [865] = {.count = 1, .reusable = true}, SHIFT(153),
  [867] = {.count = 1, .reusable = true}, SHIFT(348),
  [869] = {.count = 1, .reusable = true}, SHIFT(291),
  [871] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_string, 2),
  [873] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(304),
  [876] = {.count = 1, .reusable = true}, SHIFT(476),
  [878] = {.count = 1, .reusable = true}, SHIFT(52),
  [880] = {.count = 1, .reusable = true}, SHIFT(402),
  [882] = {.count = 1, .reusable = true}, SHIFT(43),
  [884] = {.count = 1, .reusable = true}, SHIFT(478),
  [886] = {.count = 1, .reusable = true}, SHIFT(111),
  [888] = {.count = 1, .reusable = true}, SHIFT(477),
  [890] = {.count = 1, .reusable = true}, SHIFT(296),
  [892] = {.count = 1, .reusable = true}, SHIFT(341),
  [894] = {.count = 1, .reusable = true}, SHIFT(340),
  [896] = {.count = 1, .reusable = true}, SHIFT(471),
  [898] = {.count = 1, .reusable = true}, SHIFT(288),
  [900] = {.count = 1, .reusable = true}, SHIFT(463),
  [902] = {.count = 1, .reusable = true}, SHIFT(20),
  [904] = {.count = 1, .reusable = true}, SHIFT(189),
  [906] = {.count = 1, .reusable = true}, SHIFT(325),
  [908] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [910] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(318),
  [913] = {.count = 1, .reusable = true}, SHIFT(157),
  [915] = {.count = 1, .reusable = true}, SHIFT(411),
  [917] = {.count = 1, .reusable = false}, SHIFT(329),
  [919] = {.count = 1, .reusable = false}, SHIFT(156),
  [921] = {.count = 1, .reusable = true}, SHIFT(138),
  [923] = {.count = 1, .reusable = true}, SHIFT(318),
  [925] = {.count = 1, .reusable = true}, SHIFT(337),
  [927] = {.count = 1, .reusable = true}, SHIFT(240),
  [929] = {.count = 1, .reusable = true}, SHIFT(467),
  [931] = {.count = 1, .reusable = true}, SHIFT(94),
  [933] = {.count = 1, .reusable = true}, SHIFT(158),
  [935] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(353),
  [938] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [940] = {.count = 1, .reusable = true}, SHIFT(333),
  [942] = {.count = 1, .reusable = true}, SHIFT(73),
  [944] = {.count = 1, .reusable = true}, SHIFT(475),
  [946] = {.count = 1, .reusable = true}, SHIFT(236),
  [948] = {.count = 1, .reusable = true}, SHIFT(173),
  [950] = {.count = 1, .reusable = true}, SHIFT(164),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [954] = {.count = 1, .reusable = true}, SHIFT(155),
  [956] = {.count = 1, .reusable = true}, SHIFT(128),
  [958] = {.count = 1, .reusable = true}, SHIFT(172),
  [960] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(83),
  [963] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [965] = {.count = 1, .reusable = true}, SHIFT(303),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [969] = {.count = 1, .reusable = true}, SHIFT(246),
  [971] = {.count = 1, .reusable = true}, SHIFT(324),
  [973] = {.count = 1, .reusable = true}, SHIFT(127),
  [975] = {.count = 1, .reusable = true}, SHIFT(119),
  [977] = {.count = 1, .reusable = true}, SHIFT(229),
  [979] = {.count = 1, .reusable = true}, SHIFT(24),
  [981] = {.count = 1, .reusable = true}, SHIFT(416),
  [983] = {.count = 1, .reusable = true}, SHIFT(407),
  [985] = {.count = 1, .reusable = true}, SHIFT(405),
  [987] = {.count = 1, .reusable = true}, SHIFT(251),
  [989] = {.count = 1, .reusable = true}, SHIFT(373),
  [991] = {.count = 1, .reusable = true}, SHIFT(250),
  [993] = {.count = 1, .reusable = true}, SHIFT(215),
  [995] = {.count = 1, .reusable = true}, SHIFT(274),
  [997] = {.count = 1, .reusable = true}, SHIFT(401),
  [999] = {.count = 1, .reusable = true}, SHIFT(376),
  [1001] = {.count = 1, .reusable = true}, SHIFT(226),
  [1003] = {.count = 1, .reusable = true}, SHIFT(39),
  [1005] = {.count = 1, .reusable = true}, SHIFT(26),
  [1007] = {.count = 1, .reusable = true}, SHIFT(212),
  [1009] = {.count = 1, .reusable = true}, SHIFT(38),
  [1011] = {.count = 1, .reusable = true}, SHIFT(347),
  [1013] = {.count = 1, .reusable = true}, SHIFT(221),
  [1015] = {.count = 1, .reusable = true}, SHIFT(369),
  [1017] = {.count = 1, .reusable = true}, SHIFT(211),
  [1019] = {.count = 1, .reusable = true}, SHIFT(213),
  [1021] = {.count = 1, .reusable = true}, SHIFT(382),
  [1023] = {.count = 1, .reusable = true}, SHIFT(419),
  [1025] = {.count = 1, .reusable = true}, SHIFT(422),
  [1027] = {.count = 1, .reusable = true}, SHIFT(40),
  [1029] = {.count = 1, .reusable = true}, SHIFT(297),
  [1031] = {.count = 1, .reusable = true}, SHIFT(437),
  [1033] = {.count = 1, .reusable = true}, SHIFT(368),
  [1035] = {.count = 1, .reusable = true}, SHIFT(370),
  [1037] = {.count = 1, .reusable = true}, SHIFT(379),
  [1039] = {.count = 1, .reusable = true}, SHIFT(362),
  [1041] = {.count = 1, .reusable = true}, SHIFT(375),
  [1043] = {.count = 1, .reusable = true}, SHIFT(377),
  [1045] = {.count = 1, .reusable = true}, SHIFT(12),
  [1047] = {.count = 1, .reusable = true}, SHIFT(11),
  [1049] = {.count = 1, .reusable = true}, SHIFT(10),
  [1051] = {.count = 1, .reusable = true}, SHIFT(449),
  [1053] = {.count = 1, .reusable = true}, SHIFT(219),
  [1055] = {.count = 1, .reusable = true}, SHIFT(209),
  [1057] = {.count = 1, .reusable = true}, SHIFT(260),
  [1059] = {.count = 1, .reusable = true}, SHIFT(96),
  [1061] = {.count = 1, .reusable = true}, SHIFT(42),
  [1063] = {.count = 1, .reusable = true}, SHIFT(381),
  [1065] = {.count = 1, .reusable = true}, SHIFT(54),
  [1067] = {.count = 1, .reusable = true}, SHIFT(77),
  [1069] = {.count = 1, .reusable = true}, SHIFT(78),
  [1071] = {.count = 1, .reusable = true}, SHIFT(81),
  [1073] = {.count = 1, .reusable = true}, SHIFT(179),
  [1075] = {.count = 1, .reusable = true}, SHIFT(298),
  [1077] = {.count = 1, .reusable = true}, SHIFT(397),
  [1079] = {.count = 1, .reusable = true}, SHIFT(398),
  [1081] = {.count = 1, .reusable = true}, SHIFT(55),
  [1083] = {.count = 1, .reusable = true}, SHIFT(69),
  [1085] = {.count = 1, .reusable = true}, SHIFT(70),
  [1087] = {.count = 1, .reusable = true}, SHIFT(59),
  [1089] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1091] = {.count = 1, .reusable = true}, SHIFT(417),
  [1093] = {.count = 1, .reusable = true}, SHIFT(228),
  [1095] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1097] = {.count = 1, .reusable = true}, SHIFT(22),
  [1099] = {.count = 1, .reusable = true}, SHIFT(136),
  [1101] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1103] = {.count = 1, .reusable = true}, SHIFT(321),
  [1105] = {.count = 1, .reusable = true}, SHIFT(300),
  [1107] = {.count = 1, .reusable = true}, SHIFT(248),
  [1109] = {.count = 1, .reusable = true}, SHIFT(320),
  [1111] = {.count = 1, .reusable = true}, SHIFT(357),
  [1113] = {.count = 1, .reusable = true}, SHIFT(252),
  [1115] = {.count = 1, .reusable = true}, SHIFT(409),
  [1117] = {.count = 1, .reusable = true}, SHIFT(410),
  [1119] = {.count = 1, .reusable = true}, SHIFT(83),
  [1121] = {.count = 1, .reusable = true}, SHIFT(6),
  [1123] = {.count = 1, .reusable = true}, SHIFT(207),
  [1125] = {.count = 1, .reusable = true}, SHIFT(25),
  [1127] = {.count = 1, .reusable = true}, SHIFT(46),
  [1129] = {.count = 1, .reusable = true}, SHIFT(48),
  [1131] = {.count = 1, .reusable = true}, SHIFT(47),
  [1133] = {.count = 1, .reusable = true}, SHIFT(359),
  [1135] = {.count = 1, .reusable = true}, SHIFT(400),
  [1137] = {.count = 1, .reusable = true}, SHIFT(114),
  [1139] = {.count = 1, .reusable = true}, SHIFT(293),
  [1141] = {.count = 1, .reusable = true}, SHIFT(302),
  [1143] = {.count = 1, .reusable = true}, SHIFT(290),
  [1145] = {.count = 1, .reusable = true}, SHIFT(316),
  [1147] = {.count = 1, .reusable = true}, SHIFT(21),
  [1149] = {.count = 1, .reusable = true}, SHIFT(294),
  [1151] = {.count = 1, .reusable = true}, SHIFT(104),
  [1153] = {.count = 1, .reusable = true}, SHIFT(106),
  [1155] = {.count = 1, .reusable = true}, SHIFT(115),
  [1157] = {.count = 1, .reusable = true}, SHIFT(360),
  [1159] = {.count = 1, .reusable = true}, SHIFT(242),
  [1161] = {.count = 1, .reusable = true}, SHIFT(195),
  [1163] = {.count = 1, .reusable = true}, SHIFT(56),
  [1165] = {.count = 1, .reusable = true}, SHIFT(197),
  [1167] = {.count = 1, .reusable = true}, SHIFT(292),
  [1169] = {.count = 1, .reusable = true}, SHIFT(350),
  [1171] = {.count = 1, .reusable = true}, SHIFT(107),
  [1173] = {.count = 1, .reusable = true}, SHIFT(256),
  [1175] = {.count = 1, .reusable = true}, SHIFT(281),
  [1177] = {.count = 1, .reusable = true}, SHIFT(439),
  [1179] = {.count = 1, .reusable = true}, SHIFT(440),
  [1181] = {.count = 1, .reusable = true}, SHIFT(305),
  [1183] = {.count = 1, .reusable = true}, SHIFT(282),
  [1185] = {.count = 1, .reusable = true}, SHIFT(445),
  [1187] = {.count = 1, .reusable = true}, SHIFT(446),
  [1189] = {.count = 1, .reusable = true}, SHIFT(259),
  [1191] = {.count = 1, .reusable = true}, SHIFT(283),
  [1193] = {.count = 1, .reusable = true}, SHIFT(451),
  [1195] = {.count = 1, .reusable = true}, SHIFT(452),
  [1197] = {.count = 1, .reusable = true}, SHIFT(425),
  [1199] = {.count = 1, .reusable = true}, SHIFT(285),
  [1201] = {.count = 1, .reusable = true}, SHIFT(286),
  [1203] = {.count = 1, .reusable = true}, SHIFT(287),
  [1205] = {.count = 1, .reusable = true}, SHIFT(284),
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
