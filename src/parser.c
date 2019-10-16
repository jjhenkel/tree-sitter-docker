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
#define STATE_COUNT 519
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
  aux_sym_workdir_token2 = 27,
  aux_sym_workdir_token3 = 28,
  aux_sym_workdir_token4 = 29,
  aux_sym_workdir_token5 = 30,
  sym_arg_name = 31,
  sym_arg_default = 32,
  anon_sym_DASH_DASHchown_EQ = 33,
  aux_sym_env_key_token1 = 34,
  aux_sym_env_value_token1 = 35,
  aux_sym_env_value_token2 = 36,
  aux_sym_env_value_token3 = 37,
  anon_sym_DASH = 38,
  aux_sym__port_part_token1 = 39,
  anon_sym_SLASH = 40,
  aux_sym_port_protocol_token1 = 41,
  aux_sym_port_protocol_token2 = 42,
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
  sym_hc_none = 60,
  anon_sym_DASH_DASHinterval = 61,
  aux_sym_hc_interval_token1 = 62,
  anon_sym_DASH_DASHtimeout = 63,
  anon_sym_DASH_DASHstart_DASHperiod = 64,
  anon_sym_DASH_DASHretires = 65,
  aux_sym_label_pair_token1 = 66,
  aux_sym_label_value_token1 = 67,
  sym_signal_num = 68,
  aux_sym_signal_name_token1 = 69,
  aux_sym_signal_name_token2 = 70,
  aux_sym_user_name_token1 = 71,
  aux_sym_user_id_token1 = 72,
  sym_path = 73,
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
  sym__anything_or_json_array = 160,
  aux_sym_dockerfile_repeat1 = 161,
  aux_sym_expose_repeat1 = 162,
  aux_sym_healthcheck_repeat1 = 163,
  aux_sym_workdir_repeat1 = 164,
  aux_sym_env_value_repeat1 = 165,
  aux_sym_repository_repeat1 = 166,
  aux_sym__repository_start_repeat1 = 167,
  aux_sym__repository_start_repeat2 = 168,
  aux_sym__repository_start_repeat3 = 169,
  aux_sym__repository_start_repeat4 = 170,
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
  [aux_sym_workdir_token2] = "workdir_token2",
  [aux_sym_workdir_token3] = "workdir_token3",
  [aux_sym_workdir_token4] = "workdir_token4",
  [aux_sym_workdir_token5] = "workdir_token5",
  [sym_arg_name] = "arg_name",
  [sym_arg_default] = "arg_default",
  [anon_sym_DASH_DASHchown_EQ] = "--chown=",
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
  [aux_sym_user_id_token1] = "user_id_token1",
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
  [sym__anything_or_json_array] = "_anything_or_json_array",
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
  [sym_arg_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHchown_EQ] = {
    .visible = true,
    .named = false,
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
  [aux_sym_user_id_token1] = {
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
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(869);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(880);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(410);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(350);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(393);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(396);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '{') ADVANCE(1109);
      if (lookahead == '}') ADVANCE(1110);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '=') ADVANCE(213);
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
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(473);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(473);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(1016);
      if (lookahead == '#') ADVANCE(1131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(473);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1010);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1011);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(880);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(941);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(975);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(996);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(946);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(954);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(997);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(981);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(983);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1009);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(880);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(941);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(975);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(996);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(946);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(954);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(997);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(981);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(983);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1009);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
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
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
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
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(688);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(748);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(735);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(761);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(538);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(688);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(748);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(735);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(761);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(538);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(688);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(748);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(735);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(761);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(539);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(601);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(588);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(590);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(534);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(601);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(588);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(590);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(534);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(601);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(588);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(590);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(535);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(822);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(764);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(823);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(809);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(762);
      if (lookahead == '{') ADVANCE(836);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(540);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(822);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(764);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(823);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(809);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(762);
      if (lookahead == '{') ADVANCE(836);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(540);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(822);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(777);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(764);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(823);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(809);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(762);
      if (lookahead == '{') ADVANCE(836);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(541);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(674);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(629);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(616);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(675);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(661);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(663);
      if (lookahead == '\\') ADVANCE(687);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(674);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(629);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(616);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(675);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(661);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(663);
      if (lookahead == '\\') ADVANCE(687);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(674);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(629);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(616);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(675);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(661);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(663);
      if (lookahead == '\\') ADVANCE(687);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(537);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(321);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(308);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(1131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1023);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1028);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1021);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1018);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1019);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1025);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1030);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1022);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1029);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1026);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1027);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1010);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '=') ADVANCE(213);
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
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(199);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1031);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1131);
      if (lookahead == '[') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1131);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1121);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1121);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(1118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1119);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1117);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '#') ADVANCE(1113);
      if (lookahead == '\\') ADVANCE(1112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1113);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(200);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1031);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == ' ') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(502);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == '#') ADVANCE(1031);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(201);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1031);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0) ADVANCE(871);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(1013);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(840);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(880);
      if (lookahead == '-') ADVANCE(883);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(880);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1009);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(880);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0) ADVANCE(1009);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(876);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(688);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '\\') ADVANCE(762);
      if (lookahead == '{') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '\\') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(530);
      if (lookahead == '{') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(530);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == '{') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(1115);
      if (lookahead == '\\') ADVANCE(1115);
      if (lookahead == '{') ADVANCE(1108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1115);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(531);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(1031);
      END_STATE();
    case 68:
      if (lookahead == '+') ADVANCE(1114);
      if (lookahead == '-') ADVANCE(1111);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(857);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(857);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(857);
      if (lookahead != 0) ADVANCE(1122);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(867);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(864);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(868);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(869);
      if (lookahead == '#') ADVANCE(1135);
      if (lookahead == '=') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1124);
      END_STATE();
    case 106:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(856);
      END_STATE();
    case 107:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(861);
      END_STATE();
    case 108:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(859);
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
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
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
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
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
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(875);
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
          lookahead == 'k') ADVANCE(236);
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
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
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
          lookahead == 'm') ADVANCE(226);
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
          lookahead == 'n') ADVANCE(244);
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
          lookahead == 'p') ADVANCE(512);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
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
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
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
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
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
          lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 198:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 199:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1139);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(1139);
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
          lookahead == 'u') ADVANCE(48);
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
          lookahead == 'u') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1031);
      END_STATE();
    case 204:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1031);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(502);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(500);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_workdir_token3);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '$') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(271);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(495);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(472);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(442);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(436);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(492);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(454);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(426);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(503);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '-') ADVANCE(527);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '2') ADVANCE(515);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '5') ADVANCE(516);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '6') ADVANCE(517);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(1133);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(519);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '%') ADVANCE(852);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 531:
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
          lookahead != '}') ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(534);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(535);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(537);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(538);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(539);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(540);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(541);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
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
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
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
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(624);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
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
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(624);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
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
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(699);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(704);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 761:
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
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(794);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(789);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(831);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(780);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(785);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(772);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(788);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(808);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(771);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(778);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(776);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(819);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(774);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(832);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(794);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(815);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(775);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(828);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(817);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(768);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(779);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(766);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(797);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(799);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(820);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(825);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(791);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(833);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(824);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(814);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(834);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(779);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(786);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(775);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(783);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(802);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(801);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(762);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(818);
      if (lookahead == '{') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(762);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(837);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(835);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(839);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(841);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(845);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(849);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(855);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(860);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretires);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(870);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(872);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(876);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(877);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1135);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '=') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(899);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == 'p') ADVANCE(903);
      if (lookahead == 'r') ADVANCE(896);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead == 't') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(938);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(947);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(939);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1002);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1012);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(1039);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1012);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(1039);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1012);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1011);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1035);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1014);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1014);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1131);
      if (lookahead == '\\') ADVANCE(1136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1040);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1064);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1059);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1041);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1055);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1049);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1075);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1096);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1056);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1080);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1032);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1033);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1032);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1033);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1034);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1035);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == ',') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1034);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1039);
      if (lookahead == ',') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(1139);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1037);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1038);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == ',') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1037);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1038);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == ',') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1037);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1038);
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1039);
      if (lookahead == ',') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1139);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(1136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1015);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1074);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1065);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1039);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1103);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1039);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1039);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1039);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1062);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1066);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1039);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1039);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1083);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1081);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1094);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1076);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1082);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1039);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1039);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1051);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1101);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1104);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1039);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1039);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1042);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1078);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1086);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
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
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1039);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1063);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1039);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1039);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1067);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1039);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1079);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1039);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1039);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1107:
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
          lookahead != 'v') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1097);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(837);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1113);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1113);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1115:
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
          lookahead != '}') ADVANCE(1115);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1117);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1117);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1119);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1119);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1121);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1121);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(1135);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(861);
      if (lookahead != 0) ADVANCE(1135);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(859);
      if (lookahead != 0) ADVANCE(1135);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1135);
      if (lookahead != 0) ADVANCE(870);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead != 0) ADVANCE(1135);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1015);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1135);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(1135);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_json_array);
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
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 22},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 3},
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
  [205] = {.lex_state = 63},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 63},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 64},
  [211] = {.lex_state = 63},
  [212] = {.lex_state = 64},
  [213] = {.lex_state = 23},
  [214] = {.lex_state = 64},
  [215] = {.lex_state = 64},
  [216] = {.lex_state = 63},
  [217] = {.lex_state = 64},
  [218] = {.lex_state = 63},
  [219] = {.lex_state = 64},
  [220] = {.lex_state = 63},
  [221] = {.lex_state = 63},
  [222] = {.lex_state = 63},
  [223] = {.lex_state = 63},
  [224] = {.lex_state = 63},
  [225] = {.lex_state = 63},
  [226] = {.lex_state = 63},
  [227] = {.lex_state = 63},
  [228] = {.lex_state = 63},
  [229] = {.lex_state = 63},
  [230] = {.lex_state = 63},
  [231] = {.lex_state = 63},
  [232] = {.lex_state = 63},
  [233] = {.lex_state = 63},
  [234] = {.lex_state = 63},
  [235] = {.lex_state = 63},
  [236] = {.lex_state = 63},
  [237] = {.lex_state = 63},
  [238] = {.lex_state = 63},
  [239] = {.lex_state = 63},
  [240] = {.lex_state = 63},
  [241] = {.lex_state = 63},
  [242] = {.lex_state = 63},
  [243] = {.lex_state = 63},
  [244] = {.lex_state = 63},
  [245] = {.lex_state = 23},
  [246] = {.lex_state = 63},
  [247] = {.lex_state = 63},
  [248] = {.lex_state = 63},
  [249] = {.lex_state = 63},
  [250] = {.lex_state = 63},
  [251] = {.lex_state = 63},
  [252] = {.lex_state = 63},
  [253] = {.lex_state = 63},
  [254] = {.lex_state = 63},
  [255] = {.lex_state = 63},
  [256] = {.lex_state = 63},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 23},
  [259] = {.lex_state = 23},
  [260] = {.lex_state = 55},
  [261] = {.lex_state = 60},
  [262] = {.lex_state = 55},
  [263] = {.lex_state = 55},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 55},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 23},
  [268] = {.lex_state = 30},
  [269] = {.lex_state = 60},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 30},
  [273] = {.lex_state = 30},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 61},
  [276] = {.lex_state = 62},
  [277] = {.lex_state = 59},
  [278] = {.lex_state = 23},
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 30},
  [281] = {.lex_state = 23},
  [282] = {.lex_state = 23},
  [283] = {.lex_state = 30},
  [284] = {.lex_state = 23},
  [285] = {.lex_state = 55},
  [286] = {.lex_state = 55},
  [287] = {.lex_state = 55},
  [288] = {.lex_state = 55},
  [289] = {.lex_state = 59},
  [290] = {.lex_state = 62},
  [291] = {.lex_state = 61},
  [292] = {.lex_state = 30},
  [293] = {.lex_state = 30},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 49},
  [297] = {.lex_state = 30},
  [298] = {.lex_state = 51},
  [299] = {.lex_state = 55},
  [300] = {.lex_state = 49},
  [301] = {.lex_state = 30},
  [302] = {.lex_state = 55},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 28},
  [305] = {.lex_state = 59},
  [306] = {.lex_state = 62},
  [307] = {.lex_state = 61},
  [308] = {.lex_state = 55},
  [309] = {.lex_state = 60},
  [310] = {.lex_state = 60},
  [311] = {.lex_state = 60},
  [312] = {.lex_state = 45},
  [313] = {.lex_state = 60},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 46},
  [316] = {.lex_state = 49},
  [317] = {.lex_state = 28},
  [318] = {.lex_state = 50},
  [319] = {.lex_state = 49},
  [320] = {.lex_state = 50},
  [321] = {.lex_state = 28},
  [322] = {.lex_state = 59},
  [323] = {.lex_state = 62},
  [324] = {.lex_state = 61},
  [325] = {.lex_state = 28},
  [326] = {.lex_state = 65},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 49},
  [329] = {.lex_state = 31},
  [330] = {.lex_state = 53},
  [331] = {.lex_state = 65},
  [332] = {.lex_state = 65},
  [333] = {.lex_state = 26},
  [334] = {.lex_state = 65},
  [335] = {.lex_state = 49},
  [336] = {.lex_state = 26},
  [337] = {.lex_state = 26},
  [338] = {.lex_state = 65},
  [339] = {.lex_state = 65},
  [340] = {.lex_state = 65},
  [341] = {.lex_state = 53},
  [342] = {.lex_state = 65},
  [343] = {.lex_state = 65},
  [344] = {.lex_state = 65},
  [345] = {.lex_state = 65},
  [346] = {.lex_state = 49},
  [347] = {.lex_state = 23},
  [348] = {.lex_state = 65},
  [349] = {.lex_state = 66},
  [350] = {.lex_state = 65},
  [351] = {.lex_state = 49},
  [352] = {.lex_state = 49},
  [353] = {.lex_state = 49},
  [354] = {.lex_state = 65},
  [355] = {.lex_state = 65},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 65},
  [358] = {.lex_state = 23},
  [359] = {.lex_state = 65},
  [360] = {.lex_state = 65},
  [361] = {.lex_state = 65},
  [362] = {.lex_state = 55},
  [363] = {.lex_state = 26},
  [364] = {.lex_state = 26},
  [365] = {.lex_state = 55},
  [366] = {.lex_state = 55},
  [367] = {.lex_state = 55},
  [368] = {.lex_state = 29},
  [369] = {.lex_state = 23},
  [370] = {.lex_state = 58},
  [371] = {.lex_state = 23},
  [372] = {.lex_state = 58},
  [373] = {.lex_state = 58},
  [374] = {.lex_state = 52},
  [375] = {.lex_state = 23},
  [376] = {.lex_state = 52},
  [377] = {.lex_state = 52},
  [378] = {.lex_state = 23},
  [379] = {.lex_state = 23},
  [380] = {.lex_state = 53},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 52},
  [383] = {.lex_state = 23},
  [384] = {.lex_state = 27},
  [385] = {.lex_state = 27},
  [386] = {.lex_state = 32},
  [387] = {.lex_state = 33},
  [388] = {.lex_state = 23},
  [389] = {.lex_state = 27},
  [390] = {.lex_state = 23},
  [391] = {.lex_state = 23},
  [392] = {.lex_state = 27},
  [393] = {.lex_state = 65},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 27},
  [396] = {.lex_state = 27},
  [397] = {.lex_state = 23},
  [398] = {.lex_state = 49},
  [399] = {.lex_state = 27},
  [400] = {.lex_state = 23},
  [401] = {.lex_state = 32},
  [402] = {.lex_state = 27},
  [403] = {.lex_state = 33},
  [404] = {.lex_state = 23},
  [405] = {.lex_state = 23},
  [406] = {.lex_state = 33},
  [407] = {.lex_state = 32},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 33},
  [410] = {.lex_state = 32},
  [411] = {.lex_state = 23},
  [412] = {.lex_state = 27},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 23},
  [415] = {.lex_state = 23},
  [416] = {.lex_state = 23},
  [417] = {.lex_state = 23},
  [418] = {.lex_state = 53},
  [419] = {.lex_state = 53},
  [420] = {.lex_state = 105},
  [421] = {.lex_state = 105},
  [422] = {.lex_state = 23},
  [423] = {.lex_state = 55},
  [424] = {.lex_state = 57},
  [425] = {.lex_state = 23},
  [426] = {.lex_state = 23},
  [427] = {.lex_state = 53},
  [428] = {.lex_state = 53},
  [429] = {.lex_state = 49},
  [430] = {.lex_state = 56},
  [431] = {.lex_state = 27},
  [432] = {.lex_state = 23},
  [433] = {.lex_state = 27},
  [434] = {.lex_state = 27},
  [435] = {.lex_state = 55},
  [436] = {.lex_state = 23},
  [437] = {.lex_state = 27},
  [438] = {.lex_state = 34},
  [439] = {.lex_state = 23},
  [440] = {.lex_state = 23},
  [441] = {.lex_state = 23},
  [442] = {.lex_state = 55},
  [443] = {.lex_state = 23},
  [444] = {.lex_state = 53},
  [445] = {.lex_state = 53},
  [446] = {.lex_state = 27},
  [447] = {.lex_state = 27},
  [448] = {.lex_state = 53},
  [449] = {.lex_state = 27},
  [450] = {.lex_state = 49},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 27},
  [453] = {.lex_state = 27},
  [454] = {.lex_state = 27},
  [455] = {.lex_state = 49},
  [456] = {.lex_state = 55},
  [457] = {.lex_state = 23},
  [458] = {.lex_state = 49},
  [459] = {.lex_state = 23},
  [460] = {.lex_state = 27},
  [461] = {.lex_state = 27},
  [462] = {.lex_state = 27},
  [463] = {.lex_state = 27},
  [464] = {.lex_state = 49},
  [465] = {.lex_state = 23},
  [466] = {.lex_state = 55},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 27},
  [469] = {.lex_state = 27},
  [470] = {.lex_state = 23},
  [471] = {.lex_state = 49},
  [472] = {.lex_state = 23},
  [473] = {.lex_state = 32},
  [474] = {.lex_state = 23},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 49},
  [477] = {.lex_state = 23},
  [478] = {.lex_state = 55},
  [479] = {.lex_state = 33},
  [480] = {.lex_state = 55},
  [481] = {.lex_state = 23},
  [482] = {.lex_state = 49},
  [483] = {.lex_state = 23},
  [484] = {.lex_state = 55},
  [485] = {.lex_state = 33},
  [486] = {.lex_state = 23},
  [487] = {.lex_state = 23},
  [488] = {.lex_state = 49},
  [489] = {.lex_state = 23},
  [490] = {.lex_state = 55},
  [491] = {.lex_state = 32},
  [492] = {.lex_state = 23},
  [493] = {.lex_state = 23},
  [494] = {.lex_state = 23},
  [495] = {.lex_state = 35},
  [496] = {.lex_state = 23},
  [497] = {.lex_state = 35},
  [498] = {.lex_state = 23},
  [499] = {.lex_state = 53},
  [500] = {.lex_state = 23},
  [501] = {.lex_state = 33},
  [502] = {.lex_state = 65},
  [503] = {.lex_state = 33},
  [504] = {.lex_state = 32},
  [505] = {.lex_state = 32},
  [506] = {.lex_state = 65},
  [507] = {.lex_state = 33},
  [508] = {.lex_state = 32},
  [509] = {.lex_state = 55},
  [510] = {.lex_state = 65},
  [511] = {.lex_state = 33},
  [512] = {.lex_state = 32},
  [513] = {.lex_state = 27},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 65},
  [516] = {.lex_state = 65},
  [517] = {.lex_state = 65},
  [518] = {.lex_state = 65},
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
    [sym_path] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(432),
    [sym__directive] = STATE(192),
    [sym_add] = STATE(192),
    [sym_arg] = STATE(192),
    [sym_cmd] = STATE(192),
    [sym_copy] = STATE(192),
    [sym_entrypoint] = STATE(192),
    [sym_env] = STATE(192),
    [sym_expose] = STATE(192),
    [sym_from] = STATE(192),
    [sym_healthcheck] = STATE(192),
    [sym_label] = STATE(192),
    [sym_maintainer] = STATE(192),
    [sym_onbuild] = STATE(192),
    [sym_run] = STATE(192),
    [sym_shell] = STATE(192),
    [sym_stopsignal] = STATE(192),
    [sym_user] = STATE(192),
    [sym_volume] = STATE(192),
    [sym_workdir] = STATE(192),
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
    [sym__directive] = STATE(192),
    [sym_add] = STATE(192),
    [sym_arg] = STATE(192),
    [sym_cmd] = STATE(192),
    [sym_copy] = STATE(192),
    [sym_entrypoint] = STATE(192),
    [sym_env] = STATE(192),
    [sym_expose] = STATE(192),
    [sym_from] = STATE(192),
    [sym_healthcheck] = STATE(192),
    [sym_label] = STATE(192),
    [sym_maintainer] = STATE(192),
    [sym_onbuild] = STATE(192),
    [sym_run] = STATE(192),
    [sym_shell] = STATE(192),
    [sym_stopsignal] = STATE(192),
    [sym_user] = STATE(192),
    [sym_volume] = STATE(192),
    [sym_workdir] = STATE(192),
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
    [sym__directive] = STATE(192),
    [sym_add] = STATE(192),
    [sym_arg] = STATE(192),
    [sym_cmd] = STATE(192),
    [sym_copy] = STATE(192),
    [sym_entrypoint] = STATE(192),
    [sym_env] = STATE(192),
    [sym_expose] = STATE(192),
    [sym_from] = STATE(192),
    [sym_healthcheck] = STATE(192),
    [sym_label] = STATE(192),
    [sym_maintainer] = STATE(192),
    [sym_onbuild] = STATE(192),
    [sym_run] = STATE(192),
    [sym_shell] = STATE(192),
    [sym_stopsignal] = STATE(192),
    [sym_user] = STATE(192),
    [sym_volume] = STATE(192),
    [sym_workdir] = STATE(192),
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
  [5] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(87),
    [sym_port] = STATE(87),
    [sym_port_range] = STATE(87),
    [sym__port_part] = STATE(63),
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
    [sym__port] = STATE(87),
    [sym_port] = STATE(87),
    [sym_port_range] = STATE(87),
    [sym__port_part] = STATE(63),
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
    [aux_sym__repository_start_repeat4] = STATE(17),
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
    [aux_sym__repository_start_token12] = ACTIONS(135),
    [aux_sym__repository_start_token15] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__repository_start_repeat4] = STATE(8),
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
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [aux_sym__repository_start_token16] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat1] = STATE(10),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token16] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat1] = STATE(11),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(131),
    [aux_sym__repository_start_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(133),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(156),
    [aux_sym_arg_token1] = ACTIONS(156),
    [aux_sym_cmd_token1] = ACTIONS(156),
    [aux_sym_copy_token1] = ACTIONS(156),
    [aux_sym_entrypoint_token1] = ACTIONS(156),
    [aux_sym_env_token1] = ACTIONS(156),
    [aux_sym_expose_token1] = ACTIONS(156),
    [aux_sym_from_token1] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(156),
    [aux_sym_label_token1] = ACTIONS(156),
    [aux_sym_maintainer_token1] = ACTIONS(156),
    [aux_sym_onbuild_token1] = ACTIONS(156),
    [aux_sym_run_token1] = ACTIONS(156),
    [aux_sym_shell_token1] = ACTIONS(156),
    [aux_sym_stopsignal_token1] = ACTIONS(156),
    [aux_sym_user_token1] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(158),
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(154),
    [aux_sym__repository_start_token2] = ACTIONS(158),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(161),
    [aux_sym__repository_start_token7] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
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
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [aux_sym__repository_start_token16] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token4] = ACTIONS(161),
    [aux_sym__repository_start_token7] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat3] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat4] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token12] = ACTIONS(135),
    [aux_sym__repository_start_token15] = ACTIONS(135),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat3] = STATE(18),
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
    [aux_sym__repository_start_token8] = ACTIONS(184),
    [aux_sym__repository_start_token11] = ACTIONS(184),
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
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
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
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(156),
    [aux_sym_arg_token1] = ACTIONS(156),
    [aux_sym_cmd_token1] = ACTIONS(156),
    [aux_sym_copy_token1] = ACTIONS(156),
    [aux_sym_entrypoint_token1] = ACTIONS(156),
    [aux_sym_env_token1] = ACTIONS(156),
    [aux_sym_expose_token1] = ACTIONS(156),
    [aux_sym_from_token1] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(156),
    [aux_sym_label_token1] = ACTIONS(156),
    [aux_sym_maintainer_token1] = ACTIONS(156),
    [aux_sym_onbuild_token1] = ACTIONS(156),
    [aux_sym_run_token1] = ACTIONS(156),
    [aux_sym_shell_token1] = ACTIONS(156),
    [aux_sym_stopsignal_token1] = ACTIONS(156),
    [aux_sym_user_token1] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(154),
    [aux_sym__repository_start_token2] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [aux_sym__repository_start_repeat3] = STATE(35),
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
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token8] = ACTIONS(213),
    [aux_sym__repository_start_token11] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token12] = ACTIONS(215),
    [aux_sym__repository_start_token15] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [sym_port_protocol] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_add_token1] = ACTIONS(217),
    [aux_sym_arg_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_copy_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_env_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [aux_sym_healthcheck_token1] = ACTIONS(217),
    [aux_sym_label_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_onbuild_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [aux_sym__port_part_token1] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token4] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
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
    [anon_sym_DOLLAR] = ACTIONS(225),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token2] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat4] = STATE(31),
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
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token12] = ACTIONS(227),
    [aux_sym__repository_start_token15] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat3] = STATE(32),
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
    [aux_sym__repository_start_token8] = ACTIONS(230),
    [aux_sym__repository_start_token11] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat2] = STATE(33),
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
    [aux_sym__repository_start_token4] = ACTIONS(233),
    [aux_sym__repository_start_token7] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat1] = STATE(30),
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
    [anon_sym_DOLLAR] = ACTIONS(225),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym__repository_start_token2] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat3] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token8] = ACTIONS(213),
    [aux_sym__repository_start_token11] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(156),
    [aux_sym_arg_token1] = ACTIONS(156),
    [aux_sym_cmd_token1] = ACTIONS(156),
    [aux_sym_copy_token1] = ACTIONS(156),
    [aux_sym_entrypoint_token1] = ACTIONS(156),
    [aux_sym_env_token1] = ACTIONS(156),
    [aux_sym_expose_token1] = ACTIONS(156),
    [aux_sym_from_token1] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(156),
    [aux_sym_label_token1] = ACTIONS(156),
    [aux_sym_maintainer_token1] = ACTIONS(156),
    [aux_sym_onbuild_token1] = ACTIONS(156),
    [aux_sym_run_token1] = ACTIONS(156),
    [aux_sym_shell_token1] = ACTIONS(156),
    [aux_sym_stopsignal_token1] = ACTIONS(156),
    [aux_sym_user_token1] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
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
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat4] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(221),
    [aux_sym__repository_start_token12] = ACTIONS(215),
    [aux_sym__repository_start_token15] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [sym_port_protocol] = STATE(60),
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
    [anon_sym_SLASH] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [40] = {
    [aux_sym__repository_start_repeat4] = STATE(48),
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
    [aux_sym__repository_start_token12] = ACTIONS(135),
    [aux_sym__repository_start_token15] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [41] = {
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
  [42] = {
    [aux_sym__repository_start_repeat1] = STATE(51),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym__repository_start_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [43] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
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
  [45] = {
    [aux_sym__repository_start_repeat2] = STATE(52),
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
    [aux_sym__repository_start_token4] = ACTIONS(161),
    [aux_sym__repository_start_token7] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
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
  [47] = {
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
  [48] = {
    [aux_sym__repository_start_repeat4] = STATE(8),
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
    [aux_sym__repository_start_token12] = ACTIONS(135),
    [aux_sym__repository_start_token15] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
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
    [aux_sym__repository_start_repeat3] = STATE(18),
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
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [aux_sym__repository_start_repeat1] = STATE(11),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(245),
    [aux_sym_workdir_token1] = ACTIONS(245),
    [aux_sym__repository_start_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [52] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym__repository_start_token4] = ACTIONS(161),
    [aux_sym__repository_start_token7] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(156),
    [aux_sym_arg_token1] = ACTIONS(156),
    [aux_sym_cmd_token1] = ACTIONS(156),
    [aux_sym_copy_token1] = ACTIONS(156),
    [aux_sym_entrypoint_token1] = ACTIONS(156),
    [aux_sym_env_token1] = ACTIONS(156),
    [aux_sym_expose_token1] = ACTIONS(156),
    [aux_sym_from_token1] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(156),
    [aux_sym_label_token1] = ACTIONS(156),
    [aux_sym_maintainer_token1] = ACTIONS(156),
    [aux_sym_onbuild_token1] = ACTIONS(156),
    [aux_sym_run_token1] = ACTIONS(156),
    [aux_sym_shell_token1] = ACTIONS(156),
    [aux_sym_stopsignal_token1] = ACTIONS(156),
    [aux_sym_user_token1] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
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
  [55] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [aux_sym__repository_start_repeat4] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(261),
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
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [aux_sym__repository_start_token12] = ACTIONS(135),
    [aux_sym__repository_start_token15] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
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
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_add_token1] = ACTIONS(217),
    [aux_sym_arg_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_copy_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_env_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [aux_sym_healthcheck_token1] = ACTIONS(217),
    [aux_sym_label_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_onbuild_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [aux_sym__port_part_token1] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(271),
    [aux_sym__repository_start_token16] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym__space_no_newline] = ACTIONS(269),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(273),
    [aux_sym_arg_token1] = ACTIONS(273),
    [aux_sym_cmd_token1] = ACTIONS(273),
    [aux_sym_copy_token1] = ACTIONS(273),
    [aux_sym_entrypoint_token1] = ACTIONS(273),
    [aux_sym_env_token1] = ACTIONS(273),
    [aux_sym_expose_token1] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [aux_sym_from_token1] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [aux_sym_healthcheck_token1] = ACTIONS(273),
    [aux_sym_label_token1] = ACTIONS(273),
    [aux_sym_maintainer_token1] = ACTIONS(273),
    [aux_sym_onbuild_token1] = ACTIONS(273),
    [aux_sym_run_token1] = ACTIONS(273),
    [aux_sym_shell_token1] = ACTIONS(273),
    [aux_sym_stopsignal_token1] = ACTIONS(273),
    [aux_sym_user_token1] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [aux_sym_volume_token1] = ACTIONS(273),
    [aux_sym_workdir_token1] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [aux_sym__port_part_token1] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
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
  [64] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
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
    [aux_sym__repository_start_token3] = ACTIONS(283),
    [aux_sym__repository_start_token4] = ACTIONS(161),
    [aux_sym__repository_start_token7] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [aux_sym_healthcheck_token1] = ACTIONS(285),
    [aux_sym_label_token1] = ACTIONS(285),
    [aux_sym_maintainer_token1] = ACTIONS(285),
    [aux_sym_onbuild_token1] = ACTIONS(285),
    [aux_sym_run_token1] = ACTIONS(285),
    [aux_sym_shell_token1] = ACTIONS(285),
    [aux_sym_stopsignal_token1] = ACTIONS(285),
    [aux_sym_user_token1] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_volume_token1] = ACTIONS(285),
    [aux_sym_workdir_token1] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [aux_sym__port_part_token1] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [aux_sym_from_token1] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(287),
    [aux_sym_label_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_onbuild_token1] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_shell_token1] = ACTIONS(287),
    [aux_sym_stopsignal_token1] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [aux_sym_volume_token1] = ACTIONS(287),
    [aux_sym_workdir_token1] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [aux_sym__port_part_token1] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(289),
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
    [anon_sym_SLASH] = ACTIONS(293),
    [aux_sym__repository_start_token16] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym__space_no_newline] = ACTIONS(291),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [aux_sym__repository_start_repeat3] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
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
    [aux_sym__repository_start_token3] = ACTIONS(283),
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(172),
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
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym__repository_start_token16] = ACTIONS(176),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [aux_sym__repository_start_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(295),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [aux_sym__repository_start_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [aux_sym__repository_start_repeat4] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
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
    [aux_sym__repository_start_token3] = ACTIONS(283),
    [aux_sym__repository_start_token12] = ACTIONS(135),
    [aux_sym__repository_start_token15] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
    [aux_sym__repository_start_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(261),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym__repository_start_token2] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [aux_sym__repository_start_repeat2] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(261),
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
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [aux_sym__repository_start_token4] = ACTIONS(161),
    [aux_sym__repository_start_token7] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [aux_sym__repository_start_repeat3] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(261),
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
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [aux_sym__repository_start_token8] = ACTIONS(170),
    [aux_sym__repository_start_token11] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [aux_sym__labels] = STATE(75),
    [sym_label_pair] = STATE(75),
    [sym_label_key] = STATE(421),
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
    [aux_sym_env_key_token1] = ACTIONS(305),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
    [aux_sym__repository_start_repeat2] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_add_token1] = ACTIONS(310),
    [aux_sym_arg_token1] = ACTIONS(310),
    [aux_sym_cmd_token1] = ACTIONS(310),
    [aux_sym_copy_token1] = ACTIONS(310),
    [aux_sym_entrypoint_token1] = ACTIONS(310),
    [aux_sym_env_token1] = ACTIONS(310),
    [aux_sym_expose_token1] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [aux_sym_healthcheck_token1] = ACTIONS(310),
    [aux_sym_label_token1] = ACTIONS(310),
    [aux_sym_maintainer_token1] = ACTIONS(310),
    [aux_sym_onbuild_token1] = ACTIONS(310),
    [aux_sym_run_token1] = ACTIONS(310),
    [aux_sym_shell_token1] = ACTIONS(310),
    [aux_sym_stopsignal_token1] = ACTIONS(310),
    [aux_sym_user_token1] = ACTIONS(310),
    [aux_sym_volume_token1] = ACTIONS(310),
    [aux_sym_workdir_token1] = ACTIONS(310),
    [aux_sym__repository_start_token3] = ACTIONS(312),
    [aux_sym__repository_start_token4] = ACTIONS(314),
    [aux_sym__repository_start_token7] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [aux_sym__repository_start_repeat4] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(318),
    [aux_sym_arg_token1] = ACTIONS(318),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_copy_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_env_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym_healthcheck_token1] = ACTIONS(318),
    [aux_sym_label_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_onbuild_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_shell_token1] = ACTIONS(318),
    [aux_sym_stopsignal_token1] = ACTIONS(318),
    [aux_sym_user_token1] = ACTIONS(318),
    [aux_sym_volume_token1] = ACTIONS(318),
    [aux_sym_workdir_token1] = ACTIONS(318),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [aux_sym__repository_start_token12] = ACTIONS(322),
    [aux_sym__repository_start_token15] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
    [aux_sym__repository_start_repeat3] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(318),
    [aux_sym_arg_token1] = ACTIONS(318),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_copy_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_env_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym_healthcheck_token1] = ACTIONS(318),
    [aux_sym_label_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_onbuild_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_shell_token1] = ACTIONS(318),
    [aux_sym_stopsignal_token1] = ACTIONS(318),
    [aux_sym_user_token1] = ACTIONS(318),
    [aux_sym_volume_token1] = ACTIONS(318),
    [aux_sym_workdir_token1] = ACTIONS(318),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [aux_sym__repository_start_token8] = ACTIONS(324),
    [aux_sym__repository_start_token11] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [79] = {
    [aux_sym__repository_start_repeat2] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(318),
    [aux_sym_arg_token1] = ACTIONS(318),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_copy_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_env_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym_healthcheck_token1] = ACTIONS(318),
    [aux_sym_label_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_onbuild_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_shell_token1] = ACTIONS(318),
    [aux_sym_stopsignal_token1] = ACTIONS(318),
    [aux_sym_user_token1] = ACTIONS(318),
    [aux_sym_volume_token1] = ACTIONS(318),
    [aux_sym_workdir_token1] = ACTIONS(318),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [aux_sym__repository_start_token4] = ACTIONS(314),
    [aux_sym__repository_start_token7] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [aux_sym_add_token1] = ACTIONS(326),
    [aux_sym_arg_token1] = ACTIONS(326),
    [aux_sym_cmd_token1] = ACTIONS(326),
    [aux_sym_copy_token1] = ACTIONS(326),
    [aux_sym_entrypoint_token1] = ACTIONS(326),
    [aux_sym_env_token1] = ACTIONS(326),
    [aux_sym_expose_token1] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [aux_sym_from_token1] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [aux_sym_healthcheck_token1] = ACTIONS(326),
    [aux_sym_label_token1] = ACTIONS(326),
    [aux_sym_maintainer_token1] = ACTIONS(326),
    [aux_sym_onbuild_token1] = ACTIONS(326),
    [aux_sym_run_token1] = ACTIONS(326),
    [aux_sym_shell_token1] = ACTIONS(326),
    [aux_sym_stopsignal_token1] = ACTIONS(326),
    [aux_sym_user_token1] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [aux_sym_volume_token1] = ACTIONS(326),
    [aux_sym_workdir_token1] = ACTIONS(326),
    [aux_sym__port_part_token1] = ACTIONS(326),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(326),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [aux_sym__repository_start_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(318),
    [aux_sym_arg_token1] = ACTIONS(318),
    [aux_sym_cmd_token1] = ACTIONS(318),
    [aux_sym_copy_token1] = ACTIONS(318),
    [aux_sym_entrypoint_token1] = ACTIONS(318),
    [aux_sym_env_token1] = ACTIONS(318),
    [aux_sym_expose_token1] = ACTIONS(318),
    [aux_sym_from_token1] = ACTIONS(318),
    [aux_sym_healthcheck_token1] = ACTIONS(318),
    [aux_sym_label_token1] = ACTIONS(318),
    [aux_sym_maintainer_token1] = ACTIONS(318),
    [aux_sym_onbuild_token1] = ACTIONS(318),
    [aux_sym_run_token1] = ACTIONS(318),
    [aux_sym_shell_token1] = ACTIONS(318),
    [aux_sym_stopsignal_token1] = ACTIONS(318),
    [aux_sym_user_token1] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [aux_sym_volume_token1] = ACTIONS(318),
    [aux_sym_workdir_token1] = ACTIONS(318),
    [aux_sym__repository_start_token2] = ACTIONS(328),
    [aux_sym__repository_start_token3] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [82] = {
    [aux_sym__labels] = STATE(75),
    [sym_label_pair] = STATE(75),
    [sym_label_key] = STATE(421),
    [ts_builtin_sym_end] = ACTIONS(330),
    [aux_sym_add_token1] = ACTIONS(332),
    [aux_sym_arg_token1] = ACTIONS(332),
    [aux_sym_cmd_token1] = ACTIONS(332),
    [aux_sym_copy_token1] = ACTIONS(332),
    [aux_sym_entrypoint_token1] = ACTIONS(332),
    [aux_sym_env_token1] = ACTIONS(332),
    [aux_sym_expose_token1] = ACTIONS(332),
    [aux_sym_from_token1] = ACTIONS(332),
    [aux_sym_healthcheck_token1] = ACTIONS(332),
    [aux_sym_label_token1] = ACTIONS(332),
    [aux_sym_maintainer_token1] = ACTIONS(332),
    [aux_sym_onbuild_token1] = ACTIONS(332),
    [aux_sym_run_token1] = ACTIONS(332),
    [aux_sym_shell_token1] = ACTIONS(332),
    [aux_sym_stopsignal_token1] = ACTIONS(332),
    [aux_sym_user_token1] = ACTIONS(332),
    [aux_sym_volume_token1] = ACTIONS(332),
    [aux_sym_workdir_token1] = ACTIONS(332),
    [aux_sym_env_key_token1] = ACTIONS(334),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(330),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [83] = {
    [aux_sym__repository_start_repeat3] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_add_token1] = ACTIONS(310),
    [aux_sym_arg_token1] = ACTIONS(310),
    [aux_sym_cmd_token1] = ACTIONS(310),
    [aux_sym_copy_token1] = ACTIONS(310),
    [aux_sym_entrypoint_token1] = ACTIONS(310),
    [aux_sym_env_token1] = ACTIONS(310),
    [aux_sym_expose_token1] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [aux_sym_healthcheck_token1] = ACTIONS(310),
    [aux_sym_label_token1] = ACTIONS(310),
    [aux_sym_maintainer_token1] = ACTIONS(310),
    [aux_sym_onbuild_token1] = ACTIONS(310),
    [aux_sym_run_token1] = ACTIONS(310),
    [aux_sym_shell_token1] = ACTIONS(310),
    [aux_sym_stopsignal_token1] = ACTIONS(310),
    [aux_sym_user_token1] = ACTIONS(310),
    [aux_sym_volume_token1] = ACTIONS(310),
    [aux_sym_workdir_token1] = ACTIONS(310),
    [aux_sym__repository_start_token3] = ACTIONS(312),
    [aux_sym__repository_start_token8] = ACTIONS(324),
    [aux_sym__repository_start_token11] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [84] = {
    [aux_sym__repository_start_repeat4] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_add_token1] = ACTIONS(310),
    [aux_sym_arg_token1] = ACTIONS(310),
    [aux_sym_cmd_token1] = ACTIONS(310),
    [aux_sym_copy_token1] = ACTIONS(310),
    [aux_sym_entrypoint_token1] = ACTIONS(310),
    [aux_sym_env_token1] = ACTIONS(310),
    [aux_sym_expose_token1] = ACTIONS(310),
    [aux_sym_from_token1] = ACTIONS(310),
    [aux_sym_healthcheck_token1] = ACTIONS(310),
    [aux_sym_label_token1] = ACTIONS(310),
    [aux_sym_maintainer_token1] = ACTIONS(310),
    [aux_sym_onbuild_token1] = ACTIONS(310),
    [aux_sym_run_token1] = ACTIONS(310),
    [aux_sym_shell_token1] = ACTIONS(310),
    [aux_sym_stopsignal_token1] = ACTIONS(310),
    [aux_sym_user_token1] = ACTIONS(310),
    [aux_sym_volume_token1] = ACTIONS(310),
    [aux_sym_workdir_token1] = ACTIONS(310),
    [aux_sym__repository_start_token3] = ACTIONS(312),
    [aux_sym__repository_start_token12] = ACTIONS(322),
    [aux_sym__repository_start_token15] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__repository_start_repeat4] = STATE(85),
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
    [aux_sym_volume_token1] = ACTIONS(139),
    [aux_sym_workdir_token1] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token12] = ACTIONS(336),
    [aux_sym__repository_start_token15] = ACTIONS(336),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [86] = {
    [aux_sym__repository_start_repeat3] = STATE(86),
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
    [aux_sym__repository_start_token8] = ACTIONS(339),
    [aux_sym__repository_start_token11] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [aux_sym_add_token1] = ACTIONS(342),
    [aux_sym_arg_token1] = ACTIONS(342),
    [aux_sym_cmd_token1] = ACTIONS(342),
    [aux_sym_copy_token1] = ACTIONS(342),
    [aux_sym_entrypoint_token1] = ACTIONS(342),
    [aux_sym_env_token1] = ACTIONS(342),
    [aux_sym_expose_token1] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [aux_sym_from_token1] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(344),
    [aux_sym_healthcheck_token1] = ACTIONS(342),
    [aux_sym_label_token1] = ACTIONS(342),
    [aux_sym_maintainer_token1] = ACTIONS(342),
    [aux_sym_onbuild_token1] = ACTIONS(342),
    [aux_sym_run_token1] = ACTIONS(342),
    [aux_sym_shell_token1] = ACTIONS(342),
    [aux_sym_stopsignal_token1] = ACTIONS(342),
    [aux_sym_user_token1] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [aux_sym_volume_token1] = ACTIONS(342),
    [aux_sym_workdir_token1] = ACTIONS(342),
    [aux_sym__port_part_token1] = ACTIONS(342),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(342),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [88] = {
    [aux_sym__repository_start_repeat2] = STATE(88),
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
    [aux_sym__repository_start_token4] = ACTIONS(346),
    [aux_sym__repository_start_token7] = ACTIONS(346),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [89] = {
    [aux_sym__repository_start_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(156),
    [aux_sym_arg_token1] = ACTIONS(156),
    [aux_sym_cmd_token1] = ACTIONS(156),
    [aux_sym_copy_token1] = ACTIONS(156),
    [aux_sym_entrypoint_token1] = ACTIONS(156),
    [aux_sym_env_token1] = ACTIONS(156),
    [aux_sym_expose_token1] = ACTIONS(156),
    [aux_sym_from_token1] = ACTIONS(156),
    [aux_sym_healthcheck_token1] = ACTIONS(156),
    [aux_sym_label_token1] = ACTIONS(156),
    [aux_sym_maintainer_token1] = ACTIONS(156),
    [aux_sym_onbuild_token1] = ACTIONS(156),
    [aux_sym_run_token1] = ACTIONS(156),
    [aux_sym_shell_token1] = ACTIONS(156),
    [aux_sym_stopsignal_token1] = ACTIONS(156),
    [aux_sym_user_token1] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(349),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
    [aux_sym__env_pairs] = STATE(94),
    [sym_env_pair] = STATE(94),
    [sym_env_key] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(352),
    [aux_sym_add_token1] = ACTIONS(354),
    [aux_sym_arg_token1] = ACTIONS(354),
    [aux_sym_cmd_token1] = ACTIONS(354),
    [aux_sym_copy_token1] = ACTIONS(354),
    [aux_sym_entrypoint_token1] = ACTIONS(354),
    [aux_sym_env_token1] = ACTIONS(354),
    [aux_sym_expose_token1] = ACTIONS(354),
    [aux_sym_from_token1] = ACTIONS(354),
    [aux_sym_healthcheck_token1] = ACTIONS(354),
    [aux_sym_label_token1] = ACTIONS(354),
    [aux_sym_maintainer_token1] = ACTIONS(354),
    [aux_sym_onbuild_token1] = ACTIONS(354),
    [aux_sym_run_token1] = ACTIONS(354),
    [aux_sym_shell_token1] = ACTIONS(354),
    [aux_sym_stopsignal_token1] = ACTIONS(354),
    [aux_sym_user_token1] = ACTIONS(354),
    [aux_sym_volume_token1] = ACTIONS(354),
    [aux_sym_workdir_token1] = ACTIONS(354),
    [aux_sym_env_key_token1] = ACTIONS(356),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(352),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [aux_sym_workdir_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(358),
    [aux_sym_add_token1] = ACTIONS(360),
    [aux_sym_arg_token1] = ACTIONS(360),
    [aux_sym_cmd_token1] = ACTIONS(360),
    [aux_sym_copy_token1] = ACTIONS(360),
    [aux_sym_entrypoint_token1] = ACTIONS(360),
    [aux_sym_env_token1] = ACTIONS(360),
    [aux_sym_expose_token1] = ACTIONS(360),
    [aux_sym_from_token1] = ACTIONS(360),
    [aux_sym_healthcheck_token1] = ACTIONS(360),
    [aux_sym_label_token1] = ACTIONS(360),
    [aux_sym_maintainer_token1] = ACTIONS(360),
    [aux_sym_onbuild_token1] = ACTIONS(360),
    [aux_sym_run_token1] = ACTIONS(360),
    [aux_sym_shell_token1] = ACTIONS(360),
    [aux_sym_stopsignal_token1] = ACTIONS(360),
    [aux_sym_user_token1] = ACTIONS(360),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [aux_sym_volume_token1] = ACTIONS(360),
    [aux_sym_workdir_token1] = ACTIONS(360),
    [aux_sym_workdir_token4] = ACTIONS(362),
    [aux_sym_workdir_token5] = ACTIONS(364),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [aux_sym_workdir_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(366),
    [aux_sym_add_token1] = ACTIONS(368),
    [aux_sym_arg_token1] = ACTIONS(368),
    [aux_sym_cmd_token1] = ACTIONS(368),
    [aux_sym_copy_token1] = ACTIONS(368),
    [aux_sym_entrypoint_token1] = ACTIONS(368),
    [aux_sym_env_token1] = ACTIONS(368),
    [aux_sym_expose_token1] = ACTIONS(368),
    [aux_sym_from_token1] = ACTIONS(368),
    [aux_sym_healthcheck_token1] = ACTIONS(368),
    [aux_sym_label_token1] = ACTIONS(368),
    [aux_sym_maintainer_token1] = ACTIONS(368),
    [aux_sym_onbuild_token1] = ACTIONS(368),
    [aux_sym_run_token1] = ACTIONS(368),
    [aux_sym_shell_token1] = ACTIONS(368),
    [aux_sym_stopsignal_token1] = ACTIONS(368),
    [aux_sym_user_token1] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [aux_sym_volume_token1] = ACTIONS(368),
    [aux_sym_workdir_token1] = ACTIONS(368),
    [aux_sym_workdir_token4] = ACTIONS(362),
    [aux_sym_workdir_token5] = ACTIONS(370),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [aux_sym_add_token1] = ACTIONS(372),
    [aux_sym_arg_token1] = ACTIONS(372),
    [aux_sym_cmd_token1] = ACTIONS(372),
    [aux_sym_copy_token1] = ACTIONS(372),
    [aux_sym_entrypoint_token1] = ACTIONS(372),
    [aux_sym_env_token1] = ACTIONS(372),
    [aux_sym_expose_token1] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [aux_sym_from_token1] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [aux_sym_healthcheck_token1] = ACTIONS(372),
    [aux_sym_label_token1] = ACTIONS(372),
    [aux_sym_maintainer_token1] = ACTIONS(372),
    [aux_sym_onbuild_token1] = ACTIONS(372),
    [aux_sym_run_token1] = ACTIONS(372),
    [aux_sym_shell_token1] = ACTIONS(372),
    [aux_sym_stopsignal_token1] = ACTIONS(372),
    [aux_sym_user_token1] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [aux_sym_volume_token1] = ACTIONS(372),
    [aux_sym_workdir_token1] = ACTIONS(372),
    [aux_sym__port_part_token1] = ACTIONS(372),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(372),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
    [aux_sym__env_pairs] = STATE(94),
    [sym_env_pair] = STATE(94),
    [sym_env_key] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(374),
    [aux_sym_add_token1] = ACTIONS(376),
    [aux_sym_arg_token1] = ACTIONS(376),
    [aux_sym_cmd_token1] = ACTIONS(376),
    [aux_sym_copy_token1] = ACTIONS(376),
    [aux_sym_entrypoint_token1] = ACTIONS(376),
    [aux_sym_env_token1] = ACTIONS(376),
    [aux_sym_expose_token1] = ACTIONS(376),
    [aux_sym_from_token1] = ACTIONS(376),
    [aux_sym_healthcheck_token1] = ACTIONS(376),
    [aux_sym_label_token1] = ACTIONS(376),
    [aux_sym_maintainer_token1] = ACTIONS(376),
    [aux_sym_onbuild_token1] = ACTIONS(376),
    [aux_sym_run_token1] = ACTIONS(376),
    [aux_sym_shell_token1] = ACTIONS(376),
    [aux_sym_stopsignal_token1] = ACTIONS(376),
    [aux_sym_user_token1] = ACTIONS(376),
    [aux_sym_volume_token1] = ACTIONS(376),
    [aux_sym_workdir_token1] = ACTIONS(376),
    [aux_sym_env_key_token1] = ACTIONS(378),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(374),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [95] = {
    [aux_sym_workdir_repeat1] = STATE(95),
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
    [aux_sym_workdir_token4] = ACTIONS(385),
    [aux_sym_workdir_token5] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [aux_sym__repository_start_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_add_token1] = ACTIONS(390),
    [aux_sym_arg_token1] = ACTIONS(390),
    [aux_sym_cmd_token1] = ACTIONS(390),
    [aux_sym_copy_token1] = ACTIONS(390),
    [aux_sym_entrypoint_token1] = ACTIONS(390),
    [aux_sym_env_token1] = ACTIONS(390),
    [aux_sym_expose_token1] = ACTIONS(390),
    [aux_sym_from_token1] = ACTIONS(390),
    [aux_sym_healthcheck_token1] = ACTIONS(390),
    [aux_sym_label_token1] = ACTIONS(390),
    [aux_sym_maintainer_token1] = ACTIONS(390),
    [aux_sym_onbuild_token1] = ACTIONS(390),
    [aux_sym_run_token1] = ACTIONS(390),
    [aux_sym_shell_token1] = ACTIONS(390),
    [aux_sym_stopsignal_token1] = ACTIONS(390),
    [aux_sym_user_token1] = ACTIONS(390),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [aux_sym_volume_token1] = ACTIONS(390),
    [aux_sym_workdir_token1] = ACTIONS(390),
    [aux_sym__repository_start_token2] = ACTIONS(328),
    [aux_sym__repository_start_token3] = ACTIONS(392),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [aux_sym_add_token1] = ACTIONS(396),
    [aux_sym_arg_token1] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(394),
    [aux_sym_cmd_token1] = ACTIONS(396),
    [aux_sym_copy_token1] = ACTIONS(396),
    [aux_sym_entrypoint_token1] = ACTIONS(396),
    [aux_sym_env_token1] = ACTIONS(396),
    [aux_sym_expose_token1] = ACTIONS(396),
    [aux_sym_from_token1] = ACTIONS(396),
    [aux_sym_healthcheck_token1] = ACTIONS(396),
    [aux_sym_label_token1] = ACTIONS(396),
    [aux_sym_maintainer_token1] = ACTIONS(396),
    [aux_sym_onbuild_token1] = ACTIONS(396),
    [aux_sym_run_token1] = ACTIONS(396),
    [aux_sym_shell_token1] = ACTIONS(396),
    [aux_sym_stopsignal_token1] = ACTIONS(396),
    [aux_sym_user_token1] = ACTIONS(396),
    [aux_sym_volume_token1] = ACTIONS(396),
    [aux_sym_workdir_token1] = ACTIONS(396),
    [aux_sym_env_key_token1] = ACTIONS(394),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(394),
    [sym__space_no_newline] = ACTIONS(396),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
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
  [100] = {
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
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [aux_sym_add_token1] = ACTIONS(398),
    [aux_sym_arg_token1] = ACTIONS(398),
    [aux_sym_cmd_token1] = ACTIONS(398),
    [aux_sym_copy_token1] = ACTIONS(398),
    [aux_sym_entrypoint_token1] = ACTIONS(398),
    [aux_sym_env_token1] = ACTIONS(398),
    [aux_sym_expose_token1] = ACTIONS(398),
    [aux_sym_from_token1] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(400),
    [anon_sym_AT] = ACTIONS(402),
    [aux_sym_healthcheck_token1] = ACTIONS(398),
    [aux_sym_label_token1] = ACTIONS(398),
    [aux_sym_maintainer_token1] = ACTIONS(398),
    [aux_sym_onbuild_token1] = ACTIONS(398),
    [aux_sym_run_token1] = ACTIONS(398),
    [aux_sym_shell_token1] = ACTIONS(398),
    [aux_sym_stopsignal_token1] = ACTIONS(398),
    [aux_sym_user_token1] = ACTIONS(398),
    [aux_sym_volume_token1] = ACTIONS(398),
    [aux_sym_workdir_token1] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(398),
    [sym__space_no_newline] = ACTIONS(404),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
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
  [104] = {
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
  [107] = {
    [aux_sym__anything] = STATE(118),
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
    [aux_sym_env_key_token1] = ACTIONS(422),
    [aux_sym__anything_token1] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_add_token1] = ACTIONS(430),
    [aux_sym_arg_token1] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
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
    [aux_sym_env_key_token1] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(428),
    [sym__space_no_newline] = ACTIONS(434),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
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
  [110] = {
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
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym_workdir_token4] = ACTIONS(381),
    [aux_sym_workdir_token5] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(156),
    [aux_sym_arg_token1] = ACTIONS(156),
    [aux_sym_cmd_token1] = ACTIONS(156),
    [aux_sym_copy_token1] = ACTIONS(156),
    [aux_sym_entrypoint_token1] = ACTIONS(156),
    [aux_sym_env_token1] = ACTIONS(156),
    [aux_sym_expose_token1] = ACTIONS(156),
    [aux_sym_from_token1] = ACTIONS(156),
    [aux_sym_healthcheck_token1] = ACTIONS(156),
    [aux_sym_label_token1] = ACTIONS(156),
    [aux_sym_maintainer_token1] = ACTIONS(156),
    [aux_sym_onbuild_token1] = ACTIONS(156),
    [aux_sym_run_token1] = ACTIONS(156),
    [aux_sym_shell_token1] = ACTIONS(156),
    [aux_sym_stopsignal_token1] = ACTIONS(156),
    [aux_sym_user_token1] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
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
    [anon_sym_DOLLAR] = ACTIONS(199),
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
    [aux_sym_workdir_token4] = ACTIONS(203),
    [aux_sym_workdir_token5] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [anon_sym_DOLLAR] = ACTIONS(207),
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
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym__space_no_newline] = ACTIONS(291),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [aux_sym_add_token1] = ACTIONS(436),
    [aux_sym_arg_token1] = ACTIONS(436),
    [aux_sym_cmd_token1] = ACTIONS(436),
    [aux_sym_copy_token1] = ACTIONS(436),
    [aux_sym_entrypoint_token1] = ACTIONS(436),
    [aux_sym_env_token1] = ACTIONS(436),
    [aux_sym_expose_token1] = ACTIONS(436),
    [anon_sym_DQUOTE] = ACTIONS(436),
    [aux_sym_from_token1] = ACTIONS(436),
    [aux_sym_healthcheck_token1] = ACTIONS(436),
    [aux_sym_label_token1] = ACTIONS(436),
    [aux_sym_maintainer_token1] = ACTIONS(436),
    [aux_sym_onbuild_token1] = ACTIONS(436),
    [aux_sym_run_token1] = ACTIONS(436),
    [aux_sym_shell_token1] = ACTIONS(436),
    [aux_sym_stopsignal_token1] = ACTIONS(436),
    [aux_sym_user_token1] = ACTIONS(436),
    [anon_sym_DOLLAR] = ACTIONS(436),
    [aux_sym_volume_token1] = ACTIONS(436),
    [aux_sym_workdir_token1] = ACTIONS(436),
    [aux_sym__port_part_token1] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(436),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
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
  [118] = {
    [aux_sym__anything] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_add_token1] = ACTIONS(440),
    [aux_sym_arg_token1] = ACTIONS(440),
    [aux_sym_cmd_token1] = ACTIONS(440),
    [aux_sym_copy_token1] = ACTIONS(440),
    [aux_sym_entrypoint_token1] = ACTIONS(440),
    [aux_sym_env_token1] = ACTIONS(440),
    [aux_sym_expose_token1] = ACTIONS(440),
    [aux_sym_from_token1] = ACTIONS(440),
    [aux_sym_healthcheck_token1] = ACTIONS(440),
    [aux_sym_label_token1] = ACTIONS(440),
    [aux_sym_maintainer_token1] = ACTIONS(440),
    [aux_sym_onbuild_token1] = ACTIONS(440),
    [aux_sym_run_token1] = ACTIONS(440),
    [aux_sym_shell_token1] = ACTIONS(440),
    [aux_sym_stopsignal_token1] = ACTIONS(440),
    [aux_sym_user_token1] = ACTIONS(440),
    [aux_sym_volume_token1] = ACTIONS(440),
    [aux_sym_workdir_token1] = ACTIONS(440),
    [aux_sym_env_key_token1] = ACTIONS(438),
    [aux_sym__anything_token1] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
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
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(267),
    [anon_sym_AT] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym__space_no_newline] = ACTIONS(269),
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
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(451),
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
    [sym__space_no_newline] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym_add_token1] = ACTIONS(455),
    [aux_sym_arg_token1] = ACTIONS(455),
    [aux_sym_cmd_token1] = ACTIONS(455),
    [aux_sym_copy_token1] = ACTIONS(455),
    [aux_sym_entrypoint_token1] = ACTIONS(455),
    [aux_sym_env_token1] = ACTIONS(455),
    [aux_sym_expose_token1] = ACTIONS(455),
    [aux_sym_from_token1] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(455),
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
    [sym__space_no_newline] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym_add_token1] = ACTIONS(459),
    [aux_sym_arg_token1] = ACTIONS(459),
    [aux_sym_cmd_token1] = ACTIONS(459),
    [aux_sym_copy_token1] = ACTIONS(459),
    [aux_sym_entrypoint_token1] = ACTIONS(459),
    [aux_sym_env_token1] = ACTIONS(459),
    [aux_sym_expose_token1] = ACTIONS(459),
    [aux_sym_from_token1] = ACTIONS(459),
    [aux_sym_healthcheck_token1] = ACTIONS(459),
    [aux_sym_label_token1] = ACTIONS(459),
    [aux_sym_maintainer_token1] = ACTIONS(459),
    [aux_sym_onbuild_token1] = ACTIONS(459),
    [aux_sym_run_token1] = ACTIONS(459),
    [aux_sym_shell_token1] = ACTIONS(459),
    [aux_sym_stopsignal_token1] = ACTIONS(459),
    [aux_sym_user_token1] = ACTIONS(459),
    [aux_sym_volume_token1] = ACTIONS(459),
    [aux_sym_workdir_token1] = ACTIONS(459),
    [sym_path] = ACTIONS(461),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(459),
    [sym__space_no_newline] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [aux_sym__anything] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym_add_token1] = ACTIONS(465),
    [aux_sym_arg_token1] = ACTIONS(465),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_copy_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_env_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
    [aux_sym_healthcheck_token1] = ACTIONS(465),
    [aux_sym_label_token1] = ACTIONS(465),
    [aux_sym_maintainer_token1] = ACTIONS(465),
    [aux_sym_onbuild_token1] = ACTIONS(465),
    [aux_sym_run_token1] = ACTIONS(465),
    [aux_sym_shell_token1] = ACTIONS(465),
    [aux_sym_stopsignal_token1] = ACTIONS(465),
    [aux_sym_user_token1] = ACTIONS(465),
    [aux_sym_volume_token1] = ACTIONS(465),
    [aux_sym_workdir_token1] = ACTIONS(465),
    [aux_sym__anything_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(465),
    [sym_comment] = ACTIONS(469),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_add_token1] = ACTIONS(414),
    [aux_sym_arg_token1] = ACTIONS(414),
    [aux_sym_cmd_token1] = ACTIONS(414),
    [aux_sym_copy_token1] = ACTIONS(414),
    [aux_sym_entrypoint_token1] = ACTIONS(414),
    [aux_sym_env_token1] = ACTIONS(414),
    [aux_sym_expose_token1] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(414),
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
  [126] = {
    [aux_sym__paths] = STATE(140),
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
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
    [aux_sym__anything] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_add_token1] = ACTIONS(438),
    [aux_sym_arg_token1] = ACTIONS(438),
    [aux_sym_cmd_token1] = ACTIONS(438),
    [aux_sym_copy_token1] = ACTIONS(438),
    [aux_sym_entrypoint_token1] = ACTIONS(438),
    [aux_sym_env_token1] = ACTIONS(438),
    [aux_sym_expose_token1] = ACTIONS(438),
    [aux_sym_from_token1] = ACTIONS(438),
    [aux_sym_healthcheck_token1] = ACTIONS(438),
    [aux_sym_label_token1] = ACTIONS(438),
    [aux_sym_maintainer_token1] = ACTIONS(438),
    [aux_sym_onbuild_token1] = ACTIONS(438),
    [aux_sym_run_token1] = ACTIONS(438),
    [aux_sym_shell_token1] = ACTIONS(438),
    [aux_sym_stopsignal_token1] = ACTIONS(438),
    [aux_sym_user_token1] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(438),
    [aux_sym_workdir_token1] = ACTIONS(438),
    [aux_sym__anything_token1] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(440),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [aux_sym__paths] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(478),
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
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_add_token1] = ACTIONS(480),
    [aux_sym_arg_token1] = ACTIONS(480),
    [aux_sym_cmd_token1] = ACTIONS(480),
    [aux_sym_copy_token1] = ACTIONS(480),
    [aux_sym_entrypoint_token1] = ACTIONS(480),
    [aux_sym_env_token1] = ACTIONS(480),
    [aux_sym_expose_token1] = ACTIONS(480),
    [aux_sym_from_token1] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(482),
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
    [sym__space_no_newline] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(451),
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
    [sym__space_no_newline] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [aux_sym__anything] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(486),
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
    [aux_sym__anything_token1] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(486),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(490),
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
    [aux_sym_env_key_token1] = ACTIONS(490),
    [aux_sym__anything_token1] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(490),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [aux_sym_add_token1] = ACTIONS(494),
    [aux_sym_arg_token1] = ACTIONS(494),
    [aux_sym_cmd_token1] = ACTIONS(494),
    [aux_sym_copy_token1] = ACTIONS(494),
    [aux_sym_entrypoint_token1] = ACTIONS(494),
    [aux_sym_env_token1] = ACTIONS(494),
    [aux_sym_expose_token1] = ACTIONS(494),
    [aux_sym_from_token1] = ACTIONS(494),
    [anon_sym_AT] = ACTIONS(494),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(494),
    [sym__space_no_newline] = ACTIONS(496),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
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
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [aux_sym_add_token1] = ACTIONS(498),
    [aux_sym_arg_token1] = ACTIONS(498),
    [aux_sym_cmd_token1] = ACTIONS(498),
    [aux_sym_copy_token1] = ACTIONS(498),
    [aux_sym_entrypoint_token1] = ACTIONS(498),
    [aux_sym_env_token1] = ACTIONS(498),
    [aux_sym_expose_token1] = ACTIONS(498),
    [aux_sym_from_token1] = ACTIONS(498),
    [anon_sym_AT] = ACTIONS(500),
    [aux_sym_healthcheck_token1] = ACTIONS(498),
    [aux_sym_label_token1] = ACTIONS(498),
    [aux_sym_maintainer_token1] = ACTIONS(498),
    [aux_sym_onbuild_token1] = ACTIONS(498),
    [aux_sym_run_token1] = ACTIONS(498),
    [aux_sym_shell_token1] = ACTIONS(498),
    [aux_sym_stopsignal_token1] = ACTIONS(498),
    [aux_sym_user_token1] = ACTIONS(498),
    [aux_sym_volume_token1] = ACTIONS(498),
    [aux_sym_workdir_token1] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(498),
    [sym__space_no_newline] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [aux_sym__paths] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(504),
    [aux_sym_add_token1] = ACTIONS(504),
    [aux_sym_arg_token1] = ACTIONS(504),
    [aux_sym_cmd_token1] = ACTIONS(504),
    [aux_sym_copy_token1] = ACTIONS(504),
    [aux_sym_entrypoint_token1] = ACTIONS(504),
    [aux_sym_env_token1] = ACTIONS(504),
    [aux_sym_expose_token1] = ACTIONS(504),
    [aux_sym_from_token1] = ACTIONS(504),
    [aux_sym_healthcheck_token1] = ACTIONS(504),
    [aux_sym_label_token1] = ACTIONS(504),
    [aux_sym_maintainer_token1] = ACTIONS(504),
    [aux_sym_onbuild_token1] = ACTIONS(504),
    [aux_sym_run_token1] = ACTIONS(504),
    [aux_sym_shell_token1] = ACTIONS(504),
    [aux_sym_stopsignal_token1] = ACTIONS(504),
    [aux_sym_user_token1] = ACTIONS(504),
    [aux_sym_volume_token1] = ACTIONS(504),
    [aux_sym_workdir_token1] = ACTIONS(504),
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(504),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [aux_sym__paths] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(506),
    [aux_sym_add_token1] = ACTIONS(506),
    [aux_sym_arg_token1] = ACTIONS(506),
    [aux_sym_cmd_token1] = ACTIONS(506),
    [aux_sym_copy_token1] = ACTIONS(506),
    [aux_sym_entrypoint_token1] = ACTIONS(506),
    [aux_sym_env_token1] = ACTIONS(506),
    [aux_sym_expose_token1] = ACTIONS(506),
    [aux_sym_from_token1] = ACTIONS(506),
    [aux_sym_healthcheck_token1] = ACTIONS(506),
    [aux_sym_label_token1] = ACTIONS(506),
    [aux_sym_maintainer_token1] = ACTIONS(506),
    [aux_sym_onbuild_token1] = ACTIONS(506),
    [aux_sym_run_token1] = ACTIONS(506),
    [aux_sym_shell_token1] = ACTIONS(506),
    [aux_sym_stopsignal_token1] = ACTIONS(506),
    [aux_sym_user_token1] = ACTIONS(506),
    [aux_sym_volume_token1] = ACTIONS(506),
    [aux_sym_workdir_token1] = ACTIONS(506),
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(506),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [aux_sym__anything] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_add_token1] = ACTIONS(438),
    [aux_sym_arg_token1] = ACTIONS(438),
    [aux_sym_cmd_token1] = ACTIONS(438),
    [aux_sym_copy_token1] = ACTIONS(438),
    [aux_sym_entrypoint_token1] = ACTIONS(438),
    [aux_sym_env_token1] = ACTIONS(438),
    [aux_sym_expose_token1] = ACTIONS(438),
    [aux_sym_from_token1] = ACTIONS(438),
    [aux_sym_healthcheck_token1] = ACTIONS(438),
    [aux_sym_label_token1] = ACTIONS(438),
    [aux_sym_maintainer_token1] = ACTIONS(438),
    [aux_sym_onbuild_token1] = ACTIONS(438),
    [aux_sym_run_token1] = ACTIONS(438),
    [aux_sym_shell_token1] = ACTIONS(438),
    [aux_sym_stopsignal_token1] = ACTIONS(438),
    [aux_sym_user_token1] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(438),
    [aux_sym_workdir_token1] = ACTIONS(438),
    [aux_sym__anything_token1] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
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
    [aux_sym__paths] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(511),
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
    [sym_path] = ACTIONS(513),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym__space_no_newline] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(490),
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
    [aux_sym__anything_token1] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(490),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
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
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(516),
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
    [aux_sym_env_key_token1] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(520),
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
    [aux_sym_env_key_token1] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(520),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(447),
    [sym__space_no_newline] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(524),
    [sym__space_no_newline] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
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
    [sym__space_no_newline] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(511),
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
    [sym_path] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [aux_sym_add_token1] = ACTIONS(534),
    [aux_sym_arg_token1] = ACTIONS(534),
    [aux_sym_cmd_token1] = ACTIONS(534),
    [aux_sym_copy_token1] = ACTIONS(534),
    [aux_sym_entrypoint_token1] = ACTIONS(534),
    [aux_sym_env_token1] = ACTIONS(534),
    [aux_sym_expose_token1] = ACTIONS(534),
    [aux_sym_from_token1] = ACTIONS(534),
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
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [aux_sym_add_token1] = ACTIONS(538),
    [aux_sym_arg_token1] = ACTIONS(538),
    [aux_sym_cmd_token1] = ACTIONS(538),
    [aux_sym_copy_token1] = ACTIONS(538),
    [aux_sym_entrypoint_token1] = ACTIONS(538),
    [aux_sym_env_token1] = ACTIONS(538),
    [aux_sym_expose_token1] = ACTIONS(538),
    [aux_sym_from_token1] = ACTIONS(538),
    [anon_sym_COLON] = ACTIONS(540),
    [aux_sym_healthcheck_token1] = ACTIONS(538),
    [aux_sym_label_token1] = ACTIONS(538),
    [aux_sym_maintainer_token1] = ACTIONS(538),
    [aux_sym_onbuild_token1] = ACTIONS(538),
    [aux_sym_run_token1] = ACTIONS(538),
    [aux_sym_shell_token1] = ACTIONS(538),
    [aux_sym_stopsignal_token1] = ACTIONS(538),
    [aux_sym_user_token1] = ACTIONS(538),
    [aux_sym_volume_token1] = ACTIONS(538),
    [aux_sym_workdir_token1] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(538),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
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
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [aux_sym_add_token1] = ACTIONS(538),
    [aux_sym_arg_token1] = ACTIONS(538),
    [aux_sym_cmd_token1] = ACTIONS(538),
    [aux_sym_copy_token1] = ACTIONS(538),
    [aux_sym_entrypoint_token1] = ACTIONS(538),
    [aux_sym_env_token1] = ACTIONS(538),
    [aux_sym_expose_token1] = ACTIONS(538),
    [aux_sym_from_token1] = ACTIONS(538),
    [anon_sym_COLON] = ACTIONS(542),
    [aux_sym_healthcheck_token1] = ACTIONS(538),
    [aux_sym_label_token1] = ACTIONS(538),
    [aux_sym_maintainer_token1] = ACTIONS(538),
    [aux_sym_onbuild_token1] = ACTIONS(538),
    [aux_sym_run_token1] = ACTIONS(538),
    [aux_sym_shell_token1] = ACTIONS(538),
    [aux_sym_stopsignal_token1] = ACTIONS(538),
    [aux_sym_user_token1] = ACTIONS(538),
    [aux_sym_volume_token1] = ACTIONS(538),
    [aux_sym_workdir_token1] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(538),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [aux_sym_add_token1] = ACTIONS(544),
    [aux_sym_arg_token1] = ACTIONS(544),
    [aux_sym_cmd_token1] = ACTIONS(544),
    [aux_sym_copy_token1] = ACTIONS(544),
    [aux_sym_entrypoint_token1] = ACTIONS(544),
    [aux_sym_env_token1] = ACTIONS(544),
    [aux_sym_expose_token1] = ACTIONS(544),
    [aux_sym_from_token1] = ACTIONS(544),
    [anon_sym_COLON] = ACTIONS(544),
    [aux_sym_healthcheck_token1] = ACTIONS(544),
    [aux_sym_label_token1] = ACTIONS(544),
    [aux_sym_maintainer_token1] = ACTIONS(544),
    [aux_sym_onbuild_token1] = ACTIONS(544),
    [aux_sym_run_token1] = ACTIONS(544),
    [aux_sym_shell_token1] = ACTIONS(544),
    [aux_sym_stopsignal_token1] = ACTIONS(544),
    [aux_sym_user_token1] = ACTIONS(544),
    [aux_sym_volume_token1] = ACTIONS(544),
    [aux_sym_workdir_token1] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(544),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [aux_sym_add_token1] = ACTIONS(546),
    [aux_sym_arg_token1] = ACTIONS(546),
    [aux_sym_cmd_token1] = ACTIONS(546),
    [aux_sym_copy_token1] = ACTIONS(546),
    [aux_sym_entrypoint_token1] = ACTIONS(546),
    [aux_sym_env_token1] = ACTIONS(546),
    [aux_sym_expose_token1] = ACTIONS(546),
    [aux_sym_from_token1] = ACTIONS(546),
    [anon_sym_COLON] = ACTIONS(546),
    [aux_sym_healthcheck_token1] = ACTIONS(546),
    [aux_sym_label_token1] = ACTIONS(546),
    [aux_sym_maintainer_token1] = ACTIONS(546),
    [aux_sym_onbuild_token1] = ACTIONS(546),
    [aux_sym_run_token1] = ACTIONS(546),
    [aux_sym_shell_token1] = ACTIONS(546),
    [aux_sym_stopsignal_token1] = ACTIONS(546),
    [aux_sym_user_token1] = ACTIONS(546),
    [aux_sym_volume_token1] = ACTIONS(546),
    [aux_sym_workdir_token1] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(546),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [aux_sym_add_token1] = ACTIONS(548),
    [aux_sym_arg_token1] = ACTIONS(548),
    [aux_sym_cmd_token1] = ACTIONS(548),
    [aux_sym_copy_token1] = ACTIONS(548),
    [aux_sym_entrypoint_token1] = ACTIONS(548),
    [aux_sym_env_token1] = ACTIONS(548),
    [aux_sym_expose_token1] = ACTIONS(548),
    [aux_sym_from_token1] = ACTIONS(548),
    [aux_sym_healthcheck_token1] = ACTIONS(548),
    [aux_sym_label_token1] = ACTIONS(548),
    [aux_sym_maintainer_token1] = ACTIONS(548),
    [aux_sym_onbuild_token1] = ACTIONS(548),
    [aux_sym_run_token1] = ACTIONS(548),
    [aux_sym_shell_token1] = ACTIONS(548),
    [aux_sym_stopsignal_token1] = ACTIONS(548),
    [aux_sym_user_token1] = ACTIONS(548),
    [aux_sym_volume_token1] = ACTIONS(548),
    [aux_sym_workdir_token1] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(548),
    [sym__space_no_newline] = ACTIONS(550),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(490),
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
    [aux_sym__anything_token1] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(490),
    [sym_comment] = ACTIONS(492),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_add_token1] = ACTIONS(414),
    [aux_sym_arg_token1] = ACTIONS(414),
    [aux_sym_cmd_token1] = ACTIONS(414),
    [aux_sym_copy_token1] = ACTIONS(414),
    [aux_sym_entrypoint_token1] = ACTIONS(414),
    [aux_sym_env_token1] = ACTIONS(414),
    [aux_sym_expose_token1] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(414),
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
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(552),
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
    [aux_sym_env_key_token1] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(552),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [aux_sym_add_token1] = ACTIONS(558),
    [aux_sym_arg_token1] = ACTIONS(558),
    [aux_sym_cmd_token1] = ACTIONS(558),
    [aux_sym_copy_token1] = ACTIONS(558),
    [aux_sym_entrypoint_token1] = ACTIONS(558),
    [aux_sym_env_token1] = ACTIONS(558),
    [aux_sym_expose_token1] = ACTIONS(558),
    [aux_sym_from_token1] = ACTIONS(558),
    [aux_sym_healthcheck_token1] = ACTIONS(558),
    [aux_sym_label_token1] = ACTIONS(558),
    [aux_sym_maintainer_token1] = ACTIONS(558),
    [aux_sym_onbuild_token1] = ACTIONS(558),
    [aux_sym_run_token1] = ACTIONS(558),
    [aux_sym_shell_token1] = ACTIONS(558),
    [aux_sym_stopsignal_token1] = ACTIONS(558),
    [aux_sym_user_token1] = ACTIONS(558),
    [aux_sym_volume_token1] = ACTIONS(558),
    [aux_sym_workdir_token1] = ACTIONS(558),
    [aux_sym_env_key_token1] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(556),
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
    [aux_sym_env_key_token1] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(564),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [aux_sym_add_token1] = ACTIONS(498),
    [aux_sym_arg_token1] = ACTIONS(498),
    [aux_sym_cmd_token1] = ACTIONS(498),
    [aux_sym_copy_token1] = ACTIONS(498),
    [aux_sym_entrypoint_token1] = ACTIONS(498),
    [aux_sym_env_token1] = ACTIONS(498),
    [aux_sym_expose_token1] = ACTIONS(498),
    [aux_sym_from_token1] = ACTIONS(498),
    [aux_sym_healthcheck_token1] = ACTIONS(498),
    [aux_sym_label_token1] = ACTIONS(498),
    [aux_sym_maintainer_token1] = ACTIONS(498),
    [aux_sym_onbuild_token1] = ACTIONS(498),
    [aux_sym_run_token1] = ACTIONS(498),
    [aux_sym_shell_token1] = ACTIONS(498),
    [aux_sym_stopsignal_token1] = ACTIONS(498),
    [aux_sym_user_token1] = ACTIONS(498),
    [aux_sym_volume_token1] = ACTIONS(498),
    [aux_sym_workdir_token1] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(498),
    [sym__space_no_newline] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [aux_sym_add_token1] = ACTIONS(570),
    [aux_sym_arg_token1] = ACTIONS(570),
    [aux_sym_cmd_token1] = ACTIONS(570),
    [aux_sym_copy_token1] = ACTIONS(570),
    [aux_sym_entrypoint_token1] = ACTIONS(570),
    [aux_sym_env_token1] = ACTIONS(570),
    [aux_sym_expose_token1] = ACTIONS(570),
    [aux_sym_from_token1] = ACTIONS(570),
    [aux_sym_healthcheck_token1] = ACTIONS(570),
    [aux_sym_label_token1] = ACTIONS(570),
    [aux_sym_maintainer_token1] = ACTIONS(570),
    [aux_sym_onbuild_token1] = ACTIONS(570),
    [aux_sym_run_token1] = ACTIONS(570),
    [aux_sym_shell_token1] = ACTIONS(570),
    [aux_sym_stopsignal_token1] = ACTIONS(570),
    [aux_sym_user_token1] = ACTIONS(570),
    [aux_sym_volume_token1] = ACTIONS(570),
    [aux_sym_workdir_token1] = ACTIONS(570),
    [aux_sym_env_key_token1] = ACTIONS(568),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(568),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [aux_sym_add_token1] = ACTIONS(572),
    [aux_sym_arg_token1] = ACTIONS(572),
    [anon_sym_EQ] = ACTIONS(574),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [aux_sym_add_token1] = ACTIONS(578),
    [aux_sym_arg_token1] = ACTIONS(578),
    [aux_sym_cmd_token1] = ACTIONS(578),
    [aux_sym_copy_token1] = ACTIONS(578),
    [aux_sym_entrypoint_token1] = ACTIONS(578),
    [aux_sym_env_token1] = ACTIONS(578),
    [aux_sym_expose_token1] = ACTIONS(578),
    [aux_sym_from_token1] = ACTIONS(578),
    [aux_sym_healthcheck_token1] = ACTIONS(578),
    [aux_sym_label_token1] = ACTIONS(578),
    [aux_sym_maintainer_token1] = ACTIONS(578),
    [aux_sym_onbuild_token1] = ACTIONS(578),
    [aux_sym_run_token1] = ACTIONS(578),
    [aux_sym_shell_token1] = ACTIONS(578),
    [aux_sym_stopsignal_token1] = ACTIONS(578),
    [aux_sym_user_token1] = ACTIONS(578),
    [aux_sym_volume_token1] = ACTIONS(578),
    [aux_sym_workdir_token1] = ACTIONS(578),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(578),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [aux_sym_add_token1] = ACTIONS(534),
    [aux_sym_arg_token1] = ACTIONS(534),
    [aux_sym_cmd_token1] = ACTIONS(534),
    [aux_sym_copy_token1] = ACTIONS(534),
    [aux_sym_entrypoint_token1] = ACTIONS(534),
    [aux_sym_env_token1] = ACTIONS(534),
    [aux_sym_expose_token1] = ACTIONS(534),
    [aux_sym_from_token1] = ACTIONS(534),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
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
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(580),
    [aux_sym_add_token1] = ACTIONS(580),
    [aux_sym_arg_token1] = ACTIONS(580),
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
  [171] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(582),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [aux_sym_add_token1] = ACTIONS(584),
    [aux_sym_arg_token1] = ACTIONS(584),
    [aux_sym_cmd_token1] = ACTIONS(584),
    [aux_sym_copy_token1] = ACTIONS(584),
    [aux_sym_entrypoint_token1] = ACTIONS(584),
    [aux_sym_env_token1] = ACTIONS(584),
    [aux_sym_expose_token1] = ACTIONS(584),
    [aux_sym_from_token1] = ACTIONS(584),
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
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [aux_sym_add_token1] = ACTIONS(504),
    [aux_sym_arg_token1] = ACTIONS(504),
    [aux_sym_cmd_token1] = ACTIONS(504),
    [aux_sym_copy_token1] = ACTIONS(504),
    [aux_sym_entrypoint_token1] = ACTIONS(504),
    [aux_sym_env_token1] = ACTIONS(504),
    [aux_sym_expose_token1] = ACTIONS(504),
    [aux_sym_from_token1] = ACTIONS(504),
    [aux_sym_healthcheck_token1] = ACTIONS(504),
    [aux_sym_label_token1] = ACTIONS(504),
    [aux_sym_maintainer_token1] = ACTIONS(504),
    [aux_sym_onbuild_token1] = ACTIONS(504),
    [aux_sym_run_token1] = ACTIONS(504),
    [aux_sym_shell_token1] = ACTIONS(504),
    [aux_sym_stopsignal_token1] = ACTIONS(504),
    [aux_sym_user_token1] = ACTIONS(504),
    [aux_sym_volume_token1] = ACTIONS(504),
    [aux_sym_workdir_token1] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(504),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_add_token1] = ACTIONS(308),
    [aux_sym_arg_token1] = ACTIONS(308),
    [aux_sym_cmd_token1] = ACTIONS(308),
    [aux_sym_copy_token1] = ACTIONS(308),
    [aux_sym_entrypoint_token1] = ACTIONS(308),
    [aux_sym_env_token1] = ACTIONS(308),
    [aux_sym_expose_token1] = ACTIONS(308),
    [aux_sym_from_token1] = ACTIONS(308),
    [aux_sym_healthcheck_token1] = ACTIONS(308),
    [aux_sym_label_token1] = ACTIONS(308),
    [aux_sym_maintainer_token1] = ACTIONS(308),
    [aux_sym_onbuild_token1] = ACTIONS(308),
    [aux_sym_run_token1] = ACTIONS(308),
    [aux_sym_shell_token1] = ACTIONS(308),
    [aux_sym_stopsignal_token1] = ACTIONS(308),
    [aux_sym_user_token1] = ACTIONS(308),
    [aux_sym_volume_token1] = ACTIONS(308),
    [aux_sym_workdir_token1] = ACTIONS(308),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(308),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
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
  [176] = {
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
  [177] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
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
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [aux_sym_add_token1] = ACTIONS(498),
    [aux_sym_arg_token1] = ACTIONS(498),
    [aux_sym_cmd_token1] = ACTIONS(498),
    [aux_sym_copy_token1] = ACTIONS(498),
    [aux_sym_entrypoint_token1] = ACTIONS(498),
    [aux_sym_env_token1] = ACTIONS(498),
    [aux_sym_expose_token1] = ACTIONS(498),
    [aux_sym_from_token1] = ACTIONS(498),
    [aux_sym_healthcheck_token1] = ACTIONS(498),
    [aux_sym_label_token1] = ACTIONS(498),
    [aux_sym_maintainer_token1] = ACTIONS(498),
    [aux_sym_onbuild_token1] = ACTIONS(498),
    [aux_sym_run_token1] = ACTIONS(498),
    [aux_sym_shell_token1] = ACTIONS(498),
    [aux_sym_stopsignal_token1] = ACTIONS(498),
    [aux_sym_user_token1] = ACTIONS(498),
    [aux_sym_volume_token1] = ACTIONS(498),
    [aux_sym_workdir_token1] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(498),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(316),
    [aux_sym_arg_token1] = ACTIONS(316),
    [aux_sym_cmd_token1] = ACTIONS(316),
    [aux_sym_copy_token1] = ACTIONS(316),
    [aux_sym_entrypoint_token1] = ACTIONS(316),
    [aux_sym_env_token1] = ACTIONS(316),
    [aux_sym_expose_token1] = ACTIONS(316),
    [aux_sym_from_token1] = ACTIONS(316),
    [aux_sym_healthcheck_token1] = ACTIONS(316),
    [aux_sym_label_token1] = ACTIONS(316),
    [aux_sym_maintainer_token1] = ACTIONS(316),
    [aux_sym_onbuild_token1] = ACTIONS(316),
    [aux_sym_run_token1] = ACTIONS(316),
    [aux_sym_shell_token1] = ACTIONS(316),
    [aux_sym_stopsignal_token1] = ACTIONS(316),
    [aux_sym_user_token1] = ACTIONS(316),
    [aux_sym_volume_token1] = ACTIONS(316),
    [aux_sym_workdir_token1] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(316),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(596),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [aux_sym_add_token1] = ACTIONS(598),
    [aux_sym_arg_token1] = ACTIONS(598),
    [aux_sym_cmd_token1] = ACTIONS(598),
    [aux_sym_copy_token1] = ACTIONS(598),
    [aux_sym_entrypoint_token1] = ACTIONS(598),
    [aux_sym_env_token1] = ACTIONS(598),
    [aux_sym_expose_token1] = ACTIONS(598),
    [aux_sym_from_token1] = ACTIONS(598),
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
  [185] = {
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
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [aux_sym_add_token1] = ACTIONS(602),
    [aux_sym_arg_token1] = ACTIONS(602),
    [aux_sym_cmd_token1] = ACTIONS(602),
    [aux_sym_copy_token1] = ACTIONS(602),
    [aux_sym_entrypoint_token1] = ACTIONS(602),
    [aux_sym_env_token1] = ACTIONS(602),
    [aux_sym_expose_token1] = ACTIONS(602),
    [aux_sym_from_token1] = ACTIONS(602),
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
  [187] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(604),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [aux_sym_add_token1] = ACTIONS(358),
    [aux_sym_arg_token1] = ACTIONS(358),
    [aux_sym_cmd_token1] = ACTIONS(358),
    [aux_sym_copy_token1] = ACTIONS(358),
    [aux_sym_entrypoint_token1] = ACTIONS(358),
    [aux_sym_env_token1] = ACTIONS(358),
    [aux_sym_expose_token1] = ACTIONS(358),
    [aux_sym_from_token1] = ACTIONS(358),
    [aux_sym_healthcheck_token1] = ACTIONS(358),
    [aux_sym_label_token1] = ACTIONS(358),
    [aux_sym_maintainer_token1] = ACTIONS(358),
    [aux_sym_onbuild_token1] = ACTIONS(358),
    [aux_sym_run_token1] = ACTIONS(358),
    [aux_sym_shell_token1] = ACTIONS(358),
    [aux_sym_stopsignal_token1] = ACTIONS(358),
    [aux_sym_user_token1] = ACTIONS(358),
    [aux_sym_volume_token1] = ACTIONS(358),
    [aux_sym_workdir_token1] = ACTIONS(358),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(358),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [189] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [190] = {
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
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(524),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [196] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(480),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
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
  [201] = {
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
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(478),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(478),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [203] = {
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
  [204] = {
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
  [205] = {
    [sym_repository] = STATE(226),
    [sym__repository_start] = STATE(216),
    [sym_image] = STATE(101),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(630),
    [anon_sym_DOLLAR] = ACTIONS(632),
    [aux_sym_platform_token1] = ACTIONS(634),
    [aux_sym__repository_start_token1] = ACTIONS(632),
    [aux_sym__repository_start_token4] = ACTIONS(636),
    [aux_sym__repository_start_token6] = ACTIONS(636),
    [aux_sym__repository_start_token8] = ACTIONS(638),
    [aux_sym__repository_start_token10] = ACTIONS(638),
    [aux_sym__repository_start_token12] = ACTIONS(640),
    [aux_sym__repository_start_token14] = ACTIONS(640),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [206] = {
    [sym__hc_interval] = STATE(209),
    [sym__hc_timeout] = STATE(209),
    [sym__hc_start_period] = STATE(209),
    [sym__hc_retries] = STATE(209),
    [sym__hc_options] = STATE(209),
    [sym__hc_command] = STATE(171),
    [aux_sym_healthcheck_repeat1] = STATE(209),
    [aux_sym_cmd_token1] = ACTIONS(642),
    [sym_hc_none] = ACTIONS(644),
    [anon_sym_DASH_DASHinterval] = ACTIONS(646),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(648),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(650),
    [anon_sym_DASH_DASHretires] = ACTIONS(652),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [207] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(190),
    [sym__port] = STATE(87),
    [sym_port] = STATE(87),
    [sym_port_range] = STATE(87),
    [sym__port_part] = STATE(63),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(654),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [208] = {
    [sym_repository] = STATE(223),
    [sym__repository_start] = STATE(216),
    [sym_image] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(632),
    [aux_sym_platform_token1] = ACTIONS(634),
    [aux_sym__repository_start_token1] = ACTIONS(632),
    [aux_sym__repository_start_token4] = ACTIONS(636),
    [aux_sym__repository_start_token6] = ACTIONS(636),
    [aux_sym__repository_start_token8] = ACTIONS(638),
    [aux_sym__repository_start_token10] = ACTIONS(638),
    [aux_sym__repository_start_token12] = ACTIONS(640),
    [aux_sym__repository_start_token14] = ACTIONS(640),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [209] = {
    [sym__hc_interval] = STATE(213),
    [sym__hc_timeout] = STATE(213),
    [sym__hc_start_period] = STATE(213),
    [sym__hc_retries] = STATE(213),
    [sym__hc_options] = STATE(213),
    [sym__hc_command] = STATE(203),
    [aux_sym_healthcheck_repeat1] = STATE(213),
    [aux_sym_cmd_token1] = ACTIONS(642),
    [anon_sym_DASH_DASHinterval] = ACTIONS(646),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(648),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(650),
    [anon_sym_DASH_DASHretires] = ACTIONS(652),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [210] = {
    [sym_digest] = STATE(163),
    [anon_sym_sha256_COLON] = ACTIONS(656),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [211] = {
    [sym__repository_continued] = STATE(211),
    [aux_sym_repository_repeat1] = STATE(211),
    [anon_sym_DOLLAR] = ACTIONS(668),
    [aux_sym_platform_token1] = ACTIONS(671),
    [aux_sym__repository_start_token1] = ACTIONS(668),
    [aux_sym__repository_start_token4] = ACTIONS(674),
    [aux_sym__repository_start_token6] = ACTIONS(674),
    [aux_sym__repository_start_token8] = ACTIONS(677),
    [aux_sym__repository_start_token10] = ACTIONS(677),
    [aux_sym__repository_start_token12] = ACTIONS(680),
    [aux_sym__repository_start_token14] = ACTIONS(680),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [212] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(683),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [213] = {
    [sym__hc_interval] = STATE(213),
    [sym__hc_timeout] = STATE(213),
    [sym__hc_start_period] = STATE(213),
    [sym__hc_retries] = STATE(213),
    [sym__hc_options] = STATE(213),
    [aux_sym_healthcheck_repeat1] = STATE(213),
    [aux_sym_cmd_token1] = ACTIONS(685),
    [anon_sym_DASH_DASHinterval] = ACTIONS(687),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(690),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(693),
    [anon_sym_DASH_DASHretires] = ACTIONS(696),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [214] = {
    [sym_digest] = STATE(158),
    [anon_sym_sha256_COLON] = ACTIONS(699),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [215] = {
    [sym_digest] = STATE(146),
    [anon_sym_sha256_COLON] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [216] = {
    [sym__repository_continued] = STATE(218),
    [aux_sym_repository_repeat1] = STATE(218),
    [anon_sym_DOLLAR] = ACTIONS(703),
    [aux_sym_platform_token1] = ACTIONS(706),
    [aux_sym__repository_start_token1] = ACTIONS(703),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(712),
    [aux_sym__repository_start_token10] = ACTIONS(712),
    [aux_sym__repository_start_token12] = ACTIONS(715),
    [aux_sym__repository_start_token14] = ACTIONS(715),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [217] = {
    [sym_digest] = STATE(150),
    [anon_sym_sha256_COLON] = ACTIONS(718),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [sym__repository_continued] = STATE(211),
    [aux_sym_repository_repeat1] = STATE(211),
    [anon_sym_DOLLAR] = ACTIONS(720),
    [aux_sym_platform_token1] = ACTIONS(723),
    [aux_sym__repository_start_token1] = ACTIONS(720),
    [aux_sym__repository_start_token4] = ACTIONS(726),
    [aux_sym__repository_start_token6] = ACTIONS(726),
    [aux_sym__repository_start_token8] = ACTIONS(729),
    [aux_sym__repository_start_token10] = ACTIONS(729),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [219] = {
    [sym_digest] = STATE(141),
    [anon_sym_sha256_COLON] = ACTIONS(735),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [220] = {
    [sym_as_name] = STATE(204),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym_digest] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym_digest] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym_image] = STATE(105),
    [anon_sym_DOLLAR] = ACTIONS(747),
    [aux_sym_platform_token1] = ACTIONS(749),
    [aux_sym__repository_start_token1] = ACTIONS(747),
    [aux_sym__repository_start_token4] = ACTIONS(751),
    [aux_sym__repository_start_token6] = ACTIONS(751),
    [aux_sym__repository_start_token8] = ACTIONS(753),
    [aux_sym__repository_start_token10] = ACTIONS(753),
    [aux_sym__repository_start_token12] = ACTIONS(755),
    [aux_sym__repository_start_token14] = ACTIONS(755),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym_as_name] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_image] = STATE(104),
    [anon_sym_DOLLAR] = ACTIONS(747),
    [aux_sym_platform_token1] = ACTIONS(749),
    [aux_sym__repository_start_token1] = ACTIONS(747),
    [aux_sym__repository_start_token4] = ACTIONS(751),
    [aux_sym__repository_start_token6] = ACTIONS(751),
    [aux_sym__repository_start_token8] = ACTIONS(753),
    [aux_sym__repository_start_token10] = ACTIONS(753),
    [aux_sym__repository_start_token12] = ACTIONS(755),
    [aux_sym__repository_start_token14] = ACTIONS(755),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_tag] = STATE(125),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [aux_sym_platform_token1] = ACTIONS(759),
    [aux_sym__repository_start_token1] = ACTIONS(757),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(761),
    [aux_sym__repository_start_token8] = ACTIONS(763),
    [aux_sym__repository_start_token10] = ACTIONS(763),
    [aux_sym__repository_start_token12] = ACTIONS(765),
    [aux_sym__repository_start_token14] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_as_name] = STATE(195),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym_as_name] = STATE(179),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_as_name] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_tag] = STATE(129),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [aux_sym_platform_token1] = ACTIONS(759),
    [aux_sym__repository_start_token1] = ACTIONS(757),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(761),
    [aux_sym__repository_start_token8] = ACTIONS(763),
    [aux_sym__repository_start_token10] = ACTIONS(763),
    [aux_sym__repository_start_token12] = ACTIONS(765),
    [aux_sym__repository_start_token14] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_digest] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym_digest] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_as_name] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_as_name] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym_as_name] = STATE(196),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_as_name] = STATE(185),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(737),
    [aux_sym__repository_start_token4] = ACTIONS(741),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(743),
    [aux_sym__repository_start_token10] = ACTIONS(743),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_tag] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [aux_sym_platform_token1] = ACTIONS(759),
    [aux_sym__repository_start_token1] = ACTIONS(757),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(761),
    [aux_sym__repository_start_token8] = ACTIONS(763),
    [aux_sym__repository_start_token10] = ACTIONS(763),
    [aux_sym__repository_start_token12] = ACTIONS(765),
    [aux_sym__repository_start_token14] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_digest] = STATE(150),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [aux_sym_platform_token1] = ACTIONS(660),
    [aux_sym__repository_start_token1] = ACTIONS(658),
    [aux_sym__repository_start_token4] = ACTIONS(662),
    [aux_sym__repository_start_token6] = ACTIONS(662),
    [aux_sym__repository_start_token8] = ACTIONS(664),
    [aux_sym__repository_start_token10] = ACTIONS(664),
    [aux_sym__repository_start_token12] = ACTIONS(666),
    [aux_sym__repository_start_token14] = ACTIONS(666),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_tag] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [aux_sym_platform_token1] = ACTIONS(759),
    [aux_sym__repository_start_token1] = ACTIONS(757),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(761),
    [aux_sym__repository_start_token8] = ACTIONS(763),
    [aux_sym__repository_start_token10] = ACTIONS(763),
    [aux_sym__repository_start_token12] = ACTIONS(765),
    [aux_sym__repository_start_token14] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [anon_sym_DOLLAR] = ACTIONS(767),
    [aux_sym_platform_token1] = ACTIONS(769),
    [aux_sym__repository_start_token1] = ACTIONS(767),
    [aux_sym__repository_start_token4] = ACTIONS(767),
    [aux_sym__repository_start_token6] = ACTIONS(767),
    [aux_sym__repository_start_token8] = ACTIONS(767),
    [aux_sym__repository_start_token10] = ACTIONS(767),
    [aux_sym__repository_start_token12] = ACTIONS(767),
    [aux_sym__repository_start_token14] = ACTIONS(767),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_DOLLAR] = ACTIONS(771),
    [aux_sym_platform_token1] = ACTIONS(773),
    [aux_sym__repository_start_token1] = ACTIONS(771),
    [aux_sym__repository_start_token4] = ACTIONS(771),
    [aux_sym__repository_start_token6] = ACTIONS(771),
    [aux_sym__repository_start_token8] = ACTIONS(771),
    [aux_sym__repository_start_token10] = ACTIONS(771),
    [aux_sym__repository_start_token12] = ACTIONS(771),
    [aux_sym__repository_start_token14] = ACTIONS(771),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [anon_sym_DOLLAR] = ACTIONS(775),
    [aux_sym_platform_token1] = ACTIONS(777),
    [aux_sym__repository_start_token1] = ACTIONS(775),
    [aux_sym__repository_start_token4] = ACTIONS(775),
    [aux_sym__repository_start_token6] = ACTIONS(775),
    [aux_sym__repository_start_token8] = ACTIONS(775),
    [aux_sym__repository_start_token10] = ACTIONS(775),
    [aux_sym__repository_start_token12] = ACTIONS(775),
    [aux_sym__repository_start_token14] = ACTIONS(775),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_platform_token1] = ACTIONS(781),
    [aux_sym__repository_start_token1] = ACTIONS(779),
    [aux_sym__repository_start_token4] = ACTIONS(779),
    [aux_sym__repository_start_token6] = ACTIONS(779),
    [aux_sym__repository_start_token8] = ACTIONS(779),
    [aux_sym__repository_start_token10] = ACTIONS(779),
    [aux_sym__repository_start_token12] = ACTIONS(779),
    [aux_sym__repository_start_token14] = ACTIONS(779),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym__port_spec] = STATE(390),
    [sym_mapped_port] = STATE(390),
    [sym__port] = STATE(378),
    [sym_port] = STATE(379),
    [sym_port_range] = STATE(379),
    [sym__port_part] = STATE(328),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym__port_part_token1] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [anon_sym_DOLLAR] = ACTIONS(789),
    [aux_sym_platform_token1] = ACTIONS(791),
    [aux_sym__repository_start_token1] = ACTIONS(789),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(789),
    [aux_sym__repository_start_token10] = ACTIONS(789),
    [aux_sym__repository_start_token12] = ACTIONS(789),
    [aux_sym__repository_start_token14] = ACTIONS(789),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
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
  [248] = {
    [anon_sym_DOLLAR] = ACTIONS(793),
    [aux_sym_platform_token1] = ACTIONS(795),
    [aux_sym__repository_start_token1] = ACTIONS(793),
    [aux_sym__repository_start_token4] = ACTIONS(793),
    [aux_sym__repository_start_token6] = ACTIONS(793),
    [aux_sym__repository_start_token8] = ACTIONS(793),
    [aux_sym__repository_start_token10] = ACTIONS(793),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [anon_sym_DOLLAR] = ACTIONS(797),
    [aux_sym_platform_token1] = ACTIONS(799),
    [aux_sym__repository_start_token1] = ACTIONS(797),
    [aux_sym__repository_start_token4] = ACTIONS(797),
    [aux_sym__repository_start_token6] = ACTIONS(797),
    [aux_sym__repository_start_token8] = ACTIONS(797),
    [aux_sym__repository_start_token10] = ACTIONS(797),
    [aux_sym__repository_start_token12] = ACTIONS(797),
    [aux_sym__repository_start_token14] = ACTIONS(797),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
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
  [251] = {
    [anon_sym_DOLLAR] = ACTIONS(801),
    [aux_sym_platform_token1] = ACTIONS(803),
    [aux_sym__repository_start_token1] = ACTIONS(801),
    [aux_sym__repository_start_token4] = ACTIONS(801),
    [aux_sym__repository_start_token6] = ACTIONS(801),
    [aux_sym__repository_start_token8] = ACTIONS(801),
    [aux_sym__repository_start_token10] = ACTIONS(801),
    [aux_sym__repository_start_token12] = ACTIONS(801),
    [aux_sym__repository_start_token14] = ACTIONS(801),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
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
  [253] = {
    [anon_sym_DOLLAR] = ACTIONS(805),
    [aux_sym_platform_token1] = ACTIONS(807),
    [aux_sym__repository_start_token1] = ACTIONS(805),
    [aux_sym__repository_start_token4] = ACTIONS(805),
    [aux_sym__repository_start_token6] = ACTIONS(805),
    [aux_sym__repository_start_token8] = ACTIONS(805),
    [aux_sym__repository_start_token10] = ACTIONS(805),
    [aux_sym__repository_start_token12] = ACTIONS(805),
    [aux_sym__repository_start_token14] = ACTIONS(805),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_DOLLAR] = ACTIONS(809),
    [aux_sym_platform_token1] = ACTIONS(811),
    [aux_sym__repository_start_token1] = ACTIONS(809),
    [aux_sym__repository_start_token4] = ACTIONS(809),
    [aux_sym__repository_start_token6] = ACTIONS(809),
    [aux_sym__repository_start_token8] = ACTIONS(809),
    [aux_sym__repository_start_token10] = ACTIONS(809),
    [aux_sym__repository_start_token12] = ACTIONS(809),
    [aux_sym__repository_start_token14] = ACTIONS(809),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [anon_sym_DOLLAR] = ACTIONS(813),
    [aux_sym_platform_token1] = ACTIONS(815),
    [aux_sym__repository_start_token1] = ACTIONS(813),
    [aux_sym__repository_start_token4] = ACTIONS(813),
    [aux_sym__repository_start_token6] = ACTIONS(813),
    [aux_sym__repository_start_token8] = ACTIONS(813),
    [aux_sym__repository_start_token10] = ACTIONS(813),
    [aux_sym__repository_start_token12] = ACTIONS(813),
    [aux_sym__repository_start_token14] = ACTIONS(813),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_DOLLAR] = ACTIONS(817),
    [aux_sym_platform_token1] = ACTIONS(819),
    [aux_sym__repository_start_token1] = ACTIONS(817),
    [aux_sym__repository_start_token4] = ACTIONS(817),
    [aux_sym__repository_start_token6] = ACTIONS(817),
    [aux_sym__repository_start_token8] = ACTIONS(817),
    [aux_sym__repository_start_token10] = ACTIONS(817),
    [aux_sym__repository_start_token12] = ACTIONS(817),
    [aux_sym__repository_start_token14] = ACTIONS(817),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
    [sym__port] = STATE(416),
    [sym_port] = STATE(416),
    [sym_port_range] = STATE(416),
    [sym__port_part] = STATE(328),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym__port_part_token1] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [sym__port] = STATE(119),
    [sym_port] = STATE(119),
    [sym_port_range] = STATE(119),
    [sym__port_part] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(821),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym__port] = STATE(198),
    [sym_port] = STATE(198),
    [sym_port_range] = STATE(198),
    [sym__port_part] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(821),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_chown] = STATE(427),
    [sym_user_name] = STATE(374),
    [sym_user_id] = STATE(382),
    [anon_sym_DOLLAR] = ACTIONS(823),
    [aux_sym_user_name_token1] = ACTIONS(825),
    [aux_sym_user_id_token1] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [aux_sym__repository_start_repeat1] = STATE(261),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [anon_sym_SLASH] = ACTIONS(154),
    [aux_sym__repository_start_token2] = ACTIONS(829),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
    [sym_variable_default_value] = STATE(500),
    [sym_variable_this_or_null] = STATE(500),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [sym_variable_default_value] = STATE(481),
    [sym_variable_this_or_null] = STATE(481),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [264] = {
    [aux_sym_cmd_token1] = ACTIONS(840),
    [anon_sym_DASH_DASHinterval] = ACTIONS(840),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(840),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(840),
    [anon_sym_DASH_DASHretires] = ACTIONS(840),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [sym_variable_default_value] = STATE(475),
    [sym_variable_this_or_null] = STATE(475),
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
    [aux_sym_cmd_token1] = ACTIONS(844),
    [anon_sym_DASH_DASHinterval] = ACTIONS(844),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(844),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(844),
    [anon_sym_DASH_DASHretires] = ACTIONS(844),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
    [aux_sym_cmd_token1] = ACTIONS(846),
    [anon_sym_DASH_DASHinterval] = ACTIONS(846),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(846),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(846),
    [anon_sym_DASH_DASHretires] = ACTIONS(846),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [268] = {
    [sym_template_expr_less_than_equals] = STATE(423),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [aux_sym__repository_start_repeat1] = STATE(274),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [anon_sym_SLASH] = ACTIONS(852),
    [aux_sym__repository_start_token2] = ACTIONS(850),
    [aux_sym__repository_start_token3] = ACTIONS(854),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [aux_sym_cmd_token1] = ACTIONS(856),
    [anon_sym_DASH_DASHinterval] = ACTIONS(856),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(856),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(856),
    [anon_sym_DASH_DASHretires] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [sym_template_expr_less_than_equals] = STATE(490),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [sym_template_expr_less_than_equals] = STATE(509),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(273),
    [aux_sym__repository_start_token13] = ACTIONS(858),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(860),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(860),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(860),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [aux_sym__repository_start_repeat1] = STATE(261),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [anon_sym_SLASH] = ACTIONS(863),
    [aux_sym__repository_start_token2] = ACTIONS(850),
    [aux_sym__repository_start_token3] = ACTIONS(865),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [aux_sym__repository_start_repeat2] = STATE(307),
    [anon_sym_SLASH] = ACTIONS(863),
    [aux_sym__repository_start_token3] = ACTIONS(865),
    [aux_sym__repository_start_token4] = ACTIONS(867),
    [aux_sym__repository_start_token7] = ACTIONS(867),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [aux_sym__repository_start_repeat3] = STATE(306),
    [anon_sym_SLASH] = ACTIONS(863),
    [aux_sym__repository_start_token3] = ACTIONS(865),
    [aux_sym__repository_start_token8] = ACTIONS(869),
    [aux_sym__repository_start_token11] = ACTIONS(869),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [277] = {
    [aux_sym__repository_start_repeat4] = STATE(305),
    [anon_sym_SLASH] = ACTIONS(863),
    [aux_sym__repository_start_token3] = ACTIONS(865),
    [aux_sym__repository_start_token12] = ACTIONS(871),
    [aux_sym__repository_start_token15] = ACTIONS(871),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [sym_port] = STATE(439),
    [sym_port_range] = STATE(439),
    [sym__port_part] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym__port_part_token1] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym_template_expr_less_than_equals] = STATE(442),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [280] = {
    [sym_template_expr_less_than_equals] = STATE(484),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [281] = {
    [aux_sym_cmd_token1] = ACTIONS(873),
    [anon_sym_DASH_DASHinterval] = ACTIONS(873),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(873),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(873),
    [anon_sym_DASH_DASHretires] = ACTIONS(873),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [aux_sym_cmd_token1] = ACTIONS(875),
    [anon_sym_DASH_DASHinterval] = ACTIONS(875),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(875),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(875),
    [anon_sym_DASH_DASHretires] = ACTIONS(875),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym_template_expr_less_than_equals] = STATE(478),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [sym_port] = STATE(472),
    [sym_port_range] = STATE(472),
    [sym__port_part] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym__port_part_token1] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [sym_variable_default_value] = STATE(498),
    [sym_variable_this_or_null] = STATE(498),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym_variable_default_value] = STATE(496),
    [sym_variable_this_or_null] = STATE(496),
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym_variable_default_value] = STATE(493),
    [sym_variable_this_or_null] = STATE(493),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_variable_default_value] = STATE(494),
    [sym_variable_this_or_null] = STATE(494),
    [anon_sym_RBRACE] = ACTIONS(883),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [aux_sym__repository_start_repeat4] = STATE(289),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token12] = ACTIONS(885),
    [aux_sym__repository_start_token15] = ACTIONS(885),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [290] = {
    [aux_sym__repository_start_repeat3] = STATE(290),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token8] = ACTIONS(888),
    [aux_sym__repository_start_token11] = ACTIONS(888),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [aux_sym__repository_start_repeat2] = STATE(291),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token4] = ACTIONS(891),
    [aux_sym__repository_start_token7] = ACTIONS(891),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(273),
    [aux_sym__repository_start_token13] = ACTIONS(894),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(896),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(896),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(896),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [sym_template_expr_less_than_equals] = STATE(435),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [aux_sym_cmd_token1] = ACTIONS(898),
    [anon_sym_DASH_DASHinterval] = ACTIONS(898),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(898),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(898),
    [anon_sym_DASH_DASHretires] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [aux_sym_cmd_token1] = ACTIONS(900),
    [anon_sym_DASH_DASHinterval] = ACTIONS(900),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(900),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(900),
    [anon_sym_DASH_DASHretires] = ACTIONS(900),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [sym_port_protocol] = STATE(346),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_template_expr_less_than_equals] = STATE(466),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [sym__chown] = STATE(380),
    [aux_sym__paths] = STATE(136),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(904),
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(906),
  },
  [299] = {
    [sym_user_name] = STATE(153),
    [sym_user_id] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(908),
    [aux_sym_user_name_token1] = ACTIONS(910),
    [aux_sym_user_id_token1] = ACTIONS(912),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [sym_port_protocol] = STATE(335),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [sym_template_expr_less_than_equals] = STATE(480),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [sym_variable_default_value] = STATE(492),
    [sym_variable_this_or_null] = STATE(492),
    [anon_sym_RBRACE] = ACTIONS(914),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [sym_template_expr_less_than_equals] = STATE(456),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(292),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(848),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [sym_hc_command] = STATE(183),
    [aux_sym__anything] = STATE(131),
    [sym__anything_or_json_array] = STATE(180),
    [aux_sym__anything_token1] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(916),
  },
  [305] = {
    [aux_sym__repository_start_repeat4] = STATE(289),
    [anon_sym_SLASH] = ACTIONS(918),
    [aux_sym__repository_start_token3] = ACTIONS(920),
    [aux_sym__repository_start_token12] = ACTIONS(871),
    [aux_sym__repository_start_token15] = ACTIONS(871),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [aux_sym__repository_start_repeat3] = STATE(290),
    [anon_sym_SLASH] = ACTIONS(918),
    [aux_sym__repository_start_token3] = ACTIONS(920),
    [aux_sym__repository_start_token8] = ACTIONS(869),
    [aux_sym__repository_start_token11] = ACTIONS(869),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym__repository_start_repeat2] = STATE(291),
    [anon_sym_SLASH] = ACTIONS(918),
    [aux_sym__repository_start_token3] = ACTIONS(920),
    [aux_sym__repository_start_token4] = ACTIONS(867),
    [aux_sym__repository_start_token7] = ACTIONS(867),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [sym_variable_default_value] = STATE(487),
    [sym_variable_this_or_null] = STATE(487),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_COLON_DASH] = ACTIONS(834),
    [anon_sym_COLON_PLUS] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [anon_sym_DOLLAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [aux_sym__repository_start_token2] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [310] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [311] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [sym_env_value] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(924),
    [aux_sym_env_value_token1] = ACTIONS(926),
    [aux_sym_env_value_token2] = ACTIONS(926),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_label_value] = STATE(144),
    [anon_sym_DQUOTE] = ACTIONS(928),
    [aux_sym_env_value_token1] = ACTIONS(930),
    [aux_sym_label_value_token1] = ACTIONS(930),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [aux_sym__anything] = STATE(131),
    [sym__anything_or_json_array] = STATE(189),
    [aux_sym__anything_token1] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(932),
  },
  [318] = {
    [aux_sym__labels] = STATE(82),
    [sym_label_pair] = STATE(82),
    [sym_label_key] = STATE(421),
    [aux_sym_env_key_token1] = ACTIONS(334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym__env_pairs] = STATE(90),
    [sym_env_pair] = STATE(90),
    [sym_env_key] = STATE(108),
    [aux_sym_env_key_token1] = ACTIONS(356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [aux_sym__anything] = STATE(131),
    [sym__anything_or_json_array] = STATE(193),
    [aux_sym__anything_token1] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(934),
  },
  [322] = {
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token12] = ACTIONS(187),
    [aux_sym__repository_start_token15] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [aux_sym__anything] = STATE(131),
    [sym__anything_or_json_array] = STATE(176),
    [aux_sym__anything_token1] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(936),
  },
  [326] = {
    [sym_docker_variable] = STATE(70),
    [anon_sym_LBRACE] = ACTIONS(938),
    [sym__docker_variable] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [sym__port_part] = STATE(80),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [anon_sym_DOLLAR] = ACTIONS(944),
    [aux_sym_workdir_token2] = ACTIONS(946),
    [aux_sym_workdir_token3] = ACTIONS(944),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [aux_sym__paths] = STATE(126),
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(948),
  },
  [331] = {
    [sym_docker_variable] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(950),
    [sym__docker_variable] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [sym_docker_variable] = STATE(241),
    [anon_sym_LBRACE] = ACTIONS(954),
    [sym__docker_variable] = ACTIONS(956),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [aux_sym_env_value_repeat1] = STATE(333),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [aux_sym_env_value_token3] = ACTIONS(960),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [sym_docker_variable] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [aux_sym_env_value_repeat1] = STATE(333),
    [anon_sym_DQUOTE] = ACTIONS(967),
    [aux_sym_env_value_token3] = ACTIONS(969),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [aux_sym_env_value_repeat1] = STATE(333),
    [anon_sym_DQUOTE] = ACTIONS(971),
    [aux_sym_env_value_token3] = ACTIONS(969),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(938),
    [sym__docker_variable] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [sym_docker_variable] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(973),
    [sym__docker_variable] = ACTIONS(975),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [sym_docker_variable] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(977),
    [sym__docker_variable] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [341] = {
    [aux_sym__paths] = STATE(128),
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(981),
  },
  [342] = {
    [sym_docker_variable] = STATE(309),
    [anon_sym_LBRACE] = ACTIONS(983),
    [sym__docker_variable] = ACTIONS(985),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [sym_docker_variable] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(973),
    [sym__docker_variable] = ACTIONS(975),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [sym_docker_variable] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(938),
    [sym__docker_variable] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [sym_docker_variable] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(983),
    [sym__docker_variable] = ACTIONS(985),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_DOLLAR] = ACTIONS(987),
    [aux_sym_port_protocol_token1] = ACTIONS(989),
    [aux_sym_port_protocol_token2] = ACTIONS(989),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [sym_platform] = STATE(208),
    [anon_sym_DOLLAR] = ACTIONS(991),
    [aux_sym_platform_token1] = ACTIONS(993),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [350] = {
    [sym_docker_variable] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(938),
    [sym__docker_variable] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [351] = {
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_signal_name] = STATE(194),
    [sym_signal_num] = ACTIONS(995),
    [aux_sym_signal_name_token1] = ACTIONS(997),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [sym_docker_variable] = STATE(351),
    [anon_sym_LBRACE] = ACTIONS(999),
    [sym__docker_variable] = ACTIONS(1001),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [355] = {
    [sym_docker_variable] = STATE(428),
    [anon_sym_LBRACE] = ACTIONS(1003),
    [sym__docker_variable] = ACTIONS(1005),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [sym__port_part] = STATE(371),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym__port_part_token1] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [sym_docker_variable] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(999),
    [sym__docker_variable] = ACTIONS(1001),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [358] = {
    [anon_sym_DOLLAR] = ACTIONS(1007),
    [aux_sym_port_protocol_token1] = ACTIONS(1009),
    [aux_sym_port_protocol_token2] = ACTIONS(1009),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [sym_docker_variable] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(977),
    [sym__docker_variable] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [sym_docker_variable] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [361] = {
    [sym_docker_variable] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(950),
    [sym__docker_variable] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [362] = {
    [sym_user_group] = STATE(499),
    [aux_sym_user_name_token1] = ACTIONS(1011),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [aux_sym_env_value_repeat1] = STATE(337),
    [aux_sym_env_value_token3] = ACTIONS(1013),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [364] = {
    [aux_sym_env_value_repeat1] = STATE(336),
    [aux_sym_env_value_token3] = ACTIONS(1015),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [sym_user_group_id] = STATE(499),
    [aux_sym_user_id_token1] = ACTIONS(1017),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [sym_user_group_id] = STATE(200),
    [aux_sym_user_id_token1] = ACTIONS(1019),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [sym_user_group] = STATE(200),
    [aux_sym_user_name_token1] = ACTIONS(1021),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [aux_sym__anything] = STATE(124),
    [aux_sym__anything_token1] = ACTIONS(1023),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [sym_hc_retries] = STATE(270),
    [aux_sym__port_part_token1] = ACTIONS(1025),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [sym_hc_start_period] = STATE(266),
    [aux_sym_hc_interval_token1] = ACTIONS(1027),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [anon_sym_DQUOTE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [sym_hc_timeout] = STATE(294),
    [aux_sym_hc_interval_token1] = ACTIONS(1029),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [sym_hc_interval] = STATE(282),
    [aux_sym_hc_interval_token1] = ACTIONS(1031),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [anon_sym_COLON] = ACTIONS(1033),
    [sym_path] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DQUOTE] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [anon_sym_COLON] = ACTIONS(544),
    [sym_path] = ACTIONS(1037),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [anon_sym_COLON] = ACTIONS(546),
    [sym_path] = ACTIONS(1039),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_DQUOTE] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(1041),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [anon_sym_DQUOTE] = ACTIONS(1043),
    [anon_sym_COLON] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [aux_sym__paths] = STATE(137),
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [aux_sym__anything] = STATE(107),
    [aux_sym__anything_token1] = ACTIONS(1048),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [anon_sym_COLON] = ACTIONS(1050),
    [sym_path] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(1052),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1054),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1056),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [sym_template_expr_percent_signs] = ACTIONS(1058),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [sym_template_expr_curly_braces] = ACTIONS(1060),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [388] = {
    [aux_sym_from_token2] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1064),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [anon_sym_DQUOTE] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [aux_sym_from_token2] = ACTIONS(1068),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1070),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym__docker_variable] = ACTIONS(1072),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [anon_sym_SLASH] = ACTIONS(1074),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1076),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1078),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [aux_sym_from_token2] = ACTIONS(1080),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [aux_sym__repository_start_token5] = ACTIONS(1082),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1084),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [aux_sym__repository_start_token9] = ACTIONS(1086),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym_template_expr_percent_signs] = ACTIONS(1088),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [402] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1090),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym_template_expr_curly_braces] = ACTIONS(1092),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [404] = {
    [anon_sym_EQ] = ACTIONS(1094),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [aux_sym_from_token2] = ACTIONS(1096),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_template_expr_curly_braces] = ACTIONS(1098),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [407] = {
    [sym_template_expr_percent_signs] = ACTIONS(1100),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [408] = {
    [anon_sym_SLASH] = ACTIONS(1102),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [sym_template_expr_curly_braces] = ACTIONS(1104),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [410] = {
    [sym_template_expr_percent_signs] = ACTIONS(1106),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [411] = {
    [aux_sym_from_token2] = ACTIONS(1108),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1110),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_EQ] = ACTIONS(1112),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [anon_sym_EQ] = ACTIONS(1114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_EQ] = ACTIONS(1116),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_path] = ACTIONS(1118),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_path] = ACTIONS(1120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [aux_sym_label_pair_token1] = ACTIONS(1122),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [aux_sym_label_pair_token1] = ACTIONS(1124),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1126),
  },
  [423] = {
    [aux_sym__repository_start_token13] = ACTIONS(1128),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym_signal_name_token2] = ACTIONS(1130),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [aux_sym_from_token2] = ACTIONS(1132),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [aux_sym__repository_start_token9] = ACTIONS(1134),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [sym_path] = ACTIONS(1136),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym_path] = ACTIONS(1138),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [aux_sym__repository_start_token5] = ACTIONS(1140),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym_arg_name] = ACTIONS(1142),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1144),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [ts_builtin_sym_end] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1148),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1150),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [aux_sym__repository_start_token13] = ACTIONS(1152),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [aux_sym_from_token2] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1156),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym_arg_default] = ACTIONS(1158),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [439] = {
    [anon_sym_DQUOTE] = ACTIONS(1160),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_RBRACE] = ACTIONS(1162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [aux_sym__repository_start_token9] = ACTIONS(1164),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [aux_sym__repository_start_token13] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [aux_sym__repository_start_token9] = ACTIONS(1168),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym_path] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym_path] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1170),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [sym_path] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1174),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym__repository_start_token5] = ACTIONS(1176),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1178),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1180),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1182),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [aux_sym__repository_start_token5] = ACTIONS(1186),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [aux_sym__repository_start_token13] = ACTIONS(1188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [aux_sym__repository_start_token9] = ACTIONS(1190),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [aux_sym__repository_start_token5] = ACTIONS(1192),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [anon_sym_SLASH] = ACTIONS(863),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1194),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1196),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1198),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1200),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [aux_sym__repository_start_token5] = ACTIONS(1202),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [aux_sym__repository_start_token9] = ACTIONS(1204),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [aux_sym__repository_start_token13] = ACTIONS(1206),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1208),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1210),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1212),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [aux_sym_from_token2] = ACTIONS(1214),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [aux_sym__repository_start_token5] = ACTIONS(1216),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_DQUOTE] = ACTIONS(1218),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym_template_expr_percent_signs] = ACTIONS(1220),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [474] = {
    [aux_sym__repository_start_token9] = ACTIONS(1222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_RBRACE] = ACTIONS(1224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym__repository_start_token5] = ACTIONS(1226),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym__repository_start_token9] = ACTIONS(1228),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym__repository_start_token13] = ACTIONS(1230),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [sym_template_expr_curly_braces] = ACTIONS(1232),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [480] = {
    [aux_sym__repository_start_token13] = ACTIONS(1234),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_RBRACE] = ACTIONS(1236),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [aux_sym__repository_start_token5] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [aux_sym__repository_start_token9] = ACTIONS(1240),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [aux_sym__repository_start_token13] = ACTIONS(1242),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [sym_template_expr_curly_braces] = ACTIONS(1244),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [486] = {
    [aux_sym_from_token2] = ACTIONS(1246),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_RBRACE] = ACTIONS(1248),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [aux_sym__repository_start_token5] = ACTIONS(1250),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [aux_sym__repository_start_token9] = ACTIONS(1252),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [aux_sym__repository_start_token13] = ACTIONS(1254),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [sym_template_expr_percent_signs] = ACTIONS(1256),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [492] = {
    [anon_sym_RBRACE] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [anon_sym_RBRACE] = ACTIONS(1260),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_RBRACE] = ACTIONS(1262),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1264),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(1266),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1268),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(1270),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [sym_path] = ACTIONS(1272),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [anon_sym_RBRACE] = ACTIONS(1274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [sym_template_expr_curly_braces] = ACTIONS(1276),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [502] = {
    [sym__docker_variable] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [503] = {
    [sym_template_expr_curly_braces] = ACTIONS(1280),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [504] = {
    [sym_template_expr_percent_signs] = ACTIONS(1282),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [505] = {
    [sym_template_expr_percent_signs] = ACTIONS(1284),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [506] = {
    [sym__docker_variable] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [507] = {
    [sym_template_expr_curly_braces] = ACTIONS(1288),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [508] = {
    [sym_template_expr_percent_signs] = ACTIONS(1290),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [509] = {
    [aux_sym__repository_start_token13] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [sym__docker_variable] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [511] = {
    [sym_template_expr_curly_braces] = ACTIONS(1296),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [512] = {
    [sym_template_expr_percent_signs] = ACTIONS(1298),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [513] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1300),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [sym__docker_variable] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [515] = {
    [sym__docker_variable] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [516] = {
    [sym__docker_variable] = ACTIONS(1306),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [517] = {
    [sym__docker_variable] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [518] = {
    [sym__docker_variable] = ACTIONS(1310),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(396),
  [11] = {.count = 1, .reusable = true}, SHIFT(469),
  [13] = {.count = 1, .reusable = true}, SHIFT(468),
  [15] = {.count = 1, .reusable = true}, SHIFT(467),
  [17] = {.count = 1, .reusable = true}, SHIFT(463),
  [19] = {.count = 1, .reusable = true}, SHIFT(462),
  [21] = {.count = 1, .reusable = true}, SHIFT(461),
  [23] = {.count = 1, .reusable = true}, SHIFT(454),
  [25] = {.count = 1, .reusable = true}, SHIFT(453),
  [27] = {.count = 1, .reusable = true}, SHIFT(452),
  [29] = {.count = 1, .reusable = true}, SHIFT(451),
  [31] = {.count = 1, .reusable = true}, SHIFT(384),
  [33] = {.count = 1, .reusable = true}, SHIFT(449),
  [35] = {.count = 1, .reusable = true}, SHIFT(447),
  [37] = {.count = 1, .reusable = true}, SHIFT(446),
  [39] = {.count = 1, .reusable = true}, SHIFT(437),
  [41] = {.count = 1, .reusable = true}, SHIFT(434),
  [43] = {.count = 1, .reusable = true}, SHIFT(433),
  [45] = {.count = 1, .reusable = true}, SHIFT(192),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(396),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(469),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(468),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(467),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(463),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(462),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(461),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(454),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(453),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(452),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(451),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(384),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(449),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(447),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(446),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(437),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(434),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(433),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(192),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(245),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(348),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(39),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(245),
  [123] = {.count = 1, .reusable = true}, SHIFT(348),
  [125] = {.count = 1, .reusable = true}, SHIFT(39),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(246),
  [133] = {.count = 1, .reusable = false}, SHIFT(69),
  [135] = {.count = 1, .reusable = true}, SHIFT(268),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(268),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [148] = {.count = 1, .reusable = true}, SHIFT(344),
  [150] = {.count = 1, .reusable = true}, SHIFT(249),
  [152] = {.count = 1, .reusable = false}, SHIFT(59),
  [154] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [156] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(344),
  [161] = {.count = 1, .reusable = true}, SHIFT(479),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(479),
  [170] = {.count = 1, .reusable = true}, SHIFT(473),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [176] = {.count = 1, .reusable = true}, SHIFT(244),
  [178] = {.count = 1, .reusable = false}, SHIFT(61),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(473),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [211] = {.count = 1, .reusable = false}, SHIFT(102),
  [213] = {.count = 1, .reusable = true}, SHIFT(504),
  [215] = {.count = 1, .reusable = true}, SHIFT(283),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(347),
  [221] = {.count = 1, .reusable = false}, SHIFT(120),
  [223] = {.count = 1, .reusable = true}, SHIFT(503),
  [225] = {.count = 1, .reusable = true}, SHIFT(361),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(283),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(504),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(503),
  [236] = {.count = 1, .reusable = false}, SHIFT(117),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(361),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [247] = {.count = 1, .reusable = false}, SHIFT(134),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [253] = {.count = 1, .reusable = false}, SHIFT(139),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [259] = {.count = 1, .reusable = false}, SHIFT(133),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [265] = {.count = 1, .reusable = false}, SHIFT(152),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [271] = {.count = 1, .reusable = true}, SHIFT(253),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [277] = {.count = 1, .reusable = true}, SHIFT(327),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [283] = {.count = 1, .reusable = false}, SHIFT(156),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [293] = {.count = 1, .reusable = true}, SHIFT(248),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(143),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(420),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [312] = {.count = 1, .reusable = false}, SHIFT(201),
  [314] = {.count = 1, .reusable = true}, SHIFT(511),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [320] = {.count = 1, .reusable = false}, SHIFT(174),
  [322] = {.count = 1, .reusable = true}, SHIFT(271),
  [324] = {.count = 1, .reusable = true}, SHIFT(512),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [328] = {.count = 1, .reusable = true}, SHIFT(339),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [334] = {.count = 1, .reusable = true}, SHIFT(420),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(271),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(512),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [344] = {.count = 1, .reusable = true}, SHIFT(258),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(511),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(339),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [356] = {.count = 1, .reusable = true}, SHIFT(97),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [362] = {.count = 1, .reusable = true}, SHIFT(340),
  [364] = {.count = 1, .reusable = false}, SHIFT(178),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [370] = {.count = 1, .reusable = false}, SHIFT(188),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs, 2),
  [376] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs, 2),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym__env_pairs, 2), SHIFT_REPEAT(97),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(340),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [392] = {.count = 1, .reusable = false}, SHIFT(181),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(240),
  [402] = {.count = 1, .reusable = true}, SHIFT(215),
  [404] = {.count = 1, .reusable = false}, SHIFT(411),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [408] = {.count = 1, .reusable = true}, SHIFT(227),
  [410] = {.count = 1, .reusable = true}, SHIFT(214),
  [412] = {.count = 1, .reusable = false}, SHIFT(470),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [416] = {.count = 1, .reusable = true}, SHIFT(231),
  [418] = {.count = 1, .reusable = true}, SHIFT(219),
  [420] = {.count = 1, .reusable = false}, SHIFT(436),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [426] = {.count = 1, .reusable = false}, SHIFT(132),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 1),
  [432] = {.count = 1, .reusable = true}, SHIFT(312),
  [434] = {.count = 1, .reusable = false}, SHIFT(381),
  [436] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [440] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [442] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(132),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [449] = {.count = 1, .reusable = true}, SHIFT(238),
  [451] = {.count = 1, .reusable = true}, SHIFT(210),
  [453] = {.count = 1, .reusable = false}, SHIFT(486),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [459] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [461] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [463] = {.count = 1, .reusable = false}, SHIFT(149),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [467] = {.count = 1, .reusable = false}, SHIFT(157),
  [469] = {.count = 1, .reusable = false}, SHIFT(199),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [473] = {.count = 1, .reusable = false}, SHIFT(123),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(157),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [482] = {.count = 1, .reusable = true}, SHIFT(212),
  [484] = {.count = 1, .reusable = false}, SHIFT(425),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [488] = {.count = 1, .reusable = false}, SHIFT(142),
  [490] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [492] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [500] = {.count = 1, .reusable = true}, SHIFT(217),
  [502] = {.count = 1, .reusable = false}, SHIFT(397),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 4),
  [508] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(142),
  [511] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [513] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(123),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [526] = {.count = 1, .reusable = false}, SHIFT(391),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [532] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [536] = {.count = 1, .reusable = false}, SHIFT(405),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [540] = {.count = 1, .reusable = true}, SHIFT(366),
  [542] = {.count = 1, .reusable = true}, SHIFT(367),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [562] = {.count = 1, .reusable = false}, SHIFT(388),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 3),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [574] = {.count = 1, .reusable = true}, SHIFT(438),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [610] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 4),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [630] = {.count = 1, .reusable = true}, SHIFT(349),
  [632] = {.count = 1, .reusable = true}, SHIFT(350),
  [634] = {.count = 1, .reusable = false}, SHIFT(67),
  [636] = {.count = 1, .reusable = true}, SHIFT(387),
  [638] = {.count = 1, .reusable = true}, SHIFT(386),
  [640] = {.count = 1, .reusable = true}, SHIFT(272),
  [642] = {.count = 1, .reusable = true}, SHIFT(385),
  [644] = {.count = 1, .reusable = true}, SHIFT(171),
  [646] = {.count = 1, .reusable = true}, SHIFT(404),
  [648] = {.count = 1, .reusable = true}, SHIFT(414),
  [650] = {.count = 1, .reusable = true}, SHIFT(415),
  [652] = {.count = 1, .reusable = true}, SHIFT(417),
  [654] = {.count = 1, .reusable = true}, SHIFT(259),
  [656] = {.count = 1, .reusable = true}, SHIFT(233),
  [658] = {.count = 1, .reusable = true}, SHIFT(326),
  [660] = {.count = 1, .reusable = false}, SHIFT(148),
  [662] = {.count = 1, .reusable = true}, SHIFT(501),
  [664] = {.count = 1, .reusable = true}, SHIFT(505),
  [666] = {.count = 1, .reusable = true}, SHIFT(279),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(345),
  [671] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(408),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(409),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(410),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(301),
  [683] = {.count = 1, .reusable = true}, SHIFT(222),
  [685] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(404),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(414),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(415),
  [696] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(417),
  [699] = {.count = 1, .reusable = true}, SHIFT(232),
  [701] = {.count = 1, .reusable = true}, SHIFT(221),
  [703] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(345),
  [706] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(408),
  [709] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(409),
  [712] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(410),
  [715] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(301),
  [718] = {.count = 1, .reusable = true}, SHIFT(224),
  [720] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(345),
  [723] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(408),
  [726] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(409),
  [729] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(410),
  [732] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(301),
  [735] = {.count = 1, .reusable = true}, SHIFT(239),
  [737] = {.count = 1, .reusable = true}, SHIFT(343),
  [739] = {.count = 1, .reusable = false}, SHIFT(177),
  [741] = {.count = 1, .reusable = true}, SHIFT(403),
  [743] = {.count = 1, .reusable = true}, SHIFT(401),
  [745] = {.count = 1, .reusable = true}, SHIFT(293),
  [747] = {.count = 1, .reusable = true}, SHIFT(331),
  [749] = {.count = 1, .reusable = false}, SHIFT(115),
  [751] = {.count = 1, .reusable = true}, SHIFT(406),
  [753] = {.count = 1, .reusable = true}, SHIFT(407),
  [755] = {.count = 1, .reusable = true}, SHIFT(297),
  [757] = {.count = 1, .reusable = true}, SHIFT(338),
  [759] = {.count = 1, .reusable = false}, SHIFT(122),
  [761] = {.count = 1, .reusable = true}, SHIFT(485),
  [763] = {.count = 1, .reusable = true}, SHIFT(491),
  [765] = {.count = 1, .reusable = true}, SHIFT(303),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [781] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [783] = {.count = 1, .reusable = true}, SHIFT(278),
  [785] = {.count = 1, .reusable = true}, SHIFT(357),
  [787] = {.count = 1, .reusable = true}, SHIFT(296),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [799] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [803] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [807] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [821] = {.count = 1, .reusable = true}, SHIFT(284),
  [823] = {.count = 1, .reusable = true}, SHIFT(355),
  [825] = {.count = 1, .reusable = true}, SHIFT(377),
  [827] = {.count = 1, .reusable = true}, SHIFT(376),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(342),
  [832] = {.count = 1, .reusable = true}, SHIFT(99),
  [834] = {.count = 1, .reusable = true}, SHIFT(497),
  [836] = {.count = 1, .reusable = true}, SHIFT(495),
  [838] = {.count = 1, .reusable = true}, SHIFT(113),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [842] = {.count = 1, .reusable = true}, SHIFT(23),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [848] = {.count = 1, .reusable = true}, SHIFT(292),
  [850] = {.count = 1, .reusable = true}, SHIFT(342),
  [852] = {.count = 1, .reusable = true}, SHIFT(251),
  [854] = {.count = 1, .reusable = false}, SHIFT(459),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [858] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [860] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(273),
  [863] = {.count = 1, .reusable = true}, SHIFT(243),
  [865] = {.count = 1, .reusable = false}, SHIFT(413),
  [867] = {.count = 1, .reusable = true}, SHIFT(507),
  [869] = {.count = 1, .reusable = true}, SHIFT(508),
  [871] = {.count = 1, .reusable = true}, SHIFT(280),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [877] = {.count = 1, .reusable = true}, SHIFT(311),
  [879] = {.count = 1, .reusable = true}, SHIFT(46),
  [881] = {.count = 1, .reusable = true}, SHIFT(54),
  [883] = {.count = 1, .reusable = true}, SHIFT(250),
  [885] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(280),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(508),
  [891] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(507),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [896] = {.count = 1, .reusable = true}, SHIFT(273),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [902] = {.count = 1, .reusable = true}, SHIFT(358),
  [904] = {.count = 1, .reusable = true}, SHIFT(260),
  [906] = {.count = 1, .reusable = true}, SHIFT(173),
  [908] = {.count = 1, .reusable = true}, SHIFT(360),
  [910] = {.count = 1, .reusable = true}, SHIFT(155),
  [912] = {.count = 1, .reusable = true}, SHIFT(154),
  [914] = {.count = 1, .reusable = true}, SHIFT(316),
  [916] = {.count = 1, .reusable = true}, SHIFT(180),
  [918] = {.count = 1, .reusable = true}, SHIFT(256),
  [920] = {.count = 1, .reusable = false}, SHIFT(394),
  [922] = {.count = 1, .reusable = true}, SHIFT(445),
  [924] = {.count = 1, .reusable = false}, SHIFT(364),
  [926] = {.count = 1, .reusable = true}, SHIFT(159),
  [928] = {.count = 1, .reusable = false}, SHIFT(363),
  [930] = {.count = 1, .reusable = true}, SHIFT(145),
  [932] = {.count = 1, .reusable = true}, SHIFT(189),
  [934] = {.count = 1, .reusable = true}, SHIFT(193),
  [936] = {.count = 1, .reusable = true}, SHIFT(176),
  [938] = {.count = 1, .reusable = true}, SHIFT(502),
  [940] = {.count = 1, .reusable = true}, SHIFT(24),
  [942] = {.count = 1, .reusable = true}, SHIFT(356),
  [944] = {.count = 1, .reusable = true}, SHIFT(359),
  [946] = {.count = 1, .reusable = false}, SHIFT(191),
  [948] = {.count = 1, .reusable = true}, SHIFT(182),
  [950] = {.count = 1, .reusable = true}, SHIFT(516),
  [952] = {.count = 1, .reusable = true}, SHIFT(44),
  [954] = {.count = 1, .reusable = true}, SHIFT(515),
  [956] = {.count = 1, .reusable = true}, SHIFT(252),
  [958] = {.count = 1, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2),
  [960] = {.count = 2, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2), SHIFT_REPEAT(333),
  [963] = {.count = 1, .reusable = true}, SHIFT(393),
  [965] = {.count = 1, .reusable = true}, SHIFT(55),
  [967] = {.count = 1, .reusable = true}, SHIFT(162),
  [969] = {.count = 1, .reusable = true}, SHIFT(333),
  [971] = {.count = 1, .reusable = true}, SHIFT(164),
  [973] = {.count = 1, .reusable = true}, SHIFT(518),
  [975] = {.count = 1, .reusable = true}, SHIFT(100),
  [977] = {.count = 1, .reusable = true}, SHIFT(506),
  [979] = {.count = 1, .reusable = true}, SHIFT(114),
  [981] = {.count = 1, .reusable = true}, SHIFT(202),
  [983] = {.count = 1, .reusable = true}, SHIFT(517),
  [985] = {.count = 1, .reusable = true}, SHIFT(313),
  [987] = {.count = 1, .reusable = true}, SHIFT(334),
  [989] = {.count = 1, .reusable = true}, SHIFT(66),
  [991] = {.count = 1, .reusable = true}, SHIFT(332),
  [993] = {.count = 1, .reusable = true}, SHIFT(255),
  [995] = {.count = 1, .reusable = true}, SHIFT(194),
  [997] = {.count = 1, .reusable = true}, SHIFT(424),
  [999] = {.count = 1, .reusable = true}, SHIFT(514),
  [1001] = {.count = 1, .reusable = true}, SHIFT(319),
  [1003] = {.count = 1, .reusable = true}, SHIFT(510),
  [1005] = {.count = 1, .reusable = true}, SHIFT(444),
  [1007] = {.count = 1, .reusable = true}, SHIFT(354),
  [1009] = {.count = 1, .reusable = true}, SHIFT(353),
  [1011] = {.count = 1, .reusable = true}, SHIFT(418),
  [1013] = {.count = 1, .reusable = true}, SHIFT(337),
  [1015] = {.count = 1, .reusable = true}, SHIFT(336),
  [1017] = {.count = 1, .reusable = true}, SHIFT(419),
  [1019] = {.count = 1, .reusable = true}, SHIFT(184),
  [1021] = {.count = 1, .reusable = true}, SHIFT(172),
  [1023] = {.count = 1, .reusable = true}, SHIFT(157),
  [1025] = {.count = 1, .reusable = true}, SHIFT(267),
  [1027] = {.count = 1, .reusable = true}, SHIFT(264),
  [1029] = {.count = 1, .reusable = true}, SHIFT(295),
  [1031] = {.count = 1, .reusable = true}, SHIFT(281),
  [1033] = {.count = 1, .reusable = true}, SHIFT(362),
  [1035] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 1),
  [1037] = {.count = 1, .reusable = false}, REDUCE(sym_user_id, 1),
  [1039] = {.count = 1, .reusable = false}, REDUCE(sym_user_name, 1),
  [1041] = {.count = 1, .reusable = true}, SHIFT(257),
  [1043] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(93),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1048] = {.count = 1, .reusable = true}, SHIFT(132),
  [1050] = {.count = 1, .reusable = true}, SHIFT(365),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1054] = {.count = 1, .reusable = true}, SHIFT(4),
  [1056] = {.count = 1, .reusable = true}, SHIFT(304),
  [1058] = {.count = 1, .reusable = true}, SHIFT(400),
  [1060] = {.count = 1, .reusable = true}, SHIFT(398),
  [1062] = {.count = 1, .reusable = true}, SHIFT(392),
  [1064] = {.count = 1, .reusable = true}, SHIFT(230),
  [1066] = {.count = 1, .reusable = true}, SHIFT(116),
  [1068] = {.count = 1, .reusable = true}, SHIFT(395),
  [1070] = {.count = 1, .reusable = true}, SHIFT(235),
  [1072] = {.count = 1, .reusable = true}, SHIFT(287),
  [1074] = {.count = 1, .reusable = true}, SHIFT(242),
  [1076] = {.count = 1, .reusable = true}, SHIFT(237),
  [1078] = {.count = 1, .reusable = true}, SHIFT(330),
  [1080] = {.count = 1, .reusable = true}, SHIFT(402),
  [1082] = {.count = 1, .reusable = true}, SHIFT(12),
  [1084] = {.count = 1, .reusable = true}, SHIFT(225),
  [1086] = {.count = 1, .reusable = true}, SHIFT(14),
  [1088] = {.count = 1, .reusable = true}, SHIFT(441),
  [1090] = {.count = 1, .reusable = true}, SHIFT(228),
  [1092] = {.count = 1, .reusable = true}, SHIFT(450),
  [1094] = {.count = 1, .reusable = true}, SHIFT(373),
  [1096] = {.count = 1, .reusable = true}, SHIFT(389),
  [1098] = {.count = 1, .reusable = true}, SHIFT(464),
  [1100] = {.count = 1, .reusable = true}, SHIFT(465),
  [1102] = {.count = 1, .reusable = true}, SHIFT(254),
  [1104] = {.count = 1, .reusable = true}, SHIFT(471),
  [1106] = {.count = 1, .reusable = true}, SHIFT(474),
  [1108] = {.count = 1, .reusable = true}, SHIFT(513),
  [1110] = {.count = 1, .reusable = true}, SHIFT(220),
  [1112] = {.count = 1, .reusable = true}, SHIFT(372),
  [1114] = {.count = 1, .reusable = true}, SHIFT(370),
  [1116] = {.count = 1, .reusable = true}, SHIFT(369),
  [1118] = {.count = 1, .reusable = false}, REDUCE(sym_user_group, 1),
  [1120] = {.count = 1, .reusable = false}, REDUCE(sym_user_group_id, 1),
  [1122] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1124] = {.count = 1, .reusable = true}, SHIFT(315),
  [1126] = {.count = 1, .reusable = true}, SHIFT(167),
  [1128] = {.count = 1, .reusable = true}, SHIFT(19),
  [1130] = {.count = 1, .reusable = true}, SHIFT(197),
  [1132] = {.count = 1, .reusable = true}, SHIFT(412),
  [1134] = {.count = 1, .reusable = true}, SHIFT(21),
  [1136] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 2),
  [1138] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 2),
  [1140] = {.count = 1, .reusable = true}, SHIFT(20),
  [1142] = {.count = 1, .reusable = true}, SHIFT(165),
  [1144] = {.count = 1, .reusable = true}, SHIFT(234),
  [1146] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1148] = {.count = 1, .reusable = true}, SHIFT(329),
  [1150] = {.count = 1, .reusable = true}, SHIFT(341),
  [1152] = {.count = 1, .reusable = true}, SHIFT(77),
  [1154] = {.count = 1, .reusable = true}, SHIFT(399),
  [1156] = {.count = 1, .reusable = true}, SHIFT(299),
  [1158] = {.count = 1, .reusable = true}, SHIFT(170),
  [1160] = {.count = 1, .reusable = true}, SHIFT(375),
  [1162] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1164] = {.count = 1, .reusable = true}, SHIFT(78),
  [1166] = {.count = 1, .reusable = true}, SHIFT(58),
  [1168] = {.count = 1, .reusable = true}, SHIFT(74),
  [1170] = {.count = 1, .reusable = true}, SHIFT(352),
  [1172] = {.count = 1, .reusable = true}, SHIFT(422),
  [1174] = {.count = 1, .reusable = true}, SHIFT(317),
  [1176] = {.count = 1, .reusable = true}, SHIFT(79),
  [1178] = {.count = 1, .reusable = true}, SHIFT(368),
  [1180] = {.count = 1, .reusable = true}, SHIFT(318),
  [1182] = {.count = 1, .reusable = true}, SHIFT(206),
  [1184] = {.count = 1, .reusable = true}, SHIFT(205),
  [1186] = {.count = 1, .reusable = true}, SHIFT(73),
  [1188] = {.count = 1, .reusable = true}, SHIFT(40),
  [1190] = {.count = 1, .reusable = true}, SHIFT(43),
  [1192] = {.count = 1, .reusable = true}, SHIFT(45),
  [1194] = {.count = 1, .reusable = true}, SHIFT(236),
  [1196] = {.count = 1, .reusable = true}, SHIFT(207),
  [1198] = {.count = 1, .reusable = true}, SHIFT(320),
  [1200] = {.count = 1, .reusable = true}, SHIFT(321),
  [1202] = {.count = 1, .reusable = true}, SHIFT(37),
  [1204] = {.count = 1, .reusable = true}, SHIFT(26),
  [1206] = {.count = 1, .reusable = true}, SHIFT(27),
  [1208] = {.count = 1, .reusable = true}, SHIFT(298),
  [1210] = {.count = 1, .reusable = true}, SHIFT(325),
  [1212] = {.count = 1, .reusable = true}, SHIFT(430),
  [1214] = {.count = 1, .reusable = true}, SHIFT(460),
  [1216] = {.count = 1, .reusable = true}, SHIFT(275),
  [1218] = {.count = 1, .reusable = true}, SHIFT(93),
  [1220] = {.count = 1, .reusable = true}, SHIFT(426),
  [1222] = {.count = 1, .reusable = true}, SHIFT(276),
  [1224] = {.count = 1, .reusable = true}, SHIFT(22),
  [1226] = {.count = 1, .reusable = true}, SHIFT(56),
  [1228] = {.count = 1, .reusable = true}, SHIFT(41),
  [1230] = {.count = 1, .reusable = true}, SHIFT(57),
  [1232] = {.count = 1, .reusable = true}, SHIFT(429),
  [1234] = {.count = 1, .reusable = true}, SHIFT(277),
  [1236] = {.count = 1, .reusable = true}, SHIFT(112),
  [1238] = {.count = 1, .reusable = true}, SHIFT(324),
  [1240] = {.count = 1, .reusable = true}, SHIFT(323),
  [1242] = {.count = 1, .reusable = true}, SHIFT(322),
  [1244] = {.count = 1, .reusable = true}, SHIFT(458),
  [1246] = {.count = 1, .reusable = true}, SHIFT(431),
  [1248] = {.count = 1, .reusable = true}, SHIFT(448),
  [1250] = {.count = 1, .reusable = true}, SHIFT(98),
  [1252] = {.count = 1, .reusable = true}, SHIFT(109),
  [1254] = {.count = 1, .reusable = true}, SHIFT(103),
  [1256] = {.count = 1, .reusable = true}, SHIFT(457),
  [1258] = {.count = 1, .reusable = true}, SHIFT(314),
  [1260] = {.count = 1, .reusable = true}, SHIFT(49),
  [1262] = {.count = 1, .reusable = true}, SHIFT(247),
  [1264] = {.count = 1, .reusable = true}, SHIFT(440),
  [1266] = {.count = 1, .reusable = true}, SHIFT(47),
  [1268] = {.count = 1, .reusable = true}, SHIFT(383),
  [1270] = {.count = 1, .reusable = true}, SHIFT(310),
  [1272] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 3),
  [1274] = {.count = 1, .reusable = true}, SHIFT(106),
  [1276] = {.count = 1, .reusable = true}, SHIFT(455),
  [1278] = {.count = 1, .reusable = true}, SHIFT(265),
  [1280] = {.count = 1, .reusable = true}, SHIFT(476),
  [1282] = {.count = 1, .reusable = true}, SHIFT(477),
  [1284] = {.count = 1, .reusable = true}, SHIFT(443),
  [1286] = {.count = 1, .reusable = true}, SHIFT(263),
  [1288] = {.count = 1, .reusable = true}, SHIFT(482),
  [1290] = {.count = 1, .reusable = true}, SHIFT(483),
  [1292] = {.count = 1, .reusable = true}, SHIFT(7),
  [1294] = {.count = 1, .reusable = true}, SHIFT(308),
  [1296] = {.count = 1, .reusable = true}, SHIFT(488),
  [1298] = {.count = 1, .reusable = true}, SHIFT(489),
  [1300] = {.count = 1, .reusable = true}, SHIFT(229),
  [1302] = {.count = 1, .reusable = true}, SHIFT(302),
  [1304] = {.count = 1, .reusable = true}, SHIFT(288),
  [1306] = {.count = 1, .reusable = true}, SHIFT(286),
  [1308] = {.count = 1, .reusable = true}, SHIFT(285),
  [1310] = {.count = 1, .reusable = true}, SHIFT(262),
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
