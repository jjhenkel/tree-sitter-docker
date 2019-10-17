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
#define STATE_COUNT 543
#define SYMBOL_COUNT 174
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
  aux_sym_env_value_token1 = 31,
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
  sym_label_value = 147,
  sym_signal_name = 148,
  sym_user_name = 149,
  sym_user_group = 150,
  sym_user_id = 151,
  sym_user_group_id = 152,
  sym_path = 153,
  aux_sym__paths = 154,
  aux_sym__anything = 155,
  sym_docker_variable = 156,
  sym_variable_default_value = 157,
  sym_variable_this_or_null = 158,
  sym_template_expr_less_than_equals = 159,
  sym__anything_or_json_array = 160,
  aux_sym_dockerfile_repeat1 = 161,
  aux_sym_expose_repeat1 = 162,
  aux_sym_healthcheck_repeat1 = 163,
  aux_sym__env_pairs_repeat1 = 164,
  aux_sym_repository_repeat1 = 165,
  aux_sym__repository_start_repeat1 = 166,
  aux_sym__repository_start_repeat2 = 167,
  aux_sym__repository_start_repeat3 = 168,
  aux_sym__repository_start_repeat4 = 169,
  aux_sym_label_value_repeat1 = 170,
  aux_sym_path_repeat1 = 171,
  aux_sym_path_repeat2 = 172,
  aux_sym_template_expr_less_than_equals_repeat1 = 173,
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
  [aux_sym_env_value_token1] = "env_value_token1",
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
  [aux_sym_env_value_token1] = {
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
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '{') ADVANCE(1201);
      if (lookahead == '}') ADVANCE(1202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0) ADVANCE(1076);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1005);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1041);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1060);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1011);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(996);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(997);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1042);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1071);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1021);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1064);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1048);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1076);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1005);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1041);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1060);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1011);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(996);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(997);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1042);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1071);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1021);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1064);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1048);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(929);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1076);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(179);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(857);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(878);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(829);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(814);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(815);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(860);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(839);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(882);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(866);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(868);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(179);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(179);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1095);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1098);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1099);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1103);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1096);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1094);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1097);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1104);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1101);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1087);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (lookahead != 0) ADVANCE(1092);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1095);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1098);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1099);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1103);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1096);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1093);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1094);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1097);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1104);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1101);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0) ADVANCE(1092);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(545);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(545);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(545);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(759);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(710);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(747);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(759);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(710);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(747);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(759);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(710);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(747);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(637);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(609);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(646);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(648);
      if (lookahead == '\\') ADVANCE(575);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(637);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(609);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(646);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(648);
      if (lookahead == '\\') ADVANCE(575);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(637);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(609);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(646);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(648);
      if (lookahead == '\\') ADVANCE(575);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(243);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(179);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(181);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(210);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(211);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(1106);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1106);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\\') ADVANCE(914);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(916);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(212);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(918);
      if (lookahead != 0) ADVANCE(918);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1227);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '#') ADVANCE(1218);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(1216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1218);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '#') ADVANCE(1215);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1215);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '#') ADVANCE(1212);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '#') ADVANCE(1206);
      if (lookahead == '\\') ADVANCE(1204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1206);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 43:
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1090);
      END_STATE();
    case 44:
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1090);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(915);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0) ADVANCE(916);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '-') ADVANCE(932);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0) ADVANCE(1076);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1076);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(930);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0) ADVANCE(1076);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(927);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '[') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0) ADVANCE(1092);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(925);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0) ADVANCE(1092);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(79);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(1202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(350);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(350);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(1209);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '{') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(363);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(1106);
      END_STATE();
    case 74:
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '+') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1203);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(797);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(797);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(797);
      if (lookahead != 0) ADVANCE(1219);
      END_STATE();
    case 82:
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1106);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(807);
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
      if (lookahead == 'l') ADVANCE(804);
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
      if (lookahead == 's') ADVANCE(808);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(806);
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
          lookahead != '\\') ADVANCE(1106);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(811);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '=') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1221);
      END_STATE();
    case 115:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(796);
      END_STATE();
    case 116:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(801);
      END_STATE();
    case 117:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(799);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(809);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(924);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 158:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 159:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 167:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 188:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 189:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 190:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 205:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 206:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 207:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 210:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1243);
      END_STATE();
    case 211:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1243);
      END_STATE();
    case 213:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 214:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 215:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 216:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 231:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1106);
      END_STATE();
    case 232:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 233:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      END_STATE();
    case 235:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 236:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(330);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 239:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(916);
      END_STATE();
    case 240:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 241:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(329);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 242:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(332);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(56);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(913);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\\') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_env_key);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(1239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(1241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '2') ADVANCE(345);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '5') ADVANCE(346);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '6') ADVANCE(347);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(350);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(352);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '\\') ADVANCE(362);
      if (lookahead != 0 &&
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
          lookahead != '}') ADVANCE(363);
      END_STATE();
    case 363:
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
          lookahead != '}') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(409);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(404);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
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
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(503);
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
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(509);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(610);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(771);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(713);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(721);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(705);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(717);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(676);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(727);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(688);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(677);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(744);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(709);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(718);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(743);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(707);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(693);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(766);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(733);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(706);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(715);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(767);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(755);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(769);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(768);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(716);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(773);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(764);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(751);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(752);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(722);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(758);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(679);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(745);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(725);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(739);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(681);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(756);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(777);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(775);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(787);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(791);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(793);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(795);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '=') ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(810);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(890);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(832);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(840);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(824);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(896);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(906);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(895);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(863);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(822);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(869);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(828);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(826);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(911);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(891);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(902);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(903);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(852);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(900);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(825);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(834);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(874);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(887);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(818);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(876);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(873);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(892);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(883);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(871);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(893);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(901);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(831);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(841);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(833);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(817);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(864);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(899);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(875);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(256);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(813);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(916);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(916);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(918);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(918);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(917);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(921);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(929);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '$') ADVANCE(1078);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1237);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '-') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '-') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '/') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'a') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'a') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead == 'i') ADVANCE(957);
      if (lookahead == 'p') ADVANCE(952);
      if (lookahead == 'r') ADVANCE(944);
      if (lookahead == 's') ADVANCE(974);
      if (lookahead == 't') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'd') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'e') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'e') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'f') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'h') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'l') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'l') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'm') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'o') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'p') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'r') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'r') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'r') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'r') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'r') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 's') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'v') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'w') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1006);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1012);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1007);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1068);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1059);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1076);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0) ADVANCE(1237);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '"') ADVANCE(1237);
      if (lookahead == '$') ADVANCE(1086);
      if (lookahead != 0) ADVANCE(1079);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '$') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(1080);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1084);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '$') ADVANCE(1085);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1084);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(1079);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(1080);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1084);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1079);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(1080);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1084);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1084);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0) ADVANCE(1237);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1088);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1088);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1088);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1110);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1090);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1156);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1140);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1151);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1133);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1199);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1183);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1136);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1164);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1185);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1177);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1146);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1174);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1108);
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1108);
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1110);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == ',') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1114);
      if (lookahead == ',') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1243);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1113);
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == '#') ADVANCE(1114);
      if (lookahead == ',') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1113);
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == ',') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1114);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1113);
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1114);
      if (lookahead == ',') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1243);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1163);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1157);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1167);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1114);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1195);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1114);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1162);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1154);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1160);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'd') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1138);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1126);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'e') ADVANCE(1114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1175);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1114);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1114);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1152);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1172);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1176);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'i') ADVANCE(1114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'i') ADVANCE(1114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1173);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'i') ADVANCE(1114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1188);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1114);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1142);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1114);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1132);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1192);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1123);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1131);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1166);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'l') ADVANCE(1114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1143);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1114);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1114);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1149);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1193);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1194);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'n') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'n') ADVANCE(1114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1170);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1191);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'o') ADVANCE(1114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1159);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1114);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1197);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1114);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1190);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1114);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1178);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'p') ADVANCE(1114);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1180);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1161);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1198);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'r') ADVANCE(1114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1128);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
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
          lookahead != 'r') ADVANCE(1114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1130);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1155);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1148);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1134);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1129);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1158);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1171);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1114);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1120);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1114);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1184);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1199:
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
          lookahead != 'v') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(777);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\\') ADVANCE(1204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1206);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1206);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1206);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__docker_variable);
      if (lookahead == '\\') ADVANCE(1208);
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
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 1209:
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
          lookahead != '}') ADVANCE(1209);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1212);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1215);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1215);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1215);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\\') ADVANCE(1216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1218);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1218);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1218);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1223);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1225);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1226);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1227);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '"') ADVANCE(1237);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(1229);
      if (lookahead != 0) ADVANCE(1229);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(1232);
      if (lookahead != 0) ADVANCE(1230);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(1233);
      if (lookahead != 0) ADVANCE(1231);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(1232);
      if (lookahead != 0) ADVANCE(1230);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(1233);
      if (lookahead != 0) ADVANCE(1231);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(801);
      if (lookahead != 0) ADVANCE(1237);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(799);
      if (lookahead != 0) ADVANCE(1237);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1237);
      if (lookahead != 0) ADVANCE(915);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0) ADVANCE(1237);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1237);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1231);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(334);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1229);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(336);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1230);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 1243:
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
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
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
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 69},
  [222] = {.lex_state = 64},
  [223] = {.lex_state = 69},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 64},
  [226] = {.lex_state = 70},
  [227] = {.lex_state = 70},
  [228] = {.lex_state = 70},
  [229] = {.lex_state = 70},
  [230] = {.lex_state = 70},
  [231] = {.lex_state = 70},
  [232] = {.lex_state = 69},
  [233] = {.lex_state = 69},
  [234] = {.lex_state = 69},
  [235] = {.lex_state = 64},
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
  [260] = {.lex_state = 69},
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
  [272] = {.lex_state = 48},
  [273] = {.lex_state = 69},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 50},
  [276] = {.lex_state = 50},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 21},
  [279] = {.lex_state = 50},
  [280] = {.lex_state = 58},
  [281] = {.lex_state = 1082},
  [282] = {.lex_state = 49},
  [283] = {.lex_state = 64},
  [284] = {.lex_state = 38},
  [285] = {.lex_state = 64},
  [286] = {.lex_state = 64},
  [287] = {.lex_state = 64},
  [288] = {.lex_state = 64},
  [289] = {.lex_state = 64},
  [290] = {.lex_state = 64},
  [291] = {.lex_state = 64},
  [292] = {.lex_state = 64},
  [293] = {.lex_state = 38},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 38},
  [296] = {.lex_state = 58},
  [297] = {.lex_state = 50},
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 68},
  [300] = {.lex_state = 68},
  [301] = {.lex_state = 21},
  [302] = {.lex_state = 38},
  [303] = {.lex_state = 64},
  [304] = {.lex_state = 66},
  [305] = {.lex_state = 65},
  [306] = {.lex_state = 67},
  [307] = {.lex_state = 38},
  [308] = {.lex_state = 49},
  [309] = {.lex_state = 64},
  [310] = {.lex_state = 1082},
  [311] = {.lex_state = 64},
  [312] = {.lex_state = 64},
  [313] = {.lex_state = 68},
  [314] = {.lex_state = 38},
  [315] = {.lex_state = 64},
  [316] = {.lex_state = 64},
  [317] = {.lex_state = 64},
  [318] = {.lex_state = 64},
  [319] = {.lex_state = 1082},
  [320] = {.lex_state = 38},
  [321] = {.lex_state = 38},
  [322] = {.lex_state = 66},
  [323] = {.lex_state = 59},
  [324] = {.lex_state = 64},
  [325] = {.lex_state = 49},
  [326] = {.lex_state = 65},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 49},
  [329] = {.lex_state = 64},
  [330] = {.lex_state = 38},
  [331] = {.lex_state = 1082},
  [332] = {.lex_state = 21},
  [333] = {.lex_state = 38},
  [334] = {.lex_state = 67},
  [335] = {.lex_state = 1082},
  [336] = {.lex_state = 21},
  [337] = {.lex_state = 67},
  [338] = {.lex_state = 65},
  [339] = {.lex_state = 66},
  [340] = {.lex_state = 1082},
  [341] = {.lex_state = 21},
  [342] = {.lex_state = 50},
  [343] = {.lex_state = 67},
  [344] = {.lex_state = 68},
  [345] = {.lex_state = 59},
  [346] = {.lex_state = 1082},
  [347] = {.lex_state = 66},
  [348] = {.lex_state = 68},
  [349] = {.lex_state = 59},
  [350] = {.lex_state = 59},
  [351] = {.lex_state = 1082},
  [352] = {.lex_state = 1082},
  [353] = {.lex_state = 68},
  [354] = {.lex_state = 50},
  [355] = {.lex_state = 65},
  [356] = {.lex_state = 50},
  [357] = {.lex_state = 68},
  [358] = {.lex_state = 50},
  [359] = {.lex_state = 50},
  [360] = {.lex_state = 50},
  [361] = {.lex_state = 21},
  [362] = {.lex_state = 45},
  [363] = {.lex_state = 21},
  [364] = {.lex_state = 50},
  [365] = {.lex_state = 50},
  [366] = {.lex_state = 71},
  [367] = {.lex_state = 71},
  [368] = {.lex_state = 71},
  [369] = {.lex_state = 71},
  [370] = {.lex_state = 71},
  [371] = {.lex_state = 1083},
  [372] = {.lex_state = 71},
  [373] = {.lex_state = 71},
  [374] = {.lex_state = 72},
  [375] = {.lex_state = 71},
  [376] = {.lex_state = 21},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 71},
  [379] = {.lex_state = 36},
  [380] = {.lex_state = 71},
  [381] = {.lex_state = 21},
  [382] = {.lex_state = 71},
  [383] = {.lex_state = 1083},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 71},
  [386] = {.lex_state = 71},
  [387] = {.lex_state = 71},
  [388] = {.lex_state = 71},
  [389] = {.lex_state = 71},
  [390] = {.lex_state = 64},
  [391] = {.lex_state = 71},
  [392] = {.lex_state = 21},
  [393] = {.lex_state = 71},
  [394] = {.lex_state = 51},
  [395] = {.lex_state = 52},
  [396] = {.lex_state = 71},
  [397] = {.lex_state = 71},
  [398] = {.lex_state = 21},
  [399] = {.lex_state = 71},
  [400] = {.lex_state = 71},
  [401] = {.lex_state = 36},
  [402] = {.lex_state = 71},
  [403] = {.lex_state = 21},
  [404] = {.lex_state = 21},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 71},
  [407] = {.lex_state = 62},
  [408] = {.lex_state = 36},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 63},
  [411] = {.lex_state = 21},
  [412] = {.lex_state = 53},
  [413] = {.lex_state = 63},
  [414] = {.lex_state = 52},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 21},
  [417] = {.lex_state = 62},
  [418] = {.lex_state = 62},
  [419] = {.lex_state = 58},
  [420] = {.lex_state = 58},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 58},
  [423] = {.lex_state = 58},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 21},
  [426] = {.lex_state = 37},
  [427] = {.lex_state = 21},
  [428] = {.lex_state = 64},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 21},
  [433] = {.lex_state = 37},
  [434] = {.lex_state = 39},
  [435] = {.lex_state = 40},
  [436] = {.lex_state = 21},
  [437] = {.lex_state = 64},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 21},
  [440] = {.lex_state = 37},
  [441] = {.lex_state = 21},
  [442] = {.lex_state = 64},
  [443] = {.lex_state = 64},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 64},
  [446] = {.lex_state = 21},
  [447] = {.lex_state = 37},
  [448] = {.lex_state = 64},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 21},
  [452] = {.lex_state = 37},
  [453] = {.lex_state = 39},
  [454] = {.lex_state = 40},
  [455] = {.lex_state = 21},
  [456] = {.lex_state = 64},
  [457] = {.lex_state = 41},
  [458] = {.lex_state = 41},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 37},
  [461] = {.lex_state = 39},
  [462] = {.lex_state = 40},
  [463] = {.lex_state = 39},
  [464] = {.lex_state = 40},
  [465] = {.lex_state = 64},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 64},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 21},
  [473] = {.lex_state = 21},
  [474] = {.lex_state = 21},
  [475] = {.lex_state = 60},
  [476] = {.lex_state = 39},
  [477] = {.lex_state = 40},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 39},
  [480] = {.lex_state = 40},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 64},
  [483] = {.lex_state = 37},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 21},
  [489] = {.lex_state = 37},
  [490] = {.lex_state = 64},
  [491] = {.lex_state = 21},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 21},
  [494] = {.lex_state = 64},
  [495] = {.lex_state = 21},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 64},
  [498] = {.lex_state = 21},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 64},
  [501] = {.lex_state = 42},
  [502] = {.lex_state = 71},
  [503] = {.lex_state = 64},
  [504] = {.lex_state = 21},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 64},
  [507] = {.lex_state = 21},
  [508] = {.lex_state = 64},
  [509] = {.lex_state = 61},
  [510] = {.lex_state = 64},
  [511] = {.lex_state = 114},
  [512] = {.lex_state = 64},
  [513] = {.lex_state = 37},
  [514] = {.lex_state = 64},
  [515] = {.lex_state = 21},
  [516] = {.lex_state = 64},
  [517] = {.lex_state = 21},
  [518] = {.lex_state = 64},
  [519] = {.lex_state = 21},
  [520] = {.lex_state = 64},
  [521] = {.lex_state = 21},
  [522] = {.lex_state = 39},
  [523] = {.lex_state = 71},
  [524] = {.lex_state = 40},
  [525] = {.lex_state = 40},
  [526] = {.lex_state = 39},
  [527] = {.lex_state = 21},
  [528] = {.lex_state = 71},
  [529] = {.lex_state = 40},
  [530] = {.lex_state = 39},
  [531] = {.lex_state = 21},
  [532] = {.lex_state = 71},
  [533] = {.lex_state = 40},
  [534] = {.lex_state = 39},
  [535] = {.lex_state = 37},
  [536] = {.lex_state = 71},
  [537] = {.lex_state = 71},
  [538] = {.lex_state = 71},
  [539] = {.lex_state = 71},
  [540] = {.lex_state = 71},
  [541] = {.lex_state = 71},
  [542] = {.lex_state = 71},
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
    [sym_dockerfile] = STATE(527),
    [sym__directive] = STATE(195),
    [sym_add] = STATE(195),
    [sym_arg] = STATE(195),
    [sym_cmd] = STATE(195),
    [sym_copy] = STATE(195),
    [sym_entrypoint] = STATE(195),
    [sym_env] = STATE(195),
    [sym_expose] = STATE(195),
    [sym_from] = STATE(195),
    [sym_healthcheck] = STATE(195),
    [sym_label] = STATE(195),
    [sym_maintainer] = STATE(195),
    [sym_onbuild] = STATE(195),
    [sym_run] = STATE(195),
    [sym_shell] = STATE(195),
    [sym_stopsignal] = STATE(195),
    [sym_user] = STATE(195),
    [sym_volume] = STATE(195),
    [sym_workdir] = STATE(195),
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
    [sym__directive] = STATE(195),
    [sym_add] = STATE(195),
    [sym_arg] = STATE(195),
    [sym_cmd] = STATE(195),
    [sym_copy] = STATE(195),
    [sym_entrypoint] = STATE(195),
    [sym_env] = STATE(195),
    [sym_expose] = STATE(195),
    [sym_from] = STATE(195),
    [sym_healthcheck] = STATE(195),
    [sym_label] = STATE(195),
    [sym_maintainer] = STATE(195),
    [sym_onbuild] = STATE(195),
    [sym_run] = STATE(195),
    [sym_shell] = STATE(195),
    [sym_stopsignal] = STATE(195),
    [sym_user] = STATE(195),
    [sym_volume] = STATE(195),
    [sym_workdir] = STATE(195),
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
    [sym__directive] = STATE(195),
    [sym_add] = STATE(195),
    [sym_arg] = STATE(195),
    [sym_cmd] = STATE(195),
    [sym_copy] = STATE(195),
    [sym_entrypoint] = STATE(195),
    [sym_env] = STATE(195),
    [sym_expose] = STATE(195),
    [sym_from] = STATE(195),
    [sym_healthcheck] = STATE(195),
    [sym_label] = STATE(195),
    [sym_maintainer] = STATE(195),
    [sym_onbuild] = STATE(195),
    [sym_run] = STATE(195),
    [sym_shell] = STATE(195),
    [sym_stopsignal] = STATE(195),
    [sym_user] = STATE(195),
    [sym_volume] = STATE(195),
    [sym_workdir] = STATE(195),
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
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(84),
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
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(84),
    [aux_sym_expose_repeat1] = STATE(5),
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
  [6] = {
    [sym_add] = STATE(179),
    [sym_arg] = STATE(179),
    [sym_cmd] = STATE(179),
    [sym_copy] = STATE(179),
    [sym_entrypoint] = STATE(179),
    [sym_env] = STATE(179),
    [sym_expose] = STATE(179),
    [sym_healthcheck] = STATE(179),
    [sym_label] = STATE(179),
    [sym_run] = STATE(179),
    [sym_shell] = STATE(179),
    [sym_stopsignal] = STATE(179),
    [sym_user] = STATE(179),
    [sym_volume] = STATE(179),
    [sym_workdir] = STATE(179),
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
    [aux_sym__repository_start_repeat3] = STATE(7),
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
    [aux_sym__repository_start_token8] = ACTIONS(131),
    [aux_sym__repository_start_token11] = ACTIONS(131),
    [aux_sym__repository_start_token16] = ACTIONS(127),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
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
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(134),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token4] = ACTIONS(138),
    [aux_sym__repository_start_token7] = ACTIONS(138),
    [aux_sym__repository_start_token16] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
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
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat3] = STATE(14),
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
    [aux_sym__repository_start_token8] = ACTIONS(151),
    [aux_sym__repository_start_token11] = ACTIONS(151),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(153),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(145),
    [aux_sym__repository_start_token2] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(147),
    [aux_sym__repository_start_token16] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(159),
    [aux_sym_arg_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_copy_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_env_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(159),
    [aux_sym_label_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [aux_sym__repository_start_token16] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(159),
    [aux_sym_arg_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_copy_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_env_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(159),
    [aux_sym_label_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token8] = ACTIONS(151),
    [aux_sym__repository_start_token11] = ACTIONS(151),
    [aux_sym__repository_start_token16] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(159),
    [aux_sym_arg_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_copy_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_env_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(159),
    [aux_sym_label_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token4] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(153),
    [aux_sym__repository_start_token16] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
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
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token16] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token2] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token16] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
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
    [aux_sym__repository_start_token12] = ACTIONS(184),
    [aux_sym__repository_start_token15] = ACTIONS(184),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
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
  [20] = {
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token2] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token16] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
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
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token15] = ACTIONS(199),
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
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token8] = ACTIONS(207),
    [aux_sym__repository_start_token11] = ACTIONS(207),
    [aux_sym__repository_start_token16] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [aux_sym__repository_start_repeat1] = STATE(26),
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
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [sym_port_protocol] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_add_token1] = ACTIONS(214),
    [aux_sym_arg_token1] = ACTIONS(214),
    [aux_sym_cmd_token1] = ACTIONS(214),
    [aux_sym_copy_token1] = ACTIONS(214),
    [aux_sym_entrypoint_token1] = ACTIONS(214),
    [aux_sym_env_token1] = ACTIONS(214),
    [aux_sym_expose_token1] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_from_token1] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [aux_sym_healthcheck_token1] = ACTIONS(214),
    [aux_sym_label_token1] = ACTIONS(214),
    [aux_sym_maintainer_token1] = ACTIONS(214),
    [aux_sym_onbuild_token1] = ACTIONS(214),
    [aux_sym_run_token1] = ACTIONS(214),
    [aux_sym_shell_token1] = ACTIONS(214),
    [aux_sym_stopsignal_token1] = ACTIONS(214),
    [aux_sym_user_token1] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [aux_sym_volume_token1] = ACTIONS(214),
    [aux_sym_workdir_token1] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [aux_sym__port_part_token1] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(214),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [aux_sym__repository_start_repeat3] = STATE(28),
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
    [aux_sym__repository_start_token8] = ACTIONS(218),
    [aux_sym__repository_start_token11] = ACTIONS(218),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(159),
    [aux_sym_arg_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_copy_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_env_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(159),
    [aux_sym_label_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token4] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat3] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(159),
    [aux_sym_arg_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_copy_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_env_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(159),
    [aux_sym_label_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token8] = ACTIONS(225),
    [aux_sym__repository_start_token11] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat4] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(159),
    [aux_sym_arg_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_copy_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_env_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(159),
    [aux_sym_label_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_onbuild_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token12] = ACTIONS(227),
    [aux_sym__repository_start_token15] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
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
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat4] = STATE(33),
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
    [aux_sym__repository_start_token12] = ACTIONS(233),
    [aux_sym__repository_start_token15] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat3] = STATE(30),
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
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [aux_sym__repository_start_token8] = ACTIONS(225),
    [aux_sym__repository_start_token11] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [sym_port_protocol] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_add_token1] = ACTIONS(238),
    [aux_sym_arg_token1] = ACTIONS(238),
    [aux_sym_cmd_token1] = ACTIONS(238),
    [aux_sym_copy_token1] = ACTIONS(238),
    [aux_sym_entrypoint_token1] = ACTIONS(238),
    [aux_sym_env_token1] = ACTIONS(238),
    [aux_sym_expose_token1] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [aux_sym_from_token1] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [aux_sym_healthcheck_token1] = ACTIONS(238),
    [aux_sym_label_token1] = ACTIONS(238),
    [aux_sym_maintainer_token1] = ACTIONS(238),
    [aux_sym_onbuild_token1] = ACTIONS(238),
    [aux_sym_run_token1] = ACTIONS(238),
    [aux_sym_shell_token1] = ACTIONS(238),
    [aux_sym_stopsignal_token1] = ACTIONS(238),
    [aux_sym_user_token1] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(238),
    [aux_sym_workdir_token1] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [aux_sym__port_part_token1] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(216),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(238),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [36] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [aux_sym__repository_start_token4] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat1] = STATE(26),
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
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym_volume_token1] = ACTIONS(143),
    [aux_sym_workdir_token1] = ACTIONS(143),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat4] = STATE(31),
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
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [aux_sym__repository_start_token12] = ACTIONS(227),
    [aux_sym__repository_start_token15] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(141),
    [sym__space_no_newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat2] = STATE(39),
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
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token4] = ACTIONS(240),
    [aux_sym__repository_start_token7] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
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
  [41] = {
    [aux_sym__repository_start_repeat3] = STATE(58),
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
    [aux_sym__repository_start_token8] = ACTIONS(151),
    [aux_sym__repository_start_token11] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [43] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(249),
    [aux_sym_arg_token1] = ACTIONS(249),
    [aux_sym_cmd_token1] = ACTIONS(249),
    [aux_sym_copy_token1] = ACTIONS(249),
    [aux_sym_entrypoint_token1] = ACTIONS(249),
    [aux_sym_env_token1] = ACTIONS(249),
    [aux_sym_expose_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(249),
    [aux_sym_label_token1] = ACTIONS(249),
    [aux_sym_maintainer_token1] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(249),
    [aux_sym_run_token1] = ACTIONS(249),
    [aux_sym_shell_token1] = ACTIONS(249),
    [aux_sym_stopsignal_token1] = ACTIONS(249),
    [aux_sym_user_token1] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(254),
    [aux_sym_volume_token1] = ACTIONS(249),
    [aux_sym_workdir_token1] = ACTIONS(249),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(260),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [aux_sym_path_repeat1] = STATE(65),
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
  [45] = {
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
  [46] = {
    [aux_sym__repository_start_repeat2] = STATE(59),
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
    [aux_sym__repository_start_token4] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
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
  [48] = {
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
  [49] = {
    [aux_sym__repository_start_repeat1] = STATE(50),
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
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym__repository_start_token2] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token2] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(289),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [54] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token15] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
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
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token8] = ACTIONS(207),
    [aux_sym__repository_start_token11] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [56] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym__repository_start_token3] = ACTIONS(295),
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_user_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [58] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym__repository_start_token3] = ACTIONS(295),
    [aux_sym__repository_start_token8] = ACTIONS(151),
    [aux_sym__repository_start_token11] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym__repository_start_token3] = ACTIONS(295),
    [aux_sym__repository_start_token4] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [aux_sym__repository_start_repeat4] = STATE(56),
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
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(299),
    [aux_sym_arg_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_copy_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_env_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(299),
    [aux_sym_healthcheck_token1] = ACTIONS(299),
    [aux_sym_label_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_onbuild_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [aux_sym_path_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [aux_sym_healthcheck_token1] = ACTIONS(301),
    [aux_sym_label_token1] = ACTIONS(301),
    [aux_sym_maintainer_token1] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(301),
    [aux_sym_run_token1] = ACTIONS(301),
    [aux_sym_shell_token1] = ACTIONS(301),
    [aux_sym_stopsignal_token1] = ACTIONS(301),
    [aux_sym_user_token1] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(306),
    [aux_sym_path_token2] = ACTIONS(308),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym__space_no_newline] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
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
  [64] = {
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
  [65] = {
    [aux_sym_path_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(311),
    [aux_sym_arg_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_copy_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_env_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [aux_sym_from_token1] = ACTIONS(311),
    [aux_sym_healthcheck_token1] = ACTIONS(311),
    [aux_sym_label_token1] = ACTIONS(311),
    [aux_sym_maintainer_token1] = ACTIONS(311),
    [aux_sym_onbuild_token1] = ACTIONS(311),
    [aux_sym_run_token1] = ACTIONS(311),
    [aux_sym_shell_token1] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(311),
    [aux_sym_user_token1] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(313),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
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
    [aux_sym_path_token1] = ACTIONS(319),
    [aux_sym_path_token2] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [aux_sym_healthcheck_token1] = ACTIONS(321),
    [aux_sym_label_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_onbuild_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [aux_sym__port_part_token1] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(311),
    [aux_sym_arg_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_copy_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_env_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [aux_sym_from_token1] = ACTIONS(311),
    [aux_sym_healthcheck_token1] = ACTIONS(311),
    [aux_sym_label_token1] = ACTIONS(311),
    [aux_sym_maintainer_token1] = ACTIONS(311),
    [aux_sym_onbuild_token1] = ACTIONS(311),
    [aux_sym_run_token1] = ACTIONS(311),
    [aux_sym_shell_token1] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(311),
    [aux_sym_user_token1] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(315),
    [aux_sym_path_token2] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [69] = {
    [aux_sym__repository_start_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(325),
    [aux_sym_arg_token1] = ACTIONS(325),
    [aux_sym_cmd_token1] = ACTIONS(325),
    [aux_sym_copy_token1] = ACTIONS(325),
    [aux_sym_entrypoint_token1] = ACTIONS(325),
    [aux_sym_env_token1] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(325),
    [aux_sym_from_token1] = ACTIONS(325),
    [aux_sym_healthcheck_token1] = ACTIONS(325),
    [aux_sym_label_token1] = ACTIONS(325),
    [aux_sym_maintainer_token1] = ACTIONS(325),
    [aux_sym_onbuild_token1] = ACTIONS(325),
    [aux_sym_run_token1] = ACTIONS(325),
    [aux_sym_shell_token1] = ACTIONS(325),
    [aux_sym_stopsignal_token1] = ACTIONS(325),
    [aux_sym_user_token1] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_volume_token1] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(325),
    [aux_sym__repository_start_token2] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_env_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(157),
    [aux_sym_label_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_onbuild_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(329),
    [aux_sym_arg_token1] = ACTIONS(329),
    [aux_sym_cmd_token1] = ACTIONS(329),
    [aux_sym_copy_token1] = ACTIONS(329),
    [aux_sym_entrypoint_token1] = ACTIONS(329),
    [aux_sym_env_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [aux_sym_healthcheck_token1] = ACTIONS(329),
    [aux_sym_label_token1] = ACTIONS(329),
    [aux_sym_maintainer_token1] = ACTIONS(329),
    [aux_sym_onbuild_token1] = ACTIONS(329),
    [aux_sym_run_token1] = ACTIONS(329),
    [aux_sym_shell_token1] = ACTIONS(329),
    [aux_sym_stopsignal_token1] = ACTIONS(329),
    [aux_sym_user_token1] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [aux_sym_volume_token1] = ACTIONS(329),
    [aux_sym_workdir_token1] = ACTIONS(329),
    [aux_sym_path_token1] = ACTIONS(331),
    [aux_sym_path_token2] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym__repository_start_repeat3] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_env_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [aux_sym_healthcheck_token1] = ACTIONS(335),
    [aux_sym_label_token1] = ACTIONS(335),
    [aux_sym_maintainer_token1] = ACTIONS(335),
    [aux_sym_onbuild_token1] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_shell_token1] = ACTIONS(335),
    [aux_sym_stopsignal_token1] = ACTIONS(335),
    [aux_sym_user_token1] = ACTIONS(335),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [aux_sym__repository_start_token8] = ACTIONS(151),
    [aux_sym__repository_start_token11] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_add_token1] = ACTIONS(339),
    [aux_sym_arg_token1] = ACTIONS(339),
    [aux_sym_cmd_token1] = ACTIONS(339),
    [aux_sym_copy_token1] = ACTIONS(339),
    [aux_sym_entrypoint_token1] = ACTIONS(339),
    [aux_sym_env_token1] = ACTIONS(339),
    [aux_sym_expose_token1] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [aux_sym_from_token1] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [aux_sym_healthcheck_token1] = ACTIONS(339),
    [aux_sym_label_token1] = ACTIONS(339),
    [aux_sym_maintainer_token1] = ACTIONS(339),
    [aux_sym_onbuild_token1] = ACTIONS(339),
    [aux_sym_run_token1] = ACTIONS(339),
    [aux_sym_shell_token1] = ACTIONS(339),
    [aux_sym_stopsignal_token1] = ACTIONS(339),
    [aux_sym_user_token1] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [aux_sym_volume_token1] = ACTIONS(339),
    [aux_sym_workdir_token1] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [aux_sym__port_part_token1] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_add_token1] = ACTIONS(341),
    [aux_sym_arg_token1] = ACTIONS(341),
    [aux_sym_cmd_token1] = ACTIONS(341),
    [aux_sym_copy_token1] = ACTIONS(341),
    [aux_sym_entrypoint_token1] = ACTIONS(341),
    [aux_sym_env_token1] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(341),
    [aux_sym_from_token1] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(341),
    [aux_sym_healthcheck_token1] = ACTIONS(341),
    [aux_sym_label_token1] = ACTIONS(341),
    [aux_sym_maintainer_token1] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(341),
    [aux_sym_run_token1] = ACTIONS(341),
    [aux_sym_shell_token1] = ACTIONS(341),
    [aux_sym_stopsignal_token1] = ACTIONS(341),
    [aux_sym_user_token1] = ACTIONS(341),
    [aux_sym_volume_token1] = ACTIONS(341),
    [aux_sym_workdir_token1] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(345),
    [aux_sym__repository_start_token16] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym__space_no_newline] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [75] = {
    [aux_sym__repository_start_repeat2] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_env_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [aux_sym_healthcheck_token1] = ACTIONS(335),
    [aux_sym_label_token1] = ACTIONS(335),
    [aux_sym_maintainer_token1] = ACTIONS(335),
    [aux_sym_onbuild_token1] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_shell_token1] = ACTIONS(335),
    [aux_sym_stopsignal_token1] = ACTIONS(335),
    [aux_sym_user_token1] = ACTIONS(335),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [aux_sym__repository_start_token4] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_env_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [aux_sym_healthcheck_token1] = ACTIONS(335),
    [aux_sym_label_token1] = ACTIONS(335),
    [aux_sym_maintainer_token1] = ACTIONS(335),
    [aux_sym_onbuild_token1] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_shell_token1] = ACTIONS(335),
    [aux_sym_stopsignal_token1] = ACTIONS(335),
    [aux_sym_user_token1] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym__repository_start_token2] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
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
    [aux_sym_path_token1] = ACTIONS(349),
    [aux_sym_path_token2] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym__space_no_newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [78] = {
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
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(351),
    [aux_sym_arg_token1] = ACTIONS(351),
    [aux_sym_cmd_token1] = ACTIONS(351),
    [aux_sym_copy_token1] = ACTIONS(351),
    [aux_sym_entrypoint_token1] = ACTIONS(351),
    [aux_sym_env_token1] = ACTIONS(351),
    [aux_sym_expose_token1] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [aux_sym_from_token1] = ACTIONS(351),
    [aux_sym_healthcheck_token1] = ACTIONS(351),
    [aux_sym_label_token1] = ACTIONS(351),
    [aux_sym_maintainer_token1] = ACTIONS(351),
    [aux_sym_onbuild_token1] = ACTIONS(351),
    [aux_sym_run_token1] = ACTIONS(351),
    [aux_sym_shell_token1] = ACTIONS(351),
    [aux_sym_stopsignal_token1] = ACTIONS(351),
    [aux_sym_user_token1] = ACTIONS(351),
    [anon_sym_DOLLAR] = ACTIONS(351),
    [aux_sym_volume_token1] = ACTIONS(351),
    [aux_sym_workdir_token1] = ACTIONS(351),
    [aux_sym_path_token1] = ACTIONS(353),
    [aux_sym_path_token2] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym__space_no_newline] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_add_token1] = ACTIONS(357),
    [aux_sym_arg_token1] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(357),
    [aux_sym_copy_token1] = ACTIONS(357),
    [aux_sym_entrypoint_token1] = ACTIONS(357),
    [aux_sym_env_token1] = ACTIONS(357),
    [aux_sym_expose_token1] = ACTIONS(357),
    [aux_sym_from_token1] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(357),
    [aux_sym_healthcheck_token1] = ACTIONS(357),
    [aux_sym_label_token1] = ACTIONS(357),
    [aux_sym_maintainer_token1] = ACTIONS(357),
    [aux_sym_onbuild_token1] = ACTIONS(357),
    [aux_sym_run_token1] = ACTIONS(357),
    [aux_sym_shell_token1] = ACTIONS(357),
    [aux_sym_stopsignal_token1] = ACTIONS(357),
    [aux_sym_user_token1] = ACTIONS(357),
    [aux_sym_volume_token1] = ACTIONS(357),
    [aux_sym_workdir_token1] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(361),
    [aux_sym__repository_start_token16] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [aux_sym_healthcheck_token1] = ACTIONS(301),
    [aux_sym_label_token1] = ACTIONS(301),
    [aux_sym_maintainer_token1] = ACTIONS(301),
    [aux_sym_onbuild_token1] = ACTIONS(301),
    [aux_sym_run_token1] = ACTIONS(301),
    [aux_sym_shell_token1] = ACTIONS(301),
    [aux_sym_stopsignal_token1] = ACTIONS(301),
    [aux_sym_user_token1] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(306),
    [aux_sym_path_token2] = ACTIONS(306),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym__space_no_newline] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
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
  [83] = {
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
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [anon_sym_DOLLAR] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(365),
    [aux_sym__port_part_token1] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
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
    [aux_sym_path_token1] = ACTIONS(189),
    [aux_sym_path_token2] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
    [aux_sym__repository_start_repeat4] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_env_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [aux_sym_healthcheck_token1] = ACTIONS(335),
    [aux_sym_label_token1] = ACTIONS(335),
    [aux_sym_maintainer_token1] = ACTIONS(335),
    [aux_sym_onbuild_token1] = ACTIONS(335),
    [aux_sym_run_token1] = ACTIONS(335),
    [aux_sym_shell_token1] = ACTIONS(335),
    [aux_sym_stopsignal_token1] = ACTIONS(335),
    [aux_sym_user_token1] = ACTIONS(335),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_add_token1] = ACTIONS(238),
    [aux_sym_arg_token1] = ACTIONS(238),
    [aux_sym_cmd_token1] = ACTIONS(238),
    [aux_sym_copy_token1] = ACTIONS(238),
    [aux_sym_entrypoint_token1] = ACTIONS(238),
    [aux_sym_env_token1] = ACTIONS(238),
    [aux_sym_expose_token1] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [aux_sym_from_token1] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [aux_sym_healthcheck_token1] = ACTIONS(238),
    [aux_sym_label_token1] = ACTIONS(238),
    [aux_sym_maintainer_token1] = ACTIONS(238),
    [aux_sym_onbuild_token1] = ACTIONS(238),
    [aux_sym_run_token1] = ACTIONS(238),
    [aux_sym_shell_token1] = ACTIONS(238),
    [aux_sym_stopsignal_token1] = ACTIONS(238),
    [aux_sym_user_token1] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(238),
    [aux_sym_workdir_token1] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [aux_sym__port_part_token1] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(238),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym_add_token1] = ACTIONS(367),
    [aux_sym_arg_token1] = ACTIONS(367),
    [aux_sym_cmd_token1] = ACTIONS(367),
    [aux_sym_copy_token1] = ACTIONS(367),
    [aux_sym_entrypoint_token1] = ACTIONS(367),
    [aux_sym_env_token1] = ACTIONS(367),
    [aux_sym_expose_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [aux_sym_from_token1] = ACTIONS(367),
    [aux_sym_healthcheck_token1] = ACTIONS(367),
    [aux_sym_label_token1] = ACTIONS(367),
    [aux_sym_maintainer_token1] = ACTIONS(367),
    [aux_sym_onbuild_token1] = ACTIONS(367),
    [aux_sym_run_token1] = ACTIONS(367),
    [aux_sym_shell_token1] = ACTIONS(367),
    [aux_sym_stopsignal_token1] = ACTIONS(367),
    [aux_sym_user_token1] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(367),
    [aux_sym_volume_token1] = ACTIONS(367),
    [aux_sym_workdir_token1] = ACTIONS(367),
    [aux_sym_path_token1] = ACTIONS(369),
    [aux_sym_path_token2] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(373),
    [aux_sym_arg_token1] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_copy_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_env_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
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
    [aux_sym__repository_start_token3] = ACTIONS(375),
    [aux_sym__repository_start_token4] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym__space_no_newline] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(373),
    [aux_sym_arg_token1] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_copy_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_env_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
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
    [aux_sym__repository_start_token3] = ACTIONS(375),
    [aux_sym__repository_start_token8] = ACTIONS(151),
    [aux_sym__repository_start_token11] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym__space_no_newline] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [91] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_add_token1] = ACTIONS(373),
    [aux_sym_arg_token1] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_copy_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_env_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
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
    [aux_sym__repository_start_token3] = ACTIONS(375),
    [aux_sym__repository_start_token12] = ACTIONS(149),
    [aux_sym__repository_start_token15] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym__space_no_newline] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [aux_sym_add_token1] = ACTIONS(377),
    [aux_sym_arg_token1] = ACTIONS(377),
    [aux_sym_cmd_token1] = ACTIONS(377),
    [aux_sym_copy_token1] = ACTIONS(377),
    [aux_sym_entrypoint_token1] = ACTIONS(377),
    [aux_sym_env_token1] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [aux_sym_healthcheck_token1] = ACTIONS(377),
    [aux_sym_label_token1] = ACTIONS(377),
    [aux_sym_maintainer_token1] = ACTIONS(377),
    [aux_sym_onbuild_token1] = ACTIONS(377),
    [aux_sym_run_token1] = ACTIONS(377),
    [aux_sym_shell_token1] = ACTIONS(377),
    [aux_sym_stopsignal_token1] = ACTIONS(377),
    [aux_sym_user_token1] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [aux_sym_volume_token1] = ACTIONS(377),
    [aux_sym_workdir_token1] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [aux_sym__port_part_token1] = ACTIONS(377),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(377),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [aux_sym__repository_start_repeat4] = STATE(93),
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
    [aux_sym__repository_start_token12] = ACTIONS(379),
    [aux_sym__repository_start_token15] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [aux_sym__repository_start_repeat2] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_add_token1] = ACTIONS(384),
    [aux_sym_arg_token1] = ACTIONS(384),
    [aux_sym_cmd_token1] = ACTIONS(384),
    [aux_sym_copy_token1] = ACTIONS(384),
    [aux_sym_entrypoint_token1] = ACTIONS(384),
    [aux_sym_env_token1] = ACTIONS(384),
    [aux_sym_expose_token1] = ACTIONS(384),
    [aux_sym_from_token1] = ACTIONS(384),
    [aux_sym_healthcheck_token1] = ACTIONS(384),
    [aux_sym_label_token1] = ACTIONS(384),
    [aux_sym_maintainer_token1] = ACTIONS(384),
    [aux_sym_onbuild_token1] = ACTIONS(384),
    [aux_sym_run_token1] = ACTIONS(384),
    [aux_sym_shell_token1] = ACTIONS(384),
    [aux_sym_stopsignal_token1] = ACTIONS(384),
    [aux_sym_user_token1] = ACTIONS(384),
    [aux_sym_volume_token1] = ACTIONS(384),
    [aux_sym_workdir_token1] = ACTIONS(384),
    [aux_sym__repository_start_token3] = ACTIONS(386),
    [aux_sym__repository_start_token4] = ACTIONS(388),
    [aux_sym__repository_start_token7] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [aux_sym__repository_start_repeat3] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_add_token1] = ACTIONS(384),
    [aux_sym_arg_token1] = ACTIONS(384),
    [aux_sym_cmd_token1] = ACTIONS(384),
    [aux_sym_copy_token1] = ACTIONS(384),
    [aux_sym_entrypoint_token1] = ACTIONS(384),
    [aux_sym_env_token1] = ACTIONS(384),
    [aux_sym_expose_token1] = ACTIONS(384),
    [aux_sym_from_token1] = ACTIONS(384),
    [aux_sym_healthcheck_token1] = ACTIONS(384),
    [aux_sym_label_token1] = ACTIONS(384),
    [aux_sym_maintainer_token1] = ACTIONS(384),
    [aux_sym_onbuild_token1] = ACTIONS(384),
    [aux_sym_run_token1] = ACTIONS(384),
    [aux_sym_shell_token1] = ACTIONS(384),
    [aux_sym_stopsignal_token1] = ACTIONS(384),
    [aux_sym_user_token1] = ACTIONS(384),
    [aux_sym_volume_token1] = ACTIONS(384),
    [aux_sym_workdir_token1] = ACTIONS(384),
    [aux_sym__repository_start_token3] = ACTIONS(386),
    [aux_sym__repository_start_token8] = ACTIONS(390),
    [aux_sym__repository_start_token11] = ACTIONS(390),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [aux_sym_path_repeat1] = STATE(101),
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
    [anon_sym_DOLLAR] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(394),
    [aux_sym_path_token2] = ACTIONS(396),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym_path_repeat1] = STATE(97),
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
    [anon_sym_DOLLAR] = ACTIONS(398),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(306),
    [aux_sym_path_token2] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [aux_sym__repository_start_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(404),
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
    [anon_sym_DOLLAR] = ACTIONS(408),
    [aux_sym_volume_token1] = ACTIONS(406),
    [aux_sym_workdir_token1] = ACTIONS(406),
    [aux_sym__repository_start_token2] = ACTIONS(408),
    [aux_sym__repository_start_token3] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__repository_start_repeat3] = STATE(99),
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
    [aux_sym__repository_start_token8] = ACTIONS(412),
    [aux_sym__repository_start_token11] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_add_token1] = ACTIONS(415),
    [aux_sym_arg_token1] = ACTIONS(415),
    [aux_sym_cmd_token1] = ACTIONS(415),
    [aux_sym_copy_token1] = ACTIONS(415),
    [aux_sym_entrypoint_token1] = ACTIONS(415),
    [aux_sym_env_token1] = ACTIONS(415),
    [aux_sym_expose_token1] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [aux_sym_from_token1] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(415),
    [aux_sym_healthcheck_token1] = ACTIONS(415),
    [aux_sym_label_token1] = ACTIONS(415),
    [aux_sym_maintainer_token1] = ACTIONS(415),
    [aux_sym_onbuild_token1] = ACTIONS(415),
    [aux_sym_run_token1] = ACTIONS(415),
    [aux_sym_shell_token1] = ACTIONS(415),
    [aux_sym_stopsignal_token1] = ACTIONS(415),
    [aux_sym_user_token1] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [aux_sym_volume_token1] = ACTIONS(415),
    [aux_sym_workdir_token1] = ACTIONS(415),
    [aux_sym__port_part_token1] = ACTIONS(415),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(415),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym_path_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(311),
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
    [anon_sym_DOLLAR] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(417),
    [aux_sym_path_token2] = ACTIONS(396),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym__repository_start_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(404),
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
    [aux_sym__repository_start_token3] = ACTIONS(410),
    [aux_sym__repository_start_token4] = ACTIONS(388),
    [aux_sym__repository_start_token7] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(404),
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
    [aux_sym__repository_start_repeat2] = STATE(104),
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
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token4] = ACTIONS(421),
    [aux_sym__repository_start_token7] = ACTIONS(421),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [aux_sym__repository_start_repeat4] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_add_token1] = ACTIONS(384),
    [aux_sym_arg_token1] = ACTIONS(384),
    [aux_sym_cmd_token1] = ACTIONS(384),
    [aux_sym_copy_token1] = ACTIONS(384),
    [aux_sym_entrypoint_token1] = ACTIONS(384),
    [aux_sym_env_token1] = ACTIONS(384),
    [aux_sym_expose_token1] = ACTIONS(384),
    [aux_sym_from_token1] = ACTIONS(384),
    [aux_sym_healthcheck_token1] = ACTIONS(384),
    [aux_sym_label_token1] = ACTIONS(384),
    [aux_sym_maintainer_token1] = ACTIONS(384),
    [aux_sym_onbuild_token1] = ACTIONS(384),
    [aux_sym_run_token1] = ACTIONS(384),
    [aux_sym_shell_token1] = ACTIONS(384),
    [aux_sym_stopsignal_token1] = ACTIONS(384),
    [aux_sym_user_token1] = ACTIONS(384),
    [aux_sym_volume_token1] = ACTIONS(384),
    [aux_sym_workdir_token1] = ACTIONS(384),
    [aux_sym__repository_start_token3] = ACTIONS(386),
    [aux_sym__repository_start_token12] = ACTIONS(424),
    [aux_sym__repository_start_token15] = ACTIONS(424),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(249),
    [aux_sym_arg_token1] = ACTIONS(249),
    [aux_sym_cmd_token1] = ACTIONS(249),
    [aux_sym_copy_token1] = ACTIONS(249),
    [aux_sym_entrypoint_token1] = ACTIONS(249),
    [aux_sym_env_token1] = ACTIONS(249),
    [aux_sym_expose_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [aux_sym_from_token1] = ACTIONS(249),
    [aux_sym_healthcheck_token1] = ACTIONS(249),
    [aux_sym_label_token1] = ACTIONS(249),
    [aux_sym_maintainer_token1] = ACTIONS(249),
    [aux_sym_onbuild_token1] = ACTIONS(249),
    [aux_sym_run_token1] = ACTIONS(249),
    [aux_sym_shell_token1] = ACTIONS(249),
    [aux_sym_stopsignal_token1] = ACTIONS(249),
    [aux_sym_user_token1] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [aux_sym_volume_token1] = ACTIONS(249),
    [aux_sym_workdir_token1] = ACTIONS(249),
    [aux_sym_path_token1] = ACTIONS(426),
    [aux_sym_path_token2] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_add_token1] = ACTIONS(428),
    [aux_sym_arg_token1] = ACTIONS(428),
    [aux_sym_cmd_token1] = ACTIONS(428),
    [aux_sym_copy_token1] = ACTIONS(428),
    [aux_sym_entrypoint_token1] = ACTIONS(428),
    [aux_sym_env_token1] = ACTIONS(428),
    [aux_sym_expose_token1] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [aux_sym_from_token1] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(430),
    [aux_sym_healthcheck_token1] = ACTIONS(428),
    [aux_sym_label_token1] = ACTIONS(428),
    [aux_sym_maintainer_token1] = ACTIONS(428),
    [aux_sym_onbuild_token1] = ACTIONS(428),
    [aux_sym_run_token1] = ACTIONS(428),
    [aux_sym_shell_token1] = ACTIONS(428),
    [aux_sym_stopsignal_token1] = ACTIONS(428),
    [aux_sym_user_token1] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_volume_token1] = ACTIONS(428),
    [aux_sym_workdir_token1] = ACTIONS(428),
    [aux_sym__port_part_token1] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(428),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym__repository_start_repeat3] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(404),
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
    [aux_sym__repository_start_token3] = ACTIONS(410),
    [aux_sym__repository_start_token8] = ACTIONS(390),
    [aux_sym__repository_start_token11] = ACTIONS(390),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
    [aux_sym__repository_start_repeat4] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(404),
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
    [aux_sym__repository_start_token3] = ACTIONS(410),
    [aux_sym__repository_start_token12] = ACTIONS(424),
    [aux_sym__repository_start_token15] = ACTIONS(424),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [aux_sym__repository_start_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym_add_token1] = ACTIONS(434),
    [aux_sym_arg_token1] = ACTIONS(434),
    [aux_sym_cmd_token1] = ACTIONS(434),
    [aux_sym_copy_token1] = ACTIONS(434),
    [aux_sym_entrypoint_token1] = ACTIONS(434),
    [aux_sym_env_token1] = ACTIONS(434),
    [aux_sym_expose_token1] = ACTIONS(434),
    [aux_sym_from_token1] = ACTIONS(434),
    [aux_sym_healthcheck_token1] = ACTIONS(434),
    [aux_sym_label_token1] = ACTIONS(434),
    [aux_sym_maintainer_token1] = ACTIONS(434),
    [aux_sym_onbuild_token1] = ACTIONS(434),
    [aux_sym_run_token1] = ACTIONS(434),
    [aux_sym_shell_token1] = ACTIONS(434),
    [aux_sym_stopsignal_token1] = ACTIONS(434),
    [aux_sym_user_token1] = ACTIONS(434),
    [anon_sym_DOLLAR] = ACTIONS(408),
    [aux_sym_volume_token1] = ACTIONS(434),
    [aux_sym_workdir_token1] = ACTIONS(434),
    [aux_sym__repository_start_token2] = ACTIONS(408),
    [aux_sym__repository_start_token3] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [aux_sym__repository_start_repeat1] = STATE(111),
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
    [anon_sym_DOLLAR] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(438),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_add_token1] = ACTIONS(441),
    [aux_sym_arg_token1] = ACTIONS(441),
    [aux_sym_cmd_token1] = ACTIONS(441),
    [aux_sym_copy_token1] = ACTIONS(441),
    [aux_sym_entrypoint_token1] = ACTIONS(441),
    [aux_sym_env_token1] = ACTIONS(441),
    [aux_sym_expose_token1] = ACTIONS(441),
    [aux_sym_from_token1] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(445),
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
    [sym__space_no_newline] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [aux_sym_add_token1] = ACTIONS(341),
    [aux_sym_arg_token1] = ACTIONS(341),
    [aux_sym_cmd_token1] = ACTIONS(341),
    [aux_sym_copy_token1] = ACTIONS(341),
    [aux_sym_entrypoint_token1] = ACTIONS(341),
    [aux_sym_env_token1] = ACTIONS(341),
    [aux_sym_expose_token1] = ACTIONS(341),
    [aux_sym_from_token1] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [aux_sym_healthcheck_token1] = ACTIONS(341),
    [aux_sym_label_token1] = ACTIONS(341),
    [aux_sym_maintainer_token1] = ACTIONS(341),
    [aux_sym_onbuild_token1] = ACTIONS(341),
    [aux_sym_run_token1] = ACTIONS(341),
    [aux_sym_shell_token1] = ACTIONS(341),
    [aux_sym_stopsignal_token1] = ACTIONS(341),
    [aux_sym_user_token1] = ACTIONS(341),
    [aux_sym_volume_token1] = ACTIONS(341),
    [aux_sym_workdir_token1] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym__space_no_newline] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
    [aux_sym__anything] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_env_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [aux_sym_healthcheck_token1] = ACTIONS(449),
    [aux_sym_label_token1] = ACTIONS(449),
    [aux_sym_maintainer_token1] = ACTIONS(449),
    [aux_sym_onbuild_token1] = ACTIONS(449),
    [aux_sym_run_token1] = ACTIONS(449),
    [aux_sym_shell_token1] = ACTIONS(449),
    [aux_sym_stopsignal_token1] = ACTIONS(449),
    [aux_sym_user_token1] = ACTIONS(449),
    [aux_sym_volume_token1] = ACTIONS(449),
    [aux_sym_workdir_token1] = ACTIONS(449),
    [aux_sym__anything_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym__space_no_newline] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(187),
    [aux_sym_arg_token1] = ACTIONS(187),
    [aux_sym_cmd_token1] = ACTIONS(187),
    [aux_sym_copy_token1] = ACTIONS(187),
    [aux_sym_entrypoint_token1] = ACTIONS(187),
    [aux_sym_env_token1] = ACTIONS(187),
    [aux_sym_expose_token1] = ACTIONS(187),
    [aux_sym_from_token1] = ACTIONS(187),
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
    [aux_sym_path_token1] = ACTIONS(189),
    [aux_sym_path_token2] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
  [117] = {
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
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token8] = ACTIONS(207),
    [aux_sym__repository_start_token11] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token15] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym_add_token1] = ACTIONS(455),
    [aux_sym_arg_token1] = ACTIONS(455),
    [aux_sym_cmd_token1] = ACTIONS(455),
    [aux_sym_copy_token1] = ACTIONS(455),
    [aux_sym_entrypoint_token1] = ACTIONS(455),
    [aux_sym_env_token1] = ACTIONS(455),
    [aux_sym_expose_token1] = ACTIONS(455),
    [aux_sym_from_token1] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(459),
    [aux_sym_healthcheck_token1] = ACTIONS(455),
    [aux_sym_label_token1] = ACTIONS(455),
    [aux_sym_maintainer_token1] = ACTIONS(455),
    [aux_sym_onbuild_token1] = ACTIONS(455),
    [aux_sym_run_token1] = ACTIONS(455),
    [aux_sym_shell_token1] = ACTIONS(455),
    [aux_sym_stopsignal_token1] = ACTIONS(455),
    [aux_sym_user_token1] = ACTIONS(455),
    [aux_sym_volume_token1] = ACTIONS(455),
    [aux_sym_workdir_token1] = ACTIONS(455),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(455),
    [sym__space_no_newline] = ACTIONS(461),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_add_token1] = ACTIONS(357),
    [aux_sym_arg_token1] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(357),
    [aux_sym_copy_token1] = ACTIONS(357),
    [aux_sym_entrypoint_token1] = ACTIONS(357),
    [aux_sym_env_token1] = ACTIONS(357),
    [aux_sym_expose_token1] = ACTIONS(357),
    [aux_sym_from_token1] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [aux_sym_healthcheck_token1] = ACTIONS(357),
    [aux_sym_label_token1] = ACTIONS(357),
    [aux_sym_maintainer_token1] = ACTIONS(357),
    [aux_sym_onbuild_token1] = ACTIONS(357),
    [aux_sym_run_token1] = ACTIONS(357),
    [aux_sym_shell_token1] = ACTIONS(357),
    [aux_sym_stopsignal_token1] = ACTIONS(357),
    [aux_sym_user_token1] = ACTIONS(357),
    [aux_sym_volume_token1] = ACTIONS(357),
    [aux_sym_workdir_token1] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
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
  [123] = {
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
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym_add_token1] = ACTIONS(471),
    [aux_sym_arg_token1] = ACTIONS(471),
    [aux_sym_cmd_token1] = ACTIONS(471),
    [aux_sym_copy_token1] = ACTIONS(471),
    [aux_sym_entrypoint_token1] = ACTIONS(471),
    [aux_sym_env_token1] = ACTIONS(471),
    [aux_sym_expose_token1] = ACTIONS(471),
    [aux_sym_from_token1] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(475),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(471),
    [sym__space_no_newline] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
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
  [126] = {
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
  [127] = {
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
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym_add_token1] = ACTIONS(479),
    [aux_sym_arg_token1] = ACTIONS(479),
    [aux_sym_cmd_token1] = ACTIONS(479),
    [aux_sym_copy_token1] = ACTIONS(479),
    [aux_sym_entrypoint_token1] = ACTIONS(479),
    [aux_sym_env_token1] = ACTIONS(479),
    [aux_sym_expose_token1] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [aux_sym_from_token1] = ACTIONS(479),
    [aux_sym_healthcheck_token1] = ACTIONS(479),
    [aux_sym_label_token1] = ACTIONS(479),
    [aux_sym_maintainer_token1] = ACTIONS(479),
    [aux_sym_onbuild_token1] = ACTIONS(479),
    [aux_sym_run_token1] = ACTIONS(479),
    [aux_sym_shell_token1] = ACTIONS(479),
    [aux_sym_stopsignal_token1] = ACTIONS(479),
    [aux_sym_user_token1] = ACTIONS(479),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [aux_sym_volume_token1] = ACTIONS(479),
    [aux_sym_workdir_token1] = ACTIONS(479),
    [aux_sym__port_part_token1] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
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
  [130] = {
    [aux_sym__anything] = STATE(130),
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
    [aux_sym__anything_token1] = ACTIONS(483),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym__space_no_newline] = ACTIONS(486),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [aux_sym__labels] = STATE(133),
    [sym_label_pair] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(488),
    [aux_sym_arg_token1] = ACTIONS(488),
    [aux_sym_cmd_token1] = ACTIONS(488),
    [aux_sym_copy_token1] = ACTIONS(488),
    [aux_sym_entrypoint_token1] = ACTIONS(488),
    [aux_sym_env_token1] = ACTIONS(488),
    [aux_sym_expose_token1] = ACTIONS(488),
    [aux_sym_from_token1] = ACTIONS(488),
    [aux_sym_healthcheck_token1] = ACTIONS(488),
    [aux_sym_label_token1] = ACTIONS(488),
    [aux_sym_maintainer_token1] = ACTIONS(488),
    [aux_sym_onbuild_token1] = ACTIONS(488),
    [aux_sym_run_token1] = ACTIONS(488),
    [aux_sym_shell_token1] = ACTIONS(488),
    [aux_sym_stopsignal_token1] = ACTIONS(488),
    [aux_sym_user_token1] = ACTIONS(488),
    [aux_sym_volume_token1] = ACTIONS(488),
    [aux_sym_workdir_token1] = ACTIONS(488),
    [sym_label_key] = ACTIONS(490),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(488),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_add_token1] = ACTIONS(492),
    [aux_sym_arg_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_copy_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_env_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [aux_sym_healthcheck_token1] = ACTIONS(492),
    [aux_sym_label_token1] = ACTIONS(492),
    [aux_sym_maintainer_token1] = ACTIONS(492),
    [aux_sym_onbuild_token1] = ACTIONS(492),
    [aux_sym_run_token1] = ACTIONS(492),
    [aux_sym_shell_token1] = ACTIONS(492),
    [aux_sym_stopsignal_token1] = ACTIONS(492),
    [aux_sym_user_token1] = ACTIONS(492),
    [anon_sym_DOLLAR] = ACTIONS(492),
    [aux_sym_volume_token1] = ACTIONS(492),
    [aux_sym_workdir_token1] = ACTIONS(492),
    [aux_sym__port_part_token1] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [aux_sym__labels] = STATE(133),
    [sym_label_pair] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(494),
    [aux_sym_add_token1] = ACTIONS(494),
    [aux_sym_arg_token1] = ACTIONS(494),
    [aux_sym_cmd_token1] = ACTIONS(494),
    [aux_sym_copy_token1] = ACTIONS(494),
    [aux_sym_entrypoint_token1] = ACTIONS(494),
    [aux_sym_env_token1] = ACTIONS(494),
    [aux_sym_expose_token1] = ACTIONS(494),
    [aux_sym_from_token1] = ACTIONS(494),
    [aux_sym_healthcheck_token1] = ACTIONS(494),
    [aux_sym_label_token1] = ACTIONS(494),
    [aux_sym_maintainer_token1] = ACTIONS(494),
    [aux_sym_onbuild_token1] = ACTIONS(494),
    [aux_sym_run_token1] = ACTIONS(494),
    [aux_sym_shell_token1] = ACTIONS(494),
    [aux_sym_stopsignal_token1] = ACTIONS(494),
    [aux_sym_user_token1] = ACTIONS(494),
    [aux_sym_volume_token1] = ACTIONS(494),
    [aux_sym_workdir_token1] = ACTIONS(494),
    [sym_label_key] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(494),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
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
    [anon_sym_DOLLAR] = ACTIONS(301),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(306),
    [aux_sym_path_token2] = ACTIONS(306),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
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
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_env_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(157),
    [aux_sym_label_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_onbuild_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
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
    [aux_sym__anything] = STATE(138),
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
    [aux_sym__anything_token1] = ACTIONS(505),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_add_token1] = ACTIONS(463),
    [aux_sym_arg_token1] = ACTIONS(463),
    [aux_sym_cmd_token1] = ACTIONS(463),
    [aux_sym_copy_token1] = ACTIONS(463),
    [aux_sym_entrypoint_token1] = ACTIONS(463),
    [aux_sym_env_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
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
  [140] = {
    [aux_sym__anything] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(508),
    [aux_sym_add_token1] = ACTIONS(508),
    [aux_sym_arg_token1] = ACTIONS(508),
    [aux_sym_cmd_token1] = ACTIONS(508),
    [aux_sym_copy_token1] = ACTIONS(508),
    [aux_sym_entrypoint_token1] = ACTIONS(508),
    [aux_sym_env_token1] = ACTIONS(508),
    [aux_sym_expose_token1] = ACTIONS(508),
    [aux_sym_from_token1] = ACTIONS(508),
    [aux_sym_healthcheck_token1] = ACTIONS(508),
    [aux_sym_label_token1] = ACTIONS(508),
    [aux_sym_maintainer_token1] = ACTIONS(508),
    [aux_sym_onbuild_token1] = ACTIONS(508),
    [aux_sym_run_token1] = ACTIONS(508),
    [aux_sym_shell_token1] = ACTIONS(508),
    [aux_sym_stopsignal_token1] = ACTIONS(508),
    [aux_sym_user_token1] = ACTIONS(508),
    [aux_sym_volume_token1] = ACTIONS(508),
    [aux_sym_workdir_token1] = ACTIONS(508),
    [aux_sym__anything_token1] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(508),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [aux_sym_add_token1] = ACTIONS(512),
    [aux_sym_arg_token1] = ACTIONS(512),
    [anon_sym_EQ] = ACTIONS(514),
    [aux_sym_cmd_token1] = ACTIONS(512),
    [aux_sym_copy_token1] = ACTIONS(512),
    [aux_sym_entrypoint_token1] = ACTIONS(512),
    [aux_sym_env_token1] = ACTIONS(512),
    [aux_sym_expose_token1] = ACTIONS(512),
    [aux_sym_from_token1] = ACTIONS(512),
    [aux_sym_healthcheck_token1] = ACTIONS(512),
    [aux_sym_label_token1] = ACTIONS(512),
    [aux_sym_maintainer_token1] = ACTIONS(512),
    [aux_sym_onbuild_token1] = ACTIONS(512),
    [aux_sym_run_token1] = ACTIONS(512),
    [aux_sym_shell_token1] = ACTIONS(512),
    [aux_sym_stopsignal_token1] = ACTIONS(512),
    [aux_sym_user_token1] = ACTIONS(512),
    [aux_sym_volume_token1] = ACTIONS(512),
    [aux_sym_workdir_token1] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(512),
    [sym__space_no_newline] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [aux_sym__env_pairs_repeat1] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(518),
    [aux_sym_add_token1] = ACTIONS(518),
    [aux_sym_arg_token1] = ACTIONS(518),
    [aux_sym_cmd_token1] = ACTIONS(518),
    [aux_sym_copy_token1] = ACTIONS(518),
    [aux_sym_entrypoint_token1] = ACTIONS(518),
    [aux_sym_env_token1] = ACTIONS(518),
    [aux_sym_expose_token1] = ACTIONS(518),
    [aux_sym_from_token1] = ACTIONS(518),
    [aux_sym_healthcheck_token1] = ACTIONS(518),
    [aux_sym_label_token1] = ACTIONS(518),
    [aux_sym_maintainer_token1] = ACTIONS(518),
    [aux_sym_onbuild_token1] = ACTIONS(518),
    [aux_sym_run_token1] = ACTIONS(518),
    [aux_sym_shell_token1] = ACTIONS(518),
    [aux_sym_stopsignal_token1] = ACTIONS(518),
    [aux_sym_user_token1] = ACTIONS(518),
    [aux_sym_volume_token1] = ACTIONS(518),
    [aux_sym_workdir_token1] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(518),
    [sym__space_no_newline] = ACTIONS(520),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
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
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [aux_sym_add_token1] = ACTIONS(526),
    [aux_sym_arg_token1] = ACTIONS(526),
    [aux_sym_cmd_token1] = ACTIONS(526),
    [aux_sym_copy_token1] = ACTIONS(526),
    [aux_sym_entrypoint_token1] = ACTIONS(526),
    [aux_sym_env_token1] = ACTIONS(526),
    [aux_sym_expose_token1] = ACTIONS(526),
    [aux_sym_from_token1] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(528),
    [aux_sym_healthcheck_token1] = ACTIONS(526),
    [aux_sym_label_token1] = ACTIONS(526),
    [aux_sym_maintainer_token1] = ACTIONS(526),
    [aux_sym_onbuild_token1] = ACTIONS(526),
    [aux_sym_run_token1] = ACTIONS(526),
    [aux_sym_shell_token1] = ACTIONS(526),
    [aux_sym_stopsignal_token1] = ACTIONS(526),
    [aux_sym_user_token1] = ACTIONS(526),
    [aux_sym_volume_token1] = ACTIONS(526),
    [aux_sym_workdir_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(526),
    [sym__space_no_newline] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym_add_token1] = ACTIONS(441),
    [aux_sym_arg_token1] = ACTIONS(441),
    [aux_sym_cmd_token1] = ACTIONS(441),
    [aux_sym_copy_token1] = ACTIONS(441),
    [aux_sym_entrypoint_token1] = ACTIONS(441),
    [aux_sym_env_token1] = ACTIONS(441),
    [aux_sym_expose_token1] = ACTIONS(441),
    [aux_sym_from_token1] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(445),
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
    [sym__space_no_newline] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
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
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(291),
    [aux_sym_arg_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_copy_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_env_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
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
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_add_token1] = ACTIONS(532),
    [aux_sym_arg_token1] = ACTIONS(532),
    [aux_sym_cmd_token1] = ACTIONS(532),
    [aux_sym_copy_token1] = ACTIONS(532),
    [aux_sym_entrypoint_token1] = ACTIONS(532),
    [aux_sym_env_token1] = ACTIONS(532),
    [aux_sym_expose_token1] = ACTIONS(532),
    [aux_sym_from_token1] = ACTIONS(532),
    [anon_sym_AT] = ACTIONS(532),
    [aux_sym_healthcheck_token1] = ACTIONS(532),
    [aux_sym_label_token1] = ACTIONS(532),
    [aux_sym_maintainer_token1] = ACTIONS(532),
    [aux_sym_onbuild_token1] = ACTIONS(532),
    [aux_sym_run_token1] = ACTIONS(532),
    [aux_sym_shell_token1] = ACTIONS(532),
    [aux_sym_stopsignal_token1] = ACTIONS(532),
    [aux_sym_user_token1] = ACTIONS(532),
    [aux_sym_volume_token1] = ACTIONS(532),
    [aux_sym_workdir_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(532),
    [sym__space_no_newline] = ACTIONS(534),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [aux_sym__anything] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_add_token1] = ACTIONS(536),
    [aux_sym_arg_token1] = ACTIONS(536),
    [aux_sym_cmd_token1] = ACTIONS(536),
    [aux_sym_copy_token1] = ACTIONS(536),
    [aux_sym_entrypoint_token1] = ACTIONS(536),
    [aux_sym_env_token1] = ACTIONS(536),
    [aux_sym_expose_token1] = ACTIONS(536),
    [aux_sym_from_token1] = ACTIONS(536),
    [aux_sym_healthcheck_token1] = ACTIONS(536),
    [aux_sym_label_token1] = ACTIONS(536),
    [aux_sym_maintainer_token1] = ACTIONS(536),
    [aux_sym_onbuild_token1] = ACTIONS(536),
    [aux_sym_run_token1] = ACTIONS(536),
    [aux_sym_shell_token1] = ACTIONS(536),
    [aux_sym_stopsignal_token1] = ACTIONS(536),
    [aux_sym_user_token1] = ACTIONS(536),
    [aux_sym_volume_token1] = ACTIONS(536),
    [aux_sym_workdir_token1] = ACTIONS(536),
    [aux_sym__anything_token1] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(536),
    [sym_comment] = ACTIONS(540),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [aux_sym__env_pairs_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(542),
    [aux_sym_add_token1] = ACTIONS(542),
    [aux_sym_arg_token1] = ACTIONS(542),
    [aux_sym_cmd_token1] = ACTIONS(542),
    [aux_sym_copy_token1] = ACTIONS(542),
    [aux_sym_entrypoint_token1] = ACTIONS(542),
    [aux_sym_env_token1] = ACTIONS(542),
    [aux_sym_expose_token1] = ACTIONS(542),
    [aux_sym_from_token1] = ACTIONS(542),
    [aux_sym_healthcheck_token1] = ACTIONS(542),
    [aux_sym_label_token1] = ACTIONS(542),
    [aux_sym_maintainer_token1] = ACTIONS(542),
    [aux_sym_onbuild_token1] = ACTIONS(542),
    [aux_sym_run_token1] = ACTIONS(542),
    [aux_sym_shell_token1] = ACTIONS(542),
    [aux_sym_stopsignal_token1] = ACTIONS(542),
    [aux_sym_user_token1] = ACTIONS(542),
    [aux_sym_volume_token1] = ACTIONS(542),
    [aux_sym_workdir_token1] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(542),
    [sym__space_no_newline] = ACTIONS(520),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [aux_sym__anything] = STATE(151),
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
    [aux_sym__anything_token1] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym_comment] = ACTIONS(481),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [aux_sym_add_token1] = ACTIONS(547),
    [aux_sym_arg_token1] = ACTIONS(547),
    [aux_sym_cmd_token1] = ACTIONS(547),
    [aux_sym_copy_token1] = ACTIONS(547),
    [aux_sym_entrypoint_token1] = ACTIONS(547),
    [aux_sym_env_token1] = ACTIONS(547),
    [aux_sym_expose_token1] = ACTIONS(547),
    [aux_sym_from_token1] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(547),
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
  [153] = {
    [aux_sym__env_pairs_repeat1] = STATE(153),
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
    [sym__space_no_newline] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
    [sym__space_no_newline] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [aux_sym_add_token1] = ACTIONS(526),
    [aux_sym_arg_token1] = ACTIONS(526),
    [aux_sym_cmd_token1] = ACTIONS(526),
    [aux_sym_copy_token1] = ACTIONS(526),
    [aux_sym_entrypoint_token1] = ACTIONS(526),
    [aux_sym_env_token1] = ACTIONS(526),
    [aux_sym_expose_token1] = ACTIONS(526),
    [aux_sym_from_token1] = ACTIONS(526),
    [aux_sym_healthcheck_token1] = ACTIONS(526),
    [aux_sym_label_token1] = ACTIONS(526),
    [aux_sym_maintainer_token1] = ACTIONS(526),
    [aux_sym_onbuild_token1] = ACTIONS(526),
    [aux_sym_run_token1] = ACTIONS(526),
    [aux_sym_shell_token1] = ACTIONS(526),
    [aux_sym_stopsignal_token1] = ACTIONS(526),
    [aux_sym_user_token1] = ACTIONS(526),
    [aux_sym_volume_token1] = ACTIONS(526),
    [aux_sym_workdir_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(526),
    [sym__space_no_newline] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_add_token1] = ACTIONS(463),
    [aux_sym_arg_token1] = ACTIONS(463),
    [aux_sym_cmd_token1] = ACTIONS(463),
    [aux_sym_copy_token1] = ACTIONS(463),
    [aux_sym_entrypoint_token1] = ACTIONS(463),
    [aux_sym_env_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
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
  [157] = {
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
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [aux_sym_add_token1] = ACTIONS(556),
    [aux_sym_arg_token1] = ACTIONS(556),
    [anon_sym_EQ] = ACTIONS(558),
    [aux_sym_cmd_token1] = ACTIONS(556),
    [aux_sym_copy_token1] = ACTIONS(556),
    [aux_sym_entrypoint_token1] = ACTIONS(556),
    [aux_sym_env_token1] = ACTIONS(556),
    [aux_sym_expose_token1] = ACTIONS(556),
    [aux_sym_from_token1] = ACTIONS(556),
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
  [159] = {
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
  [160] = {
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
  [161] = {
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
  [162] = {
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
    [sym_label_key] = ACTIONS(566),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(564),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
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
    [sym_label_key] = ACTIONS(570),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(568),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(333),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
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
  [166] = {
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
  [167] = {
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
    [sym__space_no_newline] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
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
    [sym__space_no_newline] = ACTIONS(580),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [aux_sym_add_token1] = ACTIONS(582),
    [aux_sym_arg_token1] = ACTIONS(582),
    [aux_sym_cmd_token1] = ACTIONS(582),
    [aux_sym_copy_token1] = ACTIONS(582),
    [aux_sym_entrypoint_token1] = ACTIONS(582),
    [aux_sym_env_token1] = ACTIONS(582),
    [aux_sym_expose_token1] = ACTIONS(582),
    [aux_sym_from_token1] = ACTIONS(582),
    [aux_sym_healthcheck_token1] = ACTIONS(582),
    [aux_sym_label_token1] = ACTIONS(582),
    [aux_sym_maintainer_token1] = ACTIONS(582),
    [aux_sym_onbuild_token1] = ACTIONS(582),
    [aux_sym_run_token1] = ACTIONS(582),
    [aux_sym_shell_token1] = ACTIONS(582),
    [aux_sym_stopsignal_token1] = ACTIONS(582),
    [aux_sym_user_token1] = ACTIONS(582),
    [aux_sym_volume_token1] = ACTIONS(582),
    [aux_sym_workdir_token1] = ACTIONS(582),
    [sym_label_key] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(582),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [aux_sym_add_token1] = ACTIONS(586),
    [aux_sym_arg_token1] = ACTIONS(586),
    [aux_sym_cmd_token1] = ACTIONS(586),
    [aux_sym_copy_token1] = ACTIONS(586),
    [aux_sym_entrypoint_token1] = ACTIONS(586),
    [aux_sym_env_token1] = ACTIONS(586),
    [aux_sym_expose_token1] = ACTIONS(586),
    [aux_sym_from_token1] = ACTIONS(586),
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
    [sym__space_no_newline] = ACTIONS(588),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(590),
    [aux_sym_add_token1] = ACTIONS(590),
    [aux_sym_arg_token1] = ACTIONS(590),
    [aux_sym_cmd_token1] = ACTIONS(590),
    [aux_sym_copy_token1] = ACTIONS(590),
    [aux_sym_entrypoint_token1] = ACTIONS(590),
    [aux_sym_env_token1] = ACTIONS(590),
    [aux_sym_expose_token1] = ACTIONS(590),
    [aux_sym_from_token1] = ACTIONS(590),
    [aux_sym_healthcheck_token1] = ACTIONS(590),
    [aux_sym_label_token1] = ACTIONS(590),
    [aux_sym_maintainer_token1] = ACTIONS(590),
    [aux_sym_onbuild_token1] = ACTIONS(590),
    [aux_sym_run_token1] = ACTIONS(590),
    [aux_sym_shell_token1] = ACTIONS(590),
    [aux_sym_stopsignal_token1] = ACTIONS(590),
    [aux_sym_user_token1] = ACTIONS(590),
    [aux_sym_volume_token1] = ACTIONS(590),
    [aux_sym_workdir_token1] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(590),
    [sym__space_no_newline] = ACTIONS(592),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [aux_sym_add_token1] = ACTIONS(594),
    [aux_sym_arg_token1] = ACTIONS(594),
    [aux_sym_cmd_token1] = ACTIONS(594),
    [aux_sym_copy_token1] = ACTIONS(594),
    [aux_sym_entrypoint_token1] = ACTIONS(594),
    [aux_sym_env_token1] = ACTIONS(594),
    [aux_sym_expose_token1] = ACTIONS(594),
    [aux_sym_from_token1] = ACTIONS(594),
    [aux_sym_healthcheck_token1] = ACTIONS(594),
    [aux_sym_label_token1] = ACTIONS(594),
    [aux_sym_maintainer_token1] = ACTIONS(594),
    [aux_sym_onbuild_token1] = ACTIONS(594),
    [aux_sym_run_token1] = ACTIONS(594),
    [aux_sym_shell_token1] = ACTIONS(594),
    [aux_sym_stopsignal_token1] = ACTIONS(594),
    [aux_sym_user_token1] = ACTIONS(594),
    [aux_sym_volume_token1] = ACTIONS(594),
    [aux_sym_workdir_token1] = ACTIONS(594),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(594),
    [sym__space_no_newline] = ACTIONS(596),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [aux_sym_add_token1] = ACTIONS(598),
    [aux_sym_arg_token1] = ACTIONS(598),
    [aux_sym_cmd_token1] = ACTIONS(598),
    [aux_sym_copy_token1] = ACTIONS(598),
    [aux_sym_entrypoint_token1] = ACTIONS(598),
    [aux_sym_env_token1] = ACTIONS(598),
    [aux_sym_expose_token1] = ACTIONS(598),
    [aux_sym_from_token1] = ACTIONS(598),
    [anon_sym_COLON] = ACTIONS(598),
    [aux_sym_healthcheck_token1] = ACTIONS(598),
    [aux_sym_label_token1] = ACTIONS(598),
    [aux_sym_maintainer_token1] = ACTIONS(598),
    [aux_sym_onbuild_token1] = ACTIONS(598),
    [aux_sym_run_token1] = ACTIONS(598),
    [aux_sym_shell_token1] = ACTIONS(598),
    [aux_sym_stopsignal_token1] = ACTIONS(598),
    [aux_sym_user_token1] = ACTIONS(598),
    [aux_sym_volume_token1] = ACTIONS(598),
    [aux_sym_workdir_token1] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(598),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(600),
    [sym__space_no_newline] = ACTIONS(602),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [aux_sym_add_token1] = ACTIONS(604),
    [aux_sym_arg_token1] = ACTIONS(604),
    [aux_sym_cmd_token1] = ACTIONS(604),
    [aux_sym_copy_token1] = ACTIONS(604),
    [aux_sym_entrypoint_token1] = ACTIONS(604),
    [aux_sym_env_token1] = ACTIONS(604),
    [aux_sym_expose_token1] = ACTIONS(604),
    [aux_sym_from_token1] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(604),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [aux_sym_add_token1] = ACTIONS(606),
    [aux_sym_arg_token1] = ACTIONS(606),
    [aux_sym_cmd_token1] = ACTIONS(606),
    [aux_sym_copy_token1] = ACTIONS(606),
    [aux_sym_entrypoint_token1] = ACTIONS(606),
    [aux_sym_env_token1] = ACTIONS(606),
    [aux_sym_expose_token1] = ACTIONS(606),
    [aux_sym_from_token1] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(608),
    [aux_sym_healthcheck_token1] = ACTIONS(606),
    [aux_sym_label_token1] = ACTIONS(606),
    [aux_sym_maintainer_token1] = ACTIONS(606),
    [aux_sym_onbuild_token1] = ACTIONS(606),
    [aux_sym_run_token1] = ACTIONS(606),
    [aux_sym_shell_token1] = ACTIONS(606),
    [aux_sym_stopsignal_token1] = ACTIONS(606),
    [aux_sym_user_token1] = ACTIONS(606),
    [aux_sym_volume_token1] = ACTIONS(606),
    [aux_sym_workdir_token1] = ACTIONS(606),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(606),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [aux_sym_add_token1] = ACTIONS(606),
    [aux_sym_arg_token1] = ACTIONS(606),
    [aux_sym_cmd_token1] = ACTIONS(606),
    [aux_sym_copy_token1] = ACTIONS(606),
    [aux_sym_entrypoint_token1] = ACTIONS(606),
    [aux_sym_env_token1] = ACTIONS(606),
    [aux_sym_expose_token1] = ACTIONS(606),
    [aux_sym_from_token1] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(610),
    [aux_sym_healthcheck_token1] = ACTIONS(606),
    [aux_sym_label_token1] = ACTIONS(606),
    [aux_sym_maintainer_token1] = ACTIONS(606),
    [aux_sym_onbuild_token1] = ACTIONS(606),
    [aux_sym_run_token1] = ACTIONS(606),
    [aux_sym_shell_token1] = ACTIONS(606),
    [aux_sym_stopsignal_token1] = ACTIONS(606),
    [aux_sym_user_token1] = ACTIONS(606),
    [aux_sym_volume_token1] = ACTIONS(606),
    [aux_sym_workdir_token1] = ACTIONS(606),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(606),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
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
  [179] = {
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
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(311),
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
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
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
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(347),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
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
  [184] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(600),
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
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_add_token1] = ACTIONS(382),
    [aux_sym_arg_token1] = ACTIONS(382),
    [aux_sym_cmd_token1] = ACTIONS(382),
    [aux_sym_copy_token1] = ACTIONS(382),
    [aux_sym_entrypoint_token1] = ACTIONS(382),
    [aux_sym_env_token1] = ACTIONS(382),
    [aux_sym_expose_token1] = ACTIONS(382),
    [aux_sym_from_token1] = ACTIONS(382),
    [aux_sym_healthcheck_token1] = ACTIONS(382),
    [aux_sym_label_token1] = ACTIONS(382),
    [aux_sym_maintainer_token1] = ACTIONS(382),
    [aux_sym_onbuild_token1] = ACTIONS(382),
    [aux_sym_run_token1] = ACTIONS(382),
    [aux_sym_shell_token1] = ACTIONS(382),
    [aux_sym_stopsignal_token1] = ACTIONS(382),
    [aux_sym_user_token1] = ACTIONS(382),
    [aux_sym_volume_token1] = ACTIONS(382),
    [aux_sym_workdir_token1] = ACTIONS(382),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(382),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [192] = {
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
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [aux_sym_add_token1] = ACTIONS(526),
    [aux_sym_arg_token1] = ACTIONS(526),
    [aux_sym_cmd_token1] = ACTIONS(526),
    [aux_sym_copy_token1] = ACTIONS(526),
    [aux_sym_entrypoint_token1] = ACTIONS(526),
    [aux_sym_env_token1] = ACTIONS(526),
    [aux_sym_expose_token1] = ACTIONS(526),
    [aux_sym_from_token1] = ACTIONS(526),
    [aux_sym_healthcheck_token1] = ACTIONS(526),
    [aux_sym_label_token1] = ACTIONS(526),
    [aux_sym_maintainer_token1] = ACTIONS(526),
    [aux_sym_onbuild_token1] = ACTIONS(526),
    [aux_sym_run_token1] = ACTIONS(526),
    [aux_sym_shell_token1] = ACTIONS(526),
    [aux_sym_stopsignal_token1] = ACTIONS(526),
    [aux_sym_user_token1] = ACTIONS(526),
    [aux_sym_volume_token1] = ACTIONS(526),
    [aux_sym_workdir_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [194] = {
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
  [195] = {
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
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [aux_sym_add_token1] = ACTIONS(404),
    [aux_sym_arg_token1] = ACTIONS(404),
    [aux_sym_cmd_token1] = ACTIONS(404),
    [aux_sym_copy_token1] = ACTIONS(404),
    [aux_sym_entrypoint_token1] = ACTIONS(404),
    [aux_sym_env_token1] = ACTIONS(404),
    [aux_sym_expose_token1] = ACTIONS(404),
    [aux_sym_from_token1] = ACTIONS(404),
    [aux_sym_healthcheck_token1] = ACTIONS(404),
    [aux_sym_label_token1] = ACTIONS(404),
    [aux_sym_maintainer_token1] = ACTIONS(404),
    [aux_sym_onbuild_token1] = ACTIONS(404),
    [aux_sym_run_token1] = ACTIONS(404),
    [aux_sym_shell_token1] = ACTIONS(404),
    [aux_sym_stopsignal_token1] = ACTIONS(404),
    [aux_sym_user_token1] = ACTIONS(404),
    [aux_sym_volume_token1] = ACTIONS(404),
    [aux_sym_workdir_token1] = ACTIONS(404),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(404),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
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
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(299),
    [aux_sym_arg_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_copy_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_env_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [aux_sym_from_token1] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_user_token1] = ACTIONS(297),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(367),
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
    [aux_sym_volume_token1] = ACTIONS(367),
    [aux_sym_workdir_token1] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [208] = {
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
  [209] = {
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
  [210] = {
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
  [211] = {
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
  [212] = {
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
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [aux_sym_add_token1] = ACTIONS(586),
    [aux_sym_arg_token1] = ACTIONS(586),
    [aux_sym_cmd_token1] = ACTIONS(586),
    [aux_sym_copy_token1] = ACTIONS(586),
    [aux_sym_entrypoint_token1] = ACTIONS(586),
    [aux_sym_env_token1] = ACTIONS(586),
    [aux_sym_expose_token1] = ACTIONS(586),
    [aux_sym_from_token1] = ACTIONS(586),
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
  [214] = {
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
  [215] = {
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
  [216] = {
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
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [aux_sym_add_token1] = ACTIONS(662),
    [aux_sym_arg_token1] = ACTIONS(662),
    [aux_sym_cmd_token1] = ACTIONS(662),
    [aux_sym_copy_token1] = ACTIONS(662),
    [aux_sym_entrypoint_token1] = ACTIONS(662),
    [aux_sym_env_token1] = ACTIONS(662),
    [aux_sym_expose_token1] = ACTIONS(662),
    [aux_sym_from_token1] = ACTIONS(662),
    [aux_sym_healthcheck_token1] = ACTIONS(662),
    [aux_sym_label_token1] = ACTIONS(662),
    [aux_sym_maintainer_token1] = ACTIONS(662),
    [aux_sym_onbuild_token1] = ACTIONS(662),
    [aux_sym_run_token1] = ACTIONS(662),
    [aux_sym_shell_token1] = ACTIONS(662),
    [aux_sym_stopsignal_token1] = ACTIONS(662),
    [aux_sym_user_token1] = ACTIONS(662),
    [aux_sym_volume_token1] = ACTIONS(662),
    [aux_sym_workdir_token1] = ACTIONS(662),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(662),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [218] = {
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
  [219] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [aux_sym_add_token1] = ACTIONS(664),
    [aux_sym_arg_token1] = ACTIONS(664),
    [aux_sym_cmd_token1] = ACTIONS(664),
    [aux_sym_copy_token1] = ACTIONS(664),
    [aux_sym_entrypoint_token1] = ACTIONS(664),
    [aux_sym_env_token1] = ACTIONS(664),
    [aux_sym_expose_token1] = ACTIONS(664),
    [aux_sym_from_token1] = ACTIONS(664),
    [aux_sym_healthcheck_token1] = ACTIONS(664),
    [aux_sym_label_token1] = ACTIONS(664),
    [aux_sym_maintainer_token1] = ACTIONS(664),
    [aux_sym_onbuild_token1] = ACTIONS(664),
    [aux_sym_run_token1] = ACTIONS(664),
    [aux_sym_shell_token1] = ACTIONS(664),
    [aux_sym_stopsignal_token1] = ACTIONS(664),
    [aux_sym_user_token1] = ACTIONS(664),
    [aux_sym_volume_token1] = ACTIONS(664),
    [aux_sym_workdir_token1] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(664),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [221] = {
    [sym_repository] = STATE(238),
    [sym__repository_start] = STATE(233),
    [sym_image] = STATE(119),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(666),
    [anon_sym_DOLLAR] = ACTIONS(668),
    [aux_sym_platform_token1] = ACTIONS(670),
    [aux_sym__repository_start_token1] = ACTIONS(668),
    [aux_sym__repository_start_token4] = ACTIONS(672),
    [aux_sym__repository_start_token6] = ACTIONS(672),
    [aux_sym__repository_start_token8] = ACTIONS(674),
    [aux_sym__repository_start_token10] = ACTIONS(674),
    [aux_sym__repository_start_token12] = ACTIONS(676),
    [aux_sym__repository_start_token14] = ACTIONS(676),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym__hc_interval] = STATE(225),
    [sym__hc_timeout] = STATE(225),
    [sym__hc_start_period] = STATE(225),
    [sym__hc_retries] = STATE(225),
    [sym__hc_options] = STATE(225),
    [sym__hc_command] = STATE(197),
    [aux_sym_healthcheck_repeat1] = STATE(225),
    [sym_hc_none] = ACTIONS(678),
    [anon_sym_DASH_DASHinterval] = ACTIONS(680),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(682),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(684),
    [anon_sym_DASH_DASHretries] = ACTIONS(686),
    [aux_sym__hc_command_token1] = ACTIONS(688),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [223] = {
    [sym_repository] = STATE(252),
    [sym__repository_start] = STATE(233),
    [sym_image] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(668),
    [aux_sym_platform_token1] = ACTIONS(670),
    [aux_sym__repository_start_token1] = ACTIONS(668),
    [aux_sym__repository_start_token4] = ACTIONS(672),
    [aux_sym__repository_start_token6] = ACTIONS(672),
    [aux_sym__repository_start_token8] = ACTIONS(674),
    [aux_sym__repository_start_token10] = ACTIONS(674),
    [aux_sym__repository_start_token12] = ACTIONS(676),
    [aux_sym__repository_start_token14] = ACTIONS(676),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym_mapped_no_lhs] = STATE(215),
    [sym__port] = STATE(107),
    [sym_port] = STATE(107),
    [sym_port_range] = STATE(107),
    [sym__port_part] = STATE(84),
    [aux_sym_expose_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [225] = {
    [sym__hc_interval] = STATE(235),
    [sym__hc_timeout] = STATE(235),
    [sym__hc_start_period] = STATE(235),
    [sym__hc_retries] = STATE(235),
    [sym__hc_options] = STATE(235),
    [sym__hc_command] = STATE(199),
    [aux_sym_healthcheck_repeat1] = STATE(235),
    [anon_sym_DASH_DASHinterval] = ACTIONS(680),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(682),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(684),
    [anon_sym_DASH_DASHretries] = ACTIONS(686),
    [aux_sym__hc_command_token1] = ACTIONS(688),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [226] = {
    [sym_digest] = STATE(170),
    [anon_sym_sha256_COLON] = ACTIONS(692),
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
  [227] = {
    [sym_digest] = STATE(174),
    [anon_sym_sha256_COLON] = ACTIONS(704),
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
  [228] = {
    [sym_digest] = STATE(155),
    [anon_sym_sha256_COLON] = ACTIONS(706),
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
  [229] = {
    [sym_digest] = STATE(160),
    [anon_sym_sha256_COLON] = ACTIONS(708),
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
  [230] = {
    [sym_digest] = STATE(156),
    [anon_sym_sha256_COLON] = ACTIONS(710),
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
  [231] = {
    [sym_digest] = STATE(167),
    [anon_sym_sha256_COLON] = ACTIONS(712),
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
  [232] = {
    [sym__repository_continued] = STATE(232),
    [aux_sym_repository_repeat1] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(714),
    [aux_sym_platform_token1] = ACTIONS(717),
    [aux_sym__repository_start_token1] = ACTIONS(714),
    [aux_sym__repository_start_token4] = ACTIONS(720),
    [aux_sym__repository_start_token6] = ACTIONS(720),
    [aux_sym__repository_start_token8] = ACTIONS(723),
    [aux_sym__repository_start_token10] = ACTIONS(723),
    [aux_sym__repository_start_token12] = ACTIONS(726),
    [aux_sym__repository_start_token14] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym__repository_continued] = STATE(234),
    [aux_sym_repository_repeat1] = STATE(234),
    [anon_sym_DOLLAR] = ACTIONS(729),
    [aux_sym_platform_token1] = ACTIONS(732),
    [aux_sym__repository_start_token1] = ACTIONS(729),
    [aux_sym__repository_start_token4] = ACTIONS(735),
    [aux_sym__repository_start_token6] = ACTIONS(735),
    [aux_sym__repository_start_token8] = ACTIONS(738),
    [aux_sym__repository_start_token10] = ACTIONS(738),
    [aux_sym__repository_start_token12] = ACTIONS(741),
    [aux_sym__repository_start_token14] = ACTIONS(741),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym__repository_continued] = STATE(232),
    [aux_sym_repository_repeat1] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(744),
    [aux_sym_platform_token1] = ACTIONS(747),
    [aux_sym__repository_start_token1] = ACTIONS(744),
    [aux_sym__repository_start_token4] = ACTIONS(750),
    [aux_sym__repository_start_token6] = ACTIONS(750),
    [aux_sym__repository_start_token8] = ACTIONS(753),
    [aux_sym__repository_start_token10] = ACTIONS(753),
    [aux_sym__repository_start_token12] = ACTIONS(756),
    [aux_sym__repository_start_token14] = ACTIONS(756),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym__hc_interval] = STATE(235),
    [sym__hc_timeout] = STATE(235),
    [sym__hc_start_period] = STATE(235),
    [sym__hc_retries] = STATE(235),
    [sym__hc_options] = STATE(235),
    [aux_sym_healthcheck_repeat1] = STATE(235),
    [anon_sym_DASH_DASHinterval] = ACTIONS(759),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(762),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(765),
    [anon_sym_DASH_DASHretries] = ACTIONS(768),
    [aux_sym__hc_command_token1] = ACTIONS(771),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [236] = {
    [sym_as_name] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_tag] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(783),
    [aux_sym_platform_token1] = ACTIONS(785),
    [aux_sym__repository_start_token1] = ACTIONS(783),
    [aux_sym__repository_start_token4] = ACTIONS(787),
    [aux_sym__repository_start_token6] = ACTIONS(787),
    [aux_sym__repository_start_token8] = ACTIONS(789),
    [aux_sym__repository_start_token10] = ACTIONS(789),
    [aux_sym__repository_start_token12] = ACTIONS(791),
    [aux_sym__repository_start_token14] = ACTIONS(791),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_image] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [aux_sym_platform_token1] = ACTIONS(795),
    [aux_sym__repository_start_token1] = ACTIONS(793),
    [aux_sym__repository_start_token4] = ACTIONS(797),
    [aux_sym__repository_start_token6] = ACTIONS(797),
    [aux_sym__repository_start_token8] = ACTIONS(799),
    [aux_sym__repository_start_token10] = ACTIONS(799),
    [aux_sym__repository_start_token12] = ACTIONS(801),
    [aux_sym__repository_start_token14] = ACTIONS(801),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_as_name] = STATE(193),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_as_name] = STATE(204),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_tag] = STATE(145),
    [anon_sym_DOLLAR] = ACTIONS(783),
    [aux_sym_platform_token1] = ACTIONS(785),
    [aux_sym__repository_start_token1] = ACTIONS(783),
    [aux_sym__repository_start_token4] = ACTIONS(787),
    [aux_sym__repository_start_token6] = ACTIONS(787),
    [aux_sym__repository_start_token8] = ACTIONS(789),
    [aux_sym__repository_start_token10] = ACTIONS(789),
    [aux_sym__repository_start_token12] = ACTIONS(791),
    [aux_sym__repository_start_token14] = ACTIONS(791),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_digest] = STATE(161),
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
  [243] = {
    [sym_as_name] = STATE(216),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_as_name] = STATE(185),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_tag] = STATE(139),
    [anon_sym_DOLLAR] = ACTIONS(783),
    [aux_sym_platform_token1] = ACTIONS(785),
    [aux_sym__repository_start_token1] = ACTIONS(783),
    [aux_sym__repository_start_token4] = ACTIONS(787),
    [aux_sym__repository_start_token6] = ACTIONS(787),
    [aux_sym__repository_start_token8] = ACTIONS(789),
    [aux_sym__repository_start_token10] = ACTIONS(789),
    [aux_sym__repository_start_token12] = ACTIONS(791),
    [aux_sym__repository_start_token14] = ACTIONS(791),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_digest] = STATE(156),
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
  [247] = {
    [sym_as_name] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_digest] = STATE(174),
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
  [249] = {
    [sym_as_name] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(783),
    [aux_sym_platform_token1] = ACTIONS(785),
    [aux_sym__repository_start_token1] = ACTIONS(783),
    [aux_sym__repository_start_token4] = ACTIONS(787),
    [aux_sym__repository_start_token6] = ACTIONS(787),
    [aux_sym__repository_start_token8] = ACTIONS(789),
    [aux_sym__repository_start_token10] = ACTIONS(789),
    [aux_sym__repository_start_token12] = ACTIONS(791),
    [aux_sym__repository_start_token14] = ACTIONS(791),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_as_name] = STATE(198),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_image] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [aux_sym_platform_token1] = ACTIONS(795),
    [aux_sym__repository_start_token1] = ACTIONS(793),
    [aux_sym__repository_start_token4] = ACTIONS(797),
    [aux_sym__repository_start_token6] = ACTIONS(797),
    [aux_sym__repository_start_token8] = ACTIONS(799),
    [aux_sym__repository_start_token10] = ACTIONS(799),
    [aux_sym__repository_start_token12] = ACTIONS(801),
    [aux_sym__repository_start_token14] = ACTIONS(801),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_as_name] = STATE(213),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_platform_token1] = ACTIONS(775),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(777),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(781),
    [aux_sym__repository_start_token14] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_digest] = STATE(170),
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
  [255] = {
    [sym_digest] = STATE(160),
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
  [256] = {
    [sym_digest] = STATE(155),
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
  [257] = {
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
  [258] = {
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
  [259] = {
    [anon_sym_DOLLAR] = ACTIONS(807),
    [aux_sym_platform_token1] = ACTIONS(809),
    [aux_sym__repository_start_token1] = ACTIONS(807),
    [aux_sym__repository_start_token4] = ACTIONS(807),
    [aux_sym__repository_start_token6] = ACTIONS(807),
    [aux_sym__repository_start_token8] = ACTIONS(807),
    [aux_sym__repository_start_token10] = ACTIONS(807),
    [aux_sym__repository_start_token12] = ACTIONS(807),
    [aux_sym__repository_start_token14] = ACTIONS(807),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
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
  [261] = {
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
  [262] = {
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
  [263] = {
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
  [264] = {
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
  [265] = {
    [anon_sym_DOLLAR] = ACTIONS(831),
    [aux_sym_platform_token1] = ACTIONS(833),
    [aux_sym__repository_start_token1] = ACTIONS(831),
    [aux_sym__repository_start_token4] = ACTIONS(831),
    [aux_sym__repository_start_token6] = ACTIONS(831),
    [aux_sym__repository_start_token8] = ACTIONS(831),
    [aux_sym__repository_start_token10] = ACTIONS(831),
    [aux_sym__repository_start_token12] = ACTIONS(831),
    [aux_sym__repository_start_token14] = ACTIONS(831),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [sym__port_spec] = STATE(487),
    [sym_mapped_port] = STATE(487),
    [sym__port] = STATE(409),
    [sym_port] = STATE(416),
    [sym_port_range] = STATE(416),
    [sym__port_part] = STATE(398),
    [anon_sym_DQUOTE] = ACTIONS(835),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym__port_part_token1] = ACTIONS(839),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
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
  [268] = {
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
    [sym__chown] = STATE(279),
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(57),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(853),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(855),
  },
  [273] = {
    [anon_sym_DOLLAR] = ACTIONS(857),
    [aux_sym_platform_token1] = ACTIONS(859),
    [aux_sym__repository_start_token1] = ACTIONS(857),
    [aux_sym__repository_start_token4] = ACTIONS(857),
    [aux_sym__repository_start_token6] = ACTIONS(857),
    [aux_sym__repository_start_token8] = ACTIONS(857),
    [aux_sym__repository_start_token10] = ACTIONS(857),
    [aux_sym__repository_start_token12] = ACTIONS(857),
    [aux_sym__repository_start_token14] = ACTIONS(857),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [sym__port] = STATE(202),
    [sym_port] = STATE(202),
    [sym_port_range] = STATE(202),
    [sym__port_part] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(61),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(863),
  },
  [276] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(865),
  },
  [277] = {
    [sym__port] = STATE(132),
    [sym_port] = STATE(132),
    [sym_port_range] = STATE(132),
    [sym__port_part] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym__port] = STATE(495),
    [sym_port] = STATE(495),
    [sym_port_range] = STATE(495),
    [sym__port_part] = STATE(398),
    [anon_sym_DQUOTE] = ACTIONS(835),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym__port_part_token1] = ACTIONS(839),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym_path] = STATE(79),
    [aux_sym__paths] = STATE(53),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [sym_chown] = STATE(354),
    [sym_user_name] = STATE(325),
    [sym_user_id] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(867),
    [aux_sym_user_name_token1] = ACTIONS(869),
    [aux_sym_user_id_token1] = ACTIONS(871),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [aux_sym_path_repeat2] = STATE(281),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [anon_sym_DOLLAR] = ACTIONS(875),
    [aux_sym_path_token3] = ACTIONS(878),
    [aux_sym_path_token4] = ACTIONS(880),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [anon_sym_DQUOTE] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [anon_sym_DOLLAR] = ACTIONS(604),
    [aux_sym_path_token1] = ACTIONS(883),
    [aux_sym_path_token2] = ACTIONS(883),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym_variable_default_value] = STATE(490),
    [sym_variable_this_or_null] = STATE(490),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_template_expr_less_than_equals] = STATE(500),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(893),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(893),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(893),
    [anon_sym_DASH_DASHretries] = ACTIONS(893),
    [aux_sym__hc_command_token1] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(895),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(895),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(895),
    [anon_sym_DASH_DASHretries] = ACTIONS(895),
    [aux_sym__hc_command_token1] = ACTIONS(895),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(897),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(897),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(897),
    [anon_sym_DASH_DASHretries] = ACTIONS(897),
    [aux_sym__hc_command_token1] = ACTIONS(897),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(899),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(899),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(899),
    [anon_sym_DASH_DASHretries] = ACTIONS(899),
    [aux_sym__hc_command_token1] = ACTIONS(899),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(901),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(901),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(901),
    [anon_sym_DASH_DASHretries] = ACTIONS(901),
    [aux_sym__hc_command_token1] = ACTIONS(901),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(903),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(903),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(903),
    [anon_sym_DASH_DASHretries] = ACTIONS(903),
    [aux_sym__hc_command_token1] = ACTIONS(903),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(905),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(905),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(905),
    [anon_sym_DASH_DASHretries] = ACTIONS(905),
    [aux_sym__hc_command_token1] = ACTIONS(905),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(907),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(907),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(907),
    [anon_sym_DASH_DASHretries] = ACTIONS(907),
    [aux_sym__hc_command_token1] = ACTIONS(907),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [sym_template_expr_less_than_equals] = STATE(445),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [sym_template_expr_less_than_equals] = STATE(494),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [sym_template_expr_less_than_equals] = STATE(448),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [sym_user_name] = STATE(176),
    [sym_user_id] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(909),
    [aux_sym_user_name_token1] = ACTIONS(911),
    [aux_sym_user_id_token1] = ACTIONS(913),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_path] = STATE(187),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_DOLLAR] = ACTIONS(917),
    [aux_sym_path_token1] = ACTIONS(919),
    [aux_sym_path_token2] = ACTIONS(921),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [sym_port] = STATE(485),
    [sym_port_range] = STATE(485),
    [sym__port_part] = STATE(398),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym__port_part_token1] = ACTIONS(839),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [aux_sym__repository_start_repeat1] = STATE(300),
    [anon_sym_DOLLAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [aux_sym__repository_start_token2] = ACTIONS(923),
    [aux_sym__repository_start_token3] = ACTIONS(927),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym__repository_start_repeat1] = STATE(313),
    [anon_sym_DOLLAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token2] = ACTIONS(923),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [sym_port_protocol] = STATE(405),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(933),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [sym_template_expr_less_than_equals] = STATE(482),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [sym_variable_default_value] = STATE(520),
    [sym_variable_this_or_null] = STATE(520),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [aux_sym__repository_start_repeat2] = STATE(322),
    [anon_sym_SLASH] = ACTIONS(937),
    [aux_sym__repository_start_token3] = ACTIONS(939),
    [aux_sym__repository_start_token4] = ACTIONS(941),
    [aux_sym__repository_start_token7] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [aux_sym__repository_start_repeat3] = STATE(326),
    [anon_sym_SLASH] = ACTIONS(937),
    [aux_sym__repository_start_token3] = ACTIONS(939),
    [aux_sym__repository_start_token8] = ACTIONS(943),
    [aux_sym__repository_start_token11] = ACTIONS(943),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [aux_sym__repository_start_repeat4] = STATE(334),
    [anon_sym_SLASH] = ACTIONS(937),
    [aux_sym__repository_start_token3] = ACTIONS(939),
    [aux_sym__repository_start_token12] = ACTIONS(945),
    [aux_sym__repository_start_token15] = ACTIONS(945),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym__repository_start_token13] = ACTIONS(947),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(949),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(949),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(949),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [anon_sym_DQUOTE] = ACTIONS(598),
    [anon_sym_COLON] = ACTIONS(598),
    [anon_sym_DOLLAR] = ACTIONS(598),
    [aux_sym_path_token1] = ACTIONS(952),
    [aux_sym_path_token2] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [sym_variable_default_value] = STATE(518),
    [sym_variable_this_or_null] = STATE(518),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [aux_sym_path_repeat2] = STATE(281),
    [anon_sym_DQUOTE] = ACTIONS(956),
    [anon_sym_DOLLAR] = ACTIONS(958),
    [aux_sym_path_token3] = ACTIONS(960),
    [aux_sym_path_token4] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_variable_default_value] = STATE(516),
    [sym_variable_this_or_null] = STATE(516),
    [anon_sym_RBRACE] = ACTIONS(964),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [sym_variable_default_value] = STATE(514),
    [sym_variable_this_or_null] = STATE(514),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [aux_sym__repository_start_repeat1] = STATE(313),
    [anon_sym_DOLLAR] = ACTIONS(968),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token2] = ACTIONS(968),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [sym_template_expr_less_than_equals] = STATE(506),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [sym_variable_default_value] = STATE(512),
    [sym_variable_this_or_null] = STATE(512),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [sym_variable_default_value] = STATE(510),
    [sym_variable_this_or_null] = STATE(510),
    [anon_sym_RBRACE] = ACTIONS(973),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [sym_variable_default_value] = STATE(508),
    [sym_variable_this_or_null] = STATE(508),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [sym_variable_default_value] = STATE(456),
    [sym_variable_this_or_null] = STATE(456),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_path_repeat2] = STATE(310),
    [anon_sym_DQUOTE] = ACTIONS(979),
    [anon_sym_DOLLAR] = ACTIONS(958),
    [aux_sym_path_token3] = ACTIONS(981),
    [aux_sym_path_token4] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [sym_template_expr_less_than_equals] = STATE(437),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [sym_template_expr_less_than_equals] = STATE(428),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [aux_sym__repository_start_repeat2] = STATE(322),
    [anon_sym_SLASH] = ACTIONS(134),
    [aux_sym__repository_start_token3] = ACTIONS(136),
    [aux_sym__repository_start_token4] = ACTIONS(983),
    [aux_sym__repository_start_token7] = ACTIONS(983),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [sym_hc_command] = STATE(178),
    [aux_sym__anything] = STATE(140),
    [sym__anything_or_json_array] = STATE(200),
    [aux_sym__anything_token1] = ACTIONS(510),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(986),
  },
  [324] = {
    [sym_variable_default_value] = STATE(503),
    [sym_variable_this_or_null] = STATE(503),
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [anon_sym_DQUOTE] = ACTIONS(990),
    [anon_sym_COLON] = ACTIONS(992),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [aux_sym_path_token1] = ACTIONS(994),
    [aux_sym_path_token2] = ACTIONS(994),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [aux_sym__repository_start_repeat3] = STATE(326),
    [anon_sym_SLASH] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token8] = ACTIONS(996),
    [aux_sym__repository_start_token11] = ACTIONS(996),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [sym_template_expr_less_than_equals] = STATE(465),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [anon_sym_DQUOTE] = ACTIONS(990),
    [anon_sym_COLON] = ACTIONS(999),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [aux_sym_path_token1] = ACTIONS(994),
    [aux_sym_path_token2] = ACTIONS(994),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [sym_variable_default_value] = STATE(497),
    [sym_variable_this_or_null] = STATE(497),
    [anon_sym_RBRACE] = ACTIONS(1001),
    [anon_sym_COLON_DASH] = ACTIONS(887),
    [anon_sym_COLON_PLUS] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_template_expr_less_than_equals] = STATE(469),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(333),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(891),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(891),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [331] = {
    [aux_sym_path_repeat2] = STATE(281),
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [anon_sym_DOLLAR] = ACTIONS(958),
    [aux_sym_path_token3] = ACTIONS(1005),
    [aux_sym_path_token4] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [sym_port] = STATE(472),
    [sym_port_range] = STATE(472),
    [sym__port_part] = STATE(398),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym__port_part_token1] = ACTIONS(839),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym__repository_start_token13] = ACTIONS(1007),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1009),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1009),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [aux_sym__repository_start_repeat4] = STATE(334),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token12] = ACTIONS(1011),
    [aux_sym__repository_start_token15] = ACTIONS(1011),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym_path_repeat2] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [anon_sym_DOLLAR] = ACTIONS(958),
    [aux_sym_path_token3] = ACTIONS(1016),
    [aux_sym_path_token4] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [sym_port_protocol] = STATE(384),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(933),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [aux_sym__repository_start_repeat4] = STATE(306),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [aux_sym__repository_start_token12] = ACTIONS(945),
    [aux_sym__repository_start_token15] = ACTIONS(945),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [aux_sym__repository_start_repeat3] = STATE(305),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [aux_sym__repository_start_token8] = ACTIONS(943),
    [aux_sym__repository_start_token11] = ACTIONS(943),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [aux_sym__repository_start_repeat2] = STATE(304),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [aux_sym__repository_start_token4] = ACTIONS(941),
    [aux_sym__repository_start_token7] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_DQUOTE] = ACTIONS(1018),
    [anon_sym_DOLLAR] = ACTIONS(1018),
    [aux_sym_path_token1] = ACTIONS(1020),
    [aux_sym_path_token2] = ACTIONS(1020),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token15] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token2] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [aux_sym__anything] = STATE(140),
    [sym__anything_or_json_array] = STATE(203),
    [aux_sym__anything_token1] = ACTIONS(510),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1022),
  },
  [346] = {
    [anon_sym_DQUOTE] = ACTIONS(873),
    [anon_sym_DOLLAR] = ACTIONS(873),
    [aux_sym_path_token3] = ACTIONS(878),
    [aux_sym_path_token4] = ACTIONS(878),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [348] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [aux_sym__anything] = STATE(140),
    [sym__anything_or_json_array] = STATE(208),
    [aux_sym__anything_token1] = ACTIONS(510),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1024),
  },
  [350] = {
    [aux_sym__anything] = STATE(140),
    [sym__anything_or_json_array] = STATE(190),
    [aux_sym__anything_token1] = ACTIONS(510),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1026),
  },
  [351] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_path_token3] = ACTIONS(189),
    [aux_sym_path_token4] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token3] = ACTIONS(193),
    [aux_sym_path_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [354] = {
    [anon_sym_DQUOTE] = ACTIONS(1028),
    [anon_sym_DOLLAR] = ACTIONS(1028),
    [aux_sym_path_token1] = ACTIONS(1030),
    [aux_sym_path_token2] = ACTIONS(1030),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token8] = ACTIONS(207),
    [aux_sym__repository_start_token11] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_path_token1] = ACTIONS(189),
    [aux_sym_path_token2] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [358] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [anon_sym_DQUOTE] = ACTIONS(664),
    [anon_sym_DOLLAR] = ACTIONS(664),
    [aux_sym_path_token1] = ACTIONS(1032),
    [aux_sym_path_token2] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token1] = ACTIONS(197),
    [aux_sym_path_token2] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [sym_label_value] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(1034),
    [aux_sym_label_value_token1] = ACTIONS(1036),
    [aux_sym_label_value_token2] = ACTIONS(1036),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [363] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_DQUOTE] = ACTIONS(658),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_path_token1] = ACTIONS(1038),
    [aux_sym_path_token2] = ACTIONS(1038),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [anon_sym_DQUOTE] = ACTIONS(1040),
    [anon_sym_DOLLAR] = ACTIONS(1040),
    [aux_sym_path_token1] = ACTIONS(1042),
    [aux_sym_path_token2] = ACTIONS(1042),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [sym_docker_variable] = STATE(16),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [sym__docker_variable] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [sym_docker_variable] = STATE(365),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [sym__docker_variable] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [368] = {
    [sym_docker_variable] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(1052),
    [sym__docker_variable] = ACTIONS(1054),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [369] = {
    [sym_docker_variable] = STATE(73),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [370] = {
    [sym_docker_variable] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [sym__docker_variable] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [anon_sym_DOLLAR] = ACTIONS(1060),
    [aux_sym_path_token3] = ACTIONS(1062),
    [aux_sym_path_token4] = ACTIONS(1064),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [sym_docker_variable] = STATE(335),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym__docker_variable] = ACTIONS(1068),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [sym_docker_variable] = STATE(271),
    [anon_sym_LBRACE] = ACTIONS(1070),
    [sym__docker_variable] = ACTIONS(1072),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [sym_platform] = STATE(223),
    [anon_sym_DOLLAR] = ACTIONS(1074),
    [aux_sym_platform_token1] = ACTIONS(1076),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [sym_docker_variable] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [376] = {
    [sym__port_part] = STATE(415),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym__port_part_token1] = ACTIONS(839),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [sym__port_part] = STATE(100),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [sym_docker_variable] = STATE(209),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [aux_sym_label_value_repeat1] = STATE(379),
    [anon_sym_DQUOTE] = ACTIONS(1078),
    [aux_sym_label_value_token3] = ACTIONS(1080),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [sym_docker_variable] = STATE(319),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym__docker_variable] = ACTIONS(1068),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [381] = {
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [sym_docker_variable] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(1052),
    [sym__docker_variable] = ACTIONS(1054),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [383] = {
    [anon_sym_DOLLAR] = ACTIONS(1083),
    [aux_sym_path_token3] = ACTIONS(1085),
    [aux_sym_path_token4] = ACTIONS(1087),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [sym_docker_variable] = STATE(121),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [sym__docker_variable] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [386] = {
    [sym_docker_variable] = STATE(344),
    [anon_sym_LBRACE] = ACTIONS(1093),
    [sym__docker_variable] = ACTIONS(1095),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [sym_docker_variable] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [sym__docker_variable] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [388] = {
    [sym_docker_variable] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(1097),
    [sym__docker_variable] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [389] = {
    [sym_docker_variable] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [sym__docker_variable] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [390] = {
    [sym_signal_name] = STATE(186),
    [sym_signal_num] = ACTIONS(1101),
    [aux_sym_signal_name_token1] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [sym_docker_variable] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(1093),
    [sym__docker_variable] = ACTIONS(1095),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_docker_variable] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [sym__docker_variable] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [aux_sym__labels] = STATE(131),
    [sym_label_pair] = STATE(131),
    [sym_label_key] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [sym__env_pairs] = STATE(211),
    [sym_env_pair] = STATE(142),
    [sym_env_key] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym_docker_variable] = STATE(346),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym__docker_variable] = ACTIONS(1068),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [397] = {
    [sym_docker_variable] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(1097),
    [sym__docker_variable] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [398] = {
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(1109),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_docker_variable] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(1111),
    [sym__docker_variable] = ACTIONS(1113),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(1111),
    [sym__docker_variable] = ACTIONS(1113),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [401] = {
    [aux_sym_label_value_repeat1] = STATE(379),
    [anon_sym_DQUOTE] = ACTIONS(1115),
    [aux_sym_label_value_token3] = ACTIONS(1117),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [402] = {
    [sym_docker_variable] = STATE(392),
    [anon_sym_LBRACE] = ACTIONS(1119),
    [sym__docker_variable] = ACTIONS(1121),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [403] = {
    [anon_sym_DOLLAR] = ACTIONS(1123),
    [aux_sym_port_protocol_token1] = ACTIONS(1125),
    [aux_sym_port_protocol_token2] = ACTIONS(1125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [anon_sym_DOLLAR] = ACTIONS(1127),
    [aux_sym_port_protocol_token1] = ACTIONS(1129),
    [aux_sym_port_protocol_token2] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_docker_variable] = STATE(336),
    [anon_sym_LBRACE] = ACTIONS(1119),
    [sym__docker_variable] = ACTIONS(1121),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [407] = {
    [sym_hc_timeout] = STATE(289),
    [aux_sym_hc_interval_token1] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [aux_sym_label_value_repeat1] = STATE(401),
    [aux_sym_label_value_token3] = ACTIONS(1133),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [409] = {
    [anon_sym_DQUOTE] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(1135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [aux_sym__anything] = STATE(149),
    [aux_sym__anything_token1] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [sym_env_value] = STATE(166),
    [aux_sym_env_value_token1] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [413] = {
    [aux_sym__anything] = STATE(114),
    [aux_sym__anything_token1] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym_env_pair] = STATE(168),
    [sym_env_key] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(415),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_DQUOTE] = ACTIONS(1143),
    [anon_sym_COLON] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [sym_hc_interval] = STATE(291),
    [aux_sym_hc_interval_token1] = ACTIONS(1148),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_hc_start_period] = STATE(287),
    [aux_sym_hc_interval_token1] = ACTIONS(1150),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_user_group_id] = STATE(217),
    [aux_sym_user_id_token1] = ACTIONS(1152),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_user_group] = STATE(217),
    [aux_sym_user_name_token1] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_hc_retries] = STATE(285),
    [aux_sym__port_part_token1] = ACTIONS(1156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_user_group_id] = STATE(342),
    [aux_sym_user_id_token1] = ACTIONS(1158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_user_group] = STATE(342),
    [aux_sym_user_name_token1] = ACTIONS(1160),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym__repository_start_token5] = ACTIONS(1162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [aux_sym__repository_start_token9] = ACTIONS(1164),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1166),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [aux_sym_from_token2] = ACTIONS(1168),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [aux_sym__repository_start_token13] = ACTIONS(1170),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [aux_sym__repository_start_token9] = ACTIONS(1172),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [aux_sym__repository_start_token5] = ACTIONS(1174),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [anon_sym_SLASH] = ACTIONS(1176),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [aux_sym_from_token2] = ACTIONS(1178),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1180),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym_template_expr_percent_signs] = ACTIONS(1182),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [435] = {
    [sym_template_expr_curly_braces] = ACTIONS(1184),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [436] = {
    [anon_sym_SLASH] = ACTIONS(937),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [aux_sym__repository_start_token13] = ACTIONS(1186),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [aux_sym__repository_start_token9] = ACTIONS(1188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [aux_sym__repository_start_token5] = ACTIONS(1190),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1192),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [aux_sym_from_token2] = ACTIONS(1194),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_RBRACE] = ACTIONS(1196),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_RBRACE] = ACTIONS(1198),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_DQUOTE] = ACTIONS(1200),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [aux_sym__repository_start_token13] = ACTIONS(1202),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [aux_sym__repository_start_token9] = ACTIONS(1204),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [aux_sym__repository_start_token13] = ACTIONS(1208),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [aux_sym__repository_start_token9] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym__repository_start_token5] = ACTIONS(1212),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [aux_sym_from_token2] = ACTIONS(1214),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [sym_template_expr_percent_signs] = ACTIONS(1218),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [454] = {
    [sym_template_expr_curly_braces] = ACTIONS(1220),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [455] = {
    [aux_sym_from_token2] = ACTIONS(1222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_RBRACE] = ACTIONS(1224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1226),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [458] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1228),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [459] = {
    [anon_sym_DQUOTE] = ACTIONS(956),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [sym_template_expr_percent_signs] = ACTIONS(1232),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [462] = {
    [sym_template_expr_curly_braces] = ACTIONS(1234),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [463] = {
    [sym_template_expr_percent_signs] = ACTIONS(1236),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [464] = {
    [sym_template_expr_curly_braces] = ACTIONS(1238),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [465] = {
    [aux_sym__repository_start_token13] = ACTIONS(1240),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [aux_sym__repository_start_token9] = ACTIONS(1242),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [aux_sym__repository_start_token5] = ACTIONS(1244),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [aux_sym_from_token2] = ACTIONS(1246),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [aux_sym__repository_start_token13] = ACTIONS(1248),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [aux_sym__repository_start_token9] = ACTIONS(1250),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [aux_sym__repository_start_token5] = ACTIONS(1252),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_DQUOTE] = ACTIONS(1254),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_SLASH] = ACTIONS(929),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [aux_sym_from_token2] = ACTIONS(1256),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [sym_arg_name] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [sym_template_expr_percent_signs] = ACTIONS(1260),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [477] = {
    [sym_template_expr_curly_braces] = ACTIONS(1262),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [478] = {
    [anon_sym_SLASH] = ACTIONS(1264),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [sym_template_expr_percent_signs] = ACTIONS(1266),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [480] = {
    [sym_template_expr_curly_braces] = ACTIONS(1268),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [481] = {
    [anon_sym_DQUOTE] = ACTIONS(1270),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [aux_sym__repository_start_token13] = ACTIONS(1272),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [aux_sym__repository_start_token5] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_DQUOTE] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [aux_sym_from_token2] = ACTIONS(1280),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_DQUOTE] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_RBRACE] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [anon_sym_DQUOTE] = ACTIONS(1288),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [aux_sym__repository_start_token5] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [aux_sym__repository_start_token9] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [aux_sym__repository_start_token13] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [anon_sym_DQUOTE] = ACTIONS(492),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [aux_sym_from_token2] = ACTIONS(1296),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [anon_sym_RBRACE] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym__repository_start_token5] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [aux_sym__repository_start_token9] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym__repository_start_token13] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [sym_arg_default] = ACTIONS(1306),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [502] = {
    [sym__docker_variable] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [503] = {
    [anon_sym_RBRACE] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [aux_sym__repository_start_token5] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym__repository_start_token9] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [aux_sym__repository_start_token13] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_DQUOTE] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_RBRACE] = ACTIONS(1320),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [aux_sym_signal_name_token2] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_RBRACE] = ACTIONS(1324),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym_label_pair_token1] = ACTIONS(1326),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_RBRACE] = ACTIONS(1332),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_EQ] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_RBRACE] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [anon_sym_EQ] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_EQ] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [anon_sym_EQ] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [sym_template_expr_percent_signs] = ACTIONS(1348),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [523] = {
    [sym__docker_variable] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [524] = {
    [sym_template_expr_curly_braces] = ACTIONS(1352),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [525] = {
    [sym_template_expr_curly_braces] = ACTIONS(1354),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [526] = {
    [sym_template_expr_percent_signs] = ACTIONS(1356),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [527] = {
    [ts_builtin_sym_end] = ACTIONS(1358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [sym__docker_variable] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [529] = {
    [sym_template_expr_curly_braces] = ACTIONS(1362),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [530] = {
    [sym_template_expr_percent_signs] = ACTIONS(1364),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [531] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1366),
  },
  [532] = {
    [sym__docker_variable] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [533] = {
    [sym_template_expr_curly_braces] = ACTIONS(1370),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [534] = {
    [sym_template_expr_percent_signs] = ACTIONS(1372),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [535] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1374),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [sym__docker_variable] = ACTIONS(1376),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [537] = {
    [sym__docker_variable] = ACTIONS(1378),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [538] = {
    [sym__docker_variable] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [539] = {
    [sym__docker_variable] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [540] = {
    [sym__docker_variable] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [541] = {
    [sym__docker_variable] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [542] = {
    [sym__docker_variable] = ACTIONS(1388),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(275),
  [11] = {.count = 1, .reusable = true}, SHIFT(475),
  [13] = {.count = 1, .reusable = true}, SHIFT(345),
  [15] = {.count = 1, .reusable = true}, SHIFT(272),
  [17] = {.count = 1, .reusable = true}, SHIFT(349),
  [19] = {.count = 1, .reusable = true}, SHIFT(395),
  [21] = {.count = 1, .reusable = true}, SHIFT(224),
  [23] = {.count = 1, .reusable = true}, SHIFT(221),
  [25] = {.count = 1, .reusable = true}, SHIFT(222),
  [27] = {.count = 1, .reusable = true}, SHIFT(394),
  [29] = {.count = 1, .reusable = true}, SHIFT(410),
  [31] = {.count = 1, .reusable = true}, SHIFT(6),
  [33] = {.count = 1, .reusable = true}, SHIFT(350),
  [35] = {.count = 1, .reusable = true}, SHIFT(531),
  [37] = {.count = 1, .reusable = true}, SHIFT(390),
  [39] = {.count = 1, .reusable = true}, SHIFT(296),
  [41] = {.count = 1, .reusable = true}, SHIFT(276),
  [43] = {.count = 1, .reusable = true}, SHIFT(297),
  [45] = {.count = 1, .reusable = true}, SHIFT(195),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(275),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(475),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(345),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(272),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(349),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(395),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(224),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(221),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(222),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(394),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(410),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(6),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(350),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(531),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(390),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(296),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(276),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(297),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(195),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [110] = {.count = 1, .reusable = true}, SHIFT(266),
  [112] = {.count = 1, .reusable = true}, SHIFT(375),
  [114] = {.count = 1, .reusable = true}, SHIFT(27),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(266),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(375),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(27),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(453),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(454),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [145] = {.count = 1, .reusable = true}, SHIFT(273),
  [147] = {.count = 1, .reusable = false}, SHIFT(70),
  [149] = {.count = 1, .reusable = true}, SHIFT(320),
  [151] = {.count = 1, .reusable = true}, SHIFT(453),
  [153] = {.count = 1, .reusable = true}, SHIFT(454),
  [155] = {.count = 1, .reusable = true}, SHIFT(370),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [161] = {.count = 1, .reusable = true}, SHIFT(261),
  [163] = {.count = 1, .reusable = false}, SHIFT(74),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(268),
  [171] = {.count = 1, .reusable = false}, SHIFT(78),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(370),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(320),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(400),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [216] = {.count = 1, .reusable = true}, SHIFT(404),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(526),
  [221] = {.count = 1, .reusable = false}, SHIFT(113),
  [223] = {.count = 1, .reusable = true}, SHIFT(525),
  [225] = {.count = 1, .reusable = true}, SHIFT(526),
  [227] = {.count = 1, .reusable = true}, SHIFT(294),
  [229] = {.count = 1, .reusable = true}, SHIFT(400),
  [231] = {.count = 1, .reusable = false}, SHIFT(135),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(294),
  [236] = {.count = 1, .reusable = false}, SHIFT(136),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(525),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [247] = {.count = 1, .reusable = false}, SHIFT(147),
  [249] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(383),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(382),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(77),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(382),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(368),
  [267] = {.count = 1, .reusable = false}, SHIFT(68),
  [269] = {.count = 1, .reusable = false}, SHIFT(368),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [277] = {.count = 1, .reusable = false}, SHIFT(146),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [281] = {.count = 1, .reusable = true}, SHIFT(383),
  [283] = {.count = 1, .reusable = true}, SHIFT(382),
  [285] = {.count = 1, .reusable = false}, SHIFT(77),
  [287] = {.count = 1, .reusable = false}, SHIFT(382),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [295] = {.count = 1, .reusable = false}, SHIFT(152),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(368),
  [306] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [308] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(368),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [313] = {.count = 1, .reusable = false}, SHIFT(88),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [327] = {.count = 1, .reusable = false}, SHIFT(164),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [337] = {.count = 1, .reusable = false}, SHIFT(154),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [345] = {.count = 1, .reusable = true}, SHIFT(265),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [353] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [355] = {.count = 1, .reusable = false}, SHIFT(106),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [361] = {.count = 1, .reusable = true}, SHIFT(264),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [365] = {.count = 1, .reusable = true}, SHIFT(377),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [375] = {.count = 1, .reusable = false}, SHIFT(172),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(314),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [386] = {.count = 1, .reusable = false}, SHIFT(194),
  [388] = {.count = 1, .reusable = true}, SHIFT(533),
  [390] = {.count = 1, .reusable = true}, SHIFT(534),
  [392] = {.count = 1, .reusable = true}, SHIFT(388),
  [394] = {.count = 1, .reusable = false}, SHIFT(180),
  [396] = {.count = 1, .reusable = false}, SHIFT(388),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(388),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(388),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [408] = {.count = 1, .reusable = true}, SHIFT(385),
  [410] = {.count = 1, .reusable = false}, SHIFT(191),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(534),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [417] = {.count = 1, .reusable = false}, SHIFT(207),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(533),
  [424] = {.count = 1, .reusable = true}, SHIFT(314),
  [426] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [430] = {.count = 1, .reusable = true}, SHIFT(277),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [436] = {.count = 1, .reusable = false}, SHIFT(196),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(385),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [443] = {.count = 1, .reusable = true}, SHIFT(237),
  [445] = {.count = 1, .reusable = true}, SHIFT(228),
  [447] = {.count = 1, .reusable = false}, SHIFT(455),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [451] = {.count = 1, .reusable = false}, SHIFT(143),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [457] = {.count = 1, .reusable = true}, SHIFT(241),
  [459] = {.count = 1, .reusable = true}, SHIFT(231),
  [461] = {.count = 1, .reusable = false}, SHIFT(451),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [465] = {.count = 1, .reusable = true}, SHIFT(250),
  [467] = {.count = 1, .reusable = true}, SHIFT(229),
  [469] = {.count = 1, .reusable = false}, SHIFT(441),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [473] = {.count = 1, .reusable = true}, SHIFT(245),
  [475] = {.count = 1, .reusable = true}, SHIFT(230),
  [477] = {.count = 1, .reusable = false}, SHIFT(468),
  [479] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(143),
  [486] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [490] = {.count = 1, .reusable = false}, SHIFT(511),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [494] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(511),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [501] = {.count = 1, .reusable = true}, SHIFT(226),
  [503] = {.count = 1, .reusable = false}, SHIFT(427),
  [505] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(159),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [510] = {.count = 1, .reusable = false}, SHIFT(159),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [514] = {.count = 1, .reusable = true}, SHIFT(412),
  [516] = {.count = 1, .reusable = false}, SHIFT(413),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [520] = {.count = 1, .reusable = false}, SHIFT(414),
  [522] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [524] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [528] = {.count = 1, .reusable = true}, SHIFT(227),
  [530] = {.count = 1, .reusable = false}, SHIFT(432),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [538] = {.count = 1, .reusable = false}, SHIFT(157),
  [540] = {.count = 1, .reusable = true}, SHIFT(212),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [544] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(157),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [551] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [553] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(414),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [558] = {.count = 1, .reusable = true}, SHIFT(501),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [562] = {.count = 1, .reusable = false}, SHIFT(496),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [580] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [588] = {.count = 1, .reusable = false}, SHIFT(486),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [602] = {.count = 1, .reusable = false}, SHIFT(474),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [608] = {.count = 1, .reusable = true}, SHIFT(420),
  [610] = {.count = 1, .reusable = true}, SHIFT(419),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [634] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [666] = {.count = 1, .reusable = true}, SHIFT(374),
  [668] = {.count = 1, .reusable = true}, SHIFT(366),
  [670] = {.count = 1, .reusable = false}, SHIFT(80),
  [672] = {.count = 1, .reusable = true}, SHIFT(524),
  [674] = {.count = 1, .reusable = true}, SHIFT(522),
  [676] = {.count = 1, .reusable = true}, SHIFT(302),
  [678] = {.count = 1, .reusable = true}, SHIFT(197),
  [680] = {.count = 1, .reusable = true}, SHIFT(521),
  [682] = {.count = 1, .reusable = true}, SHIFT(519),
  [684] = {.count = 1, .reusable = true}, SHIFT(517),
  [686] = {.count = 1, .reusable = true}, SHIFT(515),
  [688] = {.count = 1, .reusable = true}, SHIFT(513),
  [690] = {.count = 1, .reusable = true}, SHIFT(274),
  [692] = {.count = 1, .reusable = true}, SHIFT(242),
  [694] = {.count = 1, .reusable = true}, SHIFT(393),
  [696] = {.count = 1, .reusable = false}, SHIFT(171),
  [698] = {.count = 1, .reusable = true}, SHIFT(462),
  [700] = {.count = 1, .reusable = true}, SHIFT(461),
  [702] = {.count = 1, .reusable = true}, SHIFT(293),
  [704] = {.count = 1, .reusable = true}, SHIFT(254),
  [706] = {.count = 1, .reusable = true}, SHIFT(255),
  [708] = {.count = 1, .reusable = true}, SHIFT(248),
  [710] = {.count = 1, .reusable = true}, SHIFT(256),
  [712] = {.count = 1, .reusable = true}, SHIFT(246),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(391),
  [717] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(478),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(477),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(476),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(327),
  [729] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(391),
  [732] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(478),
  [735] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(477),
  [738] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(476),
  [741] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(327),
  [744] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(391),
  [747] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(478),
  [750] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(477),
  [753] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(476),
  [756] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(327),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(521),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(519),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(517),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(515),
  [771] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [773] = {.count = 1, .reusable = true}, SHIFT(387),
  [775] = {.count = 1, .reusable = false}, SHIFT(181),
  [777] = {.count = 1, .reusable = true}, SHIFT(435),
  [779] = {.count = 1, .reusable = true}, SHIFT(434),
  [781] = {.count = 1, .reusable = true}, SHIFT(321),
  [783] = {.count = 1, .reusable = true}, SHIFT(389),
  [785] = {.count = 1, .reusable = false}, SHIFT(148),
  [787] = {.count = 1, .reusable = true}, SHIFT(464),
  [789] = {.count = 1, .reusable = true}, SHIFT(463),
  [791] = {.count = 1, .reusable = true}, SHIFT(295),
  [793] = {.count = 1, .reusable = true}, SHIFT(399),
  [795] = {.count = 1, .reusable = false}, SHIFT(120),
  [797] = {.count = 1, .reusable = true}, SHIFT(480),
  [799] = {.count = 1, .reusable = true}, SHIFT(479),
  [801] = {.count = 1, .reusable = true}, SHIFT(330),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [809] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [829] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [833] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [835] = {.count = 1, .reusable = true}, SHIFT(332),
  [837] = {.count = 1, .reusable = true}, SHIFT(406),
  [839] = {.count = 1, .reusable = true}, SHIFT(301),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [853] = {.count = 1, .reusable = true}, SHIFT(280),
  [855] = {.count = 1, .reusable = true}, SHIFT(206),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [861] = {.count = 1, .reusable = true}, SHIFT(298),
  [863] = {.count = 1, .reusable = true}, SHIFT(201),
  [865] = {.count = 1, .reusable = true}, SHIFT(218),
  [867] = {.count = 1, .reusable = true}, SHIFT(367),
  [869] = {.count = 1, .reusable = true}, SHIFT(308),
  [871] = {.count = 1, .reusable = true}, SHIFT(282),
  [873] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [875] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(396),
  [878] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [880] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(396),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_user_id, 1),
  [885] = {.count = 1, .reusable = true}, SHIFT(47),
  [887] = {.count = 1, .reusable = true}, SHIFT(458),
  [889] = {.count = 1, .reusable = true}, SHIFT(457),
  [891] = {.count = 1, .reusable = true}, SHIFT(333),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [909] = {.count = 1, .reusable = true}, SHIFT(378),
  [911] = {.count = 1, .reusable = true}, SHIFT(173),
  [913] = {.count = 1, .reusable = true}, SHIFT(175),
  [915] = {.count = 1, .reusable = true}, SHIFT(371),
  [917] = {.count = 1, .reusable = true}, SHIFT(397),
  [919] = {.count = 1, .reusable = false}, SHIFT(182),
  [921] = {.count = 1, .reusable = false}, SHIFT(397),
  [923] = {.count = 1, .reusable = true}, SHIFT(386),
  [925] = {.count = 1, .reusable = true}, SHIFT(259),
  [927] = {.count = 1, .reusable = false}, SHIFT(473),
  [929] = {.count = 1, .reusable = true}, SHIFT(257),
  [931] = {.count = 1, .reusable = false}, SHIFT(436),
  [933] = {.count = 1, .reusable = true}, SHIFT(403),
  [935] = {.count = 1, .reusable = true}, SHIFT(126),
  [937] = {.count = 1, .reusable = true}, SHIFT(263),
  [939] = {.count = 1, .reusable = false}, SHIFT(431),
  [941] = {.count = 1, .reusable = true}, SHIFT(529),
  [943] = {.count = 1, .reusable = true}, SHIFT(530),
  [945] = {.count = 1, .reusable = true}, SHIFT(284),
  [947] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(307),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym_user_name, 1),
  [954] = {.count = 1, .reusable = true}, SHIFT(348),
  [956] = {.count = 1, .reusable = true}, SHIFT(66),
  [958] = {.count = 1, .reusable = true}, SHIFT(396),
  [960] = {.count = 1, .reusable = false}, SHIFT(444),
  [962] = {.count = 1, .reusable = false}, SHIFT(396),
  [964] = {.count = 1, .reusable = true}, SHIFT(40),
  [966] = {.count = 1, .reusable = true}, SHIFT(269),
  [968] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(386),
  [971] = {.count = 1, .reusable = true}, SHIFT(363),
  [973] = {.count = 1, .reusable = true}, SHIFT(358),
  [975] = {.count = 1, .reusable = true}, SHIFT(352),
  [977] = {.count = 1, .reusable = true}, SHIFT(83),
  [979] = {.count = 1, .reusable = true}, SHIFT(88),
  [981] = {.count = 1, .reusable = false}, SHIFT(459),
  [983] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(529),
  [986] = {.count = 1, .reusable = true}, SHIFT(200),
  [988] = {.count = 1, .reusable = true}, SHIFT(129),
  [990] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [992] = {.count = 1, .reusable = true}, SHIFT(423),
  [994] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 1),
  [996] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(530),
  [999] = {.count = 1, .reusable = true}, SHIFT(422),
  [1001] = {.count = 1, .reusable = true}, SHIFT(21),
  [1003] = {.count = 1, .reusable = true}, SHIFT(219),
  [1005] = {.count = 1, .reusable = false}, SHIFT(491),
  [1007] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [1009] = {.count = 1, .reusable = true}, SHIFT(307),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(284),
  [1014] = {.count = 1, .reusable = true}, SHIFT(207),
  [1016] = {.count = 1, .reusable = false}, SHIFT(488),
  [1018] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1020] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 3),
  [1022] = {.count = 1, .reusable = true}, SHIFT(203),
  [1024] = {.count = 1, .reusable = true}, SHIFT(208),
  [1026] = {.count = 1, .reusable = true}, SHIFT(190),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 2),
  [1030] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 2),
  [1032] = {.count = 1, .reusable = false}, REDUCE(sym_user_group, 1),
  [1034] = {.count = 1, .reusable = false}, SHIFT(408),
  [1036] = {.count = 1, .reusable = true}, SHIFT(163),
  [1038] = {.count = 1, .reusable = false}, REDUCE(sym_user_group_id, 1),
  [1040] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1042] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 2),
  [1044] = {.count = 1, .reusable = true}, SHIFT(528),
  [1046] = {.count = 1, .reusable = true}, SHIFT(19),
  [1048] = {.count = 1, .reusable = true}, SHIFT(537),
  [1050] = {.count = 1, .reusable = true}, SHIFT(356),
  [1052] = {.count = 1, .reusable = true}, SHIFT(502),
  [1054] = {.count = 1, .reusable = true}, SHIFT(85),
  [1056] = {.count = 1, .reusable = true}, SHIFT(523),
  [1058] = {.count = 1, .reusable = true}, SHIFT(63),
  [1060] = {.count = 1, .reusable = true}, SHIFT(372),
  [1062] = {.count = 1, .reusable = false}, SHIFT(481),
  [1064] = {.count = 1, .reusable = false}, SHIFT(372),
  [1066] = {.count = 1, .reusable = true}, SHIFT(536),
  [1068] = {.count = 1, .reusable = true}, SHIFT(351),
  [1070] = {.count = 1, .reusable = true}, SHIFT(539),
  [1072] = {.count = 1, .reusable = true}, SHIFT(270),
  [1074] = {.count = 1, .reusable = true}, SHIFT(373),
  [1076] = {.count = 1, .reusable = true}, SHIFT(262),
  [1078] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [1080] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(379),
  [1083] = {.count = 1, .reusable = true}, SHIFT(380),
  [1085] = {.count = 1, .reusable = false}, SHIFT(507),
  [1087] = {.count = 1, .reusable = false}, SHIFT(380),
  [1089] = {.count = 1, .reusable = true}, SHIFT(542),
  [1091] = {.count = 1, .reusable = true}, SHIFT(127),
  [1093] = {.count = 1, .reusable = true}, SHIFT(541),
  [1095] = {.count = 1, .reusable = true}, SHIFT(357),
  [1097] = {.count = 1, .reusable = true}, SHIFT(532),
  [1099] = {.count = 1, .reusable = true}, SHIFT(115),
  [1101] = {.count = 1, .reusable = true}, SHIFT(186),
  [1103] = {.count = 1, .reusable = true}, SHIFT(509),
  [1105] = {.count = 1, .reusable = true}, SHIFT(511),
  [1107] = {.count = 1, .reusable = true}, SHIFT(141),
  [1109] = {.count = 1, .reusable = true}, SHIFT(376),
  [1111] = {.count = 1, .reusable = true}, SHIFT(540),
  [1113] = {.count = 1, .reusable = true}, SHIFT(52),
  [1115] = {.count = 1, .reusable = true}, SHIFT(169),
  [1117] = {.count = 1, .reusable = true}, SHIFT(379),
  [1119] = {.count = 1, .reusable = true}, SHIFT(538),
  [1121] = {.count = 1, .reusable = true}, SHIFT(361),
  [1123] = {.count = 1, .reusable = true}, SHIFT(402),
  [1125] = {.count = 1, .reusable = true}, SHIFT(381),
  [1127] = {.count = 1, .reusable = true}, SHIFT(369),
  [1129] = {.count = 1, .reusable = true}, SHIFT(92),
  [1131] = {.count = 1, .reusable = true}, SHIFT(290),
  [1133] = {.count = 1, .reusable = true}, SHIFT(401),
  [1135] = {.count = 1, .reusable = true}, SHIFT(278),
  [1137] = {.count = 1, .reusable = true}, SHIFT(157),
  [1139] = {.count = 1, .reusable = true}, SHIFT(165),
  [1141] = {.count = 1, .reusable = true}, SHIFT(143),
  [1143] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(103),
  [1146] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1148] = {.count = 1, .reusable = true}, SHIFT(292),
  [1150] = {.count = 1, .reusable = true}, SHIFT(288),
  [1152] = {.count = 1, .reusable = true}, SHIFT(214),
  [1154] = {.count = 1, .reusable = true}, SHIFT(220),
  [1156] = {.count = 1, .reusable = true}, SHIFT(286),
  [1158] = {.count = 1, .reusable = true}, SHIFT(364),
  [1160] = {.count = 1, .reusable = true}, SHIFT(359),
  [1162] = {.count = 1, .reusable = true}, SHIFT(75),
  [1164] = {.count = 1, .reusable = true}, SHIFT(10),
  [1166] = {.count = 1, .reusable = true}, SHIFT(251),
  [1168] = {.count = 1, .reusable = true}, SHIFT(483),
  [1170] = {.count = 1, .reusable = true}, SHIFT(109),
  [1172] = {.count = 1, .reusable = true}, SHIFT(108),
  [1174] = {.count = 1, .reusable = true}, SHIFT(102),
  [1176] = {.count = 1, .reusable = true}, SHIFT(267),
  [1178] = {.count = 1, .reusable = true}, SHIFT(426),
  [1180] = {.count = 1, .reusable = true}, SHIFT(253),
  [1182] = {.count = 1, .reusable = true}, SHIFT(429),
  [1184] = {.count = 1, .reusable = true}, SHIFT(430),
  [1186] = {.count = 1, .reusable = true}, SHIFT(23),
  [1188] = {.count = 1, .reusable = true}, SHIFT(25),
  [1190] = {.count = 1, .reusable = true}, SHIFT(24),
  [1192] = {.count = 1, .reusable = true}, SHIFT(249),
  [1194] = {.count = 1, .reusable = true}, SHIFT(433),
  [1196] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1198] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1200] = {.count = 1, .reusable = true}, SHIFT(71),
  [1202] = {.count = 1, .reusable = true}, SHIFT(86),
  [1204] = {.count = 1, .reusable = true}, SHIFT(72),
  [1206] = {.count = 1, .reusable = true}, SHIFT(236),
  [1208] = {.count = 1, .reusable = true}, SHIFT(60),
  [1210] = {.count = 1, .reusable = true}, SHIFT(41),
  [1212] = {.count = 1, .reusable = true}, SHIFT(46),
  [1214] = {.count = 1, .reusable = true}, SHIFT(460),
  [1216] = {.count = 1, .reusable = true}, SHIFT(240),
  [1218] = {.count = 1, .reusable = true}, SHIFT(438),
  [1220] = {.count = 1, .reusable = true}, SHIFT(439),
  [1222] = {.count = 1, .reusable = true}, SHIFT(440),
  [1224] = {.count = 1, .reusable = true}, SHIFT(82),
  [1226] = {.count = 1, .reusable = true}, SHIFT(442),
  [1228] = {.count = 1, .reusable = true}, SHIFT(443),
  [1230] = {.count = 1, .reusable = true}, SHIFT(239),
  [1232] = {.count = 1, .reusable = true}, SHIFT(446),
  [1234] = {.count = 1, .reusable = true}, SHIFT(424),
  [1236] = {.count = 1, .reusable = true}, SHIFT(449),
  [1238] = {.count = 1, .reusable = true}, SHIFT(450),
  [1240] = {.count = 1, .reusable = true}, SHIFT(337),
  [1242] = {.count = 1, .reusable = true}, SHIFT(338),
  [1244] = {.count = 1, .reusable = true}, SHIFT(339),
  [1246] = {.count = 1, .reusable = true}, SHIFT(452),
  [1248] = {.count = 1, .reusable = true}, SHIFT(38),
  [1250] = {.count = 1, .reusable = true}, SHIFT(34),
  [1252] = {.count = 1, .reusable = true}, SHIFT(36),
  [1254] = {.count = 1, .reusable = true}, SHIFT(411),
  [1256] = {.count = 1, .reusable = true}, SHIFT(489),
  [1258] = {.count = 1, .reusable = true}, SHIFT(158),
  [1260] = {.count = 1, .reusable = true}, SHIFT(466),
  [1262] = {.count = 1, .reusable = true}, SHIFT(467),
  [1264] = {.count = 1, .reusable = true}, SHIFT(260),
  [1266] = {.count = 1, .reusable = true}, SHIFT(470),
  [1268] = {.count = 1, .reusable = true}, SHIFT(471),
  [1270] = {.count = 1, .reusable = true}, SHIFT(180),
  [1272] = {.count = 1, .reusable = true}, SHIFT(9),
  [1274] = {.count = 1, .reusable = true}, SHIFT(247),
  [1276] = {.count = 1, .reusable = true}, SHIFT(11),
  [1278] = {.count = 1, .reusable = true}, SHIFT(103),
  [1280] = {.count = 1, .reusable = true}, SHIFT(535),
  [1282] = {.count = 1, .reusable = true}, SHIFT(128),
  [1284] = {.count = 1, .reusable = true}, SHIFT(243),
  [1286] = {.count = 1, .reusable = true}, SHIFT(48),
  [1288] = {.count = 1, .reusable = true}, SHIFT(192),
  [1290] = {.count = 1, .reusable = true}, SHIFT(64),
  [1292] = {.count = 1, .reusable = true}, SHIFT(55),
  [1294] = {.count = 1, .reusable = true}, SHIFT(54),
  [1296] = {.count = 1, .reusable = true}, SHIFT(447),
  [1298] = {.count = 1, .reusable = true}, SHIFT(22),
  [1300] = {.count = 1, .reusable = true}, SHIFT(347),
  [1302] = {.count = 1, .reusable = true}, SHIFT(355),
  [1304] = {.count = 1, .reusable = true}, SHIFT(343),
  [1306] = {.count = 1, .reusable = true}, SHIFT(205),
  [1308] = {.count = 1, .reusable = true}, SHIFT(318),
  [1310] = {.count = 1, .reusable = true}, SHIFT(125),
  [1312] = {.count = 1, .reusable = true}, SHIFT(116),
  [1314] = {.count = 1, .reusable = true}, SHIFT(117),
  [1316] = {.count = 1, .reusable = true}, SHIFT(118),
  [1318] = {.count = 1, .reusable = true}, SHIFT(68),
  [1320] = {.count = 1, .reusable = true}, SHIFT(340),
  [1322] = {.count = 1, .reusable = true}, SHIFT(210),
  [1324] = {.count = 1, .reusable = true}, SHIFT(360),
  [1326] = {.count = 1, .reusable = true}, SHIFT(362),
  [1328] = {.count = 1, .reusable = true}, SHIFT(341),
  [1330] = {.count = 1, .reusable = true}, SHIFT(323),
  [1332] = {.count = 1, .reusable = true}, SHIFT(258),
  [1334] = {.count = 1, .reusable = true}, SHIFT(421),
  [1336] = {.count = 1, .reusable = true}, SHIFT(45),
  [1338] = {.count = 1, .reusable = true}, SHIFT(418),
  [1340] = {.count = 1, .reusable = true}, SHIFT(353),
  [1342] = {.count = 1, .reusable = true}, SHIFT(407),
  [1344] = {.count = 1, .reusable = true}, SHIFT(122),
  [1346] = {.count = 1, .reusable = true}, SHIFT(417),
  [1348] = {.count = 1, .reusable = true}, SHIFT(425),
  [1350] = {.count = 1, .reusable = true}, SHIFT(283),
  [1352] = {.count = 1, .reusable = true}, SHIFT(484),
  [1354] = {.count = 1, .reusable = true}, SHIFT(492),
  [1356] = {.count = 1, .reusable = true}, SHIFT(493),
  [1358] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1360] = {.count = 1, .reusable = true}, SHIFT(329),
  [1362] = {.count = 1, .reusable = true}, SHIFT(498),
  [1364] = {.count = 1, .reusable = true}, SHIFT(499),
  [1366] = {.count = 1, .reusable = true}, SHIFT(189),
  [1368] = {.count = 1, .reusable = true}, SHIFT(324),
  [1370] = {.count = 1, .reusable = true}, SHIFT(504),
  [1372] = {.count = 1, .reusable = true}, SHIFT(505),
  [1374] = {.count = 1, .reusable = true}, SHIFT(244),
  [1376] = {.count = 1, .reusable = true}, SHIFT(317),
  [1378] = {.count = 1, .reusable = true}, SHIFT(316),
  [1380] = {.count = 1, .reusable = true}, SHIFT(315),
  [1382] = {.count = 1, .reusable = true}, SHIFT(312),
  [1384] = {.count = 1, .reusable = true}, SHIFT(311),
  [1386] = {.count = 1, .reusable = true}, SHIFT(309),
  [1388] = {.count = 1, .reusable = true}, SHIFT(303),
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
