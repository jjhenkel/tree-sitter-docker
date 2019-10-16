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
#define STATE_COUNT 552
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
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
  aux_sym_path_token1 = 73,
  aux_sym_path_token2 = 74,
  aux_sym_path_token3 = 75,
  aux_sym_path_token4 = 76,
  aux_sym__anything_token1 = 77,
  anon_sym_LBRACE = 78,
  anon_sym_RBRACE = 79,
  anon_sym_COLON_DASH = 80,
  aux_sym_variable_default_value_token1 = 81,
  anon_sym_COLON_PLUS = 82,
  sym__docker_variable = 83,
  sym_template_expr_curly_braces = 84,
  sym_template_expr_percent_signs = 85,
  aux_sym_template_expr_less_than_equals_token1 = 86,
  aux_sym_template_expr_less_than_equals_token2 = 87,
  aux_sym_template_expr_less_than_equals_token3 = 88,
  sym__space = 89,
  sym__blank_line = 90,
  sym__space_no_newline = 91,
  sym_comment = 92,
  sym_line_continuation = 93,
  sym_json_array = 94,
  sym_dockerfile = 95,
  sym__directive = 96,
  sym_add = 97,
  sym_arg = 98,
  sym_cmd = 99,
  sym_copy = 100,
  sym_entrypoint = 101,
  sym_env = 102,
  sym_expose = 103,
  sym_from = 104,
  sym_healthcheck = 105,
  sym_label = 106,
  sym_maintainer = 107,
  sym_onbuild = 108,
  sym_run = 109,
  sym_shell = 110,
  sym_stopsignal = 111,
  sym_user = 112,
  sym_volume = 113,
  sym_workdir = 114,
  sym__chown = 115,
  sym_chown = 116,
  aux_sym__env_pairs = 117,
  sym_env_pair = 118,
  sym_env_key = 119,
  sym_env_value = 120,
  sym__port_spec = 121,
  sym_mapped_port = 122,
  sym_mapped_no_lhs = 123,
  sym__port = 124,
  sym_port = 125,
  sym_port_range = 126,
  sym__port_part = 127,
  sym_port_protocol = 128,
  sym_platform = 129,
  sym_repository = 130,
  sym__repository_start = 131,
  sym__repository_continued = 132,
  sym_image = 133,
  sym_tag = 134,
  sym_digest = 135,
  sym_as_name = 136,
  sym__hc_interval = 137,
  sym_hc_interval = 138,
  sym__hc_timeout = 139,
  sym_hc_timeout = 140,
  sym__hc_start_period = 141,
  sym_hc_start_period = 142,
  sym__hc_retries = 143,
  sym_hc_retries = 144,
  sym__hc_options = 145,
  sym__hc_command = 146,
  sym_hc_command = 147,
  aux_sym__labels = 148,
  sym_label_pair = 149,
  sym_label_key = 150,
  sym_label_value = 151,
  sym_signal_name = 152,
  sym_user_name = 153,
  sym_user_group = 154,
  sym_user_id = 155,
  sym_user_group_id = 156,
  sym_path = 157,
  aux_sym__paths = 158,
  aux_sym__anything = 159,
  sym_docker_variable = 160,
  sym_variable_default_value = 161,
  sym_variable_this_or_null = 162,
  sym_template_expr_less_than_equals = 163,
  sym__anything_or_json_array = 164,
  aux_sym_dockerfile_repeat1 = 165,
  aux_sym_expose_repeat1 = 166,
  aux_sym_healthcheck_repeat1 = 167,
  aux_sym_workdir_repeat1 = 168,
  aux_sym_env_value_repeat1 = 169,
  aux_sym_repository_repeat1 = 170,
  aux_sym__repository_start_repeat1 = 171,
  aux_sym__repository_start_repeat2 = 172,
  aux_sym__repository_start_repeat3 = 173,
  aux_sym__repository_start_repeat4 = 174,
  aux_sym_path_repeat1 = 175,
  aux_sym_template_expr_less_than_equals_repeat1 = 176,
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
  [aux_sym_workdir_repeat1] = "workdir_repeat1",
  [aux_sym_env_value_repeat1] = "env_value_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_path_repeat1] = "path_repeat1",
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
  [aux_sym_path_repeat1] = {
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
          lookahead == ' ') ADVANCE(878);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == '-') ADVANCE(517);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(345);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      if (lookahead == 'U') ADVANCE(359);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(402);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(405);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == '{') ADVANCE(1161);
      if (lookahead == '}') ADVANCE(1162);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      if (lookahead != 0) ADVANCE(1036);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(966);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(997);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1021);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(971);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(954);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(955);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(979);
      if (lookahead == 'U') ADVANCE(1024);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1006);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(1022);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1036);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(966);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(997);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1021);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(971);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(954);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(955);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(979);
      if (lookahead == 'U') ADVANCE(1024);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1006);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(1023);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1036);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(966);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(997);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1021);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(971);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(954);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(955);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(979);
      if (lookahead == 'U') ADVANCE(1024);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1006);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(1023);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(889);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1036);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '/') ADVANCE(519);
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
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(437);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(496);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(482);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(437);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(496);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(482);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '"') ADVANCE(1068);
      if (lookahead == '#') ADVANCE(1183);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(437);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(496);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(482);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1062);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1063);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      if (lookahead != 0) ADVANCE(1069);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '/') ADVANCE(519);
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
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(1187);
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
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(638);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(670);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(672);
      if (lookahead == '\\') ADVANCE(696);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(545);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(638);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(670);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(672);
      if (lookahead == '\\') ADVANCE(696);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(545);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(638);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(670);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(672);
      if (lookahead == '\\') ADVANCE(696);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(546);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(565);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(597);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(599);
      if (lookahead == '\\') ADVANCE(623);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(543);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(565);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(597);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(599);
      if (lookahead == '\\') ADVANCE(623);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(543);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(565);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(597);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(599);
      if (lookahead == '\\') ADVANCE(623);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(544);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(757);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(744);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(757);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(744);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(757);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(744);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(548);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(782);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(831);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(832);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(818);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(820);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead == '{') ADVANCE(845);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(549);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(782);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(831);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(832);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(818);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(820);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead == '{') ADVANCE(845);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(549);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(782);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(831);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(786);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(832);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(818);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(820);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead == '{') ADVANCE(845);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(550);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
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
    case 23:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(1183);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1075);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1073);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1070);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1071);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1077);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1074);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1081);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1078);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1079);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1062);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(1069);
      END_STATE();
    case 24:
      if (lookahead == 0) ADVANCE(208);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(519);
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
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '}') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1083);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1181);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1181);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1183);
      if (lookahead == '[') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0) ADVANCE(1069);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1183);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0) ADVANCE(1069);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1173);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(1172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1173);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1169);
      if (lookahead == '\\') ADVANCE(1168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1169);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1171);
      if (lookahead == '\\') ADVANCE(1170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1171);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(433);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1176);
      if (lookahead == '#') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(1164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1165);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(200);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1083);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == ' ') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(511);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == '#') ADVANCE(1083);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(880);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(201);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1083);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0) ADVANCE(880);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(1065);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '-') ADVANCE(893);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(933);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0) ADVANCE(1036);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(933);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1036);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(933);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0) ADVANCE(1036);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(859);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '}') ADVANCE(1162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(697);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead == '{') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == '{') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(857);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '{') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(1167);
      if (lookahead == '\\') ADVANCE(1167);
      if (lookahead == '{') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1167);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(540);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(1083);
      END_STATE();
    case 68:
      if (lookahead == '+') ADVANCE(1166);
      if (lookahead == '-') ADVANCE(1163);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(866);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(866);
      if (lookahead != 0) ADVANCE(1175);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(866);
      if (lookahead != 0) ADVANCE(1174);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(876);
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
      if (lookahead == 'l') ADVANCE(873);
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
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(875);
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
          lookahead == ' ') ADVANCE(878);
      if (lookahead == '#') ADVANCE(1187);
      if (lookahead == '=') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1176);
      END_STATE();
    case 106:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(865);
      END_STATE();
    case 107:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(870);
      END_STATE();
    case 108:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(868);
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
          lookahead == 'e') ADVANCE(872);
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
          lookahead == 'g') ADVANCE(884);
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
          lookahead == 'p') ADVANCE(521);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(520);
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
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1191);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(1191);
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
          lookahead == 'u') ADVANCE(49);
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
          lookahead == 'u') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1083);
      END_STATE();
    case 204:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1083);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(511);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(880);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(509);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
      if (lookahead == '\n') ADVANCE(1178);
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
      if (lookahead == '$') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(355);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(506);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(486);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(487);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(512);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(900);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '-') ADVANCE(536);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '2') ADVANCE(524);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '5') ADVANCE(525);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '6') ADVANCE(526);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(1185);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(528);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(541);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(539);
      END_STATE();
    case 540:
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
          lookahead != '}') ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(543);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(544);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(545);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(546);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(548);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(549);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(550);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(560);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
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
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(633);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(633);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
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
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 699:
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(708);
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(713);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 730:
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(763);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 747:
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 749:
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 751:
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(756);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 770:
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
          lookahead != '}') ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(778);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(805);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(803);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(840);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(789);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(781);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(790);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(797);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(817);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(780);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(785);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(814);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(815);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(816);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(783);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(841);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(784);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(837);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(826);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(825);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(842);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(833);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(823);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(843);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(819);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(792);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(830);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(811);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(799);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(810);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(771);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(827);
      if (lookahead == '{') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(771);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(844);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(848);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(850);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(856);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(860);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(862);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(867);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretires);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(880);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1187);
      if (lookahead != 0) ADVANCE(888);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(889);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '=') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'a') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'a') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'c') ADVANCE(919);
      if (lookahead == 'i') ADVANCE(930);
      if (lookahead == 'p') ADVANCE(925);
      if (lookahead == 'r') ADVANCE(911);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == 't') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'c') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'f') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'f') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'f') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'h') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'i') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'i') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'i') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'i') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'i') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'l') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'l') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'm') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'm') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'o') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'o') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'o') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'p') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'r') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'r') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 's') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'u') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'v') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'w') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(963);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(972);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(964);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1029);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (lookahead == 'n') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (lookahead == 'n') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1020);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1036);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_path_token3);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '"') ADVANCE(1187);
      if (lookahead != 0) ADVANCE(1039);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(1040);
      if (lookahead == 'u') ADVANCE(1057);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1061);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(1040);
      if (lookahead == 'u') ADVANCE(1060);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '$') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '$') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'd') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'd') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'd') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'd') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'e') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'e') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'f') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'f') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'n') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'n') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'n') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == 'n') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1061);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1064);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(1091);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1064);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(1091);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1064);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1063);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1087);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1066);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1066);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1065);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1183);
      if (lookahead == '\\') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1092);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1097);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1143);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1096);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1127);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1148);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1132);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1086);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1087);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == ',') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1086);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1091);
      if (lookahead == ',') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(1191);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1090);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '#') ADVANCE(1091);
      if (lookahead == ',') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1090);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == ',') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1091);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1090);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1091);
      if (lookahead == ',') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1191);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1067);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1091);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1126);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1091);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1091);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1091);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1155);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1091);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1091);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1091);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1091);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1091);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1091);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1091);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1123);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1091);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1091);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1091);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1091);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1091);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1091);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1112);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1091);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1133);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1091);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1136);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1091);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1146);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1091);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1128);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1091);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1134);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1091);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1091);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1103);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1156);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1091);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1091);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1091);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1154);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1152);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1094);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1091);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1110);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1091);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1130);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1091);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1151);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1091);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1142);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1091);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1120);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1091);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1157);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1091);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1091);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1138);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1091);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1158);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1091);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1115);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1091);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1104);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1091);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1091);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1091);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1091);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1091);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1131);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1091);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1091);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1159:
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
          lookahead != 'v') ADVANCE(1091);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1149);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(846);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1165);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1165);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1167:
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
          lookahead != '}') ADVANCE(1167);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1169);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1169);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1171);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1171);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1173);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1173);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1178);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1180);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1181);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '#') ADVANCE(1067);
      if (lookahead != 0) ADVANCE(1187);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(870);
      if (lookahead != 0) ADVANCE(1187);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(868);
      if (lookahead != 0) ADVANCE(1187);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1187);
      if (lookahead != 0) ADVANCE(879);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead != 0) ADVANCE(1187);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1067);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1187);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(1187);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_json_array);
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
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 22},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 18},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 63},
  [218] = {.lex_state = 24},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 24},
  [222] = {.lex_state = 64},
  [223] = {.lex_state = 63},
  [224] = {.lex_state = 64},
  [225] = {.lex_state = 63},
  [226] = {.lex_state = 64},
  [227] = {.lex_state = 64},
  [228] = {.lex_state = 64},
  [229] = {.lex_state = 24},
  [230] = {.lex_state = 63},
  [231] = {.lex_state = 64},
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
  [245] = {.lex_state = 63},
  [246] = {.lex_state = 63},
  [247] = {.lex_state = 63},
  [248] = {.lex_state = 63},
  [249] = {.lex_state = 63},
  [250] = {.lex_state = 63},
  [251] = {.lex_state = 63},
  [252] = {.lex_state = 63},
  [253] = {.lex_state = 63},
  [254] = {.lex_state = 63},
  [255] = {.lex_state = 24},
  [256] = {.lex_state = 63},
  [257] = {.lex_state = 50},
  [258] = {.lex_state = 63},
  [259] = {.lex_state = 63},
  [260] = {.lex_state = 63},
  [261] = {.lex_state = 63},
  [262] = {.lex_state = 63},
  [263] = {.lex_state = 63},
  [264] = {.lex_state = 63},
  [265] = {.lex_state = 63},
  [266] = {.lex_state = 63},
  [267] = {.lex_state = 63},
  [268] = {.lex_state = 63},
  [269] = {.lex_state = 63},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 52},
  [272] = {.lex_state = 52},
  [273] = {.lex_state = 24},
  [274] = {.lex_state = 24},
  [275] = {.lex_state = 52},
  [276] = {.lex_state = 55},
  [277] = {.lex_state = 51},
  [278] = {.lex_state = 55},
  [279] = {.lex_state = 24},
  [280] = {.lex_state = 55},
  [281] = {.lex_state = 24},
  [282] = {.lex_state = 55},
  [283] = {.lex_state = 31},
  [284] = {.lex_state = 60},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 24},
  [287] = {.lex_state = 55},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 31},
  [290] = {.lex_state = 51},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 60},
  [293] = {.lex_state = 62},
  [294] = {.lex_state = 59},
  [295] = {.lex_state = 61},
  [296] = {.lex_state = 51},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 24},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 31},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 31},
  [304] = {.lex_state = 31},
  [305] = {.lex_state = 1041},
  [306] = {.lex_state = 1041},
  [307] = {.lex_state = 24},
  [308] = {.lex_state = 55},
  [309] = {.lex_state = 51},
  [310] = {.lex_state = 55},
  [311] = {.lex_state = 55},
  [312] = {.lex_state = 24},
  [313] = {.lex_state = 55},
  [314] = {.lex_state = 55},
  [315] = {.lex_state = 55},
  [316] = {.lex_state = 1041},
  [317] = {.lex_state = 31},
  [318] = {.lex_state = 55},
  [319] = {.lex_state = 31},
  [320] = {.lex_state = 55},
  [321] = {.lex_state = 31},
  [322] = {.lex_state = 61},
  [323] = {.lex_state = 59},
  [324] = {.lex_state = 62},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 24},
  [327] = {.lex_state = 31},
  [328] = {.lex_state = 60},
  [329] = {.lex_state = 62},
  [330] = {.lex_state = 59},
  [331] = {.lex_state = 61},
  [332] = {.lex_state = 29},
  [333] = {.lex_state = 52},
  [334] = {.lex_state = 1041},
  [335] = {.lex_state = 46},
  [336] = {.lex_state = 60},
  [337] = {.lex_state = 60},
  [338] = {.lex_state = 60},
  [339] = {.lex_state = 53},
  [340] = {.lex_state = 53},
  [341] = {.lex_state = 59},
  [342] = {.lex_state = 62},
  [343] = {.lex_state = 53},
  [344] = {.lex_state = 52},
  [345] = {.lex_state = 60},
  [346] = {.lex_state = 29},
  [347] = {.lex_state = 52},
  [348] = {.lex_state = 52},
  [349] = {.lex_state = 52},
  [350] = {.lex_state = 29},
  [351] = {.lex_state = 1041},
  [352] = {.lex_state = 54},
  [353] = {.lex_state = 54},
  [354] = {.lex_state = 1041},
  [355] = {.lex_state = 61},
  [356] = {.lex_state = 52},
  [357] = {.lex_state = 52},
  [358] = {.lex_state = 1041},
  [359] = {.lex_state = 29},
  [360] = {.lex_state = 52},
  [361] = {.lex_state = 47},
  [362] = {.lex_state = 53},
  [363] = {.lex_state = 65},
  [364] = {.lex_state = 65},
  [365] = {.lex_state = 24},
  [366] = {.lex_state = 65},
  [367] = {.lex_state = 24},
  [368] = {.lex_state = 65},
  [369] = {.lex_state = 53},
  [370] = {.lex_state = 65},
  [371] = {.lex_state = 27},
  [372] = {.lex_state = 65},
  [373] = {.lex_state = 65},
  [374] = {.lex_state = 65},
  [375] = {.lex_state = 24},
  [376] = {.lex_state = 65},
  [377] = {.lex_state = 66},
  [378] = {.lex_state = 32},
  [379] = {.lex_state = 27},
  [380] = {.lex_state = 65},
  [381] = {.lex_state = 65},
  [382] = {.lex_state = 65},
  [383] = {.lex_state = 65},
  [384] = {.lex_state = 65},
  [385] = {.lex_state = 65},
  [386] = {.lex_state = 65},
  [387] = {.lex_state = 65},
  [388] = {.lex_state = 53},
  [389] = {.lex_state = 53},
  [390] = {.lex_state = 53},
  [391] = {.lex_state = 65},
  [392] = {.lex_state = 65},
  [393] = {.lex_state = 24},
  [394] = {.lex_state = 65},
  [395] = {.lex_state = 53},
  [396] = {.lex_state = 65},
  [397] = {.lex_state = 27},
  [398] = {.lex_state = 1042},
  [399] = {.lex_state = 65},
  [400] = {.lex_state = 65},
  [401] = {.lex_state = 55},
  [402] = {.lex_state = 24},
  [403] = {.lex_state = 58},
  [404] = {.lex_state = 58},
  [405] = {.lex_state = 58},
  [406] = {.lex_state = 55},
  [407] = {.lex_state = 27},
  [408] = {.lex_state = 24},
  [409] = {.lex_state = 24},
  [410] = {.lex_state = 55},
  [411] = {.lex_state = 27},
  [412] = {.lex_state = 30},
  [413] = {.lex_state = 30},
  [414] = {.lex_state = 55},
  [415] = {.lex_state = 24},
  [416] = {.lex_state = 24},
  [417] = {.lex_state = 105},
  [418] = {.lex_state = 24},
  [419] = {.lex_state = 28},
  [420] = {.lex_state = 28},
  [421] = {.lex_state = 24},
  [422] = {.lex_state = 33},
  [423] = {.lex_state = 28},
  [424] = {.lex_state = 24},
  [425] = {.lex_state = 34},
  [426] = {.lex_state = 28},
  [427] = {.lex_state = 24},
  [428] = {.lex_state = 24},
  [429] = {.lex_state = 24},
  [430] = {.lex_state = 28},
  [431] = {.lex_state = 24},
  [432] = {.lex_state = 24},
  [433] = {.lex_state = 105},
  [434] = {.lex_state = 24},
  [435] = {.lex_state = 57},
  [436] = {.lex_state = 24},
  [437] = {.lex_state = 28},
  [438] = {.lex_state = 65},
  [439] = {.lex_state = 24},
  [440] = {.lex_state = 35},
  [441] = {.lex_state = 24},
  [442] = {.lex_state = 55},
  [443] = {.lex_state = 28},
  [444] = {.lex_state = 28},
  [445] = {.lex_state = 24},
  [446] = {.lex_state = 24},
  [447] = {.lex_state = 24},
  [448] = {.lex_state = 24},
  [449] = {.lex_state = 28},
  [450] = {.lex_state = 24},
  [451] = {.lex_state = 55},
  [452] = {.lex_state = 24},
  [453] = {.lex_state = 56},
  [454] = {.lex_state = 34},
  [455] = {.lex_state = 33},
  [456] = {.lex_state = 33},
  [457] = {.lex_state = 24},
  [458] = {.lex_state = 34},
  [459] = {.lex_state = 24},
  [460] = {.lex_state = 33},
  [461] = {.lex_state = 34},
  [462] = {.lex_state = 24},
  [463] = {.lex_state = 24},
  [464] = {.lex_state = 28},
  [465] = {.lex_state = 28},
  [466] = {.lex_state = 28},
  [467] = {.lex_state = 28},
  [468] = {.lex_state = 28},
  [469] = {.lex_state = 28},
  [470] = {.lex_state = 28},
  [471] = {.lex_state = 28},
  [472] = {.lex_state = 28},
  [473] = {.lex_state = 28},
  [474] = {.lex_state = 28},
  [475] = {.lex_state = 24},
  [476] = {.lex_state = 55},
  [477] = {.lex_state = 24},
  [478] = {.lex_state = 28},
  [479] = {.lex_state = 24},
  [480] = {.lex_state = 55},
  [481] = {.lex_state = 55},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 24},
  [484] = {.lex_state = 24},
  [485] = {.lex_state = 55},
  [486] = {.lex_state = 24},
  [487] = {.lex_state = 28},
  [488] = {.lex_state = 28},
  [489] = {.lex_state = 28},
  [490] = {.lex_state = 24},
  [491] = {.lex_state = 55},
  [492] = {.lex_state = 24},
  [493] = {.lex_state = 28},
  [494] = {.lex_state = 28},
  [495] = {.lex_state = 28},
  [496] = {.lex_state = 24},
  [497] = {.lex_state = 28},
  [498] = {.lex_state = 24},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 55},
  [501] = {.lex_state = 24},
  [502] = {.lex_state = 55},
  [503] = {.lex_state = 24},
  [504] = {.lex_state = 55},
  [505] = {.lex_state = 24},
  [506] = {.lex_state = 24},
  [507] = {.lex_state = 34},
  [508] = {.lex_state = 55},
  [509] = {.lex_state = 24},
  [510] = {.lex_state = 55},
  [511] = {.lex_state = 24},
  [512] = {.lex_state = 24},
  [513] = {.lex_state = 33},
  [514] = {.lex_state = 55},
  [515] = {.lex_state = 24},
  [516] = {.lex_state = 55},
  [517] = {.lex_state = 24},
  [518] = {.lex_state = 55},
  [519] = {.lex_state = 55},
  [520] = {.lex_state = 24},
  [521] = {.lex_state = 55},
  [522] = {.lex_state = 24},
  [523] = {.lex_state = 55},
  [524] = {.lex_state = 33},
  [525] = {.lex_state = 55},
  [526] = {.lex_state = 34},
  [527] = {.lex_state = 55},
  [528] = {.lex_state = 55},
  [529] = {.lex_state = 55},
  [530] = {.lex_state = 36},
  [531] = {.lex_state = 55},
  [532] = {.lex_state = 65},
  [533] = {.lex_state = 36},
  [534] = {.lex_state = 33},
  [535] = {.lex_state = 34},
  [536] = {.lex_state = 33},
  [537] = {.lex_state = 65},
  [538] = {.lex_state = 33},
  [539] = {.lex_state = 34},
  [540] = {.lex_state = 24},
  [541] = {.lex_state = 65},
  [542] = {.lex_state = 33},
  [543] = {.lex_state = 34},
  [544] = {.lex_state = 34},
  [545] = {.lex_state = 65},
  [546] = {.lex_state = 65},
  [547] = {.lex_state = 65},
  [548] = {.lex_state = 65},
  [549] = {.lex_state = 65},
  [550] = {.lex_state = 65},
  [551] = {.lex_state = 65},
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
    [aux_sym_path_token3] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(457),
    [sym__directive] = STATE(208),
    [sym_add] = STATE(208),
    [sym_arg] = STATE(208),
    [sym_cmd] = STATE(208),
    [sym_copy] = STATE(208),
    [sym_entrypoint] = STATE(208),
    [sym_env] = STATE(208),
    [sym_expose] = STATE(208),
    [sym_from] = STATE(208),
    [sym_healthcheck] = STATE(208),
    [sym_label] = STATE(208),
    [sym_maintainer] = STATE(208),
    [sym_onbuild] = STATE(208),
    [sym_run] = STATE(208),
    [sym_shell] = STATE(208),
    [sym_stopsignal] = STATE(208),
    [sym_user] = STATE(208),
    [sym_volume] = STATE(208),
    [sym_workdir] = STATE(208),
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
    [sym__directive] = STATE(208),
    [sym_add] = STATE(208),
    [sym_arg] = STATE(208),
    [sym_cmd] = STATE(208),
    [sym_copy] = STATE(208),
    [sym_entrypoint] = STATE(208),
    [sym_env] = STATE(208),
    [sym_expose] = STATE(208),
    [sym_from] = STATE(208),
    [sym_healthcheck] = STATE(208),
    [sym_label] = STATE(208),
    [sym_maintainer] = STATE(208),
    [sym_onbuild] = STATE(208),
    [sym_run] = STATE(208),
    [sym_shell] = STATE(208),
    [sym_stopsignal] = STATE(208),
    [sym_user] = STATE(208),
    [sym_volume] = STATE(208),
    [sym_workdir] = STATE(208),
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
    [sym__directive] = STATE(208),
    [sym_add] = STATE(208),
    [sym_arg] = STATE(208),
    [sym_cmd] = STATE(208),
    [sym_copy] = STATE(208),
    [sym_entrypoint] = STATE(208),
    [sym_env] = STATE(208),
    [sym_expose] = STATE(208),
    [sym_from] = STATE(208),
    [sym_healthcheck] = STATE(208),
    [sym_label] = STATE(208),
    [sym_maintainer] = STATE(208),
    [sym_onbuild] = STATE(208),
    [sym_run] = STATE(208),
    [sym_shell] = STATE(208),
    [sym_stopsignal] = STATE(208),
    [sym_user] = STATE(208),
    [sym_volume] = STATE(208),
    [sym_workdir] = STATE(208),
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
    [sym__port] = STATE(96),
    [sym_port] = STATE(96),
    [sym_port_range] = STATE(96),
    [sym__port_part] = STATE(88),
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
    [sym__port] = STATE(96),
    [sym_port] = STATE(96),
    [sym_port_range] = STATE(96),
    [sym__port_part] = STATE(88),
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
    [sym_add] = STATE(209),
    [sym_arg] = STATE(209),
    [sym_cmd] = STATE(209),
    [sym_copy] = STATE(209),
    [sym_entrypoint] = STATE(209),
    [sym_env] = STATE(209),
    [sym_expose] = STATE(209),
    [sym_healthcheck] = STATE(209),
    [sym_label] = STATE(209),
    [sym_run] = STATE(209),
    [sym_shell] = STATE(209),
    [sym_stopsignal] = STATE(209),
    [sym_user] = STATE(209),
    [sym_volume] = STATE(209),
    [sym_workdir] = STATE(209),
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
    [aux_sym__repository_start_repeat1] = STATE(11),
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
    [anon_sym_SLASH] = ACTIONS(140),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token16] = ACTIONS(140),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(17),
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
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token8] = ACTIONS(152),
    [aux_sym__repository_start_token11] = ACTIONS(152),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
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
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
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
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat2] = STATE(16),
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
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
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
  [14] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
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
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(169),
    [aux_sym__repository_start_token7] = ACTIONS(169),
    [aux_sym__repository_start_token16] = ACTIONS(165),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
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
    [anon_sym_DOLLAR] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(176),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [aux_sym__repository_start_token16] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
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
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(183),
    [aux_sym__repository_start_token3] = ACTIONS(185),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [aux_sym__repository_start_token16] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
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
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(183),
    [aux_sym__repository_start_token3] = ACTIONS(185),
    [aux_sym__repository_start_token8] = ACTIONS(152),
    [aux_sym__repository_start_token11] = ACTIONS(152),
    [aux_sym__repository_start_token16] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
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
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(183),
    [aux_sym__repository_start_token3] = ACTIONS(185),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [19] = {
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
    [anon_sym_DOLLAR] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [aux_sym__repository_start_token16] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
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
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token8] = ACTIONS(187),
    [aux_sym__repository_start_token11] = ACTIONS(187),
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
    [aux_sym__repository_start_token4] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(207),
    [aux_sym__repository_start_token16] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [aux_sym__repository_start_repeat4] = STATE(32),
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
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token12] = ACTIONS(213),
    [aux_sym__repository_start_token15] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [aux_sym_path_repeat1] = STATE(41),
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
    [aux_sym_healthcheck_token1] = ACTIONS(215),
    [aux_sym_label_token1] = ACTIONS(215),
    [aux_sym_maintainer_token1] = ACTIONS(215),
    [aux_sym_onbuild_token1] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(215),
    [aux_sym_shell_token1] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [aux_sym_path_token1] = ACTIONS(219),
    [aux_sym_path_token2] = ACTIONS(221),
    [aux_sym_path_token3] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [sym_port_protocol] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_add_token1] = ACTIONS(223),
    [aux_sym_arg_token1] = ACTIONS(223),
    [aux_sym_cmd_token1] = ACTIONS(223),
    [aux_sym_copy_token1] = ACTIONS(223),
    [aux_sym_entrypoint_token1] = ACTIONS(223),
    [aux_sym_env_token1] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [aux_sym_healthcheck_token1] = ACTIONS(223),
    [aux_sym_label_token1] = ACTIONS(223),
    [aux_sym_maintainer_token1] = ACTIONS(223),
    [aux_sym_onbuild_token1] = ACTIONS(223),
    [aux_sym_run_token1] = ACTIONS(223),
    [aux_sym_shell_token1] = ACTIONS(223),
    [aux_sym_stopsignal_token1] = ACTIONS(223),
    [aux_sym_user_token1] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [aux_sym_volume_token1] = ACTIONS(223),
    [aux_sym_workdir_token1] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [aux_sym__port_part_token1] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(38),
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
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token4] = ACTIONS(229),
    [aux_sym__repository_start_token7] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym__repository_start_repeat3] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token8] = ACTIONS(231),
    [aux_sym__repository_start_token11] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym__repository_start_repeat1] = STATE(34),
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
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(136),
    [aux_sym_workdir_token1] = ACTIONS(136),
    [aux_sym__repository_start_token2] = ACTIONS(233),
    [aux_sym__repository_start_token3] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(134),
    [sym__space_no_newline] = ACTIONS(136),
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
    [aux_sym__repository_start_token12] = ACTIONS(237),
    [aux_sym__repository_start_token15] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(158),
    [sym__space_no_newline] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
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
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token8] = ACTIONS(240),
    [aux_sym__repository_start_token11] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
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
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym__repository_start_token2] = ACTIONS(233),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat2] = STATE(35),
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
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(243),
    [aux_sym__repository_start_token7] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym_path_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(246),
    [aux_sym_add_token1] = ACTIONS(246),
    [aux_sym_arg_token1] = ACTIONS(246),
    [aux_sym_cmd_token1] = ACTIONS(246),
    [aux_sym_copy_token1] = ACTIONS(246),
    [aux_sym_entrypoint_token1] = ACTIONS(246),
    [aux_sym_env_token1] = ACTIONS(246),
    [aux_sym_expose_token1] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [aux_sym_from_token1] = ACTIONS(246),
    [aux_sym_healthcheck_token1] = ACTIONS(246),
    [aux_sym_label_token1] = ACTIONS(246),
    [aux_sym_maintainer_token1] = ACTIONS(246),
    [aux_sym_onbuild_token1] = ACTIONS(246),
    [aux_sym_run_token1] = ACTIONS(246),
    [aux_sym_shell_token1] = ACTIONS(246),
    [aux_sym_stopsignal_token1] = ACTIONS(246),
    [aux_sym_user_token1] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(246),
    [aux_sym_workdir_token1] = ACTIONS(246),
    [aux_sym_path_token1] = ACTIONS(248),
    [aux_sym_path_token2] = ACTIONS(250),
    [aux_sym_path_token3] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(246),
    [sym__space_no_newline] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
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
    [anon_sym_DOLLAR] = ACTIONS(252),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token2] = ACTIONS(252),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat2] = STATE(35),
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
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(229),
    [aux_sym__repository_start_token7] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
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
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token8] = ACTIONS(231),
    [aux_sym__repository_start_token11] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [aux_sym__repository_start_repeat4] = STATE(26),
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
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token12] = ACTIONS(213),
    [aux_sym__repository_start_token15] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_path_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(255),
    [aux_sym_label_token1] = ACTIONS(255),
    [aux_sym_maintainer_token1] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(255),
    [aux_sym_run_token1] = ACTIONS(255),
    [aux_sym_shell_token1] = ACTIONS(255),
    [aux_sym_stopsignal_token1] = ACTIONS(255),
    [aux_sym_user_token1] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(255),
    [aux_sym_workdir_token1] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(260),
    [aux_sym_path_token2] = ACTIONS(260),
    [aux_sym_path_token3] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [42] = {
    [sym_port_protocol] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym_add_token1] = ACTIONS(262),
    [aux_sym_arg_token1] = ACTIONS(262),
    [aux_sym_cmd_token1] = ACTIONS(262),
    [aux_sym_copy_token1] = ACTIONS(262),
    [aux_sym_entrypoint_token1] = ACTIONS(262),
    [aux_sym_env_token1] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [aux_sym_from_token1] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [aux_sym_healthcheck_token1] = ACTIONS(262),
    [aux_sym_label_token1] = ACTIONS(262),
    [aux_sym_maintainer_token1] = ACTIONS(262),
    [aux_sym_onbuild_token1] = ACTIONS(262),
    [aux_sym_run_token1] = ACTIONS(262),
    [aux_sym_shell_token1] = ACTIONS(262),
    [aux_sym_stopsignal_token1] = ACTIONS(262),
    [aux_sym_user_token1] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [aux_sym_volume_token1] = ACTIONS(262),
    [aux_sym_workdir_token1] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [aux_sym__port_part_token1] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(262),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [43] = {
    [aux_sym__repository_start_repeat2] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_add_token1] = ACTIONS(266),
    [aux_sym_arg_token1] = ACTIONS(266),
    [aux_sym_cmd_token1] = ACTIONS(266),
    [aux_sym_copy_token1] = ACTIONS(266),
    [aux_sym_entrypoint_token1] = ACTIONS(266),
    [aux_sym_env_token1] = ACTIONS(266),
    [aux_sym_expose_token1] = ACTIONS(266),
    [aux_sym_from_token1] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(264),
    [aux_sym_healthcheck_token1] = ACTIONS(266),
    [aux_sym_label_token1] = ACTIONS(266),
    [aux_sym_maintainer_token1] = ACTIONS(266),
    [aux_sym_onbuild_token1] = ACTIONS(266),
    [aux_sym_run_token1] = ACTIONS(266),
    [aux_sym_shell_token1] = ACTIONS(266),
    [aux_sym_stopsignal_token1] = ACTIONS(266),
    [aux_sym_user_token1] = ACTIONS(266),
    [aux_sym_volume_token1] = ACTIONS(266),
    [aux_sym_workdir_token1] = ACTIONS(266),
    [aux_sym__repository_start_token3] = ACTIONS(268),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(264),
    [sym__space_no_newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
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
  [45] = {
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
  [46] = {
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
  [47] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym_add_token1] = ACTIONS(270),
    [aux_sym_arg_token1] = ACTIONS(270),
    [aux_sym_cmd_token1] = ACTIONS(270),
    [aux_sym_copy_token1] = ACTIONS(270),
    [aux_sym_entrypoint_token1] = ACTIONS(270),
    [aux_sym_env_token1] = ACTIONS(270),
    [aux_sym_expose_token1] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(270),
    [aux_sym_healthcheck_token1] = ACTIONS(270),
    [aux_sym_label_token1] = ACTIONS(270),
    [aux_sym_maintainer_token1] = ACTIONS(270),
    [aux_sym_onbuild_token1] = ACTIONS(270),
    [aux_sym_run_token1] = ACTIONS(270),
    [aux_sym_shell_token1] = ACTIONS(270),
    [aux_sym_stopsignal_token1] = ACTIONS(270),
    [aux_sym_user_token1] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_volume_token1] = ACTIONS(270),
    [aux_sym_workdir_token1] = ACTIONS(270),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(280),
    [aux_sym_arg_token1] = ACTIONS(280),
    [aux_sym_cmd_token1] = ACTIONS(280),
    [aux_sym_copy_token1] = ACTIONS(280),
    [aux_sym_entrypoint_token1] = ACTIONS(280),
    [aux_sym_env_token1] = ACTIONS(280),
    [aux_sym_expose_token1] = ACTIONS(280),
    [aux_sym_from_token1] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(278),
    [aux_sym_healthcheck_token1] = ACTIONS(280),
    [aux_sym_label_token1] = ACTIONS(280),
    [aux_sym_maintainer_token1] = ACTIONS(280),
    [aux_sym_onbuild_token1] = ACTIONS(280),
    [aux_sym_run_token1] = ACTIONS(280),
    [aux_sym_shell_token1] = ACTIONS(280),
    [aux_sym_stopsignal_token1] = ACTIONS(280),
    [aux_sym_user_token1] = ACTIONS(280),
    [aux_sym_volume_token1] = ACTIONS(280),
    [aux_sym_workdir_token1] = ACTIONS(280),
    [aux_sym__repository_start_token3] = ACTIONS(282),
    [aux_sym__repository_start_token8] = ACTIONS(152),
    [aux_sym__repository_start_token11] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(278),
    [sym__space_no_newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(284),
    [aux_sym_add_token1] = ACTIONS(284),
    [aux_sym_arg_token1] = ACTIONS(284),
    [aux_sym_cmd_token1] = ACTIONS(284),
    [aux_sym_copy_token1] = ACTIONS(284),
    [aux_sym_entrypoint_token1] = ACTIONS(284),
    [aux_sym_env_token1] = ACTIONS(284),
    [aux_sym_expose_token1] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(284),
    [aux_sym_healthcheck_token1] = ACTIONS(284),
    [aux_sym_label_token1] = ACTIONS(284),
    [aux_sym_maintainer_token1] = ACTIONS(284),
    [aux_sym_onbuild_token1] = ACTIONS(284),
    [aux_sym_run_token1] = ACTIONS(284),
    [aux_sym_shell_token1] = ACTIONS(284),
    [aux_sym_stopsignal_token1] = ACTIONS(284),
    [aux_sym_user_token1] = ACTIONS(284),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_volume_token1] = ACTIONS(284),
    [aux_sym_workdir_token1] = ACTIONS(284),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_add_token1] = ACTIONS(286),
    [aux_sym_arg_token1] = ACTIONS(286),
    [aux_sym_cmd_token1] = ACTIONS(286),
    [aux_sym_copy_token1] = ACTIONS(286),
    [aux_sym_entrypoint_token1] = ACTIONS(286),
    [aux_sym_env_token1] = ACTIONS(286),
    [aux_sym_expose_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [aux_sym_from_token1] = ACTIONS(286),
    [aux_sym_healthcheck_token1] = ACTIONS(286),
    [aux_sym_label_token1] = ACTIONS(286),
    [aux_sym_maintainer_token1] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(286),
    [aux_sym_run_token1] = ACTIONS(286),
    [aux_sym_shell_token1] = ACTIONS(286),
    [aux_sym_stopsignal_token1] = ACTIONS(286),
    [aux_sym_user_token1] = ACTIONS(286),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [aux_sym_volume_token1] = ACTIONS(286),
    [aux_sym_workdir_token1] = ACTIONS(286),
    [aux_sym_path_token1] = ACTIONS(294),
    [aux_sym_path_token2] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
    [aux_sym__repository_start_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(299),
    [aux_sym_arg_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_copy_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_env_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(299),
    [aux_sym_label_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_onbuild_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym__space_no_newline] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [52] = {
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
    [aux_sym_path_token3] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(280),
    [aux_sym_arg_token1] = ACTIONS(280),
    [aux_sym_cmd_token1] = ACTIONS(280),
    [aux_sym_copy_token1] = ACTIONS(280),
    [aux_sym_entrypoint_token1] = ACTIONS(280),
    [aux_sym_env_token1] = ACTIONS(280),
    [aux_sym_expose_token1] = ACTIONS(280),
    [aux_sym_from_token1] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(278),
    [aux_sym_healthcheck_token1] = ACTIONS(280),
    [aux_sym_label_token1] = ACTIONS(280),
    [aux_sym_maintainer_token1] = ACTIONS(280),
    [aux_sym_onbuild_token1] = ACTIONS(280),
    [aux_sym_run_token1] = ACTIONS(280),
    [aux_sym_shell_token1] = ACTIONS(280),
    [aux_sym_stopsignal_token1] = ACTIONS(280),
    [aux_sym_user_token1] = ACTIONS(280),
    [aux_sym_volume_token1] = ACTIONS(280),
    [aux_sym_workdir_token1] = ACTIONS(280),
    [aux_sym__repository_start_token3] = ACTIONS(282),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(278),
    [sym__space_no_newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
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
    [aux_sym_path_token3] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [55] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
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
  [58] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_from_token1] = ACTIONS(305),
    [aux_sym_healthcheck_token1] = ACTIONS(305),
    [aux_sym_label_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_onbuild_token1] = ACTIONS(305),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_shell_token1] = ACTIONS(305),
    [aux_sym_stopsignal_token1] = ACTIONS(305),
    [aux_sym_user_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
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
    [anon_sym_DOLLAR] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token2] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym__space_no_newline] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(255),
    [aux_sym_label_token1] = ACTIONS(255),
    [aux_sym_maintainer_token1] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(255),
    [aux_sym_run_token1] = ACTIONS(255),
    [aux_sym_shell_token1] = ACTIONS(255),
    [aux_sym_stopsignal_token1] = ACTIONS(255),
    [aux_sym_user_token1] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(255),
    [aux_sym_workdir_token1] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(260),
    [aux_sym_path_token2] = ACTIONS(260),
    [aux_sym_path_token3] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [aux_sym__repository_start_repeat4] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_add_token1] = ACTIONS(266),
    [aux_sym_arg_token1] = ACTIONS(266),
    [aux_sym_cmd_token1] = ACTIONS(266),
    [aux_sym_copy_token1] = ACTIONS(266),
    [aux_sym_entrypoint_token1] = ACTIONS(266),
    [aux_sym_env_token1] = ACTIONS(266),
    [aux_sym_expose_token1] = ACTIONS(266),
    [aux_sym_from_token1] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(264),
    [aux_sym_healthcheck_token1] = ACTIONS(266),
    [aux_sym_label_token1] = ACTIONS(266),
    [aux_sym_maintainer_token1] = ACTIONS(266),
    [aux_sym_onbuild_token1] = ACTIONS(266),
    [aux_sym_run_token1] = ACTIONS(266),
    [aux_sym_shell_token1] = ACTIONS(266),
    [aux_sym_stopsignal_token1] = ACTIONS(266),
    [aux_sym_user_token1] = ACTIONS(266),
    [aux_sym_volume_token1] = ACTIONS(266),
    [aux_sym_workdir_token1] = ACTIONS(266),
    [aux_sym__repository_start_token3] = ACTIONS(268),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(264),
    [sym__space_no_newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
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
    [aux_sym_path_token3] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
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
  [64] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat3] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_add_token1] = ACTIONS(266),
    [aux_sym_arg_token1] = ACTIONS(266),
    [aux_sym_cmd_token1] = ACTIONS(266),
    [aux_sym_copy_token1] = ACTIONS(266),
    [aux_sym_entrypoint_token1] = ACTIONS(266),
    [aux_sym_env_token1] = ACTIONS(266),
    [aux_sym_expose_token1] = ACTIONS(266),
    [aux_sym_from_token1] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(264),
    [aux_sym_healthcheck_token1] = ACTIONS(266),
    [aux_sym_label_token1] = ACTIONS(266),
    [aux_sym_maintainer_token1] = ACTIONS(266),
    [aux_sym_onbuild_token1] = ACTIONS(266),
    [aux_sym_run_token1] = ACTIONS(266),
    [aux_sym_shell_token1] = ACTIONS(266),
    [aux_sym_stopsignal_token1] = ACTIONS(266),
    [aux_sym_user_token1] = ACTIONS(266),
    [aux_sym_volume_token1] = ACTIONS(266),
    [aux_sym_workdir_token1] = ACTIONS(266),
    [aux_sym__repository_start_token3] = ACTIONS(268),
    [aux_sym__repository_start_token8] = ACTIONS(152),
    [aux_sym__repository_start_token11] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(264),
    [sym__space_no_newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(280),
    [aux_sym_arg_token1] = ACTIONS(280),
    [aux_sym_cmd_token1] = ACTIONS(280),
    [aux_sym_copy_token1] = ACTIONS(280),
    [aux_sym_entrypoint_token1] = ACTIONS(280),
    [aux_sym_env_token1] = ACTIONS(280),
    [aux_sym_expose_token1] = ACTIONS(280),
    [aux_sym_from_token1] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(278),
    [aux_sym_healthcheck_token1] = ACTIONS(280),
    [aux_sym_label_token1] = ACTIONS(280),
    [aux_sym_maintainer_token1] = ACTIONS(280),
    [aux_sym_onbuild_token1] = ACTIONS(280),
    [aux_sym_run_token1] = ACTIONS(280),
    [aux_sym_shell_token1] = ACTIONS(280),
    [aux_sym_stopsignal_token1] = ACTIONS(280),
    [aux_sym_user_token1] = ACTIONS(280),
    [aux_sym_volume_token1] = ACTIONS(280),
    [aux_sym_workdir_token1] = ACTIONS(280),
    [aux_sym__repository_start_token3] = ACTIONS(282),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(278),
    [sym__space_no_newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [67] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(187),
    [aux_sym__repository_start_token11] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [68] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_add_token1] = ACTIONS(266),
    [aux_sym_arg_token1] = ACTIONS(266),
    [aux_sym_cmd_token1] = ACTIONS(266),
    [aux_sym_copy_token1] = ACTIONS(266),
    [aux_sym_entrypoint_token1] = ACTIONS(266),
    [aux_sym_env_token1] = ACTIONS(266),
    [aux_sym_expose_token1] = ACTIONS(266),
    [aux_sym_from_token1] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(264),
    [aux_sym_healthcheck_token1] = ACTIONS(266),
    [aux_sym_label_token1] = ACTIONS(266),
    [aux_sym_maintainer_token1] = ACTIONS(266),
    [aux_sym_onbuild_token1] = ACTIONS(266),
    [aux_sym_run_token1] = ACTIONS(266),
    [aux_sym_shell_token1] = ACTIONS(266),
    [aux_sym_stopsignal_token1] = ACTIONS(266),
    [aux_sym_user_token1] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(266),
    [aux_sym_workdir_token1] = ACTIONS(266),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(268),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(264),
    [sym__space_no_newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
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
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_add_token1] = ACTIONS(307),
    [aux_sym_arg_token1] = ACTIONS(307),
    [aux_sym_cmd_token1] = ACTIONS(307),
    [aux_sym_copy_token1] = ACTIONS(307),
    [aux_sym_entrypoint_token1] = ACTIONS(307),
    [aux_sym_env_token1] = ACTIONS(307),
    [aux_sym_expose_token1] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [aux_sym_from_token1] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(307),
    [aux_sym_healthcheck_token1] = ACTIONS(307),
    [aux_sym_label_token1] = ACTIONS(307),
    [aux_sym_maintainer_token1] = ACTIONS(307),
    [aux_sym_onbuild_token1] = ACTIONS(307),
    [aux_sym_run_token1] = ACTIONS(307),
    [aux_sym_shell_token1] = ACTIONS(307),
    [aux_sym_stopsignal_token1] = ACTIONS(307),
    [aux_sym_user_token1] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(307),
    [aux_sym_volume_token1] = ACTIONS(307),
    [aux_sym_workdir_token1] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(307),
    [aux_sym__port_part_token1] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(307),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(309),
    [aux_sym_healthcheck_token1] = ACTIONS(309),
    [aux_sym_label_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(313),
    [aux_sym__repository_start_token16] = ACTIONS(313),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym__space_no_newline] = ACTIONS(311),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym__repository_start_repeat2] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(315),
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
    [aux_sym__repository_start_token3] = ACTIONS(319),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym__space_no_newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
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
    [aux_sym__repository_start_token3] = ACTIONS(325),
    [aux_sym__repository_start_token4] = ACTIONS(156),
    [aux_sym__repository_start_token7] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym__space_no_newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [aux_sym__repository_start_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
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
    [aux_sym__repository_start_token3] = ACTIONS(325),
    [aux_sym__repository_start_token8] = ACTIONS(152),
    [aux_sym__repository_start_token11] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym__space_no_newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [aux_sym__repository_start_repeat4] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
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
    [aux_sym__repository_start_token3] = ACTIONS(325),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym__space_no_newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
    [aux_sym__repository_start_repeat3] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(315),
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
    [aux_sym__repository_start_token3] = ACTIONS(319),
    [aux_sym__repository_start_token8] = ACTIONS(152),
    [aux_sym__repository_start_token11] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym__space_no_newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
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
    [aux_sym_path_token1] = ACTIONS(329),
    [aux_sym_path_token2] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(144),
    [aux_sym_healthcheck_token1] = ACTIONS(144),
    [aux_sym_label_token1] = ACTIONS(144),
    [aux_sym_maintainer_token1] = ACTIONS(144),
    [aux_sym_onbuild_token1] = ACTIONS(144),
    [aux_sym_run_token1] = ACTIONS(144),
    [aux_sym_shell_token1] = ACTIONS(144),
    [aux_sym_stopsignal_token1] = ACTIONS(144),
    [aux_sym_user_token1] = ACTIONS(144),
    [aux_sym_volume_token1] = ACTIONS(144),
    [aux_sym_workdir_token1] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
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
    [aux_sym_path_token1] = ACTIONS(335),
    [aux_sym_path_token2] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
    [aux_sym__repository_start_repeat4] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(315),
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
    [aux_sym__repository_start_token3] = ACTIONS(319),
    [aux_sym__repository_start_token12] = ACTIONS(154),
    [aux_sym__repository_start_token15] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym__space_no_newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_add_token1] = ACTIONS(179),
    [aux_sym_arg_token1] = ACTIONS(179),
    [aux_sym_cmd_token1] = ACTIONS(179),
    [aux_sym_copy_token1] = ACTIONS(179),
    [aux_sym_entrypoint_token1] = ACTIONS(179),
    [aux_sym_env_token1] = ACTIONS(179),
    [aux_sym_expose_token1] = ACTIONS(179),
    [aux_sym_from_token1] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(179),
    [aux_sym_healthcheck_token1] = ACTIONS(179),
    [aux_sym_label_token1] = ACTIONS(179),
    [aux_sym_maintainer_token1] = ACTIONS(179),
    [aux_sym_onbuild_token1] = ACTIONS(179),
    [aux_sym_run_token1] = ACTIONS(179),
    [aux_sym_shell_token1] = ACTIONS(179),
    [aux_sym_stopsignal_token1] = ACTIONS(179),
    [aux_sym_user_token1] = ACTIONS(179),
    [aux_sym_volume_token1] = ACTIONS(179),
    [aux_sym_workdir_token1] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(183),
    [aux_sym__repository_start_token16] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
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
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym_add_token1] = ACTIONS(262),
    [aux_sym_arg_token1] = ACTIONS(262),
    [aux_sym_cmd_token1] = ACTIONS(262),
    [aux_sym_copy_token1] = ACTIONS(262),
    [aux_sym_entrypoint_token1] = ACTIONS(262),
    [aux_sym_env_token1] = ACTIONS(262),
    [aux_sym_expose_token1] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [aux_sym_from_token1] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [aux_sym_healthcheck_token1] = ACTIONS(262),
    [aux_sym_label_token1] = ACTIONS(262),
    [aux_sym_maintainer_token1] = ACTIONS(262),
    [aux_sym_onbuild_token1] = ACTIONS(262),
    [aux_sym_run_token1] = ACTIONS(262),
    [aux_sym_shell_token1] = ACTIONS(262),
    [aux_sym_stopsignal_token1] = ACTIONS(262),
    [aux_sym_user_token1] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [aux_sym_volume_token1] = ACTIONS(262),
    [aux_sym_workdir_token1] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [aux_sym__port_part_token1] = ACTIONS(262),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(262),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
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
    [anon_sym_COLON] = ACTIONS(343),
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
    [anon_sym_DASH] = ACTIONS(343),
    [aux_sym__port_part_token1] = ACTIONS(343),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
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
    [aux_sym_path_token1] = ACTIONS(347),
    [aux_sym_path_token2] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym__space_no_newline] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
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
    [anon_sym_COLON] = ACTIONS(349),
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
    [anon_sym_DASH] = ACTIONS(349),
    [aux_sym__port_part_token1] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
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
    [aux_sym_path_token1] = ACTIONS(221),
    [aux_sym_path_token2] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [88] = {
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
    [anon_sym_COLON] = ACTIONS(351),
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
    [anon_sym_DASH] = ACTIONS(353),
    [aux_sym__port_part_token1] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
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
    [aux_sym_path_token2] = ACTIONS(355),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym__space_no_newline] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [aux_sym__repository_start_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_add_token1] = ACTIONS(361),
    [aux_sym_arg_token1] = ACTIONS(361),
    [aux_sym_cmd_token1] = ACTIONS(361),
    [aux_sym_copy_token1] = ACTIONS(361),
    [aux_sym_entrypoint_token1] = ACTIONS(361),
    [aux_sym_env_token1] = ACTIONS(361),
    [aux_sym_expose_token1] = ACTIONS(361),
    [aux_sym_from_token1] = ACTIONS(361),
    [aux_sym_healthcheck_token1] = ACTIONS(361),
    [aux_sym_label_token1] = ACTIONS(361),
    [aux_sym_maintainer_token1] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(361),
    [aux_sym_run_token1] = ACTIONS(361),
    [aux_sym_shell_token1] = ACTIONS(361),
    [aux_sym_stopsignal_token1] = ACTIONS(361),
    [aux_sym_user_token1] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(359),
    [sym__space_no_newline] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [91] = {
    [aux_sym__repository_start_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(315),
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
    [anon_sym_DOLLAR] = ACTIONS(138),
    [aux_sym_volume_token1] = ACTIONS(317),
    [aux_sym_workdir_token1] = ACTIONS(317),
    [aux_sym__repository_start_token2] = ACTIONS(138),
    [aux_sym__repository_start_token3] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym__space_no_newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym_add_token1] = ACTIONS(365),
    [aux_sym_arg_token1] = ACTIONS(365),
    [aux_sym_cmd_token1] = ACTIONS(365),
    [aux_sym_copy_token1] = ACTIONS(365),
    [aux_sym_entrypoint_token1] = ACTIONS(365),
    [aux_sym_env_token1] = ACTIONS(365),
    [aux_sym_expose_token1] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
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
    [aux_sym_path_token1] = ACTIONS(367),
    [aux_sym_path_token2] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(365),
    [sym__space_no_newline] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [aux_sym__repository_start_repeat3] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(369),
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
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [aux_sym__repository_start_token8] = ACTIONS(375),
    [aux_sym__repository_start_token11] = ACTIONS(375),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [aux_sym__repository_start_repeat4] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(377),
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
    [aux_sym__repository_start_token3] = ACTIONS(381),
    [aux_sym__repository_start_token12] = ACTIONS(383),
    [aux_sym__repository_start_token15] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_workdir_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym_add_token1] = ACTIONS(387),
    [aux_sym_arg_token1] = ACTIONS(387),
    [aux_sym_cmd_token1] = ACTIONS(387),
    [aux_sym_copy_token1] = ACTIONS(387),
    [aux_sym_entrypoint_token1] = ACTIONS(387),
    [aux_sym_env_token1] = ACTIONS(387),
    [aux_sym_expose_token1] = ACTIONS(387),
    [aux_sym_from_token1] = ACTIONS(387),
    [aux_sym_healthcheck_token1] = ACTIONS(387),
    [aux_sym_label_token1] = ACTIONS(387),
    [aux_sym_maintainer_token1] = ACTIONS(387),
    [aux_sym_onbuild_token1] = ACTIONS(387),
    [aux_sym_run_token1] = ACTIONS(387),
    [aux_sym_shell_token1] = ACTIONS(387),
    [aux_sym_stopsignal_token1] = ACTIONS(387),
    [aux_sym_user_token1] = ACTIONS(387),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(387),
    [aux_sym_workdir_token1] = ACTIONS(387),
    [aux_sym_workdir_token4] = ACTIONS(389),
    [aux_sym_workdir_token5] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [aux_sym_add_token1] = ACTIONS(393),
    [aux_sym_arg_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_copy_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_env_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [aux_sym_healthcheck_token1] = ACTIONS(393),
    [aux_sym_label_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_onbuild_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_shell_token1] = ACTIONS(393),
    [aux_sym_stopsignal_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [aux_sym_volume_token1] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym__port_part_token1] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym__repository_start_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(369),
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
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym__repository_start_token2] = ACTIONS(397),
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [aux_sym_workdir_repeat1] = STATE(98),
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
    [anon_sym_DOLLAR] = ACTIONS(403),
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [aux_sym_workdir_token4] = ACTIONS(403),
    [aux_sym_workdir_token5] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__env_pairs] = STATE(115),
    [sym_env_pair] = STATE(115),
    [sym_env_key] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(408),
    [aux_sym_arg_token1] = ACTIONS(408),
    [aux_sym_cmd_token1] = ACTIONS(408),
    [aux_sym_copy_token1] = ACTIONS(408),
    [aux_sym_entrypoint_token1] = ACTIONS(408),
    [aux_sym_env_token1] = ACTIONS(408),
    [aux_sym_expose_token1] = ACTIONS(408),
    [aux_sym_from_token1] = ACTIONS(408),
    [aux_sym_healthcheck_token1] = ACTIONS(408),
    [aux_sym_label_token1] = ACTIONS(408),
    [aux_sym_maintainer_token1] = ACTIONS(408),
    [aux_sym_onbuild_token1] = ACTIONS(408),
    [aux_sym_run_token1] = ACTIONS(408),
    [aux_sym_shell_token1] = ACTIONS(408),
    [aux_sym_stopsignal_token1] = ACTIONS(408),
    [aux_sym_user_token1] = ACTIONS(408),
    [aux_sym_volume_token1] = ACTIONS(408),
    [aux_sym_workdir_token1] = ACTIONS(408),
    [aux_sym_env_key_token1] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(406),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_add_token1] = ACTIONS(412),
    [aux_sym_arg_token1] = ACTIONS(412),
    [aux_sym_cmd_token1] = ACTIONS(412),
    [aux_sym_copy_token1] = ACTIONS(412),
    [aux_sym_entrypoint_token1] = ACTIONS(412),
    [aux_sym_env_token1] = ACTIONS(412),
    [aux_sym_expose_token1] = ACTIONS(412),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [aux_sym_from_token1] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(412),
    [aux_sym_healthcheck_token1] = ACTIONS(412),
    [aux_sym_label_token1] = ACTIONS(412),
    [aux_sym_maintainer_token1] = ACTIONS(412),
    [aux_sym_onbuild_token1] = ACTIONS(412),
    [aux_sym_run_token1] = ACTIONS(412),
    [aux_sym_shell_token1] = ACTIONS(412),
    [aux_sym_stopsignal_token1] = ACTIONS(412),
    [aux_sym_user_token1] = ACTIONS(412),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [aux_sym_volume_token1] = ACTIONS(412),
    [aux_sym_workdir_token1] = ACTIONS(412),
    [aux_sym__port_part_token1] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(412),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym__labels] = STATE(111),
    [sym_label_pair] = STATE(111),
    [sym_label_key] = STATE(433),
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_add_token1] = ACTIONS(416),
    [aux_sym_arg_token1] = ACTIONS(416),
    [aux_sym_cmd_token1] = ACTIONS(416),
    [aux_sym_copy_token1] = ACTIONS(416),
    [aux_sym_entrypoint_token1] = ACTIONS(416),
    [aux_sym_env_token1] = ACTIONS(416),
    [aux_sym_expose_token1] = ACTIONS(416),
    [aux_sym_from_token1] = ACTIONS(416),
    [aux_sym_healthcheck_token1] = ACTIONS(416),
    [aux_sym_label_token1] = ACTIONS(416),
    [aux_sym_maintainer_token1] = ACTIONS(416),
    [aux_sym_onbuild_token1] = ACTIONS(416),
    [aux_sym_run_token1] = ACTIONS(416),
    [aux_sym_shell_token1] = ACTIONS(416),
    [aux_sym_stopsignal_token1] = ACTIONS(416),
    [aux_sym_user_token1] = ACTIONS(416),
    [aux_sym_volume_token1] = ACTIONS(416),
    [aux_sym_workdir_token1] = ACTIONS(416),
    [aux_sym_env_key_token1] = ACTIONS(418),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(414),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym__repository_start_repeat2] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(369),
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
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [aux_sym__repository_start_token4] = ACTIONS(420),
    [aux_sym__repository_start_token7] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [aux_sym__repository_start_repeat4] = STATE(103),
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
    [aux_sym__repository_start_token12] = ACTIONS(422),
    [aux_sym__repository_start_token15] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [anon_sym_COLON] = ACTIONS(425),
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
    [aux_sym__repository_start_repeat4] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(369),
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
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [aux_sym__repository_start_token12] = ACTIONS(383),
    [aux_sym__repository_start_token15] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [aux_sym__repository_start_repeat3] = STATE(106),
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
    [aux_sym__repository_start_token8] = ACTIONS(427),
    [aux_sym__repository_start_token11] = ACTIONS(427),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym_add_token1] = ACTIONS(286),
    [aux_sym_arg_token1] = ACTIONS(286),
    [aux_sym_cmd_token1] = ACTIONS(286),
    [aux_sym_copy_token1] = ACTIONS(286),
    [aux_sym_entrypoint_token1] = ACTIONS(286),
    [aux_sym_env_token1] = ACTIONS(286),
    [aux_sym_expose_token1] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [aux_sym_from_token1] = ACTIONS(286),
    [aux_sym_healthcheck_token1] = ACTIONS(286),
    [aux_sym_label_token1] = ACTIONS(286),
    [aux_sym_maintainer_token1] = ACTIONS(286),
    [aux_sym_onbuild_token1] = ACTIONS(286),
    [aux_sym_run_token1] = ACTIONS(286),
    [aux_sym_shell_token1] = ACTIONS(286),
    [aux_sym_stopsignal_token1] = ACTIONS(286),
    [aux_sym_user_token1] = ACTIONS(286),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [aux_sym_volume_token1] = ACTIONS(286),
    [aux_sym_workdir_token1] = ACTIONS(286),
    [aux_sym_path_token1] = ACTIONS(430),
    [aux_sym_path_token2] = ACTIONS(286),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym__repository_start_repeat2] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_add_token1] = ACTIONS(167),
    [aux_sym_arg_token1] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_copy_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_env_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(167),
    [aux_sym_healthcheck_token1] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_onbuild_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [aux_sym_volume_token1] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(432),
    [aux_sym__repository_start_token7] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
    [aux_sym__repository_start_repeat1] = STATE(97),
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
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(437),
    [aux_sym_workdir_token1] = ACTIONS(437),
    [aux_sym__repository_start_token2] = ACTIONS(397),
    [aux_sym__repository_start_token3] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [aux_sym__repository_start_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(441),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token2] = ACTIONS(441),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [aux_sym__labels] = STATE(111),
    [sym_label_pair] = STATE(111),
    [sym_label_key] = STATE(433),
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym_add_token1] = ACTIONS(446),
    [aux_sym_arg_token1] = ACTIONS(446),
    [aux_sym_cmd_token1] = ACTIONS(446),
    [aux_sym_copy_token1] = ACTIONS(446),
    [aux_sym_entrypoint_token1] = ACTIONS(446),
    [aux_sym_env_token1] = ACTIONS(446),
    [aux_sym_expose_token1] = ACTIONS(446),
    [aux_sym_from_token1] = ACTIONS(446),
    [aux_sym_healthcheck_token1] = ACTIONS(446),
    [aux_sym_label_token1] = ACTIONS(446),
    [aux_sym_maintainer_token1] = ACTIONS(446),
    [aux_sym_onbuild_token1] = ACTIONS(446),
    [aux_sym_run_token1] = ACTIONS(446),
    [aux_sym_shell_token1] = ACTIONS(446),
    [aux_sym_stopsignal_token1] = ACTIONS(446),
    [aux_sym_user_token1] = ACTIONS(446),
    [aux_sym_volume_token1] = ACTIONS(446),
    [aux_sym_workdir_token1] = ACTIONS(446),
    [aux_sym_env_key_token1] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(444),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
    [aux_sym_workdir_repeat1] = STATE(95),
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
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(453),
    [aux_sym_workdir_token1] = ACTIONS(453),
    [aux_sym_workdir_token4] = ACTIONS(389),
    [aux_sym_workdir_token5] = ACTIONS(455),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [aux_sym__repository_start_repeat2] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(377),
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
    [aux_sym__repository_start_token3] = ACTIONS(381),
    [aux_sym__repository_start_token4] = ACTIONS(420),
    [aux_sym__repository_start_token7] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [114] = {
    [aux_sym__repository_start_repeat3] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(377),
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
    [aux_sym__repository_start_token3] = ACTIONS(381),
    [aux_sym__repository_start_token8] = ACTIONS(375),
    [aux_sym__repository_start_token11] = ACTIONS(375),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
    [aux_sym__env_pairs] = STATE(115),
    [sym_env_pair] = STATE(115),
    [sym_env_key] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(457),
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
    [aux_sym_env_key_token1] = ACTIONS(461),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [aux_sym_add_token1] = ACTIONS(466),
    [aux_sym_arg_token1] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(464),
    [aux_sym_cmd_token1] = ACTIONS(466),
    [aux_sym_copy_token1] = ACTIONS(466),
    [aux_sym_entrypoint_token1] = ACTIONS(466),
    [aux_sym_env_token1] = ACTIONS(466),
    [aux_sym_expose_token1] = ACTIONS(466),
    [aux_sym_from_token1] = ACTIONS(466),
    [aux_sym_healthcheck_token1] = ACTIONS(466),
    [aux_sym_label_token1] = ACTIONS(466),
    [aux_sym_maintainer_token1] = ACTIONS(466),
    [aux_sym_onbuild_token1] = ACTIONS(466),
    [aux_sym_run_token1] = ACTIONS(466),
    [aux_sym_shell_token1] = ACTIONS(466),
    [aux_sym_stopsignal_token1] = ACTIONS(466),
    [aux_sym_user_token1] = ACTIONS(466),
    [aux_sym_volume_token1] = ACTIONS(466),
    [aux_sym_workdir_token1] = ACTIONS(466),
    [aux_sym_env_key_token1] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(464),
    [sym__space_no_newline] = ACTIONS(466),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
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
  [118] = {
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
  [119] = {
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
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym_add_token1] = ACTIONS(480),
    [aux_sym_arg_token1] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(482),
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
    [aux_sym_env_key_token1] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(478),
    [sym__space_no_newline] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
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
    [anon_sym_DOLLAR] = ACTIONS(399),
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [aux_sym_workdir_token4] = ACTIONS(399),
    [aux_sym_workdir_token5] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [aux_sym_add_token1] = ACTIONS(486),
    [aux_sym_arg_token1] = ACTIONS(486),
    [aux_sym_cmd_token1] = ACTIONS(486),
    [aux_sym_copy_token1] = ACTIONS(486),
    [aux_sym_entrypoint_token1] = ACTIONS(486),
    [aux_sym_env_token1] = ACTIONS(486),
    [aux_sym_expose_token1] = ACTIONS(486),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [aux_sym_from_token1] = ACTIONS(486),
    [aux_sym_healthcheck_token1] = ACTIONS(486),
    [aux_sym_label_token1] = ACTIONS(486),
    [aux_sym_maintainer_token1] = ACTIONS(486),
    [aux_sym_onbuild_token1] = ACTIONS(486),
    [aux_sym_run_token1] = ACTIONS(486),
    [aux_sym_shell_token1] = ACTIONS(486),
    [aux_sym_stopsignal_token1] = ACTIONS(486),
    [aux_sym_user_token1] = ACTIONS(486),
    [anon_sym_DOLLAR] = ACTIONS(486),
    [aux_sym_volume_token1] = ACTIONS(486),
    [aux_sym_workdir_token1] = ACTIONS(486),
    [aux_sym__port_part_token1] = ACTIONS(486),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(486),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
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
  [124] = {
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
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(488),
    [aux_sym_arg_token1] = ACTIONS(488),
    [aux_sym_cmd_token1] = ACTIONS(488),
    [aux_sym_copy_token1] = ACTIONS(488),
    [aux_sym_entrypoint_token1] = ACTIONS(488),
    [aux_sym_env_token1] = ACTIONS(488),
    [aux_sym_expose_token1] = ACTIONS(488),
    [aux_sym_from_token1] = ACTIONS(488),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_AT] = ACTIONS(492),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(488),
    [sym__space_no_newline] = ACTIONS(494),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
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
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_add_token1] = ACTIONS(496),
    [aux_sym_arg_token1] = ACTIONS(496),
    [aux_sym_cmd_token1] = ACTIONS(496),
    [aux_sym_copy_token1] = ACTIONS(496),
    [aux_sym_entrypoint_token1] = ACTIONS(496),
    [aux_sym_env_token1] = ACTIONS(496),
    [aux_sym_expose_token1] = ACTIONS(496),
    [aux_sym_from_token1] = ACTIONS(496),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_AT] = ACTIONS(500),
    [aux_sym_healthcheck_token1] = ACTIONS(496),
    [aux_sym_label_token1] = ACTIONS(496),
    [aux_sym_maintainer_token1] = ACTIONS(496),
    [aux_sym_onbuild_token1] = ACTIONS(496),
    [aux_sym_run_token1] = ACTIONS(496),
    [aux_sym_shell_token1] = ACTIONS(496),
    [aux_sym_stopsignal_token1] = ACTIONS(496),
    [aux_sym_user_token1] = ACTIONS(496),
    [aux_sym_volume_token1] = ACTIONS(496),
    [aux_sym_workdir_token1] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(496),
    [sym__space_no_newline] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [aux_sym__anything] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(504),
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
    [aux_sym_env_key_token1] = ACTIONS(504),
    [aux_sym__anything_token1] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(504),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
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
  [130] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(187),
    [aux_sym__repository_start_token11] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_add_token1] = ACTIONS(179),
    [aux_sym_arg_token1] = ACTIONS(179),
    [aux_sym_cmd_token1] = ACTIONS(179),
    [aux_sym_copy_token1] = ACTIONS(179),
    [aux_sym_entrypoint_token1] = ACTIONS(179),
    [aux_sym_env_token1] = ACTIONS(179),
    [aux_sym_expose_token1] = ACTIONS(179),
    [aux_sym_from_token1] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [aux_sym_healthcheck_token1] = ACTIONS(179),
    [aux_sym_label_token1] = ACTIONS(179),
    [aux_sym_maintainer_token1] = ACTIONS(179),
    [aux_sym_onbuild_token1] = ACTIONS(179),
    [aux_sym_run_token1] = ACTIONS(179),
    [aux_sym_shell_token1] = ACTIONS(179),
    [aux_sym_stopsignal_token1] = ACTIONS(179),
    [aux_sym_user_token1] = ACTIONS(179),
    [aux_sym_volume_token1] = ACTIONS(179),
    [aux_sym_workdir_token1] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [aux_sym_healthcheck_token1] = ACTIONS(144),
    [aux_sym_label_token1] = ACTIONS(144),
    [aux_sym_maintainer_token1] = ACTIONS(144),
    [aux_sym_onbuild_token1] = ACTIONS(144),
    [aux_sym_run_token1] = ACTIONS(144),
    [aux_sym_shell_token1] = ACTIONS(144),
    [aux_sym_stopsignal_token1] = ACTIONS(144),
    [aux_sym_user_token1] = ACTIONS(144),
    [aux_sym_volume_token1] = ACTIONS(144),
    [aux_sym_workdir_token1] = ACTIONS(144),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [aux_sym__anything] = STATE(133),
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
    [aux_sym_env_key_token1] = ACTIONS(510),
    [aux_sym__anything_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
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
  [135] = {
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
    [aux_sym_workdir_token4] = ACTIONS(195),
    [aux_sym_workdir_token5] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_add_token1] = ACTIONS(174),
    [aux_sym_arg_token1] = ACTIONS(174),
    [aux_sym_cmd_token1] = ACTIONS(174),
    [aux_sym_copy_token1] = ACTIONS(174),
    [aux_sym_entrypoint_token1] = ACTIONS(174),
    [aux_sym_env_token1] = ACTIONS(174),
    [aux_sym_expose_token1] = ACTIONS(174),
    [aux_sym_from_token1] = ACTIONS(174),
    [aux_sym_healthcheck_token1] = ACTIONS(174),
    [aux_sym_label_token1] = ACTIONS(174),
    [aux_sym_maintainer_token1] = ACTIONS(174),
    [aux_sym_onbuild_token1] = ACTIONS(174),
    [aux_sym_run_token1] = ACTIONS(174),
    [aux_sym_shell_token1] = ACTIONS(174),
    [aux_sym_stopsignal_token1] = ACTIONS(174),
    [aux_sym_user_token1] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [aux_sym_volume_token1] = ACTIONS(174),
    [aux_sym_workdir_token1] = ACTIONS(174),
    [aux_sym__repository_start_token2] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [137] = {
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
    [aux_sym__repository_start_token4] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [138] = {
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
    [aux_sym_workdir_token4] = ACTIONS(191),
    [aux_sym_workdir_token5] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [aux_sym_healthcheck_token1] = ACTIONS(309),
    [aux_sym_label_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym__space_no_newline] = ACTIONS(311),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_add_token1] = ACTIONS(517),
    [aux_sym_arg_token1] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_copy_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_env_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_AT] = ACTIONS(521),
    [aux_sym_healthcheck_token1] = ACTIONS(517),
    [aux_sym_label_token1] = ACTIONS(517),
    [aux_sym_maintainer_token1] = ACTIONS(517),
    [aux_sym_onbuild_token1] = ACTIONS(517),
    [aux_sym_run_token1] = ACTIONS(517),
    [aux_sym_shell_token1] = ACTIONS(517),
    [aux_sym_stopsignal_token1] = ACTIONS(517),
    [aux_sym_user_token1] = ACTIONS(517),
    [aux_sym_volume_token1] = ACTIONS(517),
    [aux_sym_workdir_token1] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym__space_no_newline] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_add_token1] = ACTIONS(517),
    [aux_sym_arg_token1] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_copy_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_env_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(521),
    [aux_sym_healthcheck_token1] = ACTIONS(517),
    [aux_sym_label_token1] = ACTIONS(517),
    [aux_sym_maintainer_token1] = ACTIONS(517),
    [aux_sym_onbuild_token1] = ACTIONS(517),
    [aux_sym_run_token1] = ACTIONS(517),
    [aux_sym_shell_token1] = ACTIONS(517),
    [aux_sym_stopsignal_token1] = ACTIONS(517),
    [aux_sym_user_token1] = ACTIONS(517),
    [aux_sym_volume_token1] = ACTIONS(517),
    [aux_sym_workdir_token1] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym__space_no_newline] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [aux_sym__anything] = STATE(142),
    [ts_builtin_sym_end] = ACTIONS(510),
    [aux_sym_add_token1] = ACTIONS(510),
    [aux_sym_arg_token1] = ACTIONS(510),
    [aux_sym_cmd_token1] = ACTIONS(510),
    [aux_sym_copy_token1] = ACTIONS(510),
    [aux_sym_entrypoint_token1] = ACTIONS(510),
    [aux_sym_env_token1] = ACTIONS(510),
    [aux_sym_expose_token1] = ACTIONS(510),
    [aux_sym_from_token1] = ACTIONS(510),
    [aux_sym_healthcheck_token1] = ACTIONS(510),
    [aux_sym_label_token1] = ACTIONS(510),
    [aux_sym_maintainer_token1] = ACTIONS(510),
    [aux_sym_onbuild_token1] = ACTIONS(510),
    [aux_sym_run_token1] = ACTIONS(510),
    [aux_sym_shell_token1] = ACTIONS(510),
    [aux_sym_stopsignal_token1] = ACTIONS(510),
    [aux_sym_user_token1] = ACTIONS(510),
    [aux_sym_volume_token1] = ACTIONS(510),
    [aux_sym_workdir_token1] = ACTIONS(510),
    [aux_sym__anything_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(510),
    [sym_comment] = ACTIONS(512),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [aux_sym_add_token1] = ACTIONS(278),
    [aux_sym_arg_token1] = ACTIONS(278),
    [aux_sym_cmd_token1] = ACTIONS(278),
    [aux_sym_copy_token1] = ACTIONS(278),
    [aux_sym_entrypoint_token1] = ACTIONS(278),
    [aux_sym_env_token1] = ACTIONS(278),
    [aux_sym_expose_token1] = ACTIONS(278),
    [aux_sym_from_token1] = ACTIONS(278),
    [anon_sym_AT] = ACTIONS(278),
    [aux_sym_healthcheck_token1] = ACTIONS(278),
    [aux_sym_label_token1] = ACTIONS(278),
    [aux_sym_maintainer_token1] = ACTIONS(278),
    [aux_sym_onbuild_token1] = ACTIONS(278),
    [aux_sym_run_token1] = ACTIONS(278),
    [aux_sym_shell_token1] = ACTIONS(278),
    [aux_sym_stopsignal_token1] = ACTIONS(278),
    [aux_sym_user_token1] = ACTIONS(278),
    [aux_sym_volume_token1] = ACTIONS(278),
    [aux_sym_workdir_token1] = ACTIONS(278),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(278),
    [sym__space_no_newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
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
    [ts_builtin_sym_end] = ACTIONS(538),
    [aux_sym_add_token1] = ACTIONS(538),
    [aux_sym_arg_token1] = ACTIONS(538),
    [aux_sym_cmd_token1] = ACTIONS(538),
    [aux_sym_copy_token1] = ACTIONS(538),
    [aux_sym_entrypoint_token1] = ACTIONS(538),
    [aux_sym_env_token1] = ACTIONS(538),
    [aux_sym_expose_token1] = ACTIONS(538),
    [aux_sym_from_token1] = ACTIONS(538),
    [anon_sym_AT] = ACTIONS(538),
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
    [sym__space_no_newline] = ACTIONS(540),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [aux_sym__anything] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(510),
    [aux_sym_add_token1] = ACTIONS(510),
    [aux_sym_arg_token1] = ACTIONS(510),
    [aux_sym_cmd_token1] = ACTIONS(510),
    [aux_sym_copy_token1] = ACTIONS(510),
    [aux_sym_entrypoint_token1] = ACTIONS(510),
    [aux_sym_env_token1] = ACTIONS(510),
    [aux_sym_expose_token1] = ACTIONS(510),
    [aux_sym_from_token1] = ACTIONS(510),
    [aux_sym_healthcheck_token1] = ACTIONS(510),
    [aux_sym_label_token1] = ACTIONS(510),
    [aux_sym_maintainer_token1] = ACTIONS(510),
    [aux_sym_onbuild_token1] = ACTIONS(510),
    [aux_sym_run_token1] = ACTIONS(510),
    [aux_sym_shell_token1] = ACTIONS(510),
    [aux_sym_stopsignal_token1] = ACTIONS(510),
    [aux_sym_user_token1] = ACTIONS(510),
    [aux_sym_volume_token1] = ACTIONS(510),
    [aux_sym_workdir_token1] = ACTIONS(510),
    [aux_sym__anything_token1] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_add_token1] = ACTIONS(496),
    [aux_sym_arg_token1] = ACTIONS(496),
    [aux_sym_cmd_token1] = ACTIONS(496),
    [aux_sym_copy_token1] = ACTIONS(496),
    [aux_sym_entrypoint_token1] = ACTIONS(496),
    [aux_sym_env_token1] = ACTIONS(496),
    [aux_sym_expose_token1] = ACTIONS(496),
    [aux_sym_from_token1] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(500),
    [aux_sym_healthcheck_token1] = ACTIONS(496),
    [aux_sym_label_token1] = ACTIONS(496),
    [aux_sym_maintainer_token1] = ACTIONS(496),
    [aux_sym_onbuild_token1] = ACTIONS(496),
    [aux_sym_run_token1] = ACTIONS(496),
    [aux_sym_shell_token1] = ACTIONS(496),
    [aux_sym_stopsignal_token1] = ACTIONS(496),
    [aux_sym_user_token1] = ACTIONS(496),
    [aux_sym_volume_token1] = ACTIONS(496),
    [aux_sym_workdir_token1] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(496),
    [sym__space_no_newline] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [aux_sym__anything] = STATE(147),
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
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [aux_sym_add_token1] = ACTIONS(549),
    [aux_sym_arg_token1] = ACTIONS(549),
    [aux_sym_cmd_token1] = ACTIONS(549),
    [aux_sym_copy_token1] = ACTIONS(549),
    [aux_sym_entrypoint_token1] = ACTIONS(549),
    [aux_sym_env_token1] = ACTIONS(549),
    [aux_sym_expose_token1] = ACTIONS(549),
    [aux_sym_from_token1] = ACTIONS(549),
    [anon_sym_AT] = ACTIONS(551),
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
    [sym__space_no_newline] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
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
    [aux_sym__anything_token1] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(555),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym_add_token1] = ACTIONS(264),
    [aux_sym_arg_token1] = ACTIONS(264),
    [aux_sym_cmd_token1] = ACTIONS(264),
    [aux_sym_copy_token1] = ACTIONS(264),
    [aux_sym_entrypoint_token1] = ACTIONS(264),
    [aux_sym_env_token1] = ACTIONS(264),
    [aux_sym_expose_token1] = ACTIONS(264),
    [aux_sym_from_token1] = ACTIONS(264),
    [anon_sym_AT] = ACTIONS(264),
    [aux_sym_healthcheck_token1] = ACTIONS(264),
    [aux_sym_label_token1] = ACTIONS(264),
    [aux_sym_maintainer_token1] = ACTIONS(264),
    [aux_sym_onbuild_token1] = ACTIONS(264),
    [aux_sym_run_token1] = ACTIONS(264),
    [aux_sym_shell_token1] = ACTIONS(264),
    [aux_sym_stopsignal_token1] = ACTIONS(264),
    [aux_sym_user_token1] = ACTIONS(264),
    [aux_sym_volume_token1] = ACTIONS(264),
    [aux_sym_workdir_token1] = ACTIONS(264),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(264),
    [sym__space_no_newline] = ACTIONS(266),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [aux_sym__anything] = STATE(142),
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
    [aux_sym__anything_token1] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(559),
    [sym_comment] = ACTIONS(563),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
    [aux_sym__anything_token1] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(555),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
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
    [sym__space_no_newline] = ACTIONS(567),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
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
    [sym__space_no_newline] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [aux_sym_add_token1] = ACTIONS(573),
    [aux_sym_arg_token1] = ACTIONS(573),
    [aux_sym_cmd_token1] = ACTIONS(573),
    [aux_sym_copy_token1] = ACTIONS(573),
    [aux_sym_entrypoint_token1] = ACTIONS(573),
    [aux_sym_env_token1] = ACTIONS(573),
    [aux_sym_expose_token1] = ACTIONS(573),
    [aux_sym_from_token1] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(575),
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
  [158] = {
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
    [aux_sym__anything_token1] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(555),
    [sym_comment] = ACTIONS(557),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [aux_sym_add_token1] = ACTIONS(577),
    [aux_sym_arg_token1] = ACTIONS(577),
    [anon_sym_EQ] = ACTIONS(579),
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
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [aux_sym_add_token1] = ACTIONS(581),
    [aux_sym_arg_token1] = ACTIONS(581),
    [aux_sym_cmd_token1] = ACTIONS(581),
    [aux_sym_copy_token1] = ACTIONS(581),
    [aux_sym_entrypoint_token1] = ACTIONS(581),
    [aux_sym_env_token1] = ACTIONS(581),
    [aux_sym_expose_token1] = ACTIONS(581),
    [aux_sym_from_token1] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(581),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [aux_sym_add_token1] = ACTIONS(583),
    [aux_sym_arg_token1] = ACTIONS(583),
    [aux_sym_cmd_token1] = ACTIONS(583),
    [aux_sym_copy_token1] = ACTIONS(583),
    [aux_sym_entrypoint_token1] = ACTIONS(583),
    [aux_sym_env_token1] = ACTIONS(583),
    [aux_sym_expose_token1] = ACTIONS(583),
    [aux_sym_from_token1] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(583),
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [aux_sym_add_token1] = ACTIONS(573),
    [aux_sym_arg_token1] = ACTIONS(573),
    [aux_sym_cmd_token1] = ACTIONS(573),
    [aux_sym_copy_token1] = ACTIONS(573),
    [aux_sym_entrypoint_token1] = ACTIONS(573),
    [aux_sym_env_token1] = ACTIONS(573),
    [aux_sym_expose_token1] = ACTIONS(573),
    [aux_sym_from_token1] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(585),
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
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_add_token1] = ACTIONS(517),
    [aux_sym_arg_token1] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_copy_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_env_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [aux_sym_healthcheck_token1] = ACTIONS(517),
    [aux_sym_label_token1] = ACTIONS(517),
    [aux_sym_maintainer_token1] = ACTIONS(517),
    [aux_sym_onbuild_token1] = ACTIONS(517),
    [aux_sym_run_token1] = ACTIONS(517),
    [aux_sym_shell_token1] = ACTIONS(517),
    [aux_sym_stopsignal_token1] = ACTIONS(517),
    [aux_sym_user_token1] = ACTIONS(517),
    [aux_sym_volume_token1] = ACTIONS(517),
    [aux_sym_workdir_token1] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(517),
    [sym__space_no_newline] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(587),
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
    [aux_sym_env_key_token1] = ACTIONS(587),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
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
    [sym__space_no_newline] = ACTIONS(553),
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
    [sym__space_no_newline] = ACTIONS(593),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
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
    [sym__space_no_newline] = ACTIONS(597),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
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
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_add_token1] = ACTIONS(496),
    [aux_sym_arg_token1] = ACTIONS(496),
    [aux_sym_cmd_token1] = ACTIONS(496),
    [aux_sym_copy_token1] = ACTIONS(496),
    [aux_sym_entrypoint_token1] = ACTIONS(496),
    [aux_sym_env_token1] = ACTIONS(496),
    [aux_sym_expose_token1] = ACTIONS(496),
    [aux_sym_from_token1] = ACTIONS(496),
    [aux_sym_healthcheck_token1] = ACTIONS(496),
    [aux_sym_label_token1] = ACTIONS(496),
    [aux_sym_maintainer_token1] = ACTIONS(496),
    [aux_sym_onbuild_token1] = ACTIONS(496),
    [aux_sym_run_token1] = ACTIONS(496),
    [aux_sym_shell_token1] = ACTIONS(496),
    [aux_sym_stopsignal_token1] = ACTIONS(496),
    [aux_sym_user_token1] = ACTIONS(496),
    [aux_sym_volume_token1] = ACTIONS(496),
    [aux_sym_workdir_token1] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(496),
    [sym__space_no_newline] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
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
    [sym__space_no_newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(599),
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
    [aux_sym_env_key_token1] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(321),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym__space_no_newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(603),
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
    [aux_sym_env_key_token1] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(607),
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
    [aux_sym_env_key_token1] = ACTIONS(607),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
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
    [sym__space_no_newline] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(615),
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
    [aux_sym_env_key_token1] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(619),
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
    [aux_sym_env_key_token1] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
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
  [179] = {
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
  [180] = {
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
  [181] = {
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
  [182] = {
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
  [183] = {
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
  [184] = {
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
  [185] = {
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
  [186] = {
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
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(303),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [190] = {
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
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [aux_sym_add_token1] = ACTIONS(377),
    [aux_sym_arg_token1] = ACTIONS(377),
    [aux_sym_cmd_token1] = ACTIONS(377),
    [aux_sym_copy_token1] = ACTIONS(377),
    [aux_sym_entrypoint_token1] = ACTIONS(377),
    [aux_sym_env_token1] = ACTIONS(377),
    [aux_sym_expose_token1] = ACTIONS(377),
    [aux_sym_from_token1] = ACTIONS(377),
    [aux_sym_healthcheck_token1] = ACTIONS(377),
    [aux_sym_label_token1] = ACTIONS(377),
    [aux_sym_maintainer_token1] = ACTIONS(377),
    [aux_sym_onbuild_token1] = ACTIONS(377),
    [aux_sym_run_token1] = ACTIONS(377),
    [aux_sym_shell_token1] = ACTIONS(377),
    [aux_sym_stopsignal_token1] = ACTIONS(377),
    [aux_sym_user_token1] = ACTIONS(377),
    [aux_sym_volume_token1] = ACTIONS(377),
    [aux_sym_workdir_token1] = ACTIONS(377),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(377),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
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
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [aux_sym_add_token1] = ACTIONS(284),
    [aux_sym_arg_token1] = ACTIONS(284),
    [aux_sym_cmd_token1] = ACTIONS(284),
    [aux_sym_copy_token1] = ACTIONS(284),
    [aux_sym_entrypoint_token1] = ACTIONS(284),
    [aux_sym_env_token1] = ACTIONS(284),
    [aux_sym_expose_token1] = ACTIONS(284),
    [aux_sym_from_token1] = ACTIONS(284),
    [aux_sym_healthcheck_token1] = ACTIONS(284),
    [aux_sym_label_token1] = ACTIONS(284),
    [aux_sym_maintainer_token1] = ACTIONS(284),
    [aux_sym_onbuild_token1] = ACTIONS(284),
    [aux_sym_run_token1] = ACTIONS(284),
    [aux_sym_shell_token1] = ACTIONS(284),
    [aux_sym_stopsignal_token1] = ACTIONS(284),
    [aux_sym_user_token1] = ACTIONS(284),
    [aux_sym_volume_token1] = ACTIONS(284),
    [aux_sym_workdir_token1] = ACTIONS(284),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(284),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [199] = {
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
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(653),
    [aux_sym_add_token1] = ACTIONS(653),
    [aux_sym_arg_token1] = ACTIONS(653),
    [aux_sym_cmd_token1] = ACTIONS(653),
    [aux_sym_copy_token1] = ACTIONS(653),
    [aux_sym_entrypoint_token1] = ACTIONS(653),
    [aux_sym_env_token1] = ACTIONS(653),
    [aux_sym_expose_token1] = ACTIONS(653),
    [aux_sym_from_token1] = ACTIONS(653),
    [aux_sym_healthcheck_token1] = ACTIONS(653),
    [aux_sym_label_token1] = ACTIONS(653),
    [aux_sym_maintainer_token1] = ACTIONS(653),
    [aux_sym_onbuild_token1] = ACTIONS(653),
    [aux_sym_run_token1] = ACTIONS(653),
    [aux_sym_shell_token1] = ACTIONS(653),
    [aux_sym_stopsignal_token1] = ACTIONS(653),
    [aux_sym_user_token1] = ACTIONS(653),
    [aux_sym_volume_token1] = ACTIONS(653),
    [aux_sym_workdir_token1] = ACTIONS(653),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [aux_sym_add_token1] = ACTIONS(655),
    [aux_sym_arg_token1] = ACTIONS(655),
    [aux_sym_cmd_token1] = ACTIONS(655),
    [aux_sym_copy_token1] = ACTIONS(655),
    [aux_sym_entrypoint_token1] = ACTIONS(655),
    [aux_sym_env_token1] = ACTIONS(655),
    [aux_sym_expose_token1] = ACTIONS(655),
    [aux_sym_from_token1] = ACTIONS(655),
    [aux_sym_healthcheck_token1] = ACTIONS(655),
    [aux_sym_label_token1] = ACTIONS(655),
    [aux_sym_maintainer_token1] = ACTIONS(655),
    [aux_sym_onbuild_token1] = ACTIONS(655),
    [aux_sym_run_token1] = ACTIONS(655),
    [aux_sym_shell_token1] = ACTIONS(655),
    [aux_sym_stopsignal_token1] = ACTIONS(655),
    [aux_sym_user_token1] = ACTIONS(655),
    [aux_sym_volume_token1] = ACTIONS(655),
    [aux_sym_workdir_token1] = ACTIONS(655),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [aux_sym_add_token1] = ACTIONS(657),
    [aux_sym_arg_token1] = ACTIONS(657),
    [aux_sym_cmd_token1] = ACTIONS(657),
    [aux_sym_copy_token1] = ACTIONS(657),
    [aux_sym_entrypoint_token1] = ACTIONS(657),
    [aux_sym_env_token1] = ACTIONS(657),
    [aux_sym_expose_token1] = ACTIONS(657),
    [aux_sym_from_token1] = ACTIONS(657),
    [aux_sym_healthcheck_token1] = ACTIONS(657),
    [aux_sym_label_token1] = ACTIONS(657),
    [aux_sym_maintainer_token1] = ACTIONS(657),
    [aux_sym_onbuild_token1] = ACTIONS(657),
    [aux_sym_run_token1] = ACTIONS(657),
    [aux_sym_shell_token1] = ACTIONS(657),
    [aux_sym_stopsignal_token1] = ACTIONS(657),
    [aux_sym_user_token1] = ACTIONS(657),
    [aux_sym_volume_token1] = ACTIONS(657),
    [aux_sym_workdir_token1] = ACTIONS(657),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(659),
    [aux_sym_add_token1] = ACTIONS(659),
    [aux_sym_arg_token1] = ACTIONS(659),
    [aux_sym_cmd_token1] = ACTIONS(659),
    [aux_sym_copy_token1] = ACTIONS(659),
    [aux_sym_entrypoint_token1] = ACTIONS(659),
    [aux_sym_env_token1] = ACTIONS(659),
    [aux_sym_expose_token1] = ACTIONS(659),
    [aux_sym_from_token1] = ACTIONS(659),
    [aux_sym_healthcheck_token1] = ACTIONS(659),
    [aux_sym_label_token1] = ACTIONS(659),
    [aux_sym_maintainer_token1] = ACTIONS(659),
    [aux_sym_onbuild_token1] = ACTIONS(659),
    [aux_sym_run_token1] = ACTIONS(659),
    [aux_sym_shell_token1] = ACTIONS(659),
    [aux_sym_stopsignal_token1] = ACTIONS(659),
    [aux_sym_user_token1] = ACTIONS(659),
    [aux_sym_volume_token1] = ACTIONS(659),
    [aux_sym_workdir_token1] = ACTIONS(659),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [204] = {
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
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(385),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [206] = {
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
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(661),
    [aux_sym_add_token1] = ACTIONS(661),
    [aux_sym_arg_token1] = ACTIONS(661),
    [aux_sym_cmd_token1] = ACTIONS(661),
    [aux_sym_copy_token1] = ACTIONS(661),
    [aux_sym_entrypoint_token1] = ACTIONS(661),
    [aux_sym_env_token1] = ACTIONS(661),
    [aux_sym_expose_token1] = ACTIONS(661),
    [aux_sym_from_token1] = ACTIONS(661),
    [aux_sym_healthcheck_token1] = ACTIONS(661),
    [aux_sym_label_token1] = ACTIONS(661),
    [aux_sym_maintainer_token1] = ACTIONS(661),
    [aux_sym_onbuild_token1] = ACTIONS(661),
    [aux_sym_run_token1] = ACTIONS(661),
    [aux_sym_shell_token1] = ACTIONS(661),
    [aux_sym_stopsignal_token1] = ACTIONS(661),
    [aux_sym_user_token1] = ACTIONS(661),
    [aux_sym_volume_token1] = ACTIONS(661),
    [aux_sym_workdir_token1] = ACTIONS(661),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(661),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [aux_sym_add_token1] = ACTIONS(663),
    [aux_sym_arg_token1] = ACTIONS(663),
    [aux_sym_cmd_token1] = ACTIONS(663),
    [aux_sym_copy_token1] = ACTIONS(663),
    [aux_sym_entrypoint_token1] = ACTIONS(663),
    [aux_sym_env_token1] = ACTIONS(663),
    [aux_sym_expose_token1] = ACTIONS(663),
    [aux_sym_from_token1] = ACTIONS(663),
    [aux_sym_healthcheck_token1] = ACTIONS(663),
    [aux_sym_label_token1] = ACTIONS(663),
    [aux_sym_maintainer_token1] = ACTIONS(663),
    [aux_sym_onbuild_token1] = ACTIONS(663),
    [aux_sym_run_token1] = ACTIONS(663),
    [aux_sym_shell_token1] = ACTIONS(663),
    [aux_sym_stopsignal_token1] = ACTIONS(663),
    [aux_sym_user_token1] = ACTIONS(663),
    [aux_sym_volume_token1] = ACTIONS(663),
    [aux_sym_workdir_token1] = ACTIONS(663),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [aux_sym_add_token1] = ACTIONS(665),
    [aux_sym_arg_token1] = ACTIONS(665),
    [aux_sym_cmd_token1] = ACTIONS(665),
    [aux_sym_copy_token1] = ACTIONS(665),
    [aux_sym_entrypoint_token1] = ACTIONS(665),
    [aux_sym_env_token1] = ACTIONS(665),
    [aux_sym_expose_token1] = ACTIONS(665),
    [aux_sym_from_token1] = ACTIONS(665),
    [aux_sym_healthcheck_token1] = ACTIONS(665),
    [aux_sym_label_token1] = ACTIONS(665),
    [aux_sym_maintainer_token1] = ACTIONS(665),
    [aux_sym_onbuild_token1] = ACTIONS(665),
    [aux_sym_run_token1] = ACTIONS(665),
    [aux_sym_shell_token1] = ACTIONS(665),
    [aux_sym_stopsignal_token1] = ACTIONS(665),
    [aux_sym_user_token1] = ACTIONS(665),
    [aux_sym_volume_token1] = ACTIONS(665),
    [aux_sym_workdir_token1] = ACTIONS(665),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(665),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [210] = {
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
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(667),
    [aux_sym_add_token1] = ACTIONS(667),
    [aux_sym_arg_token1] = ACTIONS(667),
    [aux_sym_cmd_token1] = ACTIONS(667),
    [aux_sym_copy_token1] = ACTIONS(667),
    [aux_sym_entrypoint_token1] = ACTIONS(667),
    [aux_sym_env_token1] = ACTIONS(667),
    [aux_sym_expose_token1] = ACTIONS(667),
    [aux_sym_from_token1] = ACTIONS(667),
    [aux_sym_healthcheck_token1] = ACTIONS(667),
    [aux_sym_label_token1] = ACTIONS(667),
    [aux_sym_maintainer_token1] = ACTIONS(667),
    [aux_sym_onbuild_token1] = ACTIONS(667),
    [aux_sym_run_token1] = ACTIONS(667),
    [aux_sym_shell_token1] = ACTIONS(667),
    [aux_sym_stopsignal_token1] = ACTIONS(667),
    [aux_sym_user_token1] = ACTIONS(667),
    [aux_sym_volume_token1] = ACTIONS(667),
    [aux_sym_workdir_token1] = ACTIONS(667),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(667),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [aux_sym_add_token1] = ACTIONS(669),
    [aux_sym_arg_token1] = ACTIONS(669),
    [aux_sym_cmd_token1] = ACTIONS(669),
    [aux_sym_copy_token1] = ACTIONS(669),
    [aux_sym_entrypoint_token1] = ACTIONS(669),
    [aux_sym_env_token1] = ACTIONS(669),
    [aux_sym_expose_token1] = ACTIONS(669),
    [aux_sym_from_token1] = ACTIONS(669),
    [aux_sym_healthcheck_token1] = ACTIONS(669),
    [aux_sym_label_token1] = ACTIONS(669),
    [aux_sym_maintainer_token1] = ACTIONS(669),
    [aux_sym_onbuild_token1] = ACTIONS(669),
    [aux_sym_run_token1] = ACTIONS(669),
    [aux_sym_shell_token1] = ACTIONS(669),
    [aux_sym_stopsignal_token1] = ACTIONS(669),
    [aux_sym_user_token1] = ACTIONS(669),
    [aux_sym_volume_token1] = ACTIONS(669),
    [aux_sym_workdir_token1] = ACTIONS(669),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(671),
    [aux_sym_add_token1] = ACTIONS(671),
    [aux_sym_arg_token1] = ACTIONS(671),
    [aux_sym_cmd_token1] = ACTIONS(671),
    [aux_sym_copy_token1] = ACTIONS(671),
    [aux_sym_entrypoint_token1] = ACTIONS(671),
    [aux_sym_env_token1] = ACTIONS(671),
    [aux_sym_expose_token1] = ACTIONS(671),
    [aux_sym_from_token1] = ACTIONS(671),
    [aux_sym_healthcheck_token1] = ACTIONS(671),
    [aux_sym_label_token1] = ACTIONS(671),
    [aux_sym_maintainer_token1] = ACTIONS(671),
    [aux_sym_onbuild_token1] = ACTIONS(671),
    [aux_sym_run_token1] = ACTIONS(671),
    [aux_sym_shell_token1] = ACTIONS(671),
    [aux_sym_stopsignal_token1] = ACTIONS(671),
    [aux_sym_user_token1] = ACTIONS(671),
    [aux_sym_volume_token1] = ACTIONS(671),
    [aux_sym_workdir_token1] = ACTIONS(671),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(671),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(673),
    [aux_sym_add_token1] = ACTIONS(673),
    [aux_sym_arg_token1] = ACTIONS(673),
    [aux_sym_cmd_token1] = ACTIONS(673),
    [aux_sym_copy_token1] = ACTIONS(673),
    [aux_sym_entrypoint_token1] = ACTIONS(673),
    [aux_sym_env_token1] = ACTIONS(673),
    [aux_sym_expose_token1] = ACTIONS(673),
    [aux_sym_from_token1] = ACTIONS(673),
    [aux_sym_healthcheck_token1] = ACTIONS(673),
    [aux_sym_label_token1] = ACTIONS(673),
    [aux_sym_maintainer_token1] = ACTIONS(673),
    [aux_sym_onbuild_token1] = ACTIONS(673),
    [aux_sym_run_token1] = ACTIONS(673),
    [aux_sym_shell_token1] = ACTIONS(673),
    [aux_sym_stopsignal_token1] = ACTIONS(673),
    [aux_sym_user_token1] = ACTIONS(673),
    [aux_sym_volume_token1] = ACTIONS(673),
    [aux_sym_workdir_token1] = ACTIONS(673),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(675),
    [aux_sym_add_token1] = ACTIONS(675),
    [aux_sym_arg_token1] = ACTIONS(675),
    [aux_sym_cmd_token1] = ACTIONS(675),
    [aux_sym_copy_token1] = ACTIONS(675),
    [aux_sym_entrypoint_token1] = ACTIONS(675),
    [aux_sym_env_token1] = ACTIONS(675),
    [aux_sym_expose_token1] = ACTIONS(675),
    [aux_sym_from_token1] = ACTIONS(675),
    [aux_sym_healthcheck_token1] = ACTIONS(675),
    [aux_sym_label_token1] = ACTIONS(675),
    [aux_sym_maintainer_token1] = ACTIONS(675),
    [aux_sym_onbuild_token1] = ACTIONS(675),
    [aux_sym_run_token1] = ACTIONS(675),
    [aux_sym_shell_token1] = ACTIONS(675),
    [aux_sym_stopsignal_token1] = ACTIONS(675),
    [aux_sym_user_token1] = ACTIONS(675),
    [aux_sym_volume_token1] = ACTIONS(675),
    [aux_sym_workdir_token1] = ACTIONS(675),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
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
  [217] = {
    [sym_repository] = STATE(241),
    [sym__repository_start] = STATE(230),
    [sym_image] = STATE(125),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(679),
    [aux_sym_platform_token1] = ACTIONS(681),
    [aux_sym__repository_start_token1] = ACTIONS(679),
    [aux_sym__repository_start_token4] = ACTIONS(683),
    [aux_sym__repository_start_token6] = ACTIONS(683),
    [aux_sym__repository_start_token8] = ACTIONS(685),
    [aux_sym__repository_start_token10] = ACTIONS(685),
    [aux_sym__repository_start_token12] = ACTIONS(687),
    [aux_sym__repository_start_token14] = ACTIONS(687),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [sym__hc_interval] = STATE(220),
    [sym__hc_timeout] = STATE(220),
    [sym__hc_start_period] = STATE(220),
    [sym__hc_retries] = STATE(220),
    [sym__hc_options] = STATE(220),
    [sym__hc_command] = STATE(197),
    [aux_sym_healthcheck_repeat1] = STATE(220),
    [aux_sym_cmd_token1] = ACTIONS(689),
    [sym_hc_none] = ACTIONS(691),
    [anon_sym_DASH_DASHinterval] = ACTIONS(693),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(695),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(697),
    [anon_sym_DASH_DASHretires] = ACTIONS(699),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [219] = {
    [sym_repository] = STATE(240),
    [sym__repository_start] = STATE(230),
    [sym_image] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(679),
    [aux_sym_platform_token1] = ACTIONS(681),
    [aux_sym__repository_start_token1] = ACTIONS(679),
    [aux_sym__repository_start_token4] = ACTIONS(683),
    [aux_sym__repository_start_token6] = ACTIONS(683),
    [aux_sym__repository_start_token8] = ACTIONS(685),
    [aux_sym__repository_start_token10] = ACTIONS(685),
    [aux_sym__repository_start_token12] = ACTIONS(687),
    [aux_sym__repository_start_token14] = ACTIONS(687),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [220] = {
    [sym__hc_interval] = STATE(229),
    [sym__hc_timeout] = STATE(229),
    [sym__hc_start_period] = STATE(229),
    [sym__hc_retries] = STATE(229),
    [sym__hc_options] = STATE(229),
    [sym__hc_command] = STATE(200),
    [aux_sym_healthcheck_repeat1] = STATE(229),
    [aux_sym_cmd_token1] = ACTIONS(689),
    [anon_sym_DASH_DASHinterval] = ACTIONS(693),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(695),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(697),
    [anon_sym_DASH_DASHretires] = ACTIONS(699),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [221] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(183),
    [sym__port] = STATE(96),
    [sym_port] = STATE(96),
    [sym_port_range] = STATE(96),
    [sym__port_part] = STATE(88),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [222] = {
    [sym_digest] = STATE(168),
    [anon_sym_sha256_COLON] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym__repository_continued] = STATE(223),
    [aux_sym_repository_repeat1] = STATE(223),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_platform_token1] = ACTIONS(718),
    [aux_sym__repository_start_token1] = ACTIONS(715),
    [aux_sym__repository_start_token4] = ACTIONS(721),
    [aux_sym__repository_start_token6] = ACTIONS(721),
    [aux_sym__repository_start_token8] = ACTIONS(724),
    [aux_sym__repository_start_token10] = ACTIONS(724),
    [aux_sym__repository_start_token12] = ACTIONS(727),
    [aux_sym__repository_start_token14] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym_digest] = STATE(166),
    [anon_sym_sha256_COLON] = ACTIONS(730),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym__repository_continued] = STATE(223),
    [aux_sym_repository_repeat1] = STATE(223),
    [anon_sym_DOLLAR] = ACTIONS(732),
    [aux_sym_platform_token1] = ACTIONS(735),
    [aux_sym__repository_start_token1] = ACTIONS(732),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(738),
    [aux_sym__repository_start_token8] = ACTIONS(741),
    [aux_sym__repository_start_token10] = ACTIONS(741),
    [aux_sym__repository_start_token12] = ACTIONS(744),
    [aux_sym__repository_start_token14] = ACTIONS(744),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_digest] = STATE(169),
    [anon_sym_sha256_COLON] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_digest] = STATE(163),
    [anon_sym_sha256_COLON] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_digest] = STATE(156),
    [anon_sym_sha256_COLON] = ACTIONS(751),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym__hc_interval] = STATE(229),
    [sym__hc_timeout] = STATE(229),
    [sym__hc_start_period] = STATE(229),
    [sym__hc_retries] = STATE(229),
    [sym__hc_options] = STATE(229),
    [aux_sym_healthcheck_repeat1] = STATE(229),
    [aux_sym_cmd_token1] = ACTIONS(753),
    [anon_sym_DASH_DASHinterval] = ACTIONS(755),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(758),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(761),
    [anon_sym_DASH_DASHretires] = ACTIONS(764),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [230] = {
    [sym__repository_continued] = STATE(225),
    [aux_sym_repository_repeat1] = STATE(225),
    [anon_sym_DOLLAR] = ACTIONS(767),
    [aux_sym_platform_token1] = ACTIONS(770),
    [aux_sym__repository_start_token1] = ACTIONS(767),
    [aux_sym__repository_start_token4] = ACTIONS(773),
    [aux_sym__repository_start_token6] = ACTIONS(773),
    [aux_sym__repository_start_token8] = ACTIONS(776),
    [aux_sym__repository_start_token10] = ACTIONS(776),
    [aux_sym__repository_start_token12] = ACTIONS(779),
    [aux_sym__repository_start_token14] = ACTIONS(779),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_digest] = STATE(165),
    [anon_sym_sha256_COLON] = ACTIONS(782),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_as_name] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym_as_name] = STATE(206),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_digest] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_as_name] = STATE(190),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym_as_name] = STATE(179),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_tag] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_platform_token1] = ACTIONS(796),
    [aux_sym__repository_start_token1] = ACTIONS(794),
    [aux_sym__repository_start_token4] = ACTIONS(798),
    [aux_sym__repository_start_token6] = ACTIONS(798),
    [aux_sym__repository_start_token8] = ACTIONS(800),
    [aux_sym__repository_start_token10] = ACTIONS(800),
    [aux_sym__repository_start_token12] = ACTIONS(802),
    [aux_sym__repository_start_token14] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_as_name] = STATE(212),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_as_name] = STATE(180),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_image] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_platform_token1] = ACTIONS(806),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(808),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [aux_sym__repository_start_token10] = ACTIONS(810),
    [aux_sym__repository_start_token12] = ACTIONS(812),
    [aux_sym__repository_start_token14] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_image] = STATE(117),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_platform_token1] = ACTIONS(806),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(808),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [aux_sym__repository_start_token10] = ACTIONS(810),
    [aux_sym__repository_start_token12] = ACTIONS(812),
    [aux_sym__repository_start_token14] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_as_name] = STATE(187),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_digest] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_digest] = STATE(167),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_as_name] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_digest] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_as_name] = STATE(204),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_platform_token1] = ACTIONS(786),
    [aux_sym__repository_start_token1] = ACTIONS(784),
    [aux_sym__repository_start_token4] = ACTIONS(788),
    [aux_sym__repository_start_token6] = ACTIONS(788),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(792),
    [aux_sym__repository_start_token14] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_tag] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_platform_token1] = ACTIONS(796),
    [aux_sym__repository_start_token1] = ACTIONS(794),
    [aux_sym__repository_start_token4] = ACTIONS(798),
    [aux_sym__repository_start_token6] = ACTIONS(798),
    [aux_sym__repository_start_token8] = ACTIONS(800),
    [aux_sym__repository_start_token10] = ACTIONS(800),
    [aux_sym__repository_start_token12] = ACTIONS(802),
    [aux_sym__repository_start_token14] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_tag] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_platform_token1] = ACTIONS(796),
    [aux_sym__repository_start_token1] = ACTIONS(794),
    [aux_sym__repository_start_token4] = ACTIONS(798),
    [aux_sym__repository_start_token6] = ACTIONS(798),
    [aux_sym__repository_start_token8] = ACTIONS(800),
    [aux_sym__repository_start_token10] = ACTIONS(800),
    [aux_sym__repository_start_token12] = ACTIONS(802),
    [aux_sym__repository_start_token14] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_tag] = STATE(150),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_platform_token1] = ACTIONS(796),
    [aux_sym__repository_start_token1] = ACTIONS(794),
    [aux_sym__repository_start_token4] = ACTIONS(798),
    [aux_sym__repository_start_token6] = ACTIONS(798),
    [aux_sym__repository_start_token8] = ACTIONS(800),
    [aux_sym__repository_start_token10] = ACTIONS(800),
    [aux_sym__repository_start_token12] = ACTIONS(802),
    [aux_sym__repository_start_token14] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_digest] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_platform_token1] = ACTIONS(707),
    [aux_sym__repository_start_token1] = ACTIONS(705),
    [aux_sym__repository_start_token4] = ACTIONS(709),
    [aux_sym__repository_start_token6] = ACTIONS(709),
    [aux_sym__repository_start_token8] = ACTIONS(711),
    [aux_sym__repository_start_token10] = ACTIONS(711),
    [aux_sym__repository_start_token12] = ACTIONS(713),
    [aux_sym__repository_start_token14] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [anon_sym_DOLLAR] = ACTIONS(814),
    [aux_sym_platform_token1] = ACTIONS(816),
    [aux_sym__repository_start_token1] = ACTIONS(814),
    [aux_sym__repository_start_token4] = ACTIONS(814),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(814),
    [aux_sym__repository_start_token10] = ACTIONS(814),
    [aux_sym__repository_start_token12] = ACTIONS(814),
    [aux_sym__repository_start_token14] = ACTIONS(814),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_platform_token1] = ACTIONS(820),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(818),
    [aux_sym__repository_start_token6] = ACTIONS(818),
    [aux_sym__repository_start_token8] = ACTIONS(818),
    [aux_sym__repository_start_token10] = ACTIONS(818),
    [aux_sym__repository_start_token12] = ACTIONS(818),
    [aux_sym__repository_start_token14] = ACTIONS(818),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [sym__port_spec] = STATE(446),
    [sym_mapped_port] = STATE(446),
    [sym__port] = STATE(408),
    [sym_port] = STATE(416),
    [sym_port_range] = STATE(416),
    [sym__port_part] = STATE(390),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
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
  [257] = {
    [sym__chown] = STATE(275),
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(55),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(832),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(834),
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
    [anon_sym_DOLLAR] = ACTIONS(844),
    [aux_sym_platform_token1] = ACTIONS(846),
    [aux_sym__repository_start_token1] = ACTIONS(844),
    [aux_sym__repository_start_token4] = ACTIONS(844),
    [aux_sym__repository_start_token6] = ACTIONS(844),
    [aux_sym__repository_start_token8] = ACTIONS(844),
    [aux_sym__repository_start_token10] = ACTIONS(844),
    [aux_sym__repository_start_token12] = ACTIONS(844),
    [aux_sym__repository_start_token14] = ACTIONS(844),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [261] = {
    [anon_sym_DOLLAR] = ACTIONS(848),
    [aux_sym_platform_token1] = ACTIONS(850),
    [aux_sym__repository_start_token1] = ACTIONS(848),
    [aux_sym__repository_start_token4] = ACTIONS(848),
    [aux_sym__repository_start_token6] = ACTIONS(848),
    [aux_sym__repository_start_token8] = ACTIONS(848),
    [aux_sym__repository_start_token10] = ACTIONS(848),
    [aux_sym__repository_start_token12] = ACTIONS(848),
    [aux_sym__repository_start_token14] = ACTIONS(848),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
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
  [263] = {
    [anon_sym_DOLLAR] = ACTIONS(852),
    [aux_sym_platform_token1] = ACTIONS(854),
    [aux_sym__repository_start_token1] = ACTIONS(852),
    [aux_sym__repository_start_token4] = ACTIONS(852),
    [aux_sym__repository_start_token6] = ACTIONS(852),
    [aux_sym__repository_start_token8] = ACTIONS(852),
    [aux_sym__repository_start_token10] = ACTIONS(852),
    [aux_sym__repository_start_token12] = ACTIONS(852),
    [aux_sym__repository_start_token14] = ACTIONS(852),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym_platform_token1] = ACTIONS(858),
    [aux_sym__repository_start_token1] = ACTIONS(856),
    [aux_sym__repository_start_token4] = ACTIONS(856),
    [aux_sym__repository_start_token6] = ACTIONS(856),
    [aux_sym__repository_start_token8] = ACTIONS(856),
    [aux_sym__repository_start_token10] = ACTIONS(856),
    [aux_sym__repository_start_token12] = ACTIONS(856),
    [aux_sym__repository_start_token14] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_DOLLAR] = ACTIONS(860),
    [aux_sym_platform_token1] = ACTIONS(862),
    [aux_sym__repository_start_token1] = ACTIONS(860),
    [aux_sym__repository_start_token4] = ACTIONS(860),
    [aux_sym__repository_start_token6] = ACTIONS(860),
    [aux_sym__repository_start_token8] = ACTIONS(860),
    [aux_sym__repository_start_token10] = ACTIONS(860),
    [aux_sym__repository_start_token12] = ACTIONS(860),
    [aux_sym__repository_start_token14] = ACTIONS(860),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
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
  [267] = {
    [anon_sym_DOLLAR] = ACTIONS(864),
    [aux_sym_platform_token1] = ACTIONS(866),
    [aux_sym__repository_start_token1] = ACTIONS(864),
    [aux_sym__repository_start_token4] = ACTIONS(864),
    [aux_sym__repository_start_token6] = ACTIONS(864),
    [aux_sym__repository_start_token8] = ACTIONS(864),
    [aux_sym__repository_start_token10] = ACTIONS(864),
    [aux_sym__repository_start_token12] = ACTIONS(864),
    [aux_sym__repository_start_token14] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
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
  [269] = {
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym_platform_token1] = ACTIONS(870),
    [aux_sym__repository_start_token1] = ACTIONS(868),
    [aux_sym__repository_start_token4] = ACTIONS(868),
    [aux_sym__repository_start_token6] = ACTIONS(868),
    [aux_sym__repository_start_token8] = ACTIONS(868),
    [aux_sym__repository_start_token10] = ACTIONS(868),
    [aux_sym__repository_start_token12] = ACTIONS(868),
    [aux_sym__repository_start_token14] = ACTIONS(868),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [sym__port] = STATE(434),
    [sym_port] = STATE(434),
    [sym_port_range] = STATE(434),
    [sym__port_part] = STATE(390),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(872),
  },
  [272] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(49),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(874),
  },
  [273] = {
    [sym__port] = STATE(185),
    [sym_port] = STATE(185),
    [sym_port_range] = STATE(185),
    [sym__port_part] = STATE(88),
    [anon_sym_DQUOTE] = ACTIONS(876),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [sym__port] = STATE(122),
    [sym_port] = STATE(122),
    [sym_port_range] = STATE(122),
    [sym__port_part] = STATE(88),
    [anon_sym_DQUOTE] = ACTIONS(876),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym_path] = STATE(77),
    [aux_sym__paths] = STATE(47),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [aux_sym_path_token1] = ACTIONS(276),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [sym_chown] = STATE(357),
    [sym_user_name] = STATE(277),
    [sym_user_id] = STATE(309),
    [anon_sym_DOLLAR] = ACTIONS(878),
    [aux_sym_user_name_token1] = ACTIONS(880),
    [aux_sym_user_id_token1] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [anon_sym_DQUOTE] = ACTIONS(884),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_DOLLAR] = ACTIONS(884),
    [aux_sym_path_token1] = ACTIONS(888),
    [aux_sym_path_token2] = ACTIONS(884),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym_variable_default_value] = STATE(523),
    [sym_variable_this_or_null] = STATE(523),
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [aux_sym_cmd_token1] = ACTIONS(896),
    [anon_sym_DASH_DASHinterval] = ACTIONS(896),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(896),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(896),
    [anon_sym_DASH_DASHretires] = ACTIONS(896),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [sym_variable_default_value] = STATE(514),
    [sym_variable_this_or_null] = STATE(514),
    [anon_sym_RBRACE] = ACTIONS(898),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [aux_sym_cmd_token1] = ACTIONS(900),
    [anon_sym_DASH_DASHinterval] = ACTIONS(900),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(900),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(900),
    [anon_sym_DASH_DASHretires] = ACTIONS(900),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [sym_variable_default_value] = STATE(508),
    [sym_variable_this_or_null] = STATE(508),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym_template_expr_less_than_equals] = STATE(475),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [aux_sym__repository_start_repeat1] = STATE(292),
    [anon_sym_DOLLAR] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(908),
    [aux_sym__repository_start_token2] = ACTIONS(906),
    [aux_sym__repository_start_token3] = ACTIONS(910),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [aux_sym_cmd_token1] = ACTIONS(912),
    [anon_sym_DASH_DASHinterval] = ACTIONS(912),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(912),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(912),
    [anon_sym_DASH_DASHretires] = ACTIONS(912),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [aux_sym_cmd_token1] = ACTIONS(914),
    [anon_sym_DASH_DASHinterval] = ACTIONS(914),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(914),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(914),
    [anon_sym_DASH_DASHretires] = ACTIONS(914),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym_variable_default_value] = STATE(502),
    [sym_variable_this_or_null] = STATE(502),
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_port_protocol] = STATE(395),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(289),
    [aux_sym__repository_start_token13] = ACTIONS(920),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [290] = {
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [aux_sym_path_token1] = ACTIONS(925),
    [aux_sym_path_token2] = ACTIONS(583),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [aux_sym_cmd_token1] = ACTIONS(927),
    [anon_sym_DASH_DASHinterval] = ACTIONS(927),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(927),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(927),
    [anon_sym_DASH_DASHretires] = ACTIONS(927),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [aux_sym__repository_start_repeat1] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token2] = ACTIONS(906),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym__repository_start_repeat2] = STATE(329),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [aux_sym__repository_start_token4] = ACTIONS(933),
    [aux_sym__repository_start_token7] = ACTIONS(933),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [aux_sym__repository_start_repeat3] = STATE(330),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [aux_sym__repository_start_token8] = ACTIONS(935),
    [aux_sym__repository_start_token11] = ACTIONS(935),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [aux_sym__repository_start_repeat4] = STATE(331),
    [anon_sym_SLASH] = ACTIONS(929),
    [aux_sym__repository_start_token3] = ACTIONS(931),
    [aux_sym__repository_start_token12] = ACTIONS(937),
    [aux_sym__repository_start_token15] = ACTIONS(937),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [anon_sym_DQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(581),
    [anon_sym_DOLLAR] = ACTIONS(581),
    [aux_sym_path_token1] = ACTIONS(939),
    [aux_sym_path_token2] = ACTIONS(581),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_template_expr_less_than_equals] = STATE(452),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [aux_sym_cmd_token1] = ACTIONS(941),
    [anon_sym_DASH_DASHinterval] = ACTIONS(941),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(941),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(941),
    [anon_sym_DASH_DASHretires] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [sym_port_protocol] = STATE(389),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [sym_template_expr_less_than_equals] = STATE(517),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [sym_template_expr_less_than_equals] = STATE(484),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [aux_sym_cmd_token1] = ACTIONS(943),
    [anon_sym_DASH_DASHinterval] = ACTIONS(943),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(943),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(943),
    [anon_sym_DASH_DASHretires] = ACTIONS(943),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [sym_template_expr_less_than_equals] = STATE(511),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [sym_template_expr_less_than_equals] = STATE(505),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [aux_sym_path_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [anon_sym_DOLLAR] = ACTIONS(947),
    [aux_sym_path_token3] = ACTIONS(947),
    [aux_sym_path_token4] = ACTIONS(949),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [aux_sym_path_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(951),
    [aux_sym_path_token3] = ACTIONS(951),
    [aux_sym_path_token4] = ACTIONS(260),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [sym_port] = STATE(499),
    [sym_port_range] = STATE(499),
    [sym__port_part] = STATE(390),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [sym_variable_default_value] = STATE(531),
    [sym_variable_this_or_null] = STATE(531),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [anon_sym_DQUOTE] = ACTIONS(884),
    [anon_sym_COLON] = ACTIONS(956),
    [anon_sym_DOLLAR] = ACTIONS(884),
    [aux_sym_path_token1] = ACTIONS(888),
    [aux_sym_path_token2] = ACTIONS(884),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_user_name] = STATE(162),
    [sym_user_id] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(958),
    [aux_sym_user_name_token1] = ACTIONS(960),
    [aux_sym_user_id_token1] = ACTIONS(962),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_variable_default_value] = STATE(519),
    [sym_variable_this_or_null] = STATE(519),
    [anon_sym_RBRACE] = ACTIONS(964),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [sym_port] = STATE(483),
    [sym_port_range] = STATE(483),
    [sym__port_part] = STATE(390),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [sym_variable_default_value] = STATE(528),
    [sym_variable_this_or_null] = STATE(528),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [sym_variable_default_value] = STATE(529),
    [sym_variable_this_or_null] = STATE(529),
    [anon_sym_RBRACE] = ACTIONS(968),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_variable_default_value] = STATE(527),
    [sym_variable_this_or_null] = STATE(527),
    [anon_sym_RBRACE] = ACTIONS(970),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [aux_sym_path_repeat1] = STATE(305),
    [anon_sym_DQUOTE] = ACTIONS(972),
    [anon_sym_DOLLAR] = ACTIONS(947),
    [aux_sym_path_token3] = ACTIONS(947),
    [aux_sym_path_token4] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [sym_template_expr_less_than_equals] = STATE(490),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [sym_variable_default_value] = STATE(525),
    [sym_variable_this_or_null] = STATE(525),
    [anon_sym_RBRACE] = ACTIONS(976),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(289),
    [aux_sym__repository_start_token13] = ACTIONS(978),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(980),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(980),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(980),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [320] = {
    [sym_variable_default_value] = STATE(521),
    [sym_variable_this_or_null] = STATE(521),
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_COLON_DASH] = ACTIONS(892),
    [anon_sym_COLON_PLUS] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [sym_template_expr_less_than_equals] = STATE(520),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [aux_sym__repository_start_repeat4] = STATE(322),
    [anon_sym_SLASH] = ACTIONS(158),
    [aux_sym__repository_start_token3] = ACTIONS(160),
    [aux_sym__repository_start_token12] = ACTIONS(984),
    [aux_sym__repository_start_token15] = ACTIONS(984),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [aux_sym__repository_start_repeat3] = STATE(323),
    [anon_sym_SLASH] = ACTIONS(127),
    [aux_sym__repository_start_token3] = ACTIONS(129),
    [aux_sym__repository_start_token8] = ACTIONS(987),
    [aux_sym__repository_start_token11] = ACTIONS(987),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [aux_sym__repository_start_repeat2] = STATE(324),
    [anon_sym_SLASH] = ACTIONS(165),
    [aux_sym__repository_start_token3] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(990),
    [aux_sym__repository_start_token7] = ACTIONS(990),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [sym_template_expr_less_than_equals] = STATE(441),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [326] = {
    [aux_sym_cmd_token1] = ACTIONS(993),
    [anon_sym_DASH_DASHinterval] = ACTIONS(993),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(993),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(993),
    [anon_sym_DASH_DASHretires] = ACTIONS(993),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [sym_template_expr_less_than_equals] = STATE(501),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(319),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(904),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [aux_sym__repository_start_repeat1] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(995),
    [anon_sym_SLASH] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(995),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [aux_sym__repository_start_repeat2] = STATE(324),
    [anon_sym_SLASH] = ACTIONS(998),
    [aux_sym__repository_start_token3] = ACTIONS(1000),
    [aux_sym__repository_start_token4] = ACTIONS(933),
    [aux_sym__repository_start_token7] = ACTIONS(933),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [aux_sym__repository_start_repeat3] = STATE(323),
    [anon_sym_SLASH] = ACTIONS(998),
    [aux_sym__repository_start_token3] = ACTIONS(1000),
    [aux_sym__repository_start_token8] = ACTIONS(935),
    [aux_sym__repository_start_token11] = ACTIONS(935),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [331] = {
    [aux_sym__repository_start_repeat4] = STATE(322),
    [anon_sym_SLASH] = ACTIONS(998),
    [aux_sym__repository_start_token3] = ACTIONS(1000),
    [aux_sym__repository_start_token12] = ACTIONS(937),
    [aux_sym__repository_start_token15] = ACTIONS(937),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [sym_hc_command] = STATE(202),
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(201),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1002),
  },
  [333] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token1] = ACTIONS(205),
    [aux_sym_path_token2] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token3] = ACTIONS(191),
    [aux_sym_path_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [sym_label_value] = STATE(173),
    [anon_sym_DQUOTE] = ACTIONS(1004),
    [aux_sym_env_value_token1] = ACTIONS(1006),
    [aux_sym_label_value_token1] = ACTIONS(1006),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [aux_sym__repository_start_token8] = ACTIONS(187),
    [aux_sym__repository_start_token11] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token4] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [aux_sym_path_token1] = ACTIONS(1008),
    [aux_sym_path_token2] = ACTIONS(639),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [anon_sym_DOLLAR] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(172),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(194),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1010),
  },
  [347] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token1] = ACTIONS(197),
    [aux_sym_path_token2] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [anon_sym_DQUOTE] = ACTIONS(659),
    [anon_sym_DOLLAR] = ACTIONS(659),
    [aux_sym_path_token1] = ACTIONS(1012),
    [aux_sym_path_token2] = ACTIONS(659),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(186),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1014),
  },
  [351] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token3] = ACTIONS(203),
    [aux_sym_path_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [aux_sym__env_pairs] = STATE(99),
    [sym_env_pair] = STATE(99),
    [sym_env_key] = STATE(120),
    [aux_sym_env_key_token1] = ACTIONS(410),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [aux_sym__labels] = STATE(101),
    [sym_label_pair] = STATE(101),
    [sym_label_key] = STATE(433),
    [aux_sym_env_key_token1] = ACTIONS(418),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token3] = ACTIONS(255),
    [aux_sym_path_token4] = ACTIONS(260),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token15] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [anon_sym_DQUOTE] = ACTIONS(1016),
    [anon_sym_DOLLAR] = ACTIONS(1016),
    [aux_sym_path_token1] = ACTIONS(1018),
    [aux_sym_path_token2] = ACTIONS(1016),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(1020),
    [anon_sym_DOLLAR] = ACTIONS(1020),
    [aux_sym_path_token1] = ACTIONS(1022),
    [aux_sym_path_token2] = ACTIONS(1020),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(195),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(211),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1024),
  },
  [360] = {
    [anon_sym_DQUOTE] = ACTIONS(1026),
    [anon_sym_DOLLAR] = ACTIONS(1026),
    [aux_sym_path_token1] = ACTIONS(1028),
    [aux_sym_path_token2] = ACTIONS(1026),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [sym_env_value] = STATE(177),
    [anon_sym_DQUOTE] = ACTIONS(1030),
    [aux_sym_env_value_token1] = ACTIONS(1032),
    [aux_sym_env_value_token2] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [362] = {
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [sym_docker_variable] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [sym__docker_variable] = ACTIONS(1036),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [364] = {
    [sym_docker_variable] = STATE(256),
    [anon_sym_LBRACE] = ACTIONS(1038),
    [sym__docker_variable] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [sym__port_part] = STATE(104),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [sym_docker_variable] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(1042),
    [sym__docker_variable] = ACTIONS(1044),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [anon_sym_DOLLAR] = ACTIONS(1046),
    [aux_sym_port_protocol_token1] = ACTIONS(1048),
    [aux_sym_port_protocol_token2] = ACTIONS(1048),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [sym_docker_variable] = STATE(59),
    [anon_sym_LBRACE] = ACTIONS(1050),
    [sym__docker_variable] = ACTIONS(1052),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [369] = {
    [sym_signal_name] = STATE(215),
    [sym_signal_num] = ACTIONS(1054),
    [aux_sym_signal_name_token1] = ACTIONS(1056),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [sym_docker_variable] = STATE(60),
    [anon_sym_LBRACE] = ACTIONS(1058),
    [sym__docker_variable] = ACTIONS(1060),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [aux_sym_env_value_repeat1] = STATE(371),
    [anon_sym_DQUOTE] = ACTIONS(1062),
    [aux_sym_env_value_token3] = ACTIONS(1064),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [sym_docker_variable] = STATE(362),
    [anon_sym_LBRACE] = ACTIONS(1067),
    [sym__docker_variable] = ACTIONS(1069),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [sym_docker_variable] = STATE(360),
    [anon_sym_LBRACE] = ACTIONS(1071),
    [sym__docker_variable] = ACTIONS(1073),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(1075),
    [sym__docker_variable] = ACTIONS(1077),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [anon_sym_DOLLAR] = ACTIONS(1079),
    [aux_sym_port_protocol_token1] = ACTIONS(1081),
    [aux_sym_port_protocol_token2] = ACTIONS(1081),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [sym_docker_variable] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [sym__docker_variable] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [sym_platform] = STATE(219),
    [anon_sym_DOLLAR] = ACTIONS(1087),
    [aux_sym_platform_token1] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [378] = {
    [anon_sym_DOLLAR] = ACTIONS(1091),
    [aux_sym_workdir_token2] = ACTIONS(1093),
    [aux_sym_workdir_token3] = ACTIONS(1091),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [aux_sym_env_value_repeat1] = STATE(371),
    [anon_sym_DQUOTE] = ACTIONS(1095),
    [aux_sym_env_value_token3] = ACTIONS(1097),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [sym_docker_variable] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(1067),
    [sym__docker_variable] = ACTIONS(1069),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [381] = {
    [sym_docker_variable] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [sym__docker_variable] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [382] = {
    [sym_docker_variable] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(1050),
    [sym__docker_variable] = ACTIONS(1052),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [383] = {
    [sym_docker_variable] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [sym__docker_variable] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [384] = {
    [sym_docker_variable] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [sym__docker_variable] = ACTIONS(1036),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [385] = {
    [sym_docker_variable] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(1099),
    [sym__docker_variable] = ACTIONS(1101),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [386] = {
    [sym_docker_variable] = STATE(112),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [sym__docker_variable] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [sym_docker_variable] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(1075),
    [sym__docker_variable] = ACTIONS(1077),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [388] = {
    [anon_sym_DQUOTE] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(307),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [sym_docker_variable] = STATE(284),
    [anon_sym_LBRACE] = ACTIONS(1042),
    [sym__docker_variable] = ACTIONS(1044),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [sym_docker_variable] = STATE(354),
    [anon_sym_LBRACE] = ACTIONS(1099),
    [sym__docker_variable] = ACTIONS(1101),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [393] = {
    [sym__port_part] = STATE(409),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [sym_docker_variable] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(1075),
    [sym__docker_variable] = ACTIONS(1077),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym_docker_variable] = STATE(121),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [sym__docker_variable] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [397] = {
    [aux_sym_env_value_repeat1] = STATE(371),
    [anon_sym_DQUOTE] = ACTIONS(1109),
    [aux_sym_env_value_token3] = ACTIONS(1097),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [398] = {
    [anon_sym_DOLLAR] = ACTIONS(1111),
    [aux_sym_path_token2] = ACTIONS(1111),
    [aux_sym_path_token4] = ACTIONS(1113),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_docker_variable] = STATE(51),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [sym__docker_variable] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [sym_docker_variable] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(1058),
    [sym__docker_variable] = ACTIONS(1060),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [401] = {
    [sym_user_group_id] = STATE(356),
    [aux_sym_user_id_token1] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym_hc_timeout] = STATE(326),
    [aux_sym_hc_interval_token1] = ACTIONS(1117),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym_hc_interval] = STATE(291),
    [aux_sym_hc_interval_token1] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym_hc_start_period] = STATE(281),
    [aux_sym_hc_interval_token1] = ACTIONS(1121),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_user_group_id] = STATE(199),
    [aux_sym_user_id_token1] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [aux_sym_env_value_repeat1] = STATE(379),
    [aux_sym_env_value_token3] = ACTIONS(1125),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [408] = {
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(425),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [sym_user_group] = STATE(199),
    [aux_sym_user_name_token1] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [aux_sym_env_value_repeat1] = STATE(397),
    [aux_sym_env_value_token3] = ACTIONS(1131),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [412] = {
    [aux_sym__anything] = STATE(153),
    [aux_sym__anything_token1] = ACTIONS(1133),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [aux_sym__anything] = STATE(128),
    [aux_sym__anything_token1] = ACTIONS(1135),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym_user_group] = STATE(356),
    [aux_sym_user_name_token1] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_hc_retries] = STATE(286),
    [aux_sym__port_part_token1] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_DQUOTE] = ACTIONS(1141),
    [anon_sym_COLON] = ACTIONS(1144),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym_label_pair_token1] = ACTIONS(1146),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [aux_sym__repository_start_token5] = ACTIONS(1148),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1150),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1152),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [aux_sym_from_token2] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_template_expr_curly_braces] = ACTIONS(1156),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [423] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1158),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym_from_token2] = ACTIONS(1160),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [sym_template_expr_percent_signs] = ACTIONS(1162),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [426] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1164),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_EQ] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [anon_sym_EQ] = ACTIONS(1168),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [aux_sym_from_token2] = ACTIONS(1170),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [anon_sym_EQ] = ACTIONS(1174),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [anon_sym_EQ] = ACTIONS(1176),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [aux_sym_label_pair_token1] = ACTIONS(1178),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_DQUOTE] = ACTIONS(486),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [aux_sym_signal_name_token2] = ACTIONS(1180),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [anon_sym_DQUOTE] = ACTIONS(1182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym__docker_variable] = ACTIONS(1186),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [439] = {
    [aux_sym_from_token2] = ACTIONS(1188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym_arg_default] = ACTIONS(1190),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [441] = {
    [aux_sym__repository_start_token13] = ACTIONS(1192),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [aux_sym__repository_start_token9] = ACTIONS(1194),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1196),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1198),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1200),
  },
  [446] = {
    [anon_sym_DQUOTE] = ACTIONS(1202),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_SLASH] = ACTIONS(1204),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [aux_sym_from_token2] = ACTIONS(1206),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1208),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym__repository_start_token5] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [aux_sym__repository_start_token9] = ACTIONS(1212),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [aux_sym__repository_start_token13] = ACTIONS(1214),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [sym_arg_name] = ACTIONS(1216),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym_template_expr_percent_signs] = ACTIONS(1218),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [455] = {
    [sym_template_expr_curly_braces] = ACTIONS(1220),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [456] = {
    [sym_template_expr_curly_braces] = ACTIONS(1222),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [457] = {
    [ts_builtin_sym_end] = ACTIONS(1224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym_template_expr_percent_signs] = ACTIONS(1226),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [459] = {
    [anon_sym_SLASH] = ACTIONS(1228),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym_template_expr_curly_braces] = ACTIONS(1230),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [461] = {
    [sym_template_expr_percent_signs] = ACTIONS(1232),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [462] = {
    [aux_sym_from_token2] = ACTIONS(1234),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_SLASH] = ACTIONS(998),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1236),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1238),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1242),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1246),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1250),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1254),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym__repository_start_token13] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym__repository_start_token9] = ACTIONS(1260),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym__repository_start_token5] = ACTIONS(1262),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym_from_token2] = ACTIONS(1266),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_RBRACE] = ACTIONS(1268),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_RBRACE] = ACTIONS(1270),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_DQUOTE] = ACTIONS(1272),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_DQUOTE] = ACTIONS(1274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [aux_sym__repository_start_token13] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [aux_sym__repository_start_token9] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [aux_sym__repository_start_token5] = ACTIONS(1280),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1282),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1286),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [aux_sym__repository_start_token13] = ACTIONS(1288),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [aux_sym__repository_start_token9] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [aux_sym__repository_start_token5] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1294),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [anon_sym_SLASH] = ACTIONS(929),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1300),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym__repository_start_token5] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [anon_sym_DQUOTE] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym__repository_start_token9] = ACTIONS(1306),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [aux_sym__repository_start_token13] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [aux_sym__repository_start_token5] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [aux_sym__repository_start_token9] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym__repository_start_token13] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [aux_sym_from_token2] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [sym_template_expr_percent_signs] = ACTIONS(1320),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [508] = {
    [anon_sym_RBRACE] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [aux_sym__repository_start_token5] = ACTIONS(1324),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym__repository_start_token9] = ACTIONS(1326),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym__repository_start_token13] = ACTIONS(1328),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [aux_sym__repository_start_token5] = ACTIONS(1330),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [sym_template_expr_curly_braces] = ACTIONS(1332),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [514] = {
    [anon_sym_RBRACE] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [aux_sym__repository_start_token5] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [aux_sym__repository_start_token9] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [aux_sym__repository_start_token13] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [aux_sym__repository_start_token9] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_RBRACE] = ACTIONS(1344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [aux_sym__repository_start_token13] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [anon_sym_RBRACE] = ACTIONS(1348),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [aux_sym_from_token2] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_RBRACE] = ACTIONS(1352),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [sym_template_expr_curly_braces] = ACTIONS(1354),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [sym_template_expr_percent_signs] = ACTIONS(1358),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_RBRACE] = ACTIONS(1362),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_RBRACE] = ACTIONS(1364),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1366),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [531] = {
    [anon_sym_RBRACE] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym__docker_variable] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [533] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1372),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [534] = {
    [sym_template_expr_curly_braces] = ACTIONS(1374),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [535] = {
    [sym_template_expr_percent_signs] = ACTIONS(1376),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [536] = {
    [sym_template_expr_curly_braces] = ACTIONS(1378),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [537] = {
    [sym__docker_variable] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [538] = {
    [sym_template_expr_curly_braces] = ACTIONS(1382),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [539] = {
    [sym_template_expr_percent_signs] = ACTIONS(1384),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [540] = {
    [anon_sym_DQUOTE] = ACTIONS(945),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [sym__docker_variable] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [542] = {
    [sym_template_expr_curly_braces] = ACTIONS(1388),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [543] = {
    [sym_template_expr_percent_signs] = ACTIONS(1390),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [544] = {
    [sym_template_expr_percent_signs] = ACTIONS(1392),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [545] = {
    [sym__docker_variable] = ACTIONS(1394),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [546] = {
    [sym__docker_variable] = ACTIONS(1396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [547] = {
    [sym__docker_variable] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [548] = {
    [sym__docker_variable] = ACTIONS(1400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [549] = {
    [sym__docker_variable] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [550] = {
    [sym__docker_variable] = ACTIONS(1404),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [551] = {
    [sym__docker_variable] = ACTIONS(1406),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(444),
  [11] = {.count = 1, .reusable = true}, SHIFT(495),
  [13] = {.count = 1, .reusable = true}, SHIFT(494),
  [15] = {.count = 1, .reusable = true}, SHIFT(493),
  [17] = {.count = 1, .reusable = true}, SHIFT(489),
  [19] = {.count = 1, .reusable = true}, SHIFT(488),
  [21] = {.count = 1, .reusable = true}, SHIFT(487),
  [23] = {.count = 1, .reusable = true}, SHIFT(474),
  [25] = {.count = 1, .reusable = true}, SHIFT(473),
  [27] = {.count = 1, .reusable = true}, SHIFT(472),
  [29] = {.count = 1, .reusable = true}, SHIFT(471),
  [31] = {.count = 1, .reusable = true}, SHIFT(470),
  [33] = {.count = 1, .reusable = true}, SHIFT(469),
  [35] = {.count = 1, .reusable = true}, SHIFT(468),
  [37] = {.count = 1, .reusable = true}, SHIFT(467),
  [39] = {.count = 1, .reusable = true}, SHIFT(466),
  [41] = {.count = 1, .reusable = true}, SHIFT(465),
  [43] = {.count = 1, .reusable = true}, SHIFT(464),
  [45] = {.count = 1, .reusable = true}, SHIFT(208),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(444),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(495),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(494),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(493),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(489),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(488),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(487),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(474),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(473),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(472),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(471),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(470),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(469),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(468),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(467),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(466),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(465),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(464),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(208),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(255),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(374),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(255),
  [123] = {.count = 1, .reusable = true}, SHIFT(374),
  [125] = {.count = 1, .reusable = true}, SHIFT(28),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(507),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(381),
  [140] = {.count = 1, .reusable = true}, SHIFT(265),
  [142] = {.count = 1, .reusable = false}, SHIFT(78),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [148] = {.count = 1, .reusable = true}, SHIFT(263),
  [150] = {.count = 1, .reusable = false}, SHIFT(81),
  [152] = {.count = 1, .reusable = true}, SHIFT(507),
  [154] = {.count = 1, .reusable = true}, SHIFT(283),
  [156] = {.count = 1, .reusable = true}, SHIFT(513),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [160] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(283),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(513),
  [172] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [174] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(381),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [183] = {.count = 1, .reusable = true}, SHIFT(260),
  [185] = {.count = 1, .reusable = false}, SHIFT(82),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [211] = {.count = 1, .reusable = false}, SHIFT(124),
  [213] = {.count = 1, .reusable = true}, SHIFT(304),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [217] = {.count = 1, .reusable = true}, SHIFT(370),
  [219] = {.count = 1, .reusable = false}, SHIFT(79),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [225] = {.count = 1, .reusable = true}, SHIFT(367),
  [227] = {.count = 1, .reusable = false}, SHIFT(131),
  [229] = {.count = 1, .reusable = true}, SHIFT(534),
  [231] = {.count = 1, .reusable = true}, SHIFT(535),
  [233] = {.count = 1, .reusable = true}, SHIFT(368),
  [235] = {.count = 1, .reusable = false}, SHIFT(132),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(304),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(535),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(534),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [248] = {.count = 1, .reusable = false}, SHIFT(87),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(368),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(370),
  [260] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [268] = {.count = 1, .reusable = false}, SHIFT(143),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 4),
  [272] = {.count = 1, .reusable = true}, SHIFT(398),
  [274] = {.count = 1, .reusable = true}, SHIFT(400),
  [276] = {.count = 1, .reusable = false}, SHIFT(92),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [282] = {.count = 1, .reusable = false}, SHIFT(145),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [286] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(398),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(400),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(92),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [301] = {.count = 1, .reusable = false}, SHIFT(152),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [313] = {.count = 1, .reusable = true}, SHIFT(253),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [319] = {.count = 1, .reusable = false}, SHIFT(172),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [325] = {.count = 1, .reusable = false}, SHIFT(175),
  [327] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [329] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [331] = {.count = 1, .reusable = false}, SHIFT(107),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [341] = {.count = 1, .reusable = true}, SHIFT(264),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [353] = {.count = 1, .reusable = true}, SHIFT(365),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [363] = {.count = 1, .reusable = false}, SHIFT(170),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [373] = {.count = 1, .reusable = false}, SHIFT(196),
  [375] = {.count = 1, .reusable = true}, SHIFT(543),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [381] = {.count = 1, .reusable = false}, SHIFT(178),
  [383] = {.count = 1, .reusable = true}, SHIFT(300),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [389] = {.count = 1, .reusable = true}, SHIFT(396),
  [391] = {.count = 1, .reusable = false}, SHIFT(181),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [395] = {.count = 1, .reusable = true}, SHIFT(274),
  [397] = {.count = 1, .reusable = true}, SHIFT(363),
  [399] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(396),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [410] = {.count = 1, .reusable = true}, SHIFT(116),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [418] = {.count = 1, .reusable = true}, SHIFT(417),
  [420] = {.count = 1, .reusable = true}, SHIFT(542),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(300),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(543),
  [430] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(542),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [439] = {.count = 1, .reusable = false}, SHIFT(216),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(363),
  [444] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [446] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(417),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [455] = {.count = 1, .reusable = false}, SHIFT(205),
  [457] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs, 2),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym__env_pairs, 2), SHIFT_REPEAT(116),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [470] = {.count = 1, .reusable = true}, SHIFT(237),
  [472] = {.count = 1, .reusable = true}, SHIFT(227),
  [474] = {.count = 1, .reusable = false}, SHIFT(506),
  [476] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 1),
  [482] = {.count = 1, .reusable = true}, SHIFT(361),
  [484] = {.count = 1, .reusable = false}, SHIFT(413),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [490] = {.count = 1, .reusable = true}, SHIFT(248),
  [492] = {.count = 1, .reusable = true}, SHIFT(226),
  [494] = {.count = 1, .reusable = false}, SHIFT(462),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [498] = {.count = 1, .reusable = true}, SHIFT(249),
  [500] = {.count = 1, .reusable = true}, SHIFT(222),
  [502] = {.count = 1, .reusable = false}, SHIFT(522),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [508] = {.count = 1, .reusable = false}, SHIFT(151),
  [510] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [512] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [514] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(151),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [519] = {.count = 1, .reusable = true}, SHIFT(251),
  [521] = {.count = 1, .reusable = true}, SHIFT(231),
  [523] = {.count = 1, .reusable = false}, SHIFT(479),
  [525] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(158),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [530] = {.count = 1, .reusable = true}, SHIFT(224),
  [532] = {.count = 1, .reusable = false}, SHIFT(448),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [542] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(154),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [547] = {.count = 1, .reusable = false}, SHIFT(154),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [551] = {.count = 1, .reusable = true}, SHIFT(228),
  [553] = {.count = 1, .reusable = false}, SHIFT(439),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [557] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [561] = {.count = 1, .reusable = false}, SHIFT(158),
  [563] = {.count = 1, .reusable = false}, SHIFT(195),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [571] = {.count = 1, .reusable = false}, SHIFT(424),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [575] = {.count = 1, .reusable = true}, SHIFT(406),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [579] = {.count = 1, .reusable = true}, SHIFT(440),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [585] = {.count = 1, .reusable = true}, SHIFT(410),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [593] = {.count = 1, .reusable = false}, SHIFT(429),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [597] = {.count = 1, .reusable = false}, SHIFT(421),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 3),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 3),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 4),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [663] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [677] = {.count = 1, .reusable = true}, SHIFT(377),
  [679] = {.count = 1, .reusable = true}, SHIFT(383),
  [681] = {.count = 1, .reusable = false}, SHIFT(71),
  [683] = {.count = 1, .reusable = true}, SHIFT(422),
  [685] = {.count = 1, .reusable = true}, SHIFT(425),
  [687] = {.count = 1, .reusable = true}, SHIFT(297),
  [689] = {.count = 1, .reusable = true}, SHIFT(426),
  [691] = {.count = 1, .reusable = true}, SHIFT(197),
  [693] = {.count = 1, .reusable = true}, SHIFT(427),
  [695] = {.count = 1, .reusable = true}, SHIFT(428),
  [697] = {.count = 1, .reusable = true}, SHIFT(431),
  [699] = {.count = 1, .reusable = true}, SHIFT(432),
  [701] = {.count = 1, .reusable = true}, SHIFT(273),
  [703] = {.count = 1, .reusable = true}, SHIFT(234),
  [705] = {.count = 1, .reusable = true}, SHIFT(376),
  [707] = {.count = 1, .reusable = false}, SHIFT(155),
  [709] = {.count = 1, .reusable = true}, SHIFT(536),
  [711] = {.count = 1, .reusable = true}, SHIFT(544),
  [713] = {.count = 1, .reusable = true}, SHIFT(301),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(391),
  [718] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(459),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(460),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(461),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(321),
  [730] = {.count = 1, .reusable = true}, SHIFT(246),
  [732] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(391),
  [735] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(459),
  [738] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(460),
  [741] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(461),
  [744] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(321),
  [747] = {.count = 1, .reusable = true}, SHIFT(252),
  [749] = {.count = 1, .reusable = true}, SHIFT(243),
  [751] = {.count = 1, .reusable = true}, SHIFT(244),
  [753] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(427),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(428),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(431),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(432),
  [767] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(391),
  [770] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(459),
  [773] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(460),
  [776] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(461),
  [779] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(321),
  [782] = {.count = 1, .reusable = true}, SHIFT(250),
  [784] = {.count = 1, .reusable = true}, SHIFT(384),
  [786] = {.count = 1, .reusable = false}, SHIFT(213),
  [788] = {.count = 1, .reusable = true}, SHIFT(455),
  [790] = {.count = 1, .reusable = true}, SHIFT(454),
  [792] = {.count = 1, .reusable = true}, SHIFT(325),
  [794] = {.count = 1, .reusable = true}, SHIFT(399),
  [796] = {.count = 1, .reusable = false}, SHIFT(146),
  [798] = {.count = 1, .reusable = true}, SHIFT(524),
  [800] = {.count = 1, .reusable = true}, SHIFT(526),
  [802] = {.count = 1, .reusable = true}, SHIFT(317),
  [804] = {.count = 1, .reusable = true}, SHIFT(382),
  [806] = {.count = 1, .reusable = false}, SHIFT(139),
  [808] = {.count = 1, .reusable = true}, SHIFT(456),
  [810] = {.count = 1, .reusable = true}, SHIFT(458),
  [812] = {.count = 1, .reusable = true}, SHIFT(327),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [816] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [820] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [822] = {.count = 1, .reusable = true}, SHIFT(312),
  [824] = {.count = 1, .reusable = true}, SHIFT(380),
  [826] = {.count = 1, .reusable = true}, SHIFT(288),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [832] = {.count = 1, .reusable = true}, SHIFT(276),
  [834] = {.count = 1, .reusable = true}, SHIFT(189),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [872] = {.count = 1, .reusable = true}, SHIFT(210),
  [874] = {.count = 1, .reusable = true}, SHIFT(198),
  [876] = {.count = 1, .reusable = true}, SHIFT(307),
  [878] = {.count = 1, .reusable = true}, SHIFT(373),
  [880] = {.count = 1, .reusable = true}, SHIFT(290),
  [882] = {.count = 1, .reusable = true}, SHIFT(296),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [886] = {.count = 1, .reusable = true}, SHIFT(414),
  [888] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 1),
  [890] = {.count = 1, .reusable = true}, SHIFT(340),
  [892] = {.count = 1, .reusable = true}, SHIFT(533),
  [894] = {.count = 1, .reusable = true}, SHIFT(530),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [898] = {.count = 1, .reusable = true}, SHIFT(135),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [902] = {.count = 1, .reusable = true}, SHIFT(22),
  [904] = {.count = 1, .reusable = true}, SHIFT(319),
  [906] = {.count = 1, .reusable = true}, SHIFT(366),
  [908] = {.count = 1, .reusable = true}, SHIFT(267),
  [910] = {.count = 1, .reusable = false}, SHIFT(496),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [916] = {.count = 1, .reusable = true}, SHIFT(45),
  [918] = {.count = 1, .reusable = true}, SHIFT(375),
  [920] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [922] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(289),
  [925] = {.count = 1, .reusable = false}, REDUCE(sym_user_name, 1),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [929] = {.count = 1, .reusable = true}, SHIFT(261),
  [931] = {.count = 1, .reusable = false}, SHIFT(463),
  [933] = {.count = 1, .reusable = true}, SHIFT(538),
  [935] = {.count = 1, .reusable = true}, SHIFT(539),
  [937] = {.count = 1, .reusable = true}, SHIFT(303),
  [939] = {.count = 1, .reusable = false}, REDUCE(sym_user_id, 1),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [945] = {.count = 1, .reusable = true}, SHIFT(85),
  [947] = {.count = 1, .reusable = true}, SHIFT(392),
  [949] = {.count = 1, .reusable = false}, SHIFT(482),
  [951] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(392),
  [954] = {.count = 1, .reusable = true}, SHIFT(123),
  [956] = {.count = 1, .reusable = true}, SHIFT(401),
  [958] = {.count = 1, .reusable = true}, SHIFT(387),
  [960] = {.count = 1, .reusable = true}, SHIFT(161),
  [962] = {.count = 1, .reusable = true}, SHIFT(160),
  [964] = {.count = 1, .reusable = true}, SHIFT(358),
  [966] = {.count = 1, .reusable = true}, SHIFT(54),
  [968] = {.count = 1, .reusable = true}, SHIFT(337),
  [970] = {.count = 1, .reusable = true}, SHIFT(57),
  [972] = {.count = 1, .reusable = true}, SHIFT(79),
  [974] = {.count = 1, .reusable = false}, SHIFT(540),
  [976] = {.count = 1, .reusable = true}, SHIFT(268),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [980] = {.count = 1, .reusable = true}, SHIFT(289),
  [982] = {.count = 1, .reusable = true}, SHIFT(348),
  [984] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(303),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(539),
  [990] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(538),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [995] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(366),
  [998] = {.count = 1, .reusable = true}, SHIFT(259),
  [1000] = {.count = 1, .reusable = false}, SHIFT(447),
  [1002] = {.count = 1, .reusable = true}, SHIFT(201),
  [1004] = {.count = 1, .reusable = false}, SHIFT(411),
  [1006] = {.count = 1, .reusable = true}, SHIFT(171),
  [1008] = {.count = 1, .reusable = false}, REDUCE(sym_user_group, 1),
  [1010] = {.count = 1, .reusable = true}, SHIFT(194),
  [1012] = {.count = 1, .reusable = false}, REDUCE(sym_user_group_id, 1),
  [1014] = {.count = 1, .reusable = true}, SHIFT(186),
  [1016] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1018] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 3),
  [1020] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 2),
  [1022] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 2),
  [1024] = {.count = 1, .reusable = true}, SHIFT(211),
  [1026] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1028] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 2),
  [1030] = {.count = 1, .reusable = false}, SHIFT(407),
  [1032] = {.count = 1, .reusable = true}, SHIFT(176),
  [1034] = {.count = 1, .reusable = true}, SHIFT(551),
  [1036] = {.count = 1, .reusable = true}, SHIFT(126),
  [1038] = {.count = 1, .reusable = true}, SHIFT(548),
  [1040] = {.count = 1, .reusable = true}, SHIFT(262),
  [1042] = {.count = 1, .reusable = true}, SHIFT(550),
  [1044] = {.count = 1, .reusable = true}, SHIFT(338),
  [1046] = {.count = 1, .reusable = true}, SHIFT(394),
  [1048] = {.count = 1, .reusable = true}, SHIFT(70),
  [1050] = {.count = 1, .reusable = true}, SHIFT(549),
  [1052] = {.count = 1, .reusable = true}, SHIFT(44),
  [1054] = {.count = 1, .reusable = true}, SHIFT(215),
  [1056] = {.count = 1, .reusable = true}, SHIFT(435),
  [1058] = {.count = 1, .reusable = true}, SHIFT(438),
  [1060] = {.count = 1, .reusable = true}, SHIFT(52),
  [1062] = {.count = 1, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2),
  [1064] = {.count = 2, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2), SHIFT_REPEAT(371),
  [1067] = {.count = 1, .reusable = true}, SHIFT(547),
  [1069] = {.count = 1, .reusable = true}, SHIFT(343),
  [1071] = {.count = 1, .reusable = true}, SHIFT(546),
  [1073] = {.count = 1, .reusable = true}, SHIFT(333),
  [1075] = {.count = 1, .reusable = true}, SHIFT(532),
  [1077] = {.count = 1, .reusable = true}, SHIFT(46),
  [1079] = {.count = 1, .reusable = true}, SHIFT(372),
  [1081] = {.count = 1, .reusable = true}, SHIFT(388),
  [1083] = {.count = 1, .reusable = true}, SHIFT(537),
  [1085] = {.count = 1, .reusable = true}, SHIFT(24),
  [1087] = {.count = 1, .reusable = true}, SHIFT(364),
  [1089] = {.count = 1, .reusable = true}, SHIFT(258),
  [1091] = {.count = 1, .reusable = true}, SHIFT(386),
  [1093] = {.count = 1, .reusable = false}, SHIFT(207),
  [1095] = {.count = 1, .reusable = true}, SHIFT(174),
  [1097] = {.count = 1, .reusable = true}, SHIFT(371),
  [1099] = {.count = 1, .reusable = true}, SHIFT(545),
  [1101] = {.count = 1, .reusable = true}, SHIFT(351),
  [1103] = {.count = 1, .reusable = true}, SHIFT(541),
  [1105] = {.count = 1, .reusable = true}, SHIFT(134),
  [1107] = {.count = 1, .reusable = true}, SHIFT(393),
  [1109] = {.count = 1, .reusable = true}, SHIFT(164),
  [1111] = {.count = 1, .reusable = true}, SHIFT(385),
  [1113] = {.count = 1, .reusable = false}, SHIFT(436),
  [1115] = {.count = 1, .reusable = true}, SHIFT(349),
  [1117] = {.count = 1, .reusable = true}, SHIFT(302),
  [1119] = {.count = 1, .reusable = true}, SHIFT(298),
  [1121] = {.count = 1, .reusable = true}, SHIFT(279),
  [1123] = {.count = 1, .reusable = true}, SHIFT(203),
  [1125] = {.count = 1, .reusable = true}, SHIFT(379),
  [1127] = {.count = 1, .reusable = true}, SHIFT(270),
  [1129] = {.count = 1, .reusable = true}, SHIFT(191),
  [1131] = {.count = 1, .reusable = true}, SHIFT(397),
  [1133] = {.count = 1, .reusable = true}, SHIFT(158),
  [1135] = {.count = 1, .reusable = true}, SHIFT(151),
  [1137] = {.count = 1, .reusable = true}, SHIFT(344),
  [1139] = {.count = 1, .reusable = true}, SHIFT(285),
  [1141] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(100),
  [1144] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1146] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1148] = {.count = 1, .reusable = true}, SHIFT(102),
  [1150] = {.count = 1, .reusable = true}, SHIFT(235),
  [1152] = {.count = 1, .reusable = true}, SHIFT(232),
  [1154] = {.count = 1, .reusable = true}, SHIFT(419),
  [1156] = {.count = 1, .reusable = true}, SHIFT(450),
  [1158] = {.count = 1, .reusable = true}, SHIFT(238),
  [1160] = {.count = 1, .reusable = true}, SHIFT(420),
  [1162] = {.count = 1, .reusable = true}, SHIFT(451),
  [1164] = {.count = 1, .reusable = true}, SHIFT(332),
  [1166] = {.count = 1, .reusable = true}, SHIFT(404),
  [1168] = {.count = 1, .reusable = true}, SHIFT(403),
  [1170] = {.count = 1, .reusable = true}, SHIFT(423),
  [1172] = {.count = 1, .reusable = true}, SHIFT(239),
  [1174] = {.count = 1, .reusable = true}, SHIFT(405),
  [1176] = {.count = 1, .reusable = true}, SHIFT(415),
  [1178] = {.count = 1, .reusable = true}, SHIFT(335),
  [1180] = {.count = 1, .reusable = true}, SHIFT(193),
  [1182] = {.count = 1, .reusable = true}, SHIFT(87),
  [1184] = {.count = 1, .reusable = true}, SHIFT(242),
  [1186] = {.count = 1, .reusable = true}, SHIFT(313),
  [1188] = {.count = 1, .reusable = true}, SHIFT(430),
  [1190] = {.count = 1, .reusable = true}, SHIFT(184),
  [1192] = {.count = 1, .reusable = true}, SHIFT(105),
  [1194] = {.count = 1, .reusable = true}, SHIFT(93),
  [1196] = {.count = 1, .reusable = true}, SHIFT(236),
  [1198] = {.count = 1, .reusable = true}, SHIFT(272),
  [1200] = {.count = 1, .reusable = true}, SHIFT(214),
  [1202] = {.count = 1, .reusable = true}, SHIFT(119),
  [1204] = {.count = 1, .reusable = true}, SHIFT(254),
  [1206] = {.count = 1, .reusable = true}, SHIFT(437),
  [1208] = {.count = 1, .reusable = true}, SHIFT(247),
  [1210] = {.count = 1, .reusable = true}, SHIFT(12),
  [1212] = {.count = 1, .reusable = true}, SHIFT(9),
  [1214] = {.count = 1, .reusable = true}, SHIFT(10),
  [1216] = {.count = 1, .reusable = true}, SHIFT(159),
  [1218] = {.count = 1, .reusable = true}, SHIFT(442),
  [1220] = {.count = 1, .reusable = true}, SHIFT(418),
  [1222] = {.count = 1, .reusable = true}, SHIFT(498),
  [1224] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1226] = {.count = 1, .reusable = true}, SHIFT(500),
  [1228] = {.count = 1, .reusable = true}, SHIFT(269),
  [1230] = {.count = 1, .reusable = true}, SHIFT(512),
  [1232] = {.count = 1, .reusable = true}, SHIFT(518),
  [1234] = {.count = 1, .reusable = true}, SHIFT(443),
  [1236] = {.count = 1, .reusable = true}, SHIFT(378),
  [1238] = {.count = 1, .reusable = true}, SHIFT(271),
  [1240] = {.count = 1, .reusable = true}, SHIFT(310),
  [1242] = {.count = 1, .reusable = true}, SHIFT(369),
  [1244] = {.count = 1, .reusable = true}, SHIFT(445),
  [1246] = {.count = 1, .reusable = true}, SHIFT(359),
  [1248] = {.count = 1, .reusable = true}, SHIFT(6),
  [1250] = {.count = 1, .reusable = true}, SHIFT(412),
  [1252] = {.count = 1, .reusable = true}, SHIFT(353),
  [1254] = {.count = 1, .reusable = true}, SHIFT(218),
  [1256] = {.count = 1, .reusable = true}, SHIFT(217),
  [1258] = {.count = 1, .reusable = true}, SHIFT(23),
  [1260] = {.count = 1, .reusable = true}, SHIFT(20),
  [1262] = {.count = 1, .reusable = true}, SHIFT(25),
  [1264] = {.count = 1, .reusable = true}, SHIFT(233),
  [1266] = {.count = 1, .reusable = true}, SHIFT(449),
  [1268] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1270] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1272] = {.count = 1, .reusable = true}, SHIFT(89),
  [1274] = {.count = 1, .reusable = true}, SHIFT(402),
  [1276] = {.count = 1, .reusable = true}, SHIFT(80),
  [1278] = {.count = 1, .reusable = true}, SHIFT(76),
  [1280] = {.count = 1, .reusable = true}, SHIFT(72),
  [1282] = {.count = 1, .reusable = true}, SHIFT(221),
  [1284] = {.count = 1, .reusable = true}, SHIFT(352),
  [1286] = {.count = 1, .reusable = true}, SHIFT(350),
  [1288] = {.count = 1, .reusable = true}, SHIFT(61),
  [1290] = {.count = 1, .reusable = true}, SHIFT(65),
  [1292] = {.count = 1, .reusable = true}, SHIFT(43),
  [1294] = {.count = 1, .reusable = true}, SHIFT(257),
  [1296] = {.count = 1, .reusable = true}, SHIFT(346),
  [1298] = {.count = 1, .reusable = true}, SHIFT(453),
  [1300] = {.count = 1, .reusable = true}, SHIFT(245),
  [1302] = {.count = 1, .reusable = true}, SHIFT(29),
  [1304] = {.count = 1, .reusable = true}, SHIFT(100),
  [1306] = {.count = 1, .reusable = true}, SHIFT(30),
  [1308] = {.count = 1, .reusable = true}, SHIFT(40),
  [1310] = {.count = 1, .reusable = true}, SHIFT(63),
  [1312] = {.count = 1, .reusable = true}, SHIFT(64),
  [1314] = {.count = 1, .reusable = true}, SHIFT(67),
  [1316] = {.count = 1, .reusable = true}, SHIFT(69),
  [1318] = {.count = 1, .reusable = true}, SHIFT(497),
  [1320] = {.count = 1, .reusable = true}, SHIFT(476),
  [1322] = {.count = 1, .reusable = true}, SHIFT(21),
  [1324] = {.count = 1, .reusable = true}, SHIFT(342),
  [1326] = {.count = 1, .reusable = true}, SHIFT(341),
  [1328] = {.count = 1, .reusable = true}, SHIFT(355),
  [1330] = {.count = 1, .reusable = true}, SHIFT(293),
  [1332] = {.count = 1, .reusable = true}, SHIFT(477),
  [1334] = {.count = 1, .reusable = true}, SHIFT(138),
  [1336] = {.count = 1, .reusable = true}, SHIFT(137),
  [1338] = {.count = 1, .reusable = true}, SHIFT(130),
  [1340] = {.count = 1, .reusable = true}, SHIFT(129),
  [1342] = {.count = 1, .reusable = true}, SHIFT(294),
  [1344] = {.count = 1, .reusable = true}, SHIFT(334),
  [1346] = {.count = 1, .reusable = true}, SHIFT(295),
  [1348] = {.count = 1, .reusable = true}, SHIFT(347),
  [1350] = {.count = 1, .reusable = true}, SHIFT(478),
  [1352] = {.count = 1, .reusable = true}, SHIFT(339),
  [1354] = {.count = 1, .reusable = true}, SHIFT(492),
  [1356] = {.count = 1, .reusable = true}, SHIFT(266),
  [1358] = {.count = 1, .reusable = true}, SHIFT(491),
  [1360] = {.count = 1, .reusable = true}, SHIFT(56),
  [1362] = {.count = 1, .reusable = true}, SHIFT(62),
  [1364] = {.count = 1, .reusable = true}, SHIFT(336),
  [1366] = {.count = 1, .reusable = true}, SHIFT(480),
  [1368] = {.count = 1, .reusable = true}, SHIFT(118),
  [1370] = {.count = 1, .reusable = true}, SHIFT(287),
  [1372] = {.count = 1, .reusable = true}, SHIFT(481),
  [1374] = {.count = 1, .reusable = true}, SHIFT(503),
  [1376] = {.count = 1, .reusable = true}, SHIFT(504),
  [1378] = {.count = 1, .reusable = true}, SHIFT(486),
  [1380] = {.count = 1, .reusable = true}, SHIFT(282),
  [1382] = {.count = 1, .reusable = true}, SHIFT(509),
  [1384] = {.count = 1, .reusable = true}, SHIFT(510),
  [1386] = {.count = 1, .reusable = true}, SHIFT(280),
  [1388] = {.count = 1, .reusable = true}, SHIFT(515),
  [1390] = {.count = 1, .reusable = true}, SHIFT(516),
  [1392] = {.count = 1, .reusable = true}, SHIFT(485),
  [1394] = {.count = 1, .reusable = true}, SHIFT(311),
  [1396] = {.count = 1, .reusable = true}, SHIFT(320),
  [1398] = {.count = 1, .reusable = true}, SHIFT(278),
  [1400] = {.count = 1, .reusable = true}, SHIFT(318),
  [1402] = {.count = 1, .reusable = true}, SHIFT(315),
  [1404] = {.count = 1, .reusable = true}, SHIFT(314),
  [1406] = {.count = 1, .reusable = true}, SHIFT(308),
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
