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
#define STATE_COUNT 560
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
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
  sym_arg_name = 27,
  sym_arg_default = 28,
  anon_sym_DASH_DASHchown_EQ = 29,
  sym_env_key = 30,
  aux_sym_env_value_token1 = 31,
  aux_sym_env_value_token2 = 32,
  aux_sym_env_value_token3 = 33,
  anon_sym_DASH = 34,
  aux_sym__port_part_token1 = 35,
  anon_sym_SLASH = 36,
  aux_sym_port_protocol_token1 = 37,
  aux_sym_port_protocol_token2 = 38,
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
  sym_hc_none = 56,
  anon_sym_DASH_DASHinterval = 57,
  aux_sym_hc_interval_token1 = 58,
  anon_sym_DASH_DASHtimeout = 59,
  anon_sym_DASH_DASHstart_DASHperiod = 60,
  anon_sym_DASH_DASHretires = 61,
  aux_sym_label_pair_token1 = 62,
  sym_label_key = 63,
  aux_sym_label_value_token1 = 64,
  sym_signal_num = 65,
  aux_sym_signal_name_token1 = 66,
  aux_sym_signal_name_token2 = 67,
  aux_sym_user_name_token1 = 68,
  aux_sym_user_id_token1 = 69,
  aux_sym_path_token1 = 70,
  aux_sym_path_token2 = 71,
  aux_sym_path_token3 = 72,
  aux_sym_path_token4 = 73,
  aux_sym__anything_token1 = 74,
  anon_sym_LBRACE = 75,
  anon_sym_RBRACE = 76,
  anon_sym_COLON_DASH = 77,
  aux_sym_variable_default_value_token1 = 78,
  anon_sym_COLON_PLUS = 79,
  sym__docker_variable = 80,
  sym_template_expr_curly_braces = 81,
  sym_template_expr_percent_signs = 82,
  aux_sym_template_expr_less_than_equals_token1 = 83,
  aux_sym_template_expr_less_than_equals_token2 = 84,
  aux_sym_template_expr_less_than_equals_token3 = 85,
  sym__space = 86,
  sym__blank_line = 87,
  sym__space_no_newline = 88,
  sym_comment = 89,
  sym_line_continuation = 90,
  sym_json_array = 91,
  sym_dockerfile = 92,
  sym__directive = 93,
  sym_add = 94,
  sym_arg = 95,
  sym_cmd = 96,
  sym_copy = 97,
  sym_entrypoint = 98,
  sym_env = 99,
  sym_expose = 100,
  sym_from = 101,
  sym_healthcheck = 102,
  sym_label = 103,
  sym_maintainer = 104,
  sym_onbuild = 105,
  sym_run = 106,
  sym_shell = 107,
  sym_stopsignal = 108,
  sym_user = 109,
  sym_volume = 110,
  sym_workdir = 111,
  sym__chown = 112,
  sym_chown = 113,
  aux_sym__env_pairs = 114,
  sym_env_pair = 115,
  sym_env_value = 116,
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
  aux_sym_env_value_repeat1 = 163,
  aux_sym_repository_repeat1 = 164,
  aux_sym__repository_start_repeat1 = 165,
  aux_sym__repository_start_repeat2 = 166,
  aux_sym__repository_start_repeat3 = 167,
  aux_sym__repository_start_repeat4 = 168,
  aux_sym_path_repeat1 = 169,
  aux_sym_path_repeat2 = 170,
  aux_sym_template_expr_less_than_equals_repeat1 = 171,
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
  [sym_label_key] = "label_key",
  [aux_sym_label_value_token1] = "label_value_token1",
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
  [aux_sym__env_pairs] = "_env_pairs",
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
  [aux_sym_env_value_repeat1] = "env_value_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
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
  [sym_label_key] = {
    .visible = true,
    .named = true,
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
  [aux_sym__env_pairs] = {
    .visible = false,
    .named = false,
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
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(315);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(318);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '{') ADVANCE(1113);
      if (lookahead == '}') ADVANCE(1114);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(1004);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(967);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(970);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(991);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(941);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(924);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(925);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(971);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(999);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(992);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(976);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(876);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1004);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(967);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(970);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(991);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(941);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(924);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(925);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(971);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(999);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(992);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(976);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1004);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(429);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(395);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(395);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '#') ADVANCE(1137);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(395);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1014);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1015);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(803);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(852);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(807);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(860);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(814);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(853);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(839);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(596);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(583);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(596);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(583);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(596);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(583);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(459);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(536);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(523);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(478);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(510);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      if (lookahead == '\\') ADVANCE(536);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(536);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(523);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(478);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(510);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      if (lookahead == '\\') ADVANCE(536);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(536);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(523);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(478);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(510);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      if (lookahead == '\\') ADVANCE(536);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(744);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(686);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(745);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(731);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '{') ADVANCE(758);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(744);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(686);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(745);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(731);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '{') ADVANCE(758);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(744);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(686);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(745);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(731);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '{') ADVANCE(758);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(463);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(670);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(625);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(657);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(683);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(670);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(625);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(657);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(683);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(670);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(625);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(657);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(683);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1137);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1027);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1032);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1025);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1022);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1023);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1029);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1034);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1026);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1033);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1030);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1014);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(209);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(170);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '}') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(199);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1137);
      if (lookahead == '[') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0) ADVANCE(1021);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1125);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(1124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1125);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1121);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1123);
      if (lookahead == '\\') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1123);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1128);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1117);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(200);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(424);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == '#') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(867);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(867);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(878);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(1004);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1004);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(875);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(1004);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(429);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(870);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(71);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '}') ADVANCE(1114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(873);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(536);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '{') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(452);
      if (lookahead == '{') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(452);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '{') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(1119);
      if (lookahead == '{') ADVANCE(1112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1119);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(453);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(1035);
      END_STATE();
    case 67:
      if (lookahead == '+') ADVANCE(1118);
      if (lookahead == '-') ADVANCE(1115);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(779);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(779);
      if (lookahead != 0) ADVANCE(1127);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(779);
      if (lookahead != 0) ADVANCE(1126);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(790);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == '#') ADVANCE(1141);
      if (lookahead == '=') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1128);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1035);
      END_STATE();
    case 106:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(778);
      END_STATE();
    case 107:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(783);
      END_STATE();
    case 108:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(781);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 114:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 135:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(871);
      END_STATE();
    case 137:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 138:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 139:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 140:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(237);
      END_STATE();
    case 149:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 175:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 180:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 191:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 194:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 197:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 198:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 199:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1144);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(35);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(1144);
      END_STATE();
    case 202:
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
    case 203:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 204:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 205:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(424);
      END_STATE();
    case 208:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(867);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(422);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(270);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_env_key);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(403);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(425);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '2') ADVANCE(437);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '5') ADVANCE(438);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '6') ADVANCE(439);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(1139);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(443);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(454);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 453:
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
          lookahead != '}') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(459);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(463);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
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
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
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
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
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
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
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
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
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
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(546);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
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
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(552);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
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
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(626);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(621);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(669);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(753);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(702);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(714);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(694);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(710);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(730);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(693);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(700);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(698);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(729);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(696);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(694);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(749);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(754);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(750);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(739);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(719);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(721);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(747);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(713);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(755);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(746);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(735);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(736);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(732);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(701);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(724);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(712);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(723);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(684);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(740);
      if (lookahead == '{') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(757);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(760);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(761);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(763);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(766);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(767);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(769);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(771);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(775);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretires);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(817);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(861);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(810);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(822);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(802);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(811);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(838);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(808);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(842);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(825);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(857);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(802);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(858);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(847);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(856);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(827);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(854);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(843);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(844);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(823);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(840);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(832);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(831);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(867);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(873);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '$') ADVANCE(1006);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1141);
      if (lookahead != 0) ADVANCE(875);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(876);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == '-') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == '-') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == '/') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'c') ADVANCE(894);
      if (lookahead == 'i') ADVANCE(903);
      if (lookahead == 'p') ADVANCE(898);
      if (lookahead == 'r') ADVANCE(891);
      if (lookahead == 's') ADVANCE(920);
      if (lookahead == 't') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'c') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'd') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'f') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'h') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'i') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'i') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'm') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'm') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'n') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'o') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'p') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'r') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'r') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'r') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 's') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'u') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'v') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'w') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(942);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(934);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(997);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1004);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead != 0) ADVANCE(1141);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '"') ADVANCE(1141);
      if (lookahead == '$') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(1007);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == '$') ADVANCE(1012);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1011);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(1007);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(1008);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1011);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1007);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(1008);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1011);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1011);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead != 0) ADVANCE(1141);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(1043);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(1043);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1015);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1039);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1018);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1017);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(1136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1044);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1049);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1052);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1063);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1059);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1111);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1079);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1089);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1036);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1037);
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1036);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1037);
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1038);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1039);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == ',') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1038);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1043);
      if (lookahead == ',') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(1144);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1041);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1042);
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == ',') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1041);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1042);
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == ',') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1041);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1042);
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1043);
      if (lookahead == ',') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1144);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(1136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1019);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1078);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1077);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1043);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1107);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1043);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1043);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1043);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1066);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1043);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1043);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1043);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1043);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1081);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1097);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1075);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1043);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1043);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1043);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1051);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1043);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1043);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1064);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1043);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1043);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1043);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1043);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1080);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1043);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1086);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1043);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1043);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1043);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1076);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1043);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1043);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1104);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1046);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1043);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1062);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1082);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1103);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1094);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1043);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1043);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1043);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1043);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1043);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1074);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1110);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1043);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1067);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1043);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1056);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1043);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1043);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1065);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1043);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1043);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1071);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1043);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1083);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1043);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1043);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1096);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1111:
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
          lookahead != 'v') ADVANCE(1043);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(759);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1117);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1117);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1119:
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
          lookahead != '}') ADVANCE(1119);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1121);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1121);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1123);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1123);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1125);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1132);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '\r') ADVANCE(1141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1135);
      if (lookahead != 0) ADVANCE(1019);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '\r') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1019);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1135);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(1141);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(783);
      if (lookahead != 0) ADVANCE(1141);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(781);
      if (lookahead != 0) ADVANCE(1141);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1141);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead != 0) ADVANCE(1141);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(1141);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 1144:
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
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 22},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 22},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
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
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 62},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 62},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 63},
  [225] = {.lex_state = 63},
  [226] = {.lex_state = 63},
  [227] = {.lex_state = 63},
  [228] = {.lex_state = 62},
  [229] = {.lex_state = 63},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 62},
  [232] = {.lex_state = 63},
  [233] = {.lex_state = 62},
  [234] = {.lex_state = 62},
  [235] = {.lex_state = 62},
  [236] = {.lex_state = 62},
  [237] = {.lex_state = 62},
  [238] = {.lex_state = 62},
  [239] = {.lex_state = 62},
  [240] = {.lex_state = 62},
  [241] = {.lex_state = 62},
  [242] = {.lex_state = 62},
  [243] = {.lex_state = 62},
  [244] = {.lex_state = 62},
  [245] = {.lex_state = 62},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 62},
  [248] = {.lex_state = 62},
  [249] = {.lex_state = 62},
  [250] = {.lex_state = 62},
  [251] = {.lex_state = 62},
  [252] = {.lex_state = 62},
  [253] = {.lex_state = 62},
  [254] = {.lex_state = 62},
  [255] = {.lex_state = 62},
  [256] = {.lex_state = 62},
  [257] = {.lex_state = 62},
  [258] = {.lex_state = 62},
  [259] = {.lex_state = 62},
  [260] = {.lex_state = 62},
  [261] = {.lex_state = 62},
  [262] = {.lex_state = 62},
  [263] = {.lex_state = 62},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 62},
  [266] = {.lex_state = 62},
  [267] = {.lex_state = 62},
  [268] = {.lex_state = 62},
  [269] = {.lex_state = 48},
  [270] = {.lex_state = 62},
  [271] = {.lex_state = 62},
  [272] = {.lex_state = 50},
  [273] = {.lex_state = 23},
  [274] = {.lex_state = 23},
  [275] = {.lex_state = 23},
  [276] = {.lex_state = 50},
  [277] = {.lex_state = 50},
  [278] = {.lex_state = 54},
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 58},
  [281] = {.lex_state = 30},
  [282] = {.lex_state = 30},
  [283] = {.lex_state = 30},
  [284] = {.lex_state = 23},
  [285] = {.lex_state = 30},
  [286] = {.lex_state = 54},
  [287] = {.lex_state = 54},
  [288] = {.lex_state = 54},
  [289] = {.lex_state = 54},
  [290] = {.lex_state = 54},
  [291] = {.lex_state = 1009},
  [292] = {.lex_state = 54},
  [293] = {.lex_state = 54},
  [294] = {.lex_state = 1009},
  [295] = {.lex_state = 54},
  [296] = {.lex_state = 54},
  [297] = {.lex_state = 1009},
  [298] = {.lex_state = 59},
  [299] = {.lex_state = 54},
  [300] = {.lex_state = 60},
  [301] = {.lex_state = 58},
  [302] = {.lex_state = 1009},
  [303] = {.lex_state = 54},
  [304] = {.lex_state = 49},
  [305] = {.lex_state = 30},
  [306] = {.lex_state = 28},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 51},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 49},
  [312] = {.lex_state = 49},
  [313] = {.lex_state = 61},
  [314] = {.lex_state = 1009},
  [315] = {.lex_state = 51},
  [316] = {.lex_state = 59},
  [317] = {.lex_state = 30},
  [318] = {.lex_state = 23},
  [319] = {.lex_state = 23},
  [320] = {.lex_state = 23},
  [321] = {.lex_state = 50},
  [322] = {.lex_state = 60},
  [323] = {.lex_state = 49},
  [324] = {.lex_state = 61},
  [325] = {.lex_state = 23},
  [326] = {.lex_state = 23},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 23},
  [329] = {.lex_state = 23},
  [330] = {.lex_state = 54},
  [331] = {.lex_state = 30},
  [332] = {.lex_state = 59},
  [333] = {.lex_state = 30},
  [334] = {.lex_state = 61},
  [335] = {.lex_state = 58},
  [336] = {.lex_state = 30},
  [337] = {.lex_state = 60},
  [338] = {.lex_state = 28},
  [339] = {.lex_state = 60},
  [340] = {.lex_state = 58},
  [341] = {.lex_state = 59},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 61},
  [344] = {.lex_state = 28},
  [345] = {.lex_state = 1009},
  [346] = {.lex_state = 50},
  [347] = {.lex_state = 1009},
  [348] = {.lex_state = 50},
  [349] = {.lex_state = 1009},
  [350] = {.lex_state = 50},
  [351] = {.lex_state = 50},
  [352] = {.lex_state = 50},
  [353] = {.lex_state = 51},
  [354] = {.lex_state = 51},
  [355] = {.lex_state = 44},
  [356] = {.lex_state = 51},
  [357] = {.lex_state = 50},
  [358] = {.lex_state = 59},
  [359] = {.lex_state = 50},
  [360] = {.lex_state = 59},
  [361] = {.lex_state = 50},
  [362] = {.lex_state = 59},
  [363] = {.lex_state = 45},
  [364] = {.lex_state = 1009},
  [365] = {.lex_state = 64},
  [366] = {.lex_state = 64},
  [367] = {.lex_state = 64},
  [368] = {.lex_state = 1010},
  [369] = {.lex_state = 51},
  [370] = {.lex_state = 64},
  [371] = {.lex_state = 65},
  [372] = {.lex_state = 64},
  [373] = {.lex_state = 64},
  [374] = {.lex_state = 64},
  [375] = {.lex_state = 26},
  [376] = {.lex_state = 64},
  [377] = {.lex_state = 64},
  [378] = {.lex_state = 26},
  [379] = {.lex_state = 64},
  [380] = {.lex_state = 64},
  [381] = {.lex_state = 64},
  [382] = {.lex_state = 51},
  [383] = {.lex_state = 64},
  [384] = {.lex_state = 51},
  [385] = {.lex_state = 23},
  [386] = {.lex_state = 51},
  [387] = {.lex_state = 64},
  [388] = {.lex_state = 26},
  [389] = {.lex_state = 64},
  [390] = {.lex_state = 64},
  [391] = {.lex_state = 51},
  [392] = {.lex_state = 64},
  [393] = {.lex_state = 64},
  [394] = {.lex_state = 64},
  [395] = {.lex_state = 64},
  [396] = {.lex_state = 64},
  [397] = {.lex_state = 52},
  [398] = {.lex_state = 64},
  [399] = {.lex_state = 23},
  [400] = {.lex_state = 23},
  [401] = {.lex_state = 53},
  [402] = {.lex_state = 23},
  [403] = {.lex_state = 1010},
  [404] = {.lex_state = 64},
  [405] = {.lex_state = 51},
  [406] = {.lex_state = 64},
  [407] = {.lex_state = 23},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 23},
  [410] = {.lex_state = 29},
  [411] = {.lex_state = 26},
  [412] = {.lex_state = 26},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 23},
  [415] = {.lex_state = 57},
  [416] = {.lex_state = 57},
  [417] = {.lex_state = 29},
  [418] = {.lex_state = 57},
  [419] = {.lex_state = 54},
  [420] = {.lex_state = 54},
  [421] = {.lex_state = 54},
  [422] = {.lex_state = 54},
  [423] = {.lex_state = 31},
  [424] = {.lex_state = 32},
  [425] = {.lex_state = 23},
  [426] = {.lex_state = 23},
  [427] = {.lex_state = 27},
  [428] = {.lex_state = 27},
  [429] = {.lex_state = 33},
  [430] = {.lex_state = 64},
  [431] = {.lex_state = 23},
  [432] = {.lex_state = 23},
  [433] = {.lex_state = 23},
  [434] = {.lex_state = 23},
  [435] = {.lex_state = 56},
  [436] = {.lex_state = 54},
  [437] = {.lex_state = 104},
  [438] = {.lex_state = 23},
  [439] = {.lex_state = 23},
  [440] = {.lex_state = 23},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 23},
  [443] = {.lex_state = 23},
  [444] = {.lex_state = 23},
  [445] = {.lex_state = 27},
  [446] = {.lex_state = 27},
  [447] = {.lex_state = 32},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 23},
  [450] = {.lex_state = 23},
  [451] = {.lex_state = 23},
  [452] = {.lex_state = 54},
  [453] = {.lex_state = 23},
  [454] = {.lex_state = 23},
  [455] = {.lex_state = 27},
  [456] = {.lex_state = 31},
  [457] = {.lex_state = 32},
  [458] = {.lex_state = 32},
  [459] = {.lex_state = 31},
  [460] = {.lex_state = 23},
  [461] = {.lex_state = 54},
  [462] = {.lex_state = 23},
  [463] = {.lex_state = 32},
  [464] = {.lex_state = 27},
  [465] = {.lex_state = 55},
  [466] = {.lex_state = 23},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 27},
  [469] = {.lex_state = 27},
  [470] = {.lex_state = 27},
  [471] = {.lex_state = 27},
  [472] = {.lex_state = 27},
  [473] = {.lex_state = 27},
  [474] = {.lex_state = 27},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 27},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 23},
  [479] = {.lex_state = 54},
  [480] = {.lex_state = 34},
  [481] = {.lex_state = 23},
  [482] = {.lex_state = 34},
  [483] = {.lex_state = 54},
  [484] = {.lex_state = 27},
  [485] = {.lex_state = 27},
  [486] = {.lex_state = 27},
  [487] = {.lex_state = 27},
  [488] = {.lex_state = 27},
  [489] = {.lex_state = 27},
  [490] = {.lex_state = 23},
  [491] = {.lex_state = 27},
  [492] = {.lex_state = 27},
  [493] = {.lex_state = 27},
  [494] = {.lex_state = 27},
  [495] = {.lex_state = 27},
  [496] = {.lex_state = 23},
  [497] = {.lex_state = 31},
  [498] = {.lex_state = 23},
  [499] = {.lex_state = 32},
  [500] = {.lex_state = 23},
  [501] = {.lex_state = 23},
  [502] = {.lex_state = 23},
  [503] = {.lex_state = 23},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 23},
  [506] = {.lex_state = 23},
  [507] = {.lex_state = 54},
  [508] = {.lex_state = 23},
  [509] = {.lex_state = 23},
  [510] = {.lex_state = 23},
  [511] = {.lex_state = 54},
  [512] = {.lex_state = 23},
  [513] = {.lex_state = 23},
  [514] = {.lex_state = 54},
  [515] = {.lex_state = 23},
  [516] = {.lex_state = 23},
  [517] = {.lex_state = 54},
  [518] = {.lex_state = 54},
  [519] = {.lex_state = 54},
  [520] = {.lex_state = 54},
  [521] = {.lex_state = 23},
  [522] = {.lex_state = 23},
  [523] = {.lex_state = 54},
  [524] = {.lex_state = 54},
  [525] = {.lex_state = 54},
  [526] = {.lex_state = 23},
  [527] = {.lex_state = 54},
  [528] = {.lex_state = 32},
  [529] = {.lex_state = 54},
  [530] = {.lex_state = 23},
  [531] = {.lex_state = 54},
  [532] = {.lex_state = 27},
  [533] = {.lex_state = 54},
  [534] = {.lex_state = 54},
  [535] = {.lex_state = 54},
  [536] = {.lex_state = 23},
  [537] = {.lex_state = 54},
  [538] = {.lex_state = 23},
  [539] = {.lex_state = 23},
  [540] = {.lex_state = 64},
  [541] = {.lex_state = 23},
  [542] = {.lex_state = 31},
  [543] = {.lex_state = 32},
  [544] = {.lex_state = 54},
  [545] = {.lex_state = 64},
  [546] = {.lex_state = 31},
  [547] = {.lex_state = 32},
  [548] = {.lex_state = 23},
  [549] = {.lex_state = 64},
  [550] = {.lex_state = 31},
  [551] = {.lex_state = 32},
  [552] = {.lex_state = 23},
  [553] = {.lex_state = 64},
  [554] = {.lex_state = 64},
  [555] = {.lex_state = 64},
  [556] = {.lex_state = 64},
  [557] = {.lex_state = 64},
  [558] = {.lex_state = 64},
  [559] = {.lex_state = 64},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_add_token1] = ACTIONS(1),
    [aux_sym_arg_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_cmd_token1] = ACTIONS(1),
    [aux_sym_copy_token1] = ACTIONS(1),
    [aux_sym_entrypoint_token1] = ACTIONS(1),
    [aux_sym_env_token1] = ACTIONS(1),
    [aux_sym_expose_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [aux_sym_healthcheck_token1] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [aux_sym_maintainer_token1] = ACTIONS(1),
    [aux_sym_onbuild_token1] = ACTIONS(1),
    [aux_sym_run_token1] = ACTIONS(1),
    [aux_sym_shell_token1] = ACTIONS(1),
    [aux_sym_stopsignal_token1] = ACTIONS(1),
    [aux_sym_user_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_volume_token1] = ACTIONS(1),
    [aux_sym_workdir_token1] = ACTIONS(1),
    [sym_arg_name] = ACTIONS(1),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(1),
    [aux_sym_env_value_token1] = ACTIONS(1),
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
    [anon_sym_DASH_DASHretires] = ACTIONS(1),
    [aux_sym_label_pair_token1] = ACTIONS(1),
    [sym_signal_num] = ACTIONS(1),
    [aux_sym_signal_name_token1] = ACTIONS(1),
    [aux_sym_user_id_token1] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym_path_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(466),
    [sym__directive] = STATE(204),
    [sym_add] = STATE(204),
    [sym_arg] = STATE(204),
    [sym_cmd] = STATE(204),
    [sym_copy] = STATE(204),
    [sym_entrypoint] = STATE(204),
    [sym_env] = STATE(204),
    [sym_expose] = STATE(204),
    [sym_from] = STATE(204),
    [sym_healthcheck] = STATE(204),
    [sym_label] = STATE(204),
    [sym_maintainer] = STATE(204),
    [sym_onbuild] = STATE(204),
    [sym_run] = STATE(204),
    [sym_shell] = STATE(204),
    [sym_stopsignal] = STATE(204),
    [sym_user] = STATE(204),
    [sym_volume] = STATE(204),
    [sym_workdir] = STATE(204),
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
    [sym__directive] = STATE(204),
    [sym_add] = STATE(204),
    [sym_arg] = STATE(204),
    [sym_cmd] = STATE(204),
    [sym_copy] = STATE(204),
    [sym_entrypoint] = STATE(204),
    [sym_env] = STATE(204),
    [sym_expose] = STATE(204),
    [sym_from] = STATE(204),
    [sym_healthcheck] = STATE(204),
    [sym_label] = STATE(204),
    [sym_maintainer] = STATE(204),
    [sym_onbuild] = STATE(204),
    [sym_run] = STATE(204),
    [sym_shell] = STATE(204),
    [sym_stopsignal] = STATE(204),
    [sym_user] = STATE(204),
    [sym_volume] = STATE(204),
    [sym_workdir] = STATE(204),
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
    [sym__directive] = STATE(204),
    [sym_add] = STATE(204),
    [sym_arg] = STATE(204),
    [sym_cmd] = STATE(204),
    [sym_copy] = STATE(204),
    [sym_entrypoint] = STATE(204),
    [sym_env] = STATE(204),
    [sym_expose] = STATE(204),
    [sym_from] = STATE(204),
    [sym_healthcheck] = STATE(204),
    [sym_label] = STATE(204),
    [sym_maintainer] = STATE(204),
    [sym_onbuild] = STATE(204),
    [sym_run] = STATE(204),
    [sym_shell] = STATE(204),
    [sym_stopsignal] = STATE(204),
    [sym_user] = STATE(204),
    [sym_volume] = STATE(204),
    [sym_workdir] = STATE(204),
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
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym__port] = STATE(106),
    [sym_port] = STATE(106),
    [sym_port_range] = STATE(106),
    [sym__port_part] = STATE(70),
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
    [sym__port] = STATE(106),
    [sym_port] = STATE(106),
    [sym_port_range] = STATE(106),
    [sym__port_part] = STATE(70),
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
    [sym_add] = STATE(187),
    [sym_arg] = STATE(187),
    [sym_cmd] = STATE(187),
    [sym_copy] = STATE(187),
    [sym_entrypoint] = STATE(187),
    [sym_env] = STATE(187),
    [sym_expose] = STATE(187),
    [sym_healthcheck] = STATE(187),
    [sym_label] = STATE(187),
    [sym_run] = STATE(187),
    [sym_shell] = STATE(187),
    [sym_stopsignal] = STATE(187),
    [sym_user] = STATE(187),
    [sym_volume] = STATE(187),
    [sym_workdir] = STATE(187),
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
    [aux_sym__repository_start_repeat3] = STATE(14),
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
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [anon_sym_SLASH] = ACTIONS(147),
    [aux_sym__repository_start_token3] = ACTIONS(149),
    [aux_sym__repository_start_token4] = ACTIONS(151),
    [aux_sym__repository_start_token7] = ACTIONS(151),
    [aux_sym__repository_start_token16] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
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
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(156),
    [aux_sym_add_token1] = ACTIONS(158),
    [aux_sym_arg_token1] = ACTIONS(158),
    [aux_sym_cmd_token1] = ACTIONS(158),
    [aux_sym_copy_token1] = ACTIONS(158),
    [aux_sym_entrypoint_token1] = ACTIONS(158),
    [aux_sym_env_token1] = ACTIONS(158),
    [aux_sym_expose_token1] = ACTIONS(158),
    [aux_sym_from_token1] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(156),
    [aux_sym_healthcheck_token1] = ACTIONS(158),
    [aux_sym_label_token1] = ACTIONS(158),
    [aux_sym_maintainer_token1] = ACTIONS(158),
    [aux_sym_onbuild_token1] = ACTIONS(158),
    [aux_sym_run_token1] = ACTIONS(158),
    [aux_sym_shell_token1] = ACTIONS(158),
    [aux_sym_stopsignal_token1] = ACTIONS(158),
    [aux_sym_user_token1] = ACTIONS(158),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token12] = ACTIONS(160),
    [aux_sym__repository_start_token15] = ACTIONS(160),
    [aux_sym__repository_start_token16] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym__repository_start_token8] = ACTIONS(167),
    [aux_sym__repository_start_token11] = ACTIONS(167),
    [aux_sym__repository_start_token16] = ACTIONS(163),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [anon_sym_SLASH] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [anon_sym_SLASH] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [anon_sym_SLASH] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(176),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [aux_sym__repository_start_token16] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
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
    [anon_sym_DOLLAR] = ACTIONS(184),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
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
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
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
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
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
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
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
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token7] = ACTIONS(199),
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
    [sym_port_protocol] = STATE(92),
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
    [aux_sym__repository_start_repeat4] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(156),
    [aux_sym_add_token1] = ACTIONS(158),
    [aux_sym_arg_token1] = ACTIONS(158),
    [aux_sym_cmd_token1] = ACTIONS(158),
    [aux_sym_copy_token1] = ACTIONS(158),
    [aux_sym_entrypoint_token1] = ACTIONS(158),
    [aux_sym_env_token1] = ACTIONS(158),
    [aux_sym_expose_token1] = ACTIONS(158),
    [aux_sym_from_token1] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [aux_sym_healthcheck_token1] = ACTIONS(158),
    [aux_sym_label_token1] = ACTIONS(158),
    [aux_sym_maintainer_token1] = ACTIONS(158),
    [aux_sym_onbuild_token1] = ACTIONS(158),
    [aux_sym_run_token1] = ACTIONS(158),
    [aux_sym_shell_token1] = ACTIONS(158),
    [aux_sym_stopsignal_token1] = ACTIONS(158),
    [aux_sym_user_token1] = ACTIONS(158),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token12] = ACTIONS(215),
    [aux_sym__repository_start_token15] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [sym_port_protocol] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_add_token1] = ACTIONS(218),
    [aux_sym_arg_token1] = ACTIONS(218),
    [aux_sym_cmd_token1] = ACTIONS(218),
    [aux_sym_copy_token1] = ACTIONS(218),
    [aux_sym_entrypoint_token1] = ACTIONS(218),
    [aux_sym_env_token1] = ACTIONS(218),
    [aux_sym_expose_token1] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [aux_sym_from_token1] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [aux_sym_healthcheck_token1] = ACTIONS(218),
    [aux_sym_label_token1] = ACTIONS(218),
    [aux_sym_maintainer_token1] = ACTIONS(218),
    [aux_sym_onbuild_token1] = ACTIONS(218),
    [aux_sym_run_token1] = ACTIONS(218),
    [aux_sym_shell_token1] = ACTIONS(218),
    [aux_sym_stopsignal_token1] = ACTIONS(218),
    [aux_sym_user_token1] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [aux_sym_volume_token1] = ACTIONS(218),
    [aux_sym_workdir_token1] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [aux_sym__port_part_token1] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(218),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
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
    [anon_sym_DOLLAR] = ACTIONS(220),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token2] = ACTIONS(220),
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat1] = STATE(29),
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
    [anon_sym_DOLLAR] = ACTIONS(220),
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token2] = ACTIONS(220),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(226),
    [aux_sym__repository_start_token4] = ACTIONS(228),
    [aux_sym__repository_start_token7] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [aux_sym__repository_start_token4] = ACTIONS(228),
    [aux_sym__repository_start_token7] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(37),
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
    [aux_sym__repository_start_token3] = ACTIONS(226),
    [aux_sym__repository_start_token8] = ACTIONS(230),
    [aux_sym__repository_start_token11] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
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
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [aux_sym__repository_start_token8] = ACTIONS(230),
    [aux_sym__repository_start_token11] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(222),
    [aux_sym__repository_start_token12] = ACTIONS(232),
    [aux_sym__repository_start_token15] = ACTIONS(232),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
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
    [anon_sym_DOLLAR] = ACTIONS(234),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(234),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat3] = STATE(37),
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
    [aux_sym__repository_start_token8] = ACTIONS(237),
    [aux_sym__repository_start_token11] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat4] = STATE(27),
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
    [aux_sym__repository_start_token3] = ACTIONS(226),
    [aux_sym__repository_start_token12] = ACTIONS(232),
    [aux_sym__repository_start_token15] = ACTIONS(232),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat2] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(149),
    [aux_sym__repository_start_token4] = ACTIONS(240),
    [aux_sym__repository_start_token7] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
    [sym__space_no_newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(50),
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
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_volume_token1] = ACTIONS(243),
    [aux_sym_workdir_token1] = ACTIONS(243),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
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
  [42] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token7] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [43] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(253),
    [aux_sym_healthcheck_token1] = ACTIONS(255),
    [aux_sym_label_token1] = ACTIONS(255),
    [aux_sym_maintainer_token1] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(255),
    [aux_sym_run_token1] = ACTIONS(255),
    [aux_sym_shell_token1] = ACTIONS(255),
    [aux_sym_stopsignal_token1] = ACTIONS(255),
    [aux_sym_user_token1] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(255),
    [aux_sym_workdir_token1] = ACTIONS(255),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(253),
    [sym__space_no_newline] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
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
  [45] = {
    [aux_sym__repository_start_repeat2] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(253),
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
    [aux_sym__repository_start_token3] = ACTIONS(257),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(253),
    [sym__space_no_newline] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [46] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_add_token1] = ACTIONS(259),
    [aux_sym_arg_token1] = ACTIONS(259),
    [aux_sym_cmd_token1] = ACTIONS(259),
    [aux_sym_copy_token1] = ACTIONS(259),
    [aux_sym_entrypoint_token1] = ACTIONS(259),
    [aux_sym_env_token1] = ACTIONS(259),
    [aux_sym_expose_token1] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [aux_sym_from_token1] = ACTIONS(259),
    [aux_sym_healthcheck_token1] = ACTIONS(259),
    [aux_sym_label_token1] = ACTIONS(259),
    [aux_sym_maintainer_token1] = ACTIONS(259),
    [aux_sym_onbuild_token1] = ACTIONS(259),
    [aux_sym_run_token1] = ACTIONS(259),
    [aux_sym_shell_token1] = ACTIONS(259),
    [aux_sym_stopsignal_token1] = ACTIONS(259),
    [aux_sym_user_token1] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_volume_token1] = ACTIONS(259),
    [aux_sym_workdir_token1] = ACTIONS(259),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [47] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [aux_sym_from_token1] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
    [aux_sym__repository_start_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(253),
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
    [aux_sym__repository_start_token3] = ACTIONS(257),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(253),
    [sym__space_no_newline] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
    [aux_sym__repository_start_repeat4] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(253),
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
    [aux_sym__repository_start_token3] = ACTIONS(257),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(253),
    [sym__space_no_newline] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_healthcheck_token1] = ACTIONS(263),
    [aux_sym_label_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_onbuild_token1] = ACTIONS(263),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_shell_token1] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(263),
    [aux_sym_user_token1] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
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
  [52] = {
    [aux_sym_path_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_add_token1] = ACTIONS(277),
    [aux_sym_arg_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_copy_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_env_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym_healthcheck_token1] = ACTIONS(277),
    [aux_sym_label_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_onbuild_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym_path_token1] = ACTIONS(281),
    [aux_sym_path_token2] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
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
  [54] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym__repository_start_token3] = ACTIONS(291),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [aux_sym_from_token1] = ACTIONS(293),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [56] = {
    [aux_sym_path_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_add_token1] = ACTIONS(295),
    [aux_sym_arg_token1] = ACTIONS(295),
    [aux_sym_cmd_token1] = ACTIONS(295),
    [aux_sym_copy_token1] = ACTIONS(295),
    [aux_sym_entrypoint_token1] = ACTIONS(295),
    [aux_sym_env_token1] = ACTIONS(295),
    [aux_sym_expose_token1] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [aux_sym_from_token1] = ACTIONS(295),
    [aux_sym_healthcheck_token1] = ACTIONS(295),
    [aux_sym_label_token1] = ACTIONS(295),
    [aux_sym_maintainer_token1] = ACTIONS(295),
    [aux_sym_onbuild_token1] = ACTIONS(295),
    [aux_sym_run_token1] = ACTIONS(295),
    [aux_sym_shell_token1] = ACTIONS(295),
    [aux_sym_stopsignal_token1] = ACTIONS(295),
    [aux_sym_user_token1] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym_path_token1] = ACTIONS(297),
    [aux_sym_path_token2] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [57] = {
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
    [aux_sym__repository_start_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym__repository_start_token3] = ACTIONS(291),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym__repository_start_token3] = ACTIONS(291),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
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
  [62] = {
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
  [63] = {
    [aux_sym_path_repeat1] = STATE(63),
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
  [64] = {
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
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(313),
    [aux_sym_arg_token1] = ACTIONS(313),
    [aux_sym_cmd_token1] = ACTIONS(313),
    [aux_sym_copy_token1] = ACTIONS(313),
    [aux_sym_entrypoint_token1] = ACTIONS(313),
    [aux_sym_env_token1] = ACTIONS(313),
    [aux_sym_expose_token1] = ACTIONS(313),
    [aux_sym_from_token1] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(311),
    [aux_sym_healthcheck_token1] = ACTIONS(313),
    [aux_sym_label_token1] = ACTIONS(313),
    [aux_sym_maintainer_token1] = ACTIONS(313),
    [aux_sym_onbuild_token1] = ACTIONS(313),
    [aux_sym_run_token1] = ACTIONS(313),
    [aux_sym_shell_token1] = ACTIONS(313),
    [aux_sym_stopsignal_token1] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(170),
    [aux_sym_arg_token1] = ACTIONS(170),
    [aux_sym_cmd_token1] = ACTIONS(170),
    [aux_sym_copy_token1] = ACTIONS(170),
    [aux_sym_entrypoint_token1] = ACTIONS(170),
    [aux_sym_env_token1] = ACTIONS(170),
    [aux_sym_expose_token1] = ACTIONS(170),
    [aux_sym_from_token1] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(170),
    [aux_sym_healthcheck_token1] = ACTIONS(170),
    [aux_sym_label_token1] = ACTIONS(170),
    [aux_sym_maintainer_token1] = ACTIONS(170),
    [aux_sym_onbuild_token1] = ACTIONS(170),
    [aux_sym_run_token1] = ACTIONS(170),
    [aux_sym_shell_token1] = ACTIONS(170),
    [aux_sym_stopsignal_token1] = ACTIONS(170),
    [aux_sym_user_token1] = ACTIONS(170),
    [aux_sym_volume_token1] = ACTIONS(170),
    [aux_sym_workdir_token1] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(174),
    [aux_sym__repository_start_token16] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_add_token1] = ACTIONS(295),
    [aux_sym_arg_token1] = ACTIONS(295),
    [aux_sym_cmd_token1] = ACTIONS(295),
    [aux_sym_copy_token1] = ACTIONS(295),
    [aux_sym_entrypoint_token1] = ACTIONS(295),
    [aux_sym_env_token1] = ACTIONS(295),
    [aux_sym_expose_token1] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [aux_sym_from_token1] = ACTIONS(295),
    [aux_sym_healthcheck_token1] = ACTIONS(295),
    [aux_sym_label_token1] = ACTIONS(295),
    [aux_sym_maintainer_token1] = ACTIONS(295),
    [aux_sym_onbuild_token1] = ACTIONS(295),
    [aux_sym_run_token1] = ACTIONS(295),
    [aux_sym_shell_token1] = ACTIONS(295),
    [aux_sym_stopsignal_token1] = ACTIONS(295),
    [aux_sym_user_token1] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym_path_token1] = ACTIONS(299),
    [aux_sym_path_token2] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
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
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(321),
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
    [anon_sym_SLASH] = ACTIONS(325),
    [aux_sym__repository_start_token16] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym__space_no_newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym_add_token1] = ACTIONS(327),
    [aux_sym_arg_token1] = ACTIONS(327),
    [aux_sym_cmd_token1] = ACTIONS(327),
    [aux_sym_copy_token1] = ACTIONS(327),
    [aux_sym_entrypoint_token1] = ACTIONS(327),
    [aux_sym_env_token1] = ACTIONS(327),
    [aux_sym_expose_token1] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [aux_sym_healthcheck_token1] = ACTIONS(327),
    [aux_sym_label_token1] = ACTIONS(327),
    [aux_sym_maintainer_token1] = ACTIONS(327),
    [aux_sym_onbuild_token1] = ACTIONS(327),
    [aux_sym_run_token1] = ACTIONS(327),
    [aux_sym_shell_token1] = ACTIONS(327),
    [aux_sym_stopsignal_token1] = ACTIONS(327),
    [aux_sym_user_token1] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [aux_sym_volume_token1] = ACTIONS(327),
    [aux_sym_workdir_token1] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(329),
    [aux_sym__port_part_token1] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [aux_sym_add_token1] = ACTIONS(331),
    [aux_sym_arg_token1] = ACTIONS(331),
    [aux_sym_cmd_token1] = ACTIONS(331),
    [aux_sym_copy_token1] = ACTIONS(331),
    [aux_sym_entrypoint_token1] = ACTIONS(331),
    [aux_sym_env_token1] = ACTIONS(331),
    [aux_sym_expose_token1] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_from_token1] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
    [aux_sym_healthcheck_token1] = ACTIONS(331),
    [aux_sym_label_token1] = ACTIONS(331),
    [aux_sym_maintainer_token1] = ACTIONS(331),
    [aux_sym_onbuild_token1] = ACTIONS(331),
    [aux_sym_run_token1] = ACTIONS(331),
    [aux_sym_shell_token1] = ACTIONS(331),
    [aux_sym_stopsignal_token1] = ACTIONS(331),
    [aux_sym_user_token1] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [aux_sym_volume_token1] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [aux_sym__port_part_token1] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(333),
    [aux_sym_arg_token1] = ACTIONS(333),
    [aux_sym_cmd_token1] = ACTIONS(333),
    [aux_sym_copy_token1] = ACTIONS(333),
    [aux_sym_entrypoint_token1] = ACTIONS(333),
    [aux_sym_env_token1] = ACTIONS(333),
    [aux_sym_expose_token1] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [aux_sym_from_token1] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [aux_sym_healthcheck_token1] = ACTIONS(333),
    [aux_sym_label_token1] = ACTIONS(333),
    [aux_sym_maintainer_token1] = ACTIONS(333),
    [aux_sym_onbuild_token1] = ACTIONS(333),
    [aux_sym_run_token1] = ACTIONS(333),
    [aux_sym_shell_token1] = ACTIONS(333),
    [aux_sym_stopsignal_token1] = ACTIONS(333),
    [aux_sym_user_token1] = ACTIONS(333),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [aux_sym_volume_token1] = ACTIONS(333),
    [aux_sym_workdir_token1] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [aux_sym__port_part_token1] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
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
  [74] = {
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
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym_add_token1] = ACTIONS(337),
    [aux_sym_arg_token1] = ACTIONS(337),
    [aux_sym_cmd_token1] = ACTIONS(337),
    [aux_sym_copy_token1] = ACTIONS(337),
    [aux_sym_entrypoint_token1] = ACTIONS(337),
    [aux_sym_env_token1] = ACTIONS(337),
    [aux_sym_expose_token1] = ACTIONS(337),
    [aux_sym_from_token1] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(337),
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
    [anon_sym_SLASH] = ACTIONS(341),
    [aux_sym__repository_start_token16] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(337),
    [sym__space_no_newline] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
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
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [aux_sym_add_token1] = ACTIONS(343),
    [aux_sym_arg_token1] = ACTIONS(343),
    [aux_sym_cmd_token1] = ACTIONS(343),
    [aux_sym_copy_token1] = ACTIONS(343),
    [aux_sym_entrypoint_token1] = ACTIONS(343),
    [aux_sym_env_token1] = ACTIONS(343),
    [aux_sym_expose_token1] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym_healthcheck_token1] = ACTIONS(343),
    [aux_sym_label_token1] = ACTIONS(343),
    [aux_sym_maintainer_token1] = ACTIONS(343),
    [aux_sym_onbuild_token1] = ACTIONS(343),
    [aux_sym_run_token1] = ACTIONS(343),
    [aux_sym_shell_token1] = ACTIONS(343),
    [aux_sym_stopsignal_token1] = ACTIONS(343),
    [aux_sym_user_token1] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [aux_sym_path_token1] = ACTIONS(345),
    [aux_sym_path_token2] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [78] = {
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
    [aux_sym_path_token1] = ACTIONS(205),
    [aux_sym_path_token2] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
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
  [80] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(349),
    [aux_sym_arg_token1] = ACTIONS(349),
    [aux_sym_cmd_token1] = ACTIONS(349),
    [aux_sym_copy_token1] = ACTIONS(349),
    [aux_sym_entrypoint_token1] = ACTIONS(349),
    [aux_sym_env_token1] = ACTIONS(349),
    [aux_sym_expose_token1] = ACTIONS(349),
    [aux_sym_from_token1] = ACTIONS(349),
    [aux_sym_healthcheck_token1] = ACTIONS(349),
    [aux_sym_label_token1] = ACTIONS(349),
    [aux_sym_maintainer_token1] = ACTIONS(349),
    [aux_sym_onbuild_token1] = ACTIONS(349),
    [aux_sym_run_token1] = ACTIONS(349),
    [aux_sym_shell_token1] = ACTIONS(349),
    [aux_sym_stopsignal_token1] = ACTIONS(349),
    [aux_sym_user_token1] = ACTIONS(349),
    [aux_sym_volume_token1] = ACTIONS(349),
    [aux_sym_workdir_token1] = ACTIONS(349),
    [aux_sym__repository_start_token3] = ACTIONS(351),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym__space_no_newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [81] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(349),
    [aux_sym_arg_token1] = ACTIONS(349),
    [aux_sym_cmd_token1] = ACTIONS(349),
    [aux_sym_copy_token1] = ACTIONS(349),
    [aux_sym_entrypoint_token1] = ACTIONS(349),
    [aux_sym_env_token1] = ACTIONS(349),
    [aux_sym_expose_token1] = ACTIONS(349),
    [aux_sym_from_token1] = ACTIONS(349),
    [aux_sym_healthcheck_token1] = ACTIONS(349),
    [aux_sym_label_token1] = ACTIONS(349),
    [aux_sym_maintainer_token1] = ACTIONS(349),
    [aux_sym_onbuild_token1] = ACTIONS(349),
    [aux_sym_run_token1] = ACTIONS(349),
    [aux_sym_shell_token1] = ACTIONS(349),
    [aux_sym_stopsignal_token1] = ACTIONS(349),
    [aux_sym_user_token1] = ACTIONS(349),
    [aux_sym_volume_token1] = ACTIONS(349),
    [aux_sym_workdir_token1] = ACTIONS(349),
    [aux_sym__repository_start_token3] = ACTIONS(351),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym__space_no_newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [82] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(349),
    [aux_sym_arg_token1] = ACTIONS(349),
    [aux_sym_cmd_token1] = ACTIONS(349),
    [aux_sym_copy_token1] = ACTIONS(349),
    [aux_sym_entrypoint_token1] = ACTIONS(349),
    [aux_sym_env_token1] = ACTIONS(349),
    [aux_sym_expose_token1] = ACTIONS(349),
    [aux_sym_from_token1] = ACTIONS(349),
    [aux_sym_healthcheck_token1] = ACTIONS(349),
    [aux_sym_label_token1] = ACTIONS(349),
    [aux_sym_maintainer_token1] = ACTIONS(349),
    [aux_sym_onbuild_token1] = ACTIONS(349),
    [aux_sym_run_token1] = ACTIONS(349),
    [aux_sym_shell_token1] = ACTIONS(349),
    [aux_sym_stopsignal_token1] = ACTIONS(349),
    [aux_sym_user_token1] = ACTIONS(349),
    [aux_sym_volume_token1] = ACTIONS(349),
    [aux_sym_workdir_token1] = ACTIONS(349),
    [aux_sym__repository_start_token3] = ACTIONS(351),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym__space_no_newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [aux_sym_add_token1] = ACTIONS(353),
    [aux_sym_arg_token1] = ACTIONS(353),
    [aux_sym_cmd_token1] = ACTIONS(353),
    [aux_sym_copy_token1] = ACTIONS(353),
    [aux_sym_entrypoint_token1] = ACTIONS(353),
    [aux_sym_env_token1] = ACTIONS(353),
    [aux_sym_expose_token1] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [aux_sym_from_token1] = ACTIONS(353),
    [aux_sym_healthcheck_token1] = ACTIONS(353),
    [aux_sym_label_token1] = ACTIONS(353),
    [aux_sym_maintainer_token1] = ACTIONS(353),
    [aux_sym_onbuild_token1] = ACTIONS(353),
    [aux_sym_run_token1] = ACTIONS(353),
    [aux_sym_shell_token1] = ACTIONS(353),
    [aux_sym_stopsignal_token1] = ACTIONS(353),
    [aux_sym_user_token1] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [aux_sym_volume_token1] = ACTIONS(353),
    [aux_sym_workdir_token1] = ACTIONS(353),
    [aux_sym_path_token1] = ACTIONS(355),
    [aux_sym_path_token2] = ACTIONS(355),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(353),
    [sym__space_no_newline] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [aux_sym__repository_start_repeat4] = STATE(82),
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
    [aux_sym__repository_start_token3] = ACTIONS(361),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__repository_start_repeat3] = STATE(81),
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
    [aux_sym__repository_start_token3] = ACTIONS(361),
    [aux_sym__repository_start_token8] = ACTIONS(135),
    [aux_sym__repository_start_token11] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [86] = {
    [aux_sym__repository_start_repeat2] = STATE(80),
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
    [aux_sym__repository_start_token3] = ACTIONS(361),
    [aux_sym__repository_start_token4] = ACTIONS(178),
    [aux_sym__repository_start_token7] = ACTIONS(178),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
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
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(359),
    [aux_sym_workdir_token1] = ACTIONS(359),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [88] = {
    [aux_sym__repository_start_repeat1] = STATE(87),
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
    [anon_sym_DOLLAR] = ACTIONS(141),
    [aux_sym_volume_token1] = ACTIONS(365),
    [aux_sym_workdir_token1] = ACTIONS(365),
    [aux_sym__repository_start_token2] = ACTIONS(141),
    [aux_sym__repository_start_token3] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym__space_no_newline] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [89] = {
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
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym_add_token1] = ACTIONS(369),
    [aux_sym_arg_token1] = ACTIONS(369),
    [aux_sym_cmd_token1] = ACTIONS(369),
    [aux_sym_copy_token1] = ACTIONS(369),
    [aux_sym_entrypoint_token1] = ACTIONS(369),
    [aux_sym_env_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_healthcheck_token1] = ACTIONS(369),
    [aux_sym_label_token1] = ACTIONS(369),
    [aux_sym_maintainer_token1] = ACTIONS(369),
    [aux_sym_onbuild_token1] = ACTIONS(369),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_shell_token1] = ACTIONS(369),
    [aux_sym_stopsignal_token1] = ACTIONS(369),
    [aux_sym_user_token1] = ACTIONS(369),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym_path_token1] = ACTIONS(371),
    [aux_sym_path_token2] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym__space_no_newline] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym_add_token1] = ACTIONS(373),
    [aux_sym_arg_token1] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_copy_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_env_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [aux_sym_healthcheck_token1] = ACTIONS(373),
    [aux_sym_label_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_onbuild_token1] = ACTIONS(373),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_shell_token1] = ACTIONS(373),
    [aux_sym_stopsignal_token1] = ACTIONS(373),
    [aux_sym_user_token1] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [aux_sym_volume_token1] = ACTIONS(373),
    [aux_sym_workdir_token1] = ACTIONS(373),
    [aux_sym_path_token1] = ACTIONS(375),
    [aux_sym_path_token2] = ACTIONS(375),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym__space_no_newline] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym_add_token1] = ACTIONS(218),
    [aux_sym_arg_token1] = ACTIONS(218),
    [aux_sym_cmd_token1] = ACTIONS(218),
    [aux_sym_copy_token1] = ACTIONS(218),
    [aux_sym_entrypoint_token1] = ACTIONS(218),
    [aux_sym_env_token1] = ACTIONS(218),
    [aux_sym_expose_token1] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [aux_sym_from_token1] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [aux_sym_healthcheck_token1] = ACTIONS(218),
    [aux_sym_label_token1] = ACTIONS(218),
    [aux_sym_maintainer_token1] = ACTIONS(218),
    [aux_sym_onbuild_token1] = ACTIONS(218),
    [aux_sym_run_token1] = ACTIONS(218),
    [aux_sym_shell_token1] = ACTIONS(218),
    [aux_sym_stopsignal_token1] = ACTIONS(218),
    [aux_sym_user_token1] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [aux_sym_volume_token1] = ACTIONS(218),
    [aux_sym_workdir_token1] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [aux_sym__port_part_token1] = ACTIONS(218),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(218),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [aux_sym__repository_start_repeat4] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym__repository_start_token3] = ACTIONS(383),
    [aux_sym__repository_start_token12] = ACTIONS(385),
    [aux_sym__repository_start_token15] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [aux_sym_path_repeat1] = STATE(94),
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
    [anon_sym_DOLLAR] = ACTIONS(387),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(306),
    [aux_sym_path_token2] = ACTIONS(390),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [95] = {
    [aux_sym__repository_start_repeat2] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym__repository_start_token3] = ACTIONS(383),
    [aux_sym__repository_start_token4] = ACTIONS(393),
    [aux_sym__repository_start_token7] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [aux_sym__repository_start_repeat3] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym__repository_start_token3] = ACTIONS(383),
    [aux_sym__repository_start_token8] = ACTIONS(395),
    [aux_sym__repository_start_token11] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [97] = {
    [aux_sym__repository_start_repeat1] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym_add_token1] = ACTIONS(399),
    [aux_sym_arg_token1] = ACTIONS(399),
    [aux_sym_cmd_token1] = ACTIONS(399),
    [aux_sym_copy_token1] = ACTIONS(399),
    [aux_sym_entrypoint_token1] = ACTIONS(399),
    [aux_sym_env_token1] = ACTIONS(399),
    [aux_sym_expose_token1] = ACTIONS(399),
    [aux_sym_from_token1] = ACTIONS(399),
    [aux_sym_healthcheck_token1] = ACTIONS(399),
    [aux_sym_label_token1] = ACTIONS(399),
    [aux_sym_maintainer_token1] = ACTIONS(399),
    [aux_sym_onbuild_token1] = ACTIONS(399),
    [aux_sym_run_token1] = ACTIONS(399),
    [aux_sym_shell_token1] = ACTIONS(399),
    [aux_sym_stopsignal_token1] = ACTIONS(399),
    [aux_sym_user_token1] = ACTIONS(399),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [aux_sym_volume_token1] = ACTIONS(399),
    [aux_sym_workdir_token1] = ACTIONS(399),
    [aux_sym__repository_start_token2] = ACTIONS(401),
    [aux_sym__repository_start_token3] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(397),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym_add_token1] = ACTIONS(405),
    [aux_sym_arg_token1] = ACTIONS(405),
    [aux_sym_cmd_token1] = ACTIONS(405),
    [aux_sym_copy_token1] = ACTIONS(405),
    [aux_sym_entrypoint_token1] = ACTIONS(405),
    [aux_sym_env_token1] = ACTIONS(405),
    [aux_sym_expose_token1] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [aux_sym_from_token1] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [aux_sym_healthcheck_token1] = ACTIONS(405),
    [aux_sym_label_token1] = ACTIONS(405),
    [aux_sym_maintainer_token1] = ACTIONS(405),
    [aux_sym_onbuild_token1] = ACTIONS(405),
    [aux_sym_run_token1] = ACTIONS(405),
    [aux_sym_shell_token1] = ACTIONS(405),
    [aux_sym_stopsignal_token1] = ACTIONS(405),
    [aux_sym_user_token1] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [aux_sym_volume_token1] = ACTIONS(405),
    [aux_sym_workdir_token1] = ACTIONS(405),
    [aux_sym__port_part_token1] = ACTIONS(405),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(405),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
    [aux_sym__repository_start_repeat2] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_add_token1] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(409),
    [aux_sym_cmd_token1] = ACTIONS(409),
    [aux_sym_copy_token1] = ACTIONS(409),
    [aux_sym_entrypoint_token1] = ACTIONS(409),
    [aux_sym_env_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [aux_sym_healthcheck_token1] = ACTIONS(409),
    [aux_sym_label_token1] = ACTIONS(409),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_onbuild_token1] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_shell_token1] = ACTIONS(409),
    [aux_sym_stopsignal_token1] = ACTIONS(409),
    [aux_sym_user_token1] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(409),
    [aux_sym_workdir_token1] = ACTIONS(409),
    [aux_sym__repository_start_token3] = ACTIONS(411),
    [aux_sym__repository_start_token4] = ACTIONS(393),
    [aux_sym__repository_start_token7] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [aux_sym_path_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(277),
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
    [anon_sym_DOLLAR] = ACTIONS(413),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym_path_token1] = ACTIONS(415),
    [aux_sym_path_token2] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym__repository_start_repeat3] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_add_token1] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(409),
    [aux_sym_cmd_token1] = ACTIONS(409),
    [aux_sym_copy_token1] = ACTIONS(409),
    [aux_sym_entrypoint_token1] = ACTIONS(409),
    [aux_sym_env_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [aux_sym_healthcheck_token1] = ACTIONS(409),
    [aux_sym_label_token1] = ACTIONS(409),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_onbuild_token1] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_shell_token1] = ACTIONS(409),
    [aux_sym_stopsignal_token1] = ACTIONS(409),
    [aux_sym_user_token1] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(409),
    [aux_sym_workdir_token1] = ACTIONS(409),
    [aux_sym__repository_start_token3] = ACTIONS(411),
    [aux_sym__repository_start_token8] = ACTIONS(395),
    [aux_sym__repository_start_token11] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [102] = {
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
  [103] = {
    [aux_sym__repository_start_repeat4] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_add_token1] = ACTIONS(409),
    [aux_sym_arg_token1] = ACTIONS(409),
    [aux_sym_cmd_token1] = ACTIONS(409),
    [aux_sym_copy_token1] = ACTIONS(409),
    [aux_sym_entrypoint_token1] = ACTIONS(409),
    [aux_sym_env_token1] = ACTIONS(409),
    [aux_sym_expose_token1] = ACTIONS(409),
    [aux_sym_from_token1] = ACTIONS(409),
    [aux_sym_healthcheck_token1] = ACTIONS(409),
    [aux_sym_label_token1] = ACTIONS(409),
    [aux_sym_maintainer_token1] = ACTIONS(409),
    [aux_sym_onbuild_token1] = ACTIONS(409),
    [aux_sym_run_token1] = ACTIONS(409),
    [aux_sym_shell_token1] = ACTIONS(409),
    [aux_sym_stopsignal_token1] = ACTIONS(409),
    [aux_sym_user_token1] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(409),
    [aux_sym_workdir_token1] = ACTIONS(409),
    [aux_sym__repository_start_token3] = ACTIONS(411),
    [aux_sym__repository_start_token12] = ACTIONS(385),
    [aux_sym__repository_start_token15] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [aux_sym_path_repeat1] = STATE(94),
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
    [anon_sym_DOLLAR] = ACTIONS(413),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym_path_token1] = ACTIONS(421),
    [aux_sym_path_token2] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [aux_sym__repository_start_repeat1] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym__repository_start_token2] = ACTIONS(401),
    [aux_sym__repository_start_token3] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [aux_sym_add_token1] = ACTIONS(423),
    [aux_sym_arg_token1] = ACTIONS(423),
    [aux_sym_cmd_token1] = ACTIONS(423),
    [aux_sym_copy_token1] = ACTIONS(423),
    [aux_sym_entrypoint_token1] = ACTIONS(423),
    [aux_sym_env_token1] = ACTIONS(423),
    [aux_sym_expose_token1] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [aux_sym_from_token1] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(425),
    [aux_sym_healthcheck_token1] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(423),
    [aux_sym_maintainer_token1] = ACTIONS(423),
    [aux_sym_onbuild_token1] = ACTIONS(423),
    [aux_sym_run_token1] = ACTIONS(423),
    [aux_sym_shell_token1] = ACTIONS(423),
    [aux_sym_stopsignal_token1] = ACTIONS(423),
    [aux_sym_user_token1] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [aux_sym_volume_token1] = ACTIONS(423),
    [aux_sym_workdir_token1] = ACTIONS(423),
    [aux_sym__port_part_token1] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [aux_sym__repository_start_repeat1] = STATE(107),
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
    [anon_sym_DOLLAR] = ACTIONS(427),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(427),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [aux_sym__repository_start_repeat4] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(156),
    [aux_sym_add_token1] = ACTIONS(158),
    [aux_sym_arg_token1] = ACTIONS(158),
    [aux_sym_cmd_token1] = ACTIONS(158),
    [aux_sym_copy_token1] = ACTIONS(158),
    [aux_sym_entrypoint_token1] = ACTIONS(158),
    [aux_sym_env_token1] = ACTIONS(158),
    [aux_sym_expose_token1] = ACTIONS(158),
    [aux_sym_from_token1] = ACTIONS(158),
    [aux_sym_healthcheck_token1] = ACTIONS(158),
    [aux_sym_label_token1] = ACTIONS(158),
    [aux_sym_maintainer_token1] = ACTIONS(158),
    [aux_sym_onbuild_token1] = ACTIONS(158),
    [aux_sym_run_token1] = ACTIONS(158),
    [aux_sym_shell_token1] = ACTIONS(158),
    [aux_sym_stopsignal_token1] = ACTIONS(158),
    [aux_sym_user_token1] = ACTIONS(158),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token12] = ACTIONS(430),
    [aux_sym__repository_start_token15] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
    [aux_sym__repository_start_repeat3] = STATE(109),
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
    [aux_sym__repository_start_token8] = ACTIONS(433),
    [aux_sym__repository_start_token11] = ACTIONS(433),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
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
    [anon_sym_DOLLAR] = ACTIONS(263),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(436),
    [aux_sym_path_token2] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [aux_sym__repository_start_repeat2] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
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
    [aux_sym__repository_start_token3] = ACTIONS(149),
    [aux_sym__repository_start_token4] = ACTIONS(438),
    [aux_sym__repository_start_token7] = ACTIONS(438),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(147),
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
    [aux_sym__env_pairs] = STATE(119),
    [sym_env_pair] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(449),
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
    [sym_env_key] = ACTIONS(453),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token7] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
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
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_add_token1] = ACTIONS(203),
    [aux_sym_arg_token1] = ACTIONS(203),
    [aux_sym_cmd_token1] = ACTIONS(203),
    [aux_sym_copy_token1] = ACTIONS(203),
    [aux_sym_entrypoint_token1] = ACTIONS(203),
    [aux_sym_env_token1] = ACTIONS(203),
    [aux_sym_expose_token1] = ACTIONS(203),
    [aux_sym_from_token1] = ACTIONS(203),
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
    [aux_sym_path_token1] = ACTIONS(205),
    [aux_sym_path_token2] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [aux_sym__anything] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym_add_token1] = ACTIONS(457),
    [aux_sym_arg_token1] = ACTIONS(457),
    [aux_sym_cmd_token1] = ACTIONS(457),
    [aux_sym_copy_token1] = ACTIONS(457),
    [aux_sym_entrypoint_token1] = ACTIONS(457),
    [aux_sym_env_token1] = ACTIONS(457),
    [aux_sym_expose_token1] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
    [aux_sym_healthcheck_token1] = ACTIONS(457),
    [aux_sym_label_token1] = ACTIONS(457),
    [aux_sym_maintainer_token1] = ACTIONS(457),
    [aux_sym_onbuild_token1] = ACTIONS(457),
    [aux_sym_run_token1] = ACTIONS(457),
    [aux_sym_shell_token1] = ACTIONS(457),
    [aux_sym_stopsignal_token1] = ACTIONS(457),
    [aux_sym_user_token1] = ACTIONS(457),
    [aux_sym_volume_token1] = ACTIONS(457),
    [aux_sym_workdir_token1] = ACTIONS(457),
    [sym_env_key] = ACTIONS(455),
    [aux_sym__anything_token1] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
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
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [119] = {
    [aux_sym__env_pairs] = STATE(119),
    [sym_env_pair] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(461),
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
    [sym_env_key] = ACTIONS(465),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
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
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [aux_sym_add_token1] = ACTIONS(468),
    [aux_sym_arg_token1] = ACTIONS(468),
    [aux_sym_cmd_token1] = ACTIONS(468),
    [aux_sym_copy_token1] = ACTIONS(468),
    [aux_sym_entrypoint_token1] = ACTIONS(468),
    [aux_sym_env_token1] = ACTIONS(468),
    [aux_sym_expose_token1] = ACTIONS(468),
    [aux_sym_from_token1] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_AT] = ACTIONS(472),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(468),
    [sym__space_no_newline] = ACTIONS(474),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
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
  [123] = {
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
  [124] = {
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
  [125] = {
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
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_add_token1] = ACTIONS(476),
    [aux_sym_arg_token1] = ACTIONS(476),
    [aux_sym_cmd_token1] = ACTIONS(476),
    [aux_sym_copy_token1] = ACTIONS(476),
    [aux_sym_entrypoint_token1] = ACTIONS(476),
    [aux_sym_env_token1] = ACTIONS(476),
    [aux_sym_expose_token1] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [aux_sym_from_token1] = ACTIONS(476),
    [aux_sym_healthcheck_token1] = ACTIONS(476),
    [aux_sym_label_token1] = ACTIONS(476),
    [aux_sym_maintainer_token1] = ACTIONS(476),
    [aux_sym_onbuild_token1] = ACTIONS(476),
    [aux_sym_run_token1] = ACTIONS(476),
    [aux_sym_shell_token1] = ACTIONS(476),
    [aux_sym_stopsignal_token1] = ACTIONS(476),
    [aux_sym_user_token1] = ACTIONS(476),
    [anon_sym_DOLLAR] = ACTIONS(476),
    [aux_sym_volume_token1] = ACTIONS(476),
    [aux_sym_workdir_token1] = ACTIONS(476),
    [aux_sym__port_part_token1] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(476),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym_add_token1] = ACTIONS(478),
    [aux_sym_arg_token1] = ACTIONS(478),
    [aux_sym_cmd_token1] = ACTIONS(478),
    [aux_sym_copy_token1] = ACTIONS(478),
    [aux_sym_entrypoint_token1] = ACTIONS(478),
    [aux_sym_env_token1] = ACTIONS(478),
    [aux_sym_expose_token1] = ACTIONS(478),
    [anon_sym_DQUOTE] = ACTIONS(478),
    [aux_sym_from_token1] = ACTIONS(478),
    [aux_sym_healthcheck_token1] = ACTIONS(478),
    [aux_sym_label_token1] = ACTIONS(478),
    [aux_sym_maintainer_token1] = ACTIONS(478),
    [aux_sym_onbuild_token1] = ACTIONS(478),
    [aux_sym_run_token1] = ACTIONS(478),
    [aux_sym_shell_token1] = ACTIONS(478),
    [aux_sym_stopsignal_token1] = ACTIONS(478),
    [aux_sym_user_token1] = ACTIONS(478),
    [anon_sym_DOLLAR] = ACTIONS(478),
    [aux_sym_volume_token1] = ACTIONS(478),
    [aux_sym_workdir_token1] = ACTIONS(478),
    [aux_sym__port_part_token1] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(478),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
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
  [129] = {
    [aux_sym__anything] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_add_token1] = ACTIONS(482),
    [aux_sym_arg_token1] = ACTIONS(482),
    [aux_sym_cmd_token1] = ACTIONS(482),
    [aux_sym_copy_token1] = ACTIONS(482),
    [aux_sym_entrypoint_token1] = ACTIONS(482),
    [aux_sym_env_token1] = ACTIONS(482),
    [aux_sym_expose_token1] = ACTIONS(482),
    [aux_sym_from_token1] = ACTIONS(482),
    [aux_sym_healthcheck_token1] = ACTIONS(482),
    [aux_sym_label_token1] = ACTIONS(482),
    [aux_sym_maintainer_token1] = ACTIONS(482),
    [aux_sym_onbuild_token1] = ACTIONS(482),
    [aux_sym_run_token1] = ACTIONS(482),
    [aux_sym_shell_token1] = ACTIONS(482),
    [aux_sym_stopsignal_token1] = ACTIONS(482),
    [aux_sym_user_token1] = ACTIONS(482),
    [aux_sym_volume_token1] = ACTIONS(482),
    [aux_sym_workdir_token1] = ACTIONS(482),
    [sym_env_key] = ACTIONS(480),
    [aux_sym__anything_token1] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(170),
    [aux_sym_arg_token1] = ACTIONS(170),
    [aux_sym_cmd_token1] = ACTIONS(170),
    [aux_sym_copy_token1] = ACTIONS(170),
    [aux_sym_entrypoint_token1] = ACTIONS(170),
    [aux_sym_env_token1] = ACTIONS(170),
    [aux_sym_expose_token1] = ACTIONS(170),
    [aux_sym_from_token1] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(170),
    [aux_sym_healthcheck_token1] = ACTIONS(170),
    [aux_sym_label_token1] = ACTIONS(170),
    [aux_sym_maintainer_token1] = ACTIONS(170),
    [aux_sym_onbuild_token1] = ACTIONS(170),
    [aux_sym_run_token1] = ACTIONS(170),
    [aux_sym_shell_token1] = ACTIONS(170),
    [aux_sym_stopsignal_token1] = ACTIONS(170),
    [aux_sym_user_token1] = ACTIONS(170),
    [aux_sym_volume_token1] = ACTIONS(170),
    [aux_sym_workdir_token1] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(489),
    [aux_sym_arg_token1] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(491),
    [aux_sym_cmd_token1] = ACTIONS(489),
    [aux_sym_copy_token1] = ACTIONS(489),
    [aux_sym_entrypoint_token1] = ACTIONS(489),
    [aux_sym_env_token1] = ACTIONS(489),
    [aux_sym_expose_token1] = ACTIONS(489),
    [aux_sym_from_token1] = ACTIONS(489),
    [aux_sym_healthcheck_token1] = ACTIONS(489),
    [aux_sym_label_token1] = ACTIONS(489),
    [aux_sym_maintainer_token1] = ACTIONS(489),
    [aux_sym_onbuild_token1] = ACTIONS(489),
    [aux_sym_run_token1] = ACTIONS(489),
    [aux_sym_shell_token1] = ACTIONS(489),
    [aux_sym_stopsignal_token1] = ACTIONS(489),
    [aux_sym_user_token1] = ACTIONS(489),
    [aux_sym_volume_token1] = ACTIONS(489),
    [aux_sym_workdir_token1] = ACTIONS(489),
    [sym_env_key] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(487),
    [sym__space_no_newline] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [aux_sym__labels] = STATE(132),
    [sym_label_pair] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym_add_token1] = ACTIONS(497),
    [aux_sym_arg_token1] = ACTIONS(497),
    [aux_sym_cmd_token1] = ACTIONS(497),
    [aux_sym_copy_token1] = ACTIONS(497),
    [aux_sym_entrypoint_token1] = ACTIONS(497),
    [aux_sym_env_token1] = ACTIONS(497),
    [aux_sym_expose_token1] = ACTIONS(497),
    [aux_sym_from_token1] = ACTIONS(497),
    [aux_sym_healthcheck_token1] = ACTIONS(497),
    [aux_sym_label_token1] = ACTIONS(497),
    [aux_sym_maintainer_token1] = ACTIONS(497),
    [aux_sym_onbuild_token1] = ACTIONS(497),
    [aux_sym_run_token1] = ACTIONS(497),
    [aux_sym_shell_token1] = ACTIONS(497),
    [aux_sym_stopsignal_token1] = ACTIONS(497),
    [aux_sym_user_token1] = ACTIONS(497),
    [aux_sym_volume_token1] = ACTIONS(497),
    [aux_sym_workdir_token1] = ACTIONS(497),
    [sym_label_key] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [aux_sym_add_token1] = ACTIONS(502),
    [aux_sym_arg_token1] = ACTIONS(502),
    [aux_sym_cmd_token1] = ACTIONS(502),
    [aux_sym_copy_token1] = ACTIONS(502),
    [aux_sym_entrypoint_token1] = ACTIONS(502),
    [aux_sym_env_token1] = ACTIONS(502),
    [aux_sym_expose_token1] = ACTIONS(502),
    [aux_sym_from_token1] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(504),
    [anon_sym_AT] = ACTIONS(506),
    [aux_sym_healthcheck_token1] = ACTIONS(502),
    [aux_sym_label_token1] = ACTIONS(502),
    [aux_sym_maintainer_token1] = ACTIONS(502),
    [aux_sym_onbuild_token1] = ACTIONS(502),
    [aux_sym_run_token1] = ACTIONS(502),
    [aux_sym_shell_token1] = ACTIONS(502),
    [aux_sym_stopsignal_token1] = ACTIONS(502),
    [aux_sym_user_token1] = ACTIONS(502),
    [aux_sym_volume_token1] = ACTIONS(502),
    [aux_sym_workdir_token1] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(502),
    [sym__space_no_newline] = ACTIONS(508),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
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
  [135] = {
    [aux_sym__labels] = STATE(132),
    [sym_label_pair] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(510),
    [aux_sym_add_token1] = ACTIONS(512),
    [aux_sym_arg_token1] = ACTIONS(512),
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
    [sym_label_key] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(510),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym__space_no_newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
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
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [aux_sym_add_token1] = ACTIONS(516),
    [aux_sym_arg_token1] = ACTIONS(516),
    [aux_sym_cmd_token1] = ACTIONS(516),
    [aux_sym_copy_token1] = ACTIONS(516),
    [aux_sym_entrypoint_token1] = ACTIONS(516),
    [aux_sym_env_token1] = ACTIONS(516),
    [aux_sym_expose_token1] = ACTIONS(516),
    [aux_sym_from_token1] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(520),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(516),
    [sym__space_no_newline] = ACTIONS(522),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym_add_token1] = ACTIONS(337),
    [aux_sym_arg_token1] = ACTIONS(337),
    [aux_sym_cmd_token1] = ACTIONS(337),
    [aux_sym_copy_token1] = ACTIONS(337),
    [aux_sym_entrypoint_token1] = ACTIONS(337),
    [aux_sym_env_token1] = ACTIONS(337),
    [aux_sym_expose_token1] = ACTIONS(337),
    [aux_sym_from_token1] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
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
    [sym__space_no_newline] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(524),
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
    [sym_env_key] = ACTIONS(524),
    [aux_sym__anything_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(524),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_add_token1] = ACTIONS(528),
    [aux_sym_arg_token1] = ACTIONS(528),
    [aux_sym_cmd_token1] = ACTIONS(528),
    [aux_sym_copy_token1] = ACTIONS(528),
    [aux_sym_entrypoint_token1] = ACTIONS(528),
    [aux_sym_env_token1] = ACTIONS(528),
    [aux_sym_expose_token1] = ACTIONS(528),
    [aux_sym_from_token1] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(530),
    [aux_sym_healthcheck_token1] = ACTIONS(528),
    [aux_sym_label_token1] = ACTIONS(528),
    [aux_sym_maintainer_token1] = ACTIONS(528),
    [aux_sym_onbuild_token1] = ACTIONS(528),
    [aux_sym_run_token1] = ACTIONS(528),
    [aux_sym_shell_token1] = ACTIONS(528),
    [aux_sym_stopsignal_token1] = ACTIONS(528),
    [aux_sym_user_token1] = ACTIONS(528),
    [aux_sym_volume_token1] = ACTIONS(528),
    [aux_sym_workdir_token1] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(528),
    [sym__space_no_newline] = ACTIONS(532),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_add_token1] = ACTIONS(253),
    [aux_sym_arg_token1] = ACTIONS(253),
    [aux_sym_cmd_token1] = ACTIONS(253),
    [aux_sym_copy_token1] = ACTIONS(253),
    [aux_sym_entrypoint_token1] = ACTIONS(253),
    [aux_sym_env_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [aux_sym_healthcheck_token1] = ACTIONS(253),
    [aux_sym_label_token1] = ACTIONS(253),
    [aux_sym_maintainer_token1] = ACTIONS(253),
    [aux_sym_onbuild_token1] = ACTIONS(253),
    [aux_sym_run_token1] = ACTIONS(253),
    [aux_sym_shell_token1] = ACTIONS(253),
    [aux_sym_stopsignal_token1] = ACTIONS(253),
    [aux_sym_user_token1] = ACTIONS(253),
    [aux_sym_volume_token1] = ACTIONS(253),
    [aux_sym_workdir_token1] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(253),
    [sym__space_no_newline] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [aux_sym_add_token1] = ACTIONS(468),
    [aux_sym_arg_token1] = ACTIONS(468),
    [aux_sym_cmd_token1] = ACTIONS(468),
    [aux_sym_copy_token1] = ACTIONS(468),
    [aux_sym_entrypoint_token1] = ACTIONS(468),
    [aux_sym_env_token1] = ACTIONS(468),
    [aux_sym_expose_token1] = ACTIONS(468),
    [aux_sym_from_token1] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(472),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(468),
    [sym__space_no_newline] = ACTIONS(474),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [aux_sym_add_token1] = ACTIONS(534),
    [aux_sym_arg_token1] = ACTIONS(534),
    [aux_sym_cmd_token1] = ACTIONS(534),
    [aux_sym_copy_token1] = ACTIONS(534),
    [aux_sym_entrypoint_token1] = ACTIONS(534),
    [aux_sym_env_token1] = ACTIONS(534),
    [aux_sym_expose_token1] = ACTIONS(534),
    [aux_sym_from_token1] = ACTIONS(534),
    [anon_sym_AT] = ACTIONS(534),
    [aux_sym_healthcheck_token1] = ACTIONS(534),
    [aux_sym_label_token1] = ACTIONS(534),
    [aux_sym_maintainer_token1] = ACTIONS(534),
    [aux_sym_onbuild_token1] = ACTIONS(534),
    [aux_sym_run_token1] = ACTIONS(534),
    [aux_sym_shell_token1] = ACTIONS(534),
    [aux_sym_stopsignal_token1] = ACTIONS(534),
    [aux_sym_user_token1] = ACTIONS(534),
    [aux_sym_volume_token1] = ACTIONS(534),
    [aux_sym_workdir_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(534),
    [sym__space_no_newline] = ACTIONS(536),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
    [aux_sym__anything] = STATE(146),
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_add_token1] = ACTIONS(480),
    [aux_sym_arg_token1] = ACTIONS(480),
    [aux_sym_cmd_token1] = ACTIONS(480),
    [aux_sym_copy_token1] = ACTIONS(480),
    [aux_sym_entrypoint_token1] = ACTIONS(480),
    [aux_sym_env_token1] = ACTIONS(480),
    [aux_sym_expose_token1] = ACTIONS(480),
    [aux_sym_from_token1] = ACTIONS(480),
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
    [aux_sym__anything_token1] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [aux_sym__anything] = STATE(146),
    [ts_builtin_sym_end] = ACTIONS(541),
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
    [aux_sym__anything_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [aux_sym_add_token1] = ACTIONS(545),
    [aux_sym_arg_token1] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_copy_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_env_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(547),
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
    [sym__space_no_newline] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [aux_sym__anything] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_add_token1] = ACTIONS(480),
    [aux_sym_arg_token1] = ACTIONS(480),
    [aux_sym_cmd_token1] = ACTIONS(480),
    [aux_sym_copy_token1] = ACTIONS(480),
    [aux_sym_entrypoint_token1] = ACTIONS(480),
    [aux_sym_env_token1] = ACTIONS(480),
    [aux_sym_expose_token1] = ACTIONS(480),
    [aux_sym_from_token1] = ACTIONS(480),
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
    [aux_sym__anything_token1] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym_comment] = ACTIONS(482),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [aux_sym__anything] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(554),
    [aux_sym_add_token1] = ACTIONS(554),
    [aux_sym_arg_token1] = ACTIONS(554),
    [aux_sym_cmd_token1] = ACTIONS(554),
    [aux_sym_copy_token1] = ACTIONS(554),
    [aux_sym_entrypoint_token1] = ACTIONS(554),
    [aux_sym_env_token1] = ACTIONS(554),
    [aux_sym_expose_token1] = ACTIONS(554),
    [aux_sym_from_token1] = ACTIONS(554),
    [aux_sym_healthcheck_token1] = ACTIONS(554),
    [aux_sym_label_token1] = ACTIONS(554),
    [aux_sym_maintainer_token1] = ACTIONS(554),
    [aux_sym_onbuild_token1] = ACTIONS(554),
    [aux_sym_run_token1] = ACTIONS(554),
    [aux_sym_shell_token1] = ACTIONS(554),
    [aux_sym_stopsignal_token1] = ACTIONS(554),
    [aux_sym_user_token1] = ACTIONS(554),
    [aux_sym_volume_token1] = ACTIONS(554),
    [aux_sym_workdir_token1] = ACTIONS(554),
    [aux_sym__anything_token1] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(554),
    [sym_comment] = ACTIONS(558),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
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
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [aux_sym_add_token1] = ACTIONS(560),
    [aux_sym_arg_token1] = ACTIONS(560),
    [aux_sym_cmd_token1] = ACTIONS(560),
    [aux_sym_copy_token1] = ACTIONS(560),
    [aux_sym_entrypoint_token1] = ACTIONS(560),
    [aux_sym_env_token1] = ACTIONS(560),
    [aux_sym_expose_token1] = ACTIONS(560),
    [aux_sym_from_token1] = ACTIONS(560),
    [anon_sym_AT] = ACTIONS(560),
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
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [aux_sym_add_token1] = ACTIONS(566),
    [aux_sym_arg_token1] = ACTIONS(566),
    [aux_sym_cmd_token1] = ACTIONS(566),
    [aux_sym_copy_token1] = ACTIONS(566),
    [aux_sym_entrypoint_token1] = ACTIONS(566),
    [aux_sym_env_token1] = ACTIONS(566),
    [aux_sym_expose_token1] = ACTIONS(566),
    [aux_sym_from_token1] = ACTIONS(566),
    [aux_sym_healthcheck_token1] = ACTIONS(566),
    [aux_sym_label_token1] = ACTIONS(566),
    [aux_sym_maintainer_token1] = ACTIONS(566),
    [aux_sym_onbuild_token1] = ACTIONS(566),
    [aux_sym_run_token1] = ACTIONS(566),
    [aux_sym_shell_token1] = ACTIONS(566),
    [aux_sym_stopsignal_token1] = ACTIONS(566),
    [aux_sym_user_token1] = ACTIONS(566),
    [aux_sym_volume_token1] = ACTIONS(566),
    [aux_sym_workdir_token1] = ACTIONS(566),
    [sym_label_key] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(564),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
  [155] = {
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
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [aux_sym_add_token1] = ACTIONS(574),
    [aux_sym_arg_token1] = ACTIONS(574),
    [aux_sym_cmd_token1] = ACTIONS(574),
    [aux_sym_copy_token1] = ACTIONS(574),
    [aux_sym_entrypoint_token1] = ACTIONS(574),
    [aux_sym_env_token1] = ACTIONS(574),
    [aux_sym_expose_token1] = ACTIONS(574),
    [aux_sym_from_token1] = ACTIONS(574),
    [aux_sym_healthcheck_token1] = ACTIONS(574),
    [aux_sym_label_token1] = ACTIONS(574),
    [aux_sym_maintainer_token1] = ACTIONS(574),
    [aux_sym_onbuild_token1] = ACTIONS(574),
    [aux_sym_run_token1] = ACTIONS(574),
    [aux_sym_shell_token1] = ACTIONS(574),
    [aux_sym_stopsignal_token1] = ACTIONS(574),
    [aux_sym_user_token1] = ACTIONS(574),
    [aux_sym_volume_token1] = ACTIONS(574),
    [aux_sym_workdir_token1] = ACTIONS(574),
    [sym_label_key] = ACTIONS(572),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(572),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_add_token1] = ACTIONS(528),
    [aux_sym_arg_token1] = ACTIONS(528),
    [aux_sym_cmd_token1] = ACTIONS(528),
    [aux_sym_copy_token1] = ACTIONS(528),
    [aux_sym_entrypoint_token1] = ACTIONS(528),
    [aux_sym_env_token1] = ACTIONS(528),
    [aux_sym_expose_token1] = ACTIONS(528),
    [aux_sym_from_token1] = ACTIONS(528),
    [aux_sym_healthcheck_token1] = ACTIONS(528),
    [aux_sym_label_token1] = ACTIONS(528),
    [aux_sym_maintainer_token1] = ACTIONS(528),
    [aux_sym_onbuild_token1] = ACTIONS(528),
    [aux_sym_run_token1] = ACTIONS(528),
    [aux_sym_shell_token1] = ACTIONS(528),
    [aux_sym_stopsignal_token1] = ACTIONS(528),
    [aux_sym_user_token1] = ACTIONS(528),
    [aux_sym_volume_token1] = ACTIONS(528),
    [aux_sym_workdir_token1] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(528),
    [sym__space_no_newline] = ACTIONS(532),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
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
  [159] = {
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
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(584),
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
    [sym_label_key] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(584),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
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
    [sym__space_no_newline] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [aux_sym_add_token1] = ACTIONS(588),
    [aux_sym_arg_token1] = ACTIONS(588),
    [aux_sym_cmd_token1] = ACTIONS(588),
    [aux_sym_copy_token1] = ACTIONS(588),
    [aux_sym_entrypoint_token1] = ACTIONS(588),
    [aux_sym_env_token1] = ACTIONS(588),
    [aux_sym_expose_token1] = ACTIONS(588),
    [aux_sym_from_token1] = ACTIONS(588),
    [aux_sym_healthcheck_token1] = ACTIONS(588),
    [aux_sym_label_token1] = ACTIONS(588),
    [aux_sym_maintainer_token1] = ACTIONS(588),
    [aux_sym_onbuild_token1] = ACTIONS(588),
    [aux_sym_run_token1] = ACTIONS(588),
    [aux_sym_shell_token1] = ACTIONS(588),
    [aux_sym_stopsignal_token1] = ACTIONS(588),
    [aux_sym_user_token1] = ACTIONS(588),
    [aux_sym_volume_token1] = ACTIONS(588),
    [aux_sym_workdir_token1] = ACTIONS(588),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(588),
    [sym__space_no_newline] = ACTIONS(590),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_add_token1] = ACTIONS(357),
    [aux_sym_arg_token1] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(357),
    [aux_sym_copy_token1] = ACTIONS(357),
    [aux_sym_entrypoint_token1] = ACTIONS(357),
    [aux_sym_env_token1] = ACTIONS(357),
    [aux_sym_expose_token1] = ACTIONS(357),
    [aux_sym_from_token1] = ACTIONS(357),
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
  [164] = {
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
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_add_token1] = ACTIONS(524),
    [aux_sym_arg_token1] = ACTIONS(524),
    [aux_sym_cmd_token1] = ACTIONS(524),
    [aux_sym_copy_token1] = ACTIONS(524),
    [aux_sym_entrypoint_token1] = ACTIONS(524),
    [aux_sym_env_token1] = ACTIONS(524),
    [aux_sym_expose_token1] = ACTIONS(524),
    [aux_sym_from_token1] = ACTIONS(524),
    [aux_sym_healthcheck_token1] = ACTIONS(524),
    [aux_sym_label_token1] = ACTIONS(524),
    [aux_sym_maintainer_token1] = ACTIONS(524),
    [aux_sym_onbuild_token1] = ACTIONS(524),
    [aux_sym_run_token1] = ACTIONS(524),
    [aux_sym_shell_token1] = ACTIONS(524),
    [aux_sym_stopsignal_token1] = ACTIONS(524),
    [aux_sym_user_token1] = ACTIONS(524),
    [aux_sym_volume_token1] = ACTIONS(524),
    [aux_sym_workdir_token1] = ACTIONS(524),
    [aux_sym__anything_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(524),
    [sym_comment] = ACTIONS(526),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
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
    [sym__space_no_newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_add_token1] = ACTIONS(524),
    [aux_sym_arg_token1] = ACTIONS(524),
    [aux_sym_cmd_token1] = ACTIONS(524),
    [aux_sym_copy_token1] = ACTIONS(524),
    [aux_sym_entrypoint_token1] = ACTIONS(524),
    [aux_sym_env_token1] = ACTIONS(524),
    [aux_sym_expose_token1] = ACTIONS(524),
    [aux_sym_from_token1] = ACTIONS(524),
    [aux_sym_healthcheck_token1] = ACTIONS(524),
    [aux_sym_label_token1] = ACTIONS(524),
    [aux_sym_maintainer_token1] = ACTIONS(524),
    [aux_sym_onbuild_token1] = ACTIONS(524),
    [aux_sym_run_token1] = ACTIONS(524),
    [aux_sym_shell_token1] = ACTIONS(524),
    [aux_sym_stopsignal_token1] = ACTIONS(524),
    [aux_sym_user_token1] = ACTIONS(524),
    [aux_sym_volume_token1] = ACTIONS(524),
    [aux_sym_workdir_token1] = ACTIONS(524),
    [aux_sym__anything_token1] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(524),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [aux_sym_add_token1] = ACTIONS(596),
    [aux_sym_arg_token1] = ACTIONS(596),
    [aux_sym_cmd_token1] = ACTIONS(596),
    [aux_sym_copy_token1] = ACTIONS(596),
    [aux_sym_entrypoint_token1] = ACTIONS(596),
    [aux_sym_env_token1] = ACTIONS(596),
    [aux_sym_expose_token1] = ACTIONS(596),
    [aux_sym_from_token1] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(598),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(596),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [aux_sym_add_token1] = ACTIONS(596),
    [aux_sym_arg_token1] = ACTIONS(596),
    [aux_sym_cmd_token1] = ACTIONS(596),
    [aux_sym_copy_token1] = ACTIONS(596),
    [aux_sym_entrypoint_token1] = ACTIONS(596),
    [aux_sym_env_token1] = ACTIONS(596),
    [aux_sym_expose_token1] = ACTIONS(596),
    [aux_sym_from_token1] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(600),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(596),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [aux_sym_add_token1] = ACTIONS(602),
    [aux_sym_arg_token1] = ACTIONS(602),
    [aux_sym_cmd_token1] = ACTIONS(602),
    [aux_sym_copy_token1] = ACTIONS(602),
    [aux_sym_entrypoint_token1] = ACTIONS(602),
    [aux_sym_env_token1] = ACTIONS(602),
    [aux_sym_expose_token1] = ACTIONS(602),
    [aux_sym_from_token1] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [aux_sym_healthcheck_token1] = ACTIONS(602),
    [aux_sym_label_token1] = ACTIONS(602),
    [aux_sym_maintainer_token1] = ACTIONS(602),
    [aux_sym_onbuild_token1] = ACTIONS(602),
    [aux_sym_run_token1] = ACTIONS(602),
    [aux_sym_shell_token1] = ACTIONS(602),
    [aux_sym_stopsignal_token1] = ACTIONS(602),
    [aux_sym_user_token1] = ACTIONS(602),
    [aux_sym_volume_token1] = ACTIONS(602),
    [aux_sym_workdir_token1] = ACTIONS(602),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(602),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
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
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [aux_sym_add_token1] = ACTIONS(606),
    [aux_sym_arg_token1] = ACTIONS(606),
    [aux_sym_cmd_token1] = ACTIONS(606),
    [aux_sym_copy_token1] = ACTIONS(606),
    [aux_sym_entrypoint_token1] = ACTIONS(606),
    [aux_sym_env_token1] = ACTIONS(606),
    [aux_sym_expose_token1] = ACTIONS(606),
    [aux_sym_from_token1] = ACTIONS(606),
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
    [sym__space_no_newline] = ACTIONS(608),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(468),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(468),
    [sym__space_no_newline] = ACTIONS(474),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(610),
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
    [sym_env_key] = ACTIONS(610),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(610),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(614),
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
    [sym_env_key] = ACTIONS(614),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(614),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(618),
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
    [sym_env_key] = ACTIONS(618),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(618),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(353),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(353),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [aux_sym_add_token1] = ACTIONS(588),
    [aux_sym_arg_token1] = ACTIONS(588),
    [aux_sym_cmd_token1] = ACTIONS(588),
    [aux_sym_copy_token1] = ACTIONS(588),
    [aux_sym_entrypoint_token1] = ACTIONS(588),
    [aux_sym_env_token1] = ACTIONS(588),
    [aux_sym_expose_token1] = ACTIONS(588),
    [aux_sym_from_token1] = ACTIONS(588),
    [aux_sym_healthcheck_token1] = ACTIONS(588),
    [aux_sym_label_token1] = ACTIONS(588),
    [aux_sym_maintainer_token1] = ACTIONS(588),
    [aux_sym_onbuild_token1] = ACTIONS(588),
    [aux_sym_run_token1] = ACTIONS(588),
    [aux_sym_shell_token1] = ACTIONS(588),
    [aux_sym_stopsignal_token1] = ACTIONS(588),
    [aux_sym_user_token1] = ACTIONS(588),
    [aux_sym_volume_token1] = ACTIONS(588),
    [aux_sym_workdir_token1] = ACTIONS(588),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(588),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
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
  [180] = {
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
  [181] = {
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
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_add_token1] = ACTIONS(528),
    [aux_sym_arg_token1] = ACTIONS(528),
    [aux_sym_cmd_token1] = ACTIONS(528),
    [aux_sym_copy_token1] = ACTIONS(528),
    [aux_sym_entrypoint_token1] = ACTIONS(528),
    [aux_sym_env_token1] = ACTIONS(528),
    [aux_sym_expose_token1] = ACTIONS(528),
    [aux_sym_from_token1] = ACTIONS(528),
    [aux_sym_healthcheck_token1] = ACTIONS(528),
    [aux_sym_label_token1] = ACTIONS(528),
    [aux_sym_maintainer_token1] = ACTIONS(528),
    [aux_sym_onbuild_token1] = ACTIONS(528),
    [aux_sym_run_token1] = ACTIONS(528),
    [aux_sym_shell_token1] = ACTIONS(528),
    [aux_sym_stopsignal_token1] = ACTIONS(528),
    [aux_sym_user_token1] = ACTIONS(528),
    [aux_sym_volume_token1] = ACTIONS(528),
    [aux_sym_workdir_token1] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(528),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
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
  [184] = {
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
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [aux_sym_from_token1] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
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
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym_add_token1] = ACTIONS(369),
    [aux_sym_arg_token1] = ACTIONS(369),
    [aux_sym_cmd_token1] = ACTIONS(369),
    [aux_sym_copy_token1] = ACTIONS(369),
    [aux_sym_entrypoint_token1] = ACTIONS(369),
    [aux_sym_env_token1] = ACTIONS(369),
    [aux_sym_expose_token1] = ACTIONS(369),
    [aux_sym_from_token1] = ACTIONS(369),
    [aux_sym_healthcheck_token1] = ACTIONS(369),
    [aux_sym_label_token1] = ACTIONS(369),
    [aux_sym_maintainer_token1] = ACTIONS(369),
    [aux_sym_onbuild_token1] = ACTIONS(369),
    [aux_sym_run_token1] = ACTIONS(369),
    [aux_sym_shell_token1] = ACTIONS(369),
    [aux_sym_stopsignal_token1] = ACTIONS(369),
    [aux_sym_user_token1] = ACTIONS(369),
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
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
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
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
  [201] = {
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
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [aux_sym_add_token1] = ACTIONS(343),
    [aux_sym_arg_token1] = ACTIONS(343),
    [aux_sym_cmd_token1] = ACTIONS(343),
    [aux_sym_copy_token1] = ACTIONS(343),
    [aux_sym_entrypoint_token1] = ACTIONS(343),
    [aux_sym_env_token1] = ACTIONS(343),
    [aux_sym_expose_token1] = ACTIONS(343),
    [aux_sym_from_token1] = ACTIONS(343),
    [aux_sym_healthcheck_token1] = ACTIONS(343),
    [aux_sym_label_token1] = ACTIONS(343),
    [aux_sym_maintainer_token1] = ACTIONS(343),
    [aux_sym_onbuild_token1] = ACTIONS(343),
    [aux_sym_run_token1] = ACTIONS(343),
    [aux_sym_shell_token1] = ACTIONS(343),
    [aux_sym_stopsignal_token1] = ACTIONS(343),
    [aux_sym_user_token1] = ACTIONS(343),
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [203] = {
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
  [204] = {
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
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(379),
    [aux_sym_arg_token1] = ACTIONS(379),
    [aux_sym_cmd_token1] = ACTIONS(379),
    [aux_sym_copy_token1] = ACTIONS(379),
    [aux_sym_entrypoint_token1] = ACTIONS(379),
    [aux_sym_env_token1] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(379),
    [aux_sym_from_token1] = ACTIONS(379),
    [aux_sym_healthcheck_token1] = ACTIONS(379),
    [aux_sym_label_token1] = ACTIONS(379),
    [aux_sym_maintainer_token1] = ACTIONS(379),
    [aux_sym_onbuild_token1] = ACTIONS(379),
    [aux_sym_run_token1] = ACTIONS(379),
    [aux_sym_shell_token1] = ACTIONS(379),
    [aux_sym_stopsignal_token1] = ACTIONS(379),
    [aux_sym_user_token1] = ACTIONS(379),
    [aux_sym_volume_token1] = ACTIONS(379),
    [aux_sym_workdir_token1] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_add_token1] = ACTIONS(243),
    [aux_sym_arg_token1] = ACTIONS(243),
    [aux_sym_cmd_token1] = ACTIONS(243),
    [aux_sym_copy_token1] = ACTIONS(243),
    [aux_sym_entrypoint_token1] = ACTIONS(243),
    [aux_sym_env_token1] = ACTIONS(243),
    [aux_sym_expose_token1] = ACTIONS(243),
    [aux_sym_from_token1] = ACTIONS(243),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [207] = {
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
  [208] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [209] = {
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
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_add_token1] = ACTIONS(407),
    [aux_sym_arg_token1] = ACTIONS(407),
    [aux_sym_cmd_token1] = ACTIONS(407),
    [aux_sym_copy_token1] = ACTIONS(407),
    [aux_sym_entrypoint_token1] = ACTIONS(407),
    [aux_sym_env_token1] = ACTIONS(407),
    [aux_sym_expose_token1] = ACTIONS(407),
    [aux_sym_from_token1] = ACTIONS(407),
    [aux_sym_healthcheck_token1] = ACTIONS(407),
    [aux_sym_label_token1] = ACTIONS(407),
    [aux_sym_maintainer_token1] = ACTIONS(407),
    [aux_sym_onbuild_token1] = ACTIONS(407),
    [aux_sym_run_token1] = ACTIONS(407),
    [aux_sym_shell_token1] = ACTIONS(407),
    [aux_sym_stopsignal_token1] = ACTIONS(407),
    [aux_sym_user_token1] = ACTIONS(407),
    [aux_sym_volume_token1] = ACTIONS(407),
    [aux_sym_workdir_token1] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [211] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [212] = {
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
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(666),
    [aux_sym_add_token1] = ACTIONS(666),
    [aux_sym_arg_token1] = ACTIONS(666),
    [aux_sym_cmd_token1] = ACTIONS(666),
    [aux_sym_copy_token1] = ACTIONS(666),
    [aux_sym_entrypoint_token1] = ACTIONS(666),
    [aux_sym_env_token1] = ACTIONS(666),
    [aux_sym_expose_token1] = ACTIONS(666),
    [aux_sym_from_token1] = ACTIONS(666),
    [aux_sym_healthcheck_token1] = ACTIONS(666),
    [aux_sym_label_token1] = ACTIONS(666),
    [aux_sym_maintainer_token1] = ACTIONS(666),
    [aux_sym_onbuild_token1] = ACTIONS(666),
    [aux_sym_run_token1] = ACTIONS(666),
    [aux_sym_shell_token1] = ACTIONS(666),
    [aux_sym_stopsignal_token1] = ACTIONS(666),
    [aux_sym_user_token1] = ACTIONS(666),
    [aux_sym_volume_token1] = ACTIONS(666),
    [aux_sym_workdir_token1] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(666),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [aux_sym_add_token1] = ACTIONS(668),
    [aux_sym_arg_token1] = ACTIONS(668),
    [aux_sym_cmd_token1] = ACTIONS(668),
    [aux_sym_copy_token1] = ACTIONS(668),
    [aux_sym_entrypoint_token1] = ACTIONS(668),
    [aux_sym_env_token1] = ACTIONS(668),
    [aux_sym_expose_token1] = ACTIONS(668),
    [aux_sym_from_token1] = ACTIONS(668),
    [aux_sym_healthcheck_token1] = ACTIONS(668),
    [aux_sym_label_token1] = ACTIONS(668),
    [aux_sym_maintainer_token1] = ACTIONS(668),
    [aux_sym_onbuild_token1] = ACTIONS(668),
    [aux_sym_run_token1] = ACTIONS(668),
    [aux_sym_shell_token1] = ACTIONS(668),
    [aux_sym_stopsignal_token1] = ACTIONS(668),
    [aux_sym_user_token1] = ACTIONS(668),
    [aux_sym_volume_token1] = ACTIONS(668),
    [aux_sym_workdir_token1] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(668),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(670),
    [aux_sym_add_token1] = ACTIONS(670),
    [aux_sym_arg_token1] = ACTIONS(670),
    [aux_sym_cmd_token1] = ACTIONS(670),
    [aux_sym_copy_token1] = ACTIONS(670),
    [aux_sym_entrypoint_token1] = ACTIONS(670),
    [aux_sym_env_token1] = ACTIONS(670),
    [aux_sym_expose_token1] = ACTIONS(670),
    [aux_sym_from_token1] = ACTIONS(670),
    [aux_sym_healthcheck_token1] = ACTIONS(670),
    [aux_sym_label_token1] = ACTIONS(670),
    [aux_sym_maintainer_token1] = ACTIONS(670),
    [aux_sym_onbuild_token1] = ACTIONS(670),
    [aux_sym_run_token1] = ACTIONS(670),
    [aux_sym_shell_token1] = ACTIONS(670),
    [aux_sym_stopsignal_token1] = ACTIONS(670),
    [aux_sym_user_token1] = ACTIONS(670),
    [aux_sym_volume_token1] = ACTIONS(670),
    [aux_sym_workdir_token1] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(670),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [aux_sym_add_token1] = ACTIONS(672),
    [aux_sym_arg_token1] = ACTIONS(672),
    [aux_sym_cmd_token1] = ACTIONS(672),
    [aux_sym_copy_token1] = ACTIONS(672),
    [aux_sym_entrypoint_token1] = ACTIONS(672),
    [aux_sym_env_token1] = ACTIONS(672),
    [aux_sym_expose_token1] = ACTIONS(672),
    [aux_sym_from_token1] = ACTIONS(672),
    [aux_sym_healthcheck_token1] = ACTIONS(672),
    [aux_sym_label_token1] = ACTIONS(672),
    [aux_sym_maintainer_token1] = ACTIONS(672),
    [aux_sym_onbuild_token1] = ACTIONS(672),
    [aux_sym_run_token1] = ACTIONS(672),
    [aux_sym_shell_token1] = ACTIONS(672),
    [aux_sym_stopsignal_token1] = ACTIONS(672),
    [aux_sym_user_token1] = ACTIONS(672),
    [aux_sym_volume_token1] = ACTIONS(672),
    [aux_sym_workdir_token1] = ACTIONS(672),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(672),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [218] = {
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
  [219] = {
    [sym__hc_interval] = STATE(223),
    [sym__hc_timeout] = STATE(223),
    [sym__hc_start_period] = STATE(223),
    [sym__hc_retries] = STATE(223),
    [sym__hc_options] = STATE(223),
    [sym__hc_command] = STATE(180),
    [aux_sym_healthcheck_repeat1] = STATE(223),
    [aux_sym_cmd_token1] = ACTIONS(674),
    [sym_hc_none] = ACTIONS(676),
    [anon_sym_DASH_DASHinterval] = ACTIONS(678),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(680),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(682),
    [anon_sym_DASH_DASHretires] = ACTIONS(684),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [220] = {
    [sym_repository] = STATE(242),
    [sym__repository_start] = STATE(231),
    [sym_image] = STATE(133),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(686),
    [anon_sym_DOLLAR] = ACTIONS(688),
    [aux_sym_platform_token1] = ACTIONS(690),
    [aux_sym__repository_start_token1] = ACTIONS(688),
    [aux_sym__repository_start_token4] = ACTIONS(692),
    [aux_sym__repository_start_token6] = ACTIONS(692),
    [aux_sym__repository_start_token8] = ACTIONS(694),
    [aux_sym__repository_start_token10] = ACTIONS(694),
    [aux_sym__repository_start_token12] = ACTIONS(696),
    [aux_sym__repository_start_token14] = ACTIONS(696),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(193),
    [sym__port] = STATE(106),
    [sym_port] = STATE(106),
    [sym_port_range] = STATE(106),
    [sym__port_part] = STATE(70),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(698),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [222] = {
    [sym_repository] = STATE(240),
    [sym__repository_start] = STATE(231),
    [sym_image] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(688),
    [aux_sym_platform_token1] = ACTIONS(690),
    [aux_sym__repository_start_token1] = ACTIONS(688),
    [aux_sym__repository_start_token4] = ACTIONS(692),
    [aux_sym__repository_start_token6] = ACTIONS(692),
    [aux_sym__repository_start_token8] = ACTIONS(694),
    [aux_sym__repository_start_token10] = ACTIONS(694),
    [aux_sym__repository_start_token12] = ACTIONS(696),
    [aux_sym__repository_start_token14] = ACTIONS(696),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym__hc_interval] = STATE(230),
    [sym__hc_timeout] = STATE(230),
    [sym__hc_start_period] = STATE(230),
    [sym__hc_retries] = STATE(230),
    [sym__hc_options] = STATE(230),
    [sym__hc_command] = STATE(209),
    [aux_sym_healthcheck_repeat1] = STATE(230),
    [aux_sym_cmd_token1] = ACTIONS(674),
    [anon_sym_DASH_DASHinterval] = ACTIONS(678),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(680),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(682),
    [anon_sym_DASH_DASHretires] = ACTIONS(684),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [224] = {
    [sym_digest] = STATE(155),
    [anon_sym_sha256_COLON] = ACTIONS(700),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym_digest] = STATE(158),
    [anon_sym_sha256_COLON] = ACTIONS(712),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_digest] = STATE(154),
    [anon_sym_sha256_COLON] = ACTIONS(714),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(716),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym__repository_continued] = STATE(233),
    [aux_sym_repository_repeat1] = STATE(233),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_platform_token1] = ACTIONS(721),
    [aux_sym__repository_start_token1] = ACTIONS(718),
    [aux_sym__repository_start_token4] = ACTIONS(724),
    [aux_sym__repository_start_token6] = ACTIONS(724),
    [aux_sym__repository_start_token8] = ACTIONS(727),
    [aux_sym__repository_start_token10] = ACTIONS(727),
    [aux_sym__repository_start_token12] = ACTIONS(730),
    [aux_sym__repository_start_token14] = ACTIONS(730),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym_digest] = STATE(173),
    [anon_sym_sha256_COLON] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym__hc_interval] = STATE(230),
    [sym__hc_timeout] = STATE(230),
    [sym__hc_start_period] = STATE(230),
    [sym__hc_retries] = STATE(230),
    [sym__hc_options] = STATE(230),
    [aux_sym_healthcheck_repeat1] = STATE(230),
    [aux_sym_cmd_token1] = ACTIONS(735),
    [anon_sym_DASH_DASHinterval] = ACTIONS(737),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(740),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(743),
    [anon_sym_DASH_DASHretires] = ACTIONS(746),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [231] = {
    [sym__repository_continued] = STATE(228),
    [aux_sym_repository_repeat1] = STATE(228),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(749),
    [aux_sym__repository_start_token4] = ACTIONS(755),
    [aux_sym__repository_start_token6] = ACTIONS(755),
    [aux_sym__repository_start_token8] = ACTIONS(758),
    [aux_sym__repository_start_token10] = ACTIONS(758),
    [aux_sym__repository_start_token12] = ACTIONS(761),
    [aux_sym__repository_start_token14] = ACTIONS(761),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_digest] = STATE(157),
    [anon_sym_sha256_COLON] = ACTIONS(764),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym__repository_continued] = STATE(233),
    [aux_sym_repository_repeat1] = STATE(233),
    [anon_sym_DOLLAR] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(769),
    [aux_sym__repository_start_token1] = ACTIONS(766),
    [aux_sym__repository_start_token4] = ACTIONS(772),
    [aux_sym__repository_start_token6] = ACTIONS(772),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(778),
    [aux_sym__repository_start_token14] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_as_name] = STATE(218),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_as_name] = STATE(178),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym_as_name] = STATE(211),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_digest] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_digest] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_as_name] = STATE(197),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_image] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(791),
    [aux_sym_platform_token1] = ACTIONS(793),
    [aux_sym__repository_start_token1] = ACTIONS(791),
    [aux_sym__repository_start_token4] = ACTIONS(795),
    [aux_sym__repository_start_token6] = ACTIONS(795),
    [aux_sym__repository_start_token8] = ACTIONS(797),
    [aux_sym__repository_start_token10] = ACTIONS(797),
    [aux_sym__repository_start_token12] = ACTIONS(799),
    [aux_sym__repository_start_token14] = ACTIONS(799),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_tag] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(801),
    [aux_sym_platform_token1] = ACTIONS(803),
    [aux_sym__repository_start_token1] = ACTIONS(801),
    [aux_sym__repository_start_token4] = ACTIONS(805),
    [aux_sym__repository_start_token6] = ACTIONS(805),
    [aux_sym__repository_start_token8] = ACTIONS(807),
    [aux_sym__repository_start_token10] = ACTIONS(807),
    [aux_sym__repository_start_token12] = ACTIONS(809),
    [aux_sym__repository_start_token14] = ACTIONS(809),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_image] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(791),
    [aux_sym_platform_token1] = ACTIONS(793),
    [aux_sym__repository_start_token1] = ACTIONS(791),
    [aux_sym__repository_start_token4] = ACTIONS(795),
    [aux_sym__repository_start_token6] = ACTIONS(795),
    [aux_sym__repository_start_token8] = ACTIONS(797),
    [aux_sym__repository_start_token10] = ACTIONS(797),
    [aux_sym__repository_start_token12] = ACTIONS(799),
    [aux_sym__repository_start_token14] = ACTIONS(799),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_as_name] = STATE(190),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_digest] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_as_name] = STATE(194),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_as_name] = STATE(195),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_digest] = STATE(155),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_as_name] = STATE(208),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_digest] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [aux_sym_platform_token1] = ACTIONS(704),
    [aux_sym__repository_start_token1] = ACTIONS(702),
    [aux_sym__repository_start_token4] = ACTIONS(706),
    [aux_sym__repository_start_token6] = ACTIONS(706),
    [aux_sym__repository_start_token8] = ACTIONS(708),
    [aux_sym__repository_start_token10] = ACTIONS(708),
    [aux_sym__repository_start_token12] = ACTIONS(710),
    [aux_sym__repository_start_token14] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_tag] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(801),
    [aux_sym_platform_token1] = ACTIONS(803),
    [aux_sym__repository_start_token1] = ACTIONS(801),
    [aux_sym__repository_start_token4] = ACTIONS(805),
    [aux_sym__repository_start_token6] = ACTIONS(805),
    [aux_sym__repository_start_token8] = ACTIONS(807),
    [aux_sym__repository_start_token10] = ACTIONS(807),
    [aux_sym__repository_start_token12] = ACTIONS(809),
    [aux_sym__repository_start_token14] = ACTIONS(809),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_as_name] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(781),
    [aux_sym__repository_start_token4] = ACTIONS(785),
    [aux_sym__repository_start_token6] = ACTIONS(785),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [aux_sym__repository_start_token10] = ACTIONS(787),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_tag] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(801),
    [aux_sym_platform_token1] = ACTIONS(803),
    [aux_sym__repository_start_token1] = ACTIONS(801),
    [aux_sym__repository_start_token4] = ACTIONS(805),
    [aux_sym__repository_start_token6] = ACTIONS(805),
    [aux_sym__repository_start_token8] = ACTIONS(807),
    [aux_sym__repository_start_token10] = ACTIONS(807),
    [aux_sym__repository_start_token12] = ACTIONS(809),
    [aux_sym__repository_start_token14] = ACTIONS(809),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_tag] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(801),
    [aux_sym_platform_token1] = ACTIONS(803),
    [aux_sym__repository_start_token1] = ACTIONS(801),
    [aux_sym__repository_start_token4] = ACTIONS(805),
    [aux_sym__repository_start_token6] = ACTIONS(805),
    [aux_sym__repository_start_token8] = ACTIONS(807),
    [aux_sym__repository_start_token10] = ACTIONS(807),
    [aux_sym__repository_start_token12] = ACTIONS(809),
    [aux_sym__repository_start_token14] = ACTIONS(809),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
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
  [256] = {
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
  [257] = {
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
  [258] = {
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
  [259] = {
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
  [260] = {
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
  [261] = {
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
  [262] = {
    [anon_sym_DOLLAR] = ACTIONS(835),
    [aux_sym_platform_token1] = ACTIONS(837),
    [aux_sym__repository_start_token1] = ACTIONS(835),
    [aux_sym__repository_start_token4] = ACTIONS(835),
    [aux_sym__repository_start_token6] = ACTIONS(835),
    [aux_sym__repository_start_token8] = ACTIONS(835),
    [aux_sym__repository_start_token10] = ACTIONS(835),
    [aux_sym__repository_start_token12] = ACTIONS(835),
    [aux_sym__repository_start_token14] = ACTIONS(835),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [anon_sym_DOLLAR] = ACTIONS(839),
    [aux_sym_platform_token1] = ACTIONS(841),
    [aux_sym__repository_start_token1] = ACTIONS(839),
    [aux_sym__repository_start_token4] = ACTIONS(839),
    [aux_sym__repository_start_token6] = ACTIONS(839),
    [aux_sym__repository_start_token8] = ACTIONS(839),
    [aux_sym__repository_start_token10] = ACTIONS(839),
    [aux_sym__repository_start_token12] = ACTIONS(839),
    [aux_sym__repository_start_token14] = ACTIONS(839),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [sym__port_spec] = STATE(425),
    [sym_mapped_port] = STATE(425),
    [sym__port] = STATE(414),
    [sym_port] = STATE(409),
    [sym_port_range] = STATE(409),
    [sym__port_part] = STATE(382),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym__port_part_token1] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
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
  [266] = {
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
  [267] = {
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
  [268] = {
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
  [269] = {
    [sym__chown] = STATE(277),
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(55),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(857),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(859),
  },
  [270] = {
    [anon_sym_DOLLAR] = ACTIONS(861),
    [aux_sym_platform_token1] = ACTIONS(863),
    [aux_sym__repository_start_token1] = ACTIONS(861),
    [aux_sym__repository_start_token4] = ACTIONS(861),
    [aux_sym__repository_start_token6] = ACTIONS(861),
    [aux_sym__repository_start_token8] = ACTIONS(861),
    [aux_sym__repository_start_token10] = ACTIONS(861),
    [aux_sym__repository_start_token12] = ACTIONS(861),
    [aux_sym__repository_start_token14] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [anon_sym_DOLLAR] = ACTIONS(865),
    [aux_sym_platform_token1] = ACTIONS(867),
    [aux_sym__repository_start_token1] = ACTIONS(865),
    [aux_sym__repository_start_token4] = ACTIONS(865),
    [aux_sym__repository_start_token6] = ACTIONS(865),
    [aux_sym__repository_start_token8] = ACTIONS(865),
    [aux_sym__repository_start_token10] = ACTIONS(865),
    [aux_sym__repository_start_token12] = ACTIONS(865),
    [aux_sym__repository_start_token14] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(40),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(869),
  },
  [273] = {
    [sym__port] = STATE(127),
    [sym_port] = STATE(127),
    [sym_port_range] = STATE(127),
    [sym__port_part] = STATE(70),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [sym__port] = STATE(440),
    [sym_port] = STATE(440),
    [sym_port_range] = STATE(440),
    [sym__port_part] = STATE(382),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym__port_part_token1] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym__port] = STATE(201),
    [sym_port] = STATE(201),
    [sym_port_range] = STATE(201),
    [sym__port_part] = STATE(70),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(47),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(873),
  },
  [277] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [aux_sym_path_token1] = ACTIONS(249),
    [aux_sym_path_token2] = ACTIONS(251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym_chown] = STATE(359),
    [sym_user_name] = STATE(323),
    [sym_user_id] = STATE(304),
    [anon_sym_DOLLAR] = ACTIONS(875),
    [aux_sym_user_name_token1] = ACTIONS(877),
    [aux_sym_user_id_token1] = ACTIONS(879),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym_template_expr_less_than_equals] = STATE(436),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [280] = {
    [aux_sym__repository_start_repeat3] = STATE(335),
    [anon_sym_SLASH] = ACTIONS(883),
    [aux_sym__repository_start_token3] = ACTIONS(885),
    [aux_sym__repository_start_token8] = ACTIONS(887),
    [aux_sym__repository_start_token11] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [281] = {
    [sym_template_expr_less_than_equals] = STATE(523),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [282] = {
    [sym_template_expr_less_than_equals] = STATE(517),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [283] = {
    [sym_template_expr_less_than_equals] = STATE(511),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [sym_port] = STATE(502),
    [sym_port_range] = STATE(502),
    [sym__port_part] = STATE(382),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym__port_part_token1] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [sym_template_expr_less_than_equals] = STATE(479),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [286] = {
    [sym_variable_default_value] = STATE(537),
    [sym_variable_this_or_null] = STATE(537),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym_variable_default_value] = STATE(535),
    [sym_variable_this_or_null] = STATE(535),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_variable_default_value] = STATE(533),
    [sym_variable_this_or_null] = STATE(533),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [sym_variable_default_value] = STATE(531),
    [sym_variable_this_or_null] = STATE(531),
    [anon_sym_RBRACE] = ACTIONS(899),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [sym_variable_default_value] = STATE(529),
    [sym_variable_this_or_null] = STATE(529),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [aux_sym_path_repeat2] = STATE(314),
    [anon_sym_DQUOTE] = ACTIONS(903),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [aux_sym_path_token3] = ACTIONS(907),
    [aux_sym_path_token4] = ACTIONS(909),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [sym_variable_default_value] = STATE(527),
    [sym_variable_this_or_null] = STATE(527),
    [anon_sym_RBRACE] = ACTIONS(911),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [sym_variable_default_value] = STATE(525),
    [sym_variable_this_or_null] = STATE(525),
    [anon_sym_RBRACE] = ACTIONS(913),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [aux_sym_path_repeat2] = STATE(294),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_DOLLAR] = ACTIONS(917),
    [aux_sym_path_token3] = ACTIONS(920),
    [aux_sym_path_token4] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [sym_variable_default_value] = STATE(520),
    [sym_variable_this_or_null] = STATE(520),
    [anon_sym_RBRACE] = ACTIONS(925),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [sym_variable_default_value] = STATE(514),
    [sym_variable_this_or_null] = STATE(514),
    [anon_sym_RBRACE] = ACTIONS(927),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [aux_sym_path_repeat2] = STATE(294),
    [anon_sym_DQUOTE] = ACTIONS(929),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [aux_sym_path_token3] = ACTIONS(931),
    [aux_sym_path_token4] = ACTIONS(909),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [aux_sym__repository_start_repeat1] = STATE(332),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_SLASH] = ACTIONS(935),
    [aux_sym__repository_start_token2] = ACTIONS(933),
    [aux_sym__repository_start_token3] = ACTIONS(937),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [sym_variable_default_value] = STATE(507),
    [sym_variable_this_or_null] = STATE(507),
    [anon_sym_RBRACE] = ACTIONS(939),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [aux_sym__repository_start_repeat2] = STATE(322),
    [anon_sym_SLASH] = ACTIONS(935),
    [aux_sym__repository_start_token3] = ACTIONS(937),
    [aux_sym__repository_start_token4] = ACTIONS(941),
    [aux_sym__repository_start_token7] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [aux_sym__repository_start_repeat3] = STATE(280),
    [anon_sym_SLASH] = ACTIONS(935),
    [aux_sym__repository_start_token3] = ACTIONS(937),
    [aux_sym__repository_start_token8] = ACTIONS(887),
    [aux_sym__repository_start_token11] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [aux_sym_path_repeat2] = STATE(297),
    [anon_sym_DQUOTE] = ACTIONS(943),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [aux_sym_path_token3] = ACTIONS(945),
    [aux_sym_path_token4] = ACTIONS(909),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [sym_variable_default_value] = STATE(483),
    [sym_variable_this_or_null] = STATE(483),
    [anon_sym_RBRACE] = ACTIONS(947),
    [anon_sym_COLON_DASH] = ACTIONS(891),
    [anon_sym_COLON_PLUS] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [anon_sym_DQUOTE] = ACTIONS(949),
    [anon_sym_COLON] = ACTIONS(951),
    [anon_sym_DOLLAR] = ACTIONS(949),
    [aux_sym_path_token1] = ACTIONS(953),
    [aux_sym_path_token2] = ACTIONS(953),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [sym_template_expr_less_than_equals] = STATE(452),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [sym_hc_command] = STATE(192),
    [aux_sym__anything] = STATE(147),
    [sym__anything_or_json_array] = STATE(200),
    [aux_sym__anything_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(955),
  },
  [307] = {
    [sym_port] = STATE(453),
    [sym_port_range] = STATE(453),
    [sym__port_part] = STATE(382),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym__port_part_token1] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(310),
    [aux_sym__repository_start_token13] = ACTIONS(957),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(959),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(959),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym_port_protocol] = STATE(369),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(310),
    [aux_sym__repository_start_token13] = ACTIONS(963),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(965),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(965),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [311] = {
    [anon_sym_DQUOTE] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [anon_sym_DOLLAR] = ACTIONS(604),
    [aux_sym_path_token1] = ACTIONS(968),
    [aux_sym_path_token2] = ACTIONS(968),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(602),
    [aux_sym_path_token1] = ACTIONS(970),
    [aux_sym_path_token2] = ACTIONS(970),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [aux_sym__repository_start_repeat4] = STATE(324),
    [anon_sym_SLASH] = ACTIONS(935),
    [aux_sym__repository_start_token3] = ACTIONS(937),
    [aux_sym__repository_start_token12] = ACTIONS(972),
    [aux_sym__repository_start_token15] = ACTIONS(972),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [aux_sym_path_repeat2] = STATE(294),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [aux_sym_path_token3] = ACTIONS(976),
    [aux_sym_path_token4] = ACTIONS(909),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_port_protocol] = STATE(386),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [aux_sym__repository_start_repeat1] = STATE(298),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_SLASH] = ACTIONS(978),
    [aux_sym__repository_start_token2] = ACTIONS(933),
    [aux_sym__repository_start_token3] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [317] = {
    [sym_template_expr_less_than_equals] = STATE(461),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [aux_sym_cmd_token1] = ACTIONS(982),
    [anon_sym_DASH_DASHinterval] = ACTIONS(982),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(982),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(982),
    [anon_sym_DASH_DASHretires] = ACTIONS(982),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_cmd_token1] = ACTIONS(984),
    [anon_sym_DASH_DASHinterval] = ACTIONS(984),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(984),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(984),
    [anon_sym_DASH_DASHretires] = ACTIONS(984),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym_cmd_token1] = ACTIONS(986),
    [anon_sym_DASH_DASHinterval] = ACTIONS(986),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(986),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(986),
    [anon_sym_DASH_DASHretires] = ACTIONS(986),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [sym_path] = STATE(186),
    [anon_sym_DQUOTE] = ACTIONS(988),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [aux_sym_path_token1] = ACTIONS(992),
    [aux_sym_path_token2] = ACTIONS(994),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [aux_sym__repository_start_repeat2] = STATE(337),
    [anon_sym_SLASH] = ACTIONS(883),
    [aux_sym__repository_start_token3] = ACTIONS(885),
    [aux_sym__repository_start_token4] = ACTIONS(941),
    [aux_sym__repository_start_token7] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [anon_sym_DQUOTE] = ACTIONS(949),
    [anon_sym_COLON] = ACTIONS(996),
    [anon_sym_DOLLAR] = ACTIONS(949),
    [aux_sym_path_token1] = ACTIONS(953),
    [aux_sym_path_token2] = ACTIONS(953),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [aux_sym__repository_start_repeat4] = STATE(334),
    [anon_sym_SLASH] = ACTIONS(883),
    [aux_sym__repository_start_token3] = ACTIONS(885),
    [aux_sym__repository_start_token12] = ACTIONS(972),
    [aux_sym__repository_start_token15] = ACTIONS(972),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [aux_sym_cmd_token1] = ACTIONS(998),
    [anon_sym_DASH_DASHinterval] = ACTIONS(998),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(998),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(998),
    [anon_sym_DASH_DASHretires] = ACTIONS(998),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [aux_sym_cmd_token1] = ACTIONS(1000),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1000),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1000),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1000),
    [anon_sym_DASH_DASHretires] = ACTIONS(1000),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [aux_sym_cmd_token1] = ACTIONS(1002),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1002),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1002),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1002),
    [anon_sym_DASH_DASHretires] = ACTIONS(1002),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_cmd_token1] = ACTIONS(1004),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1004),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1004),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1004),
    [anon_sym_DASH_DASHretires] = ACTIONS(1004),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [aux_sym_cmd_token1] = ACTIONS(1006),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1006),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1006),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1006),
    [anon_sym_DASH_DASHretires] = ACTIONS(1006),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_user_name] = STATE(169),
    [sym_user_id] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(1008),
    [aux_sym_user_name_token1] = ACTIONS(1010),
    [aux_sym_user_id_token1] = ACTIONS(1012),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [sym_template_expr_less_than_equals] = STATE(534),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [aux_sym__repository_start_repeat1] = STATE(332),
    [anon_sym_DOLLAR] = ACTIONS(1014),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(1014),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [sym_template_expr_less_than_equals] = STATE(519),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [aux_sym__repository_start_repeat4] = STATE(334),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token12] = ACTIONS(1017),
    [aux_sym__repository_start_token15] = ACTIONS(1017),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym__repository_start_repeat3] = STATE(335),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token8] = ACTIONS(1020),
    [aux_sym__repository_start_token11] = ACTIONS(1020),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [336] = {
    [sym_template_expr_less_than_equals] = STATE(544),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(881),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [aux_sym__repository_start_repeat2] = STATE(337),
    [anon_sym_SLASH] = ACTIONS(147),
    [aux_sym__repository_start_token3] = ACTIONS(149),
    [aux_sym__repository_start_token4] = ACTIONS(1023),
    [aux_sym__repository_start_token7] = ACTIONS(1023),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [aux_sym__anything] = STATE(147),
    [sym__anything_or_json_array] = STATE(207),
    [aux_sym__anything_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1026),
  },
  [339] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token7] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token8] = ACTIONS(207),
    [aux_sym__repository_start_token11] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [341] = {
    [anon_sym_DOLLAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [aux_sym__anything] = STATE(147),
    [sym__anything_or_json_array] = STATE(181),
    [aux_sym__anything_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1028),
  },
  [343] = {
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token15] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [aux_sym__anything] = STATE(147),
    [sym__anything_or_json_array] = STATE(213),
    [aux_sym__anything_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1030),
  },
  [345] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_DQUOTE] = ACTIONS(668),
    [anon_sym_DOLLAR] = ACTIONS(668),
    [aux_sym_path_token1] = ACTIONS(1032),
    [aux_sym_path_token2] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token3] = ACTIONS(193),
    [aux_sym_path_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [anon_sym_DQUOTE] = ACTIONS(672),
    [anon_sym_DOLLAR] = ACTIONS(672),
    [aux_sym_path_token1] = ACTIONS(1034),
    [aux_sym_path_token2] = ACTIONS(1034),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token3] = ACTIONS(205),
    [aux_sym_path_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token1] = ACTIONS(197),
    [aux_sym_path_token2] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token1] = ACTIONS(205),
    [aux_sym_path_token2] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [sym_env_value] = STATE(175),
    [anon_sym_DQUOTE] = ACTIONS(1036),
    [aux_sym_env_value_token1] = ACTIONS(1038),
    [aux_sym_env_value_token2] = ACTIONS(1038),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(1040),
    [anon_sym_DOLLAR] = ACTIONS(1040),
    [aux_sym_path_token1] = ACTIONS(1042),
    [aux_sym_path_token2] = ACTIONS(1042),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [359] = {
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_DOLLAR] = ACTIONS(1044),
    [aux_sym_path_token1] = ACTIONS(1046),
    [aux_sym_path_token2] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [361] = {
    [anon_sym_DQUOTE] = ACTIONS(1048),
    [anon_sym_DOLLAR] = ACTIONS(1048),
    [aux_sym_path_token1] = ACTIONS(1050),
    [aux_sym_path_token2] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [363] = {
    [sym_label_value] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(1052),
    [aux_sym_env_value_token1] = ACTIONS(1054),
    [aux_sym_label_value_token1] = ACTIONS(1054),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_DOLLAR] = ACTIONS(915),
    [aux_sym_path_token3] = ACTIONS(920),
    [aux_sym_path_token4] = ACTIONS(920),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [sym_docker_variable] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [sym_docker_variable] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(1060),
    [sym__docker_variable] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [sym_docker_variable] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym__docker_variable] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [368] = {
    [anon_sym_DOLLAR] = ACTIONS(1068),
    [aux_sym_path_token3] = ACTIONS(1070),
    [aux_sym_path_token4] = ACTIONS(1072),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [anon_sym_DQUOTE] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [sym_platform] = STATE(222),
    [anon_sym_DOLLAR] = ACTIONS(1074),
    [aux_sym_platform_token1] = ACTIONS(1076),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [sym_docker_variable] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(1078),
    [sym__docker_variable] = ACTIONS(1080),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [sym_docker_variable] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [sym_docker_variable] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym__docker_variable] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [aux_sym_env_value_repeat1] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(1086),
    [aux_sym_env_value_token3] = ACTIONS(1088),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [376] = {
    [sym_docker_variable] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(1090),
    [sym__docker_variable] = ACTIONS(1092),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [sym_docker_variable] = STATE(341),
    [anon_sym_LBRACE] = ACTIONS(1094),
    [sym__docker_variable] = ACTIONS(1096),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [378] = {
    [aux_sym_env_value_repeat1] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [aux_sym_env_value_token3] = ACTIONS(1100),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [sym_docker_variable] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [sym__docker_variable] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [sym_docker_variable] = STATE(52),
    [anon_sym_LBRACE] = ACTIONS(1078),
    [sym__docker_variable] = ACTIONS(1080),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [381] = {
    [sym_docker_variable] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [382] = {
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [sym_docker_variable] = STATE(405),
    [anon_sym_LBRACE] = ACTIONS(1060),
    [sym__docker_variable] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [384] = {
    [sym_signal_name] = STATE(184),
    [sym_signal_num] = ACTIONS(1109),
    [aux_sym_signal_name_token1] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [anon_sym_DOLLAR] = ACTIONS(1113),
    [aux_sym_port_protocol_token1] = ACTIONS(1115),
    [aux_sym_port_protocol_token2] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [sym_docker_variable] = STATE(100),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [388] = {
    [aux_sym_env_value_repeat1] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(1121),
    [aux_sym_env_value_token3] = ACTIONS(1088),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [389] = {
    [sym_docker_variable] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(1094),
    [sym__docker_variable] = ACTIONS(1096),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [390] = {
    [sym_docker_variable] = STATE(364),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym__docker_variable] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [391] = {
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_docker_variable] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [sym__docker_variable] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [393] = {
    [sym_docker_variable] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym__docker_variable] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [sym_docker_variable] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [sym_docker_variable] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(1090),
    [sym__docker_variable] = ACTIONS(1092),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [396] = {
    [sym_docker_variable] = STATE(65),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [397] = {
    [aux_sym__env_pairs] = STATE(113),
    [sym_env_pair] = STATE(113),
    [sym_env_key] = ACTIONS(453),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [sym_docker_variable] = STATE(265),
    [anon_sym_LBRACE] = ACTIONS(1123),
    [sym__docker_variable] = ACTIONS(1125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [399] = {
    [sym__port_part] = STATE(98),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [anon_sym_DOLLAR] = ACTIONS(1127),
    [aux_sym_port_protocol_token1] = ACTIONS(1129),
    [aux_sym_port_protocol_token2] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [aux_sym__labels] = STATE(135),
    [sym_label_pair] = STATE(135),
    [sym_label_key] = ACTIONS(514),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym__port_part] = STATE(413),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym__port_part_token1] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [anon_sym_DOLLAR] = ACTIONS(1131),
    [aux_sym_path_token3] = ACTIONS(1133),
    [aux_sym_path_token4] = ACTIONS(1135),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym_docker_variable] = STATE(122),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [405] = {
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_docker_variable] = STATE(361),
    [anon_sym_LBRACE] = ACTIONS(1137),
    [sym__docker_variable] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [407] = {
    [sym_hc_retries] = STATE(318),
    [aux_sym__port_part_token1] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_DQUOTE] = ACTIONS(1143),
    [anon_sym_COLON] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [aux_sym__anything] = STATE(117),
    [aux_sym__anything_token1] = ACTIONS(1148),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [aux_sym_env_value_repeat1] = STATE(388),
    [aux_sym_env_value_token3] = ACTIONS(1150),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [412] = {
    [aux_sym_env_value_repeat1] = STATE(375),
    [aux_sym_env_value_token3] = ACTIONS(1152),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [413] = {
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_hc_interval] = STATE(328),
    [aux_sym_hc_interval_token1] = ACTIONS(1156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [sym_hc_timeout] = STATE(326),
    [aux_sym_hc_interval_token1] = ACTIONS(1158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym__anything] = STATE(150),
    [aux_sym__anything_token1] = ACTIONS(1160),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_hc_start_period] = STATE(320),
    [aux_sym_hc_interval_token1] = ACTIONS(1162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_user_group] = STATE(215),
    [aux_sym_user_name_token1] = ACTIONS(1164),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_user_group_id] = STATE(215),
    [aux_sym_user_id_token1] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_user_group] = STATE(357),
    [aux_sym_user_name_token1] = ACTIONS(1168),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_user_group_id] = STATE(357),
    [aux_sym_user_id_token1] = ACTIONS(1170),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_template_expr_curly_braces] = ACTIONS(1172),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [424] = {
    [sym_template_expr_percent_signs] = ACTIONS(1174),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [425] = {
    [anon_sym_DQUOTE] = ACTIONS(1176),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [aux_sym_from_token2] = ACTIONS(1178),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1180),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1182),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym_arg_default] = ACTIONS(1184),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [430] = {
    [sym__docker_variable] = ACTIONS(1186),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [431] = {
    [anon_sym_DQUOTE] = ACTIONS(1188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [aux_sym_from_token2] = ACTIONS(1190),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [aux_sym__repository_start_token5] = ACTIONS(1192),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [aux_sym__repository_start_token9] = ACTIONS(1194),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [aux_sym_signal_name_token2] = ACTIONS(1196),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [aux_sym__repository_start_token13] = ACTIONS(1198),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [aux_sym_label_pair_token1] = ACTIONS(1200),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [anon_sym_EQ] = ACTIONS(1202),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [anon_sym_EQ] = ACTIONS(1204),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_DQUOTE] = ACTIONS(478),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [sym_template_expr_curly_braces] = ACTIONS(1206),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [442] = {
    [aux_sym_from_token2] = ACTIONS(1208),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_EQ] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_EQ] = ACTIONS(1212),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1214),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym_template_expr_percent_signs] = ACTIONS(1218),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [448] = {
    [sym_template_expr_curly_braces] = ACTIONS(1220),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [449] = {
    [aux_sym__repository_start_token5] = ACTIONS(1222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym__repository_start_token9] = ACTIONS(1224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1226),
  },
  [452] = {
    [aux_sym__repository_start_token13] = ACTIONS(1228),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [anon_sym_DQUOTE] = ACTIONS(1230),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [aux_sym_from_token2] = ACTIONS(1232),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym_template_expr_curly_braces] = ACTIONS(1236),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [457] = {
    [sym_template_expr_percent_signs] = ACTIONS(1238),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [458] = {
    [sym_template_expr_percent_signs] = ACTIONS(1240),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [459] = {
    [sym_template_expr_curly_braces] = ACTIONS(1242),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [460] = {
    [aux_sym__repository_start_token9] = ACTIONS(1244),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [aux_sym__repository_start_token13] = ACTIONS(1246),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [aux_sym_from_token2] = ACTIONS(1248),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [sym_template_expr_percent_signs] = ACTIONS(1250),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [464] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym_arg_name] = ACTIONS(1254),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [ts_builtin_sym_end] = ACTIONS(1256),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1258),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1260),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1262),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1268),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1270),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_SLASH] = ACTIONS(883),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [sym_template_expr_curly_braces] = ACTIONS(1276),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [478] = {
    [anon_sym_DQUOTE] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym__repository_start_token13] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1280),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [481] = {
    [aux_sym__repository_start_token9] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1284),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [483] = {
    [anon_sym_RBRACE] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1290),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1292),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1294),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [aux_sym__repository_start_token5] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1304),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1310),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [anon_sym_SLASH] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [sym_template_expr_curly_braces] = ACTIONS(1314),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [498] = {
    [anon_sym_DQUOTE] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [sym_template_expr_percent_signs] = ACTIONS(1318),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [500] = {
    [aux_sym_from_token2] = ACTIONS(1320),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [aux_sym_from_token2] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [anon_sym_DQUOTE] = ACTIONS(1324),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [aux_sym_from_token2] = ACTIONS(1326),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [anon_sym_DQUOTE] = ACTIONS(929),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [aux_sym_from_token2] = ACTIONS(1330),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_RBRACE] = ACTIONS(1332),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_DQUOTE] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [aux_sym__repository_start_token5] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym__repository_start_token9] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym__repository_start_token13] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_SLASH] = ACTIONS(935),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [aux_sym__repository_start_token5] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_RBRACE] = ACTIONS(1344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [aux_sym__repository_start_token5] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [aux_sym__repository_start_token9] = ACTIONS(1348),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [aux_sym__repository_start_token13] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1352),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [aux_sym__repository_start_token13] = ACTIONS(1354),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [aux_sym__repository_start_token5] = ACTIONS(1358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [aux_sym__repository_start_token9] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [aux_sym__repository_start_token13] = ACTIONS(1362),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_RBRACE] = ACTIONS(1364),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1366),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [anon_sym_DQUOTE] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [sym_template_expr_percent_signs] = ACTIONS(1372),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [529] = {
    [anon_sym_RBRACE] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [aux_sym__repository_start_token9] = ACTIONS(1376),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [anon_sym_RBRACE] = ACTIONS(1378),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1380),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_RBRACE] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [aux_sym__repository_start_token13] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_RBRACE] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [aux_sym__repository_start_token9] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_RBRACE] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [aux_sym__repository_start_token5] = ACTIONS(1392),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_SLASH] = ACTIONS(1394),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [sym__docker_variable] = ACTIONS(1396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [541] = {
    [aux_sym__repository_start_token5] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [sym_template_expr_curly_braces] = ACTIONS(1400),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [543] = {
    [sym_template_expr_percent_signs] = ACTIONS(1402),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [544] = {
    [aux_sym__repository_start_token13] = ACTIONS(1404),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [sym__docker_variable] = ACTIONS(1406),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [546] = {
    [sym_template_expr_curly_braces] = ACTIONS(1408),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [547] = {
    [sym_template_expr_percent_signs] = ACTIONS(1410),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [548] = {
    [aux_sym__repository_start_token9] = ACTIONS(1412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [sym__docker_variable] = ACTIONS(1414),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [550] = {
    [sym_template_expr_curly_braces] = ACTIONS(1416),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [551] = {
    [sym_template_expr_percent_signs] = ACTIONS(1418),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [552] = {
    [aux_sym__repository_start_token5] = ACTIONS(1420),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [sym__docker_variable] = ACTIONS(1422),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [554] = {
    [sym__docker_variable] = ACTIONS(1424),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [555] = {
    [sym__docker_variable] = ACTIONS(1426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [556] = {
    [sym__docker_variable] = ACTIONS(1428),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [557] = {
    [sym__docker_variable] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [558] = {
    [sym__docker_variable] = ACTIONS(1432),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [559] = {
    [sym__docker_variable] = ACTIONS(1434),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(455),
  [11] = {.count = 1, .reusable = true}, SHIFT(495),
  [13] = {.count = 1, .reusable = true}, SHIFT(494),
  [15] = {.count = 1, .reusable = true}, SHIFT(493),
  [17] = {.count = 1, .reusable = true}, SHIFT(489),
  [19] = {.count = 1, .reusable = true}, SHIFT(488),
  [21] = {.count = 1, .reusable = true}, SHIFT(487),
  [23] = {.count = 1, .reusable = true}, SHIFT(486),
  [25] = {.count = 1, .reusable = true}, SHIFT(485),
  [27] = {.count = 1, .reusable = true}, SHIFT(484),
  [29] = {.count = 1, .reusable = true}, SHIFT(474),
  [31] = {.count = 1, .reusable = true}, SHIFT(473),
  [33] = {.count = 1, .reusable = true}, SHIFT(472),
  [35] = {.count = 1, .reusable = true}, SHIFT(471),
  [37] = {.count = 1, .reusable = true}, SHIFT(470),
  [39] = {.count = 1, .reusable = true}, SHIFT(469),
  [41] = {.count = 1, .reusable = true}, SHIFT(468),
  [43] = {.count = 1, .reusable = true}, SHIFT(467),
  [45] = {.count = 1, .reusable = true}, SHIFT(204),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(455),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(495),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(494),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(493),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(489),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(488),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(487),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(486),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(485),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(484),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(474),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(473),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(472),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(471),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(470),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(469),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(468),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(467),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(204),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(264),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(370),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(26),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(264),
  [123] = {.count = 1, .reusable = true}, SHIFT(370),
  [125] = {.count = 1, .reusable = true}, SHIFT(26),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(257),
  [133] = {.count = 1, .reusable = false}, SHIFT(66),
  [135] = {.count = 1, .reusable = true}, SHIFT(528),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(381),
  [143] = {.count = 1, .reusable = true}, SHIFT(268),
  [145] = {.count = 1, .reusable = false}, SHIFT(79),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(441),
  [154] = {.count = 1, .reusable = true}, SHIFT(285),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [158] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(285),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(528),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [174] = {.count = 1, .reusable = true}, SHIFT(263),
  [176] = {.count = 1, .reusable = false}, SHIFT(75),
  [178] = {.count = 1, .reusable = true}, SHIFT(441),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(381),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [213] = {.count = 1, .reusable = true}, SHIFT(400),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(283),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(379),
  [222] = {.count = 1, .reusable = false}, SHIFT(130),
  [224] = {.count = 1, .reusable = false}, SHIFT(115),
  [226] = {.count = 1, .reusable = false}, SHIFT(139),
  [228] = {.count = 1, .reusable = true}, SHIFT(542),
  [230] = {.count = 1, .reusable = true}, SHIFT(543),
  [232] = {.count = 1, .reusable = true}, SHIFT(283),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(379),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(543),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(542),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [245] = {.count = 1, .reusable = true}, SHIFT(403),
  [247] = {.count = 1, .reusable = true}, SHIFT(380),
  [249] = {.count = 1, .reusable = false}, SHIFT(68),
  [251] = {.count = 1, .reusable = false}, SHIFT(380),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [257] = {.count = 1, .reusable = false}, SHIFT(143),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(403),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(380),
  [271] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(68),
  [274] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(380),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(372),
  [281] = {.count = 1, .reusable = false}, SHIFT(67),
  [283] = {.count = 1, .reusable = false}, SHIFT(372),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [291] = {.count = 1, .reusable = false}, SHIFT(145),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [297] = {.count = 1, .reusable = false}, SHIFT(77),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(372),
  [306] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [308] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(372),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [315] = {.count = 1, .reusable = false}, SHIFT(142),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [325] = {.count = 1, .reusable = true}, SHIFT(270),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [329] = {.count = 1, .reusable = true}, SHIFT(399),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [341] = {.count = 1, .reusable = true}, SHIFT(262),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [351] = {.count = 1, .reusable = false}, SHIFT(172),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [361] = {.count = 1, .reusable = false}, SHIFT(166),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [367] = {.count = 1, .reusable = false}, SHIFT(163),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [375] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [377] = {.count = 1, .reusable = false}, SHIFT(110),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [383] = {.count = 1, .reusable = false}, SHIFT(210),
  [385] = {.count = 1, .reusable = true}, SHIFT(281),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(404),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(404),
  [393] = {.count = 1, .reusable = true}, SHIFT(550),
  [395] = {.count = 1, .reusable = true}, SHIFT(551),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [401] = {.count = 1, .reusable = true}, SHIFT(376),
  [403] = {.count = 1, .reusable = false}, SHIFT(205),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [411] = {.count = 1, .reusable = false}, SHIFT(199),
  [413] = {.count = 1, .reusable = true}, SHIFT(404),
  [415] = {.count = 1, .reusable = false}, SHIFT(188),
  [417] = {.count = 1, .reusable = false}, SHIFT(404),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [421] = {.count = 1, .reusable = false}, SHIFT(202),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [425] = {.count = 1, .reusable = true}, SHIFT(273),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(376),
  [430] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(281),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(551),
  [436] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(550),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [443] = {.count = 1, .reusable = true}, SHIFT(253),
  [445] = {.count = 1, .reusable = true}, SHIFT(227),
  [447] = {.count = 1, .reusable = false}, SHIFT(500),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [453] = {.count = 1, .reusable = true}, SHIFT(131),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [459] = {.count = 1, .reusable = false}, SHIFT(140),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs, 2),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym__env_pairs, 2), SHIFT_REPEAT(131),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [470] = {.count = 1, .reusable = true}, SHIFT(254),
  [472] = {.count = 1, .reusable = true}, SHIFT(232),
  [474] = {.count = 1, .reusable = false}, SHIFT(501),
  [476] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [482] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(140),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 1),
  [491] = {.count = 1, .reusable = true}, SHIFT(355),
  [493] = {.count = 1, .reusable = false}, SHIFT(410),
  [495] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [497] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(437),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [504] = {.count = 1, .reusable = true}, SHIFT(241),
  [506] = {.count = 1, .reusable = true}, SHIFT(226),
  [508] = {.count = 1, .reusable = false}, SHIFT(503),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [514] = {.count = 1, .reusable = true}, SHIFT(437),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [518] = {.count = 1, .reusable = true}, SHIFT(251),
  [520] = {.count = 1, .reusable = true}, SHIFT(229),
  [522] = {.count = 1, .reusable = false}, SHIFT(432),
  [524] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [526] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [530] = {.count = 1, .reusable = true}, SHIFT(225),
  [532] = {.count = 1, .reusable = false}, SHIFT(506),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(167),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [543] = {.count = 1, .reusable = false}, SHIFT(167),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [547] = {.count = 1, .reusable = true}, SHIFT(224),
  [549] = {.count = 1, .reusable = false}, SHIFT(442),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(165),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [556] = {.count = 1, .reusable = false}, SHIFT(165),
  [558] = {.count = 1, .reusable = false}, SHIFT(203),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [570] = {.count = 1, .reusable = false}, SHIFT(462),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [578] = {.count = 1, .reusable = false}, SHIFT(454),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [582] = {.count = 1, .reusable = true}, SHIFT(429),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [590] = {.count = 1, .reusable = false}, SHIFT(426),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [598] = {.count = 1, .reusable = true}, SHIFT(420),
  [600] = {.count = 1, .reusable = true}, SHIFT(419),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [608] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 3),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 3),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [658] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 4),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [674] = {.count = 1, .reusable = true}, SHIFT(445),
  [676] = {.count = 1, .reusable = true}, SHIFT(180),
  [678] = {.count = 1, .reusable = true}, SHIFT(444),
  [680] = {.count = 1, .reusable = true}, SHIFT(443),
  [682] = {.count = 1, .reusable = true}, SHIFT(439),
  [684] = {.count = 1, .reusable = true}, SHIFT(438),
  [686] = {.count = 1, .reusable = true}, SHIFT(371),
  [688] = {.count = 1, .reusable = true}, SHIFT(373),
  [690] = {.count = 1, .reusable = false}, SHIFT(69),
  [692] = {.count = 1, .reusable = true}, SHIFT(448),
  [694] = {.count = 1, .reusable = true}, SHIFT(447),
  [696] = {.count = 1, .reusable = true}, SHIFT(317),
  [698] = {.count = 1, .reusable = true}, SHIFT(275),
  [700] = {.count = 1, .reusable = true}, SHIFT(237),
  [702] = {.count = 1, .reusable = true}, SHIFT(394),
  [704] = {.count = 1, .reusable = false}, SHIFT(164),
  [706] = {.count = 1, .reusable = true}, SHIFT(423),
  [708] = {.count = 1, .reusable = true}, SHIFT(463),
  [710] = {.count = 1, .reusable = true}, SHIFT(331),
  [712] = {.count = 1, .reusable = true}, SHIFT(245),
  [714] = {.count = 1, .reusable = true}, SHIFT(238),
  [716] = {.count = 1, .reusable = true}, SHIFT(250),
  [718] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(389),
  [721] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(496),
  [724] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(497),
  [727] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(499),
  [730] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(305),
  [733] = {.count = 1, .reusable = true}, SHIFT(243),
  [735] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(444),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(443),
  [743] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(439),
  [746] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(438),
  [749] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(389),
  [752] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(496),
  [755] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(497),
  [758] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(499),
  [761] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(305),
  [764] = {.count = 1, .reusable = true}, SHIFT(248),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(389),
  [769] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(496),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(497),
  [775] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(499),
  [778] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(305),
  [781] = {.count = 1, .reusable = true}, SHIFT(395),
  [783] = {.count = 1, .reusable = false}, SHIFT(212),
  [785] = {.count = 1, .reusable = true}, SHIFT(459),
  [787] = {.count = 1, .reusable = true}, SHIFT(458),
  [789] = {.count = 1, .reusable = true}, SHIFT(333),
  [791] = {.count = 1, .reusable = true}, SHIFT(392),
  [793] = {.count = 1, .reusable = false}, SHIFT(136),
  [795] = {.count = 1, .reusable = true}, SHIFT(477),
  [797] = {.count = 1, .reusable = true}, SHIFT(424),
  [799] = {.count = 1, .reusable = true}, SHIFT(279),
  [801] = {.count = 1, .reusable = true}, SHIFT(396),
  [803] = {.count = 1, .reusable = false}, SHIFT(152),
  [805] = {.count = 1, .reusable = true}, SHIFT(456),
  [807] = {.count = 1, .reusable = true}, SHIFT(457),
  [809] = {.count = 1, .reusable = true}, SHIFT(336),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [829] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [833] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [837] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [841] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [843] = {.count = 1, .reusable = true}, SHIFT(307),
  [845] = {.count = 1, .reusable = true}, SHIFT(366),
  [847] = {.count = 1, .reusable = true}, SHIFT(309),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [857] = {.count = 1, .reusable = true}, SHIFT(278),
  [859] = {.count = 1, .reusable = true}, SHIFT(216),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [869] = {.count = 1, .reusable = true}, SHIFT(206),
  [871] = {.count = 1, .reusable = true}, SHIFT(284),
  [873] = {.count = 1, .reusable = true}, SHIFT(185),
  [875] = {.count = 1, .reusable = true}, SHIFT(406),
  [877] = {.count = 1, .reusable = true}, SHIFT(311),
  [879] = {.count = 1, .reusable = true}, SHIFT(312),
  [881] = {.count = 1, .reusable = true}, SHIFT(308),
  [883] = {.count = 1, .reusable = true}, SHIFT(259),
  [885] = {.count = 1, .reusable = false}, SHIFT(539),
  [887] = {.count = 1, .reusable = true}, SHIFT(547),
  [889] = {.count = 1, .reusable = true}, SHIFT(137),
  [891] = {.count = 1, .reusable = true}, SHIFT(480),
  [893] = {.count = 1, .reusable = true}, SHIFT(482),
  [895] = {.count = 1, .reusable = true}, SHIFT(360),
  [897] = {.count = 1, .reusable = true}, SHIFT(53),
  [899] = {.count = 1, .reusable = true}, SHIFT(256),
  [901] = {.count = 1, .reusable = true}, SHIFT(354),
  [903] = {.count = 1, .reusable = true}, SHIFT(77),
  [905] = {.count = 1, .reusable = true}, SHIFT(390),
  [907] = {.count = 1, .reusable = false}, SHIFT(478),
  [909] = {.count = 1, .reusable = false}, SHIFT(390),
  [911] = {.count = 1, .reusable = true}, SHIFT(351),
  [913] = {.count = 1, .reusable = true}, SHIFT(347),
  [915] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [917] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(390),
  [920] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [922] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(390),
  [925] = {.count = 1, .reusable = true}, SHIFT(123),
  [927] = {.count = 1, .reusable = true}, SHIFT(21),
  [929] = {.count = 1, .reusable = true}, SHIFT(191),
  [931] = {.count = 1, .reusable = false}, SHIFT(508),
  [933] = {.count = 1, .reusable = true}, SHIFT(377),
  [935] = {.count = 1, .reusable = true}, SHIFT(261),
  [937] = {.count = 1, .reusable = false}, SHIFT(475),
  [939] = {.count = 1, .reusable = true}, SHIFT(58),
  [941] = {.count = 1, .reusable = true}, SHIFT(546),
  [943] = {.count = 1, .reusable = true}, SHIFT(202),
  [945] = {.count = 1, .reusable = false}, SHIFT(505),
  [947] = {.count = 1, .reusable = true}, SHIFT(76),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [951] = {.count = 1, .reusable = true}, SHIFT(422),
  [953] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 1),
  [955] = {.count = 1, .reusable = true}, SHIFT(200),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [959] = {.count = 1, .reusable = true}, SHIFT(310),
  [961] = {.count = 1, .reusable = true}, SHIFT(385),
  [963] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [965] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(310),
  [968] = {.count = 1, .reusable = false}, REDUCE(sym_user_name, 1),
  [970] = {.count = 1, .reusable = false}, REDUCE(sym_user_id, 1),
  [972] = {.count = 1, .reusable = true}, SHIFT(282),
  [974] = {.count = 1, .reusable = true}, SHIFT(90),
  [976] = {.count = 1, .reusable = false}, SHIFT(526),
  [978] = {.count = 1, .reusable = true}, SHIFT(271),
  [980] = {.count = 1, .reusable = false}, SHIFT(512),
  [982] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [988] = {.count = 1, .reusable = true}, SHIFT(368),
  [990] = {.count = 1, .reusable = true}, SHIFT(387),
  [992] = {.count = 1, .reusable = false}, SHIFT(189),
  [994] = {.count = 1, .reusable = false}, SHIFT(387),
  [996] = {.count = 1, .reusable = true}, SHIFT(421),
  [998] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1000] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1006] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [1008] = {.count = 1, .reusable = true}, SHIFT(365),
  [1010] = {.count = 1, .reusable = true}, SHIFT(171),
  [1012] = {.count = 1, .reusable = true}, SHIFT(170),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(377),
  [1017] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(282),
  [1020] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(547),
  [1023] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(546),
  [1026] = {.count = 1, .reusable = true}, SHIFT(207),
  [1028] = {.count = 1, .reusable = true}, SHIFT(181),
  [1030] = {.count = 1, .reusable = true}, SHIFT(213),
  [1032] = {.count = 1, .reusable = false}, REDUCE(sym_user_group_id, 1),
  [1034] = {.count = 1, .reusable = false}, REDUCE(sym_user_group, 1),
  [1036] = {.count = 1, .reusable = false}, SHIFT(411),
  [1038] = {.count = 1, .reusable = true}, SHIFT(174),
  [1040] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1042] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 3),
  [1044] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 2),
  [1046] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 2),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1050] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 2),
  [1052] = {.count = 1, .reusable = false}, SHIFT(412),
  [1054] = {.count = 1, .reusable = true}, SHIFT(153),
  [1056] = {.count = 1, .reusable = true}, SHIFT(540),
  [1058] = {.count = 1, .reusable = true}, SHIFT(44),
  [1060] = {.count = 1, .reusable = true}, SHIFT(555),
  [1062] = {.count = 1, .reusable = true}, SHIFT(353),
  [1064] = {.count = 1, .reusable = true}, SHIFT(553),
  [1066] = {.count = 1, .reusable = true}, SHIFT(345),
  [1068] = {.count = 1, .reusable = true}, SHIFT(367),
  [1070] = {.count = 1, .reusable = false}, SHIFT(498),
  [1072] = {.count = 1, .reusable = false}, SHIFT(367),
  [1074] = {.count = 1, .reusable = true}, SHIFT(398),
  [1076] = {.count = 1, .reusable = true}, SHIFT(260),
  [1078] = {.count = 1, .reusable = true}, SHIFT(430),
  [1080] = {.count = 1, .reusable = true}, SHIFT(89),
  [1082] = {.count = 1, .reusable = true}, SHIFT(545),
  [1084] = {.count = 1, .reusable = true}, SHIFT(22),
  [1086] = {.count = 1, .reusable = true}, SHIFT(156),
  [1088] = {.count = 1, .reusable = true}, SHIFT(378),
  [1090] = {.count = 1, .reusable = true}, SHIFT(559),
  [1092] = {.count = 1, .reusable = true}, SHIFT(134),
  [1094] = {.count = 1, .reusable = true}, SHIFT(558),
  [1096] = {.count = 1, .reusable = true}, SHIFT(358),
  [1098] = {.count = 1, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2),
  [1100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2), SHIFT_REPEAT(378),
  [1103] = {.count = 1, .reusable = true}, SHIFT(557),
  [1105] = {.count = 1, .reusable = true}, SHIFT(62),
  [1107] = {.count = 1, .reusable = true}, SHIFT(402),
  [1109] = {.count = 1, .reusable = true}, SHIFT(184),
  [1111] = {.count = 1, .reusable = true}, SHIFT(435),
  [1113] = {.count = 1, .reusable = true}, SHIFT(383),
  [1115] = {.count = 1, .reusable = true}, SHIFT(391),
  [1117] = {.count = 1, .reusable = true}, SHIFT(549),
  [1119] = {.count = 1, .reusable = true}, SHIFT(128),
  [1121] = {.count = 1, .reusable = true}, SHIFT(176),
  [1123] = {.count = 1, .reusable = true}, SHIFT(556),
  [1125] = {.count = 1, .reusable = true}, SHIFT(267),
  [1127] = {.count = 1, .reusable = true}, SHIFT(393),
  [1129] = {.count = 1, .reusable = true}, SHIFT(72),
  [1131] = {.count = 1, .reusable = true}, SHIFT(374),
  [1133] = {.count = 1, .reusable = false}, SHIFT(431),
  [1135] = {.count = 1, .reusable = false}, SHIFT(374),
  [1137] = {.count = 1, .reusable = true}, SHIFT(554),
  [1139] = {.count = 1, .reusable = true}, SHIFT(350),
  [1141] = {.count = 1, .reusable = true}, SHIFT(319),
  [1143] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(102),
  [1146] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1148] = {.count = 1, .reusable = true}, SHIFT(140),
  [1150] = {.count = 1, .reusable = true}, SHIFT(388),
  [1152] = {.count = 1, .reusable = true}, SHIFT(375),
  [1154] = {.count = 1, .reusable = true}, SHIFT(274),
  [1156] = {.count = 1, .reusable = true}, SHIFT(329),
  [1158] = {.count = 1, .reusable = true}, SHIFT(327),
  [1160] = {.count = 1, .reusable = true}, SHIFT(165),
  [1162] = {.count = 1, .reusable = true}, SHIFT(325),
  [1164] = {.count = 1, .reusable = true}, SHIFT(217),
  [1166] = {.count = 1, .reusable = true}, SHIFT(214),
  [1168] = {.count = 1, .reusable = true}, SHIFT(348),
  [1170] = {.count = 1, .reusable = true}, SHIFT(346),
  [1172] = {.count = 1, .reusable = true}, SHIFT(541),
  [1174] = {.count = 1, .reusable = true}, SHIFT(434),
  [1176] = {.count = 1, .reusable = true}, SHIFT(126),
  [1178] = {.count = 1, .reusable = true}, SHIFT(428),
  [1180] = {.count = 1, .reusable = true}, SHIFT(246),
  [1182] = {.count = 1, .reusable = true}, SHIFT(244),
  [1184] = {.count = 1, .reusable = true}, SHIFT(179),
  [1186] = {.count = 1, .reusable = true}, SHIFT(303),
  [1188] = {.count = 1, .reusable = true}, SHIFT(67),
  [1190] = {.count = 1, .reusable = true}, SHIFT(532),
  [1192] = {.count = 1, .reusable = true}, SHIFT(32),
  [1194] = {.count = 1, .reusable = true}, SHIFT(34),
  [1196] = {.count = 1, .reusable = true}, SHIFT(198),
  [1198] = {.count = 1, .reusable = true}, SHIFT(35),
  [1200] = {.count = 1, .reusable = true}, SHIFT(363),
  [1202] = {.count = 1, .reusable = true}, SHIFT(407),
  [1204] = {.count = 1, .reusable = true}, SHIFT(418),
  [1206] = {.count = 1, .reusable = true}, SHIFT(490),
  [1208] = {.count = 1, .reusable = true}, SHIFT(504),
  [1210] = {.count = 1, .reusable = true}, SHIFT(416),
  [1212] = {.count = 1, .reusable = true}, SHIFT(415),
  [1214] = {.count = 1, .reusable = true}, SHIFT(306),
  [1216] = {.count = 1, .reusable = true}, SHIFT(234),
  [1218] = {.count = 1, .reusable = true}, SHIFT(460),
  [1220] = {.count = 1, .reusable = true}, SHIFT(513),
  [1222] = {.count = 1, .reusable = true}, SHIFT(300),
  [1224] = {.count = 1, .reusable = true}, SHIFT(301),
  [1226] = {.count = 1, .reusable = true}, SHIFT(183),
  [1228] = {.count = 1, .reusable = true}, SHIFT(313),
  [1230] = {.count = 1, .reusable = true}, SHIFT(408),
  [1232] = {.count = 1, .reusable = true}, SHIFT(427),
  [1234] = {.count = 1, .reusable = true}, SHIFT(272),
  [1236] = {.count = 1, .reusable = true}, SHIFT(552),
  [1238] = {.count = 1, .reusable = true}, SHIFT(548),
  [1240] = {.count = 1, .reusable = true}, SHIFT(530),
  [1242] = {.count = 1, .reusable = true}, SHIFT(538),
  [1244] = {.count = 1, .reusable = true}, SHIFT(7),
  [1246] = {.count = 1, .reusable = true}, SHIFT(10),
  [1248] = {.count = 1, .reusable = true}, SHIFT(492),
  [1250] = {.count = 1, .reusable = true}, SHIFT(536),
  [1252] = {.count = 1, .reusable = true}, SHIFT(236),
  [1254] = {.count = 1, .reusable = true}, SHIFT(159),
  [1256] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1258] = {.count = 1, .reusable = true}, SHIFT(321),
  [1260] = {.count = 1, .reusable = true}, SHIFT(276),
  [1262] = {.count = 1, .reusable = true}, SHIFT(330),
  [1264] = {.count = 1, .reusable = true}, SHIFT(384),
  [1266] = {.count = 1, .reusable = true}, SHIFT(451),
  [1268] = {.count = 1, .reusable = true}, SHIFT(342),
  [1270] = {.count = 1, .reusable = true}, SHIFT(6),
  [1272] = {.count = 1, .reusable = true}, SHIFT(417),
  [1274] = {.count = 1, .reusable = true}, SHIFT(239),
  [1276] = {.count = 1, .reusable = true}, SHIFT(433),
  [1278] = {.count = 1, .reusable = true}, SHIFT(19),
  [1280] = {.count = 1, .reusable = true}, SHIFT(524),
  [1282] = {.count = 1, .reusable = true}, SHIFT(25),
  [1284] = {.count = 1, .reusable = true}, SHIFT(518),
  [1286] = {.count = 1, .reusable = true}, SHIFT(78),
  [1288] = {.count = 1, .reusable = true}, SHIFT(401),
  [1290] = {.count = 1, .reusable = true}, SHIFT(219),
  [1292] = {.count = 1, .reusable = true}, SHIFT(220),
  [1294] = {.count = 1, .reusable = true}, SHIFT(221),
  [1296] = {.count = 1, .reusable = true}, SHIFT(397),
  [1298] = {.count = 1, .reusable = true}, SHIFT(338),
  [1300] = {.count = 1, .reusable = true}, SHIFT(23),
  [1302] = {.count = 1, .reusable = true}, SHIFT(249),
  [1304] = {.count = 1, .reusable = true}, SHIFT(247),
  [1306] = {.count = 1, .reusable = true}, SHIFT(269),
  [1308] = {.count = 1, .reusable = true}, SHIFT(344),
  [1310] = {.count = 1, .reusable = true}, SHIFT(465),
  [1312] = {.count = 1, .reusable = true}, SHIFT(255),
  [1314] = {.count = 1, .reusable = true}, SHIFT(449),
  [1316] = {.count = 1, .reusable = true}, SHIFT(188),
  [1318] = {.count = 1, .reusable = true}, SHIFT(450),
  [1320] = {.count = 1, .reusable = true}, SHIFT(491),
  [1322] = {.count = 1, .reusable = true}, SHIFT(446),
  [1324] = {.count = 1, .reusable = true}, SHIFT(102),
  [1326] = {.count = 1, .reusable = true}, SHIFT(464),
  [1328] = {.count = 1, .reusable = true}, SHIFT(235),
  [1330] = {.count = 1, .reusable = true}, SHIFT(476),
  [1332] = {.count = 1, .reusable = true}, SHIFT(61),
  [1334] = {.count = 1, .reusable = true}, SHIFT(177),
  [1336] = {.count = 1, .reusable = true}, SHIFT(42),
  [1338] = {.count = 1, .reusable = true}, SHIFT(41),
  [1340] = {.count = 1, .reusable = true}, SHIFT(57),
  [1342] = {.count = 1, .reusable = true}, SHIFT(18),
  [1344] = {.count = 1, .reusable = true}, SHIFT(24),
  [1346] = {.count = 1, .reusable = true}, SHIFT(339),
  [1348] = {.count = 1, .reusable = true}, SHIFT(340),
  [1350] = {.count = 1, .reusable = true}, SHIFT(343),
  [1352] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1354] = {.count = 1, .reusable = true}, SHIFT(93),
  [1356] = {.count = 1, .reusable = true}, SHIFT(116),
  [1358] = {.count = 1, .reusable = true}, SHIFT(114),
  [1360] = {.count = 1, .reusable = true}, SHIFT(125),
  [1362] = {.count = 1, .reusable = true}, SHIFT(124),
  [1364] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1366] = {.count = 1, .reusable = true}, SHIFT(349),
  [1368] = {.count = 1, .reusable = true}, SHIFT(83),
  [1370] = {.count = 1, .reusable = true}, SHIFT(352),
  [1372] = {.count = 1, .reusable = true}, SHIFT(481),
  [1374] = {.count = 1, .reusable = true}, SHIFT(356),
  [1376] = {.count = 1, .reusable = true}, SHIFT(96),
  [1378] = {.count = 1, .reusable = true}, SHIFT(266),
  [1380] = {.count = 1, .reusable = true}, SHIFT(252),
  [1382] = {.count = 1, .reusable = true}, SHIFT(51),
  [1384] = {.count = 1, .reusable = true}, SHIFT(84),
  [1386] = {.count = 1, .reusable = true}, SHIFT(362),
  [1388] = {.count = 1, .reusable = true}, SHIFT(85),
  [1390] = {.count = 1, .reusable = true}, SHIFT(120),
  [1392] = {.count = 1, .reusable = true}, SHIFT(95),
  [1394] = {.count = 1, .reusable = true}, SHIFT(258),
  [1396] = {.count = 1, .reusable = true}, SHIFT(299),
  [1398] = {.count = 1, .reusable = true}, SHIFT(86),
  [1400] = {.count = 1, .reusable = true}, SHIFT(509),
  [1402] = {.count = 1, .reusable = true}, SHIFT(510),
  [1404] = {.count = 1, .reusable = true}, SHIFT(49),
  [1406] = {.count = 1, .reusable = true}, SHIFT(296),
  [1408] = {.count = 1, .reusable = true}, SHIFT(515),
  [1410] = {.count = 1, .reusable = true}, SHIFT(516),
  [1412] = {.count = 1, .reusable = true}, SHIFT(48),
  [1414] = {.count = 1, .reusable = true}, SHIFT(295),
  [1416] = {.count = 1, .reusable = true}, SHIFT(521),
  [1418] = {.count = 1, .reusable = true}, SHIFT(522),
  [1420] = {.count = 1, .reusable = true}, SHIFT(45),
  [1422] = {.count = 1, .reusable = true}, SHIFT(293),
  [1424] = {.count = 1, .reusable = true}, SHIFT(292),
  [1426] = {.count = 1, .reusable = true}, SHIFT(290),
  [1428] = {.count = 1, .reusable = true}, SHIFT(289),
  [1430] = {.count = 1, .reusable = true}, SHIFT(288),
  [1432] = {.count = 1, .reusable = true}, SHIFT(287),
  [1434] = {.count = 1, .reusable = true}, SHIFT(286),
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
