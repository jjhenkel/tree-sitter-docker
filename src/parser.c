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
#define STATE_COUNT 518
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
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
  aux_sym_env_key_token1 = 32,
  aux_sym_env_value_token1 = 33,
  aux_sym_env_value_token2 = 34,
  aux_sym_env_value_token3 = 35,
  anon_sym_DASH = 36,
  aux_sym__port_part_token1 = 37,
  anon_sym_SLASH = 38,
  aux_sym_port_protocol_token1 = 39,
  aux_sym_port_protocol_token2 = 40,
  aux_sym_platform_token1 = 41,
  aux_sym__repository_start_token1 = 42,
  aux_sym__repository_start_token2 = 43,
  aux_sym__repository_start_token3 = 44,
  aux_sym__repository_start_token4 = 45,
  aux_sym__repository_start_token5 = 46,
  aux_sym__repository_start_token6 = 47,
  aux_sym__repository_start_token7 = 48,
  aux_sym__repository_start_token8 = 49,
  aux_sym__repository_start_token9 = 50,
  aux_sym__repository_start_token10 = 51,
  aux_sym__repository_start_token11 = 52,
  aux_sym__repository_start_token12 = 53,
  aux_sym__repository_start_token13 = 54,
  aux_sym__repository_start_token14 = 55,
  aux_sym__repository_start_token15 = 56,
  aux_sym__repository_start_token16 = 57,
  sym_hc_none = 58,
  anon_sym_DASH_DASHinterval = 59,
  aux_sym_hc_interval_token1 = 60,
  anon_sym_DASH_DASHtimeout = 61,
  anon_sym_DASH_DASHstart_DASHperiod = 62,
  anon_sym_DASH_DASHretires = 63,
  aux_sym_label_pair_token1 = 64,
  aux_sym_label_value_token1 = 65,
  sym_signal_num = 66,
  aux_sym_signal_name_token1 = 67,
  aux_sym_signal_name_token2 = 68,
  aux_sym_user_name_token1 = 69,
  sym_path = 70,
  aux_sym__anything_token1 = 71,
  anon_sym_LBRACE = 72,
  anon_sym_RBRACE = 73,
  anon_sym_COLON_DASH = 74,
  aux_sym_variable_default_value_token1 = 75,
  anon_sym_COLON_PLUS = 76,
  sym__docker_variable = 77,
  sym_template_expr_curly_braces = 78,
  sym_template_expr_percent_signs = 79,
  aux_sym_template_expr_less_than_equals_token1 = 80,
  aux_sym_template_expr_less_than_equals_token2 = 81,
  aux_sym_template_expr_less_than_equals_token3 = 82,
  sym__space = 83,
  sym__blank_line = 84,
  sym__space_no_newline = 85,
  sym_comment = 86,
  sym_line_continuation = 87,
  anon_sym_COMMA = 88,
  anon_sym_RBRACK = 89,
  sym__json_prefix = 90,
  aux_sym__json_string_token1 = 91,
  sym__json_escape_sequence = 92,
  sym_dockerfile = 93,
  sym__directive = 94,
  sym_add = 95,
  sym_arg = 96,
  sym_cmd = 97,
  sym_copy = 98,
  sym_entrypoint = 99,
  sym_env = 100,
  sym_expose = 101,
  sym_from = 102,
  sym_healthcheck = 103,
  sym_label = 104,
  sym_maintainer = 105,
  sym_onbuild = 106,
  sym_run = 107,
  sym_shell = 108,
  sym_stopsignal = 109,
  sym_user = 110,
  sym_volume = 111,
  sym_workdir = 112,
  sym_arg_default = 113,
  aux_sym__env_pairs = 114,
  sym_env_pair = 115,
  sym_env_key = 116,
  sym_env_value = 117,
  sym__port_spec = 118,
  sym_mapped_port = 119,
  sym_mapped_no_lhs = 120,
  sym__port = 121,
  sym_port = 122,
  sym_port_range = 123,
  sym__port_part = 124,
  sym_port_protocol = 125,
  sym_platform = 126,
  sym_repository = 127,
  sym__repository_start = 128,
  sym__repository_continued = 129,
  sym_image = 130,
  sym_tag = 131,
  sym_digest = 132,
  sym_as_name = 133,
  sym__hc_interval = 134,
  sym_hc_interval = 135,
  sym__hc_timeout = 136,
  sym_hc_timeout = 137,
  sym__hc_start_period = 138,
  sym_hc_start_period = 139,
  sym__hc_retries = 140,
  sym_hc_retries = 141,
  sym__hc_options = 142,
  sym__hc_command = 143,
  sym_hc_command = 144,
  aux_sym__labels = 145,
  sym_label_pair = 146,
  sym_label_key = 147,
  sym_label_value = 148,
  sym_signal_name = 149,
  sym_user_name = 150,
  sym_user_group = 151,
  sym_user_id = 152,
  sym_user_group_id = 153,
  aux_sym__paths = 154,
  aux_sym__anything = 155,
  sym_docker_variable = 156,
  sym_variable_default_value = 157,
  sym_variable_this_or_null = 158,
  sym_template_expr_less_than_equals = 159,
  sym_json_array = 160,
  sym__anything_or_json_array = 161,
  sym__json_value = 162,
  aux_sym__json_string = 163,
  aux_sym_dockerfile_repeat1 = 164,
  aux_sym_expose_repeat1 = 165,
  aux_sym_healthcheck_repeat1 = 166,
  aux_sym_workdir_repeat1 = 167,
  aux_sym_env_value_repeat1 = 168,
  aux_sym_repository_repeat1 = 169,
  aux_sym__repository_start_repeat1 = 170,
  aux_sym__repository_start_repeat2 = 171,
  aux_sym__repository_start_repeat3 = 172,
  aux_sym__repository_start_repeat4 = 173,
  aux_sym_template_expr_less_than_equals_repeat1 = 174,
  aux_sym_json_array_repeat1 = 175,
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
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_env_value_token1] = "env_value_token1",
  [aux_sym_env_value_token2] = "env_value_token2",
  [aux_sym_env_value_token3] = "env_value_token3",
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
  [sym_hc_none] = "hc_none",
  [anon_sym_DASH_DASHinterval] = "--interval",
  [aux_sym_hc_interval_token1] = "hc_interval_token1",
  [anon_sym_DASH_DASHtimeout] = "--timeout",
  [anon_sym_DASH_DASHstart_DASHperiod] = "--start-period",
  [anon_sym_DASH_DASHretires] = "--retires",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [aux_sym_label_value_token1] = "label_value_token1",
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
  [aux_sym__env_pairs] = "_env_pairs",
  [sym_env_pair] = "env_pair",
  [sym_env_key] = "env_key",
  [sym_env_value] = "env_value",
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
  [sym__hc_interval] = "_hc_interval",
  [sym_hc_interval] = "hc_interval",
  [sym__hc_timeout] = "_hc_timeout",
  [sym_hc_timeout] = "hc_timeout",
  [sym__hc_start_period] = "_hc_start_period",
  [sym_hc_start_period] = "hc_start_period",
  [sym__hc_retries] = "_hc_retries",
  [sym_hc_retries] = "hc_retries",
  [sym__hc_options] = "_hc_options",
  [sym__hc_command] = "_hc_command",
  [sym_hc_command] = "hc_command",
  [aux_sym__labels] = "_labels",
  [sym_label_pair] = "label_pair",
  [sym_label_key] = "label_key",
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
  [aux_sym_healthcheck_repeat1] = "healthcheck_repeat1",
  [aux_sym_workdir_repeat1] = "workdir_repeat1",
  [aux_sym_env_value_repeat1] = "env_value_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
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
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_value_token3] = {
    .visible = false,
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
  [sym_hc_none] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hc_interval_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASHtimeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHstart_DASHperiod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHretires] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_value_token1] = {
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
  [aux_sym__env_pairs] = {
    .visible = false,
    .named = false,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_env_value] = {
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
  [sym__hc_interval] = {
    .visible = false,
    .named = true,
  },
  [sym_hc_interval] = {
    .visible = true,
    .named = true,
  },
  [sym__hc_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym_hc_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym__hc_start_period] = {
    .visible = false,
    .named = true,
  },
  [sym_hc_start_period] = {
    .visible = true,
    .named = true,
  },
  [sym__hc_retries] = {
    .visible = false,
    .named = true,
  },
  [sym_hc_retries] = {
    .visible = true,
    .named = true,
  },
  [sym__hc_options] = {
    .visible = false,
    .named = true,
  },
  [sym__hc_command] = {
    .visible = false,
    .named = true,
  },
  [sym_hc_command] = {
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
  [sym_label_key] = {
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
  [aux_sym_healthcheck_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_value_repeat1] = {
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

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [2] = sym_env_value,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '\r') ADVANCE(1030);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(1030);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == ',') ADVANCE(1027);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(1028);
      if (lookahead == '{') ADVANCE(998);
      if (lookahead == '}') ADVANCE(999);
      if (lookahead != 0) ADVANCE(1030);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(329);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(361);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(329);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(361);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '"') ADVANCE(921);
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(392);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(397);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(398);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(915);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(880);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(902);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(857);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(844);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(903);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(889);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(891);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(841);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(915);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(915);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(880);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(902);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(857);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(844);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(903);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(889);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(891);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(842);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(915);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(550);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(552);
      if (lookahead == '\\') ADVANCE(576);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(496);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(550);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(552);
      if (lookahead == '\\') ADVANCE(576);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(496);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(550);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(552);
      if (lookahead == '\\') ADVANCE(576);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(497);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(735);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(739);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(725);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(726);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(785);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(771);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(773);
      if (lookahead == '\\') ADVANCE(724);
      if (lookahead == '{') ADVANCE(799);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(502);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(735);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(739);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(725);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(726);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(785);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(771);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(773);
      if (lookahead == '\\') ADVANCE(724);
      if (lookahead == '{') ADVANCE(799);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(502);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(735);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(739);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(725);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(726);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(785);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(771);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(773);
      if (lookahead == '\\') ADVANCE(724);
      if (lookahead == '{') ADVANCE(799);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(636);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(591);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(578);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(649);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(498);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(636);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(591);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(578);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(649);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(498);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(636);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(591);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(578);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(649);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(499);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(650);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(711);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(697);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(723);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(650);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(711);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(697);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(723);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(650);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(711);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(697);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(723);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(501);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(298);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(253);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(285);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(311);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(925);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(928);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(933);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(926);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(923);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(924);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(930);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(935);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(934);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(931);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(932);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(202);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead == ',') ADVANCE(1027);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(1028);
      if (lookahead == '}') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1030);
      if (lookahead == ',') ADVANCE(1027);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(1028);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(1030);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1030);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(1030);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1017);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1017);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == '[') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1010);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1010);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(1007);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1008);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1006);
      if (lookahead == '\\') ADVANCE(1005);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1006);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1013);
      if (lookahead == '#') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(1001);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1002);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1026);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(465);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1026);
      if (lookahead == '#') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1026);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1026);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(833);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1026);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1031);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1015);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(832);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(915);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(915);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '}') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(839);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '\\') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '\\') ADVANCE(724);
      if (lookahead == '{') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '\\') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(650);
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead == '{') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead == '{') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(1004);
      if (lookahead == '{') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1004);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(493);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(936);
      END_STATE();
    case 62:
      if (lookahead == '+') ADVANCE(1003);
      if (lookahead == '-') ADVANCE(1000);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(819);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(819);
      if (lookahead != 0) ADVANCE(1012);
      END_STATE();
    case 68:
      if (lookahead == '>') ADVANCE(819);
      if (lookahead != 0) ADVANCE(1011);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(829);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(42);
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(919);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(936);
      END_STATE();
    case 101:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(936);
      if (lookahead == '\\') ADVANCE(919);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(831);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '=') ADVANCE(831);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1013);
      END_STATE();
    case 103:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(818);
      END_STATE();
    case 104:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(823);
      END_STATE();
    case 105:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(821);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 112:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(837);
      END_STATE();
    case 134:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 136:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 137:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(220);
      END_STATE();
    case 146:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(176);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 172:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(474);
      END_STATE();
    case 174:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 175:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 191:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 193:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 194:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 195:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 196:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(936);
      END_STATE();
    case 197:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(936);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(465);
      END_STATE();
    case 200:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(833);
      END_STATE();
    case 201:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(463);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '$') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(414);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(443);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(412);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(937);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(466);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '2') ADVANCE(477);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(1021);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(805);
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
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(496);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(497);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(498);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(499);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(501);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(502);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(519);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 537:
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 555:
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(495);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 576:
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
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
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
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
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
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
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(592);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
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
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
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
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
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
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(716);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(793);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(742);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(747);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(750);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(770);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(733);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(740);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(774);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(738);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(781);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(736);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(794);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(734);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(737);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(779);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(795);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(786);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(775);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(776);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(796);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(772);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(783);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(752);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(724);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(780);
      if (lookahead == '{') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(724);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(797);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(800);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(803);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(804);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(806);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(807);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(811);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(813);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(815);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(817);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(820);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(822);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretires);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(841);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(842);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(858);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(918);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(918);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1015);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(918);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(917);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == '\\') ADVANCE(1024);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(938);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(946);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(950);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(946);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(981);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(997);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(983);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(942);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(986);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(977);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(951);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(972);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(1024);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(920);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(937);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(952);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(937);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(963);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(937);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(956);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(937);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(937);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(985);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(937);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(937);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(937);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(937);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(945);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(937);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(949);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(954);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(985);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(966);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(937);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(937);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(937);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(947);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(946);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(994);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(937);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(937);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(948);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(992);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(970);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(989);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(937);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(962);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(995);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(988);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(937);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(980);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(964);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(937);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(937);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(948);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(955);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(941);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(937);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(961);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(937);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(971);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(937);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(937);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(984);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 997:
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
          lookahead != 'v') ADVANCE(937);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(987);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1002);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1002);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1004:
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
          lookahead != '}') ADVANCE(1004);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1006);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1006);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1008);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1008);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1010);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1010);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1015);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1015);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1016);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1017);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead == '#') ADVANCE(920);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(823);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(821);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1023);
      if (lookahead != 0) ADVANCE(832);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1023);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(1023);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1026);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 1031:
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
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
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
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 57},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 57},
  [214] = {.lex_state = 58},
  [215] = {.lex_state = 57},
  [216] = {.lex_state = 57},
  [217] = {.lex_state = 58},
  [218] = {.lex_state = 58},
  [219] = {.lex_state = 58},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 58},
  [222] = {.lex_state = 57},
  [223] = {.lex_state = 58},
  [224] = {.lex_state = 57},
  [225] = {.lex_state = 57},
  [226] = {.lex_state = 57},
  [227] = {.lex_state = 57},
  [228] = {.lex_state = 57},
  [229] = {.lex_state = 57},
  [230] = {.lex_state = 57},
  [231] = {.lex_state = 57},
  [232] = {.lex_state = 57},
  [233] = {.lex_state = 57},
  [234] = {.lex_state = 57},
  [235] = {.lex_state = 57},
  [236] = {.lex_state = 57},
  [237] = {.lex_state = 57},
  [238] = {.lex_state = 57},
  [239] = {.lex_state = 57},
  [240] = {.lex_state = 57},
  [241] = {.lex_state = 57},
  [242] = {.lex_state = 57},
  [243] = {.lex_state = 57},
  [244] = {.lex_state = 57},
  [245] = {.lex_state = 57},
  [246] = {.lex_state = 57},
  [247] = {.lex_state = 57},
  [248] = {.lex_state = 57},
  [249] = {.lex_state = 57},
  [250] = {.lex_state = 23},
  [251] = {.lex_state = 57},
  [252] = {.lex_state = 57},
  [253] = {.lex_state = 57},
  [254] = {.lex_state = 57},
  [255] = {.lex_state = 57},
  [256] = {.lex_state = 57},
  [257] = {.lex_state = 57},
  [258] = {.lex_state = 57},
  [259] = {.lex_state = 57},
  [260] = {.lex_state = 57},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 24},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 29},
  [266] = {.lex_state = 55},
  [267] = {.lex_state = 56},
  [268] = {.lex_state = 30},
  [269] = {.lex_state = 30},
  [270] = {.lex_state = 30},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 49},
  [274] = {.lex_state = 49},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 49},
  [277] = {.lex_state = 30},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 23},
  [280] = {.lex_state = 49},
  [281] = {.lex_state = 23},
  [282] = {.lex_state = 49},
  [283] = {.lex_state = 30},
  [284] = {.lex_state = 30},
  [285] = {.lex_state = 49},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 54},
  [288] = {.lex_state = 55},
  [289] = {.lex_state = 29},
  [290] = {.lex_state = 45},
  [291] = {.lex_state = 30},
  [292] = {.lex_state = 30},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 54},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 23},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 45},
  [299] = {.lex_state = 49},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 23},
  [302] = {.lex_state = 30},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 23},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 56},
  [307] = {.lex_state = 55},
  [308] = {.lex_state = 54},
  [309] = {.lex_state = 23},
  [310] = {.lex_state = 23},
  [311] = {.lex_state = 56},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 29},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 55},
  [316] = {.lex_state = 46},
  [317] = {.lex_state = 54},
  [318] = {.lex_state = 46},
  [319] = {.lex_state = 43},
  [320] = {.lex_state = 25},
  [321] = {.lex_state = 47},
  [322] = {.lex_state = 47},
  [323] = {.lex_state = 56},
  [324] = {.lex_state = 45},
  [325] = {.lex_state = 45},
  [326] = {.lex_state = 25},
  [327] = {.lex_state = 44},
  [328] = {.lex_state = 45},
  [329] = {.lex_state = 25},
  [330] = {.lex_state = 47},
  [331] = {.lex_state = 53},
  [332] = {.lex_state = 53},
  [333] = {.lex_state = 53},
  [334] = {.lex_state = 53},
  [335] = {.lex_state = 26},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 59},
  [338] = {.lex_state = 59},
  [339] = {.lex_state = 59},
  [340] = {.lex_state = 59},
  [341] = {.lex_state = 59},
  [342] = {.lex_state = 59},
  [343] = {.lex_state = 59},
  [344] = {.lex_state = 59},
  [345] = {.lex_state = 59},
  [346] = {.lex_state = 59},
  [347] = {.lex_state = 23},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 45},
  [350] = {.lex_state = 45},
  [351] = {.lex_state = 23},
  [352] = {.lex_state = 59},
  [353] = {.lex_state = 23},
  [354] = {.lex_state = 26},
  [355] = {.lex_state = 45},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 23},
  [358] = {.lex_state = 59},
  [359] = {.lex_state = 59},
  [360] = {.lex_state = 45},
  [361] = {.lex_state = 45},
  [362] = {.lex_state = 60},
  [363] = {.lex_state = 23},
  [364] = {.lex_state = 59},
  [365] = {.lex_state = 59},
  [366] = {.lex_state = 23},
  [367] = {.lex_state = 23},
  [368] = {.lex_state = 23},
  [369] = {.lex_state = 45},
  [370] = {.lex_state = 26},
  [371] = {.lex_state = 59},
  [372] = {.lex_state = 23},
  [373] = {.lex_state = 59},
  [374] = {.lex_state = 23},
  [375] = {.lex_state = 23},
  [376] = {.lex_state = 23},
  [377] = {.lex_state = 26},
  [378] = {.lex_state = 23},
  [379] = {.lex_state = 32},
  [380] = {.lex_state = 28},
  [381] = {.lex_state = 23},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 23},
  [384] = {.lex_state = 23},
  [385] = {.lex_state = 23},
  [386] = {.lex_state = 26},
  [387] = {.lex_state = 23},
  [388] = {.lex_state = 28},
  [389] = {.lex_state = 49},
  [390] = {.lex_state = 23},
  [391] = {.lex_state = 52},
  [392] = {.lex_state = 52},
  [393] = {.lex_state = 52},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 33},
  [396] = {.lex_state = 27},
  [397] = {.lex_state = 34},
  [398] = {.lex_state = 23},
  [399] = {.lex_state = 23},
  [400] = {.lex_state = 27},
  [401] = {.lex_state = 33},
  [402] = {.lex_state = 27},
  [403] = {.lex_state = 27},
  [404] = {.lex_state = 23},
  [405] = {.lex_state = 33},
  [406] = {.lex_state = 27},
  [407] = {.lex_state = 34},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 23},
  [410] = {.lex_state = 27},
  [411] = {.lex_state = 23},
  [412] = {.lex_state = 23},
  [413] = {.lex_state = 102},
  [414] = {.lex_state = 102},
  [415] = {.lex_state = 51},
  [416] = {.lex_state = 27},
  [417] = {.lex_state = 23},
  [418] = {.lex_state = 23},
  [419] = {.lex_state = 49},
  [420] = {.lex_state = 23},
  [421] = {.lex_state = 23},
  [422] = {.lex_state = 59},
  [423] = {.lex_state = 23},
  [424] = {.lex_state = 23},
  [425] = {.lex_state = 35},
  [426] = {.lex_state = 35},
  [427] = {.lex_state = 49},
  [428] = {.lex_state = 23},
  [429] = {.lex_state = 23},
  [430] = {.lex_state = 27},
  [431] = {.lex_state = 27},
  [432] = {.lex_state = 23},
  [433] = {.lex_state = 49},
  [434] = {.lex_state = 34},
  [435] = {.lex_state = 50},
  [436] = {.lex_state = 33},
  [437] = {.lex_state = 23},
  [438] = {.lex_state = 27},
  [439] = {.lex_state = 27},
  [440] = {.lex_state = 34},
  [441] = {.lex_state = 33},
  [442] = {.lex_state = 27},
  [443] = {.lex_state = 23},
  [444] = {.lex_state = 34},
  [445] = {.lex_state = 33},
  [446] = {.lex_state = 23},
  [447] = {.lex_state = 23},
  [448] = {.lex_state = 49},
  [449] = {.lex_state = 23},
  [450] = {.lex_state = 27},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 27},
  [453] = {.lex_state = 23},
  [454] = {.lex_state = 27},
  [455] = {.lex_state = 27},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 27},
  [458] = {.lex_state = 27},
  [459] = {.lex_state = 27},
  [460] = {.lex_state = 49},
  [461] = {.lex_state = 49},
  [462] = {.lex_state = 23},
  [463] = {.lex_state = 27},
  [464] = {.lex_state = 27},
  [465] = {.lex_state = 27},
  [466] = {.lex_state = 23},
  [467] = {.lex_state = 49},
  [468] = {.lex_state = 23},
  [469] = {.lex_state = 27},
  [470] = {.lex_state = 27},
  [471] = {.lex_state = 27},
  [472] = {.lex_state = 23},
  [473] = {.lex_state = 49},
  [474] = {.lex_state = 23},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 23},
  [477] = {.lex_state = 49},
  [478] = {.lex_state = 23},
  [479] = {.lex_state = 49},
  [480] = {.lex_state = 23},
  [481] = {.lex_state = 27},
  [482] = {.lex_state = 23},
  [483] = {.lex_state = 49},
  [484] = {.lex_state = 23},
  [485] = {.lex_state = 49},
  [486] = {.lex_state = 23},
  [487] = {.lex_state = 49},
  [488] = {.lex_state = 23},
  [489] = {.lex_state = 49},
  [490] = {.lex_state = 23},
  [491] = {.lex_state = 49},
  [492] = {.lex_state = 23},
  [493] = {.lex_state = 23},
  [494] = {.lex_state = 49},
  [495] = {.lex_state = 33},
  [496] = {.lex_state = 49},
  [497] = {.lex_state = 23},
  [498] = {.lex_state = 49},
  [499] = {.lex_state = 34},
  [500] = {.lex_state = 49},
  [501] = {.lex_state = 49},
  [502] = {.lex_state = 59},
  [503] = {.lex_state = 34},
  [504] = {.lex_state = 33},
  [505] = {.lex_state = 23},
  [506] = {.lex_state = 59},
  [507] = {.lex_state = 34},
  [508] = {.lex_state = 33},
  [509] = {.lex_state = 23},
  [510] = {.lex_state = 59},
  [511] = {.lex_state = 34},
  [512] = {.lex_state = 33},
  [513] = {.lex_state = 34},
  [514] = {.lex_state = 59},
  [515] = {.lex_state = 59},
  [516] = {.lex_state = 59},
  [517] = {.lex_state = 59},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_env_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_label_pair_token1] = ACTIONS(1),
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
    [sym_dockerfile] = STATE(437),
    [sym__directive] = STATE(183),
    [sym_add] = STATE(183),
    [sym_arg] = STATE(183),
    [sym_cmd] = STATE(183),
    [sym_copy] = STATE(183),
    [sym_entrypoint] = STATE(183),
    [sym_env] = STATE(183),
    [sym_expose] = STATE(183),
    [sym_from] = STATE(183),
    [sym_healthcheck] = STATE(183),
    [sym_label] = STATE(183),
    [sym_maintainer] = STATE(183),
    [sym_onbuild] = STATE(183),
    [sym_run] = STATE(183),
    [sym_shell] = STATE(183),
    [sym_stopsignal] = STATE(183),
    [sym_user] = STATE(183),
    [sym_volume] = STATE(183),
    [sym_workdir] = STATE(183),
    [aux_sym_dockerfile_repeat1] = STATE(3),
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
    [sym__directive] = STATE(183),
    [sym_add] = STATE(183),
    [sym_arg] = STATE(183),
    [sym_cmd] = STATE(183),
    [sym_copy] = STATE(183),
    [sym_entrypoint] = STATE(183),
    [sym_env] = STATE(183),
    [sym_expose] = STATE(183),
    [sym_from] = STATE(183),
    [sym_healthcheck] = STATE(183),
    [sym_label] = STATE(183),
    [sym_maintainer] = STATE(183),
    [sym_onbuild] = STATE(183),
    [sym_run] = STATE(183),
    [sym_shell] = STATE(183),
    [sym_stopsignal] = STATE(183),
    [sym_user] = STATE(183),
    [sym_volume] = STATE(183),
    [sym_workdir] = STATE(183),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_add_token1] = ACTIONS(49),
    [aux_sym_arg_token1] = ACTIONS(52),
    [aux_sym_cmd_token1] = ACTIONS(55),
    [aux_sym_copy_token1] = ACTIONS(58),
    [aux_sym_entrypoint_token1] = ACTIONS(61),
    [aux_sym_env_token1] = ACTIONS(64),
    [aux_sym_expose_token1] = ACTIONS(67),
    [aux_sym_from_token1] = ACTIONS(70),
    [aux_sym_healthcheck_token1] = ACTIONS(73),
    [aux_sym_label_token1] = ACTIONS(76),
    [aux_sym_maintainer_token1] = ACTIONS(79),
    [aux_sym_onbuild_token1] = ACTIONS(82),
    [aux_sym_run_token1] = ACTIONS(85),
    [aux_sym_shell_token1] = ACTIONS(88),
    [aux_sym_stopsignal_token1] = ACTIONS(91),
    [aux_sym_user_token1] = ACTIONS(94),
    [aux_sym_volume_token1] = ACTIONS(97),
    [aux_sym_workdir_token1] = ACTIONS(100),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(103),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [3] = {
    [sym__directive] = STATE(183),
    [sym_add] = STATE(183),
    [sym_arg] = STATE(183),
    [sym_cmd] = STATE(183),
    [sym_copy] = STATE(183),
    [sym_entrypoint] = STATE(183),
    [sym_env] = STATE(183),
    [sym_expose] = STATE(183),
    [sym_from] = STATE(183),
    [sym_healthcheck] = STATE(183),
    [sym_label] = STATE(183),
    [sym_maintainer] = STATE(183),
    [sym_onbuild] = STATE(183),
    [sym_run] = STATE(183),
    [sym_shell] = STATE(183),
    [sym_stopsignal] = STATE(183),
    [sym_user] = STATE(183),
    [sym_volume] = STATE(183),
    [sym_workdir] = STATE(183),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(106),
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
  [4] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(96),
    [sym_port] = STATE(96),
    [sym_port_range] = STATE(96),
    [sym__port_part] = STATE(62),
    [aux_sym_expose_repeat1] = STATE(6),
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
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym_volume_token1] = ACTIONS(108),
    [aux_sym_workdir_token1] = ACTIONS(108),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(108),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym_add] = STATE(195),
    [sym_arg] = STATE(195),
    [sym_cmd] = STATE(195),
    [sym_copy] = STATE(195),
    [sym_entrypoint] = STATE(195),
    [sym_env] = STATE(195),
    [sym_expose] = STATE(195),
    [sym_healthcheck] = STATE(195),
    [sym_label] = STATE(195),
    [sym_run] = STATE(195),
    [sym_shell] = STATE(195),
    [sym_stopsignal] = STATE(195),
    [sym_user] = STATE(195),
    [sym_volume] = STATE(195),
    [sym_workdir] = STATE(195),
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
  [6] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(96),
    [sym_port] = STATE(96),
    [sym_port_range] = STATE(96),
    [sym__port_part] = STATE(62),
    [aux_sym_expose_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_add_token1] = ACTIONS(116),
    [aux_sym_arg_token1] = ACTIONS(116),
    [aux_sym_cmd_token1] = ACTIONS(116),
    [aux_sym_copy_token1] = ACTIONS(116),
    [aux_sym_entrypoint_token1] = ACTIONS(116),
    [aux_sym_env_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [aux_sym_from_token1] = ACTIONS(116),
    [aux_sym_healthcheck_token1] = ACTIONS(116),
    [aux_sym_label_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_onbuild_token1] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_shell_token1] = ACTIONS(116),
    [aux_sym_stopsignal_token1] = ACTIONS(116),
    [aux_sym_user_token1] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [aux_sym_volume_token1] = ACTIONS(116),
    [aux_sym_workdir_token1] = ACTIONS(116),
    [aux_sym__port_part_token1] = ACTIONS(124),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(116),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [7] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
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
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token16] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_add_token1] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(146),
    [aux_sym_cmd_token1] = ACTIONS(146),
    [aux_sym_copy_token1] = ACTIONS(146),
    [aux_sym_entrypoint_token1] = ACTIONS(146),
    [aux_sym_env_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(144),
    [aux_sym_healthcheck_token1] = ACTIONS(146),
    [aux_sym_label_token1] = ACTIONS(146),
    [aux_sym_maintainer_token1] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(146),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_shell_token1] = ACTIONS(146),
    [aux_sym_stopsignal_token1] = ACTIONS(146),
    [aux_sym_user_token1] = ACTIONS(146),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token4] = ACTIONS(148),
    [aux_sym__repository_start_token7] = ACTIONS(148),
    [aux_sym__repository_start_token16] = ACTIONS(144),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_add_token1] = ACTIONS(153),
    [aux_sym_arg_token1] = ACTIONS(153),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_copy_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_env_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [aux_sym_from_token1] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(151),
    [aux_sym_healthcheck_token1] = ACTIONS(153),
    [aux_sym_label_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_onbuild_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_shell_token1] = ACTIONS(153),
    [aux_sym_stopsignal_token1] = ACTIONS(153),
    [aux_sym_user_token1] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token8] = ACTIONS(155),
    [aux_sym__repository_start_token11] = ACTIONS(155),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(158),
    [aux_sym_healthcheck_token1] = ACTIONS(160),
    [aux_sym_label_token1] = ACTIONS(160),
    [aux_sym_maintainer_token1] = ACTIONS(160),
    [aux_sym_onbuild_token1] = ACTIONS(160),
    [aux_sym_run_token1] = ACTIONS(160),
    [aux_sym_shell_token1] = ACTIONS(160),
    [aux_sym_stopsignal_token1] = ACTIONS(160),
    [aux_sym_user_token1] = ACTIONS(160),
    [aux_sym_volume_token1] = ACTIONS(160),
    [aux_sym_workdir_token1] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(158),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(162),
    [aux_sym__repository_start_token15] = ACTIONS(162),
    [aux_sym__repository_start_token16] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(158),
    [sym__space_no_newline] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_add_token1] = ACTIONS(167),
    [aux_sym_arg_token1] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_copy_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_env_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(165),
    [aux_sym_healthcheck_token1] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_onbuild_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token16] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat4] = STATE(14),
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token12] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(177),
    [aux_sym_arg_token1] = ACTIONS(177),
    [aux_sym_cmd_token1] = ACTIONS(177),
    [aux_sym_copy_token1] = ACTIONS(177),
    [aux_sym_entrypoint_token1] = ACTIONS(177),
    [aux_sym_env_token1] = ACTIONS(177),
    [aux_sym_expose_token1] = ACTIONS(177),
    [aux_sym_from_token1] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(177),
    [aux_sym_label_token1] = ACTIONS(177),
    [aux_sym_maintainer_token1] = ACTIONS(177),
    [aux_sym_onbuild_token1] = ACTIONS(177),
    [aux_sym_run_token1] = ACTIONS(177),
    [aux_sym_shell_token1] = ACTIONS(177),
    [aux_sym_stopsignal_token1] = ACTIONS(177),
    [aux_sym_user_token1] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(177),
    [aux_sym_workdir_token1] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [aux_sym__repository_start_token3] = ACTIONS(181),
    [aux_sym__repository_start_token12] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [aux_sym__repository_start_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token8] = ACTIONS(183),
    [aux_sym__repository_start_token11] = ACTIONS(183),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token4] = ACTIONS(185),
    [aux_sym__repository_start_token7] = ACTIONS(185),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(177),
    [aux_sym_arg_token1] = ACTIONS(177),
    [aux_sym_cmd_token1] = ACTIONS(177),
    [aux_sym_copy_token1] = ACTIONS(177),
    [aux_sym_entrypoint_token1] = ACTIONS(177),
    [aux_sym_env_token1] = ACTIONS(177),
    [aux_sym_expose_token1] = ACTIONS(177),
    [aux_sym_from_token1] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(177),
    [aux_sym_label_token1] = ACTIONS(177),
    [aux_sym_maintainer_token1] = ACTIONS(177),
    [aux_sym_onbuild_token1] = ACTIONS(177),
    [aux_sym_run_token1] = ACTIONS(177),
    [aux_sym_shell_token1] = ACTIONS(177),
    [aux_sym_stopsignal_token1] = ACTIONS(177),
    [aux_sym_user_token1] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(177),
    [aux_sym_workdir_token1] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [aux_sym__repository_start_token3] = ACTIONS(181),
    [aux_sym__repository_start_token8] = ACTIONS(183),
    [aux_sym__repository_start_token11] = ACTIONS(183),
    [aux_sym__repository_start_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(177),
    [aux_sym_arg_token1] = ACTIONS(177),
    [aux_sym_cmd_token1] = ACTIONS(177),
    [aux_sym_copy_token1] = ACTIONS(177),
    [aux_sym_entrypoint_token1] = ACTIONS(177),
    [aux_sym_env_token1] = ACTIONS(177),
    [aux_sym_expose_token1] = ACTIONS(177),
    [aux_sym_from_token1] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(177),
    [aux_sym_label_token1] = ACTIONS(177),
    [aux_sym_maintainer_token1] = ACTIONS(177),
    [aux_sym_onbuild_token1] = ACTIONS(177),
    [aux_sym_run_token1] = ACTIONS(177),
    [aux_sym_shell_token1] = ACTIONS(177),
    [aux_sym_stopsignal_token1] = ACTIONS(177),
    [aux_sym_user_token1] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(177),
    [aux_sym_workdir_token1] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [aux_sym__repository_start_token3] = ACTIONS(181),
    [aux_sym__repository_start_token4] = ACTIONS(185),
    [aux_sym__repository_start_token7] = ACTIONS(185),
    [aux_sym__repository_start_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [19] = {
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
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token4] = ACTIONS(187),
    [aux_sym__repository_start_token7] = ACTIONS(187),
    [aux_sym__repository_start_token16] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [20] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(191),
    [aux_sym__repository_start_token15] = ACTIONS(191),
    [aux_sym__repository_start_token16] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [21] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [aux_sym__repository_start_token16] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [22] = {
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
  [23] = {
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
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token16] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [24] = {
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
  [25] = {
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
    [anon_sym_DOLLAR] = ACTIONS(137),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token16] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [sym_port_protocol] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [aux_sym_healthcheck_token1] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_onbuild_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [aux_sym__port_part_token1] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [27] = {
    [aux_sym__repository_start_repeat3] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_add_token1] = ACTIONS(153),
    [aux_sym_arg_token1] = ACTIONS(153),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_copy_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_env_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [aux_sym_from_token1] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(151),
    [aux_sym_healthcheck_token1] = ACTIONS(153),
    [aux_sym_label_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_onbuild_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_shell_token1] = ACTIONS(153),
    [aux_sym_stopsignal_token1] = ACTIONS(153),
    [aux_sym_user_token1] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token8] = ACTIONS(215),
    [aux_sym__repository_start_token11] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [aux_sym__repository_start_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_add_token1] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(146),
    [aux_sym_cmd_token1] = ACTIONS(146),
    [aux_sym_copy_token1] = ACTIONS(146),
    [aux_sym_entrypoint_token1] = ACTIONS(146),
    [aux_sym_env_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [aux_sym_healthcheck_token1] = ACTIONS(146),
    [aux_sym_label_token1] = ACTIONS(146),
    [aux_sym_maintainer_token1] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(146),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_shell_token1] = ACTIONS(146),
    [aux_sym_stopsignal_token1] = ACTIONS(146),
    [aux_sym_user_token1] = ACTIONS(146),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token4] = ACTIONS(218),
    [aux_sym__repository_start_token7] = ACTIONS(218),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym__repository_start_repeat1] = STATE(33),
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
    [anon_sym_DOLLAR] = ACTIONS(221),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token2] = ACTIONS(221),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat4] = STATE(38),
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
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(177),
    [aux_sym_arg_token1] = ACTIONS(177),
    [aux_sym_cmd_token1] = ACTIONS(177),
    [aux_sym_copy_token1] = ACTIONS(177),
    [aux_sym_entrypoint_token1] = ACTIONS(177),
    [aux_sym_env_token1] = ACTIONS(177),
    [aux_sym_expose_token1] = ACTIONS(177),
    [aux_sym_from_token1] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(177),
    [aux_sym_label_token1] = ACTIONS(177),
    [aux_sym_maintainer_token1] = ACTIONS(177),
    [aux_sym_onbuild_token1] = ACTIONS(177),
    [aux_sym_run_token1] = ACTIONS(177),
    [aux_sym_shell_token1] = ACTIONS(177),
    [aux_sym_stopsignal_token1] = ACTIONS(177),
    [aux_sym_user_token1] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(177),
    [aux_sym_workdir_token1] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token4] = ACTIONS(229),
    [aux_sym__repository_start_token7] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat4] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
    [aux_sym_healthcheck_token1] = ACTIONS(160),
    [aux_sym_label_token1] = ACTIONS(160),
    [aux_sym_maintainer_token1] = ACTIONS(160),
    [aux_sym_onbuild_token1] = ACTIONS(160),
    [aux_sym_run_token1] = ACTIONS(160),
    [aux_sym_shell_token1] = ACTIONS(160),
    [aux_sym_stopsignal_token1] = ACTIONS(160),
    [aux_sym_user_token1] = ACTIONS(160),
    [aux_sym_volume_token1] = ACTIONS(160),
    [aux_sym_workdir_token1] = ACTIONS(160),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(231),
    [aux_sym__repository_start_token15] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(158),
    [sym__space_no_newline] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat1] = STATE(33),
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
    [anon_sym_DOLLAR] = ACTIONS(234),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token2] = ACTIONS(234),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_add_token1] = ACTIONS(167),
    [aux_sym_arg_token1] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_copy_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_env_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [aux_sym_healthcheck_token1] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_onbuild_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym__repository_start_token2] = ACTIONS(221),
    [aux_sym__repository_start_token3] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat3] = STATE(36),
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
    [aux_sym__repository_start_token8] = ACTIONS(239),
    [aux_sym__repository_start_token11] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat3] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(177),
    [aux_sym_arg_token1] = ACTIONS(177),
    [aux_sym_cmd_token1] = ACTIONS(177),
    [aux_sym_copy_token1] = ACTIONS(177),
    [aux_sym_entrypoint_token1] = ACTIONS(177),
    [aux_sym_env_token1] = ACTIONS(177),
    [aux_sym_expose_token1] = ACTIONS(177),
    [aux_sym_from_token1] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(177),
    [aux_sym_label_token1] = ACTIONS(177),
    [aux_sym_maintainer_token1] = ACTIONS(177),
    [aux_sym_onbuild_token1] = ACTIONS(177),
    [aux_sym_run_token1] = ACTIONS(177),
    [aux_sym_shell_token1] = ACTIONS(177),
    [aux_sym_stopsignal_token1] = ACTIONS(177),
    [aux_sym_user_token1] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(177),
    [aux_sym_workdir_token1] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token8] = ACTIONS(239),
    [aux_sym__repository_start_token11] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [sym_port_protocol] = STATE(73),
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
    [anon_sym_SLASH] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym__repository_start_repeat4] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(177),
    [aux_sym_arg_token1] = ACTIONS(177),
    [aux_sym_cmd_token1] = ACTIONS(177),
    [aux_sym_copy_token1] = ACTIONS(177),
    [aux_sym_entrypoint_token1] = ACTIONS(177),
    [aux_sym_env_token1] = ACTIONS(177),
    [aux_sym_expose_token1] = ACTIONS(177),
    [aux_sym_from_token1] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_healthcheck_token1] = ACTIONS(177),
    [aux_sym_label_token1] = ACTIONS(177),
    [aux_sym_maintainer_token1] = ACTIONS(177),
    [aux_sym_onbuild_token1] = ACTIONS(177),
    [aux_sym_run_token1] = ACTIONS(177),
    [aux_sym_shell_token1] = ACTIONS(177),
    [aux_sym_stopsignal_token1] = ACTIONS(177),
    [aux_sym_user_token1] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(177),
    [aux_sym_workdir_token1] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token12] = ACTIONS(225),
    [aux_sym__repository_start_token15] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat2] = STATE(31),
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
    [aux_sym__repository_start_token4] = ACTIONS(229),
    [aux_sym__repository_start_token7] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [aux_sym__repository_start_repeat4] = STATE(51),
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
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [aux_sym__repository_start_token12] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [41] = {
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
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token4] = ACTIONS(187),
    [aux_sym__repository_start_token7] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
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
  [43] = {
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
  [44] = {
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
    [anon_sym_DOLLAR] = ACTIONS(137),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token2] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_add_token1] = ACTIONS(203),
    [aux_sym_arg_token1] = ACTIONS(203),
    [aux_sym_cmd_token1] = ACTIONS(203),
    [aux_sym_copy_token1] = ACTIONS(203),
    [aux_sym_entrypoint_token1] = ACTIONS(203),
    [aux_sym_env_token1] = ACTIONS(203),
    [aux_sym_expose_token1] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [aux_sym_from_token1] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [aux_sym_healthcheck_token1] = ACTIONS(203),
    [aux_sym_label_token1] = ACTIONS(203),
    [aux_sym_maintainer_token1] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(203),
    [aux_sym_run_token1] = ACTIONS(203),
    [aux_sym_shell_token1] = ACTIONS(203),
    [aux_sym_stopsignal_token1] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(203),
    [aux_sym_workdir_token1] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [aux_sym__port_part_token1] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
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
  [47] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [aux_sym__repository_start_token4] = ACTIONS(185),
    [aux_sym__repository_start_token7] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [48] = {
    [aux_sym__repository_start_repeat1] = STATE(53),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
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
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
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
    [aux_sym__repository_start_token8] = ACTIONS(183),
    [aux_sym__repository_start_token11] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym__repository_start_token12] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [52] = {
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
  [53] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
    [aux_sym__repository_start_repeat2] = STATE(47),
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
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [aux_sym__repository_start_token4] = ACTIONS(185),
    [aux_sym__repository_start_token7] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
    [aux_sym__repository_start_repeat3] = STATE(50),
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
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [aux_sym__repository_start_token8] = ACTIONS(183),
    [aux_sym__repository_start_token11] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [56] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(191),
    [aux_sym__repository_start_token15] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
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
    [aux_sym__repository_start_repeat1] = STATE(64),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(175),
    [aux_sym_arg_token1] = ACTIONS(175),
    [aux_sym_cmd_token1] = ACTIONS(175),
    [aux_sym_copy_token1] = ACTIONS(175),
    [aux_sym_entrypoint_token1] = ACTIONS(175),
    [aux_sym_env_token1] = ACTIONS(175),
    [aux_sym_expose_token1] = ACTIONS(175),
    [aux_sym_from_token1] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
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
    [anon_sym_SLASH] = ACTIONS(179),
    [aux_sym__repository_start_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [aux_sym__repository_start_repeat3] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [aux_sym_from_token1] = ACTIONS(271),
    [aux_sym_healthcheck_token1] = ACTIONS(271),
    [aux_sym_label_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_onbuild_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_user_token1] = ACTIONS(271),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [aux_sym__repository_start_token3] = ACTIONS(273),
    [aux_sym__repository_start_token8] = ACTIONS(183),
    [aux_sym__repository_start_token11] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
    [aux_sym_healthcheck_token1] = ACTIONS(275),
    [aux_sym_label_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_onbuild_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [aux_sym__port_part_token1] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
    [aux_sym__repository_start_repeat2] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [aux_sym_from_token1] = ACTIONS(271),
    [aux_sym_healthcheck_token1] = ACTIONS(271),
    [aux_sym_label_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_onbuild_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_user_token1] = ACTIONS(271),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [aux_sym__repository_start_token3] = ACTIONS(273),
    [aux_sym__repository_start_token4] = ACTIONS(185),
    [aux_sym__repository_start_token7] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [64] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [aux_sym_from_token1] = ACTIONS(271),
    [aux_sym_healthcheck_token1] = ACTIONS(271),
    [aux_sym_label_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_onbuild_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_user_token1] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat4] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [aux_sym_from_token1] = ACTIONS(271),
    [aux_sym_healthcheck_token1] = ACTIONS(271),
    [aux_sym_label_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_onbuild_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_user_token1] = ACTIONS(271),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [aux_sym__repository_start_token3] = ACTIONS(273),
    [aux_sym__repository_start_token12] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(283),
    [aux_sym__repository_start_token16] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
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
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(287),
    [aux_sym_label_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_onbuild_token1] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_shell_token1] = ACTIONS(287),
    [aux_sym_stopsignal_token1] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(287),
    [aux_sym_volume_token1] = ACTIONS(287),
    [aux_sym_workdir_token1] = ACTIONS(287),
    [aux_sym__repository_start_token3] = ACTIONS(289),
    [aux_sym__repository_start_token12] = ACTIONS(173),
    [aux_sym__repository_start_token15] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(291),
    [aux_sym_arg_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_copy_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_env_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(291),
    [aux_sym_label_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_onbuild_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_shell_token1] = ACTIONS(291),
    [aux_sym_stopsignal_token1] = ACTIONS(291),
    [aux_sym_user_token1] = ACTIONS(291),
    [aux_sym_volume_token1] = ACTIONS(291),
    [aux_sym_workdir_token1] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(295),
    [aux_sym__repository_start_token16] = ACTIONS(295),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [aux_sym__repository_start_repeat3] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(287),
    [aux_sym_label_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_onbuild_token1] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_shell_token1] = ACTIONS(287),
    [aux_sym_stopsignal_token1] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(287),
    [aux_sym_volume_token1] = ACTIONS(287),
    [aux_sym_workdir_token1] = ACTIONS(287),
    [aux_sym__repository_start_token3] = ACTIONS(289),
    [aux_sym__repository_start_token8] = ACTIONS(183),
    [aux_sym__repository_start_token11] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(287),
    [aux_sym_label_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_onbuild_token1] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_shell_token1] = ACTIONS(287),
    [aux_sym_stopsignal_token1] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(287),
    [aux_sym_volume_token1] = ACTIONS(287),
    [aux_sym_workdir_token1] = ACTIONS(287),
    [aux_sym__repository_start_token3] = ACTIONS(289),
    [aux_sym__repository_start_token4] = ACTIONS(185),
    [aux_sym__repository_start_token7] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
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
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [aux_sym_healthcheck_token1] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_onbuild_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [aux_sym__port_part_token1] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
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
    [aux_sym_workdir_repeat1] = STATE(93),
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
    [anon_sym_DOLLAR] = ACTIONS(305),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_workdir_token4] = ACTIONS(307),
    [aux_sym_workdir_token5] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [aux_sym_workdir_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(313),
    [aux_sym_arg_token1] = ACTIONS(313),
    [aux_sym_cmd_token1] = ACTIONS(313),
    [aux_sym_copy_token1] = ACTIONS(313),
    [aux_sym_entrypoint_token1] = ACTIONS(313),
    [aux_sym_env_token1] = ACTIONS(313),
    [aux_sym_expose_token1] = ACTIONS(313),
    [aux_sym_from_token1] = ACTIONS(313),
    [aux_sym_healthcheck_token1] = ACTIONS(313),
    [aux_sym_label_token1] = ACTIONS(313),
    [aux_sym_maintainer_token1] = ACTIONS(313),
    [aux_sym_onbuild_token1] = ACTIONS(313),
    [aux_sym_run_token1] = ACTIONS(313),
    [aux_sym_shell_token1] = ACTIONS(313),
    [aux_sym_stopsignal_token1] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_workdir_token4] = ACTIONS(307),
    [aux_sym_workdir_token5] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(317),
    [aux_sym_arg_token1] = ACTIONS(317),
    [aux_sym_cmd_token1] = ACTIONS(317),
    [aux_sym_copy_token1] = ACTIONS(317),
    [aux_sym_entrypoint_token1] = ACTIONS(317),
    [aux_sym_env_token1] = ACTIONS(317),
    [aux_sym_expose_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_from_token1] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [aux_sym_healthcheck_token1] = ACTIONS(317),
    [aux_sym_label_token1] = ACTIONS(317),
    [aux_sym_maintainer_token1] = ACTIONS(317),
    [aux_sym_onbuild_token1] = ACTIONS(317),
    [aux_sym_run_token1] = ACTIONS(317),
    [aux_sym_shell_token1] = ACTIONS(317),
    [aux_sym_stopsignal_token1] = ACTIONS(317),
    [aux_sym_user_token1] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym_volume_token1] = ACTIONS(317),
    [aux_sym_workdir_token1] = ACTIONS(317),
    [aux_sym__port_part_token1] = ACTIONS(317),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [78] = {
    [aux_sym__repository_start_repeat4] = STATE(88),
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
  [79] = {
    [aux_sym__repository_start_repeat3] = STATE(87),
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
  [80] = {
    [aux_sym__repository_start_repeat2] = STATE(86),
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
    [aux_sym__repository_start_token4] = ACTIONS(329),
    [aux_sym__repository_start_token7] = ACTIONS(329),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [81] = {
    [aux_sym__labels] = STATE(90),
    [sym_label_pair] = STATE(90),
    [sym_label_key] = STATE(414),
    [ts_builtin_sym_end] = ACTIONS(331),
    [aux_sym_add_token1] = ACTIONS(333),
    [aux_sym_arg_token1] = ACTIONS(333),
    [aux_sym_cmd_token1] = ACTIONS(333),
    [aux_sym_copy_token1] = ACTIONS(333),
    [aux_sym_entrypoint_token1] = ACTIONS(333),
    [aux_sym_env_token1] = ACTIONS(333),
    [aux_sym_expose_token1] = ACTIONS(333),
    [aux_sym_from_token1] = ACTIONS(333),
    [aux_sym_healthcheck_token1] = ACTIONS(333),
    [aux_sym_label_token1] = ACTIONS(333),
    [aux_sym_maintainer_token1] = ACTIONS(333),
    [aux_sym_onbuild_token1] = ACTIONS(333),
    [aux_sym_run_token1] = ACTIONS(333),
    [aux_sym_shell_token1] = ACTIONS(333),
    [aux_sym_stopsignal_token1] = ACTIONS(333),
    [aux_sym_user_token1] = ACTIONS(333),
    [aux_sym_volume_token1] = ACTIONS(333),
    [aux_sym_workdir_token1] = ACTIONS(333),
    [aux_sym_env_key_token1] = ACTIONS(335),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
    [aux_sym__repository_start_repeat1] = STATE(83),
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
    [anon_sym_DOLLAR] = ACTIONS(337),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym__repository_start_token2] = ACTIONS(337),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [aux_sym__repository_start_repeat1] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_add_token1] = ACTIONS(139),
    [aux_sym_arg_token1] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(139),
    [aux_sym_copy_token1] = ACTIONS(139),
    [aux_sym_entrypoint_token1] = ACTIONS(139),
    [aux_sym_env_token1] = ACTIONS(139),
    [aux_sym_expose_token1] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(139),
    [aux_sym_healthcheck_token1] = ACTIONS(139),
    [aux_sym_label_token1] = ACTIONS(139),
    [aux_sym_maintainer_token1] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(139),
    [aux_sym_run_token1] = ACTIONS(139),
    [aux_sym_shell_token1] = ACTIONS(139),
    [aux_sym_stopsignal_token1] = ACTIONS(139),
    [aux_sym_user_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token2] = ACTIONS(339),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [84] = {
    [aux_sym__repository_start_repeat2] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_add_token1] = ACTIONS(146),
    [aux_sym_arg_token1] = ACTIONS(146),
    [aux_sym_cmd_token1] = ACTIONS(146),
    [aux_sym_copy_token1] = ACTIONS(146),
    [aux_sym_entrypoint_token1] = ACTIONS(146),
    [aux_sym_env_token1] = ACTIONS(146),
    [aux_sym_expose_token1] = ACTIONS(146),
    [aux_sym_from_token1] = ACTIONS(146),
    [aux_sym_healthcheck_token1] = ACTIONS(146),
    [aux_sym_label_token1] = ACTIONS(146),
    [aux_sym_maintainer_token1] = ACTIONS(146),
    [aux_sym_onbuild_token1] = ACTIONS(146),
    [aux_sym_run_token1] = ACTIONS(146),
    [aux_sym_shell_token1] = ACTIONS(146),
    [aux_sym_stopsignal_token1] = ACTIONS(146),
    [aux_sym_user_token1] = ACTIONS(146),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token4] = ACTIONS(342),
    [aux_sym__repository_start_token7] = ACTIONS(342),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__env_pairs] = STATE(89),
    [sym_env_pair] = STATE(89),
    [sym_env_key] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_add_token1] = ACTIONS(347),
    [aux_sym_arg_token1] = ACTIONS(347),
    [aux_sym_cmd_token1] = ACTIONS(347),
    [aux_sym_copy_token1] = ACTIONS(347),
    [aux_sym_entrypoint_token1] = ACTIONS(347),
    [aux_sym_env_token1] = ACTIONS(347),
    [aux_sym_expose_token1] = ACTIONS(347),
    [aux_sym_from_token1] = ACTIONS(347),
    [aux_sym_healthcheck_token1] = ACTIONS(347),
    [aux_sym_label_token1] = ACTIONS(347),
    [aux_sym_maintainer_token1] = ACTIONS(347),
    [aux_sym_onbuild_token1] = ACTIONS(347),
    [aux_sym_run_token1] = ACTIONS(347),
    [aux_sym_shell_token1] = ACTIONS(347),
    [aux_sym_stopsignal_token1] = ACTIONS(347),
    [aux_sym_user_token1] = ACTIONS(347),
    [aux_sym_volume_token1] = ACTIONS(347),
    [aux_sym_workdir_token1] = ACTIONS(347),
    [aux_sym_env_key_token1] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
    [aux_sym__repository_start_repeat2] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(353),
    [aux_sym_arg_token1] = ACTIONS(353),
    [aux_sym_cmd_token1] = ACTIONS(353),
    [aux_sym_copy_token1] = ACTIONS(353),
    [aux_sym_entrypoint_token1] = ACTIONS(353),
    [aux_sym_env_token1] = ACTIONS(353),
    [aux_sym_expose_token1] = ACTIONS(353),
    [aux_sym_from_token1] = ACTIONS(353),
    [aux_sym_healthcheck_token1] = ACTIONS(353),
    [aux_sym_label_token1] = ACTIONS(353),
    [aux_sym_maintainer_token1] = ACTIONS(353),
    [aux_sym_onbuild_token1] = ACTIONS(353),
    [aux_sym_run_token1] = ACTIONS(353),
    [aux_sym_shell_token1] = ACTIONS(353),
    [aux_sym_stopsignal_token1] = ACTIONS(353),
    [aux_sym_user_token1] = ACTIONS(353),
    [aux_sym_volume_token1] = ACTIONS(353),
    [aux_sym_workdir_token1] = ACTIONS(353),
    [aux_sym__repository_start_token3] = ACTIONS(355),
    [aux_sym__repository_start_token4] = ACTIONS(329),
    [aux_sym__repository_start_token7] = ACTIONS(329),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__repository_start_repeat3] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(353),
    [aux_sym_arg_token1] = ACTIONS(353),
    [aux_sym_cmd_token1] = ACTIONS(353),
    [aux_sym_copy_token1] = ACTIONS(353),
    [aux_sym_entrypoint_token1] = ACTIONS(353),
    [aux_sym_env_token1] = ACTIONS(353),
    [aux_sym_expose_token1] = ACTIONS(353),
    [aux_sym_from_token1] = ACTIONS(353),
    [aux_sym_healthcheck_token1] = ACTIONS(353),
    [aux_sym_label_token1] = ACTIONS(353),
    [aux_sym_maintainer_token1] = ACTIONS(353),
    [aux_sym_onbuild_token1] = ACTIONS(353),
    [aux_sym_run_token1] = ACTIONS(353),
    [aux_sym_shell_token1] = ACTIONS(353),
    [aux_sym_stopsignal_token1] = ACTIONS(353),
    [aux_sym_user_token1] = ACTIONS(353),
    [aux_sym_volume_token1] = ACTIONS(353),
    [aux_sym_workdir_token1] = ACTIONS(353),
    [aux_sym__repository_start_token3] = ACTIONS(355),
    [aux_sym__repository_start_token8] = ACTIONS(327),
    [aux_sym__repository_start_token11] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [88] = {
    [aux_sym__repository_start_repeat4] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(353),
    [aux_sym_arg_token1] = ACTIONS(353),
    [aux_sym_cmd_token1] = ACTIONS(353),
    [aux_sym_copy_token1] = ACTIONS(353),
    [aux_sym_entrypoint_token1] = ACTIONS(353),
    [aux_sym_env_token1] = ACTIONS(353),
    [aux_sym_expose_token1] = ACTIONS(353),
    [aux_sym_from_token1] = ACTIONS(353),
    [aux_sym_healthcheck_token1] = ACTIONS(353),
    [aux_sym_label_token1] = ACTIONS(353),
    [aux_sym_maintainer_token1] = ACTIONS(353),
    [aux_sym_onbuild_token1] = ACTIONS(353),
    [aux_sym_run_token1] = ACTIONS(353),
    [aux_sym_shell_token1] = ACTIONS(353),
    [aux_sym_stopsignal_token1] = ACTIONS(353),
    [aux_sym_user_token1] = ACTIONS(353),
    [aux_sym_volume_token1] = ACTIONS(353),
    [aux_sym_workdir_token1] = ACTIONS(353),
    [aux_sym__repository_start_token3] = ACTIONS(355),
    [aux_sym__repository_start_token12] = ACTIONS(325),
    [aux_sym__repository_start_token15] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [89] = {
    [aux_sym__env_pairs] = STATE(89),
    [sym_env_pair] = STATE(89),
    [sym_env_key] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_add_token1] = ACTIONS(359),
    [aux_sym_arg_token1] = ACTIONS(359),
    [aux_sym_cmd_token1] = ACTIONS(359),
    [aux_sym_copy_token1] = ACTIONS(359),
    [aux_sym_entrypoint_token1] = ACTIONS(359),
    [aux_sym_env_token1] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [aux_sym_from_token1] = ACTIONS(359),
    [aux_sym_healthcheck_token1] = ACTIONS(359),
    [aux_sym_label_token1] = ACTIONS(359),
    [aux_sym_maintainer_token1] = ACTIONS(359),
    [aux_sym_onbuild_token1] = ACTIONS(359),
    [aux_sym_run_token1] = ACTIONS(359),
    [aux_sym_shell_token1] = ACTIONS(359),
    [aux_sym_stopsignal_token1] = ACTIONS(359),
    [aux_sym_user_token1] = ACTIONS(359),
    [aux_sym_volume_token1] = ACTIONS(359),
    [aux_sym_workdir_token1] = ACTIONS(359),
    [aux_sym_env_key_token1] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [aux_sym__labels] = STATE(90),
    [sym_label_pair] = STATE(90),
    [sym_label_key] = STATE(414),
    [ts_builtin_sym_end] = ACTIONS(364),
    [aux_sym_add_token1] = ACTIONS(366),
    [aux_sym_arg_token1] = ACTIONS(366),
    [aux_sym_cmd_token1] = ACTIONS(366),
    [aux_sym_copy_token1] = ACTIONS(366),
    [aux_sym_entrypoint_token1] = ACTIONS(366),
    [aux_sym_env_token1] = ACTIONS(366),
    [aux_sym_expose_token1] = ACTIONS(366),
    [aux_sym_from_token1] = ACTIONS(366),
    [aux_sym_healthcheck_token1] = ACTIONS(366),
    [aux_sym_label_token1] = ACTIONS(366),
    [aux_sym_maintainer_token1] = ACTIONS(366),
    [aux_sym_onbuild_token1] = ACTIONS(366),
    [aux_sym_run_token1] = ACTIONS(366),
    [aux_sym_shell_token1] = ACTIONS(366),
    [aux_sym_stopsignal_token1] = ACTIONS(366),
    [aux_sym_user_token1] = ACTIONS(366),
    [aux_sym_volume_token1] = ACTIONS(366),
    [aux_sym_workdir_token1] = ACTIONS(366),
    [aux_sym_env_key_token1] = ACTIONS(368),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(364),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(371),
    [aux_sym_arg_token1] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_copy_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_env_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [aux_sym_healthcheck_token1] = ACTIONS(371),
    [aux_sym_label_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_onbuild_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym__port_part_token1] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
    [aux_sym__repository_start_repeat3] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_add_token1] = ACTIONS(153),
    [aux_sym_arg_token1] = ACTIONS(153),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_copy_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_env_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [aux_sym_from_token1] = ACTIONS(153),
    [aux_sym_healthcheck_token1] = ACTIONS(153),
    [aux_sym_label_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_onbuild_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_shell_token1] = ACTIONS(153),
    [aux_sym_stopsignal_token1] = ACTIONS(153),
    [aux_sym_user_token1] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token8] = ACTIONS(373),
    [aux_sym__repository_start_token11] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
    [aux_sym_workdir_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(376),
    [aux_sym_add_token1] = ACTIONS(378),
    [aux_sym_arg_token1] = ACTIONS(378),
    [aux_sym_cmd_token1] = ACTIONS(378),
    [aux_sym_copy_token1] = ACTIONS(378),
    [aux_sym_entrypoint_token1] = ACTIONS(378),
    [aux_sym_env_token1] = ACTIONS(378),
    [aux_sym_expose_token1] = ACTIONS(378),
    [aux_sym_from_token1] = ACTIONS(378),
    [aux_sym_healthcheck_token1] = ACTIONS(378),
    [aux_sym_label_token1] = ACTIONS(378),
    [aux_sym_maintainer_token1] = ACTIONS(378),
    [aux_sym_onbuild_token1] = ACTIONS(378),
    [aux_sym_run_token1] = ACTIONS(378),
    [aux_sym_shell_token1] = ACTIONS(378),
    [aux_sym_stopsignal_token1] = ACTIONS(378),
    [aux_sym_user_token1] = ACTIONS(378),
    [anon_sym_DOLLAR] = ACTIONS(380),
    [aux_sym_volume_token1] = ACTIONS(378),
    [aux_sym_workdir_token1] = ACTIONS(378),
    [aux_sym_workdir_token4] = ACTIONS(383),
    [aux_sym_workdir_token5] = ACTIONS(378),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [aux_sym__repository_start_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(386),
    [aux_sym_add_token1] = ACTIONS(388),
    [aux_sym_arg_token1] = ACTIONS(388),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_copy_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_env_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [aux_sym_healthcheck_token1] = ACTIONS(388),
    [aux_sym_label_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_onbuild_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(337),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [aux_sym__repository_start_token2] = ACTIONS(337),
    [aux_sym__repository_start_token3] = ACTIONS(390),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [aux_sym__repository_start_repeat4] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(160),
    [aux_sym_label_token1] = ACTIONS(160),
    [aux_sym_maintainer_token1] = ACTIONS(160),
    [aux_sym_onbuild_token1] = ACTIONS(160),
    [aux_sym_run_token1] = ACTIONS(160),
    [aux_sym_shell_token1] = ACTIONS(160),
    [aux_sym_stopsignal_token1] = ACTIONS(160),
    [aux_sym_user_token1] = ACTIONS(160),
    [aux_sym_volume_token1] = ACTIONS(160),
    [aux_sym_workdir_token1] = ACTIONS(160),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(392),
    [aux_sym__repository_start_token15] = ACTIONS(392),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [aux_sym_add_token1] = ACTIONS(395),
    [aux_sym_arg_token1] = ACTIONS(395),
    [aux_sym_cmd_token1] = ACTIONS(395),
    [aux_sym_copy_token1] = ACTIONS(395),
    [aux_sym_entrypoint_token1] = ACTIONS(395),
    [aux_sym_env_token1] = ACTIONS(395),
    [aux_sym_expose_token1] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [aux_sym_from_token1] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(397),
    [aux_sym_healthcheck_token1] = ACTIONS(395),
    [aux_sym_label_token1] = ACTIONS(395),
    [aux_sym_maintainer_token1] = ACTIONS(395),
    [aux_sym_onbuild_token1] = ACTIONS(395),
    [aux_sym_run_token1] = ACTIONS(395),
    [aux_sym_shell_token1] = ACTIONS(395),
    [aux_sym_stopsignal_token1] = ACTIONS(395),
    [aux_sym_user_token1] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [aux_sym_volume_token1] = ACTIONS(395),
    [aux_sym_workdir_token1] = ACTIONS(395),
    [aux_sym__port_part_token1] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [aux_sym_add_token1] = ACTIONS(401),
    [aux_sym_arg_token1] = ACTIONS(401),
    [anon_sym_EQ] = ACTIONS(399),
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
    [aux_sym_env_key_token1] = ACTIONS(399),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym__space_no_newline] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym_add_token1] = ACTIONS(403),
    [aux_sym_arg_token1] = ACTIONS(403),
    [aux_sym_cmd_token1] = ACTIONS(403),
    [aux_sym_copy_token1] = ACTIONS(403),
    [aux_sym_entrypoint_token1] = ACTIONS(403),
    [aux_sym_env_token1] = ACTIONS(403),
    [aux_sym_expose_token1] = ACTIONS(403),
    [aux_sym_from_token1] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(407),
    [aux_sym_healthcheck_token1] = ACTIONS(403),
    [aux_sym_label_token1] = ACTIONS(403),
    [aux_sym_maintainer_token1] = ACTIONS(403),
    [aux_sym_onbuild_token1] = ACTIONS(403),
    [aux_sym_run_token1] = ACTIONS(403),
    [aux_sym_shell_token1] = ACTIONS(403),
    [aux_sym_stopsignal_token1] = ACTIONS(403),
    [aux_sym_user_token1] = ACTIONS(403),
    [aux_sym_volume_token1] = ACTIONS(403),
    [aux_sym_workdir_token1] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(403),
    [sym__space_no_newline] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
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
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token4] = ACTIONS(187),
    [aux_sym__repository_start_token7] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [aux_sym_add_token1] = ACTIONS(411),
    [aux_sym_arg_token1] = ACTIONS(411),
    [aux_sym_cmd_token1] = ACTIONS(411),
    [aux_sym_copy_token1] = ACTIONS(411),
    [aux_sym_entrypoint_token1] = ACTIONS(411),
    [aux_sym_env_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(415),
    [aux_sym_healthcheck_token1] = ACTIONS(411),
    [aux_sym_label_token1] = ACTIONS(411),
    [aux_sym_maintainer_token1] = ACTIONS(411),
    [aux_sym_onbuild_token1] = ACTIONS(411),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_shell_token1] = ACTIONS(411),
    [aux_sym_stopsignal_token1] = ACTIONS(411),
    [aux_sym_user_token1] = ACTIONS(411),
    [aux_sym_volume_token1] = ACTIONS(411),
    [aux_sym_workdir_token1] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(411),
    [sym__space_no_newline] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(419),
    [aux_sym_add_token1] = ACTIONS(421),
    [aux_sym_arg_token1] = ACTIONS(421),
    [aux_sym_cmd_token1] = ACTIONS(421),
    [aux_sym_copy_token1] = ACTIONS(421),
    [aux_sym_entrypoint_token1] = ACTIONS(421),
    [aux_sym_env_token1] = ACTIONS(421),
    [aux_sym_expose_token1] = ACTIONS(421),
    [aux_sym_from_token1] = ACTIONS(421),
    [aux_sym_healthcheck_token1] = ACTIONS(421),
    [aux_sym_label_token1] = ACTIONS(421),
    [aux_sym_maintainer_token1] = ACTIONS(421),
    [aux_sym_onbuild_token1] = ACTIONS(421),
    [aux_sym_run_token1] = ACTIONS(421),
    [aux_sym_shell_token1] = ACTIONS(421),
    [aux_sym_stopsignal_token1] = ACTIONS(421),
    [aux_sym_user_token1] = ACTIONS(421),
    [aux_sym_volume_token1] = ACTIONS(421),
    [aux_sym_workdir_token1] = ACTIONS(421),
    [aux_sym_env_key_token1] = ACTIONS(421),
    [aux_sym__anything_token1] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [aux_sym_add_token1] = ACTIONS(425),
    [aux_sym_arg_token1] = ACTIONS(425),
    [aux_sym_cmd_token1] = ACTIONS(425),
    [aux_sym_copy_token1] = ACTIONS(425),
    [aux_sym_entrypoint_token1] = ACTIONS(425),
    [aux_sym_env_token1] = ACTIONS(425),
    [aux_sym_expose_token1] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [aux_sym_from_token1] = ACTIONS(425),
    [aux_sym_healthcheck_token1] = ACTIONS(425),
    [aux_sym_label_token1] = ACTIONS(425),
    [aux_sym_maintainer_token1] = ACTIONS(425),
    [aux_sym_onbuild_token1] = ACTIONS(425),
    [aux_sym_run_token1] = ACTIONS(425),
    [aux_sym_shell_token1] = ACTIONS(425),
    [aux_sym_stopsignal_token1] = ACTIONS(425),
    [aux_sym_user_token1] = ACTIONS(425),
    [anon_sym_DOLLAR] = ACTIONS(425),
    [aux_sym_volume_token1] = ACTIONS(425),
    [aux_sym_workdir_token1] = ACTIONS(425),
    [aux_sym__port_part_token1] = ACTIONS(425),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(429),
    [aux_sym_arg_token1] = ACTIONS(429),
    [anon_sym_EQ] = ACTIONS(431),
    [aux_sym_cmd_token1] = ACTIONS(429),
    [aux_sym_copy_token1] = ACTIONS(429),
    [aux_sym_entrypoint_token1] = ACTIONS(429),
    [aux_sym_env_token1] = ACTIONS(429),
    [aux_sym_expose_token1] = ACTIONS(429),
    [aux_sym_from_token1] = ACTIONS(429),
    [aux_sym_healthcheck_token1] = ACTIONS(429),
    [aux_sym_label_token1] = ACTIONS(429),
    [aux_sym_maintainer_token1] = ACTIONS(429),
    [aux_sym_onbuild_token1] = ACTIONS(429),
    [aux_sym_run_token1] = ACTIONS(429),
    [aux_sym_shell_token1] = ACTIONS(429),
    [aux_sym_stopsignal_token1] = ACTIONS(429),
    [aux_sym_user_token1] = ACTIONS(429),
    [aux_sym_volume_token1] = ACTIONS(429),
    [aux_sym_workdir_token1] = ACTIONS(429),
    [aux_sym_env_key_token1] = ACTIONS(427),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(427),
    [sym__space_no_newline] = ACTIONS(433),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
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
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [aux_sym_add_token1] = ACTIONS(378),
    [aux_sym_arg_token1] = ACTIONS(378),
    [aux_sym_cmd_token1] = ACTIONS(378),
    [aux_sym_copy_token1] = ACTIONS(378),
    [aux_sym_entrypoint_token1] = ACTIONS(378),
    [aux_sym_env_token1] = ACTIONS(378),
    [aux_sym_expose_token1] = ACTIONS(378),
    [aux_sym_from_token1] = ACTIONS(378),
    [aux_sym_healthcheck_token1] = ACTIONS(378),
    [aux_sym_label_token1] = ACTIONS(378),
    [aux_sym_maintainer_token1] = ACTIONS(378),
    [aux_sym_onbuild_token1] = ACTIONS(378),
    [aux_sym_run_token1] = ACTIONS(378),
    [aux_sym_shell_token1] = ACTIONS(378),
    [aux_sym_stopsignal_token1] = ACTIONS(378),
    [aux_sym_user_token1] = ACTIONS(378),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [aux_sym_volume_token1] = ACTIONS(378),
    [aux_sym_workdir_token1] = ACTIONS(378),
    [aux_sym_workdir_token4] = ACTIONS(376),
    [aux_sym_workdir_token5] = ACTIONS(378),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
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
  [109] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(191),
    [aux_sym__repository_start_token15] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_add_token1] = ACTIONS(175),
    [aux_sym_arg_token1] = ACTIONS(175),
    [aux_sym_cmd_token1] = ACTIONS(175),
    [aux_sym_copy_token1] = ACTIONS(175),
    [aux_sym_entrypoint_token1] = ACTIONS(175),
    [aux_sym_env_token1] = ACTIONS(175),
    [aux_sym_expose_token1] = ACTIONS(175),
    [aux_sym_from_token1] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(175),
    [sym__space_no_newline] = ACTIONS(177),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
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
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_env_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(439),
    [aux_sym_healthcheck_token1] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_onbuild_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(435),
    [sym__space_no_newline] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
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
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_add_token1] = ACTIONS(139),
    [aux_sym_arg_token1] = ACTIONS(139),
    [aux_sym_cmd_token1] = ACTIONS(139),
    [aux_sym_copy_token1] = ACTIONS(139),
    [aux_sym_entrypoint_token1] = ACTIONS(139),
    [aux_sym_env_token1] = ACTIONS(139),
    [aux_sym_expose_token1] = ACTIONS(139),
    [aux_sym_from_token1] = ACTIONS(139),
    [aux_sym_healthcheck_token1] = ACTIONS(139),
    [aux_sym_label_token1] = ACTIONS(139),
    [aux_sym_maintainer_token1] = ACTIONS(139),
    [aux_sym_onbuild_token1] = ACTIONS(139),
    [aux_sym_run_token1] = ACTIONS(139),
    [aux_sym_shell_token1] = ACTIONS(139),
    [aux_sym_stopsignal_token1] = ACTIONS(139),
    [aux_sym_user_token1] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token2] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
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
  [116] = {
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
    [anon_sym_DOLLAR] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym_workdir_token4] = ACTIONS(203),
    [aux_sym_workdir_token5] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [117] = {
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
  [118] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_add_token1] = ACTIONS(445),
    [aux_sym_arg_token1] = ACTIONS(445),
    [aux_sym_cmd_token1] = ACTIONS(445),
    [aux_sym_copy_token1] = ACTIONS(445),
    [aux_sym_entrypoint_token1] = ACTIONS(445),
    [aux_sym_env_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [aux_sym_healthcheck_token1] = ACTIONS(445),
    [aux_sym_label_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_onbuild_token1] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_shell_token1] = ACTIONS(445),
    [aux_sym_stopsignal_token1] = ACTIONS(445),
    [aux_sym_user_token1] = ACTIONS(445),
    [aux_sym_volume_token1] = ACTIONS(445),
    [aux_sym_workdir_token1] = ACTIONS(445),
    [aux_sym_env_key_token1] = ACTIONS(445),
    [aux_sym__anything_token1] = ACTIONS(447),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [aux_sym_add_token1] = ACTIONS(450),
    [aux_sym_arg_token1] = ACTIONS(450),
    [aux_sym_cmd_token1] = ACTIONS(450),
    [aux_sym_copy_token1] = ACTIONS(450),
    [aux_sym_entrypoint_token1] = ACTIONS(450),
    [aux_sym_env_token1] = ACTIONS(450),
    [aux_sym_expose_token1] = ACTIONS(450),
    [aux_sym_from_token1] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(454),
    [aux_sym_healthcheck_token1] = ACTIONS(450),
    [aux_sym_label_token1] = ACTIONS(450),
    [aux_sym_maintainer_token1] = ACTIONS(450),
    [aux_sym_onbuild_token1] = ACTIONS(450),
    [aux_sym_run_token1] = ACTIONS(450),
    [aux_sym_shell_token1] = ACTIONS(450),
    [aux_sym_stopsignal_token1] = ACTIONS(450),
    [aux_sym_user_token1] = ACTIONS(450),
    [aux_sym_volume_token1] = ACTIONS(450),
    [aux_sym_workdir_token1] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(450),
    [sym__space_no_newline] = ACTIONS(456),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(291),
    [aux_sym_arg_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_copy_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_env_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(291),
    [aux_sym_label_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_onbuild_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_shell_token1] = ACTIONS(291),
    [aux_sym_stopsignal_token1] = ACTIONS(291),
    [aux_sym_user_token1] = ACTIONS(291),
    [aux_sym_volume_token1] = ACTIONS(291),
    [aux_sym_workdir_token1] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [aux_sym_add_token1] = ACTIONS(458),
    [aux_sym_arg_token1] = ACTIONS(458),
    [aux_sym_cmd_token1] = ACTIONS(458),
    [aux_sym_copy_token1] = ACTIONS(458),
    [aux_sym_entrypoint_token1] = ACTIONS(458),
    [aux_sym_env_token1] = ACTIONS(458),
    [aux_sym_expose_token1] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [aux_sym_from_token1] = ACTIONS(458),
    [aux_sym_healthcheck_token1] = ACTIONS(458),
    [aux_sym_label_token1] = ACTIONS(458),
    [aux_sym_maintainer_token1] = ACTIONS(458),
    [aux_sym_onbuild_token1] = ACTIONS(458),
    [aux_sym_run_token1] = ACTIONS(458),
    [aux_sym_shell_token1] = ACTIONS(458),
    [aux_sym_stopsignal_token1] = ACTIONS(458),
    [aux_sym_user_token1] = ACTIONS(458),
    [anon_sym_DOLLAR] = ACTIONS(458),
    [aux_sym_volume_token1] = ACTIONS(458),
    [aux_sym_workdir_token1] = ACTIONS(458),
    [aux_sym__port_part_token1] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(458),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_env_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(439),
    [aux_sym_healthcheck_token1] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_onbuild_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(435),
    [sym__space_no_newline] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [aux_sym_add_token1] = ACTIONS(460),
    [aux_sym_arg_token1] = ACTIONS(460),
    [aux_sym_cmd_token1] = ACTIONS(460),
    [aux_sym_copy_token1] = ACTIONS(460),
    [aux_sym_entrypoint_token1] = ACTIONS(460),
    [aux_sym_env_token1] = ACTIONS(460),
    [aux_sym_expose_token1] = ACTIONS(460),
    [aux_sym_from_token1] = ACTIONS(460),
    [anon_sym_AT] = ACTIONS(460),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(460),
    [sym__space_no_newline] = ACTIONS(462),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [aux_sym__anything] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_add_token1] = ACTIONS(445),
    [aux_sym_arg_token1] = ACTIONS(445),
    [aux_sym_cmd_token1] = ACTIONS(445),
    [aux_sym_copy_token1] = ACTIONS(445),
    [aux_sym_entrypoint_token1] = ACTIONS(445),
    [aux_sym_env_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [aux_sym_healthcheck_token1] = ACTIONS(445),
    [aux_sym_label_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_onbuild_token1] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_shell_token1] = ACTIONS(445),
    [aux_sym_stopsignal_token1] = ACTIONS(445),
    [aux_sym_user_token1] = ACTIONS(445),
    [aux_sym_volume_token1] = ACTIONS(445),
    [aux_sym_workdir_token1] = ACTIONS(445),
    [aux_sym__anything_token1] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(443),
    [sym_comment] = ACTIONS(445),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [aux_sym__anything] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_env_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [aux_sym_healthcheck_token1] = ACTIONS(469),
    [aux_sym_label_token1] = ACTIONS(469),
    [aux_sym_maintainer_token1] = ACTIONS(469),
    [aux_sym_onbuild_token1] = ACTIONS(469),
    [aux_sym_run_token1] = ACTIONS(469),
    [aux_sym_shell_token1] = ACTIONS(469),
    [aux_sym_stopsignal_token1] = ACTIONS(469),
    [aux_sym_user_token1] = ACTIONS(469),
    [aux_sym_volume_token1] = ACTIONS(469),
    [aux_sym_workdir_token1] = ACTIONS(469),
    [aux_sym__anything_token1] = ACTIONS(471),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(467),
    [sym_comment] = ACTIONS(473),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [aux_sym__paths] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_add_token1] = ACTIONS(477),
    [aux_sym_arg_token1] = ACTIONS(477),
    [aux_sym_cmd_token1] = ACTIONS(477),
    [aux_sym_copy_token1] = ACTIONS(477),
    [aux_sym_entrypoint_token1] = ACTIONS(477),
    [aux_sym_env_token1] = ACTIONS(477),
    [aux_sym_expose_token1] = ACTIONS(477),
    [aux_sym_from_token1] = ACTIONS(477),
    [aux_sym_healthcheck_token1] = ACTIONS(477),
    [aux_sym_label_token1] = ACTIONS(477),
    [aux_sym_maintainer_token1] = ACTIONS(477),
    [aux_sym_onbuild_token1] = ACTIONS(477),
    [aux_sym_run_token1] = ACTIONS(477),
    [aux_sym_shell_token1] = ACTIONS(477),
    [aux_sym_stopsignal_token1] = ACTIONS(477),
    [aux_sym_user_token1] = ACTIONS(477),
    [aux_sym_volume_token1] = ACTIONS(477),
    [aux_sym_workdir_token1] = ACTIONS(477),
    [sym_path] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_add_token1] = ACTIONS(481),
    [aux_sym_arg_token1] = ACTIONS(481),
    [aux_sym_cmd_token1] = ACTIONS(481),
    [aux_sym_copy_token1] = ACTIONS(481),
    [aux_sym_entrypoint_token1] = ACTIONS(481),
    [aux_sym_env_token1] = ACTIONS(481),
    [aux_sym_expose_token1] = ACTIONS(481),
    [aux_sym_from_token1] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(481),
    [aux_sym_label_token1] = ACTIONS(481),
    [aux_sym_maintainer_token1] = ACTIONS(481),
    [aux_sym_onbuild_token1] = ACTIONS(481),
    [aux_sym_run_token1] = ACTIONS(481),
    [aux_sym_shell_token1] = ACTIONS(481),
    [aux_sym_stopsignal_token1] = ACTIONS(481),
    [aux_sym_user_token1] = ACTIONS(481),
    [aux_sym_volume_token1] = ACTIONS(481),
    [aux_sym_workdir_token1] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym__space_no_newline] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(487),
    [aux_sym_arg_token1] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_copy_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(489),
    [aux_sym_healthcheck_token1] = ACTIONS(487),
    [aux_sym_label_token1] = ACTIONS(487),
    [aux_sym_maintainer_token1] = ACTIONS(487),
    [aux_sym_onbuild_token1] = ACTIONS(487),
    [aux_sym_run_token1] = ACTIONS(487),
    [aux_sym_shell_token1] = ACTIONS(487),
    [aux_sym_stopsignal_token1] = ACTIONS(487),
    [aux_sym_user_token1] = ACTIONS(487),
    [aux_sym_volume_token1] = ACTIONS(487),
    [aux_sym_workdir_token1] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(487),
    [sym__space_no_newline] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(493),
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
    [sym_path] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(493),
    [sym__space_no_newline] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [aux_sym__paths] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_add_token1] = ACTIONS(501),
    [aux_sym_arg_token1] = ACTIONS(501),
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
    [sym_path] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [aux_sym__anything] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_add_token1] = ACTIONS(445),
    [aux_sym_arg_token1] = ACTIONS(445),
    [aux_sym_cmd_token1] = ACTIONS(445),
    [aux_sym_copy_token1] = ACTIONS(445),
    [aux_sym_entrypoint_token1] = ACTIONS(445),
    [aux_sym_env_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [aux_sym_healthcheck_token1] = ACTIONS(445),
    [aux_sym_label_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_onbuild_token1] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_shell_token1] = ACTIONS(445),
    [aux_sym_stopsignal_token1] = ACTIONS(445),
    [aux_sym_user_token1] = ACTIONS(445),
    [aux_sym_volume_token1] = ACTIONS(445),
    [aux_sym_workdir_token1] = ACTIONS(445),
    [aux_sym__anything_token1] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_add_token1] = ACTIONS(509),
    [aux_sym_arg_token1] = ACTIONS(509),
    [aux_sym_cmd_token1] = ACTIONS(509),
    [aux_sym_copy_token1] = ACTIONS(509),
    [aux_sym_entrypoint_token1] = ACTIONS(509),
    [aux_sym_env_token1] = ACTIONS(509),
    [aux_sym_expose_token1] = ACTIONS(509),
    [aux_sym_from_token1] = ACTIONS(509),
    [anon_sym_AT] = ACTIONS(509),
    [aux_sym_healthcheck_token1] = ACTIONS(509),
    [aux_sym_label_token1] = ACTIONS(509),
    [aux_sym_maintainer_token1] = ACTIONS(509),
    [aux_sym_onbuild_token1] = ACTIONS(509),
    [aux_sym_run_token1] = ACTIONS(509),
    [aux_sym_shell_token1] = ACTIONS(509),
    [aux_sym_stopsignal_token1] = ACTIONS(509),
    [aux_sym_user_token1] = ACTIONS(509),
    [aux_sym_volume_token1] = ACTIONS(509),
    [aux_sym_workdir_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(509),
    [sym__space_no_newline] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [aux_sym__paths] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(513),
    [aux_sym_add_token1] = ACTIONS(515),
    [aux_sym_arg_token1] = ACTIONS(515),
    [aux_sym_cmd_token1] = ACTIONS(515),
    [aux_sym_copy_token1] = ACTIONS(515),
    [aux_sym_entrypoint_token1] = ACTIONS(515),
    [aux_sym_env_token1] = ACTIONS(515),
    [aux_sym_expose_token1] = ACTIONS(515),
    [aux_sym_from_token1] = ACTIONS(515),
    [aux_sym_healthcheck_token1] = ACTIONS(515),
    [aux_sym_label_token1] = ACTIONS(515),
    [aux_sym_maintainer_token1] = ACTIONS(515),
    [aux_sym_onbuild_token1] = ACTIONS(515),
    [aux_sym_run_token1] = ACTIONS(515),
    [aux_sym_shell_token1] = ACTIONS(515),
    [aux_sym_stopsignal_token1] = ACTIONS(515),
    [aux_sym_user_token1] = ACTIONS(515),
    [aux_sym_volume_token1] = ACTIONS(515),
    [aux_sym_workdir_token1] = ACTIONS(515),
    [sym_path] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
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
    [aux_sym_env_key_token1] = ACTIONS(519),
    [aux_sym__anything_token1] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [aux_sym__anything] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_add_token1] = ACTIONS(523),
    [aux_sym_arg_token1] = ACTIONS(523),
    [aux_sym_cmd_token1] = ACTIONS(523),
    [aux_sym_copy_token1] = ACTIONS(523),
    [aux_sym_entrypoint_token1] = ACTIONS(523),
    [aux_sym_env_token1] = ACTIONS(523),
    [aux_sym_expose_token1] = ACTIONS(523),
    [aux_sym_from_token1] = ACTIONS(523),
    [aux_sym_healthcheck_token1] = ACTIONS(523),
    [aux_sym_label_token1] = ACTIONS(523),
    [aux_sym_maintainer_token1] = ACTIONS(523),
    [aux_sym_onbuild_token1] = ACTIONS(523),
    [aux_sym_run_token1] = ACTIONS(523),
    [aux_sym_shell_token1] = ACTIONS(523),
    [aux_sym_stopsignal_token1] = ACTIONS(523),
    [aux_sym_user_token1] = ACTIONS(523),
    [aux_sym_volume_token1] = ACTIONS(523),
    [aux_sym_workdir_token1] = ACTIONS(523),
    [aux_sym__anything_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [aux_sym_add_token1] = ACTIONS(411),
    [aux_sym_arg_token1] = ACTIONS(411),
    [aux_sym_cmd_token1] = ACTIONS(411),
    [aux_sym_copy_token1] = ACTIONS(411),
    [aux_sym_entrypoint_token1] = ACTIONS(411),
    [aux_sym_env_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(415),
    [aux_sym_healthcheck_token1] = ACTIONS(411),
    [aux_sym_label_token1] = ACTIONS(411),
    [aux_sym_maintainer_token1] = ACTIONS(411),
    [aux_sym_onbuild_token1] = ACTIONS(411),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_shell_token1] = ACTIONS(411),
    [aux_sym_stopsignal_token1] = ACTIONS(411),
    [aux_sym_user_token1] = ACTIONS(411),
    [aux_sym_volume_token1] = ACTIONS(411),
    [aux_sym_workdir_token1] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(411),
    [sym__space_no_newline] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [aux_sym__paths] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_add_token1] = ACTIONS(529),
    [aux_sym_arg_token1] = ACTIONS(529),
    [aux_sym_cmd_token1] = ACTIONS(529),
    [aux_sym_copy_token1] = ACTIONS(529),
    [aux_sym_entrypoint_token1] = ACTIONS(529),
    [aux_sym_env_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [aux_sym_healthcheck_token1] = ACTIONS(529),
    [aux_sym_label_token1] = ACTIONS(529),
    [aux_sym_maintainer_token1] = ACTIONS(529),
    [aux_sym_onbuild_token1] = ACTIONS(529),
    [aux_sym_run_token1] = ACTIONS(529),
    [aux_sym_shell_token1] = ACTIONS(529),
    [aux_sym_stopsignal_token1] = ACTIONS(529),
    [aux_sym_user_token1] = ACTIONS(529),
    [aux_sym_volume_token1] = ACTIONS(529),
    [aux_sym_workdir_token1] = ACTIONS(529),
    [sym_path] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
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
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_add_token1] = ACTIONS(243),
    [aux_sym_arg_token1] = ACTIONS(243),
    [aux_sym_cmd_token1] = ACTIONS(243),
    [aux_sym_copy_token1] = ACTIONS(243),
    [aux_sym_entrypoint_token1] = ACTIONS(243),
    [aux_sym_env_token1] = ACTIONS(243),
    [aux_sym_expose_token1] = ACTIONS(243),
    [aux_sym_from_token1] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(243),
    [aux_sym_healthcheck_token1] = ACTIONS(243),
    [aux_sym_label_token1] = ACTIONS(243),
    [aux_sym_maintainer_token1] = ACTIONS(243),
    [aux_sym_onbuild_token1] = ACTIONS(243),
    [aux_sym_run_token1] = ACTIONS(243),
    [aux_sym_shell_token1] = ACTIONS(243),
    [aux_sym_stopsignal_token1] = ACTIONS(243),
    [aux_sym_user_token1] = ACTIONS(243),
    [aux_sym_volume_token1] = ACTIONS(243),
    [aux_sym_workdir_token1] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_add_token1] = ACTIONS(531),
    [aux_sym_arg_token1] = ACTIONS(531),
    [anon_sym_EQ] = ACTIONS(533),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
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
    [aux_sym__anything_token1] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
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
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_add_token1] = ACTIONS(537),
    [aux_sym_arg_token1] = ACTIONS(537),
    [aux_sym_cmd_token1] = ACTIONS(537),
    [aux_sym_copy_token1] = ACTIONS(537),
    [aux_sym_entrypoint_token1] = ACTIONS(537),
    [aux_sym_env_token1] = ACTIONS(537),
    [aux_sym_expose_token1] = ACTIONS(537),
    [aux_sym_from_token1] = ACTIONS(537),
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
    [aux_sym_env_key_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(535),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(539),
    [aux_sym_arg_token1] = ACTIONS(539),
    [aux_sym_cmd_token1] = ACTIONS(539),
    [aux_sym_copy_token1] = ACTIONS(539),
    [aux_sym_entrypoint_token1] = ACTIONS(539),
    [aux_sym_env_token1] = ACTIONS(539),
    [aux_sym_expose_token1] = ACTIONS(539),
    [aux_sym_from_token1] = ACTIONS(539),
    [aux_sym_healthcheck_token1] = ACTIONS(539),
    [aux_sym_label_token1] = ACTIONS(539),
    [aux_sym_maintainer_token1] = ACTIONS(539),
    [aux_sym_onbuild_token1] = ACTIONS(539),
    [aux_sym_run_token1] = ACTIONS(539),
    [aux_sym_shell_token1] = ACTIONS(539),
    [aux_sym_stopsignal_token1] = ACTIONS(539),
    [aux_sym_user_token1] = ACTIONS(539),
    [aux_sym_volume_token1] = ACTIONS(539),
    [aux_sym_workdir_token1] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(539),
    [sym__space_no_newline] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [aux_sym_healthcheck_token1] = ACTIONS(285),
    [aux_sym_label_token1] = ACTIONS(285),
    [aux_sym_maintainer_token1] = ACTIONS(285),
    [aux_sym_onbuild_token1] = ACTIONS(285),
    [aux_sym_run_token1] = ACTIONS(285),
    [aux_sym_shell_token1] = ACTIONS(285),
    [aux_sym_stopsignal_token1] = ACTIONS(285),
    [aux_sym_user_token1] = ACTIONS(285),
    [aux_sym_volume_token1] = ACTIONS(285),
    [aux_sym_workdir_token1] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_add_token1] = ACTIONS(545),
    [aux_sym_arg_token1] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_copy_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_env_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [aux_sym_healthcheck_token1] = ACTIONS(545),
    [aux_sym_label_token1] = ACTIONS(545),
    [aux_sym_maintainer_token1] = ACTIONS(545),
    [aux_sym_onbuild_token1] = ACTIONS(545),
    [aux_sym_run_token1] = ACTIONS(545),
    [aux_sym_shell_token1] = ACTIONS(545),
    [aux_sym_stopsignal_token1] = ACTIONS(545),
    [aux_sym_user_token1] = ACTIONS(545),
    [aux_sym_volume_token1] = ACTIONS(545),
    [aux_sym_workdir_token1] = ACTIONS(545),
    [aux_sym_env_key_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [aux_sym_add_token1] = ACTIONS(411),
    [aux_sym_arg_token1] = ACTIONS(411),
    [aux_sym_cmd_token1] = ACTIONS(411),
    [aux_sym_copy_token1] = ACTIONS(411),
    [aux_sym_entrypoint_token1] = ACTIONS(411),
    [aux_sym_env_token1] = ACTIONS(411),
    [aux_sym_expose_token1] = ACTIONS(411),
    [aux_sym_from_token1] = ACTIONS(411),
    [aux_sym_healthcheck_token1] = ACTIONS(411),
    [aux_sym_label_token1] = ACTIONS(411),
    [aux_sym_maintainer_token1] = ACTIONS(411),
    [aux_sym_onbuild_token1] = ACTIONS(411),
    [aux_sym_run_token1] = ACTIONS(411),
    [aux_sym_shell_token1] = ACTIONS(411),
    [aux_sym_stopsignal_token1] = ACTIONS(411),
    [aux_sym_user_token1] = ACTIONS(411),
    [aux_sym_volume_token1] = ACTIONS(411),
    [aux_sym_workdir_token1] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(411),
    [sym__space_no_newline] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym_add_token1] = ACTIONS(435),
    [aux_sym_arg_token1] = ACTIONS(435),
    [aux_sym_cmd_token1] = ACTIONS(435),
    [aux_sym_copy_token1] = ACTIONS(435),
    [aux_sym_entrypoint_token1] = ACTIONS(435),
    [aux_sym_env_token1] = ACTIONS(435),
    [aux_sym_expose_token1] = ACTIONS(435),
    [aux_sym_from_token1] = ACTIONS(435),
    [aux_sym_healthcheck_token1] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(435),
    [aux_sym_maintainer_token1] = ACTIONS(435),
    [aux_sym_onbuild_token1] = ACTIONS(435),
    [aux_sym_run_token1] = ACTIONS(435),
    [aux_sym_shell_token1] = ACTIONS(435),
    [aux_sym_stopsignal_token1] = ACTIONS(435),
    [aux_sym_user_token1] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(435),
    [aux_sym_workdir_token1] = ACTIONS(435),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(435),
    [sym__space_no_newline] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
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
    [sym__space_no_newline] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_add_token1] = ACTIONS(501),
    [aux_sym_arg_token1] = ACTIONS(501),
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
    [sym_path] = ACTIONS(501),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(487),
    [aux_sym_arg_token1] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_copy_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [aux_sym_healthcheck_token1] = ACTIONS(487),
    [aux_sym_label_token1] = ACTIONS(487),
    [aux_sym_maintainer_token1] = ACTIONS(487),
    [aux_sym_onbuild_token1] = ACTIONS(487),
    [aux_sym_run_token1] = ACTIONS(487),
    [aux_sym_shell_token1] = ACTIONS(487),
    [aux_sym_stopsignal_token1] = ACTIONS(487),
    [aux_sym_user_token1] = ACTIONS(487),
    [aux_sym_volume_token1] = ACTIONS(487),
    [aux_sym_workdir_token1] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(487),
    [sym__space_no_newline] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(551),
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
    [aux_sym_env_key_token1] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
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
    [aux_sym__anything_token1] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym_comment] = ACTIONS(519),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(555),
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
    [aux_sym_env_key_token1] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(559),
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
    [aux_sym_env_key_token1] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(559),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(563),
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
    [aux_sym_env_key_token1] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
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
    [sym__space_no_newline] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_add_token1] = ACTIONS(481),
    [aux_sym_arg_token1] = ACTIONS(481),
    [aux_sym_cmd_token1] = ACTIONS(481),
    [aux_sym_copy_token1] = ACTIONS(481),
    [aux_sym_entrypoint_token1] = ACTIONS(481),
    [aux_sym_env_token1] = ACTIONS(481),
    [aux_sym_expose_token1] = ACTIONS(481),
    [aux_sym_from_token1] = ACTIONS(481),
    [aux_sym_healthcheck_token1] = ACTIONS(481),
    [aux_sym_label_token1] = ACTIONS(481),
    [aux_sym_maintainer_token1] = ACTIONS(481),
    [aux_sym_onbuild_token1] = ACTIONS(481),
    [aux_sym_run_token1] = ACTIONS(481),
    [aux_sym_shell_token1] = ACTIONS(481),
    [aux_sym_stopsignal_token1] = ACTIONS(481),
    [aux_sym_user_token1] = ACTIONS(481),
    [aux_sym_volume_token1] = ACTIONS(481),
    [aux_sym_workdir_token1] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym__space_no_newline] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [aux_sym_add_token1] = ACTIONS(571),
    [aux_sym_arg_token1] = ACTIONS(571),
    [aux_sym_cmd_token1] = ACTIONS(571),
    [aux_sym_copy_token1] = ACTIONS(571),
    [aux_sym_entrypoint_token1] = ACTIONS(571),
    [aux_sym_env_token1] = ACTIONS(571),
    [aux_sym_expose_token1] = ACTIONS(571),
    [aux_sym_from_token1] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(573),
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
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [aux_sym_add_token1] = ACTIONS(571),
    [aux_sym_arg_token1] = ACTIONS(571),
    [aux_sym_cmd_token1] = ACTIONS(571),
    [aux_sym_copy_token1] = ACTIONS(571),
    [aux_sym_entrypoint_token1] = ACTIONS(571),
    [aux_sym_env_token1] = ACTIONS(571),
    [aux_sym_expose_token1] = ACTIONS(571),
    [aux_sym_from_token1] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(575),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [aux_sym_add_token1] = ACTIONS(577),
    [aux_sym_arg_token1] = ACTIONS(577),
    [aux_sym_cmd_token1] = ACTIONS(577),
    [aux_sym_copy_token1] = ACTIONS(577),
    [aux_sym_entrypoint_token1] = ACTIONS(577),
    [aux_sym_env_token1] = ACTIONS(577),
    [aux_sym_expose_token1] = ACTIONS(577),
    [aux_sym_from_token1] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [aux_sym_add_token1] = ACTIONS(579),
    [aux_sym_arg_token1] = ACTIONS(579),
    [aux_sym_cmd_token1] = ACTIONS(579),
    [aux_sym_copy_token1] = ACTIONS(579),
    [aux_sym_entrypoint_token1] = ACTIONS(579),
    [aux_sym_env_token1] = ACTIONS(579),
    [aux_sym_expose_token1] = ACTIONS(579),
    [aux_sym_from_token1] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
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
  [163] = {
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
    [sym__space_no_newline] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
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
    [sym__space_no_newline] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
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
  [166] = {
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
  [167] = {
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
  [168] = {
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
  [169] = {
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
  [170] = {
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
  [171] = {
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
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [aux_sym_add_token1] = ACTIONS(603),
    [aux_sym_arg_token1] = ACTIONS(603),
    [aux_sym_cmd_token1] = ACTIONS(603),
    [aux_sym_copy_token1] = ACTIONS(603),
    [aux_sym_entrypoint_token1] = ACTIONS(603),
    [aux_sym_env_token1] = ACTIONS(603),
    [aux_sym_expose_token1] = ACTIONS(603),
    [aux_sym_from_token1] = ACTIONS(603),
    [aux_sym_healthcheck_token1] = ACTIONS(603),
    [aux_sym_label_token1] = ACTIONS(603),
    [aux_sym_maintainer_token1] = ACTIONS(603),
    [aux_sym_onbuild_token1] = ACTIONS(603),
    [aux_sym_run_token1] = ACTIONS(603),
    [aux_sym_shell_token1] = ACTIONS(603),
    [aux_sym_stopsignal_token1] = ACTIONS(603),
    [aux_sym_user_token1] = ACTIONS(603),
    [aux_sym_volume_token1] = ACTIONS(603),
    [aux_sym_workdir_token1] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [aux_sym_add_token1] = ACTIONS(605),
    [aux_sym_arg_token1] = ACTIONS(605),
    [aux_sym_cmd_token1] = ACTIONS(605),
    [aux_sym_copy_token1] = ACTIONS(605),
    [aux_sym_entrypoint_token1] = ACTIONS(605),
    [aux_sym_env_token1] = ACTIONS(605),
    [aux_sym_expose_token1] = ACTIONS(605),
    [aux_sym_from_token1] = ACTIONS(605),
    [aux_sym_healthcheck_token1] = ACTIONS(605),
    [aux_sym_label_token1] = ACTIONS(605),
    [aux_sym_maintainer_token1] = ACTIONS(605),
    [aux_sym_onbuild_token1] = ACTIONS(605),
    [aux_sym_run_token1] = ACTIONS(605),
    [aux_sym_shell_token1] = ACTIONS(605),
    [aux_sym_stopsignal_token1] = ACTIONS(605),
    [aux_sym_user_token1] = ACTIONS(605),
    [aux_sym_volume_token1] = ACTIONS(605),
    [aux_sym_workdir_token1] = ACTIONS(605),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [aux_sym_add_token1] = ACTIONS(607),
    [aux_sym_arg_token1] = ACTIONS(607),
    [aux_sym_cmd_token1] = ACTIONS(607),
    [aux_sym_copy_token1] = ACTIONS(607),
    [aux_sym_entrypoint_token1] = ACTIONS(607),
    [aux_sym_env_token1] = ACTIONS(607),
    [aux_sym_expose_token1] = ACTIONS(607),
    [aux_sym_from_token1] = ACTIONS(607),
    [aux_sym_healthcheck_token1] = ACTIONS(607),
    [aux_sym_label_token1] = ACTIONS(607),
    [aux_sym_maintainer_token1] = ACTIONS(607),
    [aux_sym_onbuild_token1] = ACTIONS(607),
    [aux_sym_run_token1] = ACTIONS(607),
    [aux_sym_shell_token1] = ACTIONS(607),
    [aux_sym_stopsignal_token1] = ACTIONS(607),
    [aux_sym_user_token1] = ACTIONS(607),
    [aux_sym_volume_token1] = ACTIONS(607),
    [aux_sym_workdir_token1] = ACTIONS(607),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [aux_sym_add_token1] = ACTIONS(609),
    [aux_sym_arg_token1] = ACTIONS(609),
    [aux_sym_cmd_token1] = ACTIONS(609),
    [aux_sym_copy_token1] = ACTIONS(609),
    [aux_sym_entrypoint_token1] = ACTIONS(609),
    [aux_sym_env_token1] = ACTIONS(609),
    [aux_sym_expose_token1] = ACTIONS(609),
    [aux_sym_from_token1] = ACTIONS(609),
    [aux_sym_healthcheck_token1] = ACTIONS(609),
    [aux_sym_label_token1] = ACTIONS(609),
    [aux_sym_maintainer_token1] = ACTIONS(609),
    [aux_sym_onbuild_token1] = ACTIONS(609),
    [aux_sym_run_token1] = ACTIONS(609),
    [aux_sym_shell_token1] = ACTIONS(609),
    [aux_sym_stopsignal_token1] = ACTIONS(609),
    [aux_sym_user_token1] = ACTIONS(609),
    [aux_sym_volume_token1] = ACTIONS(609),
    [aux_sym_workdir_token1] = ACTIONS(609),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(609),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [aux_sym_add_token1] = ACTIONS(611),
    [aux_sym_arg_token1] = ACTIONS(611),
    [aux_sym_cmd_token1] = ACTIONS(611),
    [aux_sym_copy_token1] = ACTIONS(611),
    [aux_sym_entrypoint_token1] = ACTIONS(611),
    [aux_sym_env_token1] = ACTIONS(611),
    [aux_sym_expose_token1] = ACTIONS(611),
    [aux_sym_from_token1] = ACTIONS(611),
    [aux_sym_healthcheck_token1] = ACTIONS(611),
    [aux_sym_label_token1] = ACTIONS(611),
    [aux_sym_maintainer_token1] = ACTIONS(611),
    [aux_sym_onbuild_token1] = ACTIONS(611),
    [aux_sym_run_token1] = ACTIONS(611),
    [aux_sym_shell_token1] = ACTIONS(611),
    [aux_sym_stopsignal_token1] = ACTIONS(611),
    [aux_sym_user_token1] = ACTIONS(611),
    [aux_sym_volume_token1] = ACTIONS(611),
    [aux_sym_workdir_token1] = ACTIONS(611),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(611),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(613),
    [aux_sym_add_token1] = ACTIONS(613),
    [aux_sym_arg_token1] = ACTIONS(613),
    [aux_sym_cmd_token1] = ACTIONS(613),
    [aux_sym_copy_token1] = ACTIONS(613),
    [aux_sym_entrypoint_token1] = ACTIONS(613),
    [aux_sym_env_token1] = ACTIONS(613),
    [aux_sym_expose_token1] = ACTIONS(613),
    [aux_sym_from_token1] = ACTIONS(613),
    [aux_sym_healthcheck_token1] = ACTIONS(613),
    [aux_sym_label_token1] = ACTIONS(613),
    [aux_sym_maintainer_token1] = ACTIONS(613),
    [aux_sym_onbuild_token1] = ACTIONS(613),
    [aux_sym_run_token1] = ACTIONS(613),
    [aux_sym_shell_token1] = ACTIONS(613),
    [aux_sym_stopsignal_token1] = ACTIONS(613),
    [aux_sym_user_token1] = ACTIONS(613),
    [aux_sym_volume_token1] = ACTIONS(613),
    [aux_sym_workdir_token1] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(615),
    [aux_sym_add_token1] = ACTIONS(615),
    [aux_sym_arg_token1] = ACTIONS(615),
    [aux_sym_cmd_token1] = ACTIONS(615),
    [aux_sym_copy_token1] = ACTIONS(615),
    [aux_sym_entrypoint_token1] = ACTIONS(615),
    [aux_sym_env_token1] = ACTIONS(615),
    [aux_sym_expose_token1] = ACTIONS(615),
    [aux_sym_from_token1] = ACTIONS(615),
    [aux_sym_healthcheck_token1] = ACTIONS(615),
    [aux_sym_label_token1] = ACTIONS(615),
    [aux_sym_maintainer_token1] = ACTIONS(615),
    [aux_sym_onbuild_token1] = ACTIONS(615),
    [aux_sym_run_token1] = ACTIONS(615),
    [aux_sym_shell_token1] = ACTIONS(615),
    [aux_sym_stopsignal_token1] = ACTIONS(615),
    [aux_sym_user_token1] = ACTIONS(615),
    [aux_sym_volume_token1] = ACTIONS(615),
    [aux_sym_workdir_token1] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(617),
    [aux_sym_add_token1] = ACTIONS(617),
    [aux_sym_arg_token1] = ACTIONS(617),
    [aux_sym_cmd_token1] = ACTIONS(617),
    [aux_sym_copy_token1] = ACTIONS(617),
    [aux_sym_entrypoint_token1] = ACTIONS(617),
    [aux_sym_env_token1] = ACTIONS(617),
    [aux_sym_expose_token1] = ACTIONS(617),
    [aux_sym_from_token1] = ACTIONS(617),
    [aux_sym_healthcheck_token1] = ACTIONS(617),
    [aux_sym_label_token1] = ACTIONS(617),
    [aux_sym_maintainer_token1] = ACTIONS(617),
    [aux_sym_onbuild_token1] = ACTIONS(617),
    [aux_sym_run_token1] = ACTIONS(617),
    [aux_sym_shell_token1] = ACTIONS(617),
    [aux_sym_stopsignal_token1] = ACTIONS(617),
    [aux_sym_user_token1] = ACTIONS(617),
    [aux_sym_volume_token1] = ACTIONS(617),
    [aux_sym_workdir_token1] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(617),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(619),
    [aux_sym_add_token1] = ACTIONS(619),
    [aux_sym_arg_token1] = ACTIONS(619),
    [aux_sym_cmd_token1] = ACTIONS(619),
    [aux_sym_copy_token1] = ACTIONS(619),
    [aux_sym_entrypoint_token1] = ACTIONS(619),
    [aux_sym_env_token1] = ACTIONS(619),
    [aux_sym_expose_token1] = ACTIONS(619),
    [aux_sym_from_token1] = ACTIONS(619),
    [aux_sym_healthcheck_token1] = ACTIONS(619),
    [aux_sym_label_token1] = ACTIONS(619),
    [aux_sym_maintainer_token1] = ACTIONS(619),
    [aux_sym_onbuild_token1] = ACTIONS(619),
    [aux_sym_run_token1] = ACTIONS(619),
    [aux_sym_shell_token1] = ACTIONS(619),
    [aux_sym_stopsignal_token1] = ACTIONS(619),
    [aux_sym_user_token1] = ACTIONS(619),
    [aux_sym_volume_token1] = ACTIONS(619),
    [aux_sym_workdir_token1] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [aux_sym_add_token1] = ACTIONS(621),
    [aux_sym_arg_token1] = ACTIONS(621),
    [aux_sym_cmd_token1] = ACTIONS(621),
    [aux_sym_copy_token1] = ACTIONS(621),
    [aux_sym_entrypoint_token1] = ACTIONS(621),
    [aux_sym_env_token1] = ACTIONS(621),
    [aux_sym_expose_token1] = ACTIONS(621),
    [aux_sym_from_token1] = ACTIONS(621),
    [aux_sym_healthcheck_token1] = ACTIONS(621),
    [aux_sym_label_token1] = ACTIONS(621),
    [aux_sym_maintainer_token1] = ACTIONS(621),
    [aux_sym_onbuild_token1] = ACTIONS(621),
    [aux_sym_run_token1] = ACTIONS(621),
    [aux_sym_shell_token1] = ACTIONS(621),
    [aux_sym_stopsignal_token1] = ACTIONS(621),
    [aux_sym_user_token1] = ACTIONS(621),
    [aux_sym_volume_token1] = ACTIONS(621),
    [aux_sym_workdir_token1] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(621),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [aux_sym_add_token1] = ACTIONS(623),
    [aux_sym_arg_token1] = ACTIONS(623),
    [aux_sym_cmd_token1] = ACTIONS(623),
    [aux_sym_copy_token1] = ACTIONS(623),
    [aux_sym_entrypoint_token1] = ACTIONS(623),
    [aux_sym_env_token1] = ACTIONS(623),
    [aux_sym_expose_token1] = ACTIONS(623),
    [aux_sym_from_token1] = ACTIONS(623),
    [aux_sym_healthcheck_token1] = ACTIONS(623),
    [aux_sym_label_token1] = ACTIONS(623),
    [aux_sym_maintainer_token1] = ACTIONS(623),
    [aux_sym_onbuild_token1] = ACTIONS(623),
    [aux_sym_run_token1] = ACTIONS(623),
    [aux_sym_shell_token1] = ACTIONS(623),
    [aux_sym_stopsignal_token1] = ACTIONS(623),
    [aux_sym_user_token1] = ACTIONS(623),
    [aux_sym_volume_token1] = ACTIONS(623),
    [aux_sym_workdir_token1] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(625),
    [aux_sym_add_token1] = ACTIONS(625),
    [aux_sym_arg_token1] = ACTIONS(625),
    [aux_sym_cmd_token1] = ACTIONS(625),
    [aux_sym_copy_token1] = ACTIONS(625),
    [aux_sym_entrypoint_token1] = ACTIONS(625),
    [aux_sym_env_token1] = ACTIONS(625),
    [aux_sym_expose_token1] = ACTIONS(625),
    [aux_sym_from_token1] = ACTIONS(625),
    [aux_sym_healthcheck_token1] = ACTIONS(625),
    [aux_sym_label_token1] = ACTIONS(625),
    [aux_sym_maintainer_token1] = ACTIONS(625),
    [aux_sym_onbuild_token1] = ACTIONS(625),
    [aux_sym_run_token1] = ACTIONS(625),
    [aux_sym_shell_token1] = ACTIONS(625),
    [aux_sym_stopsignal_token1] = ACTIONS(625),
    [aux_sym_user_token1] = ACTIONS(625),
    [aux_sym_volume_token1] = ACTIONS(625),
    [aux_sym_workdir_token1] = ACTIONS(625),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_add_token1] = ACTIONS(481),
    [aux_sym_arg_token1] = ACTIONS(481),
    [aux_sym_cmd_token1] = ACTIONS(481),
    [aux_sym_copy_token1] = ACTIONS(481),
    [aux_sym_entrypoint_token1] = ACTIONS(481),
    [aux_sym_env_token1] = ACTIONS(481),
    [aux_sym_expose_token1] = ACTIONS(481),
    [aux_sym_from_token1] = ACTIONS(481),
    [aux_sym_healthcheck_token1] = ACTIONS(481),
    [aux_sym_label_token1] = ACTIONS(481),
    [aux_sym_maintainer_token1] = ACTIONS(481),
    [aux_sym_onbuild_token1] = ACTIONS(481),
    [aux_sym_run_token1] = ACTIONS(481),
    [aux_sym_shell_token1] = ACTIONS(481),
    [aux_sym_stopsignal_token1] = ACTIONS(481),
    [aux_sym_user_token1] = ACTIONS(481),
    [aux_sym_volume_token1] = ACTIONS(481),
    [aux_sym_workdir_token1] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(627),
    [aux_sym_add_token1] = ACTIONS(627),
    [aux_sym_arg_token1] = ACTIONS(627),
    [aux_sym_cmd_token1] = ACTIONS(627),
    [aux_sym_copy_token1] = ACTIONS(627),
    [aux_sym_entrypoint_token1] = ACTIONS(627),
    [aux_sym_env_token1] = ACTIONS(627),
    [aux_sym_expose_token1] = ACTIONS(627),
    [aux_sym_from_token1] = ACTIONS(627),
    [aux_sym_healthcheck_token1] = ACTIONS(627),
    [aux_sym_label_token1] = ACTIONS(627),
    [aux_sym_maintainer_token1] = ACTIONS(627),
    [aux_sym_onbuild_token1] = ACTIONS(627),
    [aux_sym_run_token1] = ACTIONS(627),
    [aux_sym_shell_token1] = ACTIONS(627),
    [aux_sym_stopsignal_token1] = ACTIONS(627),
    [aux_sym_user_token1] = ACTIONS(627),
    [aux_sym_volume_token1] = ACTIONS(627),
    [aux_sym_workdir_token1] = ACTIONS(627),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [aux_sym_add_token1] = ACTIONS(629),
    [aux_sym_arg_token1] = ACTIONS(629),
    [aux_sym_cmd_token1] = ACTIONS(629),
    [aux_sym_copy_token1] = ACTIONS(629),
    [aux_sym_entrypoint_token1] = ACTIONS(629),
    [aux_sym_env_token1] = ACTIONS(629),
    [aux_sym_expose_token1] = ACTIONS(629),
    [aux_sym_from_token1] = ACTIONS(629),
    [aux_sym_healthcheck_token1] = ACTIONS(629),
    [aux_sym_label_token1] = ACTIONS(629),
    [aux_sym_maintainer_token1] = ACTIONS(629),
    [aux_sym_onbuild_token1] = ACTIONS(629),
    [aux_sym_run_token1] = ACTIONS(629),
    [aux_sym_shell_token1] = ACTIONS(629),
    [aux_sym_stopsignal_token1] = ACTIONS(629),
    [aux_sym_user_token1] = ACTIONS(629),
    [aux_sym_volume_token1] = ACTIONS(629),
    [aux_sym_workdir_token1] = ACTIONS(629),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(631),
    [aux_sym_add_token1] = ACTIONS(631),
    [aux_sym_arg_token1] = ACTIONS(631),
    [aux_sym_cmd_token1] = ACTIONS(631),
    [aux_sym_copy_token1] = ACTIONS(631),
    [aux_sym_entrypoint_token1] = ACTIONS(631),
    [aux_sym_env_token1] = ACTIONS(631),
    [aux_sym_expose_token1] = ACTIONS(631),
    [aux_sym_from_token1] = ACTIONS(631),
    [aux_sym_healthcheck_token1] = ACTIONS(631),
    [aux_sym_label_token1] = ACTIONS(631),
    [aux_sym_maintainer_token1] = ACTIONS(631),
    [aux_sym_onbuild_token1] = ACTIONS(631),
    [aux_sym_run_token1] = ACTIONS(631),
    [aux_sym_shell_token1] = ACTIONS(631),
    [aux_sym_stopsignal_token1] = ACTIONS(631),
    [aux_sym_user_token1] = ACTIONS(631),
    [aux_sym_volume_token1] = ACTIONS(631),
    [aux_sym_workdir_token1] = ACTIONS(631),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [188] = {
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
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(633),
    [aux_sym_add_token1] = ACTIONS(633),
    [aux_sym_arg_token1] = ACTIONS(633),
    [aux_sym_cmd_token1] = ACTIONS(633),
    [aux_sym_copy_token1] = ACTIONS(633),
    [aux_sym_entrypoint_token1] = ACTIONS(633),
    [aux_sym_env_token1] = ACTIONS(633),
    [aux_sym_expose_token1] = ACTIONS(633),
    [aux_sym_from_token1] = ACTIONS(633),
    [aux_sym_healthcheck_token1] = ACTIONS(633),
    [aux_sym_label_token1] = ACTIONS(633),
    [aux_sym_maintainer_token1] = ACTIONS(633),
    [aux_sym_onbuild_token1] = ACTIONS(633),
    [aux_sym_run_token1] = ACTIONS(633),
    [aux_sym_shell_token1] = ACTIONS(633),
    [aux_sym_stopsignal_token1] = ACTIONS(633),
    [aux_sym_user_token1] = ACTIONS(633),
    [aux_sym_volume_token1] = ACTIONS(633),
    [aux_sym_workdir_token1] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_add_token1] = ACTIONS(475),
    [aux_sym_arg_token1] = ACTIONS(475),
    [aux_sym_cmd_token1] = ACTIONS(475),
    [aux_sym_copy_token1] = ACTIONS(475),
    [aux_sym_entrypoint_token1] = ACTIONS(475),
    [aux_sym_env_token1] = ACTIONS(475),
    [aux_sym_expose_token1] = ACTIONS(475),
    [aux_sym_from_token1] = ACTIONS(475),
    [aux_sym_healthcheck_token1] = ACTIONS(475),
    [aux_sym_label_token1] = ACTIONS(475),
    [aux_sym_maintainer_token1] = ACTIONS(475),
    [aux_sym_onbuild_token1] = ACTIONS(475),
    [aux_sym_run_token1] = ACTIONS(475),
    [aux_sym_shell_token1] = ACTIONS(475),
    [aux_sym_stopsignal_token1] = ACTIONS(475),
    [aux_sym_user_token1] = ACTIONS(475),
    [aux_sym_volume_token1] = ACTIONS(475),
    [aux_sym_workdir_token1] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [191] = {
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
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [aux_sym_add_token1] = ACTIONS(635),
    [aux_sym_arg_token1] = ACTIONS(635),
    [aux_sym_cmd_token1] = ACTIONS(635),
    [aux_sym_copy_token1] = ACTIONS(635),
    [aux_sym_entrypoint_token1] = ACTIONS(635),
    [aux_sym_env_token1] = ACTIONS(635),
    [aux_sym_expose_token1] = ACTIONS(635),
    [aux_sym_from_token1] = ACTIONS(635),
    [aux_sym_healthcheck_token1] = ACTIONS(635),
    [aux_sym_label_token1] = ACTIONS(635),
    [aux_sym_maintainer_token1] = ACTIONS(635),
    [aux_sym_onbuild_token1] = ACTIONS(635),
    [aux_sym_run_token1] = ACTIONS(635),
    [aux_sym_shell_token1] = ACTIONS(635),
    [aux_sym_stopsignal_token1] = ACTIONS(635),
    [aux_sym_user_token1] = ACTIONS(635),
    [aux_sym_volume_token1] = ACTIONS(635),
    [aux_sym_workdir_token1] = ACTIONS(635),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(637),
    [aux_sym_add_token1] = ACTIONS(637),
    [aux_sym_arg_token1] = ACTIONS(637),
    [aux_sym_cmd_token1] = ACTIONS(637),
    [aux_sym_copy_token1] = ACTIONS(637),
    [aux_sym_entrypoint_token1] = ACTIONS(637),
    [aux_sym_env_token1] = ACTIONS(637),
    [aux_sym_expose_token1] = ACTIONS(637),
    [aux_sym_from_token1] = ACTIONS(637),
    [aux_sym_healthcheck_token1] = ACTIONS(637),
    [aux_sym_label_token1] = ACTIONS(637),
    [aux_sym_maintainer_token1] = ACTIONS(637),
    [aux_sym_onbuild_token1] = ACTIONS(637),
    [aux_sym_run_token1] = ACTIONS(637),
    [aux_sym_shell_token1] = ACTIONS(637),
    [aux_sym_stopsignal_token1] = ACTIONS(637),
    [aux_sym_user_token1] = ACTIONS(637),
    [aux_sym_volume_token1] = ACTIONS(637),
    [aux_sym_workdir_token1] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [aux_sym_add_token1] = ACTIONS(639),
    [aux_sym_arg_token1] = ACTIONS(639),
    [aux_sym_cmd_token1] = ACTIONS(639),
    [aux_sym_copy_token1] = ACTIONS(639),
    [aux_sym_entrypoint_token1] = ACTIONS(639),
    [aux_sym_env_token1] = ACTIONS(639),
    [aux_sym_expose_token1] = ACTIONS(639),
    [aux_sym_from_token1] = ACTIONS(639),
    [aux_sym_healthcheck_token1] = ACTIONS(639),
    [aux_sym_label_token1] = ACTIONS(639),
    [aux_sym_maintainer_token1] = ACTIONS(639),
    [aux_sym_onbuild_token1] = ACTIONS(639),
    [aux_sym_run_token1] = ACTIONS(639),
    [aux_sym_shell_token1] = ACTIONS(639),
    [aux_sym_stopsignal_token1] = ACTIONS(639),
    [aux_sym_user_token1] = ACTIONS(639),
    [aux_sym_volume_token1] = ACTIONS(639),
    [aux_sym_workdir_token1] = ACTIONS(639),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(641),
    [aux_sym_add_token1] = ACTIONS(641),
    [aux_sym_arg_token1] = ACTIONS(641),
    [aux_sym_cmd_token1] = ACTIONS(641),
    [aux_sym_copy_token1] = ACTIONS(641),
    [aux_sym_entrypoint_token1] = ACTIONS(641),
    [aux_sym_env_token1] = ACTIONS(641),
    [aux_sym_expose_token1] = ACTIONS(641),
    [aux_sym_from_token1] = ACTIONS(641),
    [aux_sym_healthcheck_token1] = ACTIONS(641),
    [aux_sym_label_token1] = ACTIONS(641),
    [aux_sym_maintainer_token1] = ACTIONS(641),
    [aux_sym_onbuild_token1] = ACTIONS(641),
    [aux_sym_run_token1] = ACTIONS(641),
    [aux_sym_shell_token1] = ACTIONS(641),
    [aux_sym_stopsignal_token1] = ACTIONS(641),
    [aux_sym_user_token1] = ACTIONS(641),
    [aux_sym_volume_token1] = ACTIONS(641),
    [aux_sym_workdir_token1] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(643),
    [aux_sym_add_token1] = ACTIONS(643),
    [aux_sym_arg_token1] = ACTIONS(643),
    [aux_sym_cmd_token1] = ACTIONS(643),
    [aux_sym_copy_token1] = ACTIONS(643),
    [aux_sym_entrypoint_token1] = ACTIONS(643),
    [aux_sym_env_token1] = ACTIONS(643),
    [aux_sym_expose_token1] = ACTIONS(643),
    [aux_sym_from_token1] = ACTIONS(643),
    [aux_sym_healthcheck_token1] = ACTIONS(643),
    [aux_sym_label_token1] = ACTIONS(643),
    [aux_sym_maintainer_token1] = ACTIONS(643),
    [aux_sym_onbuild_token1] = ACTIONS(643),
    [aux_sym_run_token1] = ACTIONS(643),
    [aux_sym_shell_token1] = ACTIONS(643),
    [aux_sym_stopsignal_token1] = ACTIONS(643),
    [aux_sym_user_token1] = ACTIONS(643),
    [aux_sym_volume_token1] = ACTIONS(643),
    [aux_sym_workdir_token1] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(539),
    [aux_sym_arg_token1] = ACTIONS(539),
    [aux_sym_cmd_token1] = ACTIONS(539),
    [aux_sym_copy_token1] = ACTIONS(539),
    [aux_sym_entrypoint_token1] = ACTIONS(539),
    [aux_sym_env_token1] = ACTIONS(539),
    [aux_sym_expose_token1] = ACTIONS(539),
    [aux_sym_from_token1] = ACTIONS(539),
    [aux_sym_healthcheck_token1] = ACTIONS(539),
    [aux_sym_label_token1] = ACTIONS(539),
    [aux_sym_maintainer_token1] = ACTIONS(539),
    [aux_sym_onbuild_token1] = ACTIONS(539),
    [aux_sym_run_token1] = ACTIONS(539),
    [aux_sym_shell_token1] = ACTIONS(539),
    [aux_sym_stopsignal_token1] = ACTIONS(539),
    [aux_sym_user_token1] = ACTIONS(539),
    [aux_sym_volume_token1] = ACTIONS(539),
    [aux_sym_workdir_token1] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(539),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [aux_sym_add_token1] = ACTIONS(645),
    [aux_sym_arg_token1] = ACTIONS(645),
    [aux_sym_cmd_token1] = ACTIONS(645),
    [aux_sym_copy_token1] = ACTIONS(645),
    [aux_sym_entrypoint_token1] = ACTIONS(645),
    [aux_sym_env_token1] = ACTIONS(645),
    [aux_sym_expose_token1] = ACTIONS(645),
    [aux_sym_from_token1] = ACTIONS(645),
    [aux_sym_healthcheck_token1] = ACTIONS(645),
    [aux_sym_label_token1] = ACTIONS(645),
    [aux_sym_maintainer_token1] = ACTIONS(645),
    [aux_sym_onbuild_token1] = ACTIONS(645),
    [aux_sym_run_token1] = ACTIONS(645),
    [aux_sym_shell_token1] = ACTIONS(645),
    [aux_sym_stopsignal_token1] = ACTIONS(645),
    [aux_sym_user_token1] = ACTIONS(645),
    [aux_sym_volume_token1] = ACTIONS(645),
    [aux_sym_workdir_token1] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_add_token1] = ACTIONS(527),
    [aux_sym_arg_token1] = ACTIONS(527),
    [aux_sym_cmd_token1] = ACTIONS(527),
    [aux_sym_copy_token1] = ACTIONS(527),
    [aux_sym_entrypoint_token1] = ACTIONS(527),
    [aux_sym_env_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [aux_sym_healthcheck_token1] = ACTIONS(527),
    [aux_sym_label_token1] = ACTIONS(527),
    [aux_sym_maintainer_token1] = ACTIONS(527),
    [aux_sym_onbuild_token1] = ACTIONS(527),
    [aux_sym_run_token1] = ACTIONS(527),
    [aux_sym_shell_token1] = ACTIONS(527),
    [aux_sym_stopsignal_token1] = ACTIONS(527),
    [aux_sym_user_token1] = ACTIONS(527),
    [aux_sym_volume_token1] = ACTIONS(527),
    [aux_sym_workdir_token1] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(527),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [aux_sym_add_token1] = ACTIONS(647),
    [aux_sym_arg_token1] = ACTIONS(647),
    [aux_sym_cmd_token1] = ACTIONS(647),
    [aux_sym_copy_token1] = ACTIONS(647),
    [aux_sym_entrypoint_token1] = ACTIONS(647),
    [aux_sym_env_token1] = ACTIONS(647),
    [aux_sym_expose_token1] = ACTIONS(647),
    [aux_sym_from_token1] = ACTIONS(647),
    [aux_sym_healthcheck_token1] = ACTIONS(647),
    [aux_sym_label_token1] = ACTIONS(647),
    [aux_sym_maintainer_token1] = ACTIONS(647),
    [aux_sym_onbuild_token1] = ACTIONS(647),
    [aux_sym_run_token1] = ACTIONS(647),
    [aux_sym_shell_token1] = ACTIONS(647),
    [aux_sym_stopsignal_token1] = ACTIONS(647),
    [aux_sym_user_token1] = ACTIONS(647),
    [aux_sym_volume_token1] = ACTIONS(647),
    [aux_sym_workdir_token1] = ACTIONS(647),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(647),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(351),
    [aux_sym_arg_token1] = ACTIONS(351),
    [aux_sym_cmd_token1] = ACTIONS(351),
    [aux_sym_copy_token1] = ACTIONS(351),
    [aux_sym_entrypoint_token1] = ACTIONS(351),
    [aux_sym_env_token1] = ACTIONS(351),
    [aux_sym_expose_token1] = ACTIONS(351),
    [aux_sym_from_token1] = ACTIONS(351),
    [aux_sym_healthcheck_token1] = ACTIONS(351),
    [aux_sym_label_token1] = ACTIONS(351),
    [aux_sym_maintainer_token1] = ACTIONS(351),
    [aux_sym_onbuild_token1] = ACTIONS(351),
    [aux_sym_run_token1] = ACTIONS(351),
    [aux_sym_shell_token1] = ACTIONS(351),
    [aux_sym_stopsignal_token1] = ACTIONS(351),
    [aux_sym_user_token1] = ACTIONS(351),
    [aux_sym_volume_token1] = ACTIONS(351),
    [aux_sym_workdir_token1] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
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
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_add_token1] = ACTIONS(108),
    [aux_sym_arg_token1] = ACTIONS(108),
    [aux_sym_cmd_token1] = ACTIONS(108),
    [aux_sym_copy_token1] = ACTIONS(108),
    [aux_sym_entrypoint_token1] = ACTIONS(108),
    [aux_sym_env_token1] = ACTIONS(108),
    [aux_sym_expose_token1] = ACTIONS(108),
    [aux_sym_from_token1] = ACTIONS(108),
    [aux_sym_healthcheck_token1] = ACTIONS(108),
    [aux_sym_label_token1] = ACTIONS(108),
    [aux_sym_maintainer_token1] = ACTIONS(108),
    [aux_sym_onbuild_token1] = ACTIONS(108),
    [aux_sym_run_token1] = ACTIONS(108),
    [aux_sym_shell_token1] = ACTIONS(108),
    [aux_sym_stopsignal_token1] = ACTIONS(108),
    [aux_sym_user_token1] = ACTIONS(108),
    [aux_sym_volume_token1] = ACTIONS(108),
    [aux_sym_workdir_token1] = ACTIONS(108),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(108),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(649),
    [aux_sym_add_token1] = ACTIONS(649),
    [aux_sym_arg_token1] = ACTIONS(649),
    [aux_sym_cmd_token1] = ACTIONS(649),
    [aux_sym_copy_token1] = ACTIONS(649),
    [aux_sym_entrypoint_token1] = ACTIONS(649),
    [aux_sym_env_token1] = ACTIONS(649),
    [aux_sym_expose_token1] = ACTIONS(649),
    [aux_sym_from_token1] = ACTIONS(649),
    [aux_sym_healthcheck_token1] = ACTIONS(649),
    [aux_sym_label_token1] = ACTIONS(649),
    [aux_sym_maintainer_token1] = ACTIONS(649),
    [aux_sym_onbuild_token1] = ACTIONS(649),
    [aux_sym_run_token1] = ACTIONS(649),
    [aux_sym_shell_token1] = ACTIONS(649),
    [aux_sym_stopsignal_token1] = ACTIONS(649),
    [aux_sym_user_token1] = ACTIONS(649),
    [aux_sym_volume_token1] = ACTIONS(649),
    [aux_sym_workdir_token1] = ACTIONS(649),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [aux_sym_add_token1] = ACTIONS(651),
    [aux_sym_arg_token1] = ACTIONS(651),
    [aux_sym_cmd_token1] = ACTIONS(651),
    [aux_sym_copy_token1] = ACTIONS(651),
    [aux_sym_entrypoint_token1] = ACTIONS(651),
    [aux_sym_env_token1] = ACTIONS(651),
    [aux_sym_expose_token1] = ACTIONS(651),
    [aux_sym_from_token1] = ACTIONS(651),
    [aux_sym_healthcheck_token1] = ACTIONS(651),
    [aux_sym_label_token1] = ACTIONS(651),
    [aux_sym_maintainer_token1] = ACTIONS(651),
    [aux_sym_onbuild_token1] = ACTIONS(651),
    [aux_sym_run_token1] = ACTIONS(651),
    [aux_sym_shell_token1] = ACTIONS(651),
    [aux_sym_stopsignal_token1] = ACTIONS(651),
    [aux_sym_user_token1] = ACTIONS(651),
    [aux_sym_volume_token1] = ACTIONS(651),
    [aux_sym_workdir_token1] = ACTIONS(651),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [206] = {
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
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(487),
    [aux_sym_arg_token1] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_copy_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [aux_sym_healthcheck_token1] = ACTIONS(487),
    [aux_sym_label_token1] = ACTIONS(487),
    [aux_sym_maintainer_token1] = ACTIONS(487),
    [aux_sym_onbuild_token1] = ACTIONS(487),
    [aux_sym_run_token1] = ACTIONS(487),
    [aux_sym_shell_token1] = ACTIONS(487),
    [aux_sym_stopsignal_token1] = ACTIONS(487),
    [aux_sym_user_token1] = ACTIONS(487),
    [aux_sym_volume_token1] = ACTIONS(487),
    [aux_sym_workdir_token1] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [208] = {
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
  [209] = {
    [sym__hc_interval] = STATE(211),
    [sym__hc_timeout] = STATE(211),
    [sym__hc_start_period] = STATE(211),
    [sym__hc_retries] = STATE(211),
    [sym__hc_options] = STATE(211),
    [sym__hc_command] = STATE(198),
    [aux_sym_healthcheck_repeat1] = STATE(211),
    [aux_sym_cmd_token1] = ACTIONS(653),
    [sym_hc_none] = ACTIONS(655),
    [anon_sym_DASH_DASHinterval] = ACTIONS(657),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(659),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(661),
    [anon_sym_DASH_DASHretires] = ACTIONS(663),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [210] = {
    [sym_repository] = STATE(237),
    [sym__repository_start] = STATE(216),
    [sym_image] = STATE(99),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(665),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [aux_sym_platform_token1] = ACTIONS(669),
    [aux_sym__repository_start_token1] = ACTIONS(667),
    [aux_sym__repository_start_token4] = ACTIONS(671),
    [aux_sym__repository_start_token6] = ACTIONS(671),
    [aux_sym__repository_start_token8] = ACTIONS(673),
    [aux_sym__repository_start_token10] = ACTIONS(673),
    [aux_sym__repository_start_token12] = ACTIONS(675),
    [aux_sym__repository_start_token14] = ACTIONS(675),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [211] = {
    [sym__hc_interval] = STATE(220),
    [sym__hc_timeout] = STATE(220),
    [sym__hc_start_period] = STATE(220),
    [sym__hc_retries] = STATE(220),
    [sym__hc_options] = STATE(220),
    [sym__hc_command] = STATE(180),
    [aux_sym_healthcheck_repeat1] = STATE(220),
    [aux_sym_cmd_token1] = ACTIONS(653),
    [anon_sym_DASH_DASHinterval] = ACTIONS(657),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(659),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(661),
    [anon_sym_DASH_DASHretires] = ACTIONS(663),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [212] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym_mapped_no_lhs] = STATE(203),
    [sym__port] = STATE(96),
    [sym_port] = STATE(96),
    [sym_port_range] = STATE(96),
    [sym__port_part] = STATE(62),
    [aux_sym_expose_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
    [sym_repository] = STATE(233),
    [sym__repository_start] = STATE(216),
    [sym_image] = STATE(102),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [aux_sym_platform_token1] = ACTIONS(669),
    [aux_sym__repository_start_token1] = ACTIONS(667),
    [aux_sym__repository_start_token4] = ACTIONS(671),
    [aux_sym__repository_start_token6] = ACTIONS(671),
    [aux_sym__repository_start_token8] = ACTIONS(673),
    [aux_sym__repository_start_token10] = ACTIONS(673),
    [aux_sym__repository_start_token12] = ACTIONS(675),
    [aux_sym__repository_start_token14] = ACTIONS(675),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [214] = {
    [sym_digest] = STATE(151),
    [anon_sym_sha256_COLON] = ACTIONS(679),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [215] = {
    [sym__repository_continued] = STATE(215),
    [aux_sym_repository_repeat1] = STATE(215),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [aux_sym_platform_token1] = ACTIONS(694),
    [aux_sym__repository_start_token1] = ACTIONS(691),
    [aux_sym__repository_start_token4] = ACTIONS(697),
    [aux_sym__repository_start_token6] = ACTIONS(697),
    [aux_sym__repository_start_token8] = ACTIONS(700),
    [aux_sym__repository_start_token10] = ACTIONS(700),
    [aux_sym__repository_start_token12] = ACTIONS(703),
    [aux_sym__repository_start_token14] = ACTIONS(703),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [216] = {
    [sym__repository_continued] = STATE(222),
    [aux_sym_repository_repeat1] = STATE(222),
    [anon_sym_DOLLAR] = ACTIONS(706),
    [aux_sym_platform_token1] = ACTIONS(709),
    [aux_sym__repository_start_token1] = ACTIONS(706),
    [aux_sym__repository_start_token4] = ACTIONS(712),
    [aux_sym__repository_start_token6] = ACTIONS(712),
    [aux_sym__repository_start_token8] = ACTIONS(715),
    [aux_sym__repository_start_token10] = ACTIONS(715),
    [aux_sym__repository_start_token12] = ACTIONS(718),
    [aux_sym__repository_start_token14] = ACTIONS(718),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [217] = {
    [sym_digest] = STATE(148),
    [anon_sym_sha256_COLON] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [sym_digest] = STATE(144),
    [anon_sym_sha256_COLON] = ACTIONS(723),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [219] = {
    [sym_digest] = STATE(158),
    [anon_sym_sha256_COLON] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [220] = {
    [sym__hc_interval] = STATE(220),
    [sym__hc_timeout] = STATE(220),
    [sym__hc_start_period] = STATE(220),
    [sym__hc_retries] = STATE(220),
    [sym__hc_options] = STATE(220),
    [aux_sym_healthcheck_repeat1] = STATE(220),
    [aux_sym_cmd_token1] = ACTIONS(727),
    [anon_sym_DASH_DASHinterval] = ACTIONS(729),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(732),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(735),
    [anon_sym_DASH_DASHretires] = ACTIONS(738),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [221] = {
    [sym_digest] = STATE(147),
    [anon_sym_sha256_COLON] = ACTIONS(741),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym__repository_continued] = STATE(215),
    [aux_sym_repository_repeat1] = STATE(215),
    [anon_sym_DOLLAR] = ACTIONS(743),
    [aux_sym_platform_token1] = ACTIONS(746),
    [aux_sym__repository_start_token1] = ACTIONS(743),
    [aux_sym__repository_start_token4] = ACTIONS(749),
    [aux_sym__repository_start_token6] = ACTIONS(749),
    [aux_sym__repository_start_token8] = ACTIONS(752),
    [aux_sym__repository_start_token10] = ACTIONS(752),
    [aux_sym__repository_start_token12] = ACTIONS(755),
    [aux_sym__repository_start_token14] = ACTIONS(755),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym_digest] = STATE(149),
    [anon_sym_sha256_COLON] = ACTIONS(758),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym_as_name] = STATE(202),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym_digest] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_tag] = STATE(122),
    [anon_sym_DOLLAR] = ACTIONS(770),
    [aux_sym_platform_token1] = ACTIONS(772),
    [aux_sym__repository_start_token1] = ACTIONS(770),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(774),
    [aux_sym__repository_start_token8] = ACTIONS(776),
    [aux_sym__repository_start_token10] = ACTIONS(776),
    [aux_sym__repository_start_token12] = ACTIONS(778),
    [aux_sym__repository_start_token14] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_tag] = STATE(136),
    [anon_sym_DOLLAR] = ACTIONS(770),
    [aux_sym_platform_token1] = ACTIONS(772),
    [aux_sym__repository_start_token1] = ACTIONS(770),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(774),
    [aux_sym__repository_start_token8] = ACTIONS(776),
    [aux_sym__repository_start_token10] = ACTIONS(776),
    [aux_sym__repository_start_token12] = ACTIONS(778),
    [aux_sym__repository_start_token14] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_as_name] = STATE(207),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym_digest] = STATE(149),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_digest] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_digest] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_as_name] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym_image] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(780),
    [aux_sym_platform_token1] = ACTIONS(782),
    [aux_sym__repository_start_token1] = ACTIONS(780),
    [aux_sym__repository_start_token4] = ACTIONS(784),
    [aux_sym__repository_start_token6] = ACTIONS(784),
    [aux_sym__repository_start_token8] = ACTIONS(786),
    [aux_sym__repository_start_token10] = ACTIONS(786),
    [aux_sym__repository_start_token12] = ACTIONS(788),
    [aux_sym__repository_start_token14] = ACTIONS(788),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_as_name] = STATE(186),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_as_name] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym_as_name] = STATE(205),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_image] = STATE(119),
    [anon_sym_DOLLAR] = ACTIONS(780),
    [aux_sym_platform_token1] = ACTIONS(782),
    [aux_sym__repository_start_token1] = ACTIONS(780),
    [aux_sym__repository_start_token4] = ACTIONS(784),
    [aux_sym__repository_start_token6] = ACTIONS(784),
    [aux_sym__repository_start_token8] = ACTIONS(786),
    [aux_sym__repository_start_token10] = ACTIONS(786),
    [aux_sym__repository_start_token12] = ACTIONS(788),
    [aux_sym__repository_start_token14] = ACTIONS(788),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_digest] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_tag] = STATE(128),
    [anon_sym_DOLLAR] = ACTIONS(770),
    [aux_sym_platform_token1] = ACTIONS(772),
    [aux_sym__repository_start_token1] = ACTIONS(770),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(774),
    [aux_sym__repository_start_token8] = ACTIONS(776),
    [aux_sym__repository_start_token10] = ACTIONS(776),
    [aux_sym__repository_start_token12] = ACTIONS(778),
    [aux_sym__repository_start_token14] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_digest] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [aux_sym_platform_token1] = ACTIONS(683),
    [aux_sym__repository_start_token1] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(685),
    [aux_sym__repository_start_token6] = ACTIONS(685),
    [aux_sym__repository_start_token8] = ACTIONS(687),
    [aux_sym__repository_start_token10] = ACTIONS(687),
    [aux_sym__repository_start_token12] = ACTIONS(689),
    [aux_sym__repository_start_token14] = ACTIONS(689),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_as_name] = STATE(197),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_as_name] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_as_name] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_platform_token1] = ACTIONS(762),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(764),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(768),
    [aux_sym__repository_start_token14] = ACTIONS(768),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_tag] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(770),
    [aux_sym_platform_token1] = ACTIONS(772),
    [aux_sym__repository_start_token1] = ACTIONS(770),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(774),
    [aux_sym__repository_start_token8] = ACTIONS(776),
    [aux_sym__repository_start_token10] = ACTIONS(776),
    [aux_sym__repository_start_token12] = ACTIONS(778),
    [aux_sym__repository_start_token14] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
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
  [246] = {
    [anon_sym_DOLLAR] = ACTIONS(790),
    [aux_sym_platform_token1] = ACTIONS(792),
    [aux_sym__repository_start_token1] = ACTIONS(790),
    [aux_sym__repository_start_token4] = ACTIONS(790),
    [aux_sym__repository_start_token6] = ACTIONS(790),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(790),
    [aux_sym__repository_start_token14] = ACTIONS(790),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_platform_token1] = ACTIONS(796),
    [aux_sym__repository_start_token1] = ACTIONS(794),
    [aux_sym__repository_start_token4] = ACTIONS(794),
    [aux_sym__repository_start_token6] = ACTIONS(794),
    [aux_sym__repository_start_token8] = ACTIONS(794),
    [aux_sym__repository_start_token10] = ACTIONS(794),
    [aux_sym__repository_start_token12] = ACTIONS(794),
    [aux_sym__repository_start_token14] = ACTIONS(794),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [anon_sym_DOLLAR] = ACTIONS(798),
    [aux_sym_platform_token1] = ACTIONS(800),
    [aux_sym__repository_start_token1] = ACTIONS(798),
    [aux_sym__repository_start_token4] = ACTIONS(798),
    [aux_sym__repository_start_token6] = ACTIONS(798),
    [aux_sym__repository_start_token8] = ACTIONS(798),
    [aux_sym__repository_start_token10] = ACTIONS(798),
    [aux_sym__repository_start_token12] = ACTIONS(798),
    [aux_sym__repository_start_token14] = ACTIONS(798),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [anon_sym_DOLLAR] = ACTIONS(802),
    [aux_sym_platform_token1] = ACTIONS(804),
    [aux_sym__repository_start_token1] = ACTIONS(802),
    [aux_sym__repository_start_token4] = ACTIONS(802),
    [aux_sym__repository_start_token6] = ACTIONS(802),
    [aux_sym__repository_start_token8] = ACTIONS(802),
    [aux_sym__repository_start_token10] = ACTIONS(802),
    [aux_sym__repository_start_token12] = ACTIONS(802),
    [aux_sym__repository_start_token14] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym__port_spec] = STATE(421),
    [sym_mapped_port] = STATE(421),
    [sym__port] = STATE(382),
    [sym_port] = STATE(383),
    [sym_port_range] = STATE(383),
    [sym__port_part] = STATE(361),
    [anon_sym_DQUOTE] = ACTIONS(806),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym__port_part_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [anon_sym_DOLLAR] = ACTIONS(812),
    [aux_sym_platform_token1] = ACTIONS(814),
    [aux_sym__repository_start_token1] = ACTIONS(812),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(812),
    [aux_sym__repository_start_token8] = ACTIONS(812),
    [aux_sym__repository_start_token10] = ACTIONS(812),
    [aux_sym__repository_start_token12] = ACTIONS(812),
    [aux_sym__repository_start_token14] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [anon_sym_DOLLAR] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(816),
    [aux_sym__repository_start_token4] = ACTIONS(816),
    [aux_sym__repository_start_token6] = ACTIONS(816),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [aux_sym__repository_start_token10] = ACTIONS(816),
    [aux_sym__repository_start_token12] = ACTIONS(816),
    [aux_sym__repository_start_token14] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [anon_sym_DOLLAR] = ACTIONS(820),
    [aux_sym_platform_token1] = ACTIONS(822),
    [aux_sym__repository_start_token1] = ACTIONS(820),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(820),
    [aux_sym__repository_start_token8] = ACTIONS(820),
    [aux_sym__repository_start_token10] = ACTIONS(820),
    [aux_sym__repository_start_token12] = ACTIONS(820),
    [aux_sym__repository_start_token14] = ACTIONS(820),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(824),
    [aux_sym__repository_start_token4] = ACTIONS(824),
    [aux_sym__repository_start_token6] = ACTIONS(824),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [aux_sym__repository_start_token10] = ACTIONS(824),
    [aux_sym__repository_start_token12] = ACTIONS(824),
    [aux_sym__repository_start_token14] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_platform_token1] = ACTIONS(830),
    [aux_sym__repository_start_token1] = ACTIONS(828),
    [aux_sym__repository_start_token4] = ACTIONS(828),
    [aux_sym__repository_start_token6] = ACTIONS(828),
    [aux_sym__repository_start_token8] = ACTIONS(828),
    [aux_sym__repository_start_token10] = ACTIONS(828),
    [aux_sym__repository_start_token12] = ACTIONS(828),
    [aux_sym__repository_start_token14] = ACTIONS(828),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_DOLLAR] = ACTIONS(832),
    [aux_sym_platform_token1] = ACTIONS(834),
    [aux_sym__repository_start_token1] = ACTIONS(832),
    [aux_sym__repository_start_token4] = ACTIONS(832),
    [aux_sym__repository_start_token6] = ACTIONS(832),
    [aux_sym__repository_start_token8] = ACTIONS(832),
    [aux_sym__repository_start_token10] = ACTIONS(832),
    [aux_sym__repository_start_token12] = ACTIONS(832),
    [aux_sym__repository_start_token14] = ACTIONS(832),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
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
  [258] = {
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym_platform_token1] = ACTIONS(838),
    [aux_sym__repository_start_token1] = ACTIONS(836),
    [aux_sym__repository_start_token4] = ACTIONS(836),
    [aux_sym__repository_start_token6] = ACTIONS(836),
    [aux_sym__repository_start_token8] = ACTIONS(836),
    [aux_sym__repository_start_token10] = ACTIONS(836),
    [aux_sym__repository_start_token12] = ACTIONS(836),
    [aux_sym__repository_start_token14] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [anon_sym_DOLLAR] = ACTIONS(840),
    [aux_sym_platform_token1] = ACTIONS(842),
    [aux_sym__repository_start_token1] = ACTIONS(840),
    [aux_sym__repository_start_token4] = ACTIONS(840),
    [aux_sym__repository_start_token6] = ACTIONS(840),
    [aux_sym__repository_start_token8] = ACTIONS(840),
    [aux_sym__repository_start_token10] = ACTIONS(840),
    [aux_sym__repository_start_token12] = ACTIONS(840),
    [aux_sym__repository_start_token14] = ACTIONS(840),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
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
  [261] = {
    [sym__port] = STATE(121),
    [sym_port] = STATE(121),
    [sym_port_range] = STATE(121),
    [sym__port_part] = STATE(62),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [sym__port] = STATE(185),
    [sym_port] = STATE(185),
    [sym_port_range] = STATE(185),
    [sym__port_part] = STATE(62),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [aux_sym__json_string] = STATE(329),
    [aux_sym_json_array_repeat1] = STATE(368),
    [anon_sym_DQUOTE] = ACTIONS(846),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(850),
    [aux_sym__json_string_token1] = ACTIONS(852),
    [sym__json_escape_sequence] = ACTIONS(854),
  },
  [264] = {
    [sym__port] = STATE(423),
    [sym_port] = STATE(423),
    [sym_port_range] = STATE(423),
    [sym__port_part] = STATE(361),
    [anon_sym_DQUOTE] = ACTIONS(806),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym__port_part_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [sym_hc_command] = STATE(181),
    [aux_sym__anything] = STATE(135),
    [sym_json_array] = STATE(179),
    [sym__anything_or_json_array] = STATE(179),
    [aux_sym__anything_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [266] = {
    [aux_sym__repository_start_repeat3] = STATE(266),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token8] = ACTIONS(858),
    [aux_sym__repository_start_token11] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [aux_sym__repository_start_repeat4] = STATE(306),
    [anon_sym_SLASH] = ACTIONS(861),
    [aux_sym__repository_start_token3] = ACTIONS(863),
    [aux_sym__repository_start_token12] = ACTIONS(865),
    [aux_sym__repository_start_token15] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [sym_template_expr_less_than_equals] = STATE(492),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [sym_template_expr_less_than_equals] = STATE(486),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [sym_template_expr_less_than_equals] = STATE(480),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [sym_template_expr_less_than_equals] = STATE(432),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [sym_port] = STATE(474),
    [sym_port_range] = STATE(474),
    [sym__port_part] = STATE(361),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym__port_part_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [sym_variable_default_value] = STATE(500),
    [sym_variable_this_or_null] = STATE(500),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [sym_variable_default_value] = STATE(498),
    [sym_variable_this_or_null] = STATE(498),
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym_variable_default_value] = STATE(496),
    [sym_variable_this_or_null] = STATE(496),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [sym_variable_default_value] = STATE(494),
    [sym_variable_this_or_null] = STATE(494),
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [sym_template_expr_less_than_equals] = STATE(447),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [aux_sym__repository_start_repeat1] = STATE(286),
    [anon_sym_DOLLAR] = ACTIONS(881),
    [anon_sym_SLASH] = ACTIONS(883),
    [aux_sym__repository_start_token2] = ACTIONS(881),
    [aux_sym__repository_start_token3] = ACTIONS(885),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [279] = {
    [aux_sym_cmd_token1] = ACTIONS(887),
    [anon_sym_DASH_DASHinterval] = ACTIONS(887),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(887),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(887),
    [anon_sym_DASH_DASHretires] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [sym_variable_default_value] = STATE(489),
    [sym_variable_this_or_null] = STATE(489),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [aux_sym_cmd_token1] = ACTIONS(891),
    [anon_sym_DASH_DASHinterval] = ACTIONS(891),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(891),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(891),
    [anon_sym_DASH_DASHretires] = ACTIONS(891),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [sym_variable_default_value] = STATE(483),
    [sym_variable_this_or_null] = STATE(483),
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(283),
    [aux_sym__repository_start_token13] = ACTIONS(895),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(897),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(897),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(897),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [sym_template_expr_less_than_equals] = STATE(466),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [sym_variable_default_value] = STATE(477),
    [sym_variable_this_or_null] = STATE(477),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [aux_sym__repository_start_repeat1] = STATE(293),
    [anon_sym_DOLLAR] = ACTIONS(881),
    [anon_sym_SLASH] = ACTIONS(861),
    [aux_sym__repository_start_token2] = ACTIONS(881),
    [aux_sym__repository_start_token3] = ACTIONS(863),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [287] = {
    [aux_sym__repository_start_repeat2] = STATE(308),
    [anon_sym_SLASH] = ACTIONS(861),
    [aux_sym__repository_start_token3] = ACTIONS(863),
    [aux_sym__repository_start_token4] = ACTIONS(902),
    [aux_sym__repository_start_token7] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [288] = {
    [aux_sym__repository_start_repeat3] = STATE(307),
    [anon_sym_SLASH] = ACTIONS(861),
    [aux_sym__repository_start_token3] = ACTIONS(863),
    [aux_sym__repository_start_token8] = ACTIONS(904),
    [aux_sym__repository_start_token11] = ACTIONS(904),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [289] = {
    [aux_sym__anything] = STATE(135),
    [sym_json_array] = STATE(166),
    [sym__anything_or_json_array] = STATE(166),
    [aux_sym__anything_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [290] = {
    [sym_port_protocol] = STATE(369),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(283),
    [aux_sym__repository_start_token13] = ACTIONS(908),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(910),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(910),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(910),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [sym_template_expr_less_than_equals] = STATE(488),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym__repository_start_repeat1] = STATE(293),
    [anon_sym_DOLLAR] = ACTIONS(912),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(912),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [aux_sym__repository_start_repeat2] = STATE(294),
    [anon_sym_SLASH] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(146),
    [aux_sym__repository_start_token4] = ACTIONS(915),
    [aux_sym__repository_start_token7] = ACTIONS(915),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [aux_sym_cmd_token1] = ACTIONS(918),
    [anon_sym_DASH_DASHinterval] = ACTIONS(918),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(918),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(918),
    [anon_sym_DASH_DASHretires] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [aux_sym_cmd_token1] = ACTIONS(920),
    [anon_sym_DASH_DASHinterval] = ACTIONS(920),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(920),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(920),
    [anon_sym_DASH_DASHretires] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_user_name] = STATE(160),
    [sym_user_id] = STATE(159),
    [anon_sym_DOLLAR] = ACTIONS(922),
    [aux_sym__port_part_token1] = ACTIONS(924),
    [aux_sym_user_name_token1] = ACTIONS(926),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [sym_port_protocol] = STATE(360),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [sym_variable_default_value] = STATE(427),
    [sym_variable_this_or_null] = STATE(427),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [sym_template_expr_less_than_equals] = STATE(505),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [aux_sym_cmd_token1] = ACTIONS(930),
    [anon_sym_DASH_DASHinterval] = ACTIONS(930),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(930),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(930),
    [anon_sym_DASH_DASHretires] = ACTIONS(930),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [sym_template_expr_less_than_equals] = STATE(472),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [aux_sym_cmd_token1] = ACTIONS(932),
    [anon_sym_DASH_DASHinterval] = ACTIONS(932),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(932),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(932),
    [anon_sym_DASH_DASHretires] = ACTIONS(932),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [aux_sym_cmd_token1] = ACTIONS(934),
    [anon_sym_DASH_DASHinterval] = ACTIONS(934),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(934),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(934),
    [anon_sym_DASH_DASHretires] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [aux_sym__anything] = STATE(135),
    [sym_json_array] = STATE(200),
    [sym__anything_or_json_array] = STATE(200),
    [aux_sym__anything_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [306] = {
    [aux_sym__repository_start_repeat4] = STATE(311),
    [anon_sym_SLASH] = ACTIONS(936),
    [aux_sym__repository_start_token3] = ACTIONS(938),
    [aux_sym__repository_start_token12] = ACTIONS(865),
    [aux_sym__repository_start_token15] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym__repository_start_repeat3] = STATE(266),
    [anon_sym_SLASH] = ACTIONS(936),
    [aux_sym__repository_start_token3] = ACTIONS(938),
    [aux_sym__repository_start_token8] = ACTIONS(904),
    [aux_sym__repository_start_token11] = ACTIONS(904),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [aux_sym__repository_start_repeat2] = STATE(294),
    [anon_sym_SLASH] = ACTIONS(936),
    [aux_sym__repository_start_token3] = ACTIONS(938),
    [aux_sym__repository_start_token4] = ACTIONS(902),
    [aux_sym__repository_start_token7] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym_port] = STATE(462),
    [sym_port_range] = STATE(462),
    [sym__port_part] = STATE(361),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym__port_part_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [aux_sym_cmd_token1] = ACTIONS(940),
    [anon_sym_DASH_DASHinterval] = ACTIONS(940),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(940),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(940),
    [anon_sym_DASH_DASHretires] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [aux_sym__repository_start_repeat4] = STATE(311),
    [anon_sym_SLASH] = ACTIONS(158),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(942),
    [aux_sym__repository_start_token15] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [sym_template_expr_less_than_equals] = STATE(418),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(291),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [aux_sym__anything] = STATE(135),
    [sym_json_array] = STATE(194),
    [sym__anything_or_json_array] = STATE(194),
    [aux_sym__anything_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [314] = {
    [aux_sym__json_string] = STATE(326),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(947),
    [sym__json_escape_sequence] = ACTIONS(947),
  },
  [315] = {
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [aux_sym__labels] = STATE(81),
    [sym_label_pair] = STATE(81),
    [sym_label_key] = STATE(414),
    [aux_sym_env_key_token1] = ACTIONS(335),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token4] = ACTIONS(187),
    [aux_sym__repository_start_token7] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [aux_sym__env_pairs] = STATE(85),
    [sym_env_pair] = STATE(85),
    [sym_env_key] = STATE(105),
    [aux_sym_env_key_token1] = ACTIONS(349),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [sym_label_value] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(949),
    [aux_sym_env_value_token1] = ACTIONS(951),
    [aux_sym_label_value_token1] = ACTIONS(951),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym__json_string] = STATE(314),
    [anon_sym_DQUOTE] = ACTIONS(953),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(955),
    [sym__json_escape_sequence] = ACTIONS(955),
  },
  [321] = {
    [aux_sym__paths] = STATE(133),
    [sym_json_array] = STATE(206),
    [sym_path] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [322] = {
    [aux_sym__paths] = STATE(126),
    [sym_json_array] = STATE(190),
    [sym_path] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [323] = {
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token12] = ACTIONS(191),
    [aux_sym__repository_start_token15] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [aux_sym__json_string] = STATE(326),
    [anon_sym_DQUOTE] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(961),
    [sym__json_escape_sequence] = ACTIONS(961),
  },
  [327] = {
    [sym_env_value] = STATE(156),
    [anon_sym_DQUOTE] = ACTIONS(964),
    [aux_sym_env_value_token1] = ACTIONS(966),
    [aux_sym_env_value_token2] = ACTIONS(966),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [aux_sym__json_string] = STATE(326),
    [anon_sym_DQUOTE] = ACTIONS(968),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(947),
    [sym__json_escape_sequence] = ACTIONS(947),
  },
  [330] = {
    [aux_sym__paths] = STATE(137),
    [sym_json_array] = STATE(199),
    [sym_path] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [331] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym_env_value_repeat1] = STATE(370),
    [anon_sym_DQUOTE] = ACTIONS(970),
    [aux_sym_env_value_token3] = ACTIONS(972),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [336] = {
    [sym_docker_variable] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(974),
    [sym__docker_variable] = ACTIONS(976),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [sym_docker_variable] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym__docker_variable] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_docker_variable] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(982),
    [sym__docker_variable] = ACTIONS(984),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [sym_docker_variable] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(982),
    [sym__docker_variable] = ACTIONS(984),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [sym_docker_variable] = STATE(107),
    [anon_sym_LBRACE] = ACTIONS(986),
    [sym__docker_variable] = ACTIONS(988),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [341] = {
    [sym_docker_variable] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(990),
    [sym__docker_variable] = ACTIONS(992),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [sym_docker_variable] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym__docker_variable] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [sym_docker_variable] = STATE(334),
    [anon_sym_LBRACE] = ACTIONS(994),
    [sym__docker_variable] = ACTIONS(996),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [sym_docker_variable] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(974),
    [sym__docker_variable] = ACTIONS(976),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [sym_docker_variable] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(990),
    [sym__docker_variable] = ACTIONS(992),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [sym_docker_variable] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(982),
    [sym__docker_variable] = ACTIONS(984),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [347] = {
    [aux_sym_json_array_repeat1] = STATE(367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(998),
  },
  [348] = {
    [anon_sym_DOLLAR] = ACTIONS(1000),
    [aux_sym_workdir_token2] = ACTIONS(1002),
    [aux_sym_workdir_token3] = ACTIONS(1000),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [sym_signal_name] = STATE(192),
    [sym_signal_num] = ACTIONS(1004),
    [aux_sym_signal_name_token1] = ACTIONS(1006),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [anon_sym_DOLLAR] = ACTIONS(1008),
    [aux_sym_port_protocol_token1] = ACTIONS(1010),
    [aux_sym_port_protocol_token2] = ACTIONS(1010),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_docker_variable] = STATE(258),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [sym__docker_variable] = ACTIONS(1014),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [353] = {
    [sym__port_part] = STATE(77),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [aux_sym_env_value_repeat1] = STATE(370),
    [anon_sym_DQUOTE] = ACTIONS(1016),
    [aux_sym_env_value_token3] = ACTIONS(972),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [355] = {
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [aux_sym_json_array_repeat1] = STATE(367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(1018),
  },
  [357] = {
    [anon_sym_DOLLAR] = ACTIONS(1020),
    [aux_sym_port_protocol_token1] = ACTIONS(1022),
    [aux_sym_port_protocol_token2] = ACTIONS(1022),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [sym_docker_variable] = STATE(349),
    [anon_sym_LBRACE] = ACTIONS(1024),
    [sym__docker_variable] = ACTIONS(1026),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [359] = {
    [sym_docker_variable] = STATE(298),
    [anon_sym_LBRACE] = ACTIONS(1024),
    [sym__docker_variable] = ACTIONS(1026),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(299),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(1028),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [sym_platform] = STATE(213),
    [anon_sym_DOLLAR] = ACTIONS(1030),
    [aux_sym_platform_token1] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [363] = {
    [aux_sym_json_array_repeat1] = STATE(356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(998),
  },
  [364] = {
    [sym_docker_variable] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(974),
    [sym__docker_variable] = ACTIONS(976),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [sym_docker_variable] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(994),
    [sym__docker_variable] = ACTIONS(996),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [sym__port_part] = STATE(384),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym__port_part_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [aux_sym_json_array_repeat1] = STATE(367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1034),
    [anon_sym_RBRACK] = ACTIONS(1037),
  },
  [368] = {
    [aux_sym_json_array_repeat1] = STATE(367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(1039),
  },
  [369] = {
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [aux_sym_env_value_repeat1] = STATE(370),
    [anon_sym_DQUOTE] = ACTIONS(1041),
    [aux_sym_env_value_token3] = ACTIONS(1043),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [sym_docker_variable] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(986),
    [sym__docker_variable] = ACTIONS(988),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [aux_sym_json_array_repeat1] = STATE(347),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(1039),
  },
  [373] = {
    [sym_docker_variable] = STATE(59),
    [anon_sym_LBRACE] = ACTIONS(982),
    [sym__docker_variable] = ACTIONS(984),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [sym__json_value] = STATE(381),
    [anon_sym_DQUOTE] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1048),
    [anon_sym_RBRACK] = ACTIONS(1048),
  },
  [376] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1050),
    [anon_sym_RBRACK] = ACTIONS(1050),
  },
  [377] = {
    [aux_sym_env_value_repeat1] = STATE(354),
    [aux_sym_env_value_token3] = ACTIONS(1052),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [378] = {
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [sym_arg_default] = STATE(169),
    [aux_sym_workdir_token2] = ACTIONS(1054),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [aux_sym__anything] = STATE(103),
    [aux_sym__anything_token1] = ACTIONS(1056),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1037),
    [anon_sym_RBRACK] = ACTIONS(1037),
  },
  [382] = {
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_DQUOTE] = ACTIONS(1060),
    [anon_sym_COLON] = ACTIONS(1063),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [sym_json_array] = STATE(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(856),
  },
  [386] = {
    [aux_sym_env_value_repeat1] = STATE(335),
    [aux_sym_env_value_token3] = ACTIONS(1065),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [sym_user_group_id] = STATE(175),
    [aux_sym__port_part_token1] = ACTIONS(1067),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [aux_sym__anything] = STATE(125),
    [aux_sym__anything_token1] = ACTIONS(1069),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [sym_user_group] = STATE(175),
    [aux_sym_user_name_token1] = ACTIONS(1071),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [sym_hc_retries] = STATE(303),
    [aux_sym__port_part_token1] = ACTIONS(1073),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [sym_hc_start_period] = STATE(301),
    [aux_sym_hc_interval_token1] = ACTIONS(1075),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_hc_timeout] = STATE(310),
    [aux_sym_hc_interval_token1] = ACTIONS(1077),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_hc_interval] = STATE(279),
    [aux_sym_hc_interval_token1] = ACTIONS(1079),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [aux_sym_from_token2] = ACTIONS(1081),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [sym_template_expr_percent_signs] = ACTIONS(1083),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [396] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1085),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [sym_template_expr_curly_braces] = ACTIONS(1087),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [398] = {
    [aux_sym_from_token2] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [aux_sym_from_token2] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1093),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym_template_expr_percent_signs] = ACTIONS(1095),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [402] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1097),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1099),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [anon_sym_EQ] = ACTIONS(1101),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym_template_expr_percent_signs] = ACTIONS(1103),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [406] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1105),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [sym_template_expr_curly_braces] = ACTIONS(1107),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [408] = {
    [anon_sym_EQ] = ACTIONS(1109),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [aux_sym_from_token2] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1113),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [anon_sym_EQ] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_EQ] = ACTIONS(1117),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [aux_sym_label_pair_token1] = ACTIONS(1119),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [aux_sym_label_pair_token1] = ACTIONS(1121),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [aux_sym_signal_name_token2] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1125),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym_from_token2] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [aux_sym__repository_start_token13] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [aux_sym__repository_start_token9] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [aux_sym__repository_start_token5] = ACTIONS(1133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [anon_sym_DQUOTE] = ACTIONS(1135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym__docker_variable] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [423] = {
    [anon_sym_DQUOTE] = ACTIONS(458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [anon_sym_SLASH] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1141),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [426] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1143),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [427] = {
    [anon_sym_RBRACE] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [aux_sym__repository_start_token5] = ACTIONS(1147),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [aux_sym_from_token2] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1151),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1153),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [aux_sym__repository_start_token13] = ACTIONS(1155),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [aux_sym__repository_start_token9] = ACTIONS(1157),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym_template_expr_curly_braces] = ACTIONS(1159),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [435] = {
    [sym_arg_name] = ACTIONS(1161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym_template_expr_percent_signs] = ACTIONS(1163),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [437] = {
    [ts_builtin_sym_end] = ACTIONS(1165),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1167),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1169),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym_template_expr_curly_braces] = ACTIONS(1171),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [441] = {
    [sym_template_expr_percent_signs] = ACTIONS(1173),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [442] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1175),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_SLASH] = ACTIONS(1177),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym_template_expr_curly_braces] = ACTIONS(1179),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [445] = {
    [sym_template_expr_percent_signs] = ACTIONS(1181),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [446] = {
    [anon_sym_SLASH] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym__repository_start_token13] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [aux_sym__repository_start_token9] = ACTIONS(1185),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [aux_sym__repository_start_token5] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1189),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1191),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1193),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [aux_sym_from_token2] = ACTIONS(1195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1201),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1205),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1207),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [anon_sym_RBRACE] = ACTIONS(1209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(1211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1215),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1217),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1219),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [aux_sym__repository_start_token13] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [aux_sym__repository_start_token9] = ACTIONS(1223),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [aux_sym__repository_start_token5] = ACTIONS(1225),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1229),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1231),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [aux_sym__repository_start_token13] = ACTIONS(1233),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [aux_sym__repository_start_token9] = ACTIONS(1235),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_DQUOTE] = ACTIONS(1237),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym__repository_start_token5] = ACTIONS(1239),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [anon_sym_SLASH] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [anon_sym_RBRACE] = ACTIONS(1241),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym__repository_start_token5] = ACTIONS(1243),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym__repository_start_token9] = ACTIONS(1245),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym__repository_start_token13] = ACTIONS(1247),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [aux_sym__repository_start_token5] = ACTIONS(1251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_RBRACE] = ACTIONS(1253),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [aux_sym__repository_start_token5] = ACTIONS(1255),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [aux_sym__repository_start_token9] = ACTIONS(1257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [aux_sym__repository_start_token13] = ACTIONS(1259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [aux_sym__repository_start_token9] = ACTIONS(1261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [aux_sym__repository_start_token13] = ACTIONS(1263),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(1265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [aux_sym__repository_start_token5] = ACTIONS(1267),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [aux_sym__repository_start_token9] = ACTIONS(1269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [aux_sym__repository_start_token13] = ACTIONS(1271),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [aux_sym_from_token2] = ACTIONS(1273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_RBRACE] = ACTIONS(1275),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym_template_expr_percent_signs] = ACTIONS(1277),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(1279),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [aux_sym__repository_start_token5] = ACTIONS(1281),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(1283),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [sym_template_expr_curly_braces] = ACTIONS(1285),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [500] = {
    [anon_sym_RBRACE] = ACTIONS(1287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [aux_sym__repository_start_token9] = ACTIONS(1289),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [sym__docker_variable] = ACTIONS(1291),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [503] = {
    [sym_template_expr_curly_braces] = ACTIONS(1293),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [504] = {
    [sym_template_expr_percent_signs] = ACTIONS(1295),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [505] = {
    [aux_sym__repository_start_token13] = ACTIONS(1297),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [sym__docker_variable] = ACTIONS(1299),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [507] = {
    [sym_template_expr_curly_braces] = ACTIONS(1301),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [508] = {
    [sym_template_expr_percent_signs] = ACTIONS(1303),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [509] = {
    [aux_sym_from_token2] = ACTIONS(1305),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [sym__docker_variable] = ACTIONS(1307),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [511] = {
    [sym_template_expr_curly_braces] = ACTIONS(1309),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [512] = {
    [sym_template_expr_percent_signs] = ACTIONS(1311),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [513] = {
    [sym_template_expr_curly_braces] = ACTIONS(1313),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [514] = {
    [sym__docker_variable] = ACTIONS(1315),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [515] = {
    [sym__docker_variable] = ACTIONS(1317),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [516] = {
    [sym__docker_variable] = ACTIONS(1319),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [517] = {
    [sym__docker_variable] = ACTIONS(1321),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(430),
  [11] = {.count = 1, .reusable = true}, SHIFT(471),
  [13] = {.count = 1, .reusable = true}, SHIFT(470),
  [15] = {.count = 1, .reusable = true}, SHIFT(469),
  [17] = {.count = 1, .reusable = true}, SHIFT(465),
  [19] = {.count = 1, .reusable = true}, SHIFT(464),
  [21] = {.count = 1, .reusable = true}, SHIFT(463),
  [23] = {.count = 1, .reusable = true}, SHIFT(459),
  [25] = {.count = 1, .reusable = true}, SHIFT(458),
  [27] = {.count = 1, .reusable = true}, SHIFT(457),
  [29] = {.count = 1, .reusable = true}, SHIFT(456),
  [31] = {.count = 1, .reusable = true}, SHIFT(455),
  [33] = {.count = 1, .reusable = true}, SHIFT(454),
  [35] = {.count = 1, .reusable = true}, SHIFT(452),
  [37] = {.count = 1, .reusable = true}, SHIFT(451),
  [39] = {.count = 1, .reusable = true}, SHIFT(442),
  [41] = {.count = 1, .reusable = true}, SHIFT(439),
  [43] = {.count = 1, .reusable = true}, SHIFT(438),
  [45] = {.count = 1, .reusable = true}, SHIFT(183),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(430),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(471),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(470),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(469),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(465),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(464),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(463),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(459),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(458),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(457),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(456),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(455),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(454),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(452),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(451),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(442),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(439),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(438),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(183),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(250),
  [112] = {.count = 1, .reusable = true}, SHIFT(344),
  [114] = {.count = 1, .reusable = true}, SHIFT(37),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(250),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(344),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(37),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(346),
  [133] = {.count = 1, .reusable = true}, SHIFT(252),
  [135] = {.count = 1, .reusable = false}, SHIFT(60),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(346),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(499),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(495),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [160] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(277),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(251),
  [171] = {.count = 1, .reusable = false}, SHIFT(67),
  [173] = {.count = 1, .reusable = true}, SHIFT(277),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [179] = {.count = 1, .reusable = true}, SHIFT(259),
  [181] = {.count = 1, .reusable = false}, SHIFT(69),
  [183] = {.count = 1, .reusable = true}, SHIFT(495),
  [185] = {.count = 1, .reusable = true}, SHIFT(499),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(357),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(504),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(503),
  [221] = {.count = 1, .reusable = true}, SHIFT(345),
  [223] = {.count = 1, .reusable = false}, SHIFT(110),
  [225] = {.count = 1, .reusable = true}, SHIFT(270),
  [227] = {.count = 1, .reusable = false}, SHIFT(120),
  [229] = {.count = 1, .reusable = true}, SHIFT(503),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(270),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(345),
  [237] = {.count = 1, .reusable = false}, SHIFT(108),
  [239] = {.count = 1, .reusable = true}, SHIFT(504),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [247] = {.count = 1, .reusable = false}, SHIFT(138),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [253] = {.count = 1, .reusable = false}, SHIFT(123),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [259] = {.count = 1, .reusable = false}, SHIFT(139),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [267] = {.count = 1, .reusable = false}, SHIFT(142),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [273] = {.count = 1, .reusable = false}, SHIFT(145),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [277] = {.count = 1, .reusable = true}, SHIFT(353),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(246),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [289] = {.count = 1, .reusable = false}, SHIFT(163),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [295] = {.count = 1, .reusable = true}, SHIFT(247),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [305] = {.count = 1, .reusable = false}, SHIFT(340),
  [307] = {.count = 1, .reusable = true}, SHIFT(340),
  [309] = {.count = 1, .reusable = false}, SHIFT(177),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [315] = {.count = 1, .reusable = false}, SHIFT(208),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [323] = {.count = 1, .reusable = false}, SHIFT(201),
  [325] = {.count = 1, .reusable = true}, SHIFT(268),
  [327] = {.count = 1, .reusable = true}, SHIFT(512),
  [329] = {.count = 1, .reusable = true}, SHIFT(511),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [335] = {.count = 1, .reusable = true}, SHIFT(413),
  [337] = {.count = 1, .reusable = true}, SHIFT(342),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(342),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(511),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [349] = {.count = 1, .reusable = true}, SHIFT(97),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [355] = {.count = 1, .reusable = false}, SHIFT(204),
  [357] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs, 2),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym__env_pairs, 2), SHIFT_REPEAT(97),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [366] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(413),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(512),
  [376] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [378] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(340),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(340),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [390] = {.count = 1, .reusable = false}, SHIFT(191),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(268),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [397] = {.count = 1, .reusable = true}, SHIFT(261),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [405] = {.count = 1, .reusable = true}, SHIFT(227),
  [407] = {.count = 1, .reusable = true}, SHIFT(221),
  [409] = {.count = 1, .reusable = false}, SHIFT(394),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [413] = {.count = 1, .reusable = true}, SHIFT(239),
  [415] = {.count = 1, .reusable = true}, SHIFT(214),
  [417] = {.count = 1, .reusable = false}, SHIFT(509),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [423] = {.count = 1, .reusable = false}, SHIFT(134),
  [425] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 1),
  [431] = {.count = 1, .reusable = true}, SHIFT(327),
  [433] = {.count = 1, .reusable = false}, SHIFT(380),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [437] = {.count = 1, .reusable = true}, SHIFT(244),
  [439] = {.count = 1, .reusable = true}, SHIFT(219),
  [441] = {.count = 1, .reusable = false}, SHIFT(453),
  [443] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [447] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(134),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [452] = {.count = 1, .reusable = true}, SHIFT(226),
  [454] = {.count = 1, .reusable = true}, SHIFT(217),
  [456] = {.count = 1, .reusable = false}, SHIFT(493),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(153),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [471] = {.count = 1, .reusable = false}, SHIFT(153),
  [473] = {.count = 1, .reusable = false}, SHIFT(171),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [479] = {.count = 1, .reusable = false}, SHIFT(129),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [483] = {.count = 1, .reusable = true}, SHIFT(218),
  [485] = {.count = 1, .reusable = false}, SHIFT(417),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [489] = {.count = 1, .reusable = true}, SHIFT(223),
  [491] = {.count = 1, .reusable = false}, SHIFT(429),
  [493] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [495] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [497] = {.count = 1, .reusable = false}, SHIFT(150),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [501] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(129),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(141),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [517] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [519] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [525] = {.count = 1, .reusable = false}, SHIFT(141),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [533] = {.count = 1, .reusable = true}, SHIFT(379),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [541] = {.count = 1, .reusable = false}, SHIFT(398),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [549] = {.count = 1, .reusable = false}, SHIFT(409),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 3),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 3),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [569] = {.count = 1, .reusable = false}, SHIFT(399),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [573] = {.count = 1, .reusable = true}, SHIFT(387),
  [575] = {.count = 1, .reusable = true}, SHIFT(389),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 4),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [625] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [653] = {.count = 1, .reusable = true}, SHIFT(402),
  [655] = {.count = 1, .reusable = true}, SHIFT(198),
  [657] = {.count = 1, .reusable = true}, SHIFT(404),
  [659] = {.count = 1, .reusable = true}, SHIFT(408),
  [661] = {.count = 1, .reusable = true}, SHIFT(411),
  [663] = {.count = 1, .reusable = true}, SHIFT(412),
  [665] = {.count = 1, .reusable = true}, SHIFT(362),
  [667] = {.count = 1, .reusable = true}, SHIFT(339),
  [669] = {.count = 1, .reusable = false}, SHIFT(66),
  [671] = {.count = 1, .reusable = true}, SHIFT(397),
  [673] = {.count = 1, .reusable = true}, SHIFT(395),
  [675] = {.count = 1, .reusable = true}, SHIFT(271),
  [677] = {.count = 1, .reusable = true}, SHIFT(262),
  [679] = {.count = 1, .reusable = true}, SHIFT(230),
  [681] = {.count = 1, .reusable = true}, SHIFT(373),
  [683] = {.count = 1, .reusable = false}, SHIFT(164),
  [685] = {.count = 1, .reusable = true}, SHIFT(407),
  [687] = {.count = 1, .reusable = true}, SHIFT(405),
  [689] = {.count = 1, .reusable = true}, SHIFT(284),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(365),
  [694] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(443),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(444),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(445),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(300),
  [706] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(365),
  [709] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(443),
  [712] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(444),
  [715] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(445),
  [718] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(300),
  [721] = {.count = 1, .reusable = true}, SHIFT(231),
  [723] = {.count = 1, .reusable = true}, SHIFT(238),
  [725] = {.count = 1, .reusable = true}, SHIFT(229),
  [727] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(404),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(408),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(411),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(412),
  [741] = {.count = 1, .reusable = true}, SHIFT(225),
  [743] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(365),
  [746] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(443),
  [749] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(444),
  [752] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(445),
  [755] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(300),
  [758] = {.count = 1, .reusable = true}, SHIFT(240),
  [760] = {.count = 1, .reusable = true}, SHIFT(337),
  [762] = {.count = 1, .reusable = false}, SHIFT(174),
  [764] = {.count = 1, .reusable = true}, SHIFT(440),
  [766] = {.count = 1, .reusable = true}, SHIFT(436),
  [768] = {.count = 1, .reusable = true}, SHIFT(312),
  [770] = {.count = 1, .reusable = true}, SHIFT(338),
  [772] = {.count = 1, .reusable = false}, SHIFT(132),
  [774] = {.count = 1, .reusable = true}, SHIFT(513),
  [776] = {.count = 1, .reusable = true}, SHIFT(401),
  [778] = {.count = 1, .reusable = true}, SHIFT(302),
  [780] = {.count = 1, .reusable = true}, SHIFT(341),
  [782] = {.count = 1, .reusable = false}, SHIFT(98),
  [784] = {.count = 1, .reusable = true}, SHIFT(434),
  [786] = {.count = 1, .reusable = true}, SHIFT(441),
  [788] = {.count = 1, .reusable = true}, SHIFT(292),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [792] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [796] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [800] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [806] = {.count = 1, .reusable = true}, SHIFT(309),
  [808] = {.count = 1, .reusable = true}, SHIFT(359),
  [810] = {.count = 1, .reusable = true}, SHIFT(290),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [814] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [818] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [822] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [834] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [844] = {.count = 1, .reusable = true}, SHIFT(272),
  [846] = {.count = 1, .reusable = true}, SHIFT(372),
  [848] = {.count = 1, .reusable = true}, SHIFT(374),
  [850] = {.count = 1, .reusable = true}, SHIFT(187),
  [852] = {.count = 1, .reusable = false}, SHIFT(329),
  [854] = {.count = 1, .reusable = true}, SHIFT(329),
  [856] = {.count = 1, .reusable = true}, SHIFT(263),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(508),
  [861] = {.count = 1, .reusable = true}, SHIFT(253),
  [863] = {.count = 1, .reusable = false}, SHIFT(446),
  [865] = {.count = 1, .reusable = true}, SHIFT(269),
  [867] = {.count = 1, .reusable = true}, SHIFT(291),
  [869] = {.count = 1, .reusable = true}, SHIFT(113),
  [871] = {.count = 1, .reusable = true}, SHIFT(425),
  [873] = {.count = 1, .reusable = true}, SHIFT(426),
  [875] = {.count = 1, .reusable = true}, SHIFT(332),
  [877] = {.count = 1, .reusable = true}, SHIFT(49),
  [879] = {.count = 1, .reusable = true}, SHIFT(257),
  [881] = {.count = 1, .reusable = true}, SHIFT(343),
  [883] = {.count = 1, .reusable = true}, SHIFT(254),
  [885] = {.count = 1, .reusable = false}, SHIFT(476),
  [887] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [889] = {.count = 1, .reusable = true}, SHIFT(325),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [893] = {.count = 1, .reusable = true}, SHIFT(116),
  [895] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(283),
  [900] = {.count = 1, .reusable = true}, SHIFT(23),
  [902] = {.count = 1, .reusable = true}, SHIFT(507),
  [904] = {.count = 1, .reusable = true}, SHIFT(508),
  [906] = {.count = 1, .reusable = true}, SHIFT(351),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [910] = {.count = 1, .reusable = true}, SHIFT(283),
  [912] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(343),
  [915] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(507),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [922] = {.count = 1, .reusable = true}, SHIFT(336),
  [924] = {.count = 1, .reusable = true}, SHIFT(162),
  [926] = {.count = 1, .reusable = true}, SHIFT(161),
  [928] = {.count = 1, .reusable = true}, SHIFT(45),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [936] = {.count = 1, .reusable = true}, SHIFT(248),
  [938] = {.count = 1, .reusable = false}, SHIFT(424),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [942] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(269),
  [945] = {.count = 1, .reusable = true}, SHIFT(375),
  [947] = {.count = 1, .reusable = true}, SHIFT(326),
  [949] = {.count = 1, .reusable = false}, SHIFT(386),
  [951] = {.count = 1, .reusable = true}, SHIFT(146),
  [953] = {.count = 1, .reusable = true}, SHIFT(376),
  [955] = {.count = 1, .reusable = true}, SHIFT(314),
  [957] = {.count = 1, .reusable = true}, SHIFT(129),
  [959] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_string, 2),
  [961] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(326),
  [964] = {.count = 1, .reusable = false}, SHIFT(377),
  [966] = {.count = 1, .reusable = true}, SHIFT(155),
  [968] = {.count = 1, .reusable = true}, SHIFT(363),
  [970] = {.count = 1, .reusable = true}, SHIFT(152),
  [972] = {.count = 1, .reusable = true}, SHIFT(370),
  [974] = {.count = 1, .reusable = true}, SHIFT(422),
  [976] = {.count = 1, .reusable = true}, SHIFT(46),
  [978] = {.count = 1, .reusable = true}, SHIFT(517),
  [980] = {.count = 1, .reusable = true}, SHIFT(111),
  [982] = {.count = 1, .reusable = true}, SHIFT(502),
  [984] = {.count = 1, .reusable = true}, SHIFT(22),
  [986] = {.count = 1, .reusable = true}, SHIFT(506),
  [988] = {.count = 1, .reusable = true}, SHIFT(117),
  [990] = {.count = 1, .reusable = true}, SHIFT(515),
  [992] = {.count = 1, .reusable = true}, SHIFT(52),
  [994] = {.count = 1, .reusable = true}, SHIFT(516),
  [996] = {.count = 1, .reusable = true}, SHIFT(331),
  [998] = {.count = 1, .reusable = true}, SHIFT(196),
  [1000] = {.count = 1, .reusable = false}, SHIFT(371),
  [1002] = {.count = 1, .reusable = false}, SHIFT(189),
  [1004] = {.count = 1, .reusable = true}, SHIFT(192),
  [1006] = {.count = 1, .reusable = true}, SHIFT(415),
  [1008] = {.count = 1, .reusable = true}, SHIFT(358),
  [1010] = {.count = 1, .reusable = true}, SHIFT(355),
  [1012] = {.count = 1, .reusable = true}, SHIFT(514),
  [1014] = {.count = 1, .reusable = true}, SHIFT(245),
  [1016] = {.count = 1, .reusable = true}, SHIFT(154),
  [1018] = {.count = 1, .reusable = true}, SHIFT(170),
  [1020] = {.count = 1, .reusable = true}, SHIFT(364),
  [1022] = {.count = 1, .reusable = true}, SHIFT(72),
  [1024] = {.count = 1, .reusable = true}, SHIFT(510),
  [1026] = {.count = 1, .reusable = true}, SHIFT(324),
  [1028] = {.count = 1, .reusable = true}, SHIFT(366),
  [1030] = {.count = 1, .reusable = true}, SHIFT(352),
  [1032] = {.count = 1, .reusable = true}, SHIFT(255),
  [1034] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(374),
  [1037] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1039] = {.count = 1, .reusable = true}, SHIFT(178),
  [1041] = {.count = 1, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2), SHIFT_REPEAT(370),
  [1046] = {.count = 1, .reusable = true}, SHIFT(320),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [1050] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [1052] = {.count = 1, .reusable = true}, SHIFT(354),
  [1054] = {.count = 1, .reusable = true}, SHIFT(168),
  [1056] = {.count = 1, .reusable = true}, SHIFT(134),
  [1058] = {.count = 1, .reusable = true}, SHIFT(264),
  [1060] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(91),
  [1063] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1065] = {.count = 1, .reusable = true}, SHIFT(335),
  [1067] = {.count = 1, .reusable = true}, SHIFT(167),
  [1069] = {.count = 1, .reusable = true}, SHIFT(153),
  [1071] = {.count = 1, .reusable = true}, SHIFT(176),
  [1073] = {.count = 1, .reusable = true}, SHIFT(304),
  [1075] = {.count = 1, .reusable = true}, SHIFT(296),
  [1077] = {.count = 1, .reusable = true}, SHIFT(295),
  [1079] = {.count = 1, .reusable = true}, SHIFT(281),
  [1081] = {.count = 1, .reusable = true}, SHIFT(406),
  [1083] = {.count = 1, .reusable = true}, SHIFT(433),
  [1085] = {.count = 1, .reusable = true}, SHIFT(235),
  [1087] = {.count = 1, .reusable = true}, SHIFT(428),
  [1089] = {.count = 1, .reusable = true}, SHIFT(400),
  [1091] = {.count = 1, .reusable = true}, SHIFT(403),
  [1093] = {.count = 1, .reusable = true}, SHIFT(234),
  [1095] = {.count = 1, .reusable = true}, SHIFT(473),
  [1097] = {.count = 1, .reusable = true}, SHIFT(265),
  [1099] = {.count = 1, .reusable = true}, SHIFT(232),
  [1101] = {.count = 1, .reusable = true}, SHIFT(393),
  [1103] = {.count = 1, .reusable = true}, SHIFT(467),
  [1105] = {.count = 1, .reusable = true}, SHIFT(228),
  [1107] = {.count = 1, .reusable = true}, SHIFT(468),
  [1109] = {.count = 1, .reusable = true}, SHIFT(392),
  [1111] = {.count = 1, .reusable = true}, SHIFT(396),
  [1113] = {.count = 1, .reusable = true}, SHIFT(236),
  [1115] = {.count = 1, .reusable = true}, SHIFT(391),
  [1117] = {.count = 1, .reusable = true}, SHIFT(390),
  [1119] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1121] = {.count = 1, .reusable = true}, SHIFT(319),
  [1123] = {.count = 1, .reusable = true}, SHIFT(172),
  [1125] = {.count = 1, .reusable = true}, SHIFT(224),
  [1127] = {.count = 1, .reusable = true}, SHIFT(410),
  [1129] = {.count = 1, .reusable = true}, SHIFT(78),
  [1131] = {.count = 1, .reusable = true}, SHIFT(79),
  [1133] = {.count = 1, .reusable = true}, SHIFT(80),
  [1135] = {.count = 1, .reusable = true}, SHIFT(104),
  [1137] = {.count = 1, .reusable = true}, SHIFT(299),
  [1139] = {.count = 1, .reusable = true}, SHIFT(249),
  [1141] = {.count = 1, .reusable = true}, SHIFT(461),
  [1143] = {.count = 1, .reusable = true}, SHIFT(460),
  [1145] = {.count = 1, .reusable = true}, SHIFT(42),
  [1147] = {.count = 1, .reusable = true}, SHIFT(16),
  [1149] = {.count = 1, .reusable = true}, SHIFT(416),
  [1151] = {.count = 1, .reusable = true}, SHIFT(330),
  [1153] = {.count = 1, .reusable = true}, SHIFT(241),
  [1155] = {.count = 1, .reusable = true}, SHIFT(13),
  [1157] = {.count = 1, .reusable = true}, SHIFT(15),
  [1159] = {.count = 1, .reusable = true}, SHIFT(482),
  [1161] = {.count = 1, .reusable = true}, SHIFT(140),
  [1163] = {.count = 1, .reusable = true}, SHIFT(419),
  [1165] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1167] = {.count = 1, .reusable = true}, SHIFT(348),
  [1169] = {.count = 1, .reusable = true}, SHIFT(322),
  [1171] = {.count = 1, .reusable = true}, SHIFT(420),
  [1173] = {.count = 1, .reusable = true}, SHIFT(487),
  [1175] = {.count = 1, .reusable = true}, SHIFT(297),
  [1177] = {.count = 1, .reusable = true}, SHIFT(256),
  [1179] = {.count = 1, .reusable = true}, SHIFT(497),
  [1181] = {.count = 1, .reusable = true}, SHIFT(501),
  [1183] = {.count = 1, .reusable = true}, SHIFT(20),
  [1185] = {.count = 1, .reusable = true}, SHIFT(21),
  [1187] = {.count = 1, .reusable = true}, SHIFT(19),
  [1189] = {.count = 1, .reusable = true}, SHIFT(243),
  [1191] = {.count = 1, .reusable = true}, SHIFT(350),
  [1193] = {.count = 1, .reusable = true}, SHIFT(385),
  [1195] = {.count = 1, .reusable = true}, SHIFT(431),
  [1197] = {.count = 1, .reusable = true}, SHIFT(313),
  [1199] = {.count = 1, .reusable = true}, SHIFT(5),
  [1201] = {.count = 1, .reusable = true}, SHIFT(388),
  [1203] = {.count = 1, .reusable = true}, SHIFT(316),
  [1205] = {.count = 1, .reusable = true}, SHIFT(209),
  [1207] = {.count = 1, .reusable = true}, SHIFT(210),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1211] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1213] = {.count = 1, .reusable = true}, SHIFT(378),
  [1215] = {.count = 1, .reusable = true}, SHIFT(212),
  [1217] = {.count = 1, .reusable = true}, SHIFT(318),
  [1219] = {.count = 1, .reusable = true}, SHIFT(289),
  [1221] = {.count = 1, .reusable = true}, SHIFT(65),
  [1223] = {.count = 1, .reusable = true}, SHIFT(61),
  [1225] = {.count = 1, .reusable = true}, SHIFT(63),
  [1227] = {.count = 1, .reusable = true}, SHIFT(321),
  [1229] = {.count = 1, .reusable = true}, SHIFT(305),
  [1231] = {.count = 1, .reusable = true}, SHIFT(435),
  [1233] = {.count = 1, .reusable = true}, SHIFT(40),
  [1235] = {.count = 1, .reusable = true}, SHIFT(55),
  [1237] = {.count = 1, .reusable = true}, SHIFT(91),
  [1239] = {.count = 1, .reusable = true}, SHIFT(54),
  [1241] = {.count = 1, .reusable = true}, SHIFT(24),
  [1243] = {.count = 1, .reusable = true}, SHIFT(41),
  [1245] = {.count = 1, .reusable = true}, SHIFT(57),
  [1247] = {.count = 1, .reusable = true}, SHIFT(56),
  [1249] = {.count = 1, .reusable = true}, SHIFT(242),
  [1251] = {.count = 1, .reusable = true}, SHIFT(39),
  [1253] = {.count = 1, .reusable = true}, SHIFT(115),
  [1255] = {.count = 1, .reusable = true}, SHIFT(317),
  [1257] = {.count = 1, .reusable = true}, SHIFT(315),
  [1259] = {.count = 1, .reusable = true}, SHIFT(323),
  [1261] = {.count = 1, .reusable = true}, SHIFT(35),
  [1263] = {.count = 1, .reusable = true}, SHIFT(30),
  [1265] = {.count = 1, .reusable = true}, SHIFT(328),
  [1267] = {.count = 1, .reusable = true}, SHIFT(100),
  [1269] = {.count = 1, .reusable = true}, SHIFT(101),
  [1271] = {.count = 1, .reusable = true}, SHIFT(109),
  [1273] = {.count = 1, .reusable = true}, SHIFT(481),
  [1275] = {.count = 1, .reusable = true}, SHIFT(260),
  [1277] = {.count = 1, .reusable = true}, SHIFT(448),
  [1279] = {.count = 1, .reusable = true}, SHIFT(43),
  [1281] = {.count = 1, .reusable = true}, SHIFT(287),
  [1283] = {.count = 1, .reusable = true}, SHIFT(333),
  [1285] = {.count = 1, .reusable = true}, SHIFT(449),
  [1287] = {.count = 1, .reusable = true}, SHIFT(106),
  [1289] = {.count = 1, .reusable = true}, SHIFT(288),
  [1291] = {.count = 1, .reusable = true}, SHIFT(285),
  [1293] = {.count = 1, .reusable = true}, SHIFT(478),
  [1295] = {.count = 1, .reusable = true}, SHIFT(479),
  [1297] = {.count = 1, .reusable = true}, SHIFT(267),
  [1299] = {.count = 1, .reusable = true}, SHIFT(282),
  [1301] = {.count = 1, .reusable = true}, SHIFT(484),
  [1303] = {.count = 1, .reusable = true}, SHIFT(485),
  [1305] = {.count = 1, .reusable = true}, SHIFT(450),
  [1307] = {.count = 1, .reusable = true}, SHIFT(280),
  [1309] = {.count = 1, .reusable = true}, SHIFT(490),
  [1311] = {.count = 1, .reusable = true}, SHIFT(491),
  [1313] = {.count = 1, .reusable = true}, SHIFT(475),
  [1315] = {.count = 1, .reusable = true}, SHIFT(276),
  [1317] = {.count = 1, .reusable = true}, SHIFT(275),
  [1319] = {.count = 1, .reusable = true}, SHIFT(274),
  [1321] = {.count = 1, .reusable = true}, SHIFT(273),
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
