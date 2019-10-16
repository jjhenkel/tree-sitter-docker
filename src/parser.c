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
#define STATE_COUNT 562
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  aux_sym_env_key_token1 = 30,
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
  aux_sym_label_value_token1 = 63,
  sym_signal_num = 64,
  aux_sym_signal_name_token1 = 65,
  aux_sym_signal_name_token2 = 66,
  aux_sym_user_name_token1 = 67,
  aux_sym_user_id_token1 = 68,
  aux_sym_path_token1 = 69,
  aux_sym_path_token2 = 70,
  aux_sym_path_token3 = 71,
  aux_sym_path_token4 = 72,
  aux_sym__anything_token1 = 73,
  anon_sym_LBRACE = 74,
  anon_sym_RBRACE = 75,
  anon_sym_COLON_DASH = 76,
  aux_sym_variable_default_value_token1 = 77,
  anon_sym_COLON_PLUS = 78,
  sym__docker_variable = 79,
  sym_template_expr_curly_braces = 80,
  sym_template_expr_percent_signs = 81,
  aux_sym_template_expr_less_than_equals_token1 = 82,
  aux_sym_template_expr_less_than_equals_token2 = 83,
  aux_sym_template_expr_less_than_equals_token3 = 84,
  sym__space = 85,
  sym__blank_line = 86,
  sym__space_no_newline = 87,
  sym_comment = 88,
  sym_line_continuation = 89,
  sym_json_array = 90,
  sym_dockerfile = 91,
  sym__directive = 92,
  sym_add = 93,
  sym_arg = 94,
  sym_cmd = 95,
  sym_copy = 96,
  sym_entrypoint = 97,
  sym_env = 98,
  sym_expose = 99,
  sym_from = 100,
  sym_healthcheck = 101,
  sym_label = 102,
  sym_maintainer = 103,
  sym_onbuild = 104,
  sym_run = 105,
  sym_shell = 106,
  sym_stopsignal = 107,
  sym_user = 108,
  sym_volume = 109,
  sym_workdir = 110,
  sym__chown = 111,
  sym_chown = 112,
  aux_sym__env_pairs = 113,
  sym_env_pair = 114,
  sym_env_key = 115,
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
  sym_label_key = 146,
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
  aux_sym_env_value_repeat1 = 164,
  aux_sym_repository_repeat1 = 165,
  aux_sym__repository_start_repeat1 = 166,
  aux_sym__repository_start_repeat2 = 167,
  aux_sym__repository_start_repeat3 = 168,
  aux_sym__repository_start_repeat4 = 169,
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
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '{') ADVANCE(1035);
      if (lookahead == '}') ADVANCE(1036);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(858);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(889);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(913);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(863);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(847);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(893);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(871);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(914);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(898);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(798);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(926);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(858);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(889);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(913);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(863);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(847);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(893);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(871);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(914);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(898);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1053);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(926);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '=') ADVANCE(210);
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
          lookahead == '') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(404);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(359);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(391);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1054);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(404);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(359);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(391);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(1057);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(404);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(359);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(391);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(936);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(937);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead != 0) ADVANCE(943);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '@') ADVANCE(229);
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
          lookahead == '') ADVANCE(1054);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '@') ADVANCE(229);
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
          lookahead == '') ADVANCE(1054);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(497);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(506);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(532);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(452);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(497);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(506);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(532);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(452);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(497);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(506);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(532);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(453);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(727);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(680);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(727);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(680);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(727);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(680);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(459);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(592);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(547);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(579);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(605);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(592);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(547);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(579);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(605);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(592);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(547);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(579);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(605);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(621);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(653);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(655);
      if (lookahead == '\\') ADVANCE(679);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(621);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(653);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(655);
      if (lookahead == '\\') ADVANCE(679);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(621);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(653);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(655);
      if (lookahead == '\\') ADVANCE(679);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(1057);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(949);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(954);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(947);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(944);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(945);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(951);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(948);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(955);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(952);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(936);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(937);
      if (lookahead != 0) ADVANCE(943);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(205);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '%') ADVANCE(768);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '=') ADVANCE(210);
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
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '}') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(196);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(957);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(422);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1055);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1055);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1057);
      if (lookahead == '[') ADVANCE(962);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0) ADVANCE(943);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0) ADVANCE(943);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1047);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(1046);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1047);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(1044);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1045);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(1042);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1043);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(1038);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1039);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(957);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1064);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(420);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1064);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1064);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1064);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(957);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1052);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(789);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '#') ADVANCE(939);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '-') ADVANCE(800);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(926);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(797);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(69);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '}') ADVANCE(1036);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(795);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '}') ADVANCE(1036);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(680);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(448);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '%') ADVANCE(766);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(448);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(1041);
      if (lookahead == '\\') ADVANCE(1041);
      if (lookahead == '{') ADVANCE(1034);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1041);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(449);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(957);
      END_STATE();
    case 65:
      if (lookahead == '+') ADVANCE(1040);
      if (lookahead == '-') ADVANCE(1037);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '>') ADVANCE(775);
      END_STATE();
    case 70:
      if (lookahead == '>') ADVANCE(775);
      if (lookahead != 0) ADVANCE(1049);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(775);
      if (lookahead != 0) ADVANCE(1048);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(785);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(782);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      if (lookahead == '#') ADVANCE(1061);
      if (lookahead == '=') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1050);
      END_STATE();
    case 103:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(774);
      END_STATE();
    case 104:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(779);
      END_STATE();
    case 105:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(777);
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
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
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
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
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
          lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 133:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(793);
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
          lookahead == 'k') ADVANCE(233);
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
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
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
          lookahead == 'm') ADVANCE(223);
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
          lookahead == 'n') ADVANCE(241);
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
          lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 174:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(429);
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
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
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
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(217);
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
          lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 195:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 196:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1065);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    case 198:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(1065);
      END_STATE();
    case 199:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 200:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(957);
      END_STATE();
    case 201:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 202:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(957);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(420);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(418);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(275);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(396);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_env_value_token2);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead == '\\') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_env_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(807);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '2') ADVANCE(433);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '5') ADVANCE(434);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '6') ADVANCE(435);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1059);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(439);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(437);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '%') ADVANCE(770);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '{') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(448);
      END_STATE();
    case 449:
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
          lookahead != '}') ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(452);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(453);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(459);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(469);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
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
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
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
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
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
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(469);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
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
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
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
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
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
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
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
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(548);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
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
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
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
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
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
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
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
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(622);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 679:
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(714);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(712);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(749);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(698);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(703);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(706);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(726);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(696);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(694);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(700);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(713);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(692);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(745);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(750);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(693);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(746);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(735);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(686);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(747);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(697);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(709);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(751);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(742);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(731);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(732);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(701);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(708);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(719);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(680);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(736);
      if (lookahead == '{') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(755);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(753);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(756);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(757);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(759);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(760);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(762);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(763);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(765);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(767);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(769);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(771);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(776);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretires);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(795);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '$') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1061);
      if (lookahead != 0) ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(798);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == '-') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == '-') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == '/') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'a') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'p') ADVANCE(820);
      if (lookahead == 'r') ADVANCE(813);
      if (lookahead == 's') ADVANCE(842);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'd') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'f') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'h') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'l') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'm') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'm') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'n') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'o') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'o') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'p') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'r') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'r') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'r') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'r') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 's') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 't') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 't') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 't') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 't') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'u') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'v') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'w') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(864);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(856);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(912);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(1061);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '$') ADVANCE(935);
      if (lookahead != 0) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1064);
      if (lookahead == '$') ADVANCE(934);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(933);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(929);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(930);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(933);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(929);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(930);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(933);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(1061);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(938);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(937);
      if (lookahead != 0) ADVANCE(965);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(938);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(937);
      if (lookahead != 0) ADVANCE(965);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(938);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(937);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(961);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(940);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(939);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(1062);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(966);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(971);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(974);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(981);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1013);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(975);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1015);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1033);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(970);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1022);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1011);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1006);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(958);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(959);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(958);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(959);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(35);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(960);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(961);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == ',') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(960);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(965);
      if (lookahead == ',') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(1065);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(963);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(964);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == ',') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(963);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(964);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == ',') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(965);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(963);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(964);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(965);
      if (lookahead == ',') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1065);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(966);
      if (lookahead == '\\') ADVANCE(1062);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(941);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(965);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1000);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(965);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(999);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(965);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(965);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(965);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(983);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(965);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(995);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(965);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(988);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(965);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(965);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(965);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(965);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(992);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(972);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1003);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1021);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(965);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(965);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1009);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(965);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(965);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(980);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(965);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(986);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(965);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1007);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(965);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(965);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1020);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(965);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(965);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(965);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(965);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(977);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1027);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1030);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(965);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(998);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(965);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(965);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(979);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1028);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(968);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(965);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1016);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(994);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(965);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(965);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1024);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(965);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1012);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(965);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1014);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(965);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(965);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(965);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(965);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(965);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1032);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(965);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(989);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(965);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(965);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(965);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(987);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(965);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(965);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(965);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(965);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(965);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1033:
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
          lookahead != 'v') ADVANCE(965);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(755);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1039);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1039);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1041:
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
          lookahead != '}') ADVANCE(1041);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1043);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1045);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1045);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1047);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1047);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1052);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1052);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1053);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1052);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1054);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1055);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '#') ADVANCE(941);
      if (lookahead != 0) ADVANCE(1061);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(779);
      if (lookahead != 0) ADVANCE(1061);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(777);
      if (lookahead != 0) ADVANCE(1061);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1061);
      if (lookahead != 0) ADVANCE(788);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(1061);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1061);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(1061);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1064);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 1065:
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
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
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
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 60},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 60},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 60},
  [227] = {.lex_state = 60},
  [228] = {.lex_state = 61},
  [229] = {.lex_state = 61},
  [230] = {.lex_state = 61},
  [231] = {.lex_state = 61},
  [232] = {.lex_state = 61},
  [233] = {.lex_state = 60},
  [234] = {.lex_state = 61},
  [235] = {.lex_state = 60},
  [236] = {.lex_state = 60},
  [237] = {.lex_state = 60},
  [238] = {.lex_state = 60},
  [239] = {.lex_state = 60},
  [240] = {.lex_state = 60},
  [241] = {.lex_state = 60},
  [242] = {.lex_state = 60},
  [243] = {.lex_state = 60},
  [244] = {.lex_state = 60},
  [245] = {.lex_state = 60},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 60},
  [248] = {.lex_state = 60},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 60},
  [251] = {.lex_state = 60},
  [252] = {.lex_state = 60},
  [253] = {.lex_state = 60},
  [254] = {.lex_state = 60},
  [255] = {.lex_state = 60},
  [256] = {.lex_state = 60},
  [257] = {.lex_state = 60},
  [258] = {.lex_state = 60},
  [259] = {.lex_state = 60},
  [260] = {.lex_state = 22},
  [261] = {.lex_state = 60},
  [262] = {.lex_state = 60},
  [263] = {.lex_state = 60},
  [264] = {.lex_state = 60},
  [265] = {.lex_state = 60},
  [266] = {.lex_state = 60},
  [267] = {.lex_state = 47},
  [268] = {.lex_state = 60},
  [269] = {.lex_state = 60},
  [270] = {.lex_state = 60},
  [271] = {.lex_state = 60},
  [272] = {.lex_state = 60},
  [273] = {.lex_state = 49},
  [274] = {.lex_state = 22},
  [275] = {.lex_state = 22},
  [276] = {.lex_state = 22},
  [277] = {.lex_state = 49},
  [278] = {.lex_state = 49},
  [279] = {.lex_state = 50},
  [280] = {.lex_state = 57},
  [281] = {.lex_state = 56},
  [282] = {.lex_state = 59},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 29},
  [285] = {.lex_state = 29},
  [286] = {.lex_state = 29},
  [287] = {.lex_state = 22},
  [288] = {.lex_state = 50},
  [289] = {.lex_state = 58},
  [290] = {.lex_state = 51},
  [291] = {.lex_state = 51},
  [292] = {.lex_state = 48},
  [293] = {.lex_state = 48},
  [294] = {.lex_state = 51},
  [295] = {.lex_state = 51},
  [296] = {.lex_state = 931},
  [297] = {.lex_state = 51},
  [298] = {.lex_state = 51},
  [299] = {.lex_state = 56},
  [300] = {.lex_state = 51},
  [301] = {.lex_state = 50},
  [302] = {.lex_state = 48},
  [303] = {.lex_state = 48},
  [304] = {.lex_state = 51},
  [305] = {.lex_state = 22},
  [306] = {.lex_state = 29},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 51},
  [309] = {.lex_state = 931},
  [310] = {.lex_state = 49},
  [311] = {.lex_state = 50},
  [312] = {.lex_state = 931},
  [313] = {.lex_state = 51},
  [314] = {.lex_state = 931},
  [315] = {.lex_state = 29},
  [316] = {.lex_state = 29},
  [317] = {.lex_state = 27},
  [318] = {.lex_state = 22},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 22},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 22},
  [323] = {.lex_state = 56},
  [324] = {.lex_state = 57},
  [325] = {.lex_state = 58},
  [326] = {.lex_state = 59},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 22},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 29},
  [332] = {.lex_state = 58},
  [333] = {.lex_state = 931},
  [334] = {.lex_state = 51},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 59},
  [340] = {.lex_state = 51},
  [341] = {.lex_state = 50},
  [342] = {.lex_state = 50},
  [343] = {.lex_state = 50},
  [344] = {.lex_state = 931},
  [345] = {.lex_state = 49},
  [346] = {.lex_state = 49},
  [347] = {.lex_state = 49},
  [348] = {.lex_state = 931},
  [349] = {.lex_state = 931},
  [350] = {.lex_state = 931},
  [351] = {.lex_state = 27},
  [352] = {.lex_state = 49},
  [353] = {.lex_state = 58},
  [354] = {.lex_state = 43},
  [355] = {.lex_state = 49},
  [356] = {.lex_state = 57},
  [357] = {.lex_state = 49},
  [358] = {.lex_state = 49},
  [359] = {.lex_state = 56},
  [360] = {.lex_state = 56},
  [361] = {.lex_state = 49},
  [362] = {.lex_state = 27},
  [363] = {.lex_state = 56},
  [364] = {.lex_state = 27},
  [365] = {.lex_state = 56},
  [366] = {.lex_state = 51},
  [367] = {.lex_state = 44},
  [368] = {.lex_state = 55},
  [369] = {.lex_state = 22},
  [370] = {.lex_state = 932},
  [371] = {.lex_state = 62},
  [372] = {.lex_state = 62},
  [373] = {.lex_state = 22},
  [374] = {.lex_state = 25},
  [375] = {.lex_state = 62},
  [376] = {.lex_state = 62},
  [377] = {.lex_state = 50},
  [378] = {.lex_state = 25},
  [379] = {.lex_state = 62},
  [380] = {.lex_state = 50},
  [381] = {.lex_state = 62},
  [382] = {.lex_state = 62},
  [383] = {.lex_state = 62},
  [384] = {.lex_state = 62},
  [385] = {.lex_state = 22},
  [386] = {.lex_state = 62},
  [387] = {.lex_state = 62},
  [388] = {.lex_state = 62},
  [389] = {.lex_state = 932},
  [390] = {.lex_state = 62},
  [391] = {.lex_state = 62},
  [392] = {.lex_state = 63},
  [393] = {.lex_state = 62},
  [394] = {.lex_state = 62},
  [395] = {.lex_state = 62},
  [396] = {.lex_state = 22},
  [397] = {.lex_state = 62},
  [398] = {.lex_state = 50},
  [399] = {.lex_state = 62},
  [400] = {.lex_state = 62},
  [401] = {.lex_state = 50},
  [402] = {.lex_state = 62},
  [403] = {.lex_state = 62},
  [404] = {.lex_state = 62},
  [405] = {.lex_state = 62},
  [406] = {.lex_state = 25},
  [407] = {.lex_state = 50},
  [408] = {.lex_state = 22},
  [409] = {.lex_state = 25},
  [410] = {.lex_state = 28},
  [411] = {.lex_state = 50},
  [412] = {.lex_state = 22},
  [413] = {.lex_state = 22},
  [414] = {.lex_state = 28},
  [415] = {.lex_state = 54},
  [416] = {.lex_state = 22},
  [417] = {.lex_state = 25},
  [418] = {.lex_state = 54},
  [419] = {.lex_state = 54},
  [420] = {.lex_state = 22},
  [421] = {.lex_state = 50},
  [422] = {.lex_state = 50},
  [423] = {.lex_state = 50},
  [424] = {.lex_state = 53},
  [425] = {.lex_state = 102},
  [426] = {.lex_state = 102},
  [427] = {.lex_state = 22},
  [428] = {.lex_state = 62},
  [429] = {.lex_state = 22},
  [430] = {.lex_state = 22},
  [431] = {.lex_state = 22},
  [432] = {.lex_state = 30},
  [433] = {.lex_state = 22},
  [434] = {.lex_state = 26},
  [435] = {.lex_state = 26},
  [436] = {.lex_state = 22},
  [437] = {.lex_state = 22},
  [438] = {.lex_state = 22},
  [439] = {.lex_state = 26},
  [440] = {.lex_state = 26},
  [441] = {.lex_state = 22},
  [442] = {.lex_state = 31},
  [443] = {.lex_state = 32},
  [444] = {.lex_state = 22},
  [445] = {.lex_state = 26},
  [446] = {.lex_state = 22},
  [447] = {.lex_state = 50},
  [448] = {.lex_state = 22},
  [449] = {.lex_state = 26},
  [450] = {.lex_state = 32},
  [451] = {.lex_state = 31},
  [452] = {.lex_state = 22},
  [453] = {.lex_state = 22},
  [454] = {.lex_state = 32},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 22},
  [457] = {.lex_state = 26},
  [458] = {.lex_state = 22},
  [459] = {.lex_state = 22},
  [460] = {.lex_state = 50},
  [461] = {.lex_state = 22},
  [462] = {.lex_state = 22},
  [463] = {.lex_state = 22},
  [464] = {.lex_state = 22},
  [465] = {.lex_state = 22},
  [466] = {.lex_state = 22},
  [467] = {.lex_state = 52},
  [468] = {.lex_state = 22},
  [469] = {.lex_state = 26},
  [470] = {.lex_state = 26},
  [471] = {.lex_state = 26},
  [472] = {.lex_state = 26},
  [473] = {.lex_state = 26},
  [474] = {.lex_state = 26},
  [475] = {.lex_state = 26},
  [476] = {.lex_state = 26},
  [477] = {.lex_state = 22},
  [478] = {.lex_state = 50},
  [479] = {.lex_state = 26},
  [480] = {.lex_state = 22},
  [481] = {.lex_state = 22},
  [482] = {.lex_state = 22},
  [483] = {.lex_state = 50},
  [484] = {.lex_state = 31},
  [485] = {.lex_state = 32},
  [486] = {.lex_state = 26},
  [487] = {.lex_state = 26},
  [488] = {.lex_state = 26},
  [489] = {.lex_state = 26},
  [490] = {.lex_state = 26},
  [491] = {.lex_state = 26},
  [492] = {.lex_state = 32},
  [493] = {.lex_state = 31},
  [494] = {.lex_state = 32},
  [495] = {.lex_state = 26},
  [496] = {.lex_state = 26},
  [497] = {.lex_state = 26},
  [498] = {.lex_state = 31},
  [499] = {.lex_state = 26},
  [500] = {.lex_state = 22},
  [501] = {.lex_state = 22},
  [502] = {.lex_state = 50},
  [503] = {.lex_state = 22},
  [504] = {.lex_state = 22},
  [505] = {.lex_state = 22},
  [506] = {.lex_state = 33},
  [507] = {.lex_state = 22},
  [508] = {.lex_state = 22},
  [509] = {.lex_state = 50},
  [510] = {.lex_state = 22},
  [511] = {.lex_state = 22},
  [512] = {.lex_state = 22},
  [513] = {.lex_state = 50},
  [514] = {.lex_state = 33},
  [515] = {.lex_state = 26},
  [516] = {.lex_state = 50},
  [517] = {.lex_state = 22},
  [518] = {.lex_state = 22},
  [519] = {.lex_state = 50},
  [520] = {.lex_state = 50},
  [521] = {.lex_state = 22},
  [522] = {.lex_state = 50},
  [523] = {.lex_state = 22},
  [524] = {.lex_state = 22},
  [525] = {.lex_state = 50},
  [526] = {.lex_state = 22},
  [527] = {.lex_state = 50},
  [528] = {.lex_state = 32},
  [529] = {.lex_state = 50},
  [530] = {.lex_state = 50},
  [531] = {.lex_state = 50},
  [532] = {.lex_state = 50},
  [533] = {.lex_state = 50},
  [534] = {.lex_state = 22},
  [535] = {.lex_state = 50},
  [536] = {.lex_state = 22},
  [537] = {.lex_state = 50},
  [538] = {.lex_state = 31},
  [539] = {.lex_state = 50},
  [540] = {.lex_state = 50},
  [541] = {.lex_state = 22},
  [542] = {.lex_state = 62},
  [543] = {.lex_state = 22},
  [544] = {.lex_state = 32},
  [545] = {.lex_state = 31},
  [546] = {.lex_state = 26},
  [547] = {.lex_state = 62},
  [548] = {.lex_state = 32},
  [549] = {.lex_state = 31},
  [550] = {.lex_state = 50},
  [551] = {.lex_state = 62},
  [552] = {.lex_state = 32},
  [553] = {.lex_state = 31},
  [554] = {.lex_state = 22},
  [555] = {.lex_state = 62},
  [556] = {.lex_state = 62},
  [557] = {.lex_state = 62},
  [558] = {.lex_state = 62},
  [559] = {.lex_state = 62},
  [560] = {.lex_state = 62},
  [561] = {.lex_state = 62},
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
    [sym_dockerfile] = STATE(468),
    [sym__directive] = STATE(179),
    [sym_add] = STATE(179),
    [sym_arg] = STATE(179),
    [sym_cmd] = STATE(179),
    [sym_copy] = STATE(179),
    [sym_entrypoint] = STATE(179),
    [sym_env] = STATE(179),
    [sym_expose] = STATE(179),
    [sym_from] = STATE(179),
    [sym_healthcheck] = STATE(179),
    [sym_label] = STATE(179),
    [sym_maintainer] = STATE(179),
    [sym_onbuild] = STATE(179),
    [sym_run] = STATE(179),
    [sym_shell] = STATE(179),
    [sym_stopsignal] = STATE(179),
    [sym_user] = STATE(179),
    [sym_volume] = STATE(179),
    [sym_workdir] = STATE(179),
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
    [sym__directive] = STATE(179),
    [sym_add] = STATE(179),
    [sym_arg] = STATE(179),
    [sym_cmd] = STATE(179),
    [sym_copy] = STATE(179),
    [sym_entrypoint] = STATE(179),
    [sym_env] = STATE(179),
    [sym_expose] = STATE(179),
    [sym_from] = STATE(179),
    [sym_healthcheck] = STATE(179),
    [sym_label] = STATE(179),
    [sym_maintainer] = STATE(179),
    [sym_onbuild] = STATE(179),
    [sym_run] = STATE(179),
    [sym_shell] = STATE(179),
    [sym_stopsignal] = STATE(179),
    [sym_user] = STATE(179),
    [sym_volume] = STATE(179),
    [sym_workdir] = STATE(179),
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
    [sym__directive] = STATE(179),
    [sym_add] = STATE(179),
    [sym_arg] = STATE(179),
    [sym_cmd] = STATE(179),
    [sym_copy] = STATE(179),
    [sym_entrypoint] = STATE(179),
    [sym_env] = STATE(179),
    [sym_expose] = STATE(179),
    [sym_from] = STATE(179),
    [sym_healthcheck] = STATE(179),
    [sym_label] = STATE(179),
    [sym_maintainer] = STATE(179),
    [sym_onbuild] = STATE(179),
    [sym_run] = STATE(179),
    [sym_shell] = STATE(179),
    [sym_stopsignal] = STATE(179),
    [sym_user] = STATE(179),
    [sym_volume] = STATE(179),
    [sym_workdir] = STATE(179),
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
    [sym__port] = STATE(101),
    [sym_port] = STATE(101),
    [sym_port_range] = STATE(101),
    [sym__port_part] = STATE(76),
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
    [sym__port] = STATE(101),
    [sym_port] = STATE(101),
    [sym_port_range] = STATE(101),
    [sym__port_part] = STATE(76),
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
    [sym_add] = STATE(193),
    [sym_arg] = STATE(193),
    [sym_cmd] = STATE(193),
    [sym_copy] = STATE(193),
    [sym_entrypoint] = STATE(193),
    [sym_env] = STATE(193),
    [sym_expose] = STATE(193),
    [sym_healthcheck] = STATE(193),
    [sym_label] = STATE(193),
    [sym_run] = STATE(193),
    [sym_shell] = STATE(193),
    [sym_stopsignal] = STATE(193),
    [sym_user] = STATE(193),
    [sym_volume] = STATE(193),
    [sym_workdir] = STATE(193),
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
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [aux_sym__repository_start_repeat2] = STATE(16),
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
    [aux_sym__repository_start_token4] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(137),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(15),
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
    [aux_sym__repository_start_token8] = ACTIONS(139),
    [aux_sym__repository_start_token11] = ACTIONS(139),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [aux_sym__repository_start_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_add_token1] = ACTIONS(145),
    [aux_sym_arg_token1] = ACTIONS(145),
    [aux_sym_cmd_token1] = ACTIONS(145),
    [aux_sym_copy_token1] = ACTIONS(145),
    [aux_sym_entrypoint_token1] = ACTIONS(145),
    [aux_sym_env_token1] = ACTIONS(145),
    [aux_sym_expose_token1] = ACTIONS(145),
    [aux_sym_from_token1] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(143),
    [aux_sym_healthcheck_token1] = ACTIONS(145),
    [aux_sym_label_token1] = ACTIONS(145),
    [aux_sym_maintainer_token1] = ACTIONS(145),
    [aux_sym_onbuild_token1] = ACTIONS(145),
    [aux_sym_run_token1] = ACTIONS(145),
    [aux_sym_shell_token1] = ACTIONS(145),
    [aux_sym_stopsignal_token1] = ACTIONS(145),
    [aux_sym_user_token1] = ACTIONS(145),
    [aux_sym_volume_token1] = ACTIONS(145),
    [aux_sym_workdir_token1] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(143),
    [aux_sym__repository_start_token3] = ACTIONS(145),
    [aux_sym__repository_start_token12] = ACTIONS(147),
    [aux_sym__repository_start_token15] = ACTIONS(147),
    [aux_sym__repository_start_token16] = ACTIONS(143),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(143),
    [sym__space_no_newline] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_add_token1] = ACTIONS(152),
    [aux_sym_arg_token1] = ACTIONS(152),
    [aux_sym_cmd_token1] = ACTIONS(152),
    [aux_sym_copy_token1] = ACTIONS(152),
    [aux_sym_entrypoint_token1] = ACTIONS(152),
    [aux_sym_env_token1] = ACTIONS(152),
    [aux_sym_expose_token1] = ACTIONS(152),
    [aux_sym_from_token1] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_healthcheck_token1] = ACTIONS(152),
    [aux_sym_label_token1] = ACTIONS(152),
    [aux_sym_maintainer_token1] = ACTIONS(152),
    [aux_sym_onbuild_token1] = ACTIONS(152),
    [aux_sym_run_token1] = ACTIONS(152),
    [aux_sym_shell_token1] = ACTIONS(152),
    [aux_sym_stopsignal_token1] = ACTIONS(152),
    [aux_sym_user_token1] = ACTIONS(152),
    [aux_sym_volume_token1] = ACTIONS(152),
    [aux_sym_workdir_token1] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(154),
    [aux_sym__repository_start_token7] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat1] = STATE(7),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token16] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [aux_sym__repository_start_token16] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat3] = STATE(18),
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
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token8] = ACTIONS(139),
    [aux_sym__repository_start_token11] = ACTIONS(139),
    [aux_sym__repository_start_token16] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
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
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token4] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(137),
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
  [24] = {
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
    [aux_sym__repository_start_repeat3] = STATE(26),
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
    [aux_sym__repository_start_token8] = ACTIONS(211),
    [aux_sym__repository_start_token11] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [aux_sym__repository_start_repeat4] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_add_token1] = ACTIONS(145),
    [aux_sym_arg_token1] = ACTIONS(145),
    [aux_sym_cmd_token1] = ACTIONS(145),
    [aux_sym_copy_token1] = ACTIONS(145),
    [aux_sym_entrypoint_token1] = ACTIONS(145),
    [aux_sym_env_token1] = ACTIONS(145),
    [aux_sym_expose_token1] = ACTIONS(145),
    [aux_sym_from_token1] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(143),
    [aux_sym_healthcheck_token1] = ACTIONS(145),
    [aux_sym_label_token1] = ACTIONS(145),
    [aux_sym_maintainer_token1] = ACTIONS(145),
    [aux_sym_onbuild_token1] = ACTIONS(145),
    [aux_sym_run_token1] = ACTIONS(145),
    [aux_sym_shell_token1] = ACTIONS(145),
    [aux_sym_stopsignal_token1] = ACTIONS(145),
    [aux_sym_user_token1] = ACTIONS(145),
    [aux_sym_volume_token1] = ACTIONS(145),
    [aux_sym_workdir_token1] = ACTIONS(145),
    [aux_sym__repository_start_token3] = ACTIONS(145),
    [aux_sym__repository_start_token12] = ACTIONS(214),
    [aux_sym__repository_start_token15] = ACTIONS(214),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(143),
    [sym__space_no_newline] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(30),
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
    [anon_sym_DOLLAR] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token2] = ACTIONS(217),
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [sym_port_protocol] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_add_token1] = ACTIONS(221),
    [aux_sym_arg_token1] = ACTIONS(221),
    [aux_sym_cmd_token1] = ACTIONS(221),
    [aux_sym_copy_token1] = ACTIONS(221),
    [aux_sym_entrypoint_token1] = ACTIONS(221),
    [aux_sym_env_token1] = ACTIONS(221),
    [aux_sym_expose_token1] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [aux_sym_from_token1] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [aux_sym_healthcheck_token1] = ACTIONS(221),
    [aux_sym_label_token1] = ACTIONS(221),
    [aux_sym_maintainer_token1] = ACTIONS(221),
    [aux_sym_onbuild_token1] = ACTIONS(221),
    [aux_sym_run_token1] = ACTIONS(221),
    [aux_sym_shell_token1] = ACTIONS(221),
    [aux_sym_stopsignal_token1] = ACTIONS(221),
    [aux_sym_user_token1] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [aux_sym_volume_token1] = ACTIONS(221),
    [aux_sym_workdir_token1] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [aux_sym__port_part_token1] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [30] = {
    [aux_sym__repository_start_repeat1] = STATE(30),
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
    [anon_sym_DOLLAR] = ACTIONS(225),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [sym_port_protocol] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(228),
    [aux_sym_add_token1] = ACTIONS(228),
    [aux_sym_arg_token1] = ACTIONS(228),
    [aux_sym_cmd_token1] = ACTIONS(228),
    [aux_sym_copy_token1] = ACTIONS(228),
    [aux_sym_entrypoint_token1] = ACTIONS(228),
    [aux_sym_env_token1] = ACTIONS(228),
    [aux_sym_expose_token1] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [aux_sym_from_token1] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [aux_sym_healthcheck_token1] = ACTIONS(228),
    [aux_sym_label_token1] = ACTIONS(228),
    [aux_sym_maintainer_token1] = ACTIONS(228),
    [aux_sym_onbuild_token1] = ACTIONS(228),
    [aux_sym_run_token1] = ACTIONS(228),
    [aux_sym_shell_token1] = ACTIONS(228),
    [aux_sym_stopsignal_token1] = ACTIONS(228),
    [aux_sym_user_token1] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [aux_sym_volume_token1] = ACTIONS(228),
    [aux_sym_workdir_token1] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [aux_sym__port_part_token1] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(228),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [32] = {
    [aux_sym__repository_start_repeat2] = STATE(33),
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
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [aux_sym__repository_start_token4] = ACTIONS(230),
    [aux_sym__repository_start_token7] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat2] = STATE(36),
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
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [aux_sym__repository_start_token4] = ACTIONS(230),
    [aux_sym__repository_start_token7] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat4] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [aux_sym__repository_start_token12] = ACTIONS(234),
    [aux_sym__repository_start_token15] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
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
    [anon_sym_DOLLAR] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [aux_sym__repository_start_token2] = ACTIONS(217),
    [aux_sym__repository_start_token3] = ACTIONS(236),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(157),
    [sym__space_no_newline] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat2] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_add_token1] = ACTIONS(152),
    [aux_sym_arg_token1] = ACTIONS(152),
    [aux_sym_cmd_token1] = ACTIONS(152),
    [aux_sym_copy_token1] = ACTIONS(152),
    [aux_sym_entrypoint_token1] = ACTIONS(152),
    [aux_sym_env_token1] = ACTIONS(152),
    [aux_sym_expose_token1] = ACTIONS(152),
    [aux_sym_from_token1] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_healthcheck_token1] = ACTIONS(152),
    [aux_sym_label_token1] = ACTIONS(152),
    [aux_sym_maintainer_token1] = ACTIONS(152),
    [aux_sym_onbuild_token1] = ACTIONS(152),
    [aux_sym_run_token1] = ACTIONS(152),
    [aux_sym_shell_token1] = ACTIONS(152),
    [aux_sym_stopsignal_token1] = ACTIONS(152),
    [aux_sym_user_token1] = ACTIONS(152),
    [aux_sym_volume_token1] = ACTIONS(152),
    [aux_sym_workdir_token1] = ACTIONS(152),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(238),
    [aux_sym__repository_start_token7] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym__repository_start_repeat3] = STATE(38),
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
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [aux_sym__repository_start_token8] = ACTIONS(241),
    [aux_sym__repository_start_token11] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym__repository_start_repeat3] = STATE(26),
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
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [aux_sym__repository_start_token8] = ACTIONS(241),
    [aux_sym__repository_start_token11] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat4] = STATE(27),
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
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [aux_sym__repository_start_token12] = ACTIONS(234),
    [aux_sym__repository_start_token15] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token15] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
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
  [43] = {
    [aux_sym__repository_start_repeat1] = STATE(40),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
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
    [aux_sym__repository_start_token8] = ACTIONS(139),
    [aux_sym__repository_start_token11] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
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
  [47] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(271),
    [aux_sym_healthcheck_token1] = ACTIONS(271),
    [aux_sym_label_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_onbuild_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_user_token1] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
    [aux_sym__repository_start_repeat2] = STATE(58),
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
    [aux_sym__repository_start_token4] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
    [aux_sym__repository_start_repeat3] = STATE(44),
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
    [aux_sym__repository_start_token8] = ACTIONS(139),
    [aux_sym__repository_start_token11] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__repository_start_repeat4] = STATE(64),
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
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(273),
    [aux_sym_arg_token1] = ACTIONS(273),
    [aux_sym_cmd_token1] = ACTIONS(273),
    [aux_sym_copy_token1] = ACTIONS(273),
    [aux_sym_entrypoint_token1] = ACTIONS(273),
    [aux_sym_env_token1] = ACTIONS(273),
    [aux_sym_expose_token1] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(273),
    [aux_sym_healthcheck_token1] = ACTIONS(273),
    [aux_sym_label_token1] = ACTIONS(273),
    [aux_sym_maintainer_token1] = ACTIONS(273),
    [aux_sym_onbuild_token1] = ACTIONS(273),
    [aux_sym_run_token1] = ACTIONS(273),
    [aux_sym_shell_token1] = ACTIONS(273),
    [aux_sym_stopsignal_token1] = ACTIONS(273),
    [aux_sym_user_token1] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(273),
    [aux_sym_workdir_token1] = ACTIONS(273),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [52] = {
    [aux_sym_path_repeat1] = STATE(52),
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
    [aux_sym_healthcheck_token1] = ACTIONS(275),
    [aux_sym_label_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_onbuild_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym_path_token1] = ACTIONS(280),
    [aux_sym_path_token2] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym__space_no_newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
  [54] = {
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
  [58] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
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
    [aux_sym__repository_start_token4] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(285),
    [aux_sym_healthcheck_token1] = ACTIONS(285),
    [aux_sym_label_token1] = ACTIONS(285),
    [aux_sym_maintainer_token1] = ACTIONS(285),
    [aux_sym_onbuild_token1] = ACTIONS(285),
    [aux_sym_run_token1] = ACTIONS(285),
    [aux_sym_shell_token1] = ACTIONS(285),
    [aux_sym_stopsignal_token1] = ACTIONS(285),
    [aux_sym_user_token1] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(285),
    [aux_sym_workdir_token1] = ACTIONS(285),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym_add_token1] = ACTIONS(287),
    [aux_sym_arg_token1] = ACTIONS(287),
    [aux_sym_cmd_token1] = ACTIONS(287),
    [aux_sym_copy_token1] = ACTIONS(287),
    [aux_sym_entrypoint_token1] = ACTIONS(287),
    [aux_sym_env_token1] = ACTIONS(287),
    [aux_sym_expose_token1] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [aux_sym_from_token1] = ACTIONS(287),
    [aux_sym_healthcheck_token1] = ACTIONS(287),
    [aux_sym_label_token1] = ACTIONS(287),
    [aux_sym_maintainer_token1] = ACTIONS(287),
    [aux_sym_onbuild_token1] = ACTIONS(287),
    [aux_sym_run_token1] = ACTIONS(287),
    [aux_sym_shell_token1] = ACTIONS(287),
    [aux_sym_stopsignal_token1] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [aux_sym_volume_token1] = ACTIONS(287),
    [aux_sym_workdir_token1] = ACTIONS(287),
    [aux_sym_path_token1] = ACTIONS(295),
    [aux_sym_path_token2] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
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
  [62] = {
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
  [63] = {
    [aux_sym_path_repeat1] = STATE(65),
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
    [aux_sym_path_token1] = ACTIONS(305),
    [aux_sym_path_token2] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym__space_no_newline] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym_path_repeat1] = STATE(52),
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
    [anon_sym_DOLLAR] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(313),
    [aux_sym_path_token2] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
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
    [aux_sym_path_token1] = ACTIONS(280),
    [aux_sym_path_token2] = ACTIONS(280),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym__space_no_newline] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(319),
    [aux_sym_workdir_token1] = ACTIONS(319),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [aux_sym_from_token1] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [aux_sym_healthcheck_token1] = ACTIONS(323),
    [aux_sym_label_token1] = ACTIONS(323),
    [aux_sym_maintainer_token1] = ACTIONS(323),
    [aux_sym_onbuild_token1] = ACTIONS(323),
    [aux_sym_run_token1] = ACTIONS(323),
    [aux_sym_shell_token1] = ACTIONS(323),
    [aux_sym_stopsignal_token1] = ACTIONS(323),
    [aux_sym_user_token1] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(323),
    [aux_sym_volume_token1] = ACTIONS(323),
    [aux_sym_workdir_token1] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [aux_sym__port_part_token1] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_add_token1] = ACTIONS(325),
    [aux_sym_arg_token1] = ACTIONS(325),
    [aux_sym_cmd_token1] = ACTIONS(325),
    [aux_sym_copy_token1] = ACTIONS(325),
    [aux_sym_entrypoint_token1] = ACTIONS(325),
    [aux_sym_env_token1] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [aux_sym_from_token1] = ACTIONS(325),
    [aux_sym_healthcheck_token1] = ACTIONS(325),
    [aux_sym_label_token1] = ACTIONS(325),
    [aux_sym_maintainer_token1] = ACTIONS(325),
    [aux_sym_onbuild_token1] = ACTIONS(325),
    [aux_sym_run_token1] = ACTIONS(325),
    [aux_sym_shell_token1] = ACTIONS(325),
    [aux_sym_stopsignal_token1] = ACTIONS(325),
    [aux_sym_user_token1] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [aux_sym_volume_token1] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(325),
    [aux_sym_path_token1] = ACTIONS(327),
    [aux_sym_path_token2] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(325),
    [sym__space_no_newline] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(329),
    [aux_sym_arg_token1] = ACTIONS(329),
    [aux_sym_cmd_token1] = ACTIONS(329),
    [aux_sym_copy_token1] = ACTIONS(329),
    [aux_sym_entrypoint_token1] = ACTIONS(329),
    [aux_sym_env_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(329),
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
    [anon_sym_SLASH] = ACTIONS(333),
    [aux_sym__repository_start_token16] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [aux_sym__repository_start_repeat2] = STATE(81),
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
    [aux_sym__repository_start_token4] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [72] = {
    [aux_sym__repository_start_repeat3] = STATE(82),
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
    [aux_sym__repository_start_token8] = ACTIONS(139),
    [aux_sym__repository_start_token11] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [aux_sym__repository_start_repeat4] = STATE(83),
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
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
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
  [76] = {
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
    [anon_sym_COLON] = ACTIONS(337),
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
    [anon_sym_DASH] = ACTIONS(339),
    [aux_sym__port_part_token1] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [77] = {
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
  [78] = {
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
    [aux_sym_path_token1] = ACTIONS(343),
    [aux_sym_path_token2] = ACTIONS(343),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
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
  [80] = {
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
  [81] = {
    [aux_sym__repository_start_repeat2] = STATE(12),
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
    [aux_sym__repository_start_token4] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym__space_no_newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [82] = {
    [aux_sym__repository_start_repeat3] = STATE(18),
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
    [aux_sym__repository_start_token8] = ACTIONS(139),
    [aux_sym__repository_start_token11] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym__space_no_newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym__repository_start_token12] = ACTIONS(141),
    [aux_sym__repository_start_token15] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym__space_no_newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [aux_sym_add_token1] = ACTIONS(357),
    [aux_sym_arg_token1] = ACTIONS(357),
    [aux_sym_cmd_token1] = ACTIONS(357),
    [aux_sym_copy_token1] = ACTIONS(357),
    [aux_sym_entrypoint_token1] = ACTIONS(357),
    [aux_sym_env_token1] = ACTIONS(357),
    [aux_sym_expose_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [aux_sym_from_token1] = ACTIONS(357),
    [aux_sym_healthcheck_token1] = ACTIONS(357),
    [aux_sym_label_token1] = ACTIONS(357),
    [aux_sym_maintainer_token1] = ACTIONS(357),
    [aux_sym_onbuild_token1] = ACTIONS(357),
    [aux_sym_run_token1] = ACTIONS(357),
    [aux_sym_shell_token1] = ACTIONS(357),
    [aux_sym_stopsignal_token1] = ACTIONS(357),
    [aux_sym_user_token1] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(357),
    [aux_sym_volume_token1] = ACTIONS(357),
    [aux_sym_workdir_token1] = ACTIONS(357),
    [aux_sym_path_token1] = ACTIONS(359),
    [aux_sym_path_token2] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_add_token1] = ACTIONS(361),
    [aux_sym_arg_token1] = ACTIONS(361),
    [aux_sym_cmd_token1] = ACTIONS(361),
    [aux_sym_copy_token1] = ACTIONS(361),
    [aux_sym_entrypoint_token1] = ACTIONS(361),
    [aux_sym_env_token1] = ACTIONS(361),
    [aux_sym_expose_token1] = ACTIONS(361),
    [aux_sym_from_token1] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(361),
    [aux_sym_healthcheck_token1] = ACTIONS(361),
    [aux_sym_label_token1] = ACTIONS(361),
    [aux_sym_maintainer_token1] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(361),
    [aux_sym_run_token1] = ACTIONS(361),
    [aux_sym_shell_token1] = ACTIONS(361),
    [aux_sym_stopsignal_token1] = ACTIONS(361),
    [aux_sym_user_token1] = ACTIONS(361),
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(365),
    [aux_sym__repository_start_token16] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym__space_no_newline] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
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
  [87] = {
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
    [anon_sym_COLON] = ACTIONS(367),
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
    [anon_sym_DASH] = ACTIONS(367),
    [aux_sym__port_part_token1] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_add_token1] = ACTIONS(221),
    [aux_sym_arg_token1] = ACTIONS(221),
    [aux_sym_cmd_token1] = ACTIONS(221),
    [aux_sym_copy_token1] = ACTIONS(221),
    [aux_sym_entrypoint_token1] = ACTIONS(221),
    [aux_sym_env_token1] = ACTIONS(221),
    [aux_sym_expose_token1] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [aux_sym_from_token1] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [aux_sym_healthcheck_token1] = ACTIONS(221),
    [aux_sym_label_token1] = ACTIONS(221),
    [aux_sym_maintainer_token1] = ACTIONS(221),
    [aux_sym_onbuild_token1] = ACTIONS(221),
    [aux_sym_run_token1] = ACTIONS(221),
    [aux_sym_shell_token1] = ACTIONS(221),
    [aux_sym_stopsignal_token1] = ACTIONS(221),
    [aux_sym_user_token1] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [aux_sym_volume_token1] = ACTIONS(221),
    [aux_sym_workdir_token1] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [aux_sym__port_part_token1] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_add_token1] = ACTIONS(165),
    [aux_sym_arg_token1] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_copy_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_env_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(165),
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
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token16] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [aux_sym__repository_start_repeat1] = STATE(67),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym__space_no_newline] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [aux_sym__repository_start_repeat2] = STATE(106),
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
    [aux_sym__repository_start_token4] = ACTIONS(385),
    [aux_sym__repository_start_token7] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [aux_sym__repository_start_repeat3] = STATE(115),
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
    [aux_sym__repository_start_token8] = ACTIONS(387),
    [aux_sym__repository_start_token11] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_path_repeat1] = STATE(108),
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
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(391),
    [aux_sym_path_token2] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
    [aux_sym__repository_start_repeat4] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_add_token1] = ACTIONS(145),
    [aux_sym_arg_token1] = ACTIONS(145),
    [aux_sym_cmd_token1] = ACTIONS(145),
    [aux_sym_copy_token1] = ACTIONS(145),
    [aux_sym_entrypoint_token1] = ACTIONS(145),
    [aux_sym_env_token1] = ACTIONS(145),
    [aux_sym_expose_token1] = ACTIONS(145),
    [aux_sym_from_token1] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(145),
    [aux_sym_label_token1] = ACTIONS(145),
    [aux_sym_maintainer_token1] = ACTIONS(145),
    [aux_sym_onbuild_token1] = ACTIONS(145),
    [aux_sym_run_token1] = ACTIONS(145),
    [aux_sym_shell_token1] = ACTIONS(145),
    [aux_sym_stopsignal_token1] = ACTIONS(145),
    [aux_sym_user_token1] = ACTIONS(145),
    [aux_sym_volume_token1] = ACTIONS(145),
    [aux_sym_workdir_token1] = ACTIONS(145),
    [aux_sym__repository_start_token3] = ACTIONS(145),
    [aux_sym__repository_start_token12] = ACTIONS(395),
    [aux_sym__repository_start_token15] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [97] = {
    [aux_sym__repository_start_repeat3] = STATE(97),
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
    [aux_sym__repository_start_token8] = ACTIONS(398),
    [aux_sym__repository_start_token11] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [aux_sym__repository_start_repeat2] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_add_token1] = ACTIONS(152),
    [aux_sym_arg_token1] = ACTIONS(152),
    [aux_sym_cmd_token1] = ACTIONS(152),
    [aux_sym_copy_token1] = ACTIONS(152),
    [aux_sym_entrypoint_token1] = ACTIONS(152),
    [aux_sym_env_token1] = ACTIONS(152),
    [aux_sym_expose_token1] = ACTIONS(152),
    [aux_sym_from_token1] = ACTIONS(152),
    [aux_sym_healthcheck_token1] = ACTIONS(152),
    [aux_sym_label_token1] = ACTIONS(152),
    [aux_sym_maintainer_token1] = ACTIONS(152),
    [aux_sym_onbuild_token1] = ACTIONS(152),
    [aux_sym_run_token1] = ACTIONS(152),
    [aux_sym_shell_token1] = ACTIONS(152),
    [aux_sym_stopsignal_token1] = ACTIONS(152),
    [aux_sym_user_token1] = ACTIONS(152),
    [aux_sym_volume_token1] = ACTIONS(152),
    [aux_sym_workdir_token1] = ACTIONS(152),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(401),
    [aux_sym__repository_start_token7] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [aux_sym__repository_start_repeat1] = STATE(99),
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
    [anon_sym_DOLLAR] = ACTIONS(404),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token2] = ACTIONS(404),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [aux_sym__env_pairs] = STATE(107),
    [sym_env_pair] = STATE(107),
    [sym_env_key] = STATE(137),
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
    [aux_sym_env_key_token1] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [aux_sym_add_token1] = ACTIONS(413),
    [aux_sym_arg_token1] = ACTIONS(413),
    [aux_sym_cmd_token1] = ACTIONS(413),
    [aux_sym_copy_token1] = ACTIONS(413),
    [aux_sym_entrypoint_token1] = ACTIONS(413),
    [aux_sym_env_token1] = ACTIONS(413),
    [aux_sym_expose_token1] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [aux_sym_from_token1] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(415),
    [aux_sym_healthcheck_token1] = ACTIONS(413),
    [aux_sym_label_token1] = ACTIONS(413),
    [aux_sym_maintainer_token1] = ACTIONS(413),
    [aux_sym_onbuild_token1] = ACTIONS(413),
    [aux_sym_run_token1] = ACTIONS(413),
    [aux_sym_shell_token1] = ACTIONS(413),
    [aux_sym_stopsignal_token1] = ACTIONS(413),
    [aux_sym_user_token1] = ACTIONS(413),
    [anon_sym_DOLLAR] = ACTIONS(413),
    [aux_sym_volume_token1] = ACTIONS(413),
    [aux_sym_workdir_token1] = ACTIONS(413),
    [aux_sym__port_part_token1] = ACTIONS(413),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(413),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(417),
    [aux_sym_arg_token1] = ACTIONS(417),
    [aux_sym_cmd_token1] = ACTIONS(417),
    [aux_sym_copy_token1] = ACTIONS(417),
    [aux_sym_entrypoint_token1] = ACTIONS(417),
    [aux_sym_env_token1] = ACTIONS(417),
    [aux_sym_expose_token1] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [aux_sym_healthcheck_token1] = ACTIONS(417),
    [aux_sym_label_token1] = ACTIONS(417),
    [aux_sym_maintainer_token1] = ACTIONS(417),
    [aux_sym_onbuild_token1] = ACTIONS(417),
    [aux_sym_run_token1] = ACTIONS(417),
    [aux_sym_shell_token1] = ACTIONS(417),
    [aux_sym_stopsignal_token1] = ACTIONS(417),
    [aux_sym_user_token1] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [aux_sym_volume_token1] = ACTIONS(417),
    [aux_sym_workdir_token1] = ACTIONS(417),
    [aux_sym__port_part_token1] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [aux_sym__labels] = STATE(110),
    [sym_label_pair] = STATE(110),
    [sym_label_key] = STATE(425),
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
    [aux_sym_env_key_token1] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [aux_sym_path_repeat1] = STATE(104),
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
    [anon_sym_DOLLAR] = ACTIONS(425),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym_path_token1] = ACTIONS(280),
    [aux_sym_path_token2] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym_add_token1] = ACTIONS(431),
    [aux_sym_arg_token1] = ACTIONS(431),
    [aux_sym_cmd_token1] = ACTIONS(431),
    [aux_sym_copy_token1] = ACTIONS(431),
    [aux_sym_entrypoint_token1] = ACTIONS(431),
    [aux_sym_env_token1] = ACTIONS(431),
    [aux_sym_expose_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [aux_sym_from_token1] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(431),
    [aux_sym_healthcheck_token1] = ACTIONS(431),
    [aux_sym_label_token1] = ACTIONS(431),
    [aux_sym_maintainer_token1] = ACTIONS(431),
    [aux_sym_onbuild_token1] = ACTIONS(431),
    [aux_sym_run_token1] = ACTIONS(431),
    [aux_sym_shell_token1] = ACTIONS(431),
    [aux_sym_stopsignal_token1] = ACTIONS(431),
    [aux_sym_user_token1] = ACTIONS(431),
    [anon_sym_DOLLAR] = ACTIONS(431),
    [aux_sym_volume_token1] = ACTIONS(431),
    [aux_sym_workdir_token1] = ACTIONS(431),
    [aux_sym__port_part_token1] = ACTIONS(431),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym__repository_start_repeat2] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(433),
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
    [aux_sym__repository_start_token3] = ACTIONS(437),
    [aux_sym__repository_start_token4] = ACTIONS(385),
    [aux_sym__repository_start_token7] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [aux_sym__env_pairs] = STATE(107),
    [sym_env_pair] = STATE(107),
    [sym_env_key] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(439),
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
    [aux_sym_env_key_token1] = ACTIONS(443),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym_path_repeat1] = STATE(104),
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
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(446),
    [aux_sym_path_token2] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym__repository_start_repeat1] = STATE(99),
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
    [anon_sym_DOLLAR] = ACTIONS(448),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym__repository_start_token2] = ACTIONS(448),
    [aux_sym__repository_start_token3] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [aux_sym__labels] = STATE(110),
    [sym_label_pair] = STATE(110),
    [sym_label_key] = STATE(425),
    [ts_builtin_sym_end] = ACTIONS(450),
    [aux_sym_add_token1] = ACTIONS(452),
    [aux_sym_arg_token1] = ACTIONS(452),
    [aux_sym_cmd_token1] = ACTIONS(452),
    [aux_sym_copy_token1] = ACTIONS(452),
    [aux_sym_entrypoint_token1] = ACTIONS(452),
    [aux_sym_env_token1] = ACTIONS(452),
    [aux_sym_expose_token1] = ACTIONS(452),
    [aux_sym_from_token1] = ACTIONS(452),
    [aux_sym_healthcheck_token1] = ACTIONS(452),
    [aux_sym_label_token1] = ACTIONS(452),
    [aux_sym_maintainer_token1] = ACTIONS(452),
    [aux_sym_onbuild_token1] = ACTIONS(452),
    [aux_sym_run_token1] = ACTIONS(452),
    [aux_sym_shell_token1] = ACTIONS(452),
    [aux_sym_stopsignal_token1] = ACTIONS(452),
    [aux_sym_user_token1] = ACTIONS(452),
    [aux_sym_volume_token1] = ACTIONS(452),
    [aux_sym_workdir_token1] = ACTIONS(452),
    [aux_sym_env_key_token1] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(450),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
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
    [aux_sym_path_token1] = ACTIONS(457),
    [aux_sym_path_token2] = ACTIONS(457),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
    [aux_sym__repository_start_repeat4] = STATE(113),
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
    [aux_sym__repository_start_token12] = ACTIONS(459),
    [aux_sym__repository_start_token15] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [aux_sym__repository_start_repeat4] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(433),
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
    [aux_sym__repository_start_token3] = ACTIONS(437),
    [aux_sym__repository_start_token12] = ACTIONS(459),
    [aux_sym__repository_start_token15] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [114] = {
    [aux_sym__repository_start_repeat1] = STATE(109),
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
    [anon_sym_DOLLAR] = ACTIONS(448),
    [aux_sym_volume_token1] = ACTIONS(463),
    [aux_sym_workdir_token1] = ACTIONS(463),
    [aux_sym__repository_start_token2] = ACTIONS(448),
    [aux_sym__repository_start_token3] = ACTIONS(465),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
    [aux_sym__repository_start_repeat3] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(433),
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
    [aux_sym__repository_start_token3] = ACTIONS(437),
    [aux_sym__repository_start_token8] = ACTIONS(387),
    [aux_sym__repository_start_token11] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_add_token1] = ACTIONS(467),
    [aux_sym_arg_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_copy_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_env_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [aux_sym_healthcheck_token1] = ACTIONS(467),
    [aux_sym_label_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_onbuild_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_shell_token1] = ACTIONS(467),
    [aux_sym_stopsignal_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [anon_sym_DOLLAR] = ACTIONS(467),
    [aux_sym_volume_token1] = ACTIONS(467),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [aux_sym__port_part_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_env_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_AT] = ACTIONS(473),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(469),
    [sym__space_no_newline] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
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
  [119] = {
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
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [aux_sym_add_token1] = ACTIONS(477),
    [aux_sym_arg_token1] = ACTIONS(477),
    [aux_sym_cmd_token1] = ACTIONS(477),
    [aux_sym_copy_token1] = ACTIONS(477),
    [aux_sym_entrypoint_token1] = ACTIONS(477),
    [aux_sym_env_token1] = ACTIONS(477),
    [aux_sym_expose_token1] = ACTIONS(477),
    [aux_sym_from_token1] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(479),
    [anon_sym_AT] = ACTIONS(481),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(477),
    [sym__space_no_newline] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
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
  [122] = {
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
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [aux_sym_add_token1] = ACTIONS(485),
    [aux_sym_arg_token1] = ACTIONS(485),
    [aux_sym_cmd_token1] = ACTIONS(485),
    [aux_sym_copy_token1] = ACTIONS(485),
    [aux_sym_entrypoint_token1] = ACTIONS(485),
    [aux_sym_env_token1] = ACTIONS(485),
    [aux_sym_expose_token1] = ACTIONS(485),
    [aux_sym_from_token1] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(489),
    [aux_sym_healthcheck_token1] = ACTIONS(485),
    [aux_sym_label_token1] = ACTIONS(485),
    [aux_sym_maintainer_token1] = ACTIONS(485),
    [aux_sym_onbuild_token1] = ACTIONS(485),
    [aux_sym_run_token1] = ACTIONS(485),
    [aux_sym_shell_token1] = ACTIONS(485),
    [aux_sym_stopsignal_token1] = ACTIONS(485),
    [aux_sym_user_token1] = ACTIONS(485),
    [aux_sym_volume_token1] = ACTIONS(485),
    [aux_sym_workdir_token1] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(485),
    [sym__space_no_newline] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
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
  [125] = {
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
  [126] = {
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
  [127] = {
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
  [128] = {
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
  [129] = {
    [aux_sym__anything] = STATE(132),
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
    [aux_sym_env_key_token1] = ACTIONS(493),
    [aux_sym__anything_token1] = ACTIONS(497),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_add_token1] = ACTIONS(361),
    [aux_sym_arg_token1] = ACTIONS(361),
    [aux_sym_cmd_token1] = ACTIONS(361),
    [aux_sym_copy_token1] = ACTIONS(361),
    [aux_sym_entrypoint_token1] = ACTIONS(361),
    [aux_sym_env_token1] = ACTIONS(361),
    [aux_sym_expose_token1] = ACTIONS(361),
    [aux_sym_from_token1] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(361),
    [aux_sym_healthcheck_token1] = ACTIONS(361),
    [aux_sym_label_token1] = ACTIONS(361),
    [aux_sym_maintainer_token1] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(361),
    [aux_sym_run_token1] = ACTIONS(361),
    [aux_sym_shell_token1] = ACTIONS(361),
    [aux_sym_stopsignal_token1] = ACTIONS(361),
    [aux_sym_user_token1] = ACTIONS(361),
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym__space_no_newline] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
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
  [132] = {
    [aux_sym__anything] = STATE(132),
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
    [aux_sym_env_key_token1] = ACTIONS(499),
    [aux_sym__anything_token1] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
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
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_add_token1] = ACTIONS(165),
    [aux_sym_arg_token1] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_copy_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_env_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(165),
    [sym__space_no_newline] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
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
    [anon_sym_DOLLAR] = ACTIONS(275),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym_path_token1] = ACTIONS(280),
    [aux_sym_path_token2] = ACTIONS(280),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [aux_sym_add_token1] = ACTIONS(506),
    [aux_sym_arg_token1] = ACTIONS(506),
    [aux_sym_cmd_token1] = ACTIONS(506),
    [aux_sym_copy_token1] = ACTIONS(506),
    [aux_sym_entrypoint_token1] = ACTIONS(506),
    [aux_sym_env_token1] = ACTIONS(506),
    [aux_sym_expose_token1] = ACTIONS(506),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [aux_sym_from_token1] = ACTIONS(506),
    [aux_sym_healthcheck_token1] = ACTIONS(506),
    [aux_sym_label_token1] = ACTIONS(506),
    [aux_sym_maintainer_token1] = ACTIONS(506),
    [aux_sym_onbuild_token1] = ACTIONS(506),
    [aux_sym_run_token1] = ACTIONS(506),
    [aux_sym_shell_token1] = ACTIONS(506),
    [aux_sym_stopsignal_token1] = ACTIONS(506),
    [aux_sym_user_token1] = ACTIONS(506),
    [anon_sym_DOLLAR] = ACTIONS(506),
    [aux_sym_volume_token1] = ACTIONS(506),
    [aux_sym_workdir_token1] = ACTIONS(506),
    [aux_sym__port_part_token1] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [aux_sym_add_token1] = ACTIONS(510),
    [aux_sym_arg_token1] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(512),
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
    [aux_sym_env_key_token1] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(508),
    [sym__space_no_newline] = ACTIONS(514),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [aux_sym_add_token1] = ACTIONS(518),
    [aux_sym_arg_token1] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(516),
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
    [sym__space_no_newline] = ACTIONS(518),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym_add_token1] = ACTIONS(329),
    [aux_sym_arg_token1] = ACTIONS(329),
    [aux_sym_cmd_token1] = ACTIONS(329),
    [aux_sym_copy_token1] = ACTIONS(329),
    [aux_sym_entrypoint_token1] = ACTIONS(329),
    [aux_sym_env_token1] = ACTIONS(329),
    [aux_sym_expose_token1] = ACTIONS(329),
    [aux_sym_from_token1] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
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
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [aux_sym_add_token1] = ACTIONS(520),
    [aux_sym_arg_token1] = ACTIONS(520),
    [aux_sym_cmd_token1] = ACTIONS(520),
    [aux_sym_copy_token1] = ACTIONS(520),
    [aux_sym_entrypoint_token1] = ACTIONS(520),
    [aux_sym_env_token1] = ACTIONS(520),
    [aux_sym_expose_token1] = ACTIONS(520),
    [aux_sym_from_token1] = ACTIONS(520),
    [anon_sym_COLON] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
    [aux_sym_healthcheck_token1] = ACTIONS(520),
    [aux_sym_label_token1] = ACTIONS(520),
    [aux_sym_maintainer_token1] = ACTIONS(520),
    [aux_sym_onbuild_token1] = ACTIONS(520),
    [aux_sym_run_token1] = ACTIONS(520),
    [aux_sym_shell_token1] = ACTIONS(520),
    [aux_sym_stopsignal_token1] = ACTIONS(520),
    [aux_sym_user_token1] = ACTIONS(520),
    [aux_sym_volume_token1] = ACTIONS(520),
    [aux_sym_workdir_token1] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(520),
    [sym__space_no_newline] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
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
  [142] = {
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
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [aux_sym_add_token1] = ACTIONS(485),
    [aux_sym_arg_token1] = ACTIONS(485),
    [aux_sym_cmd_token1] = ACTIONS(485),
    [aux_sym_copy_token1] = ACTIONS(485),
    [aux_sym_entrypoint_token1] = ACTIONS(485),
    [aux_sym_env_token1] = ACTIONS(485),
    [aux_sym_expose_token1] = ACTIONS(485),
    [aux_sym_from_token1] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(489),
    [aux_sym_healthcheck_token1] = ACTIONS(485),
    [aux_sym_label_token1] = ACTIONS(485),
    [aux_sym_maintainer_token1] = ACTIONS(485),
    [aux_sym_onbuild_token1] = ACTIONS(485),
    [aux_sym_run_token1] = ACTIONS(485),
    [aux_sym_shell_token1] = ACTIONS(485),
    [aux_sym_stopsignal_token1] = ACTIONS(485),
    [aux_sym_user_token1] = ACTIONS(485),
    [aux_sym_volume_token1] = ACTIONS(485),
    [aux_sym_workdir_token1] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(485),
    [sym__space_no_newline] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
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
    [aux_sym__anything_token1] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym_comment] = ACTIONS(501),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_env_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(473),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(469),
    [sym__space_no_newline] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [aux_sym_add_token1] = ACTIONS(541),
    [aux_sym_arg_token1] = ACTIONS(541),
    [aux_sym_cmd_token1] = ACTIONS(541),
    [aux_sym_copy_token1] = ACTIONS(541),
    [aux_sym_entrypoint_token1] = ACTIONS(541),
    [aux_sym_env_token1] = ACTIONS(541),
    [aux_sym_expose_token1] = ACTIONS(541),
    [aux_sym_from_token1] = ACTIONS(541),
    [anon_sym_AT] = ACTIONS(541),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(541),
    [sym__space_no_newline] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [aux_sym__anything] = STATE(153),
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
    [aux_sym_env_key_token1] = ACTIONS(549),
    [aux_sym__anything_token1] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [aux_sym__anything] = STATE(146),
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
    [aux_sym__anything_token1] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(553),
    [sym_comment] = ACTIONS(557),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [aux_sym_add_token1] = ACTIONS(559),
    [aux_sym_arg_token1] = ACTIONS(559),
    [aux_sym_cmd_token1] = ACTIONS(559),
    [aux_sym_copy_token1] = ACTIONS(559),
    [aux_sym_entrypoint_token1] = ACTIONS(559),
    [aux_sym_env_token1] = ACTIONS(559),
    [aux_sym_expose_token1] = ACTIONS(559),
    [aux_sym_from_token1] = ACTIONS(559),
    [anon_sym_AT] = ACTIONS(561),
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
    [sym__space_no_newline] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [aux_sym__anything] = STATE(153),
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
    [aux_sym__anything_token1] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
    [anon_sym_COLON] = ACTIONS(570),
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
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(469),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(469),
    [sym__space_no_newline] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
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
    [aux_sym_env_key_token1] = ACTIONS(580),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(580),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
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
    [sym__space_no_newline] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
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
    [aux_sym_env_key_token1] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(584),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(588),
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
    [aux_sym_env_key_token1] = ACTIONS(588),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(588),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [aux_sym_add_token1] = ACTIONS(592),
    [aux_sym_arg_token1] = ACTIONS(592),
    [anon_sym_EQ] = ACTIONS(594),
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
  [164] = {
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
    [aux_sym__anything_token1] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
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
    [sym__space_no_newline] = ACTIONS(598),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
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
    [aux_sym__anything_token1] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(551),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [aux_sym_add_token1] = ACTIONS(485),
    [aux_sym_arg_token1] = ACTIONS(485),
    [aux_sym_cmd_token1] = ACTIONS(485),
    [aux_sym_copy_token1] = ACTIONS(485),
    [aux_sym_entrypoint_token1] = ACTIONS(485),
    [aux_sym_env_token1] = ACTIONS(485),
    [aux_sym_expose_token1] = ACTIONS(485),
    [aux_sym_from_token1] = ACTIONS(485),
    [aux_sym_healthcheck_token1] = ACTIONS(485),
    [aux_sym_label_token1] = ACTIONS(485),
    [aux_sym_maintainer_token1] = ACTIONS(485),
    [aux_sym_onbuild_token1] = ACTIONS(485),
    [aux_sym_run_token1] = ACTIONS(485),
    [aux_sym_shell_token1] = ACTIONS(485),
    [aux_sym_stopsignal_token1] = ACTIONS(485),
    [aux_sym_user_token1] = ACTIONS(485),
    [aux_sym_volume_token1] = ACTIONS(485),
    [aux_sym_workdir_token1] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(485),
    [sym__space_no_newline] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
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
  [169] = {
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
  [170] = {
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
  [171] = {
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
    [aux_sym_env_key_token1] = ACTIONS(610),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(610),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
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
    [aux_sym_env_key_token1] = ACTIONS(614),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(614),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(618),
    [aux_sym_add_token1] = ACTIONS(618),
    [aux_sym_arg_token1] = ACTIONS(618),
    [aux_sym_cmd_token1] = ACTIONS(618),
    [aux_sym_copy_token1] = ACTIONS(618),
    [aux_sym_entrypoint_token1] = ACTIONS(618),
    [aux_sym_env_token1] = ACTIONS(618),
    [aux_sym_expose_token1] = ACTIONS(618),
    [aux_sym_from_token1] = ACTIONS(618),
    [anon_sym_COLON] = ACTIONS(618),
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
  [174] = {
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
    [sym__space_no_newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
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
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(620),
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
    [aux_sym_env_key_token1] = ACTIONS(620),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(620),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [aux_sym_add_token1] = ACTIONS(568),
    [aux_sym_arg_token1] = ACTIONS(568),
    [aux_sym_cmd_token1] = ACTIONS(568),
    [aux_sym_copy_token1] = ACTIONS(568),
    [aux_sym_entrypoint_token1] = ACTIONS(568),
    [aux_sym_env_token1] = ACTIONS(568),
    [aux_sym_expose_token1] = ACTIONS(568),
    [aux_sym_from_token1] = ACTIONS(568),
    [anon_sym_COLON] = ACTIONS(624),
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
  [178] = {
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
  [179] = {
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
  [180] = {
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
  [181] = {
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
  [182] = {
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
  [183] = {
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
  [184] = {
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
  [185] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
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
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [aux_sym_add_token1] = ACTIONS(433),
    [aux_sym_arg_token1] = ACTIONS(433),
    [aux_sym_cmd_token1] = ACTIONS(433),
    [aux_sym_copy_token1] = ACTIONS(433),
    [aux_sym_entrypoint_token1] = ACTIONS(433),
    [aux_sym_env_token1] = ACTIONS(433),
    [aux_sym_expose_token1] = ACTIONS(433),
    [aux_sym_from_token1] = ACTIONS(433),
    [aux_sym_healthcheck_token1] = ACTIONS(433),
    [aux_sym_label_token1] = ACTIONS(433),
    [aux_sym_maintainer_token1] = ACTIONS(433),
    [aux_sym_onbuild_token1] = ACTIONS(433),
    [aux_sym_run_token1] = ACTIONS(433),
    [aux_sym_shell_token1] = ACTIONS(433),
    [aux_sym_stopsignal_token1] = ACTIONS(433),
    [aux_sym_user_token1] = ACTIONS(433),
    [aux_sym_volume_token1] = ACTIONS(433),
    [aux_sym_workdir_token1] = ACTIONS(433),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(433),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
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
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
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
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(325),
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
    [aux_sym_volume_token1] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
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
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(271),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [207] = {
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
  [208] = {
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
  [209] = {
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
  [210] = {
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
  [211] = {
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
  [212] = {
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
  [213] = {
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
  [214] = {
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
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_add_token1] = ACTIONS(273),
    [aux_sym_arg_token1] = ACTIONS(273),
    [aux_sym_cmd_token1] = ACTIONS(273),
    [aux_sym_copy_token1] = ACTIONS(273),
    [aux_sym_entrypoint_token1] = ACTIONS(273),
    [aux_sym_env_token1] = ACTIONS(273),
    [aux_sym_expose_token1] = ACTIONS(273),
    [aux_sym_from_token1] = ACTIONS(273),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
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
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [aux_sym_add_token1] = ACTIONS(674),
    [aux_sym_arg_token1] = ACTIONS(674),
    [aux_sym_cmd_token1] = ACTIONS(674),
    [aux_sym_copy_token1] = ACTIONS(674),
    [aux_sym_entrypoint_token1] = ACTIONS(674),
    [aux_sym_env_token1] = ACTIONS(674),
    [aux_sym_expose_token1] = ACTIONS(674),
    [aux_sym_from_token1] = ACTIONS(674),
    [aux_sym_healthcheck_token1] = ACTIONS(674),
    [aux_sym_label_token1] = ACTIONS(674),
    [aux_sym_maintainer_token1] = ACTIONS(674),
    [aux_sym_onbuild_token1] = ACTIONS(674),
    [aux_sym_run_token1] = ACTIONS(674),
    [aux_sym_shell_token1] = ACTIONS(674),
    [aux_sym_stopsignal_token1] = ACTIONS(674),
    [aux_sym_user_token1] = ACTIONS(674),
    [aux_sym_volume_token1] = ACTIONS(674),
    [aux_sym_workdir_token1] = ACTIONS(674),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(674),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [aux_sym_add_token1] = ACTIONS(676),
    [aux_sym_arg_token1] = ACTIONS(676),
    [aux_sym_cmd_token1] = ACTIONS(676),
    [aux_sym_copy_token1] = ACTIONS(676),
    [aux_sym_entrypoint_token1] = ACTIONS(676),
    [aux_sym_env_token1] = ACTIONS(676),
    [aux_sym_expose_token1] = ACTIONS(676),
    [aux_sym_from_token1] = ACTIONS(676),
    [aux_sym_healthcheck_token1] = ACTIONS(676),
    [aux_sym_label_token1] = ACTIONS(676),
    [aux_sym_maintainer_token1] = ACTIONS(676),
    [aux_sym_onbuild_token1] = ACTIONS(676),
    [aux_sym_run_token1] = ACTIONS(676),
    [aux_sym_shell_token1] = ACTIONS(676),
    [aux_sym_stopsignal_token1] = ACTIONS(676),
    [aux_sym_user_token1] = ACTIONS(676),
    [aux_sym_volume_token1] = ACTIONS(676),
    [aux_sym_workdir_token1] = ACTIONS(676),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [219] = {
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
  [220] = {
    [sym_repository] = STATE(239),
    [sym__repository_start] = STATE(233),
    [sym_image] = STATE(120),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(678),
    [anon_sym_DOLLAR] = ACTIONS(680),
    [aux_sym_platform_token1] = ACTIONS(682),
    [aux_sym__repository_start_token1] = ACTIONS(680),
    [aux_sym__repository_start_token4] = ACTIONS(684),
    [aux_sym__repository_start_token6] = ACTIONS(684),
    [aux_sym__repository_start_token8] = ACTIONS(686),
    [aux_sym__repository_start_token10] = ACTIONS(686),
    [aux_sym__repository_start_token12] = ACTIONS(688),
    [aux_sym__repository_start_token14] = ACTIONS(688),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym__hc_interval] = STATE(224),
    [sym__hc_timeout] = STATE(224),
    [sym__hc_start_period] = STATE(224),
    [sym__hc_retries] = STATE(224),
    [sym__hc_options] = STATE(224),
    [sym__hc_command] = STATE(186),
    [aux_sym_healthcheck_repeat1] = STATE(224),
    [aux_sym_cmd_token1] = ACTIONS(690),
    [sym_hc_none] = ACTIONS(692),
    [anon_sym_DASH_DASHinterval] = ACTIONS(694),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(696),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(698),
    [anon_sym_DASH_DASHretires] = ACTIONS(700),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [222] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(198),
    [sym__port] = STATE(101),
    [sym_port] = STATE(101),
    [sym_port_range] = STATE(101),
    [sym__port_part] = STATE(76),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [223] = {
    [sym_repository] = STATE(244),
    [sym__repository_start] = STATE(233),
    [sym_image] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(680),
    [aux_sym_platform_token1] = ACTIONS(682),
    [aux_sym__repository_start_token1] = ACTIONS(680),
    [aux_sym__repository_start_token4] = ACTIONS(684),
    [aux_sym__repository_start_token6] = ACTIONS(684),
    [aux_sym__repository_start_token8] = ACTIONS(686),
    [aux_sym__repository_start_token10] = ACTIONS(686),
    [aux_sym__repository_start_token12] = ACTIONS(688),
    [aux_sym__repository_start_token14] = ACTIONS(688),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym__hc_interval] = STATE(225),
    [sym__hc_timeout] = STATE(225),
    [sym__hc_start_period] = STATE(225),
    [sym__hc_retries] = STATE(225),
    [sym__hc_options] = STATE(225),
    [sym__hc_command] = STATE(217),
    [aux_sym_healthcheck_repeat1] = STATE(225),
    [aux_sym_cmd_token1] = ACTIONS(690),
    [anon_sym_DASH_DASHinterval] = ACTIONS(694),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(696),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(698),
    [anon_sym_DASH_DASHretires] = ACTIONS(700),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [225] = {
    [sym__hc_interval] = STATE(225),
    [sym__hc_timeout] = STATE(225),
    [sym__hc_start_period] = STATE(225),
    [sym__hc_retries] = STATE(225),
    [sym__hc_options] = STATE(225),
    [aux_sym_healthcheck_repeat1] = STATE(225),
    [aux_sym_cmd_token1] = ACTIONS(704),
    [anon_sym_DASH_DASHinterval] = ACTIONS(706),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(709),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(712),
    [anon_sym_DASH_DASHretires] = ACTIONS(715),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [226] = {
    [sym__repository_continued] = STATE(227),
    [aux_sym_repository_repeat1] = STATE(227),
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
  [227] = {
    [sym__repository_continued] = STATE(227),
    [aux_sym_repository_repeat1] = STATE(227),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_platform_token1] = ACTIONS(736),
    [aux_sym__repository_start_token1] = ACTIONS(733),
    [aux_sym__repository_start_token4] = ACTIONS(739),
    [aux_sym__repository_start_token6] = ACTIONS(739),
    [aux_sym__repository_start_token8] = ACTIONS(742),
    [aux_sym__repository_start_token10] = ACTIONS(742),
    [aux_sym__repository_start_token12] = ACTIONS(745),
    [aux_sym__repository_start_token14] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_digest] = STATE(175),
    [anon_sym_sha256_COLON] = ACTIONS(748),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym_digest] = STATE(160),
    [anon_sym_sha256_COLON] = ACTIONS(760),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_digest] = STATE(156),
    [anon_sym_sha256_COLON] = ACTIONS(762),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_digest] = STATE(165),
    [anon_sym_sha256_COLON] = ACTIONS(764),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_digest] = STATE(170),
    [anon_sym_sha256_COLON] = ACTIONS(766),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym__repository_continued] = STATE(226),
    [aux_sym_repository_repeat1] = STATE(226),
    [anon_sym_DOLLAR] = ACTIONS(768),
    [aux_sym_platform_token1] = ACTIONS(771),
    [aux_sym__repository_start_token1] = ACTIONS(768),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(774),
    [aux_sym__repository_start_token8] = ACTIONS(777),
    [aux_sym__repository_start_token10] = ACTIONS(777),
    [aux_sym__repository_start_token12] = ACTIONS(780),
    [aux_sym__repository_start_token14] = ACTIONS(780),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_digest] = STATE(167),
    [anon_sym_sha256_COLON] = ACTIONS(783),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_as_name] = STATE(189),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym_digest] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_as_name] = STATE(210),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_digest] = STATE(160),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_image] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [aux_sym_platform_token1] = ACTIONS(797),
    [aux_sym__repository_start_token1] = ACTIONS(795),
    [aux_sym__repository_start_token4] = ACTIONS(799),
    [aux_sym__repository_start_token6] = ACTIONS(799),
    [aux_sym__repository_start_token8] = ACTIONS(801),
    [aux_sym__repository_start_token10] = ACTIONS(801),
    [aux_sym__repository_start_token12] = ACTIONS(803),
    [aux_sym__repository_start_token14] = ACTIONS(803),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_as_name] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_as_name] = STATE(216),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_as_name] = STATE(190),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_as_name] = STATE(204),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_image] = STATE(117),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [aux_sym_platform_token1] = ACTIONS(797),
    [aux_sym__repository_start_token1] = ACTIONS(795),
    [aux_sym__repository_start_token4] = ACTIONS(799),
    [aux_sym__repository_start_token6] = ACTIONS(799),
    [aux_sym__repository_start_token8] = ACTIONS(801),
    [aux_sym__repository_start_token10] = ACTIONS(801),
    [aux_sym__repository_start_token12] = ACTIONS(803),
    [aux_sym__repository_start_token14] = ACTIONS(803),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_as_name] = STATE(192),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_as_name] = STATE(214),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_tag] = STATE(143),
    [anon_sym_DOLLAR] = ACTIONS(805),
    [aux_sym_platform_token1] = ACTIONS(807),
    [aux_sym__repository_start_token1] = ACTIONS(805),
    [aux_sym__repository_start_token4] = ACTIONS(809),
    [aux_sym__repository_start_token6] = ACTIONS(809),
    [aux_sym__repository_start_token8] = ACTIONS(811),
    [aux_sym__repository_start_token10] = ACTIONS(811),
    [aux_sym__repository_start_token12] = ACTIONS(813),
    [aux_sym__repository_start_token14] = ACTIONS(813),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_digest] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_tag] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(805),
    [aux_sym_platform_token1] = ACTIONS(807),
    [aux_sym__repository_start_token1] = ACTIONS(805),
    [aux_sym__repository_start_token4] = ACTIONS(809),
    [aux_sym__repository_start_token6] = ACTIONS(809),
    [aux_sym__repository_start_token8] = ACTIONS(811),
    [aux_sym__repository_start_token10] = ACTIONS(811),
    [aux_sym__repository_start_token12] = ACTIONS(813),
    [aux_sym__repository_start_token14] = ACTIONS(813),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_digest] = STATE(170),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_digest] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_tag] = STATE(142),
    [anon_sym_DOLLAR] = ACTIONS(805),
    [aux_sym_platform_token1] = ACTIONS(807),
    [aux_sym__repository_start_token1] = ACTIONS(805),
    [aux_sym__repository_start_token4] = ACTIONS(809),
    [aux_sym__repository_start_token6] = ACTIONS(809),
    [aux_sym__repository_start_token8] = ACTIONS(811),
    [aux_sym__repository_start_token10] = ACTIONS(811),
    [aux_sym__repository_start_token12] = ACTIONS(813),
    [aux_sym__repository_start_token14] = ACTIONS(813),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_digest] = STATE(158),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [aux_sym_platform_token1] = ACTIONS(752),
    [aux_sym__repository_start_token1] = ACTIONS(750),
    [aux_sym__repository_start_token4] = ACTIONS(754),
    [aux_sym__repository_start_token6] = ACTIONS(754),
    [aux_sym__repository_start_token8] = ACTIONS(756),
    [aux_sym__repository_start_token10] = ACTIONS(756),
    [aux_sym__repository_start_token12] = ACTIONS(758),
    [aux_sym__repository_start_token14] = ACTIONS(758),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_as_name] = STATE(196),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [aux_sym_platform_token1] = ACTIONS(787),
    [aux_sym__repository_start_token1] = ACTIONS(785),
    [aux_sym__repository_start_token4] = ACTIONS(789),
    [aux_sym__repository_start_token6] = ACTIONS(789),
    [aux_sym__repository_start_token8] = ACTIONS(791),
    [aux_sym__repository_start_token10] = ACTIONS(791),
    [aux_sym__repository_start_token12] = ACTIONS(793),
    [aux_sym__repository_start_token14] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [sym_tag] = STATE(152),
    [anon_sym_DOLLAR] = ACTIONS(805),
    [aux_sym_platform_token1] = ACTIONS(807),
    [aux_sym__repository_start_token1] = ACTIONS(805),
    [aux_sym__repository_start_token4] = ACTIONS(809),
    [aux_sym__repository_start_token6] = ACTIONS(809),
    [aux_sym__repository_start_token8] = ACTIONS(811),
    [aux_sym__repository_start_token10] = ACTIONS(811),
    [aux_sym__repository_start_token12] = ACTIONS(813),
    [aux_sym__repository_start_token14] = ACTIONS(813),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
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
    [sym__port_spec] = STATE(441),
    [sym_mapped_port] = STATE(441),
    [sym__port] = STATE(416),
    [sym_port] = STATE(413),
    [sym_port_range] = STATE(413),
    [sym__port_part] = STATE(380),
    [anon_sym_DQUOTE] = ACTIONS(827),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [aux_sym__port_part_token1] = ACTIONS(831),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym_platform_token1] = ACTIONS(835),
    [aux_sym__repository_start_token1] = ACTIONS(833),
    [aux_sym__repository_start_token4] = ACTIONS(833),
    [aux_sym__repository_start_token6] = ACTIONS(833),
    [aux_sym__repository_start_token8] = ACTIONS(833),
    [aux_sym__repository_start_token10] = ACTIONS(833),
    [aux_sym__repository_start_token12] = ACTIONS(833),
    [aux_sym__repository_start_token14] = ACTIONS(833),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
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
  [263] = {
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
  [264] = {
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
  [265] = {
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
  [266] = {
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
  [267] = {
    [sym__chown] = STATE(278),
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(853),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(855),
  },
  [268] = {
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
  [269] = {
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
  [270] = {
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
    [anon_sym_DOLLAR] = ACTIONS(869),
    [aux_sym_platform_token1] = ACTIONS(871),
    [aux_sym__repository_start_token1] = ACTIONS(869),
    [aux_sym__repository_start_token4] = ACTIONS(869),
    [aux_sym__repository_start_token6] = ACTIONS(869),
    [aux_sym__repository_start_token8] = ACTIONS(869),
    [aux_sym__repository_start_token10] = ACTIONS(869),
    [aux_sym__repository_start_token12] = ACTIONS(869),
    [aux_sym__repository_start_token14] = ACTIONS(869),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(59),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(873),
  },
  [274] = {
    [sym__port] = STATE(433),
    [sym_port] = STATE(433),
    [sym_port_range] = STATE(433),
    [sym__port_part] = STATE(380),
    [anon_sym_DQUOTE] = ACTIONS(827),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [aux_sym__port_part_token1] = ACTIONS(831),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym__port] = STATE(178),
    [sym_port] = STATE(178),
    [sym_port_range] = STATE(178),
    [sym__port_part] = STATE(76),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [sym__port] = STATE(116),
    [sym_port] = STATE(116),
    [sym_port_range] = STATE(116),
    [sym__port_part] = STATE(76),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(47),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(877),
  },
  [278] = {
    [sym_path] = STATE(78),
    [aux_sym__paths] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [aux_sym_path_token1] = ACTIONS(267),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym_chown] = STATE(352),
    [sym_user_name] = STATE(302),
    [sym_user_id] = STATE(303),
    [anon_sym_DOLLAR] = ACTIONS(879),
    [aux_sym_user_name_token1] = ACTIONS(881),
    [aux_sym_user_id_token1] = ACTIONS(883),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [aux_sym__repository_start_repeat2] = STATE(324),
    [anon_sym_SLASH] = ACTIONS(885),
    [aux_sym__repository_start_token3] = ACTIONS(887),
    [aux_sym__repository_start_token4] = ACTIONS(889),
    [aux_sym__repository_start_token7] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [281] = {
    [aux_sym__repository_start_repeat1] = STATE(299),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_SLASH] = ACTIONS(893),
    [aux_sym__repository_start_token2] = ACTIONS(891),
    [aux_sym__repository_start_token3] = ACTIONS(895),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [282] = {
    [aux_sym__repository_start_repeat4] = STATE(326),
    [anon_sym_SLASH] = ACTIONS(885),
    [aux_sym__repository_start_token3] = ACTIONS(887),
    [aux_sym__repository_start_token12] = ACTIONS(897),
    [aux_sym__repository_start_token15] = ACTIONS(897),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [283] = {
    [sym_template_expr_less_than_equals] = STATE(502),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [sym_template_expr_less_than_equals] = STATE(525),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [sym_template_expr_less_than_equals] = STATE(519),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [286] = {
    [sym_template_expr_less_than_equals] = STATE(513),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [287] = {
    [sym_port] = STATE(504),
    [sym_port_range] = STATE(504),
    [sym__port_part] = STATE(380),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [aux_sym__port_part_token1] = ACTIONS(831),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_port_protocol] = STATE(401),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(901),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [aux_sym__repository_start_repeat3] = STATE(325),
    [anon_sym_SLASH] = ACTIONS(885),
    [aux_sym__repository_start_token3] = ACTIONS(887),
    [aux_sym__repository_start_token8] = ACTIONS(903),
    [aux_sym__repository_start_token11] = ACTIONS(903),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [290] = {
    [sym_variable_default_value] = STATE(539),
    [sym_variable_this_or_null] = STATE(539),
    [anon_sym_RBRACE] = ACTIONS(905),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [sym_variable_default_value] = STATE(537),
    [sym_variable_this_or_null] = STATE(537),
    [anon_sym_RBRACE] = ACTIONS(911),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [anon_sym_DQUOTE] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [anon_sym_DOLLAR] = ACTIONS(604),
    [aux_sym_path_token1] = ACTIONS(913),
    [aux_sym_path_token2] = ACTIONS(913),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [anon_sym_DQUOTE] = ACTIONS(618),
    [anon_sym_COLON] = ACTIONS(618),
    [anon_sym_DOLLAR] = ACTIONS(618),
    [aux_sym_path_token1] = ACTIONS(915),
    [aux_sym_path_token2] = ACTIONS(915),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [sym_variable_default_value] = STATE(535),
    [sym_variable_this_or_null] = STATE(535),
    [anon_sym_RBRACE] = ACTIONS(917),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [sym_variable_default_value] = STATE(533),
    [sym_variable_this_or_null] = STATE(533),
    [anon_sym_RBRACE] = ACTIONS(919),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [aux_sym_path_repeat2] = STATE(296),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [anon_sym_DOLLAR] = ACTIONS(923),
    [aux_sym_path_token3] = ACTIONS(926),
    [aux_sym_path_token4] = ACTIONS(928),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_variable_default_value] = STATE(531),
    [sym_variable_this_or_null] = STATE(531),
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [sym_variable_default_value] = STATE(529),
    [sym_variable_this_or_null] = STATE(529),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [aux_sym__repository_start_repeat1] = STATE(323),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_SLASH] = ACTIONS(885),
    [aux_sym__repository_start_token2] = ACTIONS(891),
    [aux_sym__repository_start_token3] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [sym_variable_default_value] = STATE(527),
    [sym_variable_this_or_null] = STATE(527),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [sym_port_protocol] = STATE(377),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(901),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [anon_sym_DQUOTE] = ACTIONS(937),
    [anon_sym_COLON] = ACTIONS(939),
    [anon_sym_DOLLAR] = ACTIONS(937),
    [aux_sym_path_token1] = ACTIONS(941),
    [aux_sym_path_token2] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [anon_sym_DQUOTE] = ACTIONS(937),
    [anon_sym_COLON] = ACTIONS(943),
    [anon_sym_DOLLAR] = ACTIONS(937),
    [aux_sym_path_token1] = ACTIONS(941),
    [aux_sym_path_token2] = ACTIONS(941),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [sym_variable_default_value] = STATE(522),
    [sym_variable_this_or_null] = STATE(522),
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [sym_port] = STATE(464),
    [sym_port_range] = STATE(464),
    [sym__port_part] = STATE(380),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [aux_sym__port_part_token1] = ACTIONS(831),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [sym_template_expr_less_than_equals] = STATE(447),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(337),
    [aux_sym__repository_start_token13] = ACTIONS(947),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(949),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(949),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(949),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [sym_variable_default_value] = STATE(516),
    [sym_variable_this_or_null] = STATE(516),
    [anon_sym_RBRACE] = ACTIONS(951),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [aux_sym_path_repeat2] = STATE(296),
    [anon_sym_DQUOTE] = ACTIONS(953),
    [anon_sym_DOLLAR] = ACTIONS(955),
    [aux_sym_path_token3] = ACTIONS(957),
    [aux_sym_path_token4] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_path] = STATE(207),
    [anon_sym_DQUOTE] = ACTIONS(961),
    [anon_sym_DOLLAR] = ACTIONS(963),
    [aux_sym_path_token1] = ACTIONS(965),
    [aux_sym_path_token2] = ACTIONS(967),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_user_name] = STATE(155),
    [sym_user_id] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(969),
    [aux_sym_user_name_token1] = ACTIONS(971),
    [aux_sym_user_id_token1] = ACTIONS(973),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [aux_sym_path_repeat2] = STATE(296),
    [anon_sym_DQUOTE] = ACTIONS(975),
    [anon_sym_DOLLAR] = ACTIONS(955),
    [aux_sym_path_token3] = ACTIONS(977),
    [aux_sym_path_token4] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [sym_variable_default_value] = STATE(509),
    [sym_variable_this_or_null] = STATE(509),
    [anon_sym_RBRACE] = ACTIONS(979),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [aux_sym_path_repeat2] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(981),
    [anon_sym_DOLLAR] = ACTIONS(955),
    [aux_sym_path_token3] = ACTIONS(983),
    [aux_sym_path_token4] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_template_expr_less_than_equals] = STATE(478),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [sym_template_expr_less_than_equals] = STATE(483),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [317] = {
    [sym_hc_command] = STATE(211),
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(209),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(985),
  },
  [318] = {
    [aux_sym_cmd_token1] = ACTIONS(987),
    [anon_sym_DASH_DASHinterval] = ACTIONS(987),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(987),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(987),
    [anon_sym_DASH_DASHretires] = ACTIONS(987),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_cmd_token1] = ACTIONS(989),
    [anon_sym_DASH_DASHinterval] = ACTIONS(989),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(989),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(989),
    [anon_sym_DASH_DASHretires] = ACTIONS(989),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym_cmd_token1] = ACTIONS(991),
    [anon_sym_DASH_DASHinterval] = ACTIONS(991),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(991),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(991),
    [anon_sym_DASH_DASHretires] = ACTIONS(991),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_cmd_token1] = ACTIONS(993),
    [anon_sym_DASH_DASHinterval] = ACTIONS(993),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(993),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(993),
    [anon_sym_DASH_DASHretires] = ACTIONS(993),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [aux_sym_cmd_token1] = ACTIONS(995),
    [anon_sym_DASH_DASHinterval] = ACTIONS(995),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(995),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(995),
    [anon_sym_DASH_DASHretires] = ACTIONS(995),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [aux_sym__repository_start_repeat1] = STATE(323),
    [anon_sym_DOLLAR] = ACTIONS(997),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token2] = ACTIONS(997),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [aux_sym__repository_start_repeat2] = STATE(330),
    [anon_sym_SLASH] = ACTIONS(1000),
    [aux_sym__repository_start_token3] = ACTIONS(1002),
    [aux_sym__repository_start_token4] = ACTIONS(889),
    [aux_sym__repository_start_token7] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [aux_sym__repository_start_repeat3] = STATE(332),
    [anon_sym_SLASH] = ACTIONS(1000),
    [aux_sym__repository_start_token3] = ACTIONS(1002),
    [aux_sym__repository_start_token8] = ACTIONS(903),
    [aux_sym__repository_start_token11] = ACTIONS(903),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [326] = {
    [aux_sym__repository_start_repeat4] = STATE(336),
    [anon_sym_SLASH] = ACTIONS(1000),
    [aux_sym__repository_start_token3] = ACTIONS(1002),
    [aux_sym__repository_start_token12] = ACTIONS(897),
    [aux_sym__repository_start_token15] = ACTIONS(897),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [aux_sym_cmd_token1] = ACTIONS(1004),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1004),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1004),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1004),
    [anon_sym_DASH_DASHretires] = ACTIONS(1004),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_cmd_token1] = ACTIONS(1006),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1006),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1006),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1006),
    [anon_sym_DASH_DASHretires] = ACTIONS(1006),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [aux_sym_cmd_token1] = ACTIONS(1008),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1008),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1008),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1008),
    [anon_sym_DASH_DASHretires] = ACTIONS(1008),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [aux_sym__repository_start_repeat2] = STATE(330),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token3] = ACTIONS(152),
    [aux_sym__repository_start_token4] = ACTIONS(1010),
    [aux_sym__repository_start_token7] = ACTIONS(1010),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [331] = {
    [sym_template_expr_less_than_equals] = STATE(540),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [aux_sym__repository_start_repeat3] = STATE(332),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token8] = ACTIONS(1013),
    [aux_sym__repository_start_token11] = ACTIONS(1013),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [aux_sym_path_repeat2] = STATE(312),
    [anon_sym_DQUOTE] = ACTIONS(1016),
    [anon_sym_DOLLAR] = ACTIONS(955),
    [aux_sym_path_token3] = ACTIONS(1018),
    [aux_sym_path_token4] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [sym_variable_default_value] = STATE(520),
    [sym_variable_this_or_null] = STATE(520),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [anon_sym_COLON_DASH] = ACTIONS(907),
    [anon_sym_COLON_PLUS] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [sym_template_expr_less_than_equals] = STATE(550),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [336] = {
    [aux_sym__repository_start_repeat4] = STATE(336),
    [anon_sym_SLASH] = ACTIONS(143),
    [aux_sym__repository_start_token3] = ACTIONS(145),
    [aux_sym__repository_start_token12] = ACTIONS(1022),
    [aux_sym__repository_start_token15] = ACTIONS(1022),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(337),
    [aux_sym__repository_start_token13] = ACTIONS(1025),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1027),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1027),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1027),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_template_expr_less_than_equals] = STATE(460),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(307),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(899),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token12] = ACTIONS(195),
    [aux_sym__repository_start_token15] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [aux_sym__labels] = STATE(103),
    [sym_label_pair] = STATE(103),
    [sym_label_key] = STATE(425),
    [aux_sym_env_key_token1] = ACTIONS(423),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [anon_sym_DQUOTE] = ACTIONS(921),
    [anon_sym_DOLLAR] = ACTIONS(921),
    [aux_sym_path_token3] = ACTIONS(926),
    [aux_sym_path_token4] = ACTIONS(926),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token1] = ACTIONS(193),
    [aux_sym_path_token2] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_path_token1] = ACTIONS(209),
    [aux_sym_path_token2] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_path_token1] = ACTIONS(189),
    [aux_sym_path_token2] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token3] = ACTIONS(193),
    [aux_sym_path_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_path_token3] = ACTIONS(209),
    [aux_sym_path_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [aux_sym_path_token3] = ACTIONS(189),
    [aux_sym_path_token4] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(218),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1030),
  },
  [352] = {
    [anon_sym_DQUOTE] = ACTIONS(1032),
    [anon_sym_DOLLAR] = ACTIONS(1032),
    [aux_sym_path_token1] = ACTIONS(1034),
    [aux_sym_path_token2] = ACTIONS(1034),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [aux_sym__repository_start_token11] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [354] = {
    [sym_env_value] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(1036),
    [aux_sym_env_value_token1] = ACTIONS(1038),
    [aux_sym_env_value_token2] = ACTIONS(1038),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [355] = {
    [anon_sym_DQUOTE] = ACTIONS(664),
    [anon_sym_DOLLAR] = ACTIONS(664),
    [aux_sym_path_token1] = ACTIONS(1040),
    [aux_sym_path_token2] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [anon_sym_DQUOTE] = ACTIONS(1042),
    [anon_sym_DOLLAR] = ACTIONS(1042),
    [aux_sym_path_token1] = ACTIONS(1044),
    [aux_sym_path_token2] = ACTIONS(1044),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [anon_sym_DQUOTE] = ACTIONS(660),
    [anon_sym_DOLLAR] = ACTIONS(660),
    [aux_sym_path_token1] = ACTIONS(1046),
    [aux_sym_path_token2] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(213),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1052),
  },
  [363] = {
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [364] = {
    [aux_sym__anything] = STATE(149),
    [sym__anything_or_json_array] = STATE(194),
    [aux_sym__anything_token1] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1054),
  },
  [365] = {
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token2] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [aux_sym__env_pairs] = STATE(100),
    [sym_env_pair] = STATE(100),
    [sym_env_key] = STATE(137),
    [aux_sym_env_key_token1] = ACTIONS(411),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [sym_label_value] = STATE(161),
    [anon_sym_DQUOTE] = ACTIONS(1056),
    [aux_sym_env_value_token1] = ACTIONS(1058),
    [aux_sym_label_value_token1] = ACTIONS(1058),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [sym_signal_name] = STATE(199),
    [sym_signal_num] = ACTIONS(1060),
    [aux_sym_signal_name_token1] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [sym__port_part] = STATE(102),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym__port_part_token1] = ACTIONS(125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [anon_sym_DOLLAR] = ACTIONS(1064),
    [aux_sym_path_token3] = ACTIONS(1066),
    [aux_sym_path_token4] = ACTIONS(1068),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [sym_docker_variable] = STATE(66),
    [anon_sym_LBRACE] = ACTIONS(1070),
    [sym__docker_variable] = ACTIONS(1072),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [sym_docker_variable] = STATE(91),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym__docker_variable] = ACTIONS(1076),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [sym__port_part] = STATE(408),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [aux_sym__port_part_token1] = ACTIONS(831),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym_env_value_repeat1] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(1078),
    [aux_sym_env_value_token3] = ACTIONS(1080),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [sym_docker_variable] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [376] = {
    [sym_docker_variable] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(1086),
    [sym__docker_variable] = ACTIONS(1088),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [aux_sym_env_value_repeat1] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(1090),
    [aux_sym_env_value_token3] = ACTIONS(1092),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [sym_docker_variable] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(1095),
    [sym__docker_variable] = ACTIONS(1097),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [sym_docker_variable] = STATE(333),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [382] = {
    [sym_docker_variable] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym__docker_variable] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [383] = {
    [sym_docker_variable] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [384] = {
    [sym_docker_variable] = STATE(344),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [sym_docker_variable] = STATE(398),
    [anon_sym_LBRACE] = ACTIONS(1095),
    [sym__docker_variable] = ACTIONS(1097),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [sym_docker_variable] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [388] = {
    [sym_docker_variable] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [389] = {
    [anon_sym_DOLLAR] = ACTIONS(1121),
    [aux_sym_path_token3] = ACTIONS(1123),
    [aux_sym_path_token4] = ACTIONS(1125),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [sym_docker_variable] = STATE(63),
    [anon_sym_LBRACE] = ACTIONS(1070),
    [sym__docker_variable] = ACTIONS(1072),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [391] = {
    [sym_docker_variable] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [sym_platform] = STATE(223),
    [anon_sym_DOLLAR] = ACTIONS(1127),
    [aux_sym_platform_token1] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [393] = {
    [sym_docker_variable] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym__docker_variable] = ACTIONS(1076),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [sym_docker_variable] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(1131),
    [sym__docker_variable] = ACTIONS(1133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [sym_docker_variable] = STATE(314),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [396] = {
    [anon_sym_DOLLAR] = ACTIONS(1135),
    [aux_sym_port_protocol_token1] = ACTIONS(1137),
    [aux_sym_port_protocol_token2] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [sym_docker_variable] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(1086),
    [sym__docker_variable] = ACTIONS(1088),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [398] = {
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_docker_variable] = STATE(365),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [sym_docker_variable] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym__docker_variable] = ACTIONS(1076),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [401] = {
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym_docker_variable] = STATE(361),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [403] = {
    [sym_docker_variable] = STATE(24),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym__docker_variable] = ACTIONS(1076),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [404] = {
    [sym_docker_variable] = STATE(127),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym__docker_variable] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [405] = {
    [sym_docker_variable] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym__docker_variable] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [406] = {
    [aux_sym_env_value_repeat1] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(1143),
    [aux_sym_env_value_token3] = ACTIONS(1080),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [407] = {
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [aux_sym_env_value_repeat1] = STATE(406),
    [aux_sym_env_value_token3] = ACTIONS(1145),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [410] = {
    [aux_sym__anything] = STATE(129),
    [aux_sym__anything_token1] = ACTIONS(1147),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [sym_user_group_id] = STATE(357),
    [aux_sym_user_id_token1] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(431),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_DQUOTE] = ACTIONS(1151),
    [anon_sym_COLON] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [aux_sym__anything] = STATE(151),
    [aux_sym__anything_token1] = ACTIONS(1156),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_hc_start_period] = STATE(320),
    [aux_sym_hc_interval_token1] = ACTIONS(1158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(1160),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym_env_value_repeat1] = STATE(374),
    [aux_sym_env_value_token3] = ACTIONS(1162),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [418] = {
    [sym_hc_interval] = STATE(328),
    [aux_sym_hc_interval_token1] = ACTIONS(1164),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_hc_timeout] = STATE(322),
    [aux_sym_hc_interval_token1] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_hc_retries] = STATE(318),
    [aux_sym__port_part_token1] = ACTIONS(1168),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_user_group] = STATE(205),
    [aux_sym_user_name_token1] = ACTIONS(1170),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_user_group_id] = STATE(205),
    [aux_sym_user_id_token1] = ACTIONS(1172),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_user_group] = STATE(357),
    [aux_sym_user_name_token1] = ACTIONS(1174),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym_signal_name_token2] = ACTIONS(1176),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [aux_sym_label_pair_token1] = ACTIONS(1178),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [aux_sym_label_pair_token1] = ACTIONS(1180),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_EQ] = ACTIONS(1182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym__docker_variable] = ACTIONS(1184),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [429] = {
    [anon_sym_EQ] = ACTIONS(1186),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_DQUOTE] = ACTIONS(1188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [aux_sym__repository_start_token5] = ACTIONS(1190),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym_arg_default] = ACTIONS(1192),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [433] = {
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1194),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1196),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [aux_sym_from_token2] = ACTIONS(1198),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [anon_sym_EQ] = ACTIONS(1200),
    [sym__space] = ACTIONS(5),
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
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1204),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_DQUOTE] = ACTIONS(1208),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [sym_template_expr_percent_signs] = ACTIONS(1210),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [443] = {
    [sym_template_expr_curly_braces] = ACTIONS(1212),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [444] = {
    [aux_sym_from_token2] = ACTIONS(1214),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [aux_sym__repository_start_token9] = ACTIONS(1218),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym__repository_start_token13] = ACTIONS(1220),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [aux_sym_from_token2] = ACTIONS(1222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1224),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [sym_template_expr_curly_braces] = ACTIONS(1226),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [451] = {
    [sym_template_expr_percent_signs] = ACTIONS(1228),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [452] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1230),
  },
  [453] = {
    [anon_sym_SLASH] = ACTIONS(1232),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym_template_expr_curly_braces] = ACTIONS(1234),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [455] = {
    [sym_template_expr_percent_signs] = ACTIONS(1236),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [456] = {
    [aux_sym_from_token2] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [aux_sym_from_token2] = ACTIONS(1242),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [aux_sym__repository_start_token5] = ACTIONS(1244),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [aux_sym__repository_start_token13] = ACTIONS(1246),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [aux_sym__repository_start_token9] = ACTIONS(1248),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [aux_sym__repository_start_token5] = ACTIONS(1250),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_SLASH] = ACTIONS(1252),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [anon_sym_DQUOTE] = ACTIONS(1254),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [aux_sym__repository_start_token5] = ACTIONS(1256),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [aux_sym__repository_start_token9] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym_arg_name] = ACTIONS(1260),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [ts_builtin_sym_end] = ACTIONS(1262),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1268),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1270),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1276),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1278),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym_from_token2] = ACTIONS(1280),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym__repository_start_token13] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym_from_token2] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [aux_sym__repository_start_token5] = ACTIONS(1288),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [aux_sym__repository_start_token9] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [aux_sym__repository_start_token13] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [sym_template_expr_percent_signs] = ACTIONS(1294),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [485] = {
    [sym_template_expr_curly_braces] = ACTIONS(1296),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [486] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1300),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1304),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [sym_template_expr_curly_braces] = ACTIONS(1310),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [493] = {
    [sym_template_expr_percent_signs] = ACTIONS(1312),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [494] = {
    [sym_template_expr_curly_braces] = ACTIONS(1314),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [495] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1316),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1318),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1320),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [sym_template_expr_percent_signs] = ACTIONS(1322),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [499] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [anon_sym_DQUOTE] = ACTIONS(1326),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_SLASH] = ACTIONS(1000),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [aux_sym__repository_start_token13] = ACTIONS(1328),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [anon_sym_DQUOTE] = ACTIONS(975),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [anon_sym_DQUOTE] = ACTIONS(1330),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym__repository_start_token9] = ACTIONS(1332),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1334),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [507] = {
    [anon_sym_DQUOTE] = ACTIONS(953),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [aux_sym__repository_start_token5] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_RBRACE] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_DQUOTE] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym__repository_start_token5] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [aux_sym__repository_start_token9] = ACTIONS(1344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [aux_sym__repository_start_token13] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1348),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [515] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1350),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_RBRACE] = ACTIONS(1352),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [aux_sym__repository_start_token5] = ACTIONS(1354),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [aux_sym__repository_start_token9] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [aux_sym__repository_start_token13] = ACTIONS(1358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [aux_sym_from_token2] = ACTIONS(1362),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(1364),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [aux_sym__repository_start_token5] = ACTIONS(1366),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [aux_sym__repository_start_token9] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [aux_sym__repository_start_token13] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [aux_sym_from_token2] = ACTIONS(1372),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [sym_template_expr_curly_braces] = ACTIONS(1376),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [529] = {
    [anon_sym_RBRACE] = ACTIONS(1378),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [anon_sym_RBRACE] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [anon_sym_RBRACE] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [anon_sym_RBRACE] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_RBRACE] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [anon_sym_DQUOTE] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_RBRACE] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_SLASH] = ACTIONS(885),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_RBRACE] = ACTIONS(1392),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [sym_template_expr_percent_signs] = ACTIONS(1394),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [539] = {
    [anon_sym_RBRACE] = ACTIONS(1396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [aux_sym__repository_start_token13] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [aux_sym__repository_start_token9] = ACTIONS(1400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [sym__docker_variable] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [543] = {
    [aux_sym__repository_start_token5] = ACTIONS(1404),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [sym_template_expr_curly_braces] = ACTIONS(1406),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [545] = {
    [sym_template_expr_percent_signs] = ACTIONS(1408),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [546] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1410),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [sym__docker_variable] = ACTIONS(1412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [548] = {
    [sym_template_expr_curly_braces] = ACTIONS(1414),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [549] = {
    [sym_template_expr_percent_signs] = ACTIONS(1416),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [550] = {
    [aux_sym__repository_start_token13] = ACTIONS(1418),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [sym__docker_variable] = ACTIONS(1420),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [552] = {
    [sym_template_expr_curly_braces] = ACTIONS(1422),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [553] = {
    [sym_template_expr_percent_signs] = ACTIONS(1424),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [554] = {
    [aux_sym__repository_start_token9] = ACTIONS(1426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [sym__docker_variable] = ACTIONS(1428),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [556] = {
    [sym__docker_variable] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [557] = {
    [sym__docker_variable] = ACTIONS(1432),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [558] = {
    [sym__docker_variable] = ACTIONS(1434),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [559] = {
    [sym__docker_variable] = ACTIONS(1436),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [560] = {
    [sym__docker_variable] = ACTIONS(1438),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [561] = {
    [sym__docker_variable] = ACTIONS(1440),
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
  [11] = {.count = 1, .reusable = true}, SHIFT(497),
  [13] = {.count = 1, .reusable = true}, SHIFT(496),
  [15] = {.count = 1, .reusable = true}, SHIFT(495),
  [17] = {.count = 1, .reusable = true}, SHIFT(491),
  [19] = {.count = 1, .reusable = true}, SHIFT(490),
  [21] = {.count = 1, .reusable = true}, SHIFT(489),
  [23] = {.count = 1, .reusable = true}, SHIFT(488),
  [25] = {.count = 1, .reusable = true}, SHIFT(487),
  [27] = {.count = 1, .reusable = true}, SHIFT(486),
  [29] = {.count = 1, .reusable = true}, SHIFT(476),
  [31] = {.count = 1, .reusable = true}, SHIFT(475),
  [33] = {.count = 1, .reusable = true}, SHIFT(474),
  [35] = {.count = 1, .reusable = true}, SHIFT(473),
  [37] = {.count = 1, .reusable = true}, SHIFT(472),
  [39] = {.count = 1, .reusable = true}, SHIFT(471),
  [41] = {.count = 1, .reusable = true}, SHIFT(470),
  [43] = {.count = 1, .reusable = true}, SHIFT(469),
  [45] = {.count = 1, .reusable = true}, SHIFT(179),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(445),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(497),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(496),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(495),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(491),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(490),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(489),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(488),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(487),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(486),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(476),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(475),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(474),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(473),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(472),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(471),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(470),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(469),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(179),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(260),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(391),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(31),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(260),
  [123] = {.count = 1, .reusable = true}, SHIFT(391),
  [125] = {.count = 1, .reusable = true}, SHIFT(31),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(403),
  [133] = {.count = 1, .reusable = true}, SHIFT(259),
  [135] = {.count = 1, .reusable = false}, SHIFT(90),
  [137] = {.count = 1, .reusable = true}, SHIFT(528),
  [139] = {.count = 1, .reusable = true}, SHIFT(538),
  [141] = {.count = 1, .reusable = true}, SHIFT(283),
  [143] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(283),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [152] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(528),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(263),
  [163] = {.count = 1, .reusable = false}, SHIFT(75),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [169] = {.count = 1, .reusable = true}, SHIFT(261),
  [171] = {.count = 1, .reusable = false}, SHIFT(85),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(403),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(538),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(545),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(286),
  [217] = {.count = 1, .reusable = true}, SHIFT(388),
  [219] = {.count = 1, .reusable = false}, SHIFT(134),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(396),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(388),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [230] = {.count = 1, .reusable = true}, SHIFT(544),
  [232] = {.count = 1, .reusable = false}, SHIFT(130),
  [234] = {.count = 1, .reusable = true}, SHIFT(286),
  [236] = {.count = 1, .reusable = false}, SHIFT(125),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(544),
  [241] = {.count = 1, .reusable = true}, SHIFT(545),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [247] = {.count = 1, .reusable = false}, SHIFT(144),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [253] = {.count = 1, .reusable = false}, SHIFT(141),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [259] = {.count = 1, .reusable = false}, SHIFT(148),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 4),
  [263] = {.count = 1, .reusable = true}, SHIFT(389),
  [265] = {.count = 1, .reusable = true}, SHIFT(390),
  [267] = {.count = 1, .reusable = false}, SHIFT(80),
  [269] = {.count = 1, .reusable = false}, SHIFT(390),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(371),
  [280] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(371),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(389),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(390),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(80),
  [298] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(390),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(371),
  [305] = {.count = 1, .reusable = false}, SHIFT(79),
  [307] = {.count = 1, .reusable = false}, SHIFT(371),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [313] = {.count = 1, .reusable = false}, SHIFT(84),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [321] = {.count = 1, .reusable = false}, SHIFT(174),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [333] = {.count = 1, .reusable = true}, SHIFT(265),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [339] = {.count = 1, .reusable = true}, SHIFT(369),
  [341] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [343] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [345] = {.count = 1, .reusable = false}, SHIFT(111),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [355] = {.count = 1, .reusable = false}, SHIFT(157),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [365] = {.count = 1, .reusable = true}, SHIFT(264),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [373] = {.count = 1, .reusable = false}, SHIFT(154),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [383] = {.count = 1, .reusable = false}, SHIFT(191),
  [385] = {.count = 1, .reusable = true}, SHIFT(552),
  [387] = {.count = 1, .reusable = true}, SHIFT(553),
  [389] = {.count = 1, .reusable = true}, SHIFT(397),
  [391] = {.count = 1, .reusable = false}, SHIFT(184),
  [393] = {.count = 1, .reusable = false}, SHIFT(397),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(284),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(553),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(552),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(404),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [411] = {.count = 1, .reusable = true}, SHIFT(138),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [415] = {.count = 1, .reusable = true}, SHIFT(276),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [423] = {.count = 1, .reusable = true}, SHIFT(426),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(397),
  [428] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(397),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [437] = {.count = 1, .reusable = false}, SHIFT(202),
  [439] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs, 2),
  [441] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs, 2),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym__env_pairs, 2), SHIFT_REPEAT(138),
  [446] = {.count = 1, .reusable = false}, SHIFT(185),
  [448] = {.count = 1, .reusable = true}, SHIFT(404),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [452] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(426),
  [457] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [459] = {.count = 1, .reusable = true}, SHIFT(284),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [465] = {.count = 1, .reusable = false}, SHIFT(219),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [471] = {.count = 1, .reusable = true}, SHIFT(252),
  [473] = {.count = 1, .reusable = true}, SHIFT(228),
  [475] = {.count = 1, .reusable = false}, SHIFT(521),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [479] = {.count = 1, .reusable = true}, SHIFT(247),
  [481] = {.count = 1, .reusable = true}, SHIFT(234),
  [483] = {.count = 1, .reusable = false}, SHIFT(456),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [487] = {.count = 1, .reusable = true}, SHIFT(255),
  [489] = {.count = 1, .reusable = true}, SHIFT(229),
  [491] = {.count = 1, .reusable = false}, SHIFT(526),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [497] = {.count = 1, .reusable = false}, SHIFT(150),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [501] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(150),
  [506] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 1),
  [512] = {.count = 1, .reusable = true}, SHIFT(354),
  [514] = {.count = 1, .reusable = false}, SHIFT(410),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [522] = {.count = 1, .reusable = true}, SHIFT(249),
  [524] = {.count = 1, .reusable = true}, SHIFT(230),
  [526] = {.count = 1, .reusable = false}, SHIFT(480),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [530] = {.count = 1, .reusable = true}, SHIFT(232),
  [532] = {.count = 1, .reusable = false}, SHIFT(458),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(166),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [547] = {.count = 1, .reusable = false}, SHIFT(164),
  [549] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [551] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [555] = {.count = 1, .reusable = false}, SHIFT(166),
  [557] = {.count = 1, .reusable = false}, SHIFT(180),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [561] = {.count = 1, .reusable = true}, SHIFT(231),
  [563] = {.count = 1, .reusable = false}, SHIFT(477),
  [565] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(164),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [570] = {.count = 1, .reusable = true}, SHIFT(421),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [578] = {.count = 1, .reusable = false}, SHIFT(436),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 3),
  [582] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 3),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [594] = {.count = 1, .reusable = true}, SHIFT(432),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [598] = {.count = 1, .reusable = false}, SHIFT(448),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [608] = {.count = 1, .reusable = false}, SHIFT(444),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [624] = {.count = 1, .reusable = true}, SHIFT(422),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 4),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [678] = {.count = 1, .reusable = true}, SHIFT(392),
  [680] = {.count = 1, .reusable = true}, SHIFT(393),
  [682] = {.count = 1, .reusable = false}, SHIFT(70),
  [684] = {.count = 1, .reusable = true}, SHIFT(443),
  [686] = {.count = 1, .reusable = true}, SHIFT(442),
  [688] = {.count = 1, .reusable = true}, SHIFT(306),
  [690] = {.count = 1, .reusable = true}, SHIFT(439),
  [692] = {.count = 1, .reusable = true}, SHIFT(186),
  [694] = {.count = 1, .reusable = true}, SHIFT(438),
  [696] = {.count = 1, .reusable = true}, SHIFT(437),
  [698] = {.count = 1, .reusable = true}, SHIFT(429),
  [700] = {.count = 1, .reusable = true}, SHIFT(427),
  [702] = {.count = 1, .reusable = true}, SHIFT(275),
  [704] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(438),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(437),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(429),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(427),
  [718] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(383),
  [721] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(453),
  [724] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(454),
  [727] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(455),
  [730] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(316),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(383),
  [736] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(453),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(454),
  [742] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(455),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(316),
  [748] = {.count = 1, .reusable = true}, SHIFT(236),
  [750] = {.count = 1, .reusable = true}, SHIFT(372),
  [752] = {.count = 1, .reusable = false}, SHIFT(168),
  [754] = {.count = 1, .reusable = true}, SHIFT(494),
  [756] = {.count = 1, .reusable = true}, SHIFT(498),
  [758] = {.count = 1, .reusable = true}, SHIFT(331),
  [760] = {.count = 1, .reusable = true}, SHIFT(248),
  [762] = {.count = 1, .reusable = true}, SHIFT(238),
  [764] = {.count = 1, .reusable = true}, SHIFT(250),
  [766] = {.count = 1, .reusable = true}, SHIFT(253),
  [768] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(383),
  [771] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(453),
  [774] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(454),
  [777] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(455),
  [780] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(316),
  [783] = {.count = 1, .reusable = true}, SHIFT(251),
  [785] = {.count = 1, .reusable = true}, SHIFT(382),
  [787] = {.count = 1, .reusable = false}, SHIFT(212),
  [789] = {.count = 1, .reusable = true}, SHIFT(485),
  [791] = {.count = 1, .reusable = true}, SHIFT(484),
  [793] = {.count = 1, .reusable = true}, SHIFT(338),
  [795] = {.count = 1, .reusable = true}, SHIFT(387),
  [797] = {.count = 1, .reusable = false}, SHIFT(139),
  [799] = {.count = 1, .reusable = true}, SHIFT(450),
  [801] = {.count = 1, .reusable = true}, SHIFT(451),
  [803] = {.count = 1, .reusable = true}, SHIFT(315),
  [805] = {.count = 1, .reusable = true}, SHIFT(400),
  [807] = {.count = 1, .reusable = false}, SHIFT(145),
  [809] = {.count = 1, .reusable = true}, SHIFT(492),
  [811] = {.count = 1, .reusable = true}, SHIFT(493),
  [813] = {.count = 1, .reusable = true}, SHIFT(335),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [827] = {.count = 1, .reusable = true}, SHIFT(305),
  [829] = {.count = 1, .reusable = true}, SHIFT(379),
  [831] = {.count = 1, .reusable = true}, SHIFT(301),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [853] = {.count = 1, .reusable = true}, SHIFT(279),
  [855] = {.count = 1, .reusable = true}, SHIFT(215),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [873] = {.count = 1, .reusable = true}, SHIFT(200),
  [875] = {.count = 1, .reusable = true}, SHIFT(287),
  [877] = {.count = 1, .reusable = true}, SHIFT(203),
  [879] = {.count = 1, .reusable = true}, SHIFT(402),
  [881] = {.count = 1, .reusable = true}, SHIFT(293),
  [883] = {.count = 1, .reusable = true}, SHIFT(292),
  [885] = {.count = 1, .reusable = true}, SHIFT(269),
  [887] = {.count = 1, .reusable = false}, SHIFT(501),
  [889] = {.count = 1, .reusable = true}, SHIFT(548),
  [891] = {.count = 1, .reusable = true}, SHIFT(399),
  [893] = {.count = 1, .reusable = true}, SHIFT(268),
  [895] = {.count = 1, .reusable = false}, SHIFT(536),
  [897] = {.count = 1, .reusable = true}, SHIFT(285),
  [899] = {.count = 1, .reusable = true}, SHIFT(307),
  [901] = {.count = 1, .reusable = true}, SHIFT(385),
  [903] = {.count = 1, .reusable = true}, SHIFT(549),
  [905] = {.count = 1, .reusable = true}, SHIFT(118),
  [907] = {.count = 1, .reusable = true}, SHIFT(506),
  [909] = {.count = 1, .reusable = true}, SHIFT(514),
  [911] = {.count = 1, .reusable = true}, SHIFT(359),
  [913] = {.count = 1, .reusable = false}, REDUCE(sym_user_id, 1),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym_user_name, 1),
  [917] = {.count = 1, .reusable = true}, SHIFT(55),
  [919] = {.count = 1, .reusable = true}, SHIFT(270),
  [921] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(384),
  [926] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [928] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(384),
  [931] = {.count = 1, .reusable = true}, SHIFT(342),
  [933] = {.count = 1, .reusable = true}, SHIFT(346),
  [935] = {.count = 1, .reusable = true}, SHIFT(349),
  [937] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [939] = {.count = 1, .reusable = true}, SHIFT(423),
  [941] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 1),
  [943] = {.count = 1, .reusable = true}, SHIFT(411),
  [945] = {.count = 1, .reusable = true}, SHIFT(128),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [949] = {.count = 1, .reusable = true}, SHIFT(337),
  [951] = {.count = 1, .reusable = true}, SHIFT(25),
  [953] = {.count = 1, .reusable = true}, SHIFT(197),
  [955] = {.count = 1, .reusable = true}, SHIFT(384),
  [957] = {.count = 1, .reusable = false}, SHIFT(510),
  [959] = {.count = 1, .reusable = false}, SHIFT(384),
  [961] = {.count = 1, .reusable = true}, SHIFT(370),
  [963] = {.count = 1, .reusable = true}, SHIFT(376),
  [965] = {.count = 1, .reusable = false}, SHIFT(183),
  [967] = {.count = 1, .reusable = false}, SHIFT(376),
  [969] = {.count = 1, .reusable = true}, SHIFT(375),
  [971] = {.count = 1, .reusable = true}, SHIFT(173),
  [973] = {.count = 1, .reusable = true}, SHIFT(169),
  [975] = {.count = 1, .reusable = true}, SHIFT(92),
  [977] = {.count = 1, .reusable = false}, SHIFT(534),
  [979] = {.count = 1, .reusable = true}, SHIFT(46),
  [981] = {.count = 1, .reusable = true}, SHIFT(185),
  [983] = {.count = 1, .reusable = false}, SHIFT(507),
  [985] = {.count = 1, .reusable = true}, SHIFT(209),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [991] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [995] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [997] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(399),
  [1000] = {.count = 1, .reusable = true}, SHIFT(258),
  [1002] = {.count = 1, .reusable = false}, SHIFT(463),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1006] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [1010] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(548),
  [1013] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(549),
  [1016] = {.count = 1, .reusable = true}, SHIFT(84),
  [1018] = {.count = 1, .reusable = false}, SHIFT(503),
  [1020] = {.count = 1, .reusable = true}, SHIFT(86),
  [1022] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(285),
  [1025] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [1027] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(337),
  [1030] = {.count = 1, .reusable = true}, SHIFT(218),
  [1032] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 2),
  [1034] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 2),
  [1036] = {.count = 1, .reusable = false}, SHIFT(409),
  [1038] = {.count = 1, .reusable = true}, SHIFT(171),
  [1040] = {.count = 1, .reusable = false}, REDUCE(sym_user_group, 1),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1044] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 3),
  [1046] = {.count = 1, .reusable = false}, REDUCE(sym_user_group_id, 1),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1050] = {.count = 1, .reusable = false}, REDUCE(sym_chown, 2),
  [1052] = {.count = 1, .reusable = true}, SHIFT(213),
  [1054] = {.count = 1, .reusable = true}, SHIFT(194),
  [1056] = {.count = 1, .reusable = false}, SHIFT(417),
  [1058] = {.count = 1, .reusable = true}, SHIFT(162),
  [1060] = {.count = 1, .reusable = true}, SHIFT(199),
  [1062] = {.count = 1, .reusable = true}, SHIFT(424),
  [1064] = {.count = 1, .reusable = true}, SHIFT(395),
  [1066] = {.count = 1, .reusable = false}, SHIFT(500),
  [1068] = {.count = 1, .reusable = false}, SHIFT(395),
  [1070] = {.count = 1, .reusable = true}, SHIFT(428),
  [1072] = {.count = 1, .reusable = true}, SHIFT(87),
  [1074] = {.count = 1, .reusable = true}, SHIFT(547),
  [1076] = {.count = 1, .reusable = true}, SHIFT(19),
  [1078] = {.count = 1, .reusable = true}, SHIFT(176),
  [1080] = {.count = 1, .reusable = true}, SHIFT(378),
  [1082] = {.count = 1, .reusable = true}, SHIFT(542),
  [1084] = {.count = 1, .reusable = true}, SHIFT(61),
  [1086] = {.count = 1, .reusable = true}, SHIFT(551),
  [1088] = {.count = 1, .reusable = true}, SHIFT(131),
  [1090] = {.count = 1, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2),
  [1092] = {.count = 2, .reusable = true}, REDUCE(aux_sym_env_value_repeat1, 2), SHIFT_REPEAT(378),
  [1095] = {.count = 1, .reusable = true}, SHIFT(557),
  [1097] = {.count = 1, .reusable = true}, SHIFT(343),
  [1099] = {.count = 1, .reusable = true}, SHIFT(373),
  [1101] = {.count = 1, .reusable = true}, SHIFT(555),
  [1103] = {.count = 1, .reusable = true}, SHIFT(350),
  [1105] = {.count = 1, .reusable = true}, SHIFT(561),
  [1107] = {.count = 1, .reusable = true}, SHIFT(119),
  [1109] = {.count = 1, .reusable = true}, SHIFT(560),
  [1111] = {.count = 1, .reusable = true}, SHIFT(363),
  [1113] = {.count = 1, .reusable = true}, SHIFT(386),
  [1115] = {.count = 1, .reusable = true}, SHIFT(407),
  [1117] = {.count = 1, .reusable = true}, SHIFT(559),
  [1119] = {.count = 1, .reusable = true}, SHIFT(54),
  [1121] = {.count = 1, .reusable = true}, SHIFT(381),
  [1123] = {.count = 1, .reusable = false}, SHIFT(430),
  [1125] = {.count = 1, .reusable = false}, SHIFT(381),
  [1127] = {.count = 1, .reusable = true}, SHIFT(394),
  [1129] = {.count = 1, .reusable = true}, SHIFT(266),
  [1131] = {.count = 1, .reusable = true}, SHIFT(558),
  [1133] = {.count = 1, .reusable = true}, SHIFT(256),
  [1135] = {.count = 1, .reusable = true}, SHIFT(405),
  [1137] = {.count = 1, .reusable = true}, SHIFT(68),
  [1139] = {.count = 1, .reusable = true}, SHIFT(556),
  [1141] = {.count = 1, .reusable = true}, SHIFT(347),
  [1143] = {.count = 1, .reusable = true}, SHIFT(159),
  [1145] = {.count = 1, .reusable = true}, SHIFT(406),
  [1147] = {.count = 1, .reusable = true}, SHIFT(150),
  [1149] = {.count = 1, .reusable = true}, SHIFT(358),
  [1151] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(105),
  [1154] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1156] = {.count = 1, .reusable = true}, SHIFT(166),
  [1158] = {.count = 1, .reusable = true}, SHIFT(321),
  [1160] = {.count = 1, .reusable = true}, SHIFT(274),
  [1162] = {.count = 1, .reusable = true}, SHIFT(374),
  [1164] = {.count = 1, .reusable = true}, SHIFT(329),
  [1166] = {.count = 1, .reusable = true}, SHIFT(327),
  [1168] = {.count = 1, .reusable = true}, SHIFT(319),
  [1170] = {.count = 1, .reusable = true}, SHIFT(208),
  [1172] = {.count = 1, .reusable = true}, SHIFT(206),
  [1174] = {.count = 1, .reusable = true}, SHIFT(355),
  [1176] = {.count = 1, .reusable = true}, SHIFT(181),
  [1178] = {.count = 1, .reusable = true}, SHIFT(367),
  [1180] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1182] = {.count = 1, .reusable = true}, SHIFT(420),
  [1184] = {.count = 1, .reusable = true}, SHIFT(334),
  [1186] = {.count = 1, .reusable = true}, SHIFT(415),
  [1188] = {.count = 1, .reusable = true}, SHIFT(79),
  [1190] = {.count = 1, .reusable = true}, SHIFT(48),
  [1192] = {.count = 1, .reusable = true}, SHIFT(187),
  [1194] = {.count = 1, .reusable = true}, SHIFT(240),
  [1196] = {.count = 1, .reusable = true}, SHIFT(242),
  [1198] = {.count = 1, .reusable = true}, SHIFT(434),
  [1200] = {.count = 1, .reusable = true}, SHIFT(419),
  [1202] = {.count = 1, .reusable = true}, SHIFT(418),
  [1204] = {.count = 1, .reusable = true}, SHIFT(317),
  [1206] = {.count = 1, .reusable = true}, SHIFT(245),
  [1208] = {.count = 1, .reusable = true}, SHIFT(136),
  [1210] = {.count = 1, .reusable = true}, SHIFT(446),
  [1212] = {.count = 1, .reusable = true}, SHIFT(459),
  [1214] = {.count = 1, .reusable = true}, SHIFT(435),
  [1216] = {.count = 1, .reusable = true}, SHIFT(277),
  [1218] = {.count = 1, .reusable = true}, SHIFT(9),
  [1220] = {.count = 1, .reusable = true}, SHIFT(10),
  [1222] = {.count = 1, .reusable = true}, SHIFT(440),
  [1224] = {.count = 1, .reusable = true}, SHIFT(254),
  [1226] = {.count = 1, .reusable = true}, SHIFT(465),
  [1228] = {.count = 1, .reusable = true}, SHIFT(466),
  [1230] = {.count = 1, .reusable = true}, SHIFT(195),
  [1232] = {.count = 1, .reusable = true}, SHIFT(271),
  [1234] = {.count = 1, .reusable = true}, SHIFT(481),
  [1236] = {.count = 1, .reusable = true}, SHIFT(482),
  [1238] = {.count = 1, .reusable = true}, SHIFT(499),
  [1240] = {.count = 1, .reusable = true}, SHIFT(243),
  [1242] = {.count = 1, .reusable = true}, SHIFT(449),
  [1244] = {.count = 1, .reusable = true}, SHIFT(8),
  [1246] = {.count = 1, .reusable = true}, SHIFT(112),
  [1248] = {.count = 1, .reusable = true}, SHIFT(94),
  [1250] = {.count = 1, .reusable = true}, SHIFT(93),
  [1252] = {.count = 1, .reusable = true}, SHIFT(257),
  [1254] = {.count = 1, .reusable = true}, SHIFT(412),
  [1256] = {.count = 1, .reusable = true}, SHIFT(32),
  [1258] = {.count = 1, .reusable = true}, SHIFT(37),
  [1260] = {.count = 1, .reusable = true}, SHIFT(163),
  [1262] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1264] = {.count = 1, .reusable = true}, SHIFT(310),
  [1266] = {.count = 1, .reusable = true}, SHIFT(273),
  [1268] = {.count = 1, .reusable = true}, SHIFT(311),
  [1270] = {.count = 1, .reusable = true}, SHIFT(368),
  [1272] = {.count = 1, .reusable = true}, SHIFT(452),
  [1274] = {.count = 1, .reusable = true}, SHIFT(364),
  [1276] = {.count = 1, .reusable = true}, SHIFT(6),
  [1278] = {.count = 1, .reusable = true}, SHIFT(414),
  [1280] = {.count = 1, .reusable = true}, SHIFT(457),
  [1282] = {.count = 1, .reusable = true}, SHIFT(34),
  [1284] = {.count = 1, .reusable = true}, SHIFT(241),
  [1286] = {.count = 1, .reusable = true}, SHIFT(546),
  [1288] = {.count = 1, .reusable = true}, SHIFT(280),
  [1290] = {.count = 1, .reusable = true}, SHIFT(289),
  [1292] = {.count = 1, .reusable = true}, SHIFT(282),
  [1294] = {.count = 1, .reusable = true}, SHIFT(461),
  [1296] = {.count = 1, .reusable = true}, SHIFT(462),
  [1298] = {.count = 1, .reusable = true}, SHIFT(340),
  [1300] = {.count = 1, .reusable = true}, SHIFT(221),
  [1302] = {.count = 1, .reusable = true}, SHIFT(220),
  [1304] = {.count = 1, .reusable = true}, SHIFT(222),
  [1306] = {.count = 1, .reusable = true}, SHIFT(366),
  [1308] = {.count = 1, .reusable = true}, SHIFT(362),
  [1310] = {.count = 1, .reusable = true}, SHIFT(431),
  [1312] = {.count = 1, .reusable = true}, SHIFT(554),
  [1314] = {.count = 1, .reusable = true}, SHIFT(543),
  [1316] = {.count = 1, .reusable = true}, SHIFT(267),
  [1318] = {.count = 1, .reusable = true}, SHIFT(351),
  [1320] = {.count = 1, .reusable = true}, SHIFT(467),
  [1322] = {.count = 1, .reusable = true}, SHIFT(541),
  [1324] = {.count = 1, .reusable = true}, SHIFT(237),
  [1326] = {.count = 1, .reusable = true}, SHIFT(184),
  [1328] = {.count = 1, .reusable = true}, SHIFT(21),
  [1330] = {.count = 1, .reusable = true}, SHIFT(105),
  [1332] = {.count = 1, .reusable = true}, SHIFT(22),
  [1334] = {.count = 1, .reusable = true}, SHIFT(532),
  [1336] = {.count = 1, .reusable = true}, SHIFT(23),
  [1338] = {.count = 1, .reusable = true}, SHIFT(57),
  [1340] = {.count = 1, .reusable = true}, SHIFT(201),
  [1342] = {.count = 1, .reusable = true}, SHIFT(42),
  [1344] = {.count = 1, .reusable = true}, SHIFT(53),
  [1346] = {.count = 1, .reusable = true}, SHIFT(41),
  [1348] = {.count = 1, .reusable = true}, SHIFT(530),
  [1350] = {.count = 1, .reusable = true}, SHIFT(246),
  [1352] = {.count = 1, .reusable = true}, SHIFT(20),
  [1354] = {.count = 1, .reusable = true}, SHIFT(356),
  [1356] = {.count = 1, .reusable = true}, SHIFT(353),
  [1358] = {.count = 1, .reusable = true}, SHIFT(339),
  [1360] = {.count = 1, .reusable = true}, SHIFT(77),
  [1362] = {.count = 1, .reusable = true}, SHIFT(479),
  [1364] = {.count = 1, .reusable = true}, SHIFT(126),
  [1366] = {.count = 1, .reusable = true}, SHIFT(124),
  [1368] = {.count = 1, .reusable = true}, SHIFT(122),
  [1370] = {.count = 1, .reusable = true}, SHIFT(121),
  [1372] = {.count = 1, .reusable = true}, SHIFT(515),
  [1374] = {.count = 1, .reusable = true}, SHIFT(348),
  [1376] = {.count = 1, .reusable = true}, SHIFT(508),
  [1378] = {.count = 1, .reusable = true}, SHIFT(345),
  [1380] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1382] = {.count = 1, .reusable = true}, SHIFT(341),
  [1384] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1386] = {.count = 1, .reusable = true}, SHIFT(262),
  [1388] = {.count = 1, .reusable = true}, SHIFT(69),
  [1390] = {.count = 1, .reusable = true}, SHIFT(56),
  [1392] = {.count = 1, .reusable = true}, SHIFT(360),
  [1394] = {.count = 1, .reusable = true}, SHIFT(505),
  [1396] = {.count = 1, .reusable = true}, SHIFT(133),
  [1398] = {.count = 1, .reusable = true}, SHIFT(74),
  [1400] = {.count = 1, .reusable = true}, SHIFT(72),
  [1402] = {.count = 1, .reusable = true}, SHIFT(313),
  [1404] = {.count = 1, .reusable = true}, SHIFT(71),
  [1406] = {.count = 1, .reusable = true}, SHIFT(511),
  [1408] = {.count = 1, .reusable = true}, SHIFT(512),
  [1410] = {.count = 1, .reusable = true}, SHIFT(235),
  [1412] = {.count = 1, .reusable = true}, SHIFT(308),
  [1414] = {.count = 1, .reusable = true}, SHIFT(517),
  [1416] = {.count = 1, .reusable = true}, SHIFT(518),
  [1418] = {.count = 1, .reusable = true}, SHIFT(50),
  [1420] = {.count = 1, .reusable = true}, SHIFT(304),
  [1422] = {.count = 1, .reusable = true}, SHIFT(523),
  [1424] = {.count = 1, .reusable = true}, SHIFT(524),
  [1426] = {.count = 1, .reusable = true}, SHIFT(49),
  [1428] = {.count = 1, .reusable = true}, SHIFT(300),
  [1430] = {.count = 1, .reusable = true}, SHIFT(298),
  [1432] = {.count = 1, .reusable = true}, SHIFT(297),
  [1434] = {.count = 1, .reusable = true}, SHIFT(295),
  [1436] = {.count = 1, .reusable = true}, SHIFT(294),
  [1438] = {.count = 1, .reusable = true}, SHIFT(291),
  [1440] = {.count = 1, .reusable = true}, SHIFT(290),
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
