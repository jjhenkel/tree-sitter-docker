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
#define STATE_COUNT 542
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14

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
  sym_arg_name = 27,
  sym_arg_default = 28,
  anon_sym_DASH_DASHchown_EQ = 29,
  sym_env_key = 30,
  sym_env_value = 31,
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
  sym_hc_none = 54,
  anon_sym_DASH_DASHinterval = 55,
  aux_sym_hc_interval_token1 = 56,
  anon_sym_DASH_DASHtimeout = 57,
  anon_sym_DASH_DASHstart_DASHperiod = 58,
  anon_sym_DASH_DASHretries = 59,
  aux_sym__hc_command_token1 = 60,
  aux_sym_label_pair_token1 = 61,
  sym_label_key = 62,
  aux_sym_label_value_token1 = 63,
  aux_sym_label_value_token2 = 64,
  aux_sym_label_value_token3 = 65,
  sym_signal_num = 66,
  aux_sym_signal_name_token1 = 67,
  aux_sym_signal_name_token2 = 68,
  aux_sym_user_name_token1 = 69,
  aux_sym_user_id_token1 = 70,
  aux_sym_path_token1 = 71,
  aux_sym_path_token2 = 72,
  aux_sym_path_token3 = 73,
  aux_sym_path_token4 = 74,
  aux_sym__anything_token1 = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  anon_sym_COLON_DASH = 78,
  aux_sym_variable_default_value_token1 = 79,
  anon_sym_COLON_PLUS = 80,
  sym__docker_variable = 81,
  sym_template_expr_curly_braces = 82,
  sym_template_expr_percent_signs = 83,
  aux_sym_template_expr_less_than_equals_token1 = 84,
  aux_sym_template_expr_less_than_equals_token2 = 85,
  aux_sym_template_expr_less_than_equals_token3 = 86,
  sym__space = 87,
  sym__blank_line = 88,
  sym__space_no_newline = 89,
  sym_comment = 90,
  sym_line_continuation = 91,
  sym_json_array = 92,
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
  sym__chown = 113,
  sym_chown = 114,
  sym__env_pairs = 115,
  sym_env_pair = 116,
  sym__port_spec = 117,
  sym_mapped_port = 118,
  sym_mapped_no_lhs = 119,
  sym__port = 120,
  sym_port = 121,
  sym_port_range = 122,
  sym__port_part = 123,
  sym_port_protocol = 124,
  sym_platform = 125,
  sym_repository = 126,
  sym__repository_start = 127,
  sym__repository_continued = 128,
  sym_image = 129,
  sym_tag = 130,
  sym_digest = 131,
  sym_as_name = 132,
  sym__hc_interval = 133,
  sym_hc_interval = 134,
  sym__hc_timeout = 135,
  sym_hc_timeout = 136,
  sym__hc_start_period = 137,
  sym_hc_start_period = 138,
  sym__hc_retries = 139,
  sym_hc_retries = 140,
  sym__hc_options = 141,
  sym__hc_command = 142,
  sym_hc_command = 143,
  aux_sym__labels = 144,
  sym_label_pair = 145,
  sym_label_value = 146,
  sym_signal_name = 147,
  sym_user_name = 148,
  sym_user_group = 149,
  sym_user_id = 150,
  sym_user_group_id = 151,
  sym_path = 152,
  aux_sym__paths = 153,
  aux_sym__anything = 154,
  sym_docker_variable = 155,
  sym_variable_default_value = 156,
  sym_variable_this_or_null = 157,
  sym_template_expr_less_than_equals = 158,
  sym__anything_or_json_array = 159,
  aux_sym_dockerfile_repeat1 = 160,
  aux_sym_expose_repeat1 = 161,
  aux_sym_healthcheck_repeat1 = 162,
  aux_sym__env_pairs_repeat1 = 163,
  aux_sym_repository_repeat1 = 164,
  aux_sym__repository_start_repeat1 = 165,
  aux_sym__repository_start_repeat2 = 166,
  aux_sym__repository_start_repeat3 = 167,
  aux_sym__repository_start_repeat4 = 168,
  aux_sym_label_value_repeat1 = 169,
  aux_sym_path_repeat1 = 170,
  aux_sym_path_repeat2 = 171,
  aux_sym_template_expr_less_than_equals_repeat1 = 172,
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
  [sym_arg_name] = "arg_name",
  [sym_arg_default] = "arg_default",
  [anon_sym_DASH_DASHchown_EQ] = "--chown=",
  [sym_env_key] = "env_key",
  [sym_env_value] = "env_value",
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
  [anon_sym_DASH_DASHretries] = "--retries",
  [aux_sym__hc_command_token1] = "_hc_command_token1",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [sym_label_key] = "label_key",
  [aux_sym_label_value_token1] = "label_value_token1",
  [aux_sym_label_value_token2] = "label_value_token2",
  [aux_sym_label_value_token3] = "label_value_token3",
  [sym_signal_num] = "signal_num",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [aux_sym_signal_name_token2] = "signal_name_token2",
  [aux_sym_user_name_token1] = "user_name_token1",
  [aux_sym_user_id_token1] = "user_id_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_path_token3] = "path_token3",
  [aux_sym_path_token4] = "path_token4",
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
  [sym_json_array] = "json_array",
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
  [sym__chown] = "_chown",
  [sym_chown] = "chown",
  [sym__env_pairs] = "_env_pairs",
  [sym_env_pair] = "env_pair",
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
  [sym_label_value] = "label_value",
  [sym_signal_name] = "signal_name",
  [sym_user_name] = "user_name",
  [sym_user_group] = "user_group",
  [sym_user_id] = "user_id",
  [sym_user_group_id] = "user_group_id",
  [sym_path] = "path",
  [aux_sym__paths] = "_paths",
  [aux_sym__anything] = "_anything",
  [sym_docker_variable] = "docker_variable",
  [sym_variable_default_value] = "variable_default_value",
  [sym_variable_this_or_null] = "variable_this_or_null",
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [sym__anything_or_json_array] = "_anything_or_json_array",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_healthcheck_repeat1] = "healthcheck_repeat1",
  [aux_sym__env_pairs_repeat1] = "_env_pairs_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_label_value_repeat1] = "label_value_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
  [aux_sym_template_expr_less_than_equals_repeat1] = "template_expr_less_than_equals_repeat1",
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
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHchown_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_env_value] = {
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
  [anon_sym_DASH_DASHretries] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hc_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
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
  [aux_sym_user_id_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token4] = {
    .visible = false,
    .named = false,
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
  [sym_json_array] = {
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
  [sym__chown] = {
    .visible = false,
    .named = true,
  },
  [sym_chown] = {
    .visible = true,
    .named = true,
  },
  [sym__env_pairs] = {
    .visible = false,
    .named = true,
  },
  [sym_env_pair] = {
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
  [sym_path] = {
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
  [sym__anything_or_json_array] = {
    .visible = false,
    .named = true,
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
  [aux_sym__env_pairs_repeat1] = {
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
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat2] = {
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
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(316);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '{') ADVANCE(1204);
      if (lookahead == '}') ADVANCE(1205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(931);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0) ADVANCE(1079);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1008);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1042);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1063);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1014);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1000);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1045);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1074);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1024);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1067);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1051);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1079);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1008);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1042);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1044);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1063);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1014);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1000);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1045);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1074);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1024);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1067);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1051);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(932);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1079);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(860);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(881);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(832);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(818);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(885);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(869);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1098);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1099);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1096);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1097);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1103);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1104);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1090);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (lookahead != 0) ADVANCE(1095);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1098);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1099);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1096);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1097);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1103);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1104);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0) ADVANCE(1095);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(649);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(651);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(649);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(651);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(612);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(649);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(651);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(448);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(448);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(448);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(741);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(713);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(750);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(779);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(741);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(713);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(750);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(779);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(741);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(713);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(750);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(779);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(539);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(560);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(521);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(548);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(550);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(539);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(560);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(521);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(548);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(550);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(539);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(560);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(521);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(548);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(550);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(79);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(783);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(214);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(1109);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1109);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\\') ADVANCE(917);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(919);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(923);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(921);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1230);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(1221);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(1219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1221);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(1218);
      if (lookahead == '\\') ADVANCE(1216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1218);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(1215);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1215);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(1209);
      if (lookahead == '\\') ADVANCE(1207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(331);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(334);
      if (lookahead == '"') ADVANCE(335);
      END_STATE();
    case 45:
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1093);
      END_STATE();
    case 46:
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1093);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '-') ADVANCE(935);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0) ADVANCE(1079);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1079);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0) ADVANCE(1079);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(931);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(930);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(1205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '[') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0) ADVANCE(1095);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(928);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0) ADVANCE(1095);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(353);
      if (lookahead == '{') ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(353);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '{') ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(1212);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '{') ADVANCE(1203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(366);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(1109);
      END_STATE();
    case 74:
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '+') ADVANCE(1210);
      if (lookahead == '-') ADVANCE(1206);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(800);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(800);
      if (lookahead != 0) ADVANCE(1223);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(800);
      if (lookahead != 0) ADVANCE(1222);
      END_STATE();
    case 82:
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1109);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(807);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(811);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 113:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1109);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(814);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '=') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1224);
      END_STATE();
    case 115:
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 116:
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(799);
      END_STATE();
    case 118:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(804);
      END_STATE();
    case 119:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(802);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(927);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 149:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 151:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 152:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 161:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(233);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 188:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 189:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 190:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 193:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 201:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 207:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 208:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 209:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 210:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 211:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(339);
      END_STATE();
    case 213:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1250);
      END_STATE();
    case 214:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 215:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1250);
      END_STATE();
    case 216:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 234:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1109);
      END_STATE();
    case 235:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 236:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      END_STATE();
    case 238:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 239:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 240:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(240);
      END_STATE();
    case 241:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(334);
      END_STATE();
    case 242:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(919);
      END_STATE();
    case 243:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(916);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(936);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\\') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_env_key);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1237);
      if (lookahead == '"') ADVANCE(1235);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1236);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1232);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1235);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\'') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
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
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '2') ADVANCE(348);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '5') ADVANCE(349);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '6') ADVANCE(350);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(353);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '\\') ADVANCE(365);
      if (lookahead != 0 &&
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
          lookahead != '}') ADVANCE(366);
      END_STATE();
    case 366:
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
          lookahead != '}') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
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
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
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
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
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
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
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
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
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
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(507);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
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
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
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
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(613);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
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
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\\') ADVANCE(678);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(726);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(733);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(774);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(716);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(679);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(681);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(680);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(747);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(706);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(710);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(696);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(769);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(688);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(736);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(711);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(685);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(709);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(718);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(758);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(772);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(702);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(760);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(776);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(754);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(755);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(777);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(686);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(725);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(761);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(682);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(701);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(748);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(728);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(742);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(684);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(759);
      if (lookahead == '{') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(780);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(778);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(787);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(788);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(790);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(792);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(794);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(796);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(803);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '=') ADVANCE(815);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(813);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(846);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(893);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(835);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(843);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(827);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(849);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(909);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(898);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(825);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(833);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(831);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(829);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(914);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(894);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(905);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(906);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(855);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(830);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(903);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(828);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(875);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(837);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(877);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(822);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(821);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(853);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(876);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(887);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(895);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(886);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(873);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(874);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(834);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(841);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(900);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(911);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(820);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(847);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(902);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(878);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(247);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(254);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(257);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(816);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(919);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(918);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(923);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(920);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(924);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(932);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '$') ADVANCE(1081);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1241);
      if (lookahead != 0) ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '-') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '/') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'a') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'c') ADVANCE(951);
      if (lookahead == 'i') ADVANCE(960);
      if (lookahead == 'p') ADVANCE(955);
      if (lookahead == 'r') ADVANCE(947);
      if (lookahead == 's') ADVANCE(977);
      if (lookahead == 't') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'c') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'd') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'e') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'e') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'f') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'h') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'i') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'i') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'i') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'l') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'l') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'm') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'm') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'n') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'o') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'o') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'p') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 's') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 't') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 't') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 't') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 't') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 't') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'u') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'v') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'w') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1015);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1071);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1062);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1079);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead != 0) ADVANCE(1241);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '"') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(1089);
      if (lookahead != 0) ADVANCE(1082);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(1083);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(1082);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(1083);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1087);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1082);
      if (lookahead == '$') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(1083);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead != 0) ADVANCE(1241);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1091);
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1091);
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1091);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1113);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1094);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1094);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1093);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1159);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1154);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1136);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1148);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1182);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1144);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1184);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1186);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1167);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1188);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1180);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1149);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1177);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1110);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1111);
      if (lookahead == '"') ADVANCE(1094);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1110);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1111);
      if (lookahead == '"') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1113);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == ',') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1117);
      if (lookahead == ',') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1250);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1116);
      if (lookahead == '"') ADVANCE(1094);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == ',') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1116);
      if (lookahead == '"') ADVANCE(1094);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == ',') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1117);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1116);
      if (lookahead == '"') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1117);
      if (lookahead == ',') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1250);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1166);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1160);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1170);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1117);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1198);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1117);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1117);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1117);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1157);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1120);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1163);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1130);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1171);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1190);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1128);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1117);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1117);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1178);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1117);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1142);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1117);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1147);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1155);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1175);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1179);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1172);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1176);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1191);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1117);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1117);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1195);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1199);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1126);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1127);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1134);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1169);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1146);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1152);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1196);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1197);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1138);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1173);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1194);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1185);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1162);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1200);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1193);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1183);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1164);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1201);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1131);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1133);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1158);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1151);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1156);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1132);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1161);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1174);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1117);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1123);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1117);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1202:
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
          lookahead != 'v') ADVANCE(1117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1189);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(780);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\\') ADVANCE(1207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__docker_variable);
      if (lookahead == '\\') ADVANCE(1211);
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
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 1212:
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
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1215);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1215);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1215);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\\') ADVANCE(1216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1218);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1218);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1218);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\\') ADVANCE(1219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1221);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1221);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1221);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1226);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1228);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1229);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1230);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(1243);
      if (lookahead != 0) ADVANCE(1232);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(1247);
      if (lookahead != 0) ADVANCE(1235);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(1245);
      if (lookahead != 0) ADVANCE(1236);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(804);
      if (lookahead != 0) ADVANCE(1241);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(802);
      if (lookahead != 0) ADVANCE(1241);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1241);
      if (lookahead != 0) ADVANCE(918);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead != 0) ADVANCE(1241);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1241);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1234);
      if (lookahead == '"') ADVANCE(1232);
      if (lookahead != 0) ADVANCE(1241);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(330);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1241);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1237);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(1245);
      if (lookahead != 0) ADVANCE(1236);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1236);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1233);
      if (lookahead == '"') ADVANCE(1235);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(1245);
      if (lookahead != 0) ADVANCE(1236);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(332);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1236);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_json_array);
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
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 69},
  [221] = {.lex_state = 59},
  [222] = {.lex_state = 59},
  [223] = {.lex_state = 69},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 70},
  [226] = {.lex_state = 70},
  [227] = {.lex_state = 70},
  [228] = {.lex_state = 70},
  [229] = {.lex_state = 70},
  [230] = {.lex_state = 69},
  [231] = {.lex_state = 69},
  [232] = {.lex_state = 59},
  [233] = {.lex_state = 69},
  [234] = {.lex_state = 70},
  [235] = {.lex_state = 69},
  [236] = {.lex_state = 69},
  [237] = {.lex_state = 69},
  [238] = {.lex_state = 69},
  [239] = {.lex_state = 69},
  [240] = {.lex_state = 69},
  [241] = {.lex_state = 69},
  [242] = {.lex_state = 69},
  [243] = {.lex_state = 69},
  [244] = {.lex_state = 69},
  [245] = {.lex_state = 69},
  [246] = {.lex_state = 69},
  [247] = {.lex_state = 69},
  [248] = {.lex_state = 69},
  [249] = {.lex_state = 69},
  [250] = {.lex_state = 69},
  [251] = {.lex_state = 69},
  [252] = {.lex_state = 69},
  [253] = {.lex_state = 69},
  [254] = {.lex_state = 69},
  [255] = {.lex_state = 69},
  [256] = {.lex_state = 69},
  [257] = {.lex_state = 69},
  [258] = {.lex_state = 69},
  [259] = {.lex_state = 69},
  [260] = {.lex_state = 50},
  [261] = {.lex_state = 69},
  [262] = {.lex_state = 69},
  [263] = {.lex_state = 69},
  [264] = {.lex_state = 69},
  [265] = {.lex_state = 69},
  [266] = {.lex_state = 21},
  [267] = {.lex_state = 69},
  [268] = {.lex_state = 69},
  [269] = {.lex_state = 69},
  [270] = {.lex_state = 69},
  [271] = {.lex_state = 69},
  [272] = {.lex_state = 69},
  [273] = {.lex_state = 52},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 52},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 58},
  [279] = {.lex_state = 52},
  [280] = {.lex_state = 59},
  [281] = {.lex_state = 59},
  [282] = {.lex_state = 1085},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 51},
  [285] = {.lex_state = 51},
  [286] = {.lex_state = 66},
  [287] = {.lex_state = 67},
  [288] = {.lex_state = 68},
  [289] = {.lex_state = 65},
  [290] = {.lex_state = 65},
  [291] = {.lex_state = 68},
  [292] = {.lex_state = 67},
  [293] = {.lex_state = 66},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 21},
  [296] = {.lex_state = 38},
  [297] = {.lex_state = 38},
  [298] = {.lex_state = 58},
  [299] = {.lex_state = 1085},
  [300] = {.lex_state = 52},
  [301] = {.lex_state = 59},
  [302] = {.lex_state = 59},
  [303] = {.lex_state = 67},
  [304] = {.lex_state = 68},
  [305] = {.lex_state = 65},
  [306] = {.lex_state = 59},
  [307] = {.lex_state = 59},
  [308] = {.lex_state = 59},
  [309] = {.lex_state = 59},
  [310] = {.lex_state = 59},
  [311] = {.lex_state = 59},
  [312] = {.lex_state = 38},
  [313] = {.lex_state = 21},
  [314] = {.lex_state = 38},
  [315] = {.lex_state = 38},
  [316] = {.lex_state = 59},
  [317] = {.lex_state = 59},
  [318] = {.lex_state = 59},
  [319] = {.lex_state = 59},
  [320] = {.lex_state = 38},
  [321] = {.lex_state = 59},
  [322] = {.lex_state = 66},
  [323] = {.lex_state = 59},
  [324] = {.lex_state = 59},
  [325] = {.lex_state = 51},
  [326] = {.lex_state = 51},
  [327] = {.lex_state = 59},
  [328] = {.lex_state = 38},
  [329] = {.lex_state = 1085},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 1085},
  [332] = {.lex_state = 38},
  [333] = {.lex_state = 38},
  [334] = {.lex_state = 59},
  [335] = {.lex_state = 1085},
  [336] = {.lex_state = 38},
  [337] = {.lex_state = 60},
  [338] = {.lex_state = 38},
  [339] = {.lex_state = 52},
  [340] = {.lex_state = 47},
  [341] = {.lex_state = 66},
  [342] = {.lex_state = 60},
  [343] = {.lex_state = 1085},
  [344] = {.lex_state = 60},
  [345] = {.lex_state = 66},
  [346] = {.lex_state = 52},
  [347] = {.lex_state = 66},
  [348] = {.lex_state = 68},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 60},
  [351] = {.lex_state = 65},
  [352] = {.lex_state = 52},
  [353] = {.lex_state = 52},
  [354] = {.lex_state = 1085},
  [355] = {.lex_state = 66},
  [356] = {.lex_state = 67},
  [357] = {.lex_state = 52},
  [358] = {.lex_state = 52},
  [359] = {.lex_state = 21},
  [360] = {.lex_state = 21},
  [361] = {.lex_state = 52},
  [362] = {.lex_state = 52},
  [363] = {.lex_state = 1085},
  [364] = {.lex_state = 1085},
  [365] = {.lex_state = 71},
  [366] = {.lex_state = 71},
  [367] = {.lex_state = 71},
  [368] = {.lex_state = 71},
  [369] = {.lex_state = 71},
  [370] = {.lex_state = 71},
  [371] = {.lex_state = 71},
  [372] = {.lex_state = 71},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 71},
  [375] = {.lex_state = 71},
  [376] = {.lex_state = 71},
  [377] = {.lex_state = 71},
  [378] = {.lex_state = 21},
  [379] = {.lex_state = 1086},
  [380] = {.lex_state = 21},
  [381] = {.lex_state = 71},
  [382] = {.lex_state = 71},
  [383] = {.lex_state = 21},
  [384] = {.lex_state = 72},
  [385] = {.lex_state = 71},
  [386] = {.lex_state = 71},
  [387] = {.lex_state = 71},
  [388] = {.lex_state = 1086},
  [389] = {.lex_state = 71},
  [390] = {.lex_state = 71},
  [391] = {.lex_state = 21},
  [392] = {.lex_state = 59},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 71},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 21},
  [397] = {.lex_state = 21},
  [398] = {.lex_state = 71},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 53},
  [401] = {.lex_state = 54},
  [402] = {.lex_state = 71},
  [403] = {.lex_state = 71},
  [404] = {.lex_state = 21},
  [405] = {.lex_state = 71},
  [406] = {.lex_state = 63},
  [407] = {.lex_state = 58},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 64},
  [410] = {.lex_state = 21},
  [411] = {.lex_state = 64},
  [412] = {.lex_state = 54},
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 21},
  [415] = {.lex_state = 63},
  [416] = {.lex_state = 63},
  [417] = {.lex_state = 36},
  [418] = {.lex_state = 58},
  [419] = {.lex_state = 58},
  [420] = {.lex_state = 21},
  [421] = {.lex_state = 58},
  [422] = {.lex_state = 21},
  [423] = {.lex_state = 39},
  [424] = {.lex_state = 37},
  [425] = {.lex_state = 37},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 21},
  [428] = {.lex_state = 59},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 37},
  [433] = {.lex_state = 39},
  [434] = {.lex_state = 40},
  [435] = {.lex_state = 21},
  [436] = {.lex_state = 21},
  [437] = {.lex_state = 59},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 37},
  [440] = {.lex_state = 21},
  [441] = {.lex_state = 59},
  [442] = {.lex_state = 59},
  [443] = {.lex_state = 21},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 59},
  [446] = {.lex_state = 37},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 59},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 37},
  [452] = {.lex_state = 39},
  [453] = {.lex_state = 40},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 59},
  [456] = {.lex_state = 41},
  [457] = {.lex_state = 41},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 37},
  [460] = {.lex_state = 39},
  [461] = {.lex_state = 40},
  [462] = {.lex_state = 39},
  [463] = {.lex_state = 40},
  [464] = {.lex_state = 21},
  [465] = {.lex_state = 59},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 59},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 21},
  [473] = {.lex_state = 21},
  [474] = {.lex_state = 61},
  [475] = {.lex_state = 39},
  [476] = {.lex_state = 40},
  [477] = {.lex_state = 21},
  [478] = {.lex_state = 39},
  [479] = {.lex_state = 40},
  [480] = {.lex_state = 37},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 42},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 21},
  [489] = {.lex_state = 59},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 21},
  [492] = {.lex_state = 59},
  [493] = {.lex_state = 21},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 56},
  [496] = {.lex_state = 59},
  [497] = {.lex_state = 21},
  [498] = {.lex_state = 59},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 59},
  [501] = {.lex_state = 71},
  [502] = {.lex_state = 59},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 59},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 21},
  [507] = {.lex_state = 59},
  [508] = {.lex_state = 62},
  [509] = {.lex_state = 59},
  [510] = {.lex_state = 114},
  [511] = {.lex_state = 59},
  [512] = {.lex_state = 37},
  [513] = {.lex_state = 59},
  [514] = {.lex_state = 21},
  [515] = {.lex_state = 59},
  [516] = {.lex_state = 21},
  [517] = {.lex_state = 59},
  [518] = {.lex_state = 21},
  [519] = {.lex_state = 59},
  [520] = {.lex_state = 21},
  [521] = {.lex_state = 39},
  [522] = {.lex_state = 71},
  [523] = {.lex_state = 40},
  [524] = {.lex_state = 40},
  [525] = {.lex_state = 39},
  [526] = {.lex_state = 21},
  [527] = {.lex_state = 71},
  [528] = {.lex_state = 40},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 21},
  [531] = {.lex_state = 71},
  [532] = {.lex_state = 40},
  [533] = {.lex_state = 39},
  [534] = {.lex_state = 37},
  [535] = {.lex_state = 71},
  [536] = {.lex_state = 71},
  [537] = {.lex_state = 71},
  [538] = {.lex_state = 71},
  [539] = {.lex_state = 71},
  [540] = {.lex_state = 71},
  [541] = {.lex_state = 71},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_arg_name] = ACTIONS(1),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__port_part_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_port_protocol_token1] = ACTIONS(1),
    [aux_sym_port_protocol_token2] = ACTIONS(1),
    [aux_sym__repository_start_token4] = ACTIONS(1),
    [aux_sym__repository_start_token8] = ACTIONS(1),
    [aux_sym__repository_start_token9] = ACTIONS(1),
    [aux_sym__repository_start_token16] = ACTIONS(1),
    [sym_hc_none] = ACTIONS(1),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1),
    [anon_sym_DASH_DASHretries] = ACTIONS(1),
    [aux_sym__hc_command_token1] = ACTIONS(1),
    [aux_sym_label_value_token1] = ACTIONS(1),
    [sym_signal_num] = ACTIONS(1),
    [aux_sym_signal_name_token1] = ACTIONS(1),
    [aux_sym_user_id_token1] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym_path_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
    [sym__space_no_newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(526),
    [sym__directive] = STATE(184),
    [sym_add] = STATE(184),
    [sym_arg] = STATE(184),
    [sym_cmd] = STATE(184),
    [sym_copy] = STATE(184),
    [sym_entrypoint] = STATE(184),
    [sym_env] = STATE(184),
    [sym_expose] = STATE(184),
    [sym_from] = STATE(184),
    [sym_healthcheck] = STATE(184),
    [sym_label] = STATE(184),
    [sym_maintainer] = STATE(184),
    [sym_onbuild] = STATE(184),
    [sym_run] = STATE(184),
    [sym_shell] = STATE(184),
    [sym_stopsignal] = STATE(184),
    [sym_user] = STATE(184),
    [sym_volume] = STATE(184),
    [sym_workdir] = STATE(184),
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
    [sym__directive] = STATE(184),
    [sym_add] = STATE(184),
    [sym_arg] = STATE(184),
    [sym_cmd] = STATE(184),
    [sym_copy] = STATE(184),
    [sym_entrypoint] = STATE(184),
    [sym_env] = STATE(184),
    [sym_expose] = STATE(184),
    [sym_from] = STATE(184),
    [sym_healthcheck] = STATE(184),
    [sym_label] = STATE(184),
    [sym_maintainer] = STATE(184),
    [sym_onbuild] = STATE(184),
    [sym_run] = STATE(184),
    [sym_shell] = STATE(184),
    [sym_stopsignal] = STATE(184),
    [sym_user] = STATE(184),
    [sym_volume] = STATE(184),
    [sym_workdir] = STATE(184),
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
    [sym__directive] = STATE(184),
    [sym_add] = STATE(184),
    [sym_arg] = STATE(184),
    [sym_cmd] = STATE(184),
    [sym_copy] = STATE(184),
    [sym_entrypoint] = STATE(184),
    [sym_env] = STATE(184),
    [sym_expose] = STATE(184),
    [sym_from] = STATE(184),
    [sym_healthcheck] = STATE(184),
    [sym_label] = STATE(184),
    [sym_maintainer] = STATE(184),
    [sym_onbuild] = STATE(184),
    [sym_run] = STATE(184),
    [sym_shell] = STATE(184),
    [sym_stopsignal] = STATE(184),
    [sym_user] = STATE(184),
    [sym_volume] = STATE(184),
    [sym_workdir] = STATE(184),
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
    [sym_add] = STATE(208),
    [sym_arg] = STATE(208),
    [sym_cmd] = STATE(208),
    [sym_copy] = STATE(208),
    [sym_entrypoint] = STATE(208),
    [sym_env] = STATE(208),
    [sym_expose] = STATE(208),
    [sym_healthcheck] = STATE(208),
    [sym_label] = STATE(208),
    [sym_run] = STATE(208),
    [sym_shell] = STATE(208),
    [sym_stopsignal] = STATE(208),
    [sym_user] = STATE(208),
    [sym_volume] = STATE(208),
    [sym_workdir] = STATE(208),
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
  [5] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(97),
    [sym_port] = STATE(97),
    [sym_port_range] = STATE(97),
    [sym__port_part] = STATE(79),
    [aux_sym_expose_repeat1] = STATE(5),
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
  [6] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(97),
    [sym_port] = STATE(97),
    [sym_port_range] = STATE(97),
    [sym__port_part] = STATE(79),
    [aux_sym_expose_repeat1] = STATE(5),
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
  [7] = {
    [aux_sym__repository_start_repeat4] = STATE(7),
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
    [anon_sym_SLASH] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token12] = ACTIONS(131),
    [aux_sym__repository_start_token15] = ACTIONS(131),
    [aux_sym__repository_start_token16] = ACTIONS(127),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_add_token1] = ACTIONS(136),
    [aux_sym_arg_token1] = ACTIONS(136),
    [aux_sym_cmd_token1] = ACTIONS(136),
    [aux_sym_copy_token1] = ACTIONS(136),
    [aux_sym_entrypoint_token1] = ACTIONS(136),
    [aux_sym_env_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(134),
    [aux_sym_healthcheck_token1] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [aux_sym_maintainer_token1] = ACTIONS(136),
    [aux_sym_onbuild_token1] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_shell_token1] = ACTIONS(136),
    [aux_sym_stopsignal_token1] = ACTIONS(136),
    [aux_sym_user_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token16] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(143),
    [aux_sym_arg_token1] = ACTIONS(143),
    [aux_sym_cmd_token1] = ACTIONS(143),
    [aux_sym_copy_token1] = ACTIONS(143),
    [aux_sym_entrypoint_token1] = ACTIONS(143),
    [aux_sym_env_token1] = ACTIONS(143),
    [aux_sym_expose_token1] = ACTIONS(143),
    [aux_sym_from_token1] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(143),
    [aux_sym_label_token1] = ACTIONS(143),
    [aux_sym_maintainer_token1] = ACTIONS(143),
    [aux_sym_onbuild_token1] = ACTIONS(143),
    [aux_sym_run_token1] = ACTIONS(143),
    [aux_sym_shell_token1] = ACTIONS(143),
    [aux_sym_stopsignal_token1] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(143),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token4] = ACTIONS(149),
    [aux_sym__repository_start_token7] = ACTIONS(149),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat4] = STATE(14),
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
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat3] = STATE(13),
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
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token4] = ACTIONS(149),
    [aux_sym__repository_start_token7] = ACTIONS(149),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(143),
    [aux_sym_arg_token1] = ACTIONS(143),
    [aux_sym_cmd_token1] = ACTIONS(143),
    [aux_sym_copy_token1] = ACTIONS(143),
    [aux_sym_entrypoint_token1] = ACTIONS(143),
    [aux_sym_env_token1] = ACTIONS(143),
    [aux_sym_expose_token1] = ACTIONS(143),
    [aux_sym_from_token1] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(143),
    [aux_sym_label_token1] = ACTIONS(143),
    [aux_sym_maintainer_token1] = ACTIONS(143),
    [aux_sym_onbuild_token1] = ACTIONS(143),
    [aux_sym_run_token1] = ACTIONS(143),
    [aux_sym_shell_token1] = ACTIONS(143),
    [aux_sym_stopsignal_token1] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(143),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat4] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(143),
    [aux_sym_arg_token1] = ACTIONS(143),
    [aux_sym_cmd_token1] = ACTIONS(143),
    [aux_sym_copy_token1] = ACTIONS(143),
    [aux_sym_entrypoint_token1] = ACTIONS(143),
    [aux_sym_env_token1] = ACTIONS(143),
    [aux_sym_expose_token1] = ACTIONS(143),
    [aux_sym_from_token1] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(143),
    [aux_sym_label_token1] = ACTIONS(143),
    [aux_sym_maintainer_token1] = ACTIONS(143),
    [aux_sym_onbuild_token1] = ACTIONS(143),
    [aux_sym_run_token1] = ACTIONS(143),
    [aux_sym_shell_token1] = ACTIONS(143),
    [aux_sym_stopsignal_token1] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(143),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_add_token1] = ACTIONS(165),
    [aux_sym_arg_token1] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_copy_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_env_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [aux_sym_healthcheck_token1] = ACTIONS(165),
    [aux_sym_label_token1] = ACTIONS(165),
    [aux_sym_maintainer_token1] = ACTIONS(165),
    [aux_sym_onbuild_token1] = ACTIONS(165),
    [aux_sym_run_token1] = ACTIONS(165),
    [aux_sym_shell_token1] = ACTIONS(165),
    [aux_sym_stopsignal_token1] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(165),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token4] = ACTIONS(167),
    [aux_sym__repository_start_token7] = ACTIONS(167),
    [aux_sym__repository_start_token16] = ACTIONS(163),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(170),
    [aux_sym_healthcheck_token1] = ACTIONS(172),
    [aux_sym_label_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_onbuild_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_user_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token8] = ACTIONS(174),
    [aux_sym__repository_start_token11] = ACTIONS(174),
    [aux_sym__repository_start_token16] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
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
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_add_token1] = ACTIONS(181),
    [aux_sym_arg_token1] = ACTIONS(181),
    [aux_sym_cmd_token1] = ACTIONS(181),
    [aux_sym_copy_token1] = ACTIONS(181),
    [aux_sym_entrypoint_token1] = ACTIONS(181),
    [aux_sym_env_token1] = ACTIONS(181),
    [aux_sym_expose_token1] = ACTIONS(181),
    [aux_sym_from_token1] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(179),
    [aux_sym_healthcheck_token1] = ACTIONS(181),
    [aux_sym_label_token1] = ACTIONS(181),
    [aux_sym_maintainer_token1] = ACTIONS(181),
    [aux_sym_onbuild_token1] = ACTIONS(181),
    [aux_sym_run_token1] = ACTIONS(181),
    [aux_sym_shell_token1] = ACTIONS(181),
    [aux_sym_stopsignal_token1] = ACTIONS(181),
    [aux_sym_user_token1] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(183),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(185),
    [aux_sym__repository_start_token16] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
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
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token15] = ACTIONS(187),
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
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
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
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
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
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [aux_sym__repository_start_token16] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_add_token1] = ACTIONS(136),
    [aux_sym_arg_token1] = ACTIONS(136),
    [aux_sym_cmd_token1] = ACTIONS(136),
    [aux_sym_copy_token1] = ACTIONS(136),
    [aux_sym_entrypoint_token1] = ACTIONS(136),
    [aux_sym_env_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(134),
    [aux_sym_healthcheck_token1] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [aux_sym_maintainer_token1] = ACTIONS(136),
    [aux_sym_onbuild_token1] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_shell_token1] = ACTIONS(136),
    [aux_sym_stopsignal_token1] = ACTIONS(136),
    [aux_sym_user_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(134),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token16] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
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
    [aux_sym__repository_start_repeat4] = STATE(32),
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
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token12] = ACTIONS(213),
    [aux_sym__repository_start_token15] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [sym_port_protocol] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_add_token1] = ACTIONS(215),
    [aux_sym_arg_token1] = ACTIONS(215),
    [aux_sym_cmd_token1] = ACTIONS(215),
    [aux_sym_copy_token1] = ACTIONS(215),
    [aux_sym_entrypoint_token1] = ACTIONS(215),
    [aux_sym_env_token1] = ACTIONS(215),
    [aux_sym_expose_token1] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [aux_sym_from_token1] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [aux_sym_healthcheck_token1] = ACTIONS(215),
    [aux_sym_label_token1] = ACTIONS(215),
    [aux_sym_maintainer_token1] = ACTIONS(215),
    [aux_sym_onbuild_token1] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(215),
    [aux_sym_shell_token1] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [aux_sym__port_part_token1] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [sym_port_protocol] = STATE(81),
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
    [anon_sym_SLASH] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_add_token1] = ACTIONS(165),
    [aux_sym_arg_token1] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_copy_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_env_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [aux_sym_healthcheck_token1] = ACTIONS(165),
    [aux_sym_label_token1] = ACTIONS(165),
    [aux_sym_maintainer_token1] = ACTIONS(165),
    [aux_sym_onbuild_token1] = ACTIONS(165),
    [aux_sym_run_token1] = ACTIONS(165),
    [aux_sym_shell_token1] = ACTIONS(165),
    [aux_sym_stopsignal_token1] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(165),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token4] = ACTIONS(221),
    [aux_sym__repository_start_token7] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(143),
    [aux_sym_arg_token1] = ACTIONS(143),
    [aux_sym_cmd_token1] = ACTIONS(143),
    [aux_sym_copy_token1] = ACTIONS(143),
    [aux_sym_entrypoint_token1] = ACTIONS(143),
    [aux_sym_env_token1] = ACTIONS(143),
    [aux_sym_expose_token1] = ACTIONS(143),
    [aux_sym_from_token1] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(143),
    [aux_sym_label_token1] = ACTIONS(143),
    [aux_sym_maintainer_token1] = ACTIONS(143),
    [aux_sym_onbuild_token1] = ACTIONS(143),
    [aux_sym_run_token1] = ACTIONS(143),
    [aux_sym_shell_token1] = ACTIONS(143),
    [aux_sym_stopsignal_token1] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(143),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [aux_sym__repository_start_token4] = ACTIONS(226),
    [aux_sym__repository_start_token7] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_add_token1] = ACTIONS(136),
    [aux_sym_arg_token1] = ACTIONS(136),
    [aux_sym_cmd_token1] = ACTIONS(136),
    [aux_sym_copy_token1] = ACTIONS(136),
    [aux_sym_entrypoint_token1] = ACTIONS(136),
    [aux_sym_env_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(134),
    [aux_sym_healthcheck_token1] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [aux_sym_maintainer_token1] = ACTIONS(136),
    [aux_sym_onbuild_token1] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_shell_token1] = ACTIONS(136),
    [aux_sym_stopsignal_token1] = ACTIONS(136),
    [aux_sym_user_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token2] = ACTIONS(228),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat4] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(143),
    [aux_sym_arg_token1] = ACTIONS(143),
    [aux_sym_cmd_token1] = ACTIONS(143),
    [aux_sym_copy_token1] = ACTIONS(143),
    [aux_sym_entrypoint_token1] = ACTIONS(143),
    [aux_sym_env_token1] = ACTIONS(143),
    [aux_sym_expose_token1] = ACTIONS(143),
    [aux_sym_from_token1] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(143),
    [aux_sym_label_token1] = ACTIONS(143),
    [aux_sym_maintainer_token1] = ACTIONS(143),
    [aux_sym_onbuild_token1] = ACTIONS(143),
    [aux_sym_run_token1] = ACTIONS(143),
    [aux_sym_shell_token1] = ACTIONS(143),
    [aux_sym_stopsignal_token1] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(143),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [aux_sym__repository_start_token12] = ACTIONS(213),
    [aux_sym__repository_start_token15] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token8] = ACTIONS(231),
    [aux_sym__repository_start_token11] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat2] = STATE(30),
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
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(226),
    [aux_sym__repository_start_token7] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat1] = STATE(31),
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
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [aux_sym__repository_start_token2] = ACTIONS(233),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_add_token1] = ACTIONS(181),
    [aux_sym_arg_token1] = ACTIONS(181),
    [aux_sym_cmd_token1] = ACTIONS(181),
    [aux_sym_copy_token1] = ACTIONS(181),
    [aux_sym_entrypoint_token1] = ACTIONS(181),
    [aux_sym_env_token1] = ACTIONS(181),
    [aux_sym_expose_token1] = ACTIONS(181),
    [aux_sym_from_token1] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [aux_sym_healthcheck_token1] = ACTIONS(181),
    [aux_sym_label_token1] = ACTIONS(181),
    [aux_sym_maintainer_token1] = ACTIONS(181),
    [aux_sym_onbuild_token1] = ACTIONS(181),
    [aux_sym_run_token1] = ACTIONS(181),
    [aux_sym_shell_token1] = ACTIONS(181),
    [aux_sym_stopsignal_token1] = ACTIONS(181),
    [aux_sym_user_token1] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [aux_sym__repository_start_token2] = ACTIONS(233),
    [aux_sym__repository_start_token3] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat4] = STATE(37),
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
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token12] = ACTIONS(237),
    [aux_sym__repository_start_token15] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat3] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(170),
    [aux_sym_healthcheck_token1] = ACTIONS(172),
    [aux_sym_label_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_onbuild_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_user_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token8] = ACTIONS(240),
    [aux_sym__repository_start_token11] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat3] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(143),
    [aux_sym_arg_token1] = ACTIONS(143),
    [aux_sym_cmd_token1] = ACTIONS(143),
    [aux_sym_copy_token1] = ACTIONS(143),
    [aux_sym_entrypoint_token1] = ACTIONS(143),
    [aux_sym_env_token1] = ACTIONS(143),
    [aux_sym_expose_token1] = ACTIONS(143),
    [aux_sym_from_token1] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(143),
    [aux_sym_label_token1] = ACTIONS(143),
    [aux_sym_maintainer_token1] = ACTIONS(143),
    [aux_sym_onbuild_token1] = ACTIONS(143),
    [aux_sym_run_token1] = ACTIONS(143),
    [aux_sym_shell_token1] = ACTIONS(143),
    [aux_sym_stopsignal_token1] = ACTIONS(143),
    [aux_sym_user_token1] = ACTIONS(143),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [aux_sym__repository_start_token8] = ACTIONS(231),
    [aux_sym__repository_start_token11] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
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
  [42] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_add_token1] = ACTIONS(243),
    [aux_sym_arg_token1] = ACTIONS(243),
    [aux_sym_cmd_token1] = ACTIONS(243),
    [aux_sym_copy_token1] = ACTIONS(243),
    [aux_sym_entrypoint_token1] = ACTIONS(243),
    [aux_sym_env_token1] = ACTIONS(243),
    [aux_sym_expose_token1] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [aux_sym_from_token1] = ACTIONS(243),
    [aux_sym_healthcheck_token1] = ACTIONS(243),
    [aux_sym_label_token1] = ACTIONS(243),
    [aux_sym_maintainer_token1] = ACTIONS(243),
    [aux_sym_onbuild_token1] = ACTIONS(243),
    [aux_sym_run_token1] = ACTIONS(243),
    [aux_sym_shell_token1] = ACTIONS(243),
    [aux_sym_stopsignal_token1] = ACTIONS(243),
    [aux_sym_user_token1] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(248),
    [aux_sym_volume_token1] = ACTIONS(243),
    [aux_sym_workdir_token1] = ACTIONS(243),
    [aux_sym_path_token1] = ACTIONS(251),
    [aux_sym_path_token2] = ACTIONS(254),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [43] = {
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
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
    [aux_sym__repository_start_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym_add_token1] = ACTIONS(259),
    [aux_sym_arg_token1] = ACTIONS(259),
    [aux_sym_cmd_token1] = ACTIONS(259),
    [aux_sym_copy_token1] = ACTIONS(259),
    [aux_sym_entrypoint_token1] = ACTIONS(259),
    [aux_sym_env_token1] = ACTIONS(259),
    [aux_sym_expose_token1] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(257),
    [aux_sym_healthcheck_token1] = ACTIONS(259),
    [aux_sym_label_token1] = ACTIONS(259),
    [aux_sym_maintainer_token1] = ACTIONS(259),
    [aux_sym_onbuild_token1] = ACTIONS(259),
    [aux_sym_run_token1] = ACTIONS(259),
    [aux_sym_shell_token1] = ACTIONS(259),
    [aux_sym_stopsignal_token1] = ACTIONS(259),
    [aux_sym_user_token1] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(259),
    [aux_sym_workdir_token1] = ACTIONS(259),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(257),
    [sym__space_no_newline] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [aux_sym_path_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_healthcheck_token1] = ACTIONS(263),
    [aux_sym_label_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_onbuild_token1] = ACTIONS(263),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_shell_token1] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(263),
    [aux_sym_user_token1] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym__space_no_newline] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
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
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(273),
    [aux_sym_healthcheck_token1] = ACTIONS(275),
    [aux_sym_label_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_onbuild_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [48] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token15] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
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
  [50] = {
    [aux_sym_path_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_path_token1] = ACTIONS(281),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(285),
    [aux_sym_healthcheck_token1] = ACTIONS(285),
    [aux_sym_label_token1] = ACTIONS(285),
    [aux_sym_maintainer_token1] = ACTIONS(285),
    [aux_sym_onbuild_token1] = ACTIONS(285),
    [aux_sym_run_token1] = ACTIONS(285),
    [aux_sym_shell_token1] = ACTIONS(285),
    [aux_sym_stopsignal_token1] = ACTIONS(285),
    [aux_sym_user_token1] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(285),
    [aux_sym_workdir_token1] = ACTIONS(285),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(195),
    [aux_sym_arg_token1] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(195),
    [aux_sym_copy_token1] = ACTIONS(195),
    [aux_sym_entrypoint_token1] = ACTIONS(195),
    [aux_sym_env_token1] = ACTIONS(195),
    [aux_sym_expose_token1] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [aux_sym_healthcheck_token1] = ACTIONS(195),
    [aux_sym_label_token1] = ACTIONS(195),
    [aux_sym_maintainer_token1] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(195),
    [aux_sym_run_token1] = ACTIONS(195),
    [aux_sym_shell_token1] = ACTIONS(195),
    [aux_sym_stopsignal_token1] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [aux_sym__port_part_token1] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_add_token1] = ACTIONS(295),
    [aux_sym_arg_token1] = ACTIONS(295),
    [aux_sym_cmd_token1] = ACTIONS(295),
    [aux_sym_copy_token1] = ACTIONS(295),
    [aux_sym_entrypoint_token1] = ACTIONS(295),
    [aux_sym_env_token1] = ACTIONS(295),
    [aux_sym_expose_token1] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(295),
    [aux_sym_healthcheck_token1] = ACTIONS(295),
    [aux_sym_label_token1] = ACTIONS(295),
    [aux_sym_maintainer_token1] = ACTIONS(295),
    [aux_sym_onbuild_token1] = ACTIONS(295),
    [aux_sym_run_token1] = ACTIONS(295),
    [aux_sym_shell_token1] = ACTIONS(295),
    [aux_sym_stopsignal_token1] = ACTIONS(295),
    [aux_sym_user_token1] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [54] = {
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
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_user_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_add_token1] = ACTIONS(136),
    [aux_sym_arg_token1] = ACTIONS(136),
    [aux_sym_cmd_token1] = ACTIONS(136),
    [aux_sym_copy_token1] = ACTIONS(136),
    [aux_sym_entrypoint_token1] = ACTIONS(136),
    [aux_sym_env_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(134),
    [aux_sym_healthcheck_token1] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [aux_sym_maintainer_token1] = ACTIONS(136),
    [aux_sym_onbuild_token1] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_shell_token1] = ACTIONS(136),
    [aux_sym_stopsignal_token1] = ACTIONS(136),
    [aux_sym_user_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token2] = ACTIONS(134),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(299),
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
    [aux_sym__repository_start_token3] = ACTIONS(303),
    [aux_sym__repository_start_token4] = ACTIONS(149),
    [aux_sym__repository_start_token7] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_add_token1] = ACTIONS(191),
    [aux_sym_arg_token1] = ACTIONS(191),
    [aux_sym_cmd_token1] = ACTIONS(191),
    [aux_sym_copy_token1] = ACTIONS(191),
    [aux_sym_entrypoint_token1] = ACTIONS(191),
    [aux_sym_env_token1] = ACTIONS(191),
    [aux_sym_expose_token1] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [aux_sym_from_token1] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [aux_sym_healthcheck_token1] = ACTIONS(191),
    [aux_sym_label_token1] = ACTIONS(191),
    [aux_sym_maintainer_token1] = ACTIONS(191),
    [aux_sym_onbuild_token1] = ACTIONS(191),
    [aux_sym_run_token1] = ACTIONS(191),
    [aux_sym_shell_token1] = ACTIONS(191),
    [aux_sym_stopsignal_token1] = ACTIONS(191),
    [aux_sym_user_token1] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_volume_token1] = ACTIONS(191),
    [aux_sym_workdir_token1] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [aux_sym__port_part_token1] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym_path_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [aux_sym_healthcheck_token1] = ACTIONS(305),
    [aux_sym_label_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_onbuild_token1] = ACTIONS(305),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_shell_token1] = ACTIONS(305),
    [aux_sym_stopsignal_token1] = ACTIONS(305),
    [aux_sym_user_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(307),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(310),
    [aux_sym_path_token2] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(299),
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
    [aux_sym__repository_start_token3] = ACTIONS(303),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [aux_sym__repository_start_repeat4] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(299),
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
    [aux_sym__repository_start_token3] = ACTIONS(303),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
    [aux_sym__repository_start_repeat4] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(273),
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
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [63] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(315),
    [aux_sym_add_token1] = ACTIONS(315),
    [aux_sym_arg_token1] = ACTIONS(315),
    [aux_sym_cmd_token1] = ACTIONS(315),
    [aux_sym_copy_token1] = ACTIONS(315),
    [aux_sym_entrypoint_token1] = ACTIONS(315),
    [aux_sym_env_token1] = ACTIONS(315),
    [aux_sym_expose_token1] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(315),
    [aux_sym_healthcheck_token1] = ACTIONS(315),
    [aux_sym_label_token1] = ACTIONS(315),
    [aux_sym_maintainer_token1] = ACTIONS(315),
    [aux_sym_onbuild_token1] = ACTIONS(315),
    [aux_sym_run_token1] = ACTIONS(315),
    [aux_sym_shell_token1] = ACTIONS(315),
    [aux_sym_stopsignal_token1] = ACTIONS(315),
    [aux_sym_user_token1] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [aux_sym__repository_start_repeat3] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(273),
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
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat2] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(273),
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
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [aux_sym__repository_start_token4] = ACTIONS(149),
    [aux_sym__repository_start_token7] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__repository_start_repeat3] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(317),
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
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(323),
    [aux_sym_healthcheck_token1] = ACTIONS(323),
    [aux_sym_label_token1] = ACTIONS(323),
    [aux_sym_maintainer_token1] = ACTIONS(323),
    [aux_sym_onbuild_token1] = ACTIONS(323),
    [aux_sym_run_token1] = ACTIONS(323),
    [aux_sym_shell_token1] = ACTIONS(323),
    [aux_sym_stopsignal_token1] = ACTIONS(323),
    [aux_sym_user_token1] = ACTIONS(323),
    [aux_sym_volume_token1] = ACTIONS(323),
    [aux_sym_workdir_token1] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(327),
    [aux_sym__repository_start_token16] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
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
    [aux_sym_volume_token1] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(331),
    [aux_sym__repository_start_token3] = ACTIONS(333),
    [aux_sym__repository_start_token4] = ACTIONS(149),
    [aux_sym__repository_start_token7] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
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
    [aux_sym_volume_token1] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(331),
    [aux_sym__repository_start_token3] = ACTIONS(333),
    [aux_sym__repository_start_token8] = ACTIONS(161),
    [aux_sym__repository_start_token11] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_add_token1] = ACTIONS(191),
    [aux_sym_arg_token1] = ACTIONS(191),
    [aux_sym_cmd_token1] = ACTIONS(191),
    [aux_sym_copy_token1] = ACTIONS(191),
    [aux_sym_entrypoint_token1] = ACTIONS(191),
    [aux_sym_env_token1] = ACTIONS(191),
    [aux_sym_expose_token1] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [aux_sym_from_token1] = ACTIONS(191),
    [aux_sym_healthcheck_token1] = ACTIONS(191),
    [aux_sym_label_token1] = ACTIONS(191),
    [aux_sym_maintainer_token1] = ACTIONS(191),
    [aux_sym_onbuild_token1] = ACTIONS(191),
    [aux_sym_run_token1] = ACTIONS(191),
    [aux_sym_shell_token1] = ACTIONS(191),
    [aux_sym_stopsignal_token1] = ACTIONS(191),
    [aux_sym_user_token1] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_volume_token1] = ACTIONS(191),
    [aux_sym_workdir_token1] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [aux_sym__repository_start_repeat4] = STATE(7),
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
    [aux_sym_volume_token1] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(331),
    [aux_sym__repository_start_token3] = ACTIONS(333),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_env_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [aux_sym_healthcheck_token1] = ACTIONS(335),
    [aux_sym_label_token1] = ACTIONS(335),
    [aux_sym_maintainer_token1] = ACTIONS(335),
    [aux_sym_onbuild_token1] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_shell_token1] = ACTIONS(335),
    [aux_sym_stopsignal_token1] = ACTIONS(335),
    [aux_sym_user_token1] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [aux_sym__port_part_token1] = ACTIONS(335),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(335),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
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
    [aux_sym_path_token1] = ACTIONS(209),
    [aux_sym_path_token2] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
    [aux_sym__repository_start_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(317),
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
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(319),
    [aux_sym_workdir_token1] = ACTIONS(319),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(141),
    [aux_sym_arg_token1] = ACTIONS(141),
    [aux_sym_cmd_token1] = ACTIONS(141),
    [aux_sym_copy_token1] = ACTIONS(141),
    [aux_sym_entrypoint_token1] = ACTIONS(141),
    [aux_sym_env_token1] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(141),
    [aux_sym_from_token1] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(141),
    [aux_sym_label_token1] = ACTIONS(141),
    [aux_sym_maintainer_token1] = ACTIONS(141),
    [aux_sym_onbuild_token1] = ACTIONS(141),
    [aux_sym_run_token1] = ACTIONS(141),
    [aux_sym_shell_token1] = ACTIONS(141),
    [aux_sym_stopsignal_token1] = ACTIONS(141),
    [aux_sym_user_token1] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(141),
    [aux_sym_workdir_token1] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [aux_sym_healthcheck_token1] = ACTIONS(305),
    [aux_sym_label_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_onbuild_token1] = ACTIONS(305),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_shell_token1] = ACTIONS(305),
    [aux_sym_stopsignal_token1] = ACTIONS(305),
    [aux_sym_user_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(310),
    [aux_sym_path_token2] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [77] = {
    [aux_sym__repository_start_repeat2] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(317),
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
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [aux_sym__repository_start_token4] = ACTIONS(149),
    [aux_sym__repository_start_token7] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym_add_token1] = ACTIONS(337),
    [aux_sym_arg_token1] = ACTIONS(337),
    [aux_sym_cmd_token1] = ACTIONS(337),
    [aux_sym_copy_token1] = ACTIONS(337),
    [aux_sym_entrypoint_token1] = ACTIONS(337),
    [aux_sym_env_token1] = ACTIONS(337),
    [aux_sym_expose_token1] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [aux_sym_from_token1] = ACTIONS(337),
    [aux_sym_healthcheck_token1] = ACTIONS(337),
    [aux_sym_label_token1] = ACTIONS(337),
    [aux_sym_maintainer_token1] = ACTIONS(337),
    [aux_sym_onbuild_token1] = ACTIONS(337),
    [aux_sym_run_token1] = ACTIONS(337),
    [aux_sym_shell_token1] = ACTIONS(337),
    [aux_sym_stopsignal_token1] = ACTIONS(337),
    [aux_sym_user_token1] = ACTIONS(337),
    [anon_sym_DOLLAR] = ACTIONS(337),
    [aux_sym_volume_token1] = ACTIONS(337),
    [aux_sym_workdir_token1] = ACTIONS(337),
    [aux_sym_path_token1] = ACTIONS(339),
    [aux_sym_path_token2] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(337),
    [sym__space_no_newline] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_add_token1] = ACTIONS(341),
    [aux_sym_arg_token1] = ACTIONS(341),
    [aux_sym_cmd_token1] = ACTIONS(341),
    [aux_sym_copy_token1] = ACTIONS(341),
    [aux_sym_entrypoint_token1] = ACTIONS(341),
    [aux_sym_env_token1] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [aux_sym_from_token1] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [aux_sym_healthcheck_token1] = ACTIONS(341),
    [aux_sym_label_token1] = ACTIONS(341),
    [aux_sym_maintainer_token1] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(341),
    [aux_sym_run_token1] = ACTIONS(341),
    [aux_sym_shell_token1] = ACTIONS(341),
    [aux_sym_stopsignal_token1] = ACTIONS(341),
    [aux_sym_user_token1] = ACTIONS(341),
    [anon_sym_DOLLAR] = ACTIONS(341),
    [aux_sym_volume_token1] = ACTIONS(341),
    [aux_sym_workdir_token1] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(343),
    [aux_sym__port_part_token1] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_path_token1] = ACTIONS(283),
    [aux_sym_path_token2] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_add_token1] = ACTIONS(345),
    [aux_sym_arg_token1] = ACTIONS(345),
    [aux_sym_cmd_token1] = ACTIONS(345),
    [aux_sym_copy_token1] = ACTIONS(345),
    [aux_sym_entrypoint_token1] = ACTIONS(345),
    [aux_sym_env_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym_from_token1] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [aux_sym_healthcheck_token1] = ACTIONS(345),
    [aux_sym_label_token1] = ACTIONS(345),
    [aux_sym_maintainer_token1] = ACTIONS(345),
    [aux_sym_onbuild_token1] = ACTIONS(345),
    [aux_sym_run_token1] = ACTIONS(345),
    [aux_sym_shell_token1] = ACTIONS(345),
    [aux_sym_stopsignal_token1] = ACTIONS(345),
    [aux_sym_user_token1] = ACTIONS(345),
    [anon_sym_DOLLAR] = ACTIONS(345),
    [aux_sym_volume_token1] = ACTIONS(345),
    [aux_sym_workdir_token1] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [aux_sym__port_part_token1] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(347),
    [aux_sym_arg_token1] = ACTIONS(347),
    [aux_sym_cmd_token1] = ACTIONS(347),
    [aux_sym_copy_token1] = ACTIONS(347),
    [aux_sym_entrypoint_token1] = ACTIONS(347),
    [aux_sym_env_token1] = ACTIONS(347),
    [aux_sym_expose_token1] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [aux_sym_from_token1] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [aux_sym_healthcheck_token1] = ACTIONS(347),
    [aux_sym_label_token1] = ACTIONS(347),
    [aux_sym_maintainer_token1] = ACTIONS(347),
    [aux_sym_onbuild_token1] = ACTIONS(347),
    [aux_sym_run_token1] = ACTIONS(347),
    [aux_sym_shell_token1] = ACTIONS(347),
    [aux_sym_stopsignal_token1] = ACTIONS(347),
    [aux_sym_user_token1] = ACTIONS(347),
    [anon_sym_DOLLAR] = ACTIONS(347),
    [aux_sym_volume_token1] = ACTIONS(347),
    [aux_sym_workdir_token1] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [aux_sym__port_part_token1] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [83] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [aux_sym_add_token1] = ACTIONS(349),
    [aux_sym_arg_token1] = ACTIONS(349),
    [aux_sym_cmd_token1] = ACTIONS(349),
    [aux_sym_copy_token1] = ACTIONS(349),
    [aux_sym_entrypoint_token1] = ACTIONS(349),
    [aux_sym_env_token1] = ACTIONS(349),
    [aux_sym_expose_token1] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_from_token1] = ACTIONS(349),
    [aux_sym_healthcheck_token1] = ACTIONS(349),
    [aux_sym_label_token1] = ACTIONS(349),
    [aux_sym_maintainer_token1] = ACTIONS(349),
    [aux_sym_onbuild_token1] = ACTIONS(349),
    [aux_sym_run_token1] = ACTIONS(349),
    [aux_sym_shell_token1] = ACTIONS(349),
    [aux_sym_stopsignal_token1] = ACTIONS(349),
    [aux_sym_user_token1] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [aux_sym_volume_token1] = ACTIONS(349),
    [aux_sym_workdir_token1] = ACTIONS(349),
    [aux_sym_path_token1] = ACTIONS(351),
    [aux_sym_path_token2] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(349),
    [sym__space_no_newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(195),
    [aux_sym_arg_token1] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(195),
    [aux_sym_copy_token1] = ACTIONS(195),
    [aux_sym_entrypoint_token1] = ACTIONS(195),
    [aux_sym_env_token1] = ACTIONS(195),
    [aux_sym_expose_token1] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(195),
    [aux_sym_healthcheck_token1] = ACTIONS(195),
    [aux_sym_label_token1] = ACTIONS(195),
    [aux_sym_maintainer_token1] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(195),
    [aux_sym_run_token1] = ACTIONS(195),
    [aux_sym_shell_token1] = ACTIONS(195),
    [aux_sym_stopsignal_token1] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [aux_sym_path_token1] = ACTIONS(197),
    [aux_sym_path_token2] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(151),
    [aux_sym_healthcheck_token1] = ACTIONS(151),
    [aux_sym_label_token1] = ACTIONS(151),
    [aux_sym_maintainer_token1] = ACTIONS(151),
    [aux_sym_onbuild_token1] = ACTIONS(151),
    [aux_sym_run_token1] = ACTIONS(151),
    [aux_sym_shell_token1] = ACTIONS(151),
    [aux_sym_stopsignal_token1] = ACTIONS(151),
    [aux_sym_user_token1] = ACTIONS(151),
    [aux_sym_volume_token1] = ACTIONS(151),
    [aux_sym_workdir_token1] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
    [aux_sym__repository_start_repeat4] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(317),
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
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token15] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_env_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [aux_sym_healthcheck_token1] = ACTIONS(355),
    [aux_sym_label_token1] = ACTIONS(355),
    [aux_sym_maintainer_token1] = ACTIONS(355),
    [aux_sym_onbuild_token1] = ACTIONS(355),
    [aux_sym_run_token1] = ACTIONS(355),
    [aux_sym_shell_token1] = ACTIONS(355),
    [aux_sym_stopsignal_token1] = ACTIONS(355),
    [aux_sym_user_token1] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(355),
    [aux_sym_volume_token1] = ACTIONS(355),
    [aux_sym_workdir_token1] = ACTIONS(355),
    [aux_sym_path_token1] = ACTIONS(357),
    [aux_sym_path_token2] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym__space_no_newline] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_add_token1] = ACTIONS(359),
    [aux_sym_arg_token1] = ACTIONS(359),
    [aux_sym_cmd_token1] = ACTIONS(359),
    [aux_sym_copy_token1] = ACTIONS(359),
    [aux_sym_entrypoint_token1] = ACTIONS(359),
    [aux_sym_env_token1] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [aux_sym_from_token1] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(359),
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
    [anon_sym_SLASH] = ACTIONS(363),
    [aux_sym__repository_start_token16] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(359),
    [sym__space_no_newline] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [aux_sym__repository_start_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_add_token1] = ACTIONS(367),
    [aux_sym_arg_token1] = ACTIONS(367),
    [aux_sym_cmd_token1] = ACTIONS(367),
    [aux_sym_copy_token1] = ACTIONS(367),
    [aux_sym_entrypoint_token1] = ACTIONS(367),
    [aux_sym_env_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym_healthcheck_token1] = ACTIONS(367),
    [aux_sym_label_token1] = ACTIONS(367),
    [aux_sym_maintainer_token1] = ACTIONS(367),
    [aux_sym_onbuild_token1] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_shell_token1] = ACTIONS(367),
    [aux_sym_stopsignal_token1] = ACTIONS(367),
    [aux_sym_user_token1] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(367),
    [aux_sym_workdir_token1] = ACTIONS(367),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(365),
    [sym__space_no_newline] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [aux_sym_path_token1] = ACTIONS(373),
    [aux_sym_path_token2] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym__space_no_newline] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym_add_token1] = ACTIONS(375),
    [aux_sym_arg_token1] = ACTIONS(375),
    [aux_sym_cmd_token1] = ACTIONS(375),
    [aux_sym_copy_token1] = ACTIONS(375),
    [aux_sym_entrypoint_token1] = ACTIONS(375),
    [aux_sym_env_token1] = ACTIONS(375),
    [aux_sym_expose_token1] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [aux_sym_from_token1] = ACTIONS(375),
    [aux_sym_healthcheck_token1] = ACTIONS(375),
    [aux_sym_label_token1] = ACTIONS(375),
    [aux_sym_maintainer_token1] = ACTIONS(375),
    [aux_sym_onbuild_token1] = ACTIONS(375),
    [aux_sym_run_token1] = ACTIONS(375),
    [aux_sym_shell_token1] = ACTIONS(375),
    [aux_sym_stopsignal_token1] = ACTIONS(375),
    [aux_sym_user_token1] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [aux_sym_volume_token1] = ACTIONS(375),
    [aux_sym_workdir_token1] = ACTIONS(375),
    [aux_sym_path_token1] = ACTIONS(377),
    [aux_sym_path_token2] = ACTIONS(377),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(375),
    [sym__space_no_newline] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_add_token1] = ACTIONS(243),
    [aux_sym_arg_token1] = ACTIONS(243),
    [aux_sym_cmd_token1] = ACTIONS(243),
    [aux_sym_copy_token1] = ACTIONS(243),
    [aux_sym_entrypoint_token1] = ACTIONS(243),
    [aux_sym_env_token1] = ACTIONS(243),
    [aux_sym_expose_token1] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [aux_sym_from_token1] = ACTIONS(243),
    [aux_sym_healthcheck_token1] = ACTIONS(243),
    [aux_sym_label_token1] = ACTIONS(243),
    [aux_sym_maintainer_token1] = ACTIONS(243),
    [aux_sym_onbuild_token1] = ACTIONS(243),
    [aux_sym_run_token1] = ACTIONS(243),
    [aux_sym_shell_token1] = ACTIONS(243),
    [aux_sym_stopsignal_token1] = ACTIONS(243),
    [aux_sym_user_token1] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(243),
    [aux_sym_volume_token1] = ACTIONS(243),
    [aux_sym_workdir_token1] = ACTIONS(243),
    [aux_sym_path_token1] = ACTIONS(379),
    [aux_sym_path_token2] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
    [aux_sym__repository_start_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(381),
    [aux_sym_add_token1] = ACTIONS(383),
    [aux_sym_arg_token1] = ACTIONS(383),
    [aux_sym_cmd_token1] = ACTIONS(383),
    [aux_sym_copy_token1] = ACTIONS(383),
    [aux_sym_entrypoint_token1] = ACTIONS(383),
    [aux_sym_env_token1] = ACTIONS(383),
    [aux_sym_expose_token1] = ACTIONS(383),
    [aux_sym_from_token1] = ACTIONS(383),
    [aux_sym_healthcheck_token1] = ACTIONS(383),
    [aux_sym_label_token1] = ACTIONS(383),
    [aux_sym_maintainer_token1] = ACTIONS(383),
    [aux_sym_onbuild_token1] = ACTIONS(383),
    [aux_sym_run_token1] = ACTIONS(383),
    [aux_sym_shell_token1] = ACTIONS(383),
    [aux_sym_stopsignal_token1] = ACTIONS(383),
    [aux_sym_user_token1] = ACTIONS(383),
    [anon_sym_DOLLAR] = ACTIONS(385),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym__repository_start_token2] = ACTIONS(385),
    [aux_sym__repository_start_token3] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_path_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_path_token1] = ACTIONS(391),
    [aux_sym_path_token2] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
    [aux_sym_path_repeat1] = STATE(95),
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
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(395),
    [aux_sym_path_token2] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
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
    [anon_sym_COLON] = ACTIONS(399),
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
  [98] = {
    [aux_sym__repository_start_repeat4] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(401),
    [aux_sym_add_token1] = ACTIONS(403),
    [aux_sym_arg_token1] = ACTIONS(403),
    [aux_sym_cmd_token1] = ACTIONS(403),
    [aux_sym_copy_token1] = ACTIONS(403),
    [aux_sym_entrypoint_token1] = ACTIONS(403),
    [aux_sym_env_token1] = ACTIONS(403),
    [aux_sym_expose_token1] = ACTIONS(403),
    [aux_sym_from_token1] = ACTIONS(403),
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
    [aux_sym__repository_start_token3] = ACTIONS(405),
    [aux_sym__repository_start_token12] = ACTIONS(407),
    [aux_sym__repository_start_token15] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(401),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__repository_start_repeat3] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(401),
    [aux_sym_add_token1] = ACTIONS(403),
    [aux_sym_arg_token1] = ACTIONS(403),
    [aux_sym_cmd_token1] = ACTIONS(403),
    [aux_sym_copy_token1] = ACTIONS(403),
    [aux_sym_entrypoint_token1] = ACTIONS(403),
    [aux_sym_env_token1] = ACTIONS(403),
    [aux_sym_expose_token1] = ACTIONS(403),
    [aux_sym_from_token1] = ACTIONS(403),
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
    [aux_sym__repository_start_token3] = ACTIONS(405),
    [aux_sym__repository_start_token8] = ACTIONS(409),
    [aux_sym__repository_start_token11] = ACTIONS(409),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(401),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [aux_sym__repository_start_repeat3] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(172),
    [aux_sym_label_token1] = ACTIONS(172),
    [aux_sym_maintainer_token1] = ACTIONS(172),
    [aux_sym_onbuild_token1] = ACTIONS(172),
    [aux_sym_run_token1] = ACTIONS(172),
    [aux_sym_shell_token1] = ACTIONS(172),
    [aux_sym_stopsignal_token1] = ACTIONS(172),
    [aux_sym_user_token1] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token8] = ACTIONS(411),
    [aux_sym__repository_start_token11] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [aux_sym__repository_start_repeat2] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(401),
    [aux_sym_add_token1] = ACTIONS(403),
    [aux_sym_arg_token1] = ACTIONS(403),
    [aux_sym_cmd_token1] = ACTIONS(403),
    [aux_sym_copy_token1] = ACTIONS(403),
    [aux_sym_entrypoint_token1] = ACTIONS(403),
    [aux_sym_env_token1] = ACTIONS(403),
    [aux_sym_expose_token1] = ACTIONS(403),
    [aux_sym_from_token1] = ACTIONS(403),
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
    [aux_sym__repository_start_token3] = ACTIONS(405),
    [aux_sym__repository_start_token4] = ACTIONS(414),
    [aux_sym__repository_start_token7] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(401),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [102] = {
    [aux_sym__repository_start_repeat4] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(129),
    [aux_sym_arg_token1] = ACTIONS(129),
    [aux_sym_cmd_token1] = ACTIONS(129),
    [aux_sym_copy_token1] = ACTIONS(129),
    [aux_sym_entrypoint_token1] = ACTIONS(129),
    [aux_sym_env_token1] = ACTIONS(129),
    [aux_sym_expose_token1] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(129),
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
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token12] = ACTIONS(416),
    [aux_sym__repository_start_token15] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [aux_sym_add_token1] = ACTIONS(419),
    [aux_sym_arg_token1] = ACTIONS(419),
    [aux_sym_cmd_token1] = ACTIONS(419),
    [aux_sym_copy_token1] = ACTIONS(419),
    [aux_sym_entrypoint_token1] = ACTIONS(419),
    [aux_sym_env_token1] = ACTIONS(419),
    [aux_sym_expose_token1] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [aux_sym_from_token1] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [aux_sym_healthcheck_token1] = ACTIONS(419),
    [aux_sym_label_token1] = ACTIONS(419),
    [aux_sym_maintainer_token1] = ACTIONS(419),
    [aux_sym_onbuild_token1] = ACTIONS(419),
    [aux_sym_run_token1] = ACTIONS(419),
    [aux_sym_shell_token1] = ACTIONS(419),
    [aux_sym_stopsignal_token1] = ACTIONS(419),
    [aux_sym_user_token1] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [aux_sym_volume_token1] = ACTIONS(419),
    [aux_sym_workdir_token1] = ACTIONS(419),
    [aux_sym__port_part_token1] = ACTIONS(419),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [aux_sym__repository_start_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_add_token1] = ACTIONS(423),
    [aux_sym_arg_token1] = ACTIONS(423),
    [aux_sym_cmd_token1] = ACTIONS(423),
    [aux_sym_copy_token1] = ACTIONS(423),
    [aux_sym_entrypoint_token1] = ACTIONS(423),
    [aux_sym_env_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym_healthcheck_token1] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(423),
    [aux_sym_maintainer_token1] = ACTIONS(423),
    [aux_sym_onbuild_token1] = ACTIONS(423),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_shell_token1] = ACTIONS(423),
    [aux_sym_stopsignal_token1] = ACTIONS(423),
    [aux_sym_user_token1] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(385),
    [aux_sym_volume_token1] = ACTIONS(423),
    [aux_sym_workdir_token1] = ACTIONS(423),
    [aux_sym__repository_start_token2] = ACTIONS(385),
    [aux_sym__repository_start_token3] = ACTIONS(425),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(427),
    [aux_sym_arg_token1] = ACTIONS(427),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_copy_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_env_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [aux_sym_healthcheck_token1] = ACTIONS(427),
    [aux_sym_label_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_onbuild_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_shell_token1] = ACTIONS(427),
    [aux_sym_stopsignal_token1] = ACTIONS(427),
    [aux_sym_user_token1] = ACTIONS(427),
    [anon_sym_DOLLAR] = ACTIONS(427),
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [aux_sym__port_part_token1] = ACTIONS(427),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym__repository_start_repeat2] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_add_token1] = ACTIONS(423),
    [aux_sym_arg_token1] = ACTIONS(423),
    [aux_sym_cmd_token1] = ACTIONS(423),
    [aux_sym_copy_token1] = ACTIONS(423),
    [aux_sym_entrypoint_token1] = ACTIONS(423),
    [aux_sym_env_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym_healthcheck_token1] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(423),
    [aux_sym_maintainer_token1] = ACTIONS(423),
    [aux_sym_onbuild_token1] = ACTIONS(423),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_shell_token1] = ACTIONS(423),
    [aux_sym_stopsignal_token1] = ACTIONS(423),
    [aux_sym_user_token1] = ACTIONS(423),
    [aux_sym_volume_token1] = ACTIONS(423),
    [aux_sym_workdir_token1] = ACTIONS(423),
    [aux_sym__repository_start_token3] = ACTIONS(425),
    [aux_sym__repository_start_token4] = ACTIONS(414),
    [aux_sym__repository_start_token7] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [aux_sym__repository_start_repeat3] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_add_token1] = ACTIONS(423),
    [aux_sym_arg_token1] = ACTIONS(423),
    [aux_sym_cmd_token1] = ACTIONS(423),
    [aux_sym_copy_token1] = ACTIONS(423),
    [aux_sym_entrypoint_token1] = ACTIONS(423),
    [aux_sym_env_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym_healthcheck_token1] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(423),
    [aux_sym_maintainer_token1] = ACTIONS(423),
    [aux_sym_onbuild_token1] = ACTIONS(423),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_shell_token1] = ACTIONS(423),
    [aux_sym_stopsignal_token1] = ACTIONS(423),
    [aux_sym_user_token1] = ACTIONS(423),
    [aux_sym_volume_token1] = ACTIONS(423),
    [aux_sym_workdir_token1] = ACTIONS(423),
    [aux_sym__repository_start_token3] = ACTIONS(425),
    [aux_sym__repository_start_token8] = ACTIONS(409),
    [aux_sym__repository_start_token11] = ACTIONS(409),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [aux_sym_path_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [aux_sym_healthcheck_token1] = ACTIONS(305),
    [aux_sym_label_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_onbuild_token1] = ACTIONS(305),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_shell_token1] = ACTIONS(305),
    [aux_sym_stopsignal_token1] = ACTIONS(305),
    [aux_sym_user_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(429),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(310),
    [aux_sym_path_token2] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym__repository_start_repeat4] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym_add_token1] = ACTIONS(423),
    [aux_sym_arg_token1] = ACTIONS(423),
    [aux_sym_cmd_token1] = ACTIONS(423),
    [aux_sym_copy_token1] = ACTIONS(423),
    [aux_sym_entrypoint_token1] = ACTIONS(423),
    [aux_sym_env_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [aux_sym_healthcheck_token1] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(423),
    [aux_sym_maintainer_token1] = ACTIONS(423),
    [aux_sym_onbuild_token1] = ACTIONS(423),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_shell_token1] = ACTIONS(423),
    [aux_sym_stopsignal_token1] = ACTIONS(423),
    [aux_sym_user_token1] = ACTIONS(423),
    [aux_sym_volume_token1] = ACTIONS(423),
    [aux_sym_workdir_token1] = ACTIONS(423),
    [aux_sym__repository_start_token3] = ACTIONS(425),
    [aux_sym__repository_start_token12] = ACTIONS(407),
    [aux_sym__repository_start_token15] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [aux_sym__repository_start_repeat2] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_add_token1] = ACTIONS(165),
    [aux_sym_arg_token1] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_copy_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_env_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [aux_sym_healthcheck_token1] = ACTIONS(165),
    [aux_sym_label_token1] = ACTIONS(165),
    [aux_sym_maintainer_token1] = ACTIONS(165),
    [aux_sym_onbuild_token1] = ACTIONS(165),
    [aux_sym_run_token1] = ACTIONS(165),
    [aux_sym_shell_token1] = ACTIONS(165),
    [aux_sym_stopsignal_token1] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(165),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token4] = ACTIONS(435),
    [aux_sym__repository_start_token7] = ACTIONS(435),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [aux_sym__repository_start_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_add_token1] = ACTIONS(136),
    [aux_sym_arg_token1] = ACTIONS(136),
    [aux_sym_cmd_token1] = ACTIONS(136),
    [aux_sym_copy_token1] = ACTIONS(136),
    [aux_sym_entrypoint_token1] = ACTIONS(136),
    [aux_sym_env_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [aux_sym_healthcheck_token1] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [aux_sym_maintainer_token1] = ACTIONS(136),
    [aux_sym_onbuild_token1] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_shell_token1] = ACTIONS(136),
    [aux_sym_stopsignal_token1] = ACTIONS(136),
    [aux_sym_user_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token2] = ACTIONS(438),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [aux_sym__labels] = STATE(125),
    [sym_label_pair] = STATE(125),
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
    [sym_label_key] = ACTIONS(443),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token15] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym_add_token1] = ACTIONS(445),
    [aux_sym_arg_token1] = ACTIONS(445),
    [aux_sym_cmd_token1] = ACTIONS(445),
    [aux_sym_copy_token1] = ACTIONS(445),
    [aux_sym_entrypoint_token1] = ACTIONS(445),
    [aux_sym_env_token1] = ACTIONS(445),
    [aux_sym_expose_token1] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [aux_sym_from_token1] = ACTIONS(445),
    [aux_sym_healthcheck_token1] = ACTIONS(445),
    [aux_sym_label_token1] = ACTIONS(445),
    [aux_sym_maintainer_token1] = ACTIONS(445),
    [aux_sym_onbuild_token1] = ACTIONS(445),
    [aux_sym_run_token1] = ACTIONS(445),
    [aux_sym_shell_token1] = ACTIONS(445),
    [aux_sym_stopsignal_token1] = ACTIONS(445),
    [aux_sym_user_token1] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(445),
    [aux_sym_volume_token1] = ACTIONS(445),
    [aux_sym_workdir_token1] = ACTIONS(445),
    [aux_sym__port_part_token1] = ACTIONS(445),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [115] = {
    [aux_sym__anything] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
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
    [aux_sym__anything_token1] = ACTIONS(449),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(447),
    [sym__space_no_newline] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_add_token1] = ACTIONS(141),
    [aux_sym_arg_token1] = ACTIONS(141),
    [aux_sym_cmd_token1] = ACTIONS(141),
    [aux_sym_copy_token1] = ACTIONS(141),
    [aux_sym_entrypoint_token1] = ACTIONS(141),
    [aux_sym_env_token1] = ACTIONS(141),
    [aux_sym_expose_token1] = ACTIONS(141),
    [aux_sym_from_token1] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [aux_sym_healthcheck_token1] = ACTIONS(141),
    [aux_sym_label_token1] = ACTIONS(141),
    [aux_sym_maintainer_token1] = ACTIONS(141),
    [aux_sym_onbuild_token1] = ACTIONS(141),
    [aux_sym_run_token1] = ACTIONS(141),
    [aux_sym_shell_token1] = ACTIONS(141),
    [aux_sym_stopsignal_token1] = ACTIONS(141),
    [aux_sym_user_token1] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(141),
    [aux_sym_workdir_token1] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_add_token1] = ACTIONS(453),
    [aux_sym_arg_token1] = ACTIONS(453),
    [aux_sym_cmd_token1] = ACTIONS(453),
    [aux_sym_copy_token1] = ACTIONS(453),
    [aux_sym_entrypoint_token1] = ACTIONS(453),
    [aux_sym_env_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(457),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(453),
    [sym__space_no_newline] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_add_token1] = ACTIONS(191),
    [aux_sym_arg_token1] = ACTIONS(191),
    [aux_sym_cmd_token1] = ACTIONS(191),
    [aux_sym_copy_token1] = ACTIONS(191),
    [aux_sym_entrypoint_token1] = ACTIONS(191),
    [aux_sym_env_token1] = ACTIONS(191),
    [aux_sym_expose_token1] = ACTIONS(191),
    [aux_sym_from_token1] = ACTIONS(191),
    [aux_sym_healthcheck_token1] = ACTIONS(191),
    [aux_sym_label_token1] = ACTIONS(191),
    [aux_sym_maintainer_token1] = ACTIONS(191),
    [aux_sym_onbuild_token1] = ACTIONS(191),
    [aux_sym_run_token1] = ACTIONS(191),
    [aux_sym_shell_token1] = ACTIONS(191),
    [aux_sym_stopsignal_token1] = ACTIONS(191),
    [aux_sym_user_token1] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_volume_token1] = ACTIONS(191),
    [aux_sym_workdir_token1] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_add_token1] = ACTIONS(461),
    [aux_sym_arg_token1] = ACTIONS(461),
    [aux_sym_cmd_token1] = ACTIONS(461),
    [aux_sym_copy_token1] = ACTIONS(461),
    [aux_sym_entrypoint_token1] = ACTIONS(461),
    [aux_sym_env_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [aux_sym_healthcheck_token1] = ACTIONS(461),
    [aux_sym_label_token1] = ACTIONS(461),
    [aux_sym_maintainer_token1] = ACTIONS(461),
    [aux_sym_onbuild_token1] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_shell_token1] = ACTIONS(461),
    [aux_sym_stopsignal_token1] = ACTIONS(461),
    [aux_sym_user_token1] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [aux_sym_volume_token1] = ACTIONS(461),
    [aux_sym_workdir_token1] = ACTIONS(461),
    [aux_sym__port_part_token1] = ACTIONS(461),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [aux_sym_healthcheck_token1] = ACTIONS(323),
    [aux_sym_label_token1] = ACTIONS(323),
    [aux_sym_maintainer_token1] = ACTIONS(323),
    [aux_sym_onbuild_token1] = ACTIONS(323),
    [aux_sym_run_token1] = ACTIONS(323),
    [aux_sym_shell_token1] = ACTIONS(323),
    [aux_sym_stopsignal_token1] = ACTIONS(323),
    [aux_sym_user_token1] = ACTIONS(323),
    [aux_sym_volume_token1] = ACTIONS(323),
    [aux_sym_workdir_token1] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_add_token1] = ACTIONS(136),
    [aux_sym_arg_token1] = ACTIONS(136),
    [aux_sym_cmd_token1] = ACTIONS(136),
    [aux_sym_copy_token1] = ACTIONS(136),
    [aux_sym_entrypoint_token1] = ACTIONS(136),
    [aux_sym_env_token1] = ACTIONS(136),
    [aux_sym_expose_token1] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(136),
    [aux_sym_healthcheck_token1] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [aux_sym_maintainer_token1] = ACTIONS(136),
    [aux_sym_onbuild_token1] = ACTIONS(136),
    [aux_sym_run_token1] = ACTIONS(136),
    [aux_sym_shell_token1] = ACTIONS(136),
    [aux_sym_stopsignal_token1] = ACTIONS(136),
    [aux_sym_user_token1] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token2] = ACTIONS(134),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
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
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_add_token1] = ACTIONS(195),
    [aux_sym_arg_token1] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(195),
    [aux_sym_copy_token1] = ACTIONS(195),
    [aux_sym_entrypoint_token1] = ACTIONS(195),
    [aux_sym_env_token1] = ACTIONS(195),
    [aux_sym_expose_token1] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(195),
    [aux_sym_healthcheck_token1] = ACTIONS(195),
    [aux_sym_label_token1] = ACTIONS(195),
    [aux_sym_maintainer_token1] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(195),
    [aux_sym_run_token1] = ACTIONS(195),
    [aux_sym_shell_token1] = ACTIONS(195),
    [aux_sym_stopsignal_token1] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [aux_sym_path_token1] = ACTIONS(197),
    [aux_sym_path_token2] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_add_token1] = ACTIONS(463),
    [aux_sym_arg_token1] = ACTIONS(463),
    [aux_sym_cmd_token1] = ACTIONS(463),
    [aux_sym_copy_token1] = ACTIONS(463),
    [aux_sym_entrypoint_token1] = ACTIONS(463),
    [aux_sym_env_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(467),
    [aux_sym_healthcheck_token1] = ACTIONS(463),
    [aux_sym_label_token1] = ACTIONS(463),
    [aux_sym_maintainer_token1] = ACTIONS(463),
    [aux_sym_onbuild_token1] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_shell_token1] = ACTIONS(463),
    [aux_sym_stopsignal_token1] = ACTIONS(463),
    [aux_sym_user_token1] = ACTIONS(463),
    [aux_sym_volume_token1] = ACTIONS(463),
    [aux_sym_workdir_token1] = ACTIONS(463),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(463),
    [sym__space_no_newline] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [aux_sym__labels] = STATE(125),
    [sym_label_pair] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_add_token1] = ACTIONS(471),
    [aux_sym_arg_token1] = ACTIONS(471),
    [aux_sym_cmd_token1] = ACTIONS(471),
    [aux_sym_copy_token1] = ACTIONS(471),
    [aux_sym_entrypoint_token1] = ACTIONS(471),
    [aux_sym_env_token1] = ACTIONS(471),
    [aux_sym_expose_token1] = ACTIONS(471),
    [aux_sym_from_token1] = ACTIONS(471),
    [aux_sym_healthcheck_token1] = ACTIONS(471),
    [aux_sym_label_token1] = ACTIONS(471),
    [aux_sym_maintainer_token1] = ACTIONS(471),
    [aux_sym_onbuild_token1] = ACTIONS(471),
    [aux_sym_run_token1] = ACTIONS(471),
    [aux_sym_shell_token1] = ACTIONS(471),
    [aux_sym_stopsignal_token1] = ACTIONS(471),
    [aux_sym_user_token1] = ACTIONS(471),
    [aux_sym_volume_token1] = ACTIONS(471),
    [aux_sym_workdir_token1] = ACTIONS(471),
    [sym_label_key] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
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
  [127] = {
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
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(197),
    [aux_sym_workdir_token1] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_add_token1] = ACTIONS(476),
    [aux_sym_arg_token1] = ACTIONS(476),
    [aux_sym_cmd_token1] = ACTIONS(476),
    [aux_sym_copy_token1] = ACTIONS(476),
    [aux_sym_entrypoint_token1] = ACTIONS(476),
    [aux_sym_env_token1] = ACTIONS(476),
    [aux_sym_expose_token1] = ACTIONS(476),
    [aux_sym_from_token1] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(480),
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
    [sym__space_no_newline] = ACTIONS(482),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [aux_sym_add_token1] = ACTIONS(484),
    [aux_sym_arg_token1] = ACTIONS(484),
    [aux_sym_cmd_token1] = ACTIONS(484),
    [aux_sym_copy_token1] = ACTIONS(484),
    [aux_sym_entrypoint_token1] = ACTIONS(484),
    [aux_sym_env_token1] = ACTIONS(484),
    [aux_sym_expose_token1] = ACTIONS(484),
    [aux_sym_from_token1] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_AT] = ACTIONS(488),
    [aux_sym_healthcheck_token1] = ACTIONS(484),
    [aux_sym_label_token1] = ACTIONS(484),
    [aux_sym_maintainer_token1] = ACTIONS(484),
    [aux_sym_onbuild_token1] = ACTIONS(484),
    [aux_sym_run_token1] = ACTIONS(484),
    [aux_sym_shell_token1] = ACTIONS(484),
    [aux_sym_stopsignal_token1] = ACTIONS(484),
    [aux_sym_user_token1] = ACTIONS(484),
    [aux_sym_volume_token1] = ACTIONS(484),
    [aux_sym_workdir_token1] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(484),
    [sym__space_no_newline] = ACTIONS(490),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [aux_sym__anything] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_add_token1] = ACTIONS(492),
    [aux_sym_arg_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_copy_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_env_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [aux_sym_healthcheck_token1] = ACTIONS(492),
    [aux_sym_label_token1] = ACTIONS(492),
    [aux_sym_maintainer_token1] = ACTIONS(492),
    [aux_sym_onbuild_token1] = ACTIONS(492),
    [aux_sym_run_token1] = ACTIONS(492),
    [aux_sym_shell_token1] = ACTIONS(492),
    [aux_sym_stopsignal_token1] = ACTIONS(492),
    [aux_sym_user_token1] = ACTIONS(492),
    [aux_sym_volume_token1] = ACTIONS(492),
    [aux_sym_workdir_token1] = ACTIONS(492),
    [aux_sym__anything_token1] = ACTIONS(494),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym__space_no_newline] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_add_token1] = ACTIONS(359),
    [aux_sym_arg_token1] = ACTIONS(359),
    [aux_sym_cmd_token1] = ACTIONS(359),
    [aux_sym_copy_token1] = ACTIONS(359),
    [aux_sym_entrypoint_token1] = ACTIONS(359),
    [aux_sym_env_token1] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [aux_sym_from_token1] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(359),
    [sym__space_no_newline] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(151),
    [aux_sym_healthcheck_token1] = ACTIONS(151),
    [aux_sym_label_token1] = ACTIONS(151),
    [aux_sym_maintainer_token1] = ACTIONS(151),
    [aux_sym_onbuild_token1] = ACTIONS(151),
    [aux_sym_run_token1] = ACTIONS(151),
    [aux_sym_shell_token1] = ACTIONS(151),
    [aux_sym_stopsignal_token1] = ACTIONS(151),
    [aux_sym_user_token1] = ACTIONS(151),
    [aux_sym_volume_token1] = ACTIONS(151),
    [aux_sym_workdir_token1] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
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
  [134] = {
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
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [aux_sym_healthcheck_token1] = ACTIONS(305),
    [aux_sym_label_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_onbuild_token1] = ACTIONS(305),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_shell_token1] = ACTIONS(305),
    [aux_sym_stopsignal_token1] = ACTIONS(305),
    [aux_sym_user_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(310),
    [aux_sym_path_token2] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_add_token1] = ACTIONS(207),
    [aux_sym_arg_token1] = ACTIONS(207),
    [aux_sym_cmd_token1] = ACTIONS(207),
    [aux_sym_copy_token1] = ACTIONS(207),
    [aux_sym_entrypoint_token1] = ACTIONS(207),
    [aux_sym_env_token1] = ACTIONS(207),
    [aux_sym_expose_token1] = ACTIONS(207),
    [aux_sym_from_token1] = ACTIONS(207),
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
    [aux_sym_path_token1] = ACTIONS(209),
    [aux_sym_path_token2] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_add_token1] = ACTIONS(499),
    [aux_sym_arg_token1] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_copy_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_env_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(501),
    [aux_sym_healthcheck_token1] = ACTIONS(499),
    [aux_sym_label_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_onbuild_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_shell_token1] = ACTIONS(499),
    [aux_sym_stopsignal_token1] = ACTIONS(499),
    [aux_sym_user_token1] = ACTIONS(499),
    [aux_sym_volume_token1] = ACTIONS(499),
    [aux_sym_workdir_token1] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym__space_no_newline] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [aux_sym__anything] = STATE(146),
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
    [aux_sym__anything_token1] = ACTIONS(507),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(299),
    [aux_sym_arg_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_copy_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_env_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(299),
    [aux_sym_healthcheck_token1] = ACTIONS(299),
    [aux_sym_label_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_onbuild_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [aux_sym__env_pairs_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(509),
    [aux_sym_add_token1] = ACTIONS(509),
    [aux_sym_arg_token1] = ACTIONS(509),
    [aux_sym_cmd_token1] = ACTIONS(509),
    [aux_sym_copy_token1] = ACTIONS(509),
    [aux_sym_entrypoint_token1] = ACTIONS(509),
    [aux_sym_env_token1] = ACTIONS(509),
    [aux_sym_expose_token1] = ACTIONS(509),
    [aux_sym_from_token1] = ACTIONS(509),
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
  [141] = {
    [aux_sym__anything] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_add_token1] = ACTIONS(492),
    [aux_sym_arg_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_copy_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_env_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [aux_sym_healthcheck_token1] = ACTIONS(492),
    [aux_sym_label_token1] = ACTIONS(492),
    [aux_sym_maintainer_token1] = ACTIONS(492),
    [aux_sym_onbuild_token1] = ACTIONS(492),
    [aux_sym_run_token1] = ACTIONS(492),
    [aux_sym_shell_token1] = ACTIONS(492),
    [aux_sym_stopsignal_token1] = ACTIONS(492),
    [aux_sym_user_token1] = ACTIONS(492),
    [aux_sym_volume_token1] = ACTIONS(492),
    [aux_sym_workdir_token1] = ACTIONS(492),
    [aux_sym__anything_token1] = ACTIONS(513),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym_comment] = ACTIONS(492),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_add_token1] = ACTIONS(453),
    [aux_sym_arg_token1] = ACTIONS(453),
    [aux_sym_cmd_token1] = ACTIONS(453),
    [aux_sym_copy_token1] = ACTIONS(453),
    [aux_sym_entrypoint_token1] = ACTIONS(453),
    [aux_sym_env_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(457),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(453),
    [sym__space_no_newline] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(273),
    [aux_sym_arg_token1] = ACTIONS(273),
    [aux_sym_cmd_token1] = ACTIONS(273),
    [aux_sym_copy_token1] = ACTIONS(273),
    [aux_sym_entrypoint_token1] = ACTIONS(273),
    [aux_sym_env_token1] = ACTIONS(273),
    [aux_sym_expose_token1] = ACTIONS(273),
    [aux_sym_from_token1] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [aux_sym_healthcheck_token1] = ACTIONS(273),
    [aux_sym_label_token1] = ACTIONS(273),
    [aux_sym_maintainer_token1] = ACTIONS(273),
    [aux_sym_onbuild_token1] = ACTIONS(273),
    [aux_sym_run_token1] = ACTIONS(273),
    [aux_sym_shell_token1] = ACTIONS(273),
    [aux_sym_stopsignal_token1] = ACTIONS(273),
    [aux_sym_user_token1] = ACTIONS(273),
    [aux_sym_volume_token1] = ACTIONS(273),
    [aux_sym_workdir_token1] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [aux_sym__anything] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(516),
    [aux_sym_add_token1] = ACTIONS(516),
    [aux_sym_arg_token1] = ACTIONS(516),
    [aux_sym_cmd_token1] = ACTIONS(516),
    [aux_sym_copy_token1] = ACTIONS(516),
    [aux_sym_entrypoint_token1] = ACTIONS(516),
    [aux_sym_env_token1] = ACTIONS(516),
    [aux_sym_expose_token1] = ACTIONS(516),
    [aux_sym_from_token1] = ACTIONS(516),
    [aux_sym_healthcheck_token1] = ACTIONS(516),
    [aux_sym_label_token1] = ACTIONS(516),
    [aux_sym_maintainer_token1] = ACTIONS(516),
    [aux_sym_onbuild_token1] = ACTIONS(516),
    [aux_sym_run_token1] = ACTIONS(516),
    [aux_sym_shell_token1] = ACTIONS(516),
    [aux_sym_stopsignal_token1] = ACTIONS(516),
    [aux_sym_user_token1] = ACTIONS(516),
    [aux_sym_volume_token1] = ACTIONS(516),
    [aux_sym_workdir_token1] = ACTIONS(516),
    [aux_sym__anything_token1] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(516),
    [sym_comment] = ACTIONS(520),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_add_token1] = ACTIONS(522),
    [aux_sym_arg_token1] = ACTIONS(522),
    [aux_sym_cmd_token1] = ACTIONS(522),
    [aux_sym_copy_token1] = ACTIONS(522),
    [aux_sym_entrypoint_token1] = ACTIONS(522),
    [aux_sym_env_token1] = ACTIONS(522),
    [aux_sym_expose_token1] = ACTIONS(522),
    [aux_sym_from_token1] = ACTIONS(522),
    [aux_sym_healthcheck_token1] = ACTIONS(522),
    [aux_sym_label_token1] = ACTIONS(522),
    [aux_sym_maintainer_token1] = ACTIONS(522),
    [aux_sym_onbuild_token1] = ACTIONS(522),
    [aux_sym_run_token1] = ACTIONS(522),
    [aux_sym_shell_token1] = ACTIONS(522),
    [aux_sym_stopsignal_token1] = ACTIONS(522),
    [aux_sym_user_token1] = ACTIONS(522),
    [aux_sym_volume_token1] = ACTIONS(522),
    [aux_sym_workdir_token1] = ACTIONS(522),
    [aux_sym__anything_token1] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym__space_no_newline] = ACTIONS(524),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
    [aux_sym__anything] = STATE(146),
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_add_token1] = ACTIONS(492),
    [aux_sym_arg_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_copy_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_env_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [aux_sym_healthcheck_token1] = ACTIONS(492),
    [aux_sym_label_token1] = ACTIONS(492),
    [aux_sym_maintainer_token1] = ACTIONS(492),
    [aux_sym_onbuild_token1] = ACTIONS(492),
    [aux_sym_run_token1] = ACTIONS(492),
    [aux_sym_shell_token1] = ACTIONS(492),
    [aux_sym_stopsignal_token1] = ACTIONS(492),
    [aux_sym_user_token1] = ACTIONS(492),
    [aux_sym_volume_token1] = ACTIONS(492),
    [aux_sym_workdir_token1] = ACTIONS(492),
    [aux_sym__anything_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_add_token1] = ACTIONS(529),
    [aux_sym_arg_token1] = ACTIONS(529),
    [aux_sym_cmd_token1] = ACTIONS(529),
    [aux_sym_copy_token1] = ACTIONS(529),
    [aux_sym_entrypoint_token1] = ACTIONS(529),
    [aux_sym_env_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [anon_sym_AT] = ACTIONS(529),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(529),
    [sym__space_no_newline] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [aux_sym_add_token1] = ACTIONS(533),
    [aux_sym_arg_token1] = ACTIONS(533),
    [aux_sym_cmd_token1] = ACTIONS(533),
    [aux_sym_copy_token1] = ACTIONS(533),
    [aux_sym_entrypoint_token1] = ACTIONS(533),
    [aux_sym_env_token1] = ACTIONS(533),
    [aux_sym_expose_token1] = ACTIONS(533),
    [aux_sym_from_token1] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(533),
    [aux_sym_healthcheck_token1] = ACTIONS(533),
    [aux_sym_label_token1] = ACTIONS(533),
    [aux_sym_maintainer_token1] = ACTIONS(533),
    [aux_sym_onbuild_token1] = ACTIONS(533),
    [aux_sym_run_token1] = ACTIONS(533),
    [aux_sym_shell_token1] = ACTIONS(533),
    [aux_sym_stopsignal_token1] = ACTIONS(533),
    [aux_sym_user_token1] = ACTIONS(533),
    [aux_sym_volume_token1] = ACTIONS(533),
    [aux_sym_workdir_token1] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(533),
    [sym__space_no_newline] = ACTIONS(535),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [aux_sym__env_pairs_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(537),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(537),
    [sym__space_no_newline] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(539),
    [aux_sym_arg_token1] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(541),
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
    [sym__space_no_newline] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [aux_sym_add_token1] = ACTIONS(484),
    [aux_sym_arg_token1] = ACTIONS(484),
    [aux_sym_cmd_token1] = ACTIONS(484),
    [aux_sym_copy_token1] = ACTIONS(484),
    [aux_sym_entrypoint_token1] = ACTIONS(484),
    [aux_sym_env_token1] = ACTIONS(484),
    [aux_sym_expose_token1] = ACTIONS(484),
    [aux_sym_from_token1] = ACTIONS(484),
    [anon_sym_AT] = ACTIONS(488),
    [aux_sym_healthcheck_token1] = ACTIONS(484),
    [aux_sym_label_token1] = ACTIONS(484),
    [aux_sym_maintainer_token1] = ACTIONS(484),
    [aux_sym_onbuild_token1] = ACTIONS(484),
    [aux_sym_run_token1] = ACTIONS(484),
    [aux_sym_shell_token1] = ACTIONS(484),
    [aux_sym_stopsignal_token1] = ACTIONS(484),
    [aux_sym_user_token1] = ACTIONS(484),
    [aux_sym_volume_token1] = ACTIONS(484),
    [aux_sym_workdir_token1] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(484),
    [sym__space_no_newline] = ACTIONS(490),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [aux_sym__env_pairs_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(545),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(545),
    [sym__space_no_newline] = ACTIONS(547),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [aux_sym_add_token1] = ACTIONS(550),
    [aux_sym_arg_token1] = ACTIONS(550),
    [aux_sym_cmd_token1] = ACTIONS(550),
    [aux_sym_copy_token1] = ACTIONS(550),
    [aux_sym_entrypoint_token1] = ACTIONS(550),
    [aux_sym_env_token1] = ACTIONS(550),
    [aux_sym_expose_token1] = ACTIONS(550),
    [aux_sym_from_token1] = ACTIONS(550),
    [anon_sym_AT] = ACTIONS(552),
    [aux_sym_healthcheck_token1] = ACTIONS(550),
    [aux_sym_label_token1] = ACTIONS(550),
    [aux_sym_maintainer_token1] = ACTIONS(550),
    [aux_sym_onbuild_token1] = ACTIONS(550),
    [aux_sym_run_token1] = ACTIONS(550),
    [aux_sym_shell_token1] = ACTIONS(550),
    [aux_sym_stopsignal_token1] = ACTIONS(550),
    [aux_sym_user_token1] = ACTIONS(550),
    [aux_sym_volume_token1] = ACTIONS(550),
    [aux_sym_workdir_token1] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(550),
    [sym__space_no_newline] = ACTIONS(554),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [aux_sym_add_token1] = ACTIONS(556),
    [aux_sym_arg_token1] = ACTIONS(556),
    [aux_sym_cmd_token1] = ACTIONS(556),
    [aux_sym_copy_token1] = ACTIONS(556),
    [aux_sym_entrypoint_token1] = ACTIONS(556),
    [aux_sym_env_token1] = ACTIONS(556),
    [aux_sym_expose_token1] = ACTIONS(556),
    [aux_sym_from_token1] = ACTIONS(556),
    [anon_sym_COLON] = ACTIONS(556),
    [aux_sym_healthcheck_token1] = ACTIONS(556),
    [aux_sym_label_token1] = ACTIONS(556),
    [aux_sym_maintainer_token1] = ACTIONS(556),
    [aux_sym_onbuild_token1] = ACTIONS(556),
    [aux_sym_run_token1] = ACTIONS(556),
    [aux_sym_shell_token1] = ACTIONS(556),
    [aux_sym_stopsignal_token1] = ACTIONS(556),
    [aux_sym_user_token1] = ACTIONS(556),
    [aux_sym_volume_token1] = ACTIONS(556),
    [aux_sym_workdir_token1] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(556),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(545),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(545),
    [sym__space_no_newline] = ACTIONS(558),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [aux_sym_add_token1] = ACTIONS(560),
    [aux_sym_arg_token1] = ACTIONS(560),
    [aux_sym_cmd_token1] = ACTIONS(560),
    [aux_sym_copy_token1] = ACTIONS(560),
    [aux_sym_entrypoint_token1] = ACTIONS(560),
    [aux_sym_env_token1] = ACTIONS(560),
    [aux_sym_expose_token1] = ACTIONS(560),
    [aux_sym_from_token1] = ACTIONS(560),
    [aux_sym_healthcheck_token1] = ACTIONS(560),
    [aux_sym_label_token1] = ACTIONS(560),
    [aux_sym_maintainer_token1] = ACTIONS(560),
    [aux_sym_onbuild_token1] = ACTIONS(560),
    [aux_sym_run_token1] = ACTIONS(560),
    [aux_sym_shell_token1] = ACTIONS(560),
    [aux_sym_stopsignal_token1] = ACTIONS(560),
    [aux_sym_user_token1] = ACTIONS(560),
    [aux_sym_volume_token1] = ACTIONS(560),
    [aux_sym_workdir_token1] = ACTIONS(560),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(560),
    [sym__space_no_newline] = ACTIONS(562),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [aux_sym_add_token1] = ACTIONS(564),
    [aux_sym_arg_token1] = ACTIONS(564),
    [aux_sym_cmd_token1] = ACTIONS(564),
    [aux_sym_copy_token1] = ACTIONS(564),
    [aux_sym_entrypoint_token1] = ACTIONS(564),
    [aux_sym_env_token1] = ACTIONS(564),
    [aux_sym_expose_token1] = ACTIONS(564),
    [aux_sym_from_token1] = ACTIONS(564),
    [aux_sym_healthcheck_token1] = ACTIONS(564),
    [aux_sym_label_token1] = ACTIONS(564),
    [aux_sym_maintainer_token1] = ACTIONS(564),
    [aux_sym_onbuild_token1] = ACTIONS(564),
    [aux_sym_run_token1] = ACTIONS(564),
    [aux_sym_shell_token1] = ACTIONS(564),
    [aux_sym_stopsignal_token1] = ACTIONS(564),
    [aux_sym_user_token1] = ACTIONS(564),
    [aux_sym_volume_token1] = ACTIONS(564),
    [aux_sym_workdir_token1] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(564),
    [sym__space_no_newline] = ACTIONS(566),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [aux_sym_add_token1] = ACTIONS(568),
    [aux_sym_arg_token1] = ACTIONS(568),
    [aux_sym_cmd_token1] = ACTIONS(568),
    [aux_sym_copy_token1] = ACTIONS(568),
    [aux_sym_entrypoint_token1] = ACTIONS(568),
    [aux_sym_env_token1] = ACTIONS(568),
    [aux_sym_expose_token1] = ACTIONS(568),
    [aux_sym_from_token1] = ACTIONS(568),
    [aux_sym_healthcheck_token1] = ACTIONS(568),
    [aux_sym_label_token1] = ACTIONS(568),
    [aux_sym_maintainer_token1] = ACTIONS(568),
    [aux_sym_onbuild_token1] = ACTIONS(568),
    [aux_sym_run_token1] = ACTIONS(568),
    [aux_sym_shell_token1] = ACTIONS(568),
    [aux_sym_stopsignal_token1] = ACTIONS(568),
    [aux_sym_user_token1] = ACTIONS(568),
    [aux_sym_volume_token1] = ACTIONS(568),
    [aux_sym_workdir_token1] = ACTIONS(568),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(568),
    [sym__space_no_newline] = ACTIONS(570),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [aux_sym_add_token1] = ACTIONS(572),
    [aux_sym_arg_token1] = ACTIONS(572),
    [aux_sym_cmd_token1] = ACTIONS(572),
    [aux_sym_copy_token1] = ACTIONS(572),
    [aux_sym_entrypoint_token1] = ACTIONS(572),
    [aux_sym_env_token1] = ACTIONS(572),
    [aux_sym_expose_token1] = ACTIONS(572),
    [aux_sym_from_token1] = ACTIONS(572),
    [aux_sym_healthcheck_token1] = ACTIONS(572),
    [aux_sym_label_token1] = ACTIONS(572),
    [aux_sym_maintainer_token1] = ACTIONS(572),
    [aux_sym_onbuild_token1] = ACTIONS(572),
    [aux_sym_run_token1] = ACTIONS(572),
    [aux_sym_shell_token1] = ACTIONS(572),
    [aux_sym_stopsignal_token1] = ACTIONS(572),
    [aux_sym_user_token1] = ACTIONS(572),
    [aux_sym_volume_token1] = ACTIONS(572),
    [aux_sym_workdir_token1] = ACTIONS(572),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(572),
    [sym__space_no_newline] = ACTIONS(574),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(317),
    [aux_sym_arg_token1] = ACTIONS(317),
    [aux_sym_cmd_token1] = ACTIONS(317),
    [aux_sym_copy_token1] = ACTIONS(317),
    [aux_sym_entrypoint_token1] = ACTIONS(317),
    [aux_sym_env_token1] = ACTIONS(317),
    [aux_sym_expose_token1] = ACTIONS(317),
    [aux_sym_from_token1] = ACTIONS(317),
    [aux_sym_healthcheck_token1] = ACTIONS(317),
    [aux_sym_label_token1] = ACTIONS(317),
    [aux_sym_maintainer_token1] = ACTIONS(317),
    [aux_sym_onbuild_token1] = ACTIONS(317),
    [aux_sym_run_token1] = ACTIONS(317),
    [aux_sym_shell_token1] = ACTIONS(317),
    [aux_sym_stopsignal_token1] = ACTIONS(317),
    [aux_sym_user_token1] = ACTIONS(317),
    [aux_sym_volume_token1] = ACTIONS(317),
    [aux_sym_workdir_token1] = ACTIONS(317),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(453),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(453),
    [sym__space_no_newline] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
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
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [aux_sym_add_token1] = ACTIONS(576),
    [aux_sym_arg_token1] = ACTIONS(576),
    [aux_sym_cmd_token1] = ACTIONS(576),
    [aux_sym_copy_token1] = ACTIONS(576),
    [aux_sym_entrypoint_token1] = ACTIONS(576),
    [aux_sym_env_token1] = ACTIONS(576),
    [aux_sym_expose_token1] = ACTIONS(576),
    [aux_sym_from_token1] = ACTIONS(576),
    [aux_sym_healthcheck_token1] = ACTIONS(576),
    [aux_sym_label_token1] = ACTIONS(576),
    [aux_sym_maintainer_token1] = ACTIONS(576),
    [aux_sym_onbuild_token1] = ACTIONS(576),
    [aux_sym_run_token1] = ACTIONS(576),
    [aux_sym_shell_token1] = ACTIONS(576),
    [aux_sym_stopsignal_token1] = ACTIONS(576),
    [aux_sym_user_token1] = ACTIONS(576),
    [aux_sym_volume_token1] = ACTIONS(576),
    [aux_sym_workdir_token1] = ACTIONS(576),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(576),
    [sym__space_no_newline] = ACTIONS(578),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_add_token1] = ACTIONS(522),
    [aux_sym_arg_token1] = ACTIONS(522),
    [aux_sym_cmd_token1] = ACTIONS(522),
    [aux_sym_copy_token1] = ACTIONS(522),
    [aux_sym_entrypoint_token1] = ACTIONS(522),
    [aux_sym_env_token1] = ACTIONS(522),
    [aux_sym_expose_token1] = ACTIONS(522),
    [aux_sym_from_token1] = ACTIONS(522),
    [aux_sym_healthcheck_token1] = ACTIONS(522),
    [aux_sym_label_token1] = ACTIONS(522),
    [aux_sym_maintainer_token1] = ACTIONS(522),
    [aux_sym_onbuild_token1] = ACTIONS(522),
    [aux_sym_run_token1] = ACTIONS(522),
    [aux_sym_shell_token1] = ACTIONS(522),
    [aux_sym_stopsignal_token1] = ACTIONS(522),
    [aux_sym_user_token1] = ACTIONS(522),
    [aux_sym_volume_token1] = ACTIONS(522),
    [aux_sym_workdir_token1] = ACTIONS(522),
    [aux_sym__anything_token1] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(580),
    [aux_sym_add_token1] = ACTIONS(580),
    [aux_sym_arg_token1] = ACTIONS(580),
    [anon_sym_EQ] = ACTIONS(582),
    [aux_sym_cmd_token1] = ACTIONS(580),
    [aux_sym_copy_token1] = ACTIONS(580),
    [aux_sym_entrypoint_token1] = ACTIONS(580),
    [aux_sym_env_token1] = ACTIONS(580),
    [aux_sym_expose_token1] = ACTIONS(580),
    [aux_sym_from_token1] = ACTIONS(580),
    [aux_sym_healthcheck_token1] = ACTIONS(580),
    [aux_sym_label_token1] = ACTIONS(580),
    [aux_sym_maintainer_token1] = ACTIONS(580),
    [aux_sym_onbuild_token1] = ACTIONS(580),
    [aux_sym_run_token1] = ACTIONS(580),
    [aux_sym_shell_token1] = ACTIONS(580),
    [aux_sym_stopsignal_token1] = ACTIONS(580),
    [aux_sym_user_token1] = ACTIONS(580),
    [aux_sym_volume_token1] = ACTIONS(580),
    [aux_sym_workdir_token1] = ACTIONS(580),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(580),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [aux_sym_add_token1] = ACTIONS(584),
    [aux_sym_arg_token1] = ACTIONS(584),
    [aux_sym_cmd_token1] = ACTIONS(584),
    [aux_sym_copy_token1] = ACTIONS(584),
    [aux_sym_entrypoint_token1] = ACTIONS(584),
    [aux_sym_env_token1] = ACTIONS(584),
    [aux_sym_expose_token1] = ACTIONS(584),
    [aux_sym_from_token1] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(584),
    [aux_sym_healthcheck_token1] = ACTIONS(584),
    [aux_sym_label_token1] = ACTIONS(584),
    [aux_sym_maintainer_token1] = ACTIONS(584),
    [aux_sym_onbuild_token1] = ACTIONS(584),
    [aux_sym_run_token1] = ACTIONS(584),
    [aux_sym_shell_token1] = ACTIONS(584),
    [aux_sym_stopsignal_token1] = ACTIONS(584),
    [aux_sym_user_token1] = ACTIONS(584),
    [aux_sym_volume_token1] = ACTIONS(584),
    [aux_sym_workdir_token1] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(584),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [aux_sym_add_token1] = ACTIONS(484),
    [aux_sym_arg_token1] = ACTIONS(484),
    [aux_sym_cmd_token1] = ACTIONS(484),
    [aux_sym_copy_token1] = ACTIONS(484),
    [aux_sym_entrypoint_token1] = ACTIONS(484),
    [aux_sym_env_token1] = ACTIONS(484),
    [aux_sym_expose_token1] = ACTIONS(484),
    [aux_sym_from_token1] = ACTIONS(484),
    [aux_sym_healthcheck_token1] = ACTIONS(484),
    [aux_sym_label_token1] = ACTIONS(484),
    [aux_sym_maintainer_token1] = ACTIONS(484),
    [aux_sym_onbuild_token1] = ACTIONS(484),
    [aux_sym_run_token1] = ACTIONS(484),
    [aux_sym_shell_token1] = ACTIONS(484),
    [aux_sym_stopsignal_token1] = ACTIONS(484),
    [aux_sym_user_token1] = ACTIONS(484),
    [aux_sym_volume_token1] = ACTIONS(484),
    [aux_sym_workdir_token1] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(484),
    [sym__space_no_newline] = ACTIONS(490),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [aux_sym_add_token1] = ACTIONS(550),
    [aux_sym_arg_token1] = ACTIONS(550),
    [aux_sym_cmd_token1] = ACTIONS(550),
    [aux_sym_copy_token1] = ACTIONS(550),
    [aux_sym_entrypoint_token1] = ACTIONS(550),
    [aux_sym_env_token1] = ACTIONS(550),
    [aux_sym_expose_token1] = ACTIONS(550),
    [aux_sym_from_token1] = ACTIONS(550),
    [aux_sym_healthcheck_token1] = ACTIONS(550),
    [aux_sym_label_token1] = ACTIONS(550),
    [aux_sym_maintainer_token1] = ACTIONS(550),
    [aux_sym_onbuild_token1] = ACTIONS(550),
    [aux_sym_run_token1] = ACTIONS(550),
    [aux_sym_shell_token1] = ACTIONS(550),
    [aux_sym_stopsignal_token1] = ACTIONS(550),
    [aux_sym_user_token1] = ACTIONS(550),
    [aux_sym_volume_token1] = ACTIONS(550),
    [aux_sym_workdir_token1] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(550),
    [sym__space_no_newline] = ACTIONS(554),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_add_token1] = ACTIONS(522),
    [aux_sym_arg_token1] = ACTIONS(522),
    [aux_sym_cmd_token1] = ACTIONS(522),
    [aux_sym_copy_token1] = ACTIONS(522),
    [aux_sym_entrypoint_token1] = ACTIONS(522),
    [aux_sym_env_token1] = ACTIONS(522),
    [aux_sym_expose_token1] = ACTIONS(522),
    [aux_sym_from_token1] = ACTIONS(522),
    [aux_sym_healthcheck_token1] = ACTIONS(522),
    [aux_sym_label_token1] = ACTIONS(522),
    [aux_sym_maintainer_token1] = ACTIONS(522),
    [aux_sym_onbuild_token1] = ACTIONS(522),
    [aux_sym_run_token1] = ACTIONS(522),
    [aux_sym_shell_token1] = ACTIONS(522),
    [aux_sym_stopsignal_token1] = ACTIONS(522),
    [aux_sym_user_token1] = ACTIONS(522),
    [aux_sym_volume_token1] = ACTIONS(522),
    [aux_sym_workdir_token1] = ACTIONS(522),
    [aux_sym__anything_token1] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym_comment] = ACTIONS(522),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_add_token1] = ACTIONS(499),
    [aux_sym_arg_token1] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_copy_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_env_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [aux_sym_healthcheck_token1] = ACTIONS(499),
    [aux_sym_label_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_onbuild_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_shell_token1] = ACTIONS(499),
    [aux_sym_stopsignal_token1] = ACTIONS(499),
    [aux_sym_user_token1] = ACTIONS(499),
    [aux_sym_volume_token1] = ACTIONS(499),
    [aux_sym_workdir_token1] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym__space_no_newline] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [aux_sym_add_token1] = ACTIONS(586),
    [aux_sym_arg_token1] = ACTIONS(586),
    [aux_sym_cmd_token1] = ACTIONS(586),
    [aux_sym_copy_token1] = ACTIONS(586),
    [aux_sym_entrypoint_token1] = ACTIONS(586),
    [aux_sym_env_token1] = ACTIONS(586),
    [aux_sym_expose_token1] = ACTIONS(586),
    [aux_sym_from_token1] = ACTIONS(586),
    [anon_sym_COLON] = ACTIONS(588),
    [aux_sym_healthcheck_token1] = ACTIONS(586),
    [aux_sym_label_token1] = ACTIONS(586),
    [aux_sym_maintainer_token1] = ACTIONS(586),
    [aux_sym_onbuild_token1] = ACTIONS(586),
    [aux_sym_run_token1] = ACTIONS(586),
    [aux_sym_shell_token1] = ACTIONS(586),
    [aux_sym_stopsignal_token1] = ACTIONS(586),
    [aux_sym_user_token1] = ACTIONS(586),
    [aux_sym_volume_token1] = ACTIONS(586),
    [aux_sym_workdir_token1] = ACTIONS(586),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(586),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [aux_sym_add_token1] = ACTIONS(586),
    [aux_sym_arg_token1] = ACTIONS(586),
    [aux_sym_cmd_token1] = ACTIONS(586),
    [aux_sym_copy_token1] = ACTIONS(586),
    [aux_sym_entrypoint_token1] = ACTIONS(586),
    [aux_sym_env_token1] = ACTIONS(586),
    [aux_sym_expose_token1] = ACTIONS(586),
    [aux_sym_from_token1] = ACTIONS(586),
    [anon_sym_COLON] = ACTIONS(590),
    [aux_sym_healthcheck_token1] = ACTIONS(586),
    [aux_sym_label_token1] = ACTIONS(586),
    [aux_sym_maintainer_token1] = ACTIONS(586),
    [aux_sym_onbuild_token1] = ACTIONS(586),
    [aux_sym_run_token1] = ACTIONS(586),
    [aux_sym_shell_token1] = ACTIONS(586),
    [aux_sym_stopsignal_token1] = ACTIONS(586),
    [aux_sym_user_token1] = ACTIONS(586),
    [aux_sym_volume_token1] = ACTIONS(586),
    [aux_sym_workdir_token1] = ACTIONS(586),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(586),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [aux_sym_add_token1] = ACTIONS(592),
    [aux_sym_arg_token1] = ACTIONS(592),
    [aux_sym_cmd_token1] = ACTIONS(592),
    [aux_sym_copy_token1] = ACTIONS(592),
    [aux_sym_entrypoint_token1] = ACTIONS(592),
    [aux_sym_env_token1] = ACTIONS(592),
    [aux_sym_expose_token1] = ACTIONS(592),
    [aux_sym_from_token1] = ACTIONS(592),
    [aux_sym_healthcheck_token1] = ACTIONS(592),
    [aux_sym_label_token1] = ACTIONS(592),
    [aux_sym_maintainer_token1] = ACTIONS(592),
    [aux_sym_onbuild_token1] = ACTIONS(592),
    [aux_sym_run_token1] = ACTIONS(592),
    [aux_sym_shell_token1] = ACTIONS(592),
    [aux_sym_stopsignal_token1] = ACTIONS(592),
    [aux_sym_user_token1] = ACTIONS(592),
    [aux_sym_volume_token1] = ACTIONS(592),
    [aux_sym_workdir_token1] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(592),
    [sym__space_no_newline] = ACTIONS(594),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [aux_sym_add_token1] = ACTIONS(596),
    [aux_sym_arg_token1] = ACTIONS(596),
    [aux_sym_cmd_token1] = ACTIONS(596),
    [aux_sym_copy_token1] = ACTIONS(596),
    [aux_sym_entrypoint_token1] = ACTIONS(596),
    [aux_sym_env_token1] = ACTIONS(596),
    [aux_sym_expose_token1] = ACTIONS(596),
    [aux_sym_from_token1] = ACTIONS(596),
    [aux_sym_healthcheck_token1] = ACTIONS(596),
    [aux_sym_label_token1] = ACTIONS(596),
    [aux_sym_maintainer_token1] = ACTIONS(596),
    [aux_sym_onbuild_token1] = ACTIONS(596),
    [aux_sym_run_token1] = ACTIONS(596),
    [aux_sym_shell_token1] = ACTIONS(596),
    [aux_sym_stopsignal_token1] = ACTIONS(596),
    [aux_sym_user_token1] = ACTIONS(596),
    [aux_sym_volume_token1] = ACTIONS(596),
    [aux_sym_workdir_token1] = ACTIONS(596),
    [sym_label_key] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(596),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(600),
    [aux_sym_add_token1] = ACTIONS(600),
    [aux_sym_arg_token1] = ACTIONS(600),
    [aux_sym_cmd_token1] = ACTIONS(600),
    [aux_sym_copy_token1] = ACTIONS(600),
    [aux_sym_entrypoint_token1] = ACTIONS(600),
    [aux_sym_env_token1] = ACTIONS(600),
    [aux_sym_expose_token1] = ACTIONS(600),
    [aux_sym_from_token1] = ACTIONS(600),
    [aux_sym_healthcheck_token1] = ACTIONS(600),
    [aux_sym_label_token1] = ACTIONS(600),
    [aux_sym_maintainer_token1] = ACTIONS(600),
    [aux_sym_onbuild_token1] = ACTIONS(600),
    [aux_sym_run_token1] = ACTIONS(600),
    [aux_sym_shell_token1] = ACTIONS(600),
    [aux_sym_stopsignal_token1] = ACTIONS(600),
    [aux_sym_user_token1] = ACTIONS(600),
    [aux_sym_volume_token1] = ACTIONS(600),
    [aux_sym_workdir_token1] = ACTIONS(600),
    [sym_label_key] = ACTIONS(602),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(600),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [aux_sym_add_token1] = ACTIONS(604),
    [aux_sym_arg_token1] = ACTIONS(604),
    [aux_sym_cmd_token1] = ACTIONS(604),
    [aux_sym_copy_token1] = ACTIONS(604),
    [aux_sym_entrypoint_token1] = ACTIONS(604),
    [aux_sym_env_token1] = ACTIONS(604),
    [aux_sym_expose_token1] = ACTIONS(604),
    [aux_sym_from_token1] = ACTIONS(604),
    [aux_sym_healthcheck_token1] = ACTIONS(604),
    [aux_sym_label_token1] = ACTIONS(604),
    [aux_sym_maintainer_token1] = ACTIONS(604),
    [aux_sym_onbuild_token1] = ACTIONS(604),
    [aux_sym_run_token1] = ACTIONS(604),
    [aux_sym_shell_token1] = ACTIONS(604),
    [aux_sym_stopsignal_token1] = ACTIONS(604),
    [aux_sym_user_token1] = ACTIONS(604),
    [aux_sym_volume_token1] = ACTIONS(604),
    [aux_sym_workdir_token1] = ACTIONS(604),
    [sym_label_key] = ACTIONS(606),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(604),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(608),
    [aux_sym_add_token1] = ACTIONS(608),
    [aux_sym_arg_token1] = ACTIONS(608),
    [aux_sym_cmd_token1] = ACTIONS(608),
    [aux_sym_copy_token1] = ACTIONS(608),
    [aux_sym_entrypoint_token1] = ACTIONS(608),
    [aux_sym_env_token1] = ACTIONS(608),
    [aux_sym_expose_token1] = ACTIONS(608),
    [aux_sym_from_token1] = ACTIONS(608),
    [aux_sym_healthcheck_token1] = ACTIONS(608),
    [aux_sym_label_token1] = ACTIONS(608),
    [aux_sym_maintainer_token1] = ACTIONS(608),
    [aux_sym_onbuild_token1] = ACTIONS(608),
    [aux_sym_run_token1] = ACTIONS(608),
    [aux_sym_shell_token1] = ACTIONS(608),
    [aux_sym_stopsignal_token1] = ACTIONS(608),
    [aux_sym_user_token1] = ACTIONS(608),
    [aux_sym_volume_token1] = ACTIONS(608),
    [aux_sym_workdir_token1] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(608),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [aux_sym_add_token1] = ACTIONS(610),
    [aux_sym_arg_token1] = ACTIONS(610),
    [aux_sym_cmd_token1] = ACTIONS(610),
    [aux_sym_copy_token1] = ACTIONS(610),
    [aux_sym_entrypoint_token1] = ACTIONS(610),
    [aux_sym_env_token1] = ACTIONS(610),
    [aux_sym_expose_token1] = ACTIONS(610),
    [aux_sym_from_token1] = ACTIONS(610),
    [aux_sym_healthcheck_token1] = ACTIONS(610),
    [aux_sym_label_token1] = ACTIONS(610),
    [aux_sym_maintainer_token1] = ACTIONS(610),
    [aux_sym_onbuild_token1] = ACTIONS(610),
    [aux_sym_run_token1] = ACTIONS(610),
    [aux_sym_shell_token1] = ACTIONS(610),
    [aux_sym_stopsignal_token1] = ACTIONS(610),
    [aux_sym_user_token1] = ACTIONS(610),
    [aux_sym_volume_token1] = ACTIONS(610),
    [aux_sym_workdir_token1] = ACTIONS(610),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(610),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_env_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [aux_sym_healthcheck_token1] = ACTIONS(355),
    [aux_sym_label_token1] = ACTIONS(355),
    [aux_sym_maintainer_token1] = ACTIONS(355),
    [aux_sym_onbuild_token1] = ACTIONS(355),
    [aux_sym_run_token1] = ACTIONS(355),
    [aux_sym_shell_token1] = ACTIONS(355),
    [aux_sym_stopsignal_token1] = ACTIONS(355),
    [aux_sym_user_token1] = ACTIONS(355),
    [aux_sym_volume_token1] = ACTIONS(355),
    [aux_sym_workdir_token1] = ACTIONS(355),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(612),
    [aux_sym_add_token1] = ACTIONS(612),
    [aux_sym_arg_token1] = ACTIONS(612),
    [aux_sym_cmd_token1] = ACTIONS(612),
    [aux_sym_copy_token1] = ACTIONS(612),
    [aux_sym_entrypoint_token1] = ACTIONS(612),
    [aux_sym_env_token1] = ACTIONS(612),
    [aux_sym_expose_token1] = ACTIONS(612),
    [aux_sym_from_token1] = ACTIONS(612),
    [aux_sym_healthcheck_token1] = ACTIONS(612),
    [aux_sym_label_token1] = ACTIONS(612),
    [aux_sym_maintainer_token1] = ACTIONS(612),
    [aux_sym_onbuild_token1] = ACTIONS(612),
    [aux_sym_run_token1] = ACTIONS(612),
    [aux_sym_shell_token1] = ACTIONS(612),
    [aux_sym_stopsignal_token1] = ACTIONS(612),
    [aux_sym_user_token1] = ACTIONS(612),
    [aux_sym_volume_token1] = ACTIONS(612),
    [aux_sym_workdir_token1] = ACTIONS(612),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(612),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [aux_sym_add_token1] = ACTIONS(614),
    [aux_sym_arg_token1] = ACTIONS(614),
    [aux_sym_cmd_token1] = ACTIONS(614),
    [aux_sym_copy_token1] = ACTIONS(614),
    [aux_sym_entrypoint_token1] = ACTIONS(614),
    [aux_sym_env_token1] = ACTIONS(614),
    [aux_sym_expose_token1] = ACTIONS(614),
    [aux_sym_from_token1] = ACTIONS(614),
    [aux_sym_healthcheck_token1] = ACTIONS(614),
    [aux_sym_label_token1] = ACTIONS(614),
    [aux_sym_maintainer_token1] = ACTIONS(614),
    [aux_sym_onbuild_token1] = ACTIONS(614),
    [aux_sym_run_token1] = ACTIONS(614),
    [aux_sym_shell_token1] = ACTIONS(614),
    [aux_sym_stopsignal_token1] = ACTIONS(614),
    [aux_sym_user_token1] = ACTIONS(614),
    [aux_sym_volume_token1] = ACTIONS(614),
    [aux_sym_workdir_token1] = ACTIONS(614),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(614),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [aux_sym_add_token1] = ACTIONS(616),
    [aux_sym_arg_token1] = ACTIONS(616),
    [aux_sym_cmd_token1] = ACTIONS(616),
    [aux_sym_copy_token1] = ACTIONS(616),
    [aux_sym_entrypoint_token1] = ACTIONS(616),
    [aux_sym_env_token1] = ACTIONS(616),
    [aux_sym_expose_token1] = ACTIONS(616),
    [aux_sym_from_token1] = ACTIONS(616),
    [aux_sym_healthcheck_token1] = ACTIONS(616),
    [aux_sym_label_token1] = ACTIONS(616),
    [aux_sym_maintainer_token1] = ACTIONS(616),
    [aux_sym_onbuild_token1] = ACTIONS(616),
    [aux_sym_run_token1] = ACTIONS(616),
    [aux_sym_shell_token1] = ACTIONS(616),
    [aux_sym_stopsignal_token1] = ACTIONS(616),
    [aux_sym_user_token1] = ACTIONS(616),
    [aux_sym_volume_token1] = ACTIONS(616),
    [aux_sym_workdir_token1] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(616),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(618),
    [aux_sym_add_token1] = ACTIONS(618),
    [aux_sym_arg_token1] = ACTIONS(618),
    [aux_sym_cmd_token1] = ACTIONS(618),
    [aux_sym_copy_token1] = ACTIONS(618),
    [aux_sym_entrypoint_token1] = ACTIONS(618),
    [aux_sym_env_token1] = ACTIONS(618),
    [aux_sym_expose_token1] = ACTIONS(618),
    [aux_sym_from_token1] = ACTIONS(618),
    [aux_sym_healthcheck_token1] = ACTIONS(618),
    [aux_sym_label_token1] = ACTIONS(618),
    [aux_sym_maintainer_token1] = ACTIONS(618),
    [aux_sym_onbuild_token1] = ACTIONS(618),
    [aux_sym_run_token1] = ACTIONS(618),
    [aux_sym_shell_token1] = ACTIONS(618),
    [aux_sym_stopsignal_token1] = ACTIONS(618),
    [aux_sym_user_token1] = ACTIONS(618),
    [aux_sym_volume_token1] = ACTIONS(618),
    [aux_sym_workdir_token1] = ACTIONS(618),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(618),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [aux_sym_add_token1] = ACTIONS(620),
    [aux_sym_arg_token1] = ACTIONS(620),
    [aux_sym_cmd_token1] = ACTIONS(620),
    [aux_sym_copy_token1] = ACTIONS(620),
    [aux_sym_entrypoint_token1] = ACTIONS(620),
    [aux_sym_env_token1] = ACTIONS(620),
    [aux_sym_expose_token1] = ACTIONS(620),
    [aux_sym_from_token1] = ACTIONS(620),
    [aux_sym_healthcheck_token1] = ACTIONS(620),
    [aux_sym_label_token1] = ACTIONS(620),
    [aux_sym_maintainer_token1] = ACTIONS(620),
    [aux_sym_onbuild_token1] = ACTIONS(620),
    [aux_sym_run_token1] = ACTIONS(620),
    [aux_sym_shell_token1] = ACTIONS(620),
    [aux_sym_stopsignal_token1] = ACTIONS(620),
    [aux_sym_user_token1] = ACTIONS(620),
    [aux_sym_volume_token1] = ACTIONS(620),
    [aux_sym_workdir_token1] = ACTIONS(620),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(620),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym_add_token1] = ACTIONS(337),
    [aux_sym_arg_token1] = ACTIONS(337),
    [aux_sym_cmd_token1] = ACTIONS(337),
    [aux_sym_copy_token1] = ACTIONS(337),
    [aux_sym_entrypoint_token1] = ACTIONS(337),
    [aux_sym_env_token1] = ACTIONS(337),
    [aux_sym_expose_token1] = ACTIONS(337),
    [aux_sym_from_token1] = ACTIONS(337),
    [aux_sym_healthcheck_token1] = ACTIONS(337),
    [aux_sym_label_token1] = ACTIONS(337),
    [aux_sym_maintainer_token1] = ACTIONS(337),
    [aux_sym_onbuild_token1] = ACTIONS(337),
    [aux_sym_run_token1] = ACTIONS(337),
    [aux_sym_shell_token1] = ACTIONS(337),
    [aux_sym_stopsignal_token1] = ACTIONS(337),
    [aux_sym_user_token1] = ACTIONS(337),
    [aux_sym_volume_token1] = ACTIONS(337),
    [aux_sym_workdir_token1] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [aux_sym_add_token1] = ACTIONS(550),
    [aux_sym_arg_token1] = ACTIONS(550),
    [aux_sym_cmd_token1] = ACTIONS(550),
    [aux_sym_copy_token1] = ACTIONS(550),
    [aux_sym_entrypoint_token1] = ACTIONS(550),
    [aux_sym_env_token1] = ACTIONS(550),
    [aux_sym_expose_token1] = ACTIONS(550),
    [aux_sym_from_token1] = ACTIONS(550),
    [aux_sym_healthcheck_token1] = ACTIONS(550),
    [aux_sym_label_token1] = ACTIONS(550),
    [aux_sym_maintainer_token1] = ACTIONS(550),
    [aux_sym_onbuild_token1] = ACTIONS(550),
    [aux_sym_run_token1] = ACTIONS(550),
    [aux_sym_shell_token1] = ACTIONS(550),
    [aux_sym_stopsignal_token1] = ACTIONS(550),
    [aux_sym_user_token1] = ACTIONS(550),
    [aux_sym_volume_token1] = ACTIONS(550),
    [aux_sym_workdir_token1] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(550),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [aux_sym_add_token1] = ACTIONS(315),
    [aux_sym_arg_token1] = ACTIONS(315),
    [aux_sym_cmd_token1] = ACTIONS(315),
    [aux_sym_copy_token1] = ACTIONS(315),
    [aux_sym_entrypoint_token1] = ACTIONS(315),
    [aux_sym_env_token1] = ACTIONS(315),
    [aux_sym_expose_token1] = ACTIONS(315),
    [aux_sym_from_token1] = ACTIONS(315),
    [aux_sym_healthcheck_token1] = ACTIONS(315),
    [aux_sym_label_token1] = ACTIONS(315),
    [aux_sym_maintainer_token1] = ACTIONS(315),
    [aux_sym_onbuild_token1] = ACTIONS(315),
    [aux_sym_run_token1] = ACTIONS(315),
    [aux_sym_shell_token1] = ACTIONS(315),
    [aux_sym_stopsignal_token1] = ACTIONS(315),
    [aux_sym_user_token1] = ACTIONS(315),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [aux_sym_add_token1] = ACTIONS(622),
    [aux_sym_arg_token1] = ACTIONS(622),
    [aux_sym_cmd_token1] = ACTIONS(622),
    [aux_sym_copy_token1] = ACTIONS(622),
    [aux_sym_entrypoint_token1] = ACTIONS(622),
    [aux_sym_env_token1] = ACTIONS(622),
    [aux_sym_expose_token1] = ACTIONS(622),
    [aux_sym_from_token1] = ACTIONS(622),
    [aux_sym_healthcheck_token1] = ACTIONS(622),
    [aux_sym_label_token1] = ACTIONS(622),
    [aux_sym_maintainer_token1] = ACTIONS(622),
    [aux_sym_onbuild_token1] = ACTIONS(622),
    [aux_sym_run_token1] = ACTIONS(622),
    [aux_sym_shell_token1] = ACTIONS(622),
    [aux_sym_stopsignal_token1] = ACTIONS(622),
    [aux_sym_user_token1] = ACTIONS(622),
    [aux_sym_volume_token1] = ACTIONS(622),
    [aux_sym_workdir_token1] = ACTIONS(622),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(622),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym_add_token1] = ACTIONS(375),
    [aux_sym_arg_token1] = ACTIONS(375),
    [aux_sym_cmd_token1] = ACTIONS(375),
    [aux_sym_copy_token1] = ACTIONS(375),
    [aux_sym_entrypoint_token1] = ACTIONS(375),
    [aux_sym_env_token1] = ACTIONS(375),
    [aux_sym_expose_token1] = ACTIONS(375),
    [aux_sym_from_token1] = ACTIONS(375),
    [aux_sym_healthcheck_token1] = ACTIONS(375),
    [aux_sym_label_token1] = ACTIONS(375),
    [aux_sym_maintainer_token1] = ACTIONS(375),
    [aux_sym_onbuild_token1] = ACTIONS(375),
    [aux_sym_run_token1] = ACTIONS(375),
    [aux_sym_shell_token1] = ACTIONS(375),
    [aux_sym_stopsignal_token1] = ACTIONS(375),
    [aux_sym_user_token1] = ACTIONS(375),
    [aux_sym_volume_token1] = ACTIONS(375),
    [aux_sym_workdir_token1] = ACTIONS(375),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(624),
    [aux_sym_add_token1] = ACTIONS(624),
    [aux_sym_arg_token1] = ACTIONS(624),
    [aux_sym_cmd_token1] = ACTIONS(624),
    [aux_sym_copy_token1] = ACTIONS(624),
    [aux_sym_entrypoint_token1] = ACTIONS(624),
    [aux_sym_env_token1] = ACTIONS(624),
    [aux_sym_expose_token1] = ACTIONS(624),
    [aux_sym_from_token1] = ACTIONS(624),
    [aux_sym_healthcheck_token1] = ACTIONS(624),
    [aux_sym_label_token1] = ACTIONS(624),
    [aux_sym_maintainer_token1] = ACTIONS(624),
    [aux_sym_onbuild_token1] = ACTIONS(624),
    [aux_sym_run_token1] = ACTIONS(624),
    [aux_sym_shell_token1] = ACTIONS(624),
    [aux_sym_stopsignal_token1] = ACTIONS(624),
    [aux_sym_user_token1] = ACTIONS(624),
    [aux_sym_volume_token1] = ACTIONS(624),
    [aux_sym_workdir_token1] = ACTIONS(624),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(624),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [192] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(626),
    [aux_sym_add_token1] = ACTIONS(626),
    [aux_sym_arg_token1] = ACTIONS(626),
    [aux_sym_cmd_token1] = ACTIONS(626),
    [aux_sym_copy_token1] = ACTIONS(626),
    [aux_sym_entrypoint_token1] = ACTIONS(626),
    [aux_sym_env_token1] = ACTIONS(626),
    [aux_sym_expose_token1] = ACTIONS(626),
    [aux_sym_from_token1] = ACTIONS(626),
    [aux_sym_healthcheck_token1] = ACTIONS(626),
    [aux_sym_label_token1] = ACTIONS(626),
    [aux_sym_maintainer_token1] = ACTIONS(626),
    [aux_sym_onbuild_token1] = ACTIONS(626),
    [aux_sym_run_token1] = ACTIONS(626),
    [aux_sym_shell_token1] = ACTIONS(626),
    [aux_sym_stopsignal_token1] = ACTIONS(626),
    [aux_sym_user_token1] = ACTIONS(626),
    [aux_sym_volume_token1] = ACTIONS(626),
    [aux_sym_workdir_token1] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(626),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(628),
    [aux_sym_add_token1] = ACTIONS(628),
    [aux_sym_arg_token1] = ACTIONS(628),
    [aux_sym_cmd_token1] = ACTIONS(628),
    [aux_sym_copy_token1] = ACTIONS(628),
    [aux_sym_entrypoint_token1] = ACTIONS(628),
    [aux_sym_env_token1] = ACTIONS(628),
    [aux_sym_expose_token1] = ACTIONS(628),
    [aux_sym_from_token1] = ACTIONS(628),
    [aux_sym_healthcheck_token1] = ACTIONS(628),
    [aux_sym_label_token1] = ACTIONS(628),
    [aux_sym_maintainer_token1] = ACTIONS(628),
    [aux_sym_onbuild_token1] = ACTIONS(628),
    [aux_sym_run_token1] = ACTIONS(628),
    [aux_sym_shell_token1] = ACTIONS(628),
    [aux_sym_stopsignal_token1] = ACTIONS(628),
    [aux_sym_user_token1] = ACTIONS(628),
    [aux_sym_volume_token1] = ACTIONS(628),
    [aux_sym_workdir_token1] = ACTIONS(628),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(628),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [aux_sym_add_token1] = ACTIONS(630),
    [aux_sym_arg_token1] = ACTIONS(630),
    [aux_sym_cmd_token1] = ACTIONS(630),
    [aux_sym_copy_token1] = ACTIONS(630),
    [aux_sym_entrypoint_token1] = ACTIONS(630),
    [aux_sym_env_token1] = ACTIONS(630),
    [aux_sym_expose_token1] = ACTIONS(630),
    [aux_sym_from_token1] = ACTIONS(630),
    [aux_sym_healthcheck_token1] = ACTIONS(630),
    [aux_sym_label_token1] = ACTIONS(630),
    [aux_sym_maintainer_token1] = ACTIONS(630),
    [aux_sym_onbuild_token1] = ACTIONS(630),
    [aux_sym_run_token1] = ACTIONS(630),
    [aux_sym_shell_token1] = ACTIONS(630),
    [aux_sym_stopsignal_token1] = ACTIONS(630),
    [aux_sym_user_token1] = ACTIONS(630),
    [aux_sym_volume_token1] = ACTIONS(630),
    [aux_sym_workdir_token1] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(630),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [196] = {
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
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [aux_sym_add_token1] = ACTIONS(632),
    [aux_sym_arg_token1] = ACTIONS(632),
    [aux_sym_cmd_token1] = ACTIONS(632),
    [aux_sym_copy_token1] = ACTIONS(632),
    [aux_sym_entrypoint_token1] = ACTIONS(632),
    [aux_sym_env_token1] = ACTIONS(632),
    [aux_sym_expose_token1] = ACTIONS(632),
    [aux_sym_from_token1] = ACTIONS(632),
    [aux_sym_healthcheck_token1] = ACTIONS(632),
    [aux_sym_label_token1] = ACTIONS(632),
    [aux_sym_maintainer_token1] = ACTIONS(632),
    [aux_sym_onbuild_token1] = ACTIONS(632),
    [aux_sym_run_token1] = ACTIONS(632),
    [aux_sym_shell_token1] = ACTIONS(632),
    [aux_sym_stopsignal_token1] = ACTIONS(632),
    [aux_sym_user_token1] = ACTIONS(632),
    [aux_sym_volume_token1] = ACTIONS(632),
    [aux_sym_workdir_token1] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(632),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [aux_sym_add_token1] = ACTIONS(634),
    [aux_sym_arg_token1] = ACTIONS(634),
    [aux_sym_cmd_token1] = ACTIONS(634),
    [aux_sym_copy_token1] = ACTIONS(634),
    [aux_sym_entrypoint_token1] = ACTIONS(634),
    [aux_sym_env_token1] = ACTIONS(634),
    [aux_sym_expose_token1] = ACTIONS(634),
    [aux_sym_from_token1] = ACTIONS(634),
    [aux_sym_healthcheck_token1] = ACTIONS(634),
    [aux_sym_label_token1] = ACTIONS(634),
    [aux_sym_maintainer_token1] = ACTIONS(634),
    [aux_sym_onbuild_token1] = ACTIONS(634),
    [aux_sym_run_token1] = ACTIONS(634),
    [aux_sym_shell_token1] = ACTIONS(634),
    [aux_sym_stopsignal_token1] = ACTIONS(634),
    [aux_sym_user_token1] = ACTIONS(634),
    [aux_sym_volume_token1] = ACTIONS(634),
    [aux_sym_workdir_token1] = ACTIONS(634),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(634),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(636),
    [aux_sym_add_token1] = ACTIONS(636),
    [aux_sym_arg_token1] = ACTIONS(636),
    [aux_sym_cmd_token1] = ACTIONS(636),
    [aux_sym_copy_token1] = ACTIONS(636),
    [aux_sym_entrypoint_token1] = ACTIONS(636),
    [aux_sym_env_token1] = ACTIONS(636),
    [aux_sym_expose_token1] = ACTIONS(636),
    [aux_sym_from_token1] = ACTIONS(636),
    [aux_sym_healthcheck_token1] = ACTIONS(636),
    [aux_sym_label_token1] = ACTIONS(636),
    [aux_sym_maintainer_token1] = ACTIONS(636),
    [aux_sym_onbuild_token1] = ACTIONS(636),
    [aux_sym_run_token1] = ACTIONS(636),
    [aux_sym_shell_token1] = ACTIONS(636),
    [aux_sym_stopsignal_token1] = ACTIONS(636),
    [aux_sym_user_token1] = ACTIONS(636),
    [aux_sym_volume_token1] = ACTIONS(636),
    [aux_sym_workdir_token1] = ACTIONS(636),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(636),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [aux_sym_add_token1] = ACTIONS(638),
    [aux_sym_arg_token1] = ACTIONS(638),
    [aux_sym_cmd_token1] = ACTIONS(638),
    [aux_sym_copy_token1] = ACTIONS(638),
    [aux_sym_entrypoint_token1] = ACTIONS(638),
    [aux_sym_env_token1] = ACTIONS(638),
    [aux_sym_expose_token1] = ACTIONS(638),
    [aux_sym_from_token1] = ACTIONS(638),
    [aux_sym_healthcheck_token1] = ACTIONS(638),
    [aux_sym_label_token1] = ACTIONS(638),
    [aux_sym_maintainer_token1] = ACTIONS(638),
    [aux_sym_onbuild_token1] = ACTIONS(638),
    [aux_sym_run_token1] = ACTIONS(638),
    [aux_sym_shell_token1] = ACTIONS(638),
    [aux_sym_stopsignal_token1] = ACTIONS(638),
    [aux_sym_user_token1] = ACTIONS(638),
    [aux_sym_volume_token1] = ACTIONS(638),
    [aux_sym_workdir_token1] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(638),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [aux_sym_add_token1] = ACTIONS(560),
    [aux_sym_arg_token1] = ACTIONS(560),
    [aux_sym_cmd_token1] = ACTIONS(560),
    [aux_sym_copy_token1] = ACTIONS(560),
    [aux_sym_entrypoint_token1] = ACTIONS(560),
    [aux_sym_env_token1] = ACTIONS(560),
    [aux_sym_expose_token1] = ACTIONS(560),
    [aux_sym_from_token1] = ACTIONS(560),
    [aux_sym_healthcheck_token1] = ACTIONS(560),
    [aux_sym_label_token1] = ACTIONS(560),
    [aux_sym_maintainer_token1] = ACTIONS(560),
    [aux_sym_onbuild_token1] = ACTIONS(560),
    [aux_sym_run_token1] = ACTIONS(560),
    [aux_sym_shell_token1] = ACTIONS(560),
    [aux_sym_stopsignal_token1] = ACTIONS(560),
    [aux_sym_user_token1] = ACTIONS(560),
    [aux_sym_volume_token1] = ACTIONS(560),
    [aux_sym_workdir_token1] = ACTIONS(560),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(560),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [aux_sym_add_token1] = ACTIONS(640),
    [aux_sym_arg_token1] = ACTIONS(640),
    [aux_sym_cmd_token1] = ACTIONS(640),
    [aux_sym_copy_token1] = ACTIONS(640),
    [aux_sym_entrypoint_token1] = ACTIONS(640),
    [aux_sym_env_token1] = ACTIONS(640),
    [aux_sym_expose_token1] = ACTIONS(640),
    [aux_sym_from_token1] = ACTIONS(640),
    [aux_sym_healthcheck_token1] = ACTIONS(640),
    [aux_sym_label_token1] = ACTIONS(640),
    [aux_sym_maintainer_token1] = ACTIONS(640),
    [aux_sym_onbuild_token1] = ACTIONS(640),
    [aux_sym_run_token1] = ACTIONS(640),
    [aux_sym_shell_token1] = ACTIONS(640),
    [aux_sym_stopsignal_token1] = ACTIONS(640),
    [aux_sym_user_token1] = ACTIONS(640),
    [aux_sym_volume_token1] = ACTIONS(640),
    [aux_sym_workdir_token1] = ACTIONS(640),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(640),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_add_token1] = ACTIONS(499),
    [aux_sym_arg_token1] = ACTIONS(499),
    [aux_sym_cmd_token1] = ACTIONS(499),
    [aux_sym_copy_token1] = ACTIONS(499),
    [aux_sym_entrypoint_token1] = ACTIONS(499),
    [aux_sym_env_token1] = ACTIONS(499),
    [aux_sym_expose_token1] = ACTIONS(499),
    [aux_sym_from_token1] = ACTIONS(499),
    [aux_sym_healthcheck_token1] = ACTIONS(499),
    [aux_sym_label_token1] = ACTIONS(499),
    [aux_sym_maintainer_token1] = ACTIONS(499),
    [aux_sym_onbuild_token1] = ACTIONS(499),
    [aux_sym_run_token1] = ACTIONS(499),
    [aux_sym_shell_token1] = ACTIONS(499),
    [aux_sym_stopsignal_token1] = ACTIONS(499),
    [aux_sym_user_token1] = ACTIONS(499),
    [aux_sym_volume_token1] = ACTIONS(499),
    [aux_sym_workdir_token1] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [aux_sym_add_token1] = ACTIONS(642),
    [aux_sym_arg_token1] = ACTIONS(642),
    [aux_sym_cmd_token1] = ACTIONS(642),
    [aux_sym_copy_token1] = ACTIONS(642),
    [aux_sym_entrypoint_token1] = ACTIONS(642),
    [aux_sym_env_token1] = ACTIONS(642),
    [aux_sym_expose_token1] = ACTIONS(642),
    [aux_sym_from_token1] = ACTIONS(642),
    [aux_sym_healthcheck_token1] = ACTIONS(642),
    [aux_sym_label_token1] = ACTIONS(642),
    [aux_sym_maintainer_token1] = ACTIONS(642),
    [aux_sym_onbuild_token1] = ACTIONS(642),
    [aux_sym_run_token1] = ACTIONS(642),
    [aux_sym_shell_token1] = ACTIONS(642),
    [aux_sym_stopsignal_token1] = ACTIONS(642),
    [aux_sym_user_token1] = ACTIONS(642),
    [aux_sym_volume_token1] = ACTIONS(642),
    [aux_sym_workdir_token1] = ACTIONS(642),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(642),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(401),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [aux_sym_add_token1] = ACTIONS(576),
    [aux_sym_arg_token1] = ACTIONS(576),
    [aux_sym_cmd_token1] = ACTIONS(576),
    [aux_sym_copy_token1] = ACTIONS(576),
    [aux_sym_entrypoint_token1] = ACTIONS(576),
    [aux_sym_env_token1] = ACTIONS(576),
    [aux_sym_expose_token1] = ACTIONS(576),
    [aux_sym_from_token1] = ACTIONS(576),
    [aux_sym_healthcheck_token1] = ACTIONS(576),
    [aux_sym_label_token1] = ACTIONS(576),
    [aux_sym_maintainer_token1] = ACTIONS(576),
    [aux_sym_onbuild_token1] = ACTIONS(576),
    [aux_sym_run_token1] = ACTIONS(576),
    [aux_sym_shell_token1] = ACTIONS(576),
    [aux_sym_stopsignal_token1] = ACTIONS(576),
    [aux_sym_user_token1] = ACTIONS(576),
    [aux_sym_volume_token1] = ACTIONS(576),
    [aux_sym_workdir_token1] = ACTIONS(576),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(576),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(371),
    [aux_sym_arg_token1] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_copy_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_env_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [aux_sym_healthcheck_token1] = ACTIONS(371),
    [aux_sym_label_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_onbuild_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(644),
    [aux_sym_add_token1] = ACTIONS(644),
    [aux_sym_arg_token1] = ACTIONS(644),
    [aux_sym_cmd_token1] = ACTIONS(644),
    [aux_sym_copy_token1] = ACTIONS(644),
    [aux_sym_entrypoint_token1] = ACTIONS(644),
    [aux_sym_env_token1] = ACTIONS(644),
    [aux_sym_expose_token1] = ACTIONS(644),
    [aux_sym_from_token1] = ACTIONS(644),
    [aux_sym_healthcheck_token1] = ACTIONS(644),
    [aux_sym_label_token1] = ACTIONS(644),
    [aux_sym_maintainer_token1] = ACTIONS(644),
    [aux_sym_onbuild_token1] = ACTIONS(644),
    [aux_sym_run_token1] = ACTIONS(644),
    [aux_sym_shell_token1] = ACTIONS(644),
    [aux_sym_stopsignal_token1] = ACTIONS(644),
    [aux_sym_user_token1] = ACTIONS(644),
    [aux_sym_volume_token1] = ACTIONS(644),
    [aux_sym_workdir_token1] = ACTIONS(644),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(644),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [aux_sym_add_token1] = ACTIONS(646),
    [aux_sym_arg_token1] = ACTIONS(646),
    [aux_sym_cmd_token1] = ACTIONS(646),
    [aux_sym_copy_token1] = ACTIONS(646),
    [aux_sym_entrypoint_token1] = ACTIONS(646),
    [aux_sym_env_token1] = ACTIONS(646),
    [aux_sym_expose_token1] = ACTIONS(646),
    [aux_sym_from_token1] = ACTIONS(646),
    [aux_sym_healthcheck_token1] = ACTIONS(646),
    [aux_sym_label_token1] = ACTIONS(646),
    [aux_sym_maintainer_token1] = ACTIONS(646),
    [aux_sym_onbuild_token1] = ACTIONS(646),
    [aux_sym_run_token1] = ACTIONS(646),
    [aux_sym_shell_token1] = ACTIONS(646),
    [aux_sym_stopsignal_token1] = ACTIONS(646),
    [aux_sym_user_token1] = ACTIONS(646),
    [aux_sym_volume_token1] = ACTIONS(646),
    [aux_sym_workdir_token1] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(646),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_add_token1] = ACTIONS(295),
    [aux_sym_arg_token1] = ACTIONS(295),
    [aux_sym_cmd_token1] = ACTIONS(295),
    [aux_sym_copy_token1] = ACTIONS(295),
    [aux_sym_entrypoint_token1] = ACTIONS(295),
    [aux_sym_env_token1] = ACTIONS(295),
    [aux_sym_expose_token1] = ACTIONS(295),
    [aux_sym_from_token1] = ACTIONS(295),
    [aux_sym_healthcheck_token1] = ACTIONS(295),
    [aux_sym_label_token1] = ACTIONS(295),
    [aux_sym_maintainer_token1] = ACTIONS(295),
    [aux_sym_onbuild_token1] = ACTIONS(295),
    [aux_sym_run_token1] = ACTIONS(295),
    [aux_sym_shell_token1] = ACTIONS(295),
    [aux_sym_stopsignal_token1] = ACTIONS(295),
    [aux_sym_user_token1] = ACTIONS(295),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(648),
    [aux_sym_add_token1] = ACTIONS(648),
    [aux_sym_arg_token1] = ACTIONS(648),
    [aux_sym_cmd_token1] = ACTIONS(648),
    [aux_sym_copy_token1] = ACTIONS(648),
    [aux_sym_entrypoint_token1] = ACTIONS(648),
    [aux_sym_env_token1] = ACTIONS(648),
    [aux_sym_expose_token1] = ACTIONS(648),
    [aux_sym_from_token1] = ACTIONS(648),
    [aux_sym_healthcheck_token1] = ACTIONS(648),
    [aux_sym_label_token1] = ACTIONS(648),
    [aux_sym_maintainer_token1] = ACTIONS(648),
    [aux_sym_onbuild_token1] = ACTIONS(648),
    [aux_sym_run_token1] = ACTIONS(648),
    [aux_sym_shell_token1] = ACTIONS(648),
    [aux_sym_stopsignal_token1] = ACTIONS(648),
    [aux_sym_user_token1] = ACTIONS(648),
    [aux_sym_volume_token1] = ACTIONS(648),
    [aux_sym_workdir_token1] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(648),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(421),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [aux_sym_add_token1] = ACTIONS(592),
    [aux_sym_arg_token1] = ACTIONS(592),
    [aux_sym_cmd_token1] = ACTIONS(592),
    [aux_sym_copy_token1] = ACTIONS(592),
    [aux_sym_entrypoint_token1] = ACTIONS(592),
    [aux_sym_env_token1] = ACTIONS(592),
    [aux_sym_expose_token1] = ACTIONS(592),
    [aux_sym_from_token1] = ACTIONS(592),
    [aux_sym_healthcheck_token1] = ACTIONS(592),
    [aux_sym_label_token1] = ACTIONS(592),
    [aux_sym_maintainer_token1] = ACTIONS(592),
    [aux_sym_onbuild_token1] = ACTIONS(592),
    [aux_sym_run_token1] = ACTIONS(592),
    [aux_sym_shell_token1] = ACTIONS(592),
    [aux_sym_stopsignal_token1] = ACTIONS(592),
    [aux_sym_user_token1] = ACTIONS(592),
    [aux_sym_volume_token1] = ACTIONS(592),
    [aux_sym_workdir_token1] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(592),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(650),
    [aux_sym_add_token1] = ACTIONS(650),
    [aux_sym_arg_token1] = ACTIONS(650),
    [aux_sym_cmd_token1] = ACTIONS(650),
    [aux_sym_copy_token1] = ACTIONS(650),
    [aux_sym_entrypoint_token1] = ACTIONS(650),
    [aux_sym_env_token1] = ACTIONS(650),
    [aux_sym_expose_token1] = ACTIONS(650),
    [aux_sym_from_token1] = ACTIONS(650),
    [aux_sym_healthcheck_token1] = ACTIONS(650),
    [aux_sym_label_token1] = ACTIONS(650),
    [aux_sym_maintainer_token1] = ACTIONS(650),
    [aux_sym_onbuild_token1] = ACTIONS(650),
    [aux_sym_run_token1] = ACTIONS(650),
    [aux_sym_shell_token1] = ACTIONS(650),
    [aux_sym_stopsignal_token1] = ACTIONS(650),
    [aux_sym_user_token1] = ACTIONS(650),
    [aux_sym_volume_token1] = ACTIONS(650),
    [aux_sym_workdir_token1] = ACTIONS(650),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(650),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(652),
    [aux_sym_add_token1] = ACTIONS(652),
    [aux_sym_arg_token1] = ACTIONS(652),
    [aux_sym_cmd_token1] = ACTIONS(652),
    [aux_sym_copy_token1] = ACTIONS(652),
    [aux_sym_entrypoint_token1] = ACTIONS(652),
    [aux_sym_env_token1] = ACTIONS(652),
    [aux_sym_expose_token1] = ACTIONS(652),
    [aux_sym_from_token1] = ACTIONS(652),
    [aux_sym_healthcheck_token1] = ACTIONS(652),
    [aux_sym_label_token1] = ACTIONS(652),
    [aux_sym_maintainer_token1] = ACTIONS(652),
    [aux_sym_onbuild_token1] = ACTIONS(652),
    [aux_sym_run_token1] = ACTIONS(652),
    [aux_sym_shell_token1] = ACTIONS(652),
    [aux_sym_stopsignal_token1] = ACTIONS(652),
    [aux_sym_user_token1] = ACTIONS(652),
    [aux_sym_volume_token1] = ACTIONS(652),
    [aux_sym_workdir_token1] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(652),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(654),
    [aux_sym_add_token1] = ACTIONS(654),
    [aux_sym_arg_token1] = ACTIONS(654),
    [aux_sym_cmd_token1] = ACTIONS(654),
    [aux_sym_copy_token1] = ACTIONS(654),
    [aux_sym_entrypoint_token1] = ACTIONS(654),
    [aux_sym_env_token1] = ACTIONS(654),
    [aux_sym_expose_token1] = ACTIONS(654),
    [aux_sym_from_token1] = ACTIONS(654),
    [aux_sym_healthcheck_token1] = ACTIONS(654),
    [aux_sym_label_token1] = ACTIONS(654),
    [aux_sym_maintainer_token1] = ACTIONS(654),
    [aux_sym_onbuild_token1] = ACTIONS(654),
    [aux_sym_run_token1] = ACTIONS(654),
    [aux_sym_shell_token1] = ACTIONS(654),
    [aux_sym_stopsignal_token1] = ACTIONS(654),
    [aux_sym_user_token1] = ACTIONS(654),
    [aux_sym_volume_token1] = ACTIONS(654),
    [aux_sym_workdir_token1] = ACTIONS(654),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(654),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [aux_sym_add_token1] = ACTIONS(656),
    [aux_sym_arg_token1] = ACTIONS(656),
    [aux_sym_cmd_token1] = ACTIONS(656),
    [aux_sym_copy_token1] = ACTIONS(656),
    [aux_sym_entrypoint_token1] = ACTIONS(656),
    [aux_sym_env_token1] = ACTIONS(656),
    [aux_sym_expose_token1] = ACTIONS(656),
    [aux_sym_from_token1] = ACTIONS(656),
    [aux_sym_healthcheck_token1] = ACTIONS(656),
    [aux_sym_label_token1] = ACTIONS(656),
    [aux_sym_maintainer_token1] = ACTIONS(656),
    [aux_sym_onbuild_token1] = ACTIONS(656),
    [aux_sym_run_token1] = ACTIONS(656),
    [aux_sym_shell_token1] = ACTIONS(656),
    [aux_sym_stopsignal_token1] = ACTIONS(656),
    [aux_sym_user_token1] = ACTIONS(656),
    [aux_sym_volume_token1] = ACTIONS(656),
    [aux_sym_workdir_token1] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(656),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(658),
    [aux_sym_add_token1] = ACTIONS(658),
    [aux_sym_arg_token1] = ACTIONS(658),
    [aux_sym_cmd_token1] = ACTIONS(658),
    [aux_sym_copy_token1] = ACTIONS(658),
    [aux_sym_entrypoint_token1] = ACTIONS(658),
    [aux_sym_env_token1] = ACTIONS(658),
    [aux_sym_expose_token1] = ACTIONS(658),
    [aux_sym_from_token1] = ACTIONS(658),
    [aux_sym_healthcheck_token1] = ACTIONS(658),
    [aux_sym_label_token1] = ACTIONS(658),
    [aux_sym_maintainer_token1] = ACTIONS(658),
    [aux_sym_onbuild_token1] = ACTIONS(658),
    [aux_sym_run_token1] = ACTIONS(658),
    [aux_sym_shell_token1] = ACTIONS(658),
    [aux_sym_stopsignal_token1] = ACTIONS(658),
    [aux_sym_user_token1] = ACTIONS(658),
    [aux_sym_volume_token1] = ACTIONS(658),
    [aux_sym_workdir_token1] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(658),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(660),
    [aux_sym_add_token1] = ACTIONS(660),
    [aux_sym_arg_token1] = ACTIONS(660),
    [aux_sym_cmd_token1] = ACTIONS(660),
    [aux_sym_copy_token1] = ACTIONS(660),
    [aux_sym_entrypoint_token1] = ACTIONS(660),
    [aux_sym_env_token1] = ACTIONS(660),
    [aux_sym_expose_token1] = ACTIONS(660),
    [aux_sym_from_token1] = ACTIONS(660),
    [aux_sym_healthcheck_token1] = ACTIONS(660),
    [aux_sym_label_token1] = ACTIONS(660),
    [aux_sym_maintainer_token1] = ACTIONS(660),
    [aux_sym_onbuild_token1] = ACTIONS(660),
    [aux_sym_run_token1] = ACTIONS(660),
    [aux_sym_shell_token1] = ACTIONS(660),
    [aux_sym_stopsignal_token1] = ACTIONS(660),
    [aux_sym_user_token1] = ACTIONS(660),
    [aux_sym_volume_token1] = ACTIONS(660),
    [aux_sym_workdir_token1] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(660),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [220] = {
    [sym_repository] = STATE(242),
    [sym__repository_start] = STATE(233),
    [sym_image] = STATE(128),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(662),
    [anon_sym_DOLLAR] = ACTIONS(664),
    [aux_sym_platform_token1] = ACTIONS(666),
    [aux_sym__repository_start_token1] = ACTIONS(664),
    [aux_sym__repository_start_token4] = ACTIONS(668),
    [aux_sym__repository_start_token6] = ACTIONS(668),
    [aux_sym__repository_start_token8] = ACTIONS(670),
    [aux_sym__repository_start_token10] = ACTIONS(670),
    [aux_sym__repository_start_token12] = ACTIONS(672),
    [aux_sym__repository_start_token14] = ACTIONS(672),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym__hc_interval] = STATE(222),
    [sym__hc_timeout] = STATE(222),
    [sym__hc_start_period] = STATE(222),
    [sym__hc_retries] = STATE(222),
    [sym__hc_options] = STATE(222),
    [sym__hc_command] = STATE(204),
    [aux_sym_healthcheck_repeat1] = STATE(222),
    [sym_hc_none] = ACTIONS(674),
    [anon_sym_DASH_DASHinterval] = ACTIONS(676),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(678),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(680),
    [anon_sym_DASH_DASHretries] = ACTIONS(682),
    [aux_sym__hc_command_token1] = ACTIONS(684),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [222] = {
    [sym__hc_interval] = STATE(232),
    [sym__hc_timeout] = STATE(232),
    [sym__hc_start_period] = STATE(232),
    [sym__hc_retries] = STATE(232),
    [sym__hc_options] = STATE(232),
    [sym__hc_command] = STATE(202),
    [aux_sym_healthcheck_repeat1] = STATE(232),
    [anon_sym_DASH_DASHinterval] = ACTIONS(676),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(678),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(680),
    [anon_sym_DASH_DASHretries] = ACTIONS(682),
    [aux_sym__hc_command_token1] = ACTIONS(684),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [223] = {
    [sym_repository] = STATE(250),
    [sym__repository_start] = STATE(233),
    [sym_image] = STATE(117),
    [anon_sym_DOLLAR] = ACTIONS(664),
    [aux_sym_platform_token1] = ACTIONS(666),
    [aux_sym__repository_start_token1] = ACTIONS(664),
    [aux_sym__repository_start_token4] = ACTIONS(668),
    [aux_sym__repository_start_token6] = ACTIONS(668),
    [aux_sym__repository_start_token8] = ACTIONS(670),
    [aux_sym__repository_start_token10] = ACTIONS(670),
    [aux_sym__repository_start_token12] = ACTIONS(672),
    [aux_sym__repository_start_token14] = ACTIONS(672),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(196),
    [sym__port] = STATE(97),
    [sym_port] = STATE(97),
    [sym_port_range] = STATE(97),
    [sym__port_part] = STATE(79),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(686),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [225] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(688),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_digest] = STATE(168),
    [anon_sym_sha256_COLON] = ACTIONS(700),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_digest] = STATE(170),
    [anon_sym_sha256_COLON] = ACTIONS(702),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_digest] = STATE(167),
    [anon_sym_sha256_COLON] = ACTIONS(704),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym_digest] = STATE(173),
    [anon_sym_sha256_COLON] = ACTIONS(706),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym__repository_continued] = STATE(230),
    [aux_sym_repository_repeat1] = STATE(230),
    [anon_sym_DOLLAR] = ACTIONS(708),
    [aux_sym_platform_token1] = ACTIONS(711),
    [aux_sym__repository_start_token1] = ACTIONS(708),
    [aux_sym__repository_start_token4] = ACTIONS(714),
    [aux_sym__repository_start_token6] = ACTIONS(714),
    [aux_sym__repository_start_token8] = ACTIONS(717),
    [aux_sym__repository_start_token10] = ACTIONS(717),
    [aux_sym__repository_start_token12] = ACTIONS(720),
    [aux_sym__repository_start_token14] = ACTIONS(720),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym__repository_continued] = STATE(230),
    [aux_sym_repository_repeat1] = STATE(230),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(723),
    [aux_sym__repository_start_token4] = ACTIONS(729),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(732),
    [aux_sym__repository_start_token10] = ACTIONS(732),
    [aux_sym__repository_start_token12] = ACTIONS(735),
    [aux_sym__repository_start_token14] = ACTIONS(735),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym__hc_interval] = STATE(232),
    [sym__hc_timeout] = STATE(232),
    [sym__hc_start_period] = STATE(232),
    [sym__hc_retries] = STATE(232),
    [sym__hc_options] = STATE(232),
    [aux_sym_healthcheck_repeat1] = STATE(232),
    [anon_sym_DASH_DASHinterval] = ACTIONS(738),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(741),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(744),
    [anon_sym_DASH_DASHretries] = ACTIONS(747),
    [aux_sym__hc_command_token1] = ACTIONS(750),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [233] = {
    [sym__repository_continued] = STATE(231),
    [aux_sym_repository_repeat1] = STATE(231),
    [anon_sym_DOLLAR] = ACTIONS(752),
    [aux_sym_platform_token1] = ACTIONS(755),
    [aux_sym__repository_start_token1] = ACTIONS(752),
    [aux_sym__repository_start_token4] = ACTIONS(758),
    [aux_sym__repository_start_token6] = ACTIONS(758),
    [aux_sym__repository_start_token8] = ACTIONS(761),
    [aux_sym__repository_start_token10] = ACTIONS(761),
    [aux_sym__repository_start_token12] = ACTIONS(764),
    [aux_sym__repository_start_token14] = ACTIONS(764),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_digest] = STATE(163),
    [anon_sym_sha256_COLON] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_as_name] = STATE(213),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym_tag] = STATE(142),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_platform_token1] = ACTIONS(781),
    [aux_sym__repository_start_token1] = ACTIONS(779),
    [aux_sym__repository_start_token4] = ACTIONS(783),
    [aux_sym__repository_start_token6] = ACTIONS(783),
    [aux_sym__repository_start_token8] = ACTIONS(785),
    [aux_sym__repository_start_token10] = ACTIONS(785),
    [aux_sym__repository_start_token12] = ACTIONS(787),
    [aux_sym__repository_start_token14] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_as_name] = STATE(201),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_tag] = STATE(153),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_platform_token1] = ACTIONS(781),
    [aux_sym__repository_start_token1] = ACTIONS(779),
    [aux_sym__repository_start_token4] = ACTIONS(783),
    [aux_sym__repository_start_token6] = ACTIONS(783),
    [aux_sym__repository_start_token8] = ACTIONS(785),
    [aux_sym__repository_start_token10] = ACTIONS(785),
    [aux_sym__repository_start_token12] = ACTIONS(787),
    [aux_sym__repository_start_token14] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_tag] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_platform_token1] = ACTIONS(781),
    [aux_sym__repository_start_token1] = ACTIONS(779),
    [aux_sym__repository_start_token4] = ACTIONS(783),
    [aux_sym__repository_start_token6] = ACTIONS(783),
    [aux_sym__repository_start_token8] = ACTIONS(785),
    [aux_sym__repository_start_token10] = ACTIONS(785),
    [aux_sym__repository_start_token12] = ACTIONS(787),
    [aux_sym__repository_start_token14] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_digest] = STATE(170),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_digest] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_image] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(789),
    [aux_sym_platform_token1] = ACTIONS(791),
    [aux_sym__repository_start_token1] = ACTIONS(789),
    [aux_sym__repository_start_token4] = ACTIONS(793),
    [aux_sym__repository_start_token6] = ACTIONS(793),
    [aux_sym__repository_start_token8] = ACTIONS(795),
    [aux_sym__repository_start_token10] = ACTIONS(795),
    [aux_sym__repository_start_token12] = ACTIONS(797),
    [aux_sym__repository_start_token14] = ACTIONS(797),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_as_name] = STATE(185),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_as_name] = STATE(203),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_digest] = STATE(167),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_digest] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_as_name] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_as_name] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_digest] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_image] = STATE(129),
    [anon_sym_DOLLAR] = ACTIONS(789),
    [aux_sym_platform_token1] = ACTIONS(791),
    [aux_sym__repository_start_token1] = ACTIONS(789),
    [aux_sym__repository_start_token4] = ACTIONS(793),
    [aux_sym__repository_start_token6] = ACTIONS(793),
    [aux_sym__repository_start_token8] = ACTIONS(795),
    [aux_sym__repository_start_token10] = ACTIONS(795),
    [aux_sym__repository_start_token12] = ACTIONS(797),
    [aux_sym__repository_start_token14] = ACTIONS(797),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_as_name] = STATE(187),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_digest] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [aux_sym_platform_token1] = ACTIONS(692),
    [aux_sym__repository_start_token1] = ACTIONS(690),
    [aux_sym__repository_start_token4] = ACTIONS(694),
    [aux_sym__repository_start_token6] = ACTIONS(694),
    [aux_sym__repository_start_token8] = ACTIONS(696),
    [aux_sym__repository_start_token10] = ACTIONS(696),
    [aux_sym__repository_start_token12] = ACTIONS(698),
    [aux_sym__repository_start_token14] = ACTIONS(698),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_platform_token1] = ACTIONS(781),
    [aux_sym__repository_start_token1] = ACTIONS(779),
    [aux_sym__repository_start_token4] = ACTIONS(783),
    [aux_sym__repository_start_token6] = ACTIONS(783),
    [aux_sym__repository_start_token8] = ACTIONS(785),
    [aux_sym__repository_start_token10] = ACTIONS(785),
    [aux_sym__repository_start_token12] = ACTIONS(787),
    [aux_sym__repository_start_token14] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_as_name] = STATE(206),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [sym_as_name] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(769),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(777),
    [aux_sym__repository_start_token14] = ACTIONS(777),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_DOLLAR] = ACTIONS(799),
    [aux_sym_platform_token1] = ACTIONS(801),
    [aux_sym__repository_start_token1] = ACTIONS(799),
    [aux_sym__repository_start_token4] = ACTIONS(799),
    [aux_sym__repository_start_token6] = ACTIONS(799),
    [aux_sym__repository_start_token8] = ACTIONS(799),
    [aux_sym__repository_start_token10] = ACTIONS(799),
    [aux_sym__repository_start_token12] = ACTIONS(799),
    [aux_sym__repository_start_token14] = ACTIONS(799),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
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
  [258] = {
    [anon_sym_DOLLAR] = ACTIONS(803),
    [aux_sym_platform_token1] = ACTIONS(805),
    [aux_sym__repository_start_token1] = ACTIONS(803),
    [aux_sym__repository_start_token4] = ACTIONS(803),
    [aux_sym__repository_start_token6] = ACTIONS(803),
    [aux_sym__repository_start_token8] = ACTIONS(803),
    [aux_sym__repository_start_token10] = ACTIONS(803),
    [aux_sym__repository_start_token12] = ACTIONS(803),
    [aux_sym__repository_start_token14] = ACTIONS(803),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
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
  [260] = {
    [sym__chown] = STATE(279),
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(807),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(809),
  },
  [261] = {
    [anon_sym_DOLLAR] = ACTIONS(811),
    [aux_sym_platform_token1] = ACTIONS(813),
    [aux_sym__repository_start_token1] = ACTIONS(811),
    [aux_sym__repository_start_token4] = ACTIONS(811),
    [aux_sym__repository_start_token6] = ACTIONS(811),
    [aux_sym__repository_start_token8] = ACTIONS(811),
    [aux_sym__repository_start_token10] = ACTIONS(811),
    [aux_sym__repository_start_token12] = ACTIONS(811),
    [aux_sym__repository_start_token14] = ACTIONS(811),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
    [anon_sym_DOLLAR] = ACTIONS(815),
    [aux_sym_platform_token1] = ACTIONS(817),
    [aux_sym__repository_start_token1] = ACTIONS(815),
    [aux_sym__repository_start_token4] = ACTIONS(815),
    [aux_sym__repository_start_token6] = ACTIONS(815),
    [aux_sym__repository_start_token8] = ACTIONS(815),
    [aux_sym__repository_start_token10] = ACTIONS(815),
    [aux_sym__repository_start_token12] = ACTIONS(815),
    [aux_sym__repository_start_token14] = ACTIONS(815),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [anon_sym_DOLLAR] = ACTIONS(819),
    [aux_sym_platform_token1] = ACTIONS(821),
    [aux_sym__repository_start_token1] = ACTIONS(819),
    [aux_sym__repository_start_token4] = ACTIONS(819),
    [aux_sym__repository_start_token6] = ACTIONS(819),
    [aux_sym__repository_start_token8] = ACTIONS(819),
    [aux_sym__repository_start_token10] = ACTIONS(819),
    [aux_sym__repository_start_token12] = ACTIONS(819),
    [aux_sym__repository_start_token14] = ACTIONS(819),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [anon_sym_DOLLAR] = ACTIONS(823),
    [aux_sym_platform_token1] = ACTIONS(825),
    [aux_sym__repository_start_token1] = ACTIONS(823),
    [aux_sym__repository_start_token4] = ACTIONS(823),
    [aux_sym__repository_start_token6] = ACTIONS(823),
    [aux_sym__repository_start_token8] = ACTIONS(823),
    [aux_sym__repository_start_token10] = ACTIONS(823),
    [aux_sym__repository_start_token12] = ACTIONS(823),
    [aux_sym__repository_start_token14] = ACTIONS(823),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_DOLLAR] = ACTIONS(827),
    [aux_sym_platform_token1] = ACTIONS(829),
    [aux_sym__repository_start_token1] = ACTIONS(827),
    [aux_sym__repository_start_token4] = ACTIONS(827),
    [aux_sym__repository_start_token6] = ACTIONS(827),
    [aux_sym__repository_start_token8] = ACTIONS(827),
    [aux_sym__repository_start_token10] = ACTIONS(827),
    [aux_sym__repository_start_token12] = ACTIONS(827),
    [aux_sym__repository_start_token14] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [sym__port_spec] = STATE(486),
    [sym_mapped_port] = STATE(486),
    [sym__port] = STATE(408),
    [sym_port] = STATE(413),
    [sym_port_range] = STATE(413),
    [sym__port_part] = STATE(397),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym__port_part_token1] = ACTIONS(835),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym_platform_token1] = ACTIONS(839),
    [aux_sym__repository_start_token1] = ACTIONS(837),
    [aux_sym__repository_start_token4] = ACTIONS(837),
    [aux_sym__repository_start_token6] = ACTIONS(837),
    [aux_sym__repository_start_token8] = ACTIONS(837),
    [aux_sym__repository_start_token10] = ACTIONS(837),
    [aux_sym__repository_start_token12] = ACTIONS(837),
    [aux_sym__repository_start_token14] = ACTIONS(837),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [anon_sym_DOLLAR] = ACTIONS(841),
    [aux_sym_platform_token1] = ACTIONS(843),
    [aux_sym__repository_start_token1] = ACTIONS(841),
    [aux_sym__repository_start_token4] = ACTIONS(841),
    [aux_sym__repository_start_token6] = ACTIONS(841),
    [aux_sym__repository_start_token8] = ACTIONS(841),
    [aux_sym__repository_start_token10] = ACTIONS(841),
    [aux_sym__repository_start_token12] = ACTIONS(841),
    [aux_sym__repository_start_token14] = ACTIONS(841),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_platform_token1] = ACTIONS(193),
    [aux_sym__repository_start_token1] = ACTIONS(191),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token6] = ACTIONS(191),
    [aux_sym__repository_start_token8] = ACTIONS(191),
    [aux_sym__repository_start_token10] = ACTIONS(191),
    [aux_sym__repository_start_token12] = ACTIONS(191),
    [aux_sym__repository_start_token14] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym_platform_token1] = ACTIONS(847),
    [aux_sym__repository_start_token1] = ACTIONS(845),
    [aux_sym__repository_start_token4] = ACTIONS(845),
    [aux_sym__repository_start_token6] = ACTIONS(845),
    [aux_sym__repository_start_token8] = ACTIONS(845),
    [aux_sym__repository_start_token10] = ACTIONS(845),
    [aux_sym__repository_start_token12] = ACTIONS(845),
    [aux_sym__repository_start_token14] = ACTIONS(845),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [anon_sym_DOLLAR] = ACTIONS(849),
    [aux_sym_platform_token1] = ACTIONS(851),
    [aux_sym__repository_start_token1] = ACTIONS(849),
    [aux_sym__repository_start_token4] = ACTIONS(849),
    [aux_sym__repository_start_token6] = ACTIONS(849),
    [aux_sym__repository_start_token8] = ACTIONS(849),
    [aux_sym__repository_start_token10] = ACTIONS(849),
    [aux_sym__repository_start_token12] = ACTIONS(849),
    [aux_sym__repository_start_token14] = ACTIONS(849),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [anon_sym_DOLLAR] = ACTIONS(853),
    [aux_sym_platform_token1] = ACTIONS(855),
    [aux_sym__repository_start_token1] = ACTIONS(853),
    [aux_sym__repository_start_token4] = ACTIONS(853),
    [aux_sym__repository_start_token6] = ACTIONS(853),
    [aux_sym__repository_start_token8] = ACTIONS(853),
    [aux_sym__repository_start_token10] = ACTIONS(853),
    [aux_sym__repository_start_token12] = ACTIONS(853),
    [aux_sym__repository_start_token14] = ACTIONS(853),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(857),
  },
  [274] = {
    [sym__port] = STATE(217),
    [sym_port] = STATE(217),
    [sym_port_range] = STATE(217),
    [sym__port_part] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym__port] = STATE(119),
    [sym_port] = STATE(119),
    [sym_port_range] = STATE(119),
    [sym__port_part] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(53),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(861),
  },
  [277] = {
    [sym__port] = STATE(488),
    [sym_port] = STATE(488),
    [sym_port_range] = STATE(488),
    [sym__port_part] = STATE(397),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym__port_part_token1] = ACTIONS(835),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym_chown] = STATE(362),
    [sym_user_name] = STATE(325),
    [sym_user_id] = STATE(326),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [aux_sym_user_name_token1] = ACTIONS(865),
    [aux_sym_user_id_token1] = ACTIONS(867),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym_path] = STATE(84),
    [aux_sym__paths] = STATE(55),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(293),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [sym_variable_default_value] = STATE(489),
    [sym_variable_this_or_null] = STATE(489),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [sym_variable_default_value] = STATE(515),
    [sym_variable_this_or_null] = STATE(515),
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [aux_sym_path_repeat2] = STATE(282),
    [anon_sym_DQUOTE] = ACTIONS(877),
    [anon_sym_DOLLAR] = ACTIONS(879),
    [aux_sym_path_token3] = ACTIONS(882),
    [aux_sym_path_token4] = ACTIONS(884),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym_port_protocol] = STATE(383),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [anon_sym_DQUOTE] = ACTIONS(556),
    [anon_sym_COLON] = ACTIONS(556),
    [anon_sym_DOLLAR] = ACTIONS(556),
    [aux_sym_path_token1] = ACTIONS(889),
    [aux_sym_path_token2] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [anon_sym_DQUOTE] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(584),
    [anon_sym_DOLLAR] = ACTIONS(584),
    [aux_sym_path_token1] = ACTIONS(891),
    [aux_sym_path_token2] = ACTIONS(891),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [aux_sym__repository_start_repeat1] = STATE(286),
    [anon_sym_DOLLAR] = ACTIONS(893),
    [anon_sym_SLASH] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(893),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [287] = {
    [aux_sym__repository_start_repeat2] = STATE(287),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token4] = ACTIONS(896),
    [aux_sym__repository_start_token7] = ACTIONS(896),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [288] = {
    [aux_sym__repository_start_repeat3] = STATE(288),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token8] = ACTIONS(899),
    [aux_sym__repository_start_token11] = ACTIONS(899),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [289] = {
    [aux_sym__repository_start_repeat4] = STATE(289),
    [anon_sym_SLASH] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token12] = ACTIONS(902),
    [aux_sym__repository_start_token15] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [290] = {
    [aux_sym__repository_start_repeat4] = STATE(305),
    [anon_sym_SLASH] = ACTIONS(905),
    [aux_sym__repository_start_token3] = ACTIONS(907),
    [aux_sym__repository_start_token12] = ACTIONS(909),
    [aux_sym__repository_start_token15] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [aux_sym__repository_start_repeat3] = STATE(304),
    [anon_sym_SLASH] = ACTIONS(905),
    [aux_sym__repository_start_token3] = ACTIONS(907),
    [aux_sym__repository_start_token8] = ACTIONS(911),
    [aux_sym__repository_start_token11] = ACTIONS(911),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [aux_sym__repository_start_repeat2] = STATE(303),
    [anon_sym_SLASH] = ACTIONS(905),
    [aux_sym__repository_start_token3] = ACTIONS(907),
    [aux_sym__repository_start_token4] = ACTIONS(913),
    [aux_sym__repository_start_token7] = ACTIONS(913),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym__repository_start_repeat1] = STATE(286),
    [anon_sym_DOLLAR] = ACTIONS(915),
    [anon_sym_SLASH] = ACTIONS(905),
    [aux_sym__repository_start_token2] = ACTIONS(915),
    [aux_sym__repository_start_token3] = ACTIONS(907),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [sym_template_expr_less_than_equals] = STATE(499),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [sym_port_protocol] = STATE(404),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [sym_template_expr_less_than_equals] = STATE(436),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [sym_template_expr_less_than_equals] = STATE(493),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [sym_user_name] = STATE(171),
    [sym_user_id] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(919),
    [aux_sym_user_name_token1] = ACTIONS(921),
    [aux_sym_user_id_token1] = ACTIONS(923),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [aux_sym_path_repeat2] = STATE(282),
    [anon_sym_DQUOTE] = ACTIONS(925),
    [anon_sym_DOLLAR] = ACTIONS(927),
    [aux_sym_path_token3] = ACTIONS(929),
    [aux_sym_path_token4] = ACTIONS(931),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [sym_path] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [anon_sym_DOLLAR] = ACTIONS(935),
    [aux_sym_path_token1] = ACTIONS(937),
    [aux_sym_path_token2] = ACTIONS(939),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(941),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(941),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(941),
    [anon_sym_DASH_DASHretries] = ACTIONS(941),
    [aux_sym__hc_command_token1] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(943),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(943),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(943),
    [anon_sym_DASH_DASHretries] = ACTIONS(943),
    [aux_sym__hc_command_token1] = ACTIONS(943),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [aux_sym__repository_start_repeat2] = STATE(287),
    [anon_sym_SLASH] = ACTIONS(945),
    [aux_sym__repository_start_token3] = ACTIONS(947),
    [aux_sym__repository_start_token4] = ACTIONS(913),
    [aux_sym__repository_start_token7] = ACTIONS(913),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [aux_sym__repository_start_repeat3] = STATE(288),
    [anon_sym_SLASH] = ACTIONS(945),
    [aux_sym__repository_start_token3] = ACTIONS(947),
    [aux_sym__repository_start_token8] = ACTIONS(911),
    [aux_sym__repository_start_token11] = ACTIONS(911),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [aux_sym__repository_start_repeat4] = STATE(289),
    [anon_sym_SLASH] = ACTIONS(945),
    [aux_sym__repository_start_token3] = ACTIONS(947),
    [aux_sym__repository_start_token12] = ACTIONS(909),
    [aux_sym__repository_start_token15] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(949),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(949),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(949),
    [anon_sym_DASH_DASHretries] = ACTIONS(949),
    [aux_sym__hc_command_token1] = ACTIONS(949),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(951),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(951),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(951),
    [anon_sym_DASH_DASHretries] = ACTIONS(951),
    [aux_sym__hc_command_token1] = ACTIONS(951),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(953),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(953),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(953),
    [anon_sym_DASH_DASHretries] = ACTIONS(953),
    [aux_sym__hc_command_token1] = ACTIONS(953),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(955),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(955),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(955),
    [anon_sym_DASH_DASHretries] = ACTIONS(955),
    [aux_sym__hc_command_token1] = ACTIONS(955),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(957),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(957),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(957),
    [anon_sym_DASH_DASHretries] = ACTIONS(957),
    [aux_sym__hc_command_token1] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(959),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(959),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(959),
    [anon_sym_DASH_DASHretries] = ACTIONS(959),
    [aux_sym__hc_command_token1] = ACTIONS(959),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [sym_template_expr_less_than_equals] = STATE(444),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [sym_port] = STATE(484),
    [sym_port_range] = STATE(484),
    [sym__port_part] = STATE(397),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym__port_part_token1] = ACTIONS(835),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [sym_template_expr_less_than_equals] = STATE(447),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [sym_template_expr_less_than_equals] = STATE(529),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [sym_variable_default_value] = STATE(519),
    [sym_variable_this_or_null] = STATE(519),
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [sym_variable_default_value] = STATE(517),
    [sym_variable_this_or_null] = STATE(517),
    [anon_sym_RBRACE] = ACTIONS(963),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [sym_variable_default_value] = STATE(513),
    [sym_variable_this_or_null] = STATE(513),
    [anon_sym_RBRACE] = ACTIONS(965),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [sym_variable_default_value] = STATE(511),
    [sym_variable_this_or_null] = STATE(511),
    [anon_sym_RBRACE] = ACTIONS(967),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [sym_template_expr_less_than_equals] = STATE(427),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [sym_variable_default_value] = STATE(509),
    [sym_variable_this_or_null] = STATE(509),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [aux_sym__repository_start_repeat1] = STATE(293),
    [anon_sym_DOLLAR] = ACTIONS(915),
    [anon_sym_SLASH] = ACTIONS(971),
    [aux_sym__repository_start_token2] = ACTIONS(915),
    [aux_sym__repository_start_token3] = ACTIONS(973),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [sym_variable_default_value] = STATE(507),
    [sym_variable_this_or_null] = STATE(507),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_variable_default_value] = STATE(502),
    [sym_variable_this_or_null] = STATE(502),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [anon_sym_DQUOTE] = ACTIONS(979),
    [anon_sym_COLON] = ACTIONS(981),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_path_token1] = ACTIONS(983),
    [aux_sym_path_token2] = ACTIONS(983),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [anon_sym_DQUOTE] = ACTIONS(979),
    [anon_sym_COLON] = ACTIONS(985),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_path_token1] = ACTIONS(983),
    [aux_sym_path_token2] = ACTIONS(983),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [sym_variable_default_value] = STATE(496),
    [sym_variable_this_or_null] = STATE(496),
    [anon_sym_RBRACE] = ACTIONS(987),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(328),
    [aux_sym__repository_start_token13] = ACTIONS(989),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(991),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(991),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(991),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [aux_sym_path_repeat2] = STATE(282),
    [anon_sym_DQUOTE] = ACTIONS(994),
    [anon_sym_DOLLAR] = ACTIONS(927),
    [aux_sym_path_token3] = ACTIONS(996),
    [aux_sym_path_token4] = ACTIONS(931),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_port] = STATE(471),
    [sym_port_range] = STATE(471),
    [sym__port_part] = STATE(397),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym__port_part_token1] = ACTIONS(835),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_path_repeat2] = STATE(329),
    [anon_sym_DQUOTE] = ACTIONS(998),
    [anon_sym_DOLLAR] = ACTIONS(927),
    [aux_sym_path_token3] = ACTIONS(1000),
    [aux_sym_path_token4] = ACTIONS(931),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(328),
    [aux_sym__repository_start_token13] = ACTIONS(1002),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1004),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1004),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1004),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [sym_template_expr_less_than_equals] = STATE(468),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [sym_variable_default_value] = STATE(455),
    [sym_variable_this_or_null] = STATE(455),
    [anon_sym_RBRACE] = ACTIONS(1006),
    [anon_sym_COLON_DASH] = ACTIONS(871),
    [anon_sym_COLON_PLUS] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [aux_sym_path_repeat2] = STATE(299),
    [anon_sym_DQUOTE] = ACTIONS(1008),
    [anon_sym_DOLLAR] = ACTIONS(927),
    [aux_sym_path_token3] = ACTIONS(1010),
    [aux_sym_path_token4] = ACTIONS(931),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [sym_template_expr_less_than_equals] = STATE(464),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [sym_hc_command] = STATE(215),
    [aux_sym__anything] = STATE(138),
    [sym__anything_or_json_array] = STATE(216),
    [aux_sym__anything_token1] = ACTIONS(507),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1012),
  },
  [338] = {
    [sym_template_expr_less_than_equals] = STATE(505),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(332),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(917),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_path_token1] = ACTIONS(209),
    [aux_sym_path_token2] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [sym_label_value] = STATE(176),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [aux_sym_label_value_token1] = ACTIONS(1016),
    [aux_sym_label_value_token2] = ACTIONS(1016),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [341] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [aux_sym__anything] = STATE(138),
    [sym__anything_or_json_array] = STATE(189),
    [aux_sym__anything_token1] = ACTIONS(507),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1018),
  },
  [343] = {
    [anon_sym_DQUOTE] = ACTIONS(877),
    [anon_sym_DOLLAR] = ACTIONS(877),
    [aux_sym_path_token3] = ACTIONS(882),
    [aux_sym_path_token4] = ACTIONS(882),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [aux_sym__anything] = STATE(138),
    [sym__anything_or_json_array] = STATE(194),
    [aux_sym__anything_token1] = ACTIONS(507),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1020),
  },
  [345] = {
    [anon_sym_DOLLAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(134),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [anon_sym_DQUOTE] = ACTIONS(1022),
    [anon_sym_DOLLAR] = ACTIONS(1022),
    [aux_sym_path_token1] = ACTIONS(1024),
    [aux_sym_path_token2] = ACTIONS(1024),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [348] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym__anything] = STATE(138),
    [sym__anything_or_json_array] = STATE(209),
    [aux_sym__anything_token1] = ACTIONS(507),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1026),
  },
  [351] = {
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token15] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [352] = {
    [anon_sym_DQUOTE] = ACTIONS(1028),
    [anon_sym_DOLLAR] = ACTIONS(1028),
    [aux_sym_path_token1] = ACTIONS(1030),
    [aux_sym_path_token2] = ACTIONS(1030),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_DQUOTE] = ACTIONS(660),
    [anon_sym_DOLLAR] = ACTIONS(660),
    [aux_sym_path_token1] = ACTIONS(1032),
    [aux_sym_path_token2] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(650),
    [anon_sym_DOLLAR] = ACTIONS(650),
    [aux_sym_path_token1] = ACTIONS(1034),
    [aux_sym_path_token2] = ACTIONS(1034),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token1] = ACTIONS(197),
    [aux_sym_path_token2] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_DQUOTE] = ACTIONS(1036),
    [anon_sym_DOLLAR] = ACTIONS(1036),
    [aux_sym_path_token1] = ACTIONS(1038),
    [aux_sym_path_token2] = ACTIONS(1038),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token3] = ACTIONS(193),
    [aux_sym_path_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_path_token3] = ACTIONS(209),
    [aux_sym_path_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [sym_docker_variable] = STATE(395),
    [anon_sym_LBRACE] = ACTIONS(1040),
    [sym__docker_variable] = ACTIONS(1042),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [sym_docker_variable] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [sym__docker_variable] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [sym_docker_variable] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [sym__docker_variable] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [368] = {
    [sym_docker_variable] = STATE(346),
    [anon_sym_LBRACE] = ACTIONS(1052),
    [sym__docker_variable] = ACTIONS(1054),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [369] = {
    [sym_docker_variable] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [370] = {
    [sym_docker_variable] = STATE(121),
    [anon_sym_LBRACE] = ACTIONS(1060),
    [sym__docker_variable] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [sym_docker_variable] = STATE(335),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym__docker_variable] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [sym_docker_variable] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [sym__docker_variable] = ACTIONS(1070),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [aux_sym_label_value_repeat1] = STATE(373),
    [anon_sym_DQUOTE] = ACTIONS(1072),
    [aux_sym_label_value_token3] = ACTIONS(1074),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [sym_docker_variable] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [sym_docker_variable] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [sym__docker_variable] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [376] = {
    [sym_docker_variable] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(1060),
    [sym__docker_variable] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [sym_docker_variable] = STATE(72),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [sym__docker_variable] = ACTIONS(1070),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [378] = {
    [sym__port_part] = STATE(414),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym__port_part_token1] = ACTIONS(835),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [anon_sym_DOLLAR] = ACTIONS(1077),
    [aux_sym_path_token3] = ACTIONS(1079),
    [aux_sym_path_token4] = ACTIONS(1081),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [sym_docker_variable] = STATE(331),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym__docker_variable] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [382] = {
    [sym_docker_variable] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [sym__docker_variable] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [383] = {
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [sym_platform] = STATE(223),
    [anon_sym_DOLLAR] = ACTIONS(1083),
    [aux_sym_platform_token1] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [385] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [sym__docker_variable] = ACTIONS(1070),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [386] = {
    [sym_docker_variable] = STATE(56),
    [anon_sym_LBRACE] = ACTIONS(1087),
    [sym__docker_variable] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [sym_docker_variable] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(1091),
    [sym__docker_variable] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [388] = {
    [anon_sym_DOLLAR] = ACTIONS(1095),
    [aux_sym_path_token3] = ACTIONS(1097),
    [aux_sym_path_token4] = ACTIONS(1099),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [sym_docker_variable] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [sym__docker_variable] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [390] = {
    [sym_docker_variable] = STATE(343),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym__docker_variable] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [391] = {
    [anon_sym_DOLLAR] = ACTIONS(1101),
    [aux_sym_port_protocol_token1] = ACTIONS(1103),
    [aux_sym_port_protocol_token2] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_signal_name] = STATE(178),
    [sym_signal_num] = ACTIONS(1105),
    [aux_sym_signal_name_token1] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym__port_part] = STATE(105),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [sym_docker_variable] = STATE(268),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [anon_sym_DOLLAR] = ACTIONS(1113),
    [aux_sym_port_protocol_token1] = ACTIONS(1115),
    [aux_sym_port_protocol_token2] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(1117),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [sym_docker_variable] = STATE(283),
    [anon_sym_LBRACE] = ACTIONS(1040),
    [sym__docker_variable] = ACTIONS(1042),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [399] = {
    [aux_sym_label_value_repeat1] = STATE(373),
    [anon_sym_DQUOTE] = ACTIONS(1119),
    [aux_sym_label_value_token3] = ACTIONS(1121),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [aux_sym__labels] = STATE(112),
    [sym_label_pair] = STATE(112),
    [sym_label_key] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym__env_pairs] = STATE(195),
    [sym_env_pair] = STATE(149),
    [sym_env_key] = ACTIONS(1125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym_docker_variable] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(1087),
    [sym__docker_variable] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [403] = {
    [sym_docker_variable] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(1091),
    [sym__docker_variable] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [404] = {
    [anon_sym_DQUOTE] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym_docker_variable] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [sym__docker_variable] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [406] = {
    [sym_hc_timeout] = STATE(308),
    [aux_sym_hc_interval_token1] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [sym_user_group] = STATE(352),
    [aux_sym_user_name_token1] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [aux_sym__anything] = STATE(144),
    [aux_sym__anything_token1] = ACTIONS(1133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [aux_sym__anything] = STATE(115),
    [aux_sym__anything_token1] = ACTIONS(1135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [sym_env_pair] = STATE(155),
    [sym_env_key] = ACTIONS(1125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_DQUOTE] = ACTIONS(1137),
    [anon_sym_COLON] = ACTIONS(1140),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_hc_interval] = STATE(310),
    [aux_sym_hc_interval_token1] = ACTIONS(1142),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [sym_hc_start_period] = STATE(306),
    [aux_sym_hc_interval_token1] = ACTIONS(1144),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym_label_value_repeat1] = STATE(399),
    [aux_sym_label_value_token3] = ACTIONS(1146),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [418] = {
    [sym_user_group_id] = STATE(218),
    [aux_sym_user_id_token1] = ACTIONS(1148),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_user_group] = STATE(218),
    [aux_sym_user_name_token1] = ACTIONS(1150),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_hc_retries] = STATE(301),
    [aux_sym__port_part_token1] = ACTIONS(1152),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_user_group_id] = STATE(352),
    [aux_sym_user_id_token1] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [aux_sym__repository_start_token5] = ACTIONS(1156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_template_expr_percent_signs] = ACTIONS(1158),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [424] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1160),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1162),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [aux_sym_from_token2] = ACTIONS(1164),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [aux_sym__repository_start_token13] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [aux_sym__repository_start_token9] = ACTIONS(1168),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [aux_sym__repository_start_token5] = ACTIONS(1170),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_SLASH] = ACTIONS(1172),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [aux_sym_from_token2] = ACTIONS(1174),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym_template_expr_percent_signs] = ACTIONS(1178),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [434] = {
    [sym_template_expr_curly_braces] = ACTIONS(1180),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [435] = {
    [anon_sym_SLASH] = ACTIONS(945),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [aux_sym__repository_start_token13] = ACTIONS(1182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [aux_sym__repository_start_token9] = ACTIONS(1184),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [aux_sym__repository_start_token5] = ACTIONS(1186),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [aux_sym_from_token2] = ACTIONS(1190),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_RBRACE] = ACTIONS(1192),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_RBRACE] = ACTIONS(1194),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_DQUOTE] = ACTIONS(1196),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [aux_sym__repository_start_token13] = ACTIONS(1198),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [aux_sym__repository_start_token9] = ACTIONS(1200),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1202),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym__repository_start_token13] = ACTIONS(1204),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [aux_sym__repository_start_token9] = ACTIONS(1206),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [aux_sym__repository_start_token5] = ACTIONS(1208),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym_from_token2] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1212),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [sym_template_expr_percent_signs] = ACTIONS(1214),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [453] = {
    [sym_template_expr_curly_braces] = ACTIONS(1216),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [454] = {
    [aux_sym_from_token2] = ACTIONS(1218),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [anon_sym_RBRACE] = ACTIONS(1220),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1222),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [457] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1224),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [458] = {
    [anon_sym_DQUOTE] = ACTIONS(925),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym_template_expr_percent_signs] = ACTIONS(1228),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [461] = {
    [sym_template_expr_curly_braces] = ACTIONS(1230),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [462] = {
    [sym_template_expr_percent_signs] = ACTIONS(1232),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [463] = {
    [sym_template_expr_curly_braces] = ACTIONS(1234),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [464] = {
    [aux_sym__repository_start_token13] = ACTIONS(1236),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [aux_sym__repository_start_token9] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [aux_sym__repository_start_token5] = ACTIONS(1240),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [aux_sym_from_token2] = ACTIONS(1242),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [aux_sym__repository_start_token13] = ACTIONS(1244),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [aux_sym__repository_start_token9] = ACTIONS(1246),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [aux_sym__repository_start_token5] = ACTIONS(1248),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_DQUOTE] = ACTIONS(1250),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_SLASH] = ACTIONS(905),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [aux_sym_from_token2] = ACTIONS(1252),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [sym_arg_name] = ACTIONS(1254),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [sym_template_expr_percent_signs] = ACTIONS(1256),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [476] = {
    [sym_template_expr_curly_braces] = ACTIONS(1258),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [477] = {
    [anon_sym_SLASH] = ACTIONS(1260),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [sym_template_expr_percent_signs] = ACTIONS(1262),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [479] = {
    [sym_template_expr_curly_braces] = ACTIONS(1264),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [480] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [aux_sym_from_token2] = ACTIONS(1268),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [sym_arg_default] = ACTIONS(1270),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [483] = {
    [aux_sym__repository_start_token5] = ACTIONS(1272),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_DQUOTE] = ACTIONS(1274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_DQUOTE] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [anon_sym_DQUOTE] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_DQUOTE] = ACTIONS(994),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(1280),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_DQUOTE] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [aux_sym__repository_start_token5] = ACTIONS(1284),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [aux_sym__repository_start_token9] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [aux_sym__repository_start_token13] = ACTIONS(1288),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [aux_sym_from_token2] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym_env_value] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [aux_sym__repository_start_token5] = ACTIONS(1296),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym__repository_start_token9] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [aux_sym__repository_start_token13] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym__repository_start_token9] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [sym__docker_variable] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(1306),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [aux_sym__repository_start_token5] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [aux_sym__repository_start_token9] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym__repository_start_token13] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [anon_sym_DQUOTE] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_RBRACE] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [aux_sym_signal_name_token2] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_RBRACE] = ACTIONS(1320),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym_label_pair_token1] = ACTIONS(1322),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [anon_sym_RBRACE] = ACTIONS(1324),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1326),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_EQ] = ACTIONS(1330),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_RBRACE] = ACTIONS(1332),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_EQ] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [anon_sym_RBRACE] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_EQ] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_RBRACE] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_EQ] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [sym_template_expr_percent_signs] = ACTIONS(1344),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [522] = {
    [sym__docker_variable] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [523] = {
    [sym_template_expr_curly_braces] = ACTIONS(1348),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [524] = {
    [sym_template_expr_curly_braces] = ACTIONS(1350),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [525] = {
    [sym_template_expr_percent_signs] = ACTIONS(1352),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [526] = {
    [ts_builtin_sym_end] = ACTIONS(1354),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [sym__docker_variable] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [528] = {
    [sym_template_expr_curly_braces] = ACTIONS(1358),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [529] = {
    [aux_sym__repository_start_token13] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1362),
  },
  [531] = {
    [sym__docker_variable] = ACTIONS(1364),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [532] = {
    [sym_template_expr_curly_braces] = ACTIONS(1366),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [533] = {
    [sym_template_expr_percent_signs] = ACTIONS(1368),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [534] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1370),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [sym__docker_variable] = ACTIONS(1372),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [536] = {
    [sym__docker_variable] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [537] = {
    [sym__docker_variable] = ACTIONS(1376),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [538] = {
    [sym__docker_variable] = ACTIONS(1378),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [539] = {
    [sym__docker_variable] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [540] = {
    [sym__docker_variable] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [541] = {
    [sym__docker_variable] = ACTIONS(1384),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(273),
  [11] = {.count = 1, .reusable = true}, SHIFT(474),
  [13] = {.count = 1, .reusable = true}, SHIFT(342),
  [15] = {.count = 1, .reusable = true}, SHIFT(260),
  [17] = {.count = 1, .reusable = true}, SHIFT(344),
  [19] = {.count = 1, .reusable = true}, SHIFT(401),
  [21] = {.count = 1, .reusable = true}, SHIFT(224),
  [23] = {.count = 1, .reusable = true}, SHIFT(220),
  [25] = {.count = 1, .reusable = true}, SHIFT(221),
  [27] = {.count = 1, .reusable = true}, SHIFT(400),
  [29] = {.count = 1, .reusable = true}, SHIFT(409),
  [31] = {.count = 1, .reusable = true}, SHIFT(4),
  [33] = {.count = 1, .reusable = true}, SHIFT(350),
  [35] = {.count = 1, .reusable = true}, SHIFT(530),
  [37] = {.count = 1, .reusable = true}, SHIFT(392),
  [39] = {.count = 1, .reusable = true}, SHIFT(298),
  [41] = {.count = 1, .reusable = true}, SHIFT(276),
  [43] = {.count = 1, .reusable = true}, SHIFT(300),
  [45] = {.count = 1, .reusable = true}, SHIFT(184),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(273),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(474),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(342),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(260),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(344),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(401),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(224),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(220),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(221),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(400),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(409),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(4),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(350),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(530),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(392),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(298),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(276),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(300),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(184),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(266),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(385),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(27),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [121] = {.count = 1, .reusable = true}, SHIFT(266),
  [123] = {.count = 1, .reusable = true}, SHIFT(385),
  [125] = {.count = 1, .reusable = true}, SHIFT(27),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(296),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(367),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [145] = {.count = 1, .reusable = true}, SHIFT(265),
  [147] = {.count = 1, .reusable = false}, SHIFT(89),
  [149] = {.count = 1, .reusable = true}, SHIFT(453),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [155] = {.count = 1, .reusable = true}, SHIFT(270),
  [157] = {.count = 1, .reusable = false}, SHIFT(75),
  [159] = {.count = 1, .reusable = true}, SHIFT(296),
  [161] = {.count = 1, .reusable = true}, SHIFT(452),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(453),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(452),
  [177] = {.count = 1, .reusable = true}, SHIFT(367),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(263),
  [185] = {.count = 1, .reusable = false}, SHIFT(86),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [211] = {.count = 1, .reusable = false}, SHIFT(116),
  [213] = {.count = 1, .reusable = true}, SHIFT(297),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [217] = {.count = 1, .reusable = true}, SHIFT(391),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(524),
  [224] = {.count = 1, .reusable = false}, SHIFT(131),
  [226] = {.count = 1, .reusable = true}, SHIFT(524),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(386),
  [231] = {.count = 1, .reusable = true}, SHIFT(525),
  [233] = {.count = 1, .reusable = true}, SHIFT(386),
  [235] = {.count = 1, .reusable = false}, SHIFT(132),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(297),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(525),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(388),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(366),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(88),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(366),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [261] = {.count = 1, .reusable = false}, SHIFT(143),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(405),
  [267] = {.count = 1, .reusable = false}, SHIFT(80),
  [269] = {.count = 1, .reusable = false}, SHIFT(405),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [277] = {.count = 1, .reusable = false}, SHIFT(139),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [281] = {.count = 1, .reusable = false}, SHIFT(91),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [287] = {.count = 1, .reusable = true}, SHIFT(388),
  [289] = {.count = 1, .reusable = true}, SHIFT(366),
  [291] = {.count = 1, .reusable = false}, SHIFT(88),
  [293] = {.count = 1, .reusable = false}, SHIFT(366),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [303] = {.count = 1, .reusable = false}, SHIFT(147),
  [305] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(405),
  [310] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(405),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [321] = {.count = 1, .reusable = false}, SHIFT(162),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [327] = {.count = 1, .reusable = true}, SHIFT(272),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [333] = {.count = 1, .reusable = false}, SHIFT(159),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [343] = {.count = 1, .reusable = true}, SHIFT(393),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [351] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [353] = {.count = 1, .reusable = false}, SHIFT(93),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [363] = {.count = 1, .reusable = true}, SHIFT(256),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [369] = {.count = 1, .reusable = false}, SHIFT(160),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [379] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(370),
  [387] = {.count = 1, .reusable = false}, SHIFT(212),
  [389] = {.count = 1, .reusable = true}, SHIFT(387),
  [391] = {.count = 1, .reusable = false}, SHIFT(207),
  [393] = {.count = 1, .reusable = false}, SHIFT(387),
  [395] = {.count = 1, .reusable = false}, SHIFT(179),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [399] = {.count = 1, .reusable = true}, SHIFT(275),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [405] = {.count = 1, .reusable = false}, SHIFT(199),
  [407] = {.count = 1, .reusable = true}, SHIFT(338),
  [409] = {.count = 1, .reusable = true}, SHIFT(533),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(533),
  [414] = {.count = 1, .reusable = true}, SHIFT(532),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(338),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [425] = {.count = 1, .reusable = false}, SHIFT(205),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(387),
  [432] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(387),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(532),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(370),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [443] = {.count = 1, .reusable = false}, SHIFT(510),
  [445] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [449] = {.count = 1, .reusable = false}, SHIFT(145),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [455] = {.count = 1, .reusable = true}, SHIFT(238),
  [457] = {.count = 1, .reusable = true}, SHIFT(226),
  [459] = {.count = 1, .reusable = false}, SHIFT(454),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [465] = {.count = 1, .reusable = true}, SHIFT(239),
  [467] = {.count = 1, .reusable = true}, SHIFT(228),
  [469] = {.count = 1, .reusable = false}, SHIFT(467),
  [471] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [473] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(510),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [478] = {.count = 1, .reusable = true}, SHIFT(236),
  [480] = {.count = 1, .reusable = true}, SHIFT(225),
  [482] = {.count = 1, .reusable = false}, SHIFT(450),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [486] = {.count = 1, .reusable = true}, SHIFT(253),
  [488] = {.count = 1, .reusable = true}, SHIFT(227),
  [490] = {.count = 1, .reusable = false}, SHIFT(440),
  [492] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(145),
  [497] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [501] = {.count = 1, .reusable = true}, SHIFT(234),
  [503] = {.count = 1, .reusable = false}, SHIFT(426),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [507] = {.count = 1, .reusable = false}, SHIFT(164),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [511] = {.count = 1, .reusable = false}, SHIFT(412),
  [513] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(169),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [518] = {.count = 1, .reusable = false}, SHIFT(169),
  [520] = {.count = 1, .reusable = true}, SHIFT(200),
  [522] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [524] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [526] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(164),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [541] = {.count = 1, .reusable = true}, SHIFT(495),
  [543] = {.count = 1, .reusable = false}, SHIFT(411),
  [545] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [547] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(412),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [552] = {.count = 1, .reusable = true}, SHIFT(229),
  [554] = {.count = 1, .reusable = false}, SHIFT(431),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [558] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [562] = {.count = 1, .reusable = false}, SHIFT(494),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [578] = {.count = 1, .reusable = false}, SHIFT(473),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [582] = {.count = 1, .reusable = true}, SHIFT(482),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [588] = {.count = 1, .reusable = true}, SHIFT(419),
  [590] = {.count = 1, .reusable = true}, SHIFT(418),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [594] = {.count = 1, .reusable = false}, SHIFT(481),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [618] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [662] = {.count = 1, .reusable = true}, SHIFT(384),
  [664] = {.count = 1, .reusable = true}, SHIFT(382),
  [666] = {.count = 1, .reusable = false}, SHIFT(67),
  [668] = {.count = 1, .reusable = true}, SHIFT(523),
  [670] = {.count = 1, .reusable = true}, SHIFT(521),
  [672] = {.count = 1, .reusable = true}, SHIFT(315),
  [674] = {.count = 1, .reusable = true}, SHIFT(204),
  [676] = {.count = 1, .reusable = true}, SHIFT(520),
  [678] = {.count = 1, .reusable = true}, SHIFT(518),
  [680] = {.count = 1, .reusable = true}, SHIFT(516),
  [682] = {.count = 1, .reusable = true}, SHIFT(514),
  [684] = {.count = 1, .reusable = true}, SHIFT(512),
  [686] = {.count = 1, .reusable = true}, SHIFT(274),
  [688] = {.count = 1, .reusable = true}, SHIFT(245),
  [690] = {.count = 1, .reusable = true}, SHIFT(389),
  [692] = {.count = 1, .reusable = false}, SHIFT(158),
  [694] = {.count = 1, .reusable = true}, SHIFT(461),
  [696] = {.count = 1, .reusable = true}, SHIFT(460),
  [698] = {.count = 1, .reusable = true}, SHIFT(312),
  [700] = {.count = 1, .reusable = true}, SHIFT(240),
  [702] = {.count = 1, .reusable = true}, SHIFT(246),
  [704] = {.count = 1, .reusable = true}, SHIFT(252),
  [706] = {.count = 1, .reusable = true}, SHIFT(249),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(374),
  [711] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(477),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(476),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(475),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(336),
  [723] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(374),
  [726] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(477),
  [729] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(476),
  [732] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(475),
  [735] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(336),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(520),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(518),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(516),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(514),
  [750] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [752] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(374),
  [755] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(477),
  [758] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(476),
  [761] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(475),
  [764] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(336),
  [767] = {.count = 1, .reusable = true}, SHIFT(241),
  [769] = {.count = 1, .reusable = true}, SHIFT(376),
  [771] = {.count = 1, .reusable = false}, SHIFT(191),
  [773] = {.count = 1, .reusable = true}, SHIFT(434),
  [775] = {.count = 1, .reusable = true}, SHIFT(433),
  [777] = {.count = 1, .reusable = true}, SHIFT(320),
  [779] = {.count = 1, .reusable = true}, SHIFT(375),
  [781] = {.count = 1, .reusable = false}, SHIFT(148),
  [783] = {.count = 1, .reusable = true}, SHIFT(463),
  [785] = {.count = 1, .reusable = true}, SHIFT(462),
  [787] = {.count = 1, .reusable = true}, SHIFT(314),
  [789] = {.count = 1, .reusable = true}, SHIFT(402),
  [791] = {.count = 1, .reusable = false}, SHIFT(120),
  [793] = {.count = 1, .reusable = true}, SHIFT(479),
  [795] = {.count = 1, .reusable = true}, SHIFT(478),
  [797] = {.count = 1, .reusable = true}, SHIFT(333),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [807] = {.count = 1, .reusable = true}, SHIFT(278),
  [809] = {.count = 1, .reusable = true}, SHIFT(192),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [829] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [831] = {.count = 1, .reusable = true}, SHIFT(330),
  [833] = {.count = 1, .reusable = true}, SHIFT(398),
  [835] = {.count = 1, .reusable = true}, SHIFT(295),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [857] = {.count = 1, .reusable = true}, SHIFT(188),
  [859] = {.count = 1, .reusable = true}, SHIFT(313),
  [861] = {.count = 1, .reusable = true}, SHIFT(210),
  [863] = {.count = 1, .reusable = true}, SHIFT(368),
  [865] = {.count = 1, .reusable = true}, SHIFT(285),
  [867] = {.count = 1, .reusable = true}, SHIFT(284),
  [869] = {.count = 1, .reusable = true}, SHIFT(40),
  [871] = {.count = 1, .reusable = true}, SHIFT(457),
  [873] = {.count = 1, .reusable = true}, SHIFT(456),
  [875] = {.count = 1, .reusable = true}, SHIFT(41),
  [877] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [879] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(390),
  [882] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [884] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(390),
  [887] = {.count = 1, .reusable = true}, SHIFT(396),
  [889] = {.count = 1, .reusable = false}, REDUCE(sym_user_id, 1),
  [891] = {.count = 1, .reusable = false}, REDUCE(sym_user_name, 1),
  [893] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(369),
  [896] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(528),
  [899] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(423),
  [902] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(294),
  [905] = {.count = 1, .reusable = true}, SHIFT(262),
  [907] = {.count = 1, .reusable = false}, SHIFT(435),
  [909] = {.count = 1, .reusable = true}, SHIFT(294),
  [911] = {.count = 1, .reusable = true}, SHIFT(423),
  [913] = {.count = 1, .reusable = true}, SHIFT(528),
  [915] = {.count = 1, .reusable = true}, SHIFT(369),
  [917] = {.count = 1, .reusable = true}, SHIFT(332),
  [919] = {.count = 1, .reusable = true}, SHIFT(372),
  [921] = {.count = 1, .reusable = true}, SHIFT(166),
  [923] = {.count = 1, .reusable = true}, SHIFT(154),
  [925] = {.count = 1, .reusable = true}, SHIFT(92),
  [927] = {.count = 1, .reusable = true}, SHIFT(390),
  [929] = {.count = 1, .reusable = false}, SHIFT(443),
  [931] = {.count = 1, .reusable = false}, SHIFT(390),
  [933] = {.count = 1, .reusable = true}, SHIFT(379),
  [935] = {.count = 1, .reusable = true}, SHIFT(403),
  [937] = {.count = 1, .reusable = false}, SHIFT(180),
  [939] = {.count = 1, .reusable = false}, SHIFT(403),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [945] = {.count = 1, .reusable = true}, SHIFT(271),
  [947] = {.count = 1, .reusable = false}, SHIFT(430),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [951] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [961] = {.count = 1, .reusable = true}, SHIFT(126),
  [963] = {.count = 1, .reusable = true}, SHIFT(347),
  [965] = {.count = 1, .reusable = true}, SHIFT(257),
  [967] = {.count = 1, .reusable = true}, SHIFT(359),
  [969] = {.count = 1, .reusable = true}, SHIFT(339),
  [971] = {.count = 1, .reusable = true}, SHIFT(258),
  [973] = {.count = 1, .reusable = false}, SHIFT(472),
  [975] = {.count = 1, .reusable = true}, SHIFT(364),
  [977] = {.count = 1, .reusable = true}, SHIFT(136),
  [979] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [981] = {.count = 1, .reusable = true}, SHIFT(407),
  [983] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 1),
  [985] = {.count = 1, .reusable = true}, SHIFT(421),
  [987] = {.count = 1, .reusable = true}, SHIFT(25),
  [989] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [991] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(328),
  [994] = {.count = 1, .reusable = true}, SHIFT(190),
  [996] = {.count = 1, .reusable = false}, SHIFT(490),
  [998] = {.count = 1, .reusable = true}, SHIFT(207),
  [1000] = {.count = 1, .reusable = false}, SHIFT(487),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [1004] = {.count = 1, .reusable = true}, SHIFT(328),
  [1006] = {.count = 1, .reusable = true}, SHIFT(73),
  [1008] = {.count = 1, .reusable = true}, SHIFT(91),
  [1010] = {.count = 1, .reusable = false}, SHIFT(458),
  [1012] = {.count = 1, .reusable = true}, SHIFT(216),
  [1014] = {.count = 1, .reusable = false}, SHIFT(417),
  [1016] = {.count = 1, .reusable = true}, SHIFT(175),
  [1018] = {.count = 1, .reusable = true}, SHIFT(189),
  [1020] = {.count = 1, .reusable = true}, SHIFT(194),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1024] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 2),
  [1026] = {.count = 1, .reusable = true}, SHIFT(209),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1030] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 3),
  [1032] = {.count = 1, .reusable = false}, REDUCE(sym_user_group, 1),
  [1034] = {.count = 1, .reusable = false}, REDUCE(sym_user_group_id, 1),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 2),
  [1038] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 2),
  [1040] = {.count = 1, .reusable = true}, SHIFT(537),
  [1042] = {.count = 1, .reusable = true}, SHIFT(360),
  [1044] = {.count = 1, .reusable = true}, SHIFT(501),
  [1046] = {.count = 1, .reusable = true}, SHIFT(85),
  [1048] = {.count = 1, .reusable = true}, SHIFT(527),
  [1050] = {.count = 1, .reusable = true}, SHIFT(21),
  [1052] = {.count = 1, .reusable = true}, SHIFT(536),
  [1054] = {.count = 1, .reusable = true}, SHIFT(358),
  [1056] = {.count = 1, .reusable = true}, SHIFT(540),
  [1058] = {.count = 1, .reusable = true}, SHIFT(355),
  [1060] = {.count = 1, .reusable = true}, SHIFT(541),
  [1062] = {.count = 1, .reusable = true}, SHIFT(127),
  [1064] = {.count = 1, .reusable = true}, SHIFT(535),
  [1066] = {.count = 1, .reusable = true}, SHIFT(354),
  [1068] = {.count = 1, .reusable = true}, SHIFT(522),
  [1070] = {.count = 1, .reusable = true}, SHIFT(52),
  [1072] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [1074] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(373),
  [1077] = {.count = 1, .reusable = true}, SHIFT(381),
  [1079] = {.count = 1, .reusable = false}, SHIFT(485),
  [1081] = {.count = 1, .reusable = false}, SHIFT(381),
  [1083] = {.count = 1, .reusable = true}, SHIFT(394),
  [1085] = {.count = 1, .reusable = true}, SHIFT(267),
  [1087] = {.count = 1, .reusable = true}, SHIFT(539),
  [1089] = {.count = 1, .reusable = true}, SHIFT(46),
  [1091] = {.count = 1, .reusable = true}, SHIFT(531),
  [1093] = {.count = 1, .reusable = true}, SHIFT(123),
  [1095] = {.count = 1, .reusable = true}, SHIFT(371),
  [1097] = {.count = 1, .reusable = false}, SHIFT(506),
  [1099] = {.count = 1, .reusable = false}, SHIFT(371),
  [1101] = {.count = 1, .reusable = true}, SHIFT(377),
  [1103] = {.count = 1, .reusable = true}, SHIFT(82),
  [1105] = {.count = 1, .reusable = true}, SHIFT(178),
  [1107] = {.count = 1, .reusable = true}, SHIFT(508),
  [1109] = {.count = 1, .reusable = true}, SHIFT(538),
  [1111] = {.count = 1, .reusable = true}, SHIFT(259),
  [1113] = {.count = 1, .reusable = true}, SHIFT(365),
  [1115] = {.count = 1, .reusable = true}, SHIFT(380),
  [1117] = {.count = 1, .reusable = true}, SHIFT(378),
  [1119] = {.count = 1, .reusable = true}, SHIFT(174),
  [1121] = {.count = 1, .reusable = true}, SHIFT(373),
  [1123] = {.count = 1, .reusable = true}, SHIFT(510),
  [1125] = {.count = 1, .reusable = true}, SHIFT(150),
  [1127] = {.count = 1, .reusable = true}, SHIFT(309),
  [1129] = {.count = 1, .reusable = true}, SHIFT(353),
  [1131] = {.count = 1, .reusable = true}, SHIFT(277),
  [1133] = {.count = 1, .reusable = true}, SHIFT(169),
  [1135] = {.count = 1, .reusable = true}, SHIFT(145),
  [1137] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(103),
  [1140] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1142] = {.count = 1, .reusable = true}, SHIFT(311),
  [1144] = {.count = 1, .reusable = true}, SHIFT(307),
  [1146] = {.count = 1, .reusable = true}, SHIFT(399),
  [1148] = {.count = 1, .reusable = true}, SHIFT(214),
  [1150] = {.count = 1, .reusable = true}, SHIFT(219),
  [1152] = {.count = 1, .reusable = true}, SHIFT(302),
  [1154] = {.count = 1, .reusable = true}, SHIFT(357),
  [1156] = {.count = 1, .reusable = true}, SHIFT(77),
  [1158] = {.count = 1, .reusable = true}, SHIFT(498),
  [1160] = {.count = 1, .reusable = true}, SHIFT(243),
  [1162] = {.count = 1, .reusable = true}, SHIFT(237),
  [1164] = {.count = 1, .reusable = true}, SHIFT(424),
  [1166] = {.count = 1, .reusable = true}, SHIFT(109),
  [1168] = {.count = 1, .reusable = true}, SHIFT(107),
  [1170] = {.count = 1, .reusable = true}, SHIFT(106),
  [1172] = {.count = 1, .reusable = true}, SHIFT(264),
  [1174] = {.count = 1, .reusable = true}, SHIFT(425),
  [1176] = {.count = 1, .reusable = true}, SHIFT(254),
  [1178] = {.count = 1, .reusable = true}, SHIFT(428),
  [1180] = {.count = 1, .reusable = true}, SHIFT(429),
  [1182] = {.count = 1, .reusable = true}, SHIFT(19),
  [1184] = {.count = 1, .reusable = true}, SHIFT(22),
  [1186] = {.count = 1, .reusable = true}, SHIFT(24),
  [1188] = {.count = 1, .reusable = true}, SHIFT(235),
  [1190] = {.count = 1, .reusable = true}, SHIFT(432),
  [1192] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1194] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1196] = {.count = 1, .reusable = true}, SHIFT(78),
  [1198] = {.count = 1, .reusable = true}, SHIFT(87),
  [1200] = {.count = 1, .reusable = true}, SHIFT(66),
  [1202] = {.count = 1, .reusable = true}, SHIFT(247),
  [1204] = {.count = 1, .reusable = true}, SHIFT(62),
  [1206] = {.count = 1, .reusable = true}, SHIFT(64),
  [1208] = {.count = 1, .reusable = true}, SHIFT(65),
  [1210] = {.count = 1, .reusable = true}, SHIFT(459),
  [1212] = {.count = 1, .reusable = true}, SHIFT(244),
  [1214] = {.count = 1, .reusable = true}, SHIFT(437),
  [1216] = {.count = 1, .reusable = true}, SHIFT(438),
  [1218] = {.count = 1, .reusable = true}, SHIFT(439),
  [1220] = {.count = 1, .reusable = true}, SHIFT(70),
  [1222] = {.count = 1, .reusable = true}, SHIFT(441),
  [1224] = {.count = 1, .reusable = true}, SHIFT(442),
  [1226] = {.count = 1, .reusable = true}, SHIFT(251),
  [1228] = {.count = 1, .reusable = true}, SHIFT(445),
  [1230] = {.count = 1, .reusable = true}, SHIFT(422),
  [1232] = {.count = 1, .reusable = true}, SHIFT(448),
  [1234] = {.count = 1, .reusable = true}, SHIFT(449),
  [1236] = {.count = 1, .reusable = true}, SHIFT(290),
  [1238] = {.count = 1, .reusable = true}, SHIFT(291),
  [1240] = {.count = 1, .reusable = true}, SHIFT(292),
  [1242] = {.count = 1, .reusable = true}, SHIFT(451),
  [1244] = {.count = 1, .reusable = true}, SHIFT(26),
  [1246] = {.count = 1, .reusable = true}, SHIFT(33),
  [1248] = {.count = 1, .reusable = true}, SHIFT(34),
  [1250] = {.count = 1, .reusable = true}, SHIFT(410),
  [1252] = {.count = 1, .reusable = true}, SHIFT(534),
  [1254] = {.count = 1, .reusable = true}, SHIFT(165),
  [1256] = {.count = 1, .reusable = true}, SHIFT(465),
  [1258] = {.count = 1, .reusable = true}, SHIFT(466),
  [1260] = {.count = 1, .reusable = true}, SHIFT(261),
  [1262] = {.count = 1, .reusable = true}, SHIFT(469),
  [1264] = {.count = 1, .reusable = true}, SHIFT(470),
  [1266] = {.count = 1, .reusable = true}, SHIFT(255),
  [1268] = {.count = 1, .reusable = true}, SHIFT(480),
  [1270] = {.count = 1, .reusable = true}, SHIFT(193),
  [1272] = {.count = 1, .reusable = true}, SHIFT(12),
  [1274] = {.count = 1, .reusable = true}, SHIFT(103),
  [1276] = {.count = 1, .reusable = true}, SHIFT(179),
  [1278] = {.count = 1, .reusable = true}, SHIFT(114),
  [1280] = {.count = 1, .reusable = true}, SHIFT(58),
  [1282] = {.count = 1, .reusable = true}, SHIFT(186),
  [1284] = {.count = 1, .reusable = true}, SHIFT(49),
  [1286] = {.count = 1, .reusable = true}, SHIFT(43),
  [1288] = {.count = 1, .reusable = true}, SHIFT(48),
  [1290] = {.count = 1, .reusable = true}, SHIFT(446),
  [1292] = {.count = 1, .reusable = true}, SHIFT(157),
  [1294] = {.count = 1, .reusable = true}, SHIFT(20),
  [1296] = {.count = 1, .reusable = true}, SHIFT(356),
  [1298] = {.count = 1, .reusable = true}, SHIFT(348),
  [1300] = {.count = 1, .reusable = true}, SHIFT(351),
  [1302] = {.count = 1, .reusable = true}, SHIFT(11),
  [1304] = {.count = 1, .reusable = true}, SHIFT(334),
  [1306] = {.count = 1, .reusable = true}, SHIFT(118),
  [1308] = {.count = 1, .reusable = true}, SHIFT(133),
  [1310] = {.count = 1, .reusable = true}, SHIFT(134),
  [1312] = {.count = 1, .reusable = true}, SHIFT(113),
  [1314] = {.count = 1, .reusable = true}, SHIFT(80),
  [1316] = {.count = 1, .reusable = true}, SHIFT(363),
  [1318] = {.count = 1, .reusable = true}, SHIFT(198),
  [1320] = {.count = 1, .reusable = true}, SHIFT(361),
  [1322] = {.count = 1, .reusable = true}, SHIFT(340),
  [1324] = {.count = 1, .reusable = true}, SHIFT(349),
  [1326] = {.count = 1, .reusable = true}, SHIFT(337),
  [1328] = {.count = 1, .reusable = true}, SHIFT(269),
  [1330] = {.count = 1, .reusable = true}, SHIFT(420),
  [1332] = {.count = 1, .reusable = true}, SHIFT(54),
  [1334] = {.count = 1, .reusable = true}, SHIFT(416),
  [1336] = {.count = 1, .reusable = true}, SHIFT(341),
  [1338] = {.count = 1, .reusable = true}, SHIFT(406),
  [1340] = {.count = 1, .reusable = true}, SHIFT(122),
  [1342] = {.count = 1, .reusable = true}, SHIFT(415),
  [1344] = {.count = 1, .reusable = true}, SHIFT(500),
  [1346] = {.count = 1, .reusable = true}, SHIFT(280),
  [1348] = {.count = 1, .reusable = true}, SHIFT(483),
  [1350] = {.count = 1, .reusable = true}, SHIFT(491),
  [1352] = {.count = 1, .reusable = true}, SHIFT(492),
  [1354] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1356] = {.count = 1, .reusable = true}, SHIFT(327),
  [1358] = {.count = 1, .reusable = true}, SHIFT(497),
  [1360] = {.count = 1, .reusable = true}, SHIFT(10),
  [1362] = {.count = 1, .reusable = true}, SHIFT(177),
  [1364] = {.count = 1, .reusable = true}, SHIFT(324),
  [1366] = {.count = 1, .reusable = true}, SHIFT(503),
  [1368] = {.count = 1, .reusable = true}, SHIFT(504),
  [1370] = {.count = 1, .reusable = true}, SHIFT(248),
  [1372] = {.count = 1, .reusable = true}, SHIFT(323),
  [1374] = {.count = 1, .reusable = true}, SHIFT(321),
  [1376] = {.count = 1, .reusable = true}, SHIFT(319),
  [1378] = {.count = 1, .reusable = true}, SHIFT(318),
  [1380] = {.count = 1, .reusable = true}, SHIFT(281),
  [1382] = {.count = 1, .reusable = true}, SHIFT(317),
  [1384] = {.count = 1, .reusable = true}, SHIFT(316),
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
